// Fill out your copyright notice in the Description page of Project Settings.


#include "BlueprintUtils.h"
#include "KismetCompilerModule.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "Engine/SCS_Node.h"
#include "GameFramework/PawnMovementComponent.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "BlueprintFactory/BaseFactory.h"
#include "BlueprintFactory/ActorBlueprintFactory.h"
#include "Kismet/KismetStringLibrary.h"
#include "GroomComponent.h"
#include "Engine/GameViewportClient.h"
#include "LevelEditorViewport.h"

UBlueprintUtils* UBlueprintUtils::s_blueprintutils = nullptr;

UBlueprintUtils::UBlueprintUtils()
{
	MakeBlueprintFactory(AActor::StaticClass(), UActorBlueprintFactory::StaticClass());
}


UBlueprintUtils* UBlueprintUtils::GetBlueprintUtilsPtr()
{
	if (s_blueprintutils == nullptr)
	{
		GetInstance();
	}
	return s_blueprintutils;
}

UBlueprintUtils& UBlueprintUtils::GetInstance()
{
	if (s_blueprintutils == nullptr)
	{
		s_blueprintutils = NewObject<UBlueprintUtils>();
		s_blueprintutils->AddToRoot();
	}
	return *s_blueprintutils;
}

UBlueprint* UBlueprintUtils::CastToBlueprint(UObject* taggetobj)
{
	UBlueprint* blueprint = nullptr;
	if (taggetobj)
	{
		blueprint = Cast<UBlueprint>(taggetobj);
	}
	return blueprint;
}

UBlueprint* UBlueprintUtils::CreateBlueprint(UClass* ParentClass, const FString& FoldersPath,const FName& BlueprintName)
{
	UClass* OutBlueprintClass = nullptr;
	UClass* BlueprintGeneratedClass = nullptr;
	UBlueprint* Blueprint = nullptr;
	//加载模块
	IKismetCompilerInterface& KismetCompilerModule = FModuleManager::LoadModuleChecked<IKismetCompilerInterface>(
		"KismetCompiler");
	//从类型反射出蓝图类型
	KismetCompilerModule.GetBlueprintTypesForClass(ParentClass, OutBlueprintClass, BlueprintGeneratedClass);
	//资产路径
	FString PackageName = FoldersPath + "/" + BlueprintName.ToString();

	UPackage* Package = CreatePackage(NULL, *PackageName);
	if (Package)
	{
		//蓝图的外部对象是pack路径
		Blueprint = FKismetEditorUtilities::CreateBlueprint(ParentClass, Package, BlueprintName, BPTYPE_Normal,
		                                                    OutBlueprintClass, BlueprintGeneratedClass);
		//资源注册处注册这个资产
		FAssetRegistryModule::AssetCreated(Blueprint);
		//标记脏包
		Package->MarkPackageDirty();
	}
	return Blueprint;
}

TArray<UActorComponent*> UBlueprintUtils::GetBlueprintownCompForClass(UBlueprint* targetbp,TSubclassOf<UActorComponent> findclass)
{
	TArray<UActorComponent*> returnval;

	if (targetbp)
	{
		for (auto item : targetbp->SimpleConstructionScript->GetAllNodes())
		{
			if (item->ComponentClass->IsChildOf(findclass))
			{
				returnval.Add(item->ComponentTemplate);
			}
		}
	}
	return returnval;
}

UActorComponent* UBlueprintUtils::GetBlueprintownCompForName(UBlueprint* targetbp, FString compname)
{
	UActorComponent* targetcomp = nullptr;
	if (targetbp)
	{
		auto nodes = targetbp->SimpleConstructionScript->GetAllNodes();
		for (auto item : nodes)
		{
			if (UKismetStringLibrary::Contains(item->ComponentTemplate->GetName(), compname))
			{
				targetcomp = item->ComponentTemplate;
			}
		}
	}
	return targetcomp;
}


void UBlueprintUtils::MakeBlueprintFactory(UClass* bpParentClass, TSubclassOf<UBaseFactory> bpfactory)
{
	if (bpParentClass != nullptr)
	{
		FStaticConstructObjectParameters Params(bpfactory);
		Params.Outer = bpfactory->GetClass()->GetDefaultObject();
		UBaseFactory* item = Cast<UBaseFactory>(StaticConstructObject_Internal(Params));
		if (!bf_makedata.Find(bpParentClass))
		{
			bf_makedata.Add(bpParentClass, item);
		}
	}
}


bool UBlueprintUtils::MakeBlueprintBegin(UBlueprint* blueprint, TArray<FString> makedata)
{
	if (!blueprint) { return false; }
	UClass* ParentClass = blueprint->ParentClass;
	UBaseFactory* item = *bf_makedata.Find(ParentClass);
	//是否存在对应父类所使用的制作工厂 有则进行调用对应工厂
	if (item)
	{
		item->MakeBlueprintFactoryData(blueprint, makedata);
		item->MakeBeginPlay();
		item->MakeOver();
		FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(blueprint);
	}
	return true;
}

