// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BlueprintFactory/BaseFactory.h"
#include "ActorBlueprintFactory.generated.h"

/**
 * 
 */
UCLASS()
class EDITORASSETTOOLS_API UActorBlueprintFactory : public UBaseFactory
{
	GENERATED_BODY()

	UActorBlueprintFactory();
public:
	virtual void MakeBlueprintFactoryData(UBlueprint* makebp,TArray<FString> PackageData) override;
	
	virtual void MakeBlueprintFactoryMetaData_Property(TArray<FString>& MetaData);
	
	virtual void MakeBlueprintFactoryMetaData_Component(TArray<FString>& MetaData);
	
	virtual void InitData() override;

	virtual void MakeBeginPlay() override;

	virtual void MakeOver() override;

	virtual void ResetData() override;

protected:

	//分割字符串获取资产路径
	TArray<FString> GetPathNameForString(FString allpathname);
	
	TSharedPtr<FActorBlueprintFactoryData> p_actorblueprintfactorydata;
};
