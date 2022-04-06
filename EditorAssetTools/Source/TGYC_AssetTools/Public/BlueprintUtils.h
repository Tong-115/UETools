// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BlueprintUtils.generated.h"

/**
 * 
 */


UCLASS()
class EDITORASSETTOOLS_API UBlueprintUtils : public UObject
{
	GENERATED_BODY()

public:
	/** 获取蓝图实用工具实例对象 */
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "GetBlueprintUtilsPtr", Keywords = "TGYC_AssetTools"), Category = "BlueprintUtils")
	static UBlueprintUtils* GetBlueprintUtilsPtr();

	/** C++ 使用 */
	static UBlueprintUtils& GetInstance();

public:

	/** 转换成蓝图对象 编辑器调用 */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "CastToBlueprint", Keywords = "TGYC_AssetTools"), Category = "BlueprintUtils")
	UBlueprint* CastToBlueprint(UObject* taggetobj);

	/** 
		根据父类创建蓝图 
		@ParentClass 蓝图类的父类
		@FoldersPath 存放路径  例如/Game/BP
		@BlueprintName 蓝图命名
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "CreateBlueprint", Keywords = "TGYC_AssetTools"), Category = "BlueprintUtils")
	UBlueprint* CreateBlueprint(UClass* ParentClass, const FString& FoldersPath, const FName& BlueprintName);

	/** 按照父类获取蓝图的组件 */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GetBlueprintownCompForClass", Keywords = "TGYC_AssetTools"), Category = "BlueprintUtils")
	TArray<UActorComponent*> GetBlueprintownCompForClass(UBlueprint* targetbp,TSubclassOf<UActorComponent> findclass);

	/** 按照名称获取蓝图中的组件 */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GetBlueprintownCompForName", Keywords = "TGYC_AssetTools"), Category = "BlueprintUtils")
	UActorComponent* GetBlueprintownCompForName(UBlueprint* targetbp, FString compname);

	/** 
		添加蓝图装配工厂配置 建立流水线 
		@bpParentClass  蓝图的父类
		@UBaseFactory	工厂类
	*/
	void MakeBlueprintFactory(UClass* bpParentClass, TSubclassOf<class UBaseFactory> bpfactory);

	/** 
		装配蓝图主入口 输入装配数据 
		@blueprint     需要装配的蓝图
		@makedata      装配数据
		@return        装配是否成功
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "MakeBlueprintBegin", Keywords = "TGYC_AssetTools"), Category = "BlueprintUtils")
	bool MakeBlueprintBegin(UBlueprint* blueprint,TArray<FString> makedata);

	/**
		为蓝图添加组件
		@blueprint		目标蓝图
		@compclass		组件类型
		@NewComponentVariableName 组件预设名字 这个名字不一定是最后生成的 因为要确保名称唯一
		@attchto		依附的父类组件名称 默认依附Root
		@modiy			是否立即标记刷新
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "AddBlueprintComponent", Keywords = "TGYC_AssetTools"), Category = "BlueprintUtils")
	UActorComponent* AddBlueprintComponent(UBlueprint* blueprint, TSubclassOf<UActorComponent> compclass, FName NewComponentVariableName = NAME_None,FName attchto = "None",bool modiy = true);

	/**
		设置蓝图组件的资产
		@targetobj				目标组件
		@compsetfuncname		组件设置资产函数名
		@packagename			资产路径			
	
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "SetBlueprintComponentAsset", Keywords = "TGYC_AssetTools"), Category = "BlueprintUtils")
	bool SetBlueprintComponentAsset(UActorComponent* targetobj,FAssetData compsetasset);

	/**
		设置蓝图组件的资产当存在复数资产时
		@targetobj				目标组件
		@compsetasset			资产群

	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "SetBlueprintComponentAssets", Keywords = "TGYC_AssetTools"), Category = "BlueprintUtils")
	bool SetBlueprintComponentAssets(UActorComponent* targetobj, TArray<FAssetData> compsetasset);


	UPROPERTY()
	TMap<UClass*, UBaseFactory*> bf_makedata;
private:

	//单一资产设置
	void ComponentSetAsset(UClass* assetclass,UObject* targetobj, UObject* loadasset);

private:
	UBlueprintUtils();
	/** self */
	static UBlueprintUtils* s_blueprintutils;
public:
	template<typename TReturn, typename... TArgs>
	void InvokeFunction(UClass* objClass, UObject* obj,FName funcname, TReturn& outParams, TArgs&&... args)
	{
		objClass = obj != nullptr ? obj->GetClass() : objClass;
		UObject* context = obj != nullptr ? obj : objClass;
		UFunction* func = context->FindFunctionChecked(funcname);
		if (func->HasAnyFunctionFlags(FUNC_Native))
		{
			TTuple<TArgs..., TReturn> params(Forward<TArgs>(args)..., TReturn());
			context->ProcessEvent(func, &params);
			for (TFieldIterator<FProperty> i(func); i; ++i)
			{
				FProperty* prop = *i;
				if (prop->PropertyFlags & CPF_OutParm)
				{
					uint8* outPramsBuffer = (uint8*)&outParams;
					void* propBuffer = prop->ContainerPtrToValuePtr<void*>(&params);
					prop->CopyCompleteValue(outPramsBuffer, propBuffer);
					outPramsBuffer += prop->GetSize();
				}
			}
		}
		return;
	}

};

