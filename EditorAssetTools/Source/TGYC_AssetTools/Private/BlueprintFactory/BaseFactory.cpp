// Fill out your copyright notice in the Description page of Project Settings.


#include "BlueprintFactory/BaseFactory.h"

void UBaseFactory::MakeBlueprintFactoryData(UBlueprint* makebp, TArray<FString> PackageData)
{
	p_factorydata.Get()->makebp = makebp;
}

void UBaseFactory::MakeBeginPlay()
{

}

void UBaseFactory::MakeOver()
{
	ResetData();
}

void UBaseFactory::InitData()
{
	if (!p_factorydata)
	{
		p_factorydata = MakeShared<FBaseFactoryData>();
		UE_LOG(LogTemp, Error, TEXT("BaseFactory InitData"));
	}
}

void UBaseFactory::ResetData()
{
	p_factorydata.Get()->makebp = nullptr;
}
