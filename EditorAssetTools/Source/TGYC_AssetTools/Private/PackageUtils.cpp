// Fill out your copyright notice in the Description page of Project Settings.


#include "PackageUtils.h"
#include "Engine/StaticMesh.h"
#include "StaticMeshResources.h"
#include "AssetRegistry/IAssetRegistry.h"
#include "AssetRegistry/AssetRegistryHelpers.h"
#include "Kismet/KismetArrayLibrary.h"

UPackageUtils* UPackageUtils::s_packageutils = nullptr;
UPackageUtils::UPackageUtils()
{

}

UPackageUtils* UPackageUtils::GetPackageUtilsPtr()
{
	if (s_packageutils == nullptr)
	{
		GetInstance();
	}
	return s_packageutils;
}

UPackageUtils& UPackageUtils::GetInstance()
{
	if (s_packageutils == nullptr)
	{
		s_packageutils = NewObject<UPackageUtils>();
		s_packageutils->AddToRoot();
	}
	return *s_packageutils;
}

TArray<FString> UPackageUtils::GetStaticMeshRenderData(UStaticMesh* target, bool bIsmaxLod /*= false*/, bool bIsshowdetailed /*= false*/)
{
	//返回值字符串举例
	//Lod[0]:Vertices:xxx,NumTriangles:xxx;
	TArray<FString> returnval;
	if (!target)
	{
		UE_LOG(LogTemp, Error, TEXT("GetStaticMeshRenderData Error"));
		return returnval;
	}
	//如果详细输出 就输出所有的Lod信息
	if (bIsshowdetailed)
	{
		int32 num = target->GetStreamableResourceState().MaxNumLODs;
		//int32 num = target->GetRenderData()->LODResources.Num();
		for (int32 i = 0;i < target->GetStreamableResourceState().MaxNumLODs ; i++)
		{
			int32 numvertices = target->GetRenderData()->GetCurrentFirstLOD(i)->GetNumVertices();
			int32 numtriangles = target->GetRenderData()->GetCurrentFirstLOD(i)->GetNumTriangles();
			returnval.Add(FString::Printf(TEXT("\n %s::Lod[%d],Vertices:%d,NumTriangles:%d;"), *target->GetName(), i, numvertices, numtriangles));
		}
		return returnval;
	}
	//拿到边以及面数信息
	if (!bIsmaxLod)
	{
		int32 numvertices = target->GetRenderData()->GetCurrentFirstLOD(0)->GetNumVertices();
		int32 numtriangles = target->GetRenderData()->GetCurrentFirstLOD(0)->GetNumTriangles();
		returnval.Add(FString::Printf(TEXT("%s::Lod[0],Vertices:%d,NumTriangles:%d;"),*target->GetName(),numvertices, numtriangles));
	}
	else
	{
		int32 maxnum = target->GetStreamableResourceState().MaxNumLODs;
		maxnum--;
		int32 numvertices = target->GetRenderData()->GetCurrentFirstLOD(maxnum)->GetNumVertices();
		int32 numtriangles = target->GetRenderData()->GetCurrentFirstLOD(maxnum)->GetNumTriangles();
		returnval.Add(FString::Printf(TEXT("%s::Lod[%d],Vertices:%d,NumTriangles:%d;"), *target->GetName(),maxnum, numvertices, numtriangles));
	}

	return returnval;
}

bool UPackageUtils::SetStaticMeshCollisionPrimitives(UStaticMesh* target, FName collisionprofilename)
{
	if (target)
	{
		target->GetBodySetup()->DefaultInstance.SetCollisionProfileName(collisionprofilename);
		return true;
	}
	return false;
}



TArray<FString> UPackageUtils::AnalysisDependencies(FName PackageName, const FAssetRegistryDependencyOptions& DependencyOptions,int32 num)
{
	TArray<FName> nameparams;
	IAssetRegistry::Get()->K2_GetDependencies(PackageName, DependencyOptions,nameparams);

	TArray<FString> returnval;
	for (auto item : nameparams)
	{
		returnval.Add(item.ToString());
	}

	num--;
	if (num <=0)
	{
		return returnval;
	}

	if (nameparams.Num()> 0)
	{
		for (auto item : nameparams)
		{
			returnval.Append(AnalysisDependencies(item, DependencyOptions, num));
		}
	}

	return returnval;
}

TArray<FAssetData> UPackageUtils::GetPackageDataForString(TArray<FString> pathname)
{
	TArray<FAssetData> ReturnAssetData;
	for (auto item : pathname)
	{
		TArray<FAssetData> OutAssetData;
		IAssetRegistry::Get()->GetAssetsByPackageName(*item, OutAssetData);
		if (OutAssetData.Num() != 1)
		{
			UE_LOG(LogTemp, Error, TEXT("资产路径出错或资产路径无法加载资产 %s"),*item);
		}
		else
		{
			ReturnAssetData.Add(OutAssetData[0]);
		}
	}
	return ReturnAssetData;
}


