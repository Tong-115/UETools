// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FactoryData.h"
#include "BaseFactory.generated.h"

/**
 * 这个是装配蓝图的责任链模式抽象基类工厂,并不能被实例化
 */

//如何处理数据的思路 通过函数指针进行轮训给到的字符串数组 每条流水线单独获取自己所需要的 然后分别装配到结构体中 这种保证结构体的数据与
//流水线函数同时处理 保证数据确实被处理完全

UCLASS(Abstract)
class EDITORASSETTOOLS_API UBaseFactory : public UObject
{
	GENERATED_BODY()

public:
#if 1

	/** 添加装配工厂所需要的数据 安排流水线数据 */
	virtual void MakeBlueprintFactoryData(UBlueprint*makebp,TArray<FString> PackageData);

	/** 装配开始 */
	virtual void MakeBeginPlay();

	/** 装配结束 */
	virtual void MakeOver();

	/** 初始化数据 */
	virtual void InitData();

	/** 格式化数据 */
	virtual void ResetData();
#endif

protected:
	//基类工厂数据
	TSharedPtr<FBaseFactoryData> p_factorydata;
};
