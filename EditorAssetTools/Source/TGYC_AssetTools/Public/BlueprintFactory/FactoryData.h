// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FactoryData.generated.h"

/**
 * 
 */

struct FAssetData;

//组件装配数据
USTRUCT()
struct FMakeComponentData
{
	GENERATED_BODY()

	//组件类
	UPROPERTY()
	UClass* componentclass;
	 //装配组件名称
	UPROPERTY()
	FString componentname;
	 
	//附加组件名称
	UPROPERTY()
	FName attachtoname;
	 
	//组件携带的资产信息 一般情况下一个组件仅能够存放一个资产 但例如groom这种特殊组件 可以携带拥有多个资产设置
	UPROPERTY()
	TArray<FAssetData> packagedata;
};

//这是最基础的结构体 如果新建的工厂数据不同 可以继承这个结构体来使用
USTRUCT()
struct FBaseFactoryData
{
	GENERATED_BODY()

	//装配的目标蓝图
	UPROPERTY()
	UBlueprint* makebp;
};

//父类为Actor的蓝图类工厂数据
USTRUCT()
struct FActorBlueprintFactoryData : public FBaseFactoryData
{
	GENERATED_BODY()

	/* 
		组件装配映数据 
		数据来源于初始化 不需要清理 固定值
	*/
	UPROPERTY()
	TMap<FString, UClass*> make_compdata;

	UPROPERTY()
	TArray<FMakeComponentData> makecomponentdata;

	//组件黑名单 阻止此类组件添加
	TArray<FString> blacklistComp;

};
