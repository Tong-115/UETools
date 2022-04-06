// Fill out your copyright notice in the Description page of Project Settings.


#include "ContentBrowerUtils.h"
#include "Editor.h"
#include "ContentBrowserModule.h"
#include "IContentBrowserSingleton.h"
#include "EditorFramework/AssetImportData.h"
#include "Engine/Blueprint.h"
#include "Engine/SimpleConstructionScript.h"

UContentBrowerUtils* UContentBrowerUtils::s_contentbrowerutils = nullptr;

UContentBrowerUtils::UContentBrowerUtils()
{

}

UContentBrowerUtils& UContentBrowerUtils::GetInstance()
{
	if (s_contentbrowerutils == nullptr)
	{
		s_contentbrowerutils = NewObject<UContentBrowerUtils>();
		s_contentbrowerutils->AddToRoot();
	}
	return *s_contentbrowerutils;
}

UContentBrowerUtils* UContentBrowerUtils::GetContentBrowerUtilsPtr()
{
	if (s_contentbrowerutils == nullptr)
	{
		GetInstance();
	}
	return s_contentbrowerutils;
}



TArray<FAssetData> UContentBrowerUtils::FindObjInContentBrower(TArray<UObject*> Objects, bool bIsShowInBrower /*= true*/)
{
	if (bIsShowInBrower)
	{
		GEditor->GetObjectsToSyncToContentBrowser(Objects);
		GEditor->SyncBrowserToObjects(Objects);
	}

	TArray<FAssetData> AssetDataList;
	for (int32 AssetIdx = 0; AssetIdx < Objects.Num(); ++AssetIdx)
	{
		if (Objects[AssetIdx])
		{
			AssetDataList.Add(FAssetData(Objects[AssetIdx]));
		}
	}
	return AssetDataList;
}



TArray<FAssetData> UContentBrowerUtils::GetObjAssetData(const TArray<UObject*> Objects)
{
	TArray<FAssetData> AssetDataArr;
	for (auto item : Objects)
	{
		FAssetData AssetData(item);
		AssetDataArr.Add(AssetData);
	}
	return AssetDataArr;
}

TArray<FString> UContentBrowerUtils::GetSelectedFoldersPath()
{;
	FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>("ContentBrowser");
	TArray<FString> SelectedFolders;
	ContentBrowserModule.Get().GetSelectedFolders(SelectedFolders);// 只有在右侧的那一栏选中采选选中！
	for (auto item : SelectedFolders)
	{
		UE_LOG(LogTemp, Error, TEXT("Out SelectedFoldersPath %s"), *item);
	}
	return SelectedFolders;
}

TArray<FString> UContentBrowerUtils::GetAssetSourceFilePath(TArray<UObject*> Objects)
{
	TArray<UObject::FAssetRegistryTag> TagList;

	for (auto Item : Objects)
	{
		Item->GetAssetRegistryTags(TagList);
	}

	TArray<FString> OutSourceFiles;
	const FName TagName = UObject::SourceFileTagName();
	for (const auto& Tag : TagList)
	{
		if (Tag.Name == TagName)
		{
			int32 PreviousNum = OutSourceFiles.Num();

			TOptional<FAssetImportInfo> ImportInfo = FAssetImportInfo::FromJson(Tag.Value);
			if (ImportInfo.IsSet())
			{
				for (const auto& File : ImportInfo->SourceFiles)
				{
					//OutSourceFiles.Emplace(UAssetImportData::ResolveImportFilename(File.RelativeFilename, Object->GetOutermost()));
					OutSourceFiles.Add(File.RelativeFilename);
					UE_LOG(LogTemp, Error, TEXT("Out AssetSourceFilePath %s"), *File.RelativeFilename);

				}
			}
			break;
		}
	}
	return OutSourceFiles;
}

TArray<FString> UContentBrowerUtils::GetPhysicalPath(TArray<FAssetData> targetdata)
{
	TArray<FString> TargetPhysicalPath;
	for (auto Item : targetdata)
	{
		FString Filename = FPackageName::LongPackageNameToFilename(Item.PackageName.ToString());
	}
	return TargetPhysicalPath;

}