UActorComponent* UBlueprintUtils::AddBlueprintComponent(UBlueprint* blueprint, TSubclassOf<UActorComponent> compclass,FName NewComponentVariableName, FName attchto, bool modiy)
{
	UActorComponent* returnval = nullptr;
	USCS_Node* addnode = nullptr;
	if ( blueprint == nullptr ) { UE_LOG(LogTemp, Error, TEXT("目标蓝图失败")); return nullptr; }
	addnode = blueprint->SimpleConstructionScript->CreateNode(compclass, NewComponentVariableName);
	//按照UE的结构 只有USceneComponent组件具有其依附能力 不是继承于这个的组件 均直接附加
	if (!addnode->ComponentTemplate->GetClass()->IsChildOf(USceneComponent::StaticClass()))
	{
		blueprint->SimpleConstructionScript->AddNode(addnode);
		returnval = addnode->ComponentTemplate;
		return returnval;
	}
	if (attchto == "None" || attchto == "Root")
	{
		blueprint->SimpleConstructionScript->GetDefaultSceneRootNode()->AddChildNode(addnode);
		returnval = addnode->ComponentTemplate;
	}
	else
	{
		auto FindNode = blueprint->SimpleConstructionScript->FindSCSNode(attchto);
		//必须保证父子双方均能依附
		if (FindNode && FindNode->ComponentTemplate->GetClass()->IsChildOf(USceneComponent::StaticClass()))
		{
			FindNode->AddChildNode(addnode);
			returnval = addnode->ComponentTemplate;
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("未能成功附加组件到父组件 可能是因为父组件为创建或者属于不能依附的组件"));
		}
	}
	if (modiy)
	{
		FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(blueprint);
	}
	return returnval;
}

bool UBlueprintUtils::SetBlueprintComponentAsset(UActorComponent* targetobj, FAssetData compsetasset)
{
	if (targetobj != nullptr && targetobj->GetClass()->IsChildOf(UActorComponent::StaticClass()))
	{
		auto loadobj = StaticLoadObject(compsetasset.GetClass(), targetobj, *compsetasset.PackageName.ToString(), nullptr, LOAD_None, nullptr);
		if (!loadobj) { return false; }
		ComponentSetAsset(compsetasset.GetClass(), targetobj, loadobj);
		return true;
	}
	return false;
}

bool UBlueprintUtils::SetBlueprintComponentAssets(UActorComponent* targetobj, TArray<FAssetData> compsetasset)
{
	if (targetobj == nullptr || !targetobj->GetClass()->IsChildOf(UActorComponent::StaticClass()))
	{
		return false;
	}

	//代表当前拥有复数资产 复数资产挨个调用装配
	if (compsetasset.Num() == 1)
	{
		auto loaditem = StaticLoadObject(compsetasset[0].GetClass(), targetobj, *compsetasset[0].PackageName.ToString(), nullptr, LOAD_None, nullptr);
		if (!loaditem) { return false; }
		ComponentSetAsset(compsetasset[0].GetClass(), targetobj, loaditem);
	}
	else if (compsetasset.Num() != 1)
	{
		for (auto item : compsetasset)
		{
			auto loaditem = StaticLoadObject(item.GetClass(), targetobj, *item.PackageName.ToString(), nullptr, LOAD_None, nullptr);
			if (!loaditem) { break; }
			ComponentSetAsset(item.GetClass(), targetobj, loaditem);
		}
	}
	else
	{
		return false;
	}
	return true;
}


void UBlueprintUtils::ComponentSetAsset(UClass* assetclass, UObject* targetobj, UObject* loadasset)
{
	bool returnval;
	if (assetclass == UStaticMesh::StaticClass() && targetobj->GetClass() == UStaticMeshComponent::StaticClass())
	{
		InvokeFunction(nullptr, targetobj, "SetStaticMesh", returnval, (UStaticMesh*)loadasset);
	}
	if (assetclass == USkeletalMesh::StaticClass() && targetobj->GetClass() == USkeletalMeshComponent::StaticClass())
	{
		InvokeFunction(nullptr, targetobj, "SetSkeletalMesh", returnval, (USkeletalMesh*)loadasset);
	}
	if (assetclass == UGroomAsset::StaticClass() && targetobj->GetClass() == UGroomComponent::StaticClass())
	{
		InvokeFunction(nullptr, targetobj, "SetGroomAsset", returnval, (UGroomAsset*)loadasset);
	}
	if (assetclass == UGroomBindingAsset::StaticClass() && targetobj->GetClass() == UGroomComponent::StaticClass())
	{
		InvokeFunction(nullptr, targetobj, "SetBindingAsset", returnval, (UGroomBindingAsset*)loadasset);
	}
	
}

