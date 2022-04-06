// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ContentBrowerUtils.generated.h"

/**
 * 内容浏览器资产的一些实用工具 用来配合资产调试插件
 */


UCLASS()
class EDITORASSETTOOLS_API UContentBrowerUtils : public UObject
{
	GENERATED_BODY()

public:
	/** 获取内容浏览器实用工具实例对象 */
	UFUNCTION(BlueprintCallable,BlueprintPure, meta = (DisplayName = "GetContentBrowerUtilsPtr", Keywords = "TGYC_AssetTools"), Category = "ContentBrowerUtils")
	static UContentBrowerUtils* GetContentBrowerUtilsPtr();

	/** C++ 使用 */
	static UContentBrowerUtils& GetInstance();

public:

	/** 
		在内容浏览器中的高亮目标资产并返回寻找的资产数据
		@bIsShowInBrower 是否在内容浏览器中高亮目标
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "FindObjInContentBrower", Keywords = "TGYC_AssetTools"), Category = "ContentBrowerUtils")
	TArray<FAssetData> FindObjInContentBrower(const TArray<UObject*> Objects, bool bIsShowInBrower = true);

	/** 获取对象的资产数据 */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GetObjAssetData", Keywords = "TGYC_AssetTools"), Category = "ContentBrowerUtils")
	TArray<FAssetData> GetObjAssetData(const TArray<UObject*> Objects);

	/** 获取当前所选的文件夹路径 //虚拟路径 */ 
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GetSelectedFoldersPath", Keywords = "TGYC_AssetTools"), Category = "ContentBrowerUtils")
	TArray<FString> GetSelectedFoldersPath();

	/** 获取资产的源文件路径 //必须是外部文件导入才拥有其源文件信息 */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GetAssetSourceFilePath", Keywords = "TGYC_AssetTools"), Category = "ContentBrowerUtils")
	TArray<FString> GetAssetSourceFilePath(TArray<UObject*> Objects);
	
	/** 获取资产的磁盘路径 */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GetPhysicalPath", Keywords = "TGYC_AssetTools"), Category = "ContentBrowerUtils")
	TArray<FString> GetPhysicalPath(TArray<FAssetData> targetdata);


private: 

	UContentBrowerUtils();

	/** self */
	static UContentBrowerUtils* s_contentbrowerutils;
};
