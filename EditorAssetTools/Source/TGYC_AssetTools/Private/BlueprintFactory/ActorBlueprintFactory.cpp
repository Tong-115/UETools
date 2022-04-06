// Fill out your copyright notice in the Description page of Project Settings.


#include "BlueprintFactory/ActorBlueprintFactory.h"
#include "BlueprintUtils.h"
#include "PackageUtils.h"
#include "Kismet/KismetStringLibrary.h"
#include "AssetRegistry/IAssetRegistry.h"
#include "UObject/NoExportTypes.h"
#include "Kismet2/BlueprintEditorUtils.h"


UActorBlueprintFactory::UActorBlueprintFactory()
{
	UActorBlueprintFactory::InitData();
}

//重点是导入蓝图数据 跟资产数据在这 注意每次装备完进行清空
void UActorBlueprintFactory::MakeBlueprintFactoryData(UBlueprint* makebp, TArray<FString> PackageData)
{
	Super::MakeBlueprintFactoryData(makebp, PackageData);
	p_actorblueprintfactorydata.Get()->makebp = makebp;
	MakeBlueprintFactoryMetaData_Component(PackageData);
	MakeBlueprintFactoryMetaData_Property(PackageData);
}

void UActorBlueprintFactory::MakeBlueprintFactoryMetaData_Property(TArray<FString>& MetaData)
{
}

// Json的数据还是在外部修改 最后还是分为字符串
void UActorBlueprintFactory::MakeBlueprintFactoryMetaData_Component(TArray<FString>& MetaData)
{

	for (auto Item : MetaData)
	{
		//是否为组件类型数据
		if (!UKismetStringLibrary::Contains(Item, "#")) { continue; }

		FString listone; //#
		FString makeclass; //组件类型
		FString compname; //组件预设名称
		FString assetpathname; //组件资产路径
		FString attachto; //组件资产依赖命名

		//内部字符串判别 请输入这种 注意不要留空格 
		//#:StaticMeshComponent,Name:Staticmesh1,AttachTo:Root;Package:pathname1,pathname2
		FString left;
		FString right;
		//读取组件类型
		UKismetStringLibrary::Split(Item, ",", left, right);
		UKismetStringLibrary::Split(left, ":", listone, makeclass);

		auto findmakeclass = p_actorblueprintfactorydata.Get()->make_compdata.Find(makeclass);
		if (!*findmakeclass)
		{
			UE_LOG(LogTemp, Error, TEXT("当前不存在这种装配类型 %s"), *makeclass);
			break;
		}

		UKismetStringLibrary::Split(right, ",", left, right);
		UKismetStringLibrary::Split(left, ":", left, compname);
		UKismetStringLibrary::Split(right, ";", left, right);
		UKismetStringLibrary::Split(left, ":", left, attachto);
		UKismetStringLibrary::Split(right, ":", left, right);
		//此处的right是复合的资产路径 取,进行分割
		UKismetStringLibrary::Split(left, ":", left, right);

		TArray<FAssetData> packagedata;
		FMakeComponentData readydata;

		packagedata = UPackageUtils::GetInstance().GetPackageDataForString(GetPathNameForString(right));

		readydata.componentclass = *findmakeclass;
		readydata.componentname = compname;
		readydata.attachtoname = *attachto;
		readydata.packagedata = packagedata;

		p_actorblueprintfactorydata.Get()->makecomponentdata.Add(readydata);

	}

}

//初始化组件装配映射数据
void UActorBlueprintFactory::InitData()
{
	Super::InitData();
	if (!p_actorblueprintfactorydata)
	{
		p_actorblueprintfactorydata = MakeShared<FActorBlueprintFactoryData>();
		TArray<UClass*> result;
		GetDerivedClasses(UActorComponent::StaticClass(), result, true);
		for (auto item : result)
		{
			p_actorblueprintfactorydata.Get()->make_compdata.Add(item->GetName(), item);
		}
	}
}

void UActorBlueprintFactory::MakeBeginPlay()
{	
	//目标蓝图不存在 退出装配
	UBlueprint* blueprint = p_actorblueprintfactorydata.Get()->makebp;
	if (!blueprint)
	{
		return;
	}
	for (auto item : p_actorblueprintfactorydata.Get()->makecomponentdata)
	{
		UActorComponent* NewComponent = UBlueprintUtils::GetInstance().AddBlueprintComponent(blueprint,item.componentclass,*item.componentname,item.attachtoname,false);
		if (NewComponent != nullptr)
		{
			UBlueprintUtils::GetInstance().SetBlueprintComponentAssets(NewComponent,item.packagedata);
		}
	}
	FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(blueprint);
}

void UActorBlueprintFactory::MakeOver()
{
	ResetData();
}

void UActorBlueprintFactory::ResetData()
{
	Super::ResetData();
	if (p_actorblueprintfactorydata.Get())
	{
		//注意清空目标蓝图
		p_actorblueprintfactorydata.Get()->makebp = nullptr;
		p_actorblueprintfactorydata.Get()->makecomponentdata.Empty();
		p_actorblueprintfactorydata.Get()->blacklistComp.Empty();
	}
}

TArray<FString> UActorBlueprintFactory::GetPathNameForString(FString allpathname)
{
	///pathname1,pathname2,pathname3
	TArray<FString> name;
	FString left = allpathname;
	FString right;
	while (true)
	{
		UKismetStringLibrary::Split(left, ",", left, right);
		name.Add(left);
		//如果右边的字符串不包含，说明见底了 避免末尾存在，
		if (!UKismetStringLibrary::Contains(right, ","))
		{
			if (!UKismetStringLibrary::EqualEqual_StrStr(right, ""))
			{
				name.Add(right);
			}
			break;
		}
		else
		{
			left = right;
		}
	}

	return name;
}
