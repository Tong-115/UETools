// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AssetRegistry/IAssetRegistry.h"
#include "PackageUtils.generated.h"

struct FAssetRegistryDependencyOptions;

/**
 * 针对资产的工具类
 */

UCLASS()
class EDITORASSETTOOLS_API UPackageUtils : public UObject
{
	GENERATED_BODY()

public:
	/** 获取包实用工具实例对象 */
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "GetPackageUtilsPtr", Keywords = "TGYC_AssetTools"), Category = "PackageUtils")
	static UPackageUtils* GetPackageUtilsPtr();

	/** C++ 使用 */
	static UPackageUtils& GetInstance();

public:

	/** 
		获取静态网格体类的渲染数据 返回不同LOD下的三角面，顶点数量信息 
		@target 静态网格体目标
		@Ismaxlod 只获取最大/最小的Lod信息
		@Isshowdetailed 输出所有的Lod信息
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GetStaticMeshRenderData", Keywords = "TGYC_AssetTools"), Category = "PackageUtils")
	TArray<FString> GetStaticMeshRenderData(UStaticMesh* target,bool bIsmaxLod = false,bool bIsshowdetailed = false);

	/** 
		设置静态网格体的碰撞预设 返回是否设置成功
		@collisionprofilename 碰撞预设名字 在项目设置-碰撞中查看
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "SetStaticMeshCollisionPrimitives", Keywords = "TGYC_AssetTools"), Category = "PackageUtils")
	bool SetStaticMeshCollisionPrimitives(UStaticMesh* target,FName collisionprofilename);

	/** 
		递归分析依赖 搜索深度尽量不要超过12 真实资产依赖信息 多个资产依赖同一资产会重复输出信息 函数效率较低 禁止在循环体内使用
		@PackageName 包路径
		@DependencyOptions 依赖搜索属性
		@depth 深度
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "AnalysisDependencies", Keywords = "TGYC_AssetTools"), Category = "PackageUtils")
	TArray<FString> AnalysisDependencies(FName PackageName, const FAssetRegistryDependencyOptions& DependencyOptions,int32 depth);

	/**
	 	批量通过pathname返回资产数据 路径错误不进行加载 属于安全加载
	 */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GetPackageDataForString", Keywords = "TGYC_AssetTools"), Category = "PackageUtils")
	TArray<FAssetData> GetPackageDataForString(TArray<FString> pathname);

private:
	UPackageUtils();

	/** self */
	static UPackageUtils* s_packageutils;
};

