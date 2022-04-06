// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TGYC_AssetTools/Public/PackageUtils.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePackageUtils() {}
// Cross Module References
	EDITORASSETTOOLS_API UClass* Z_Construct_UClass_UPackageUtils_NoRegister();
	EDITORASSETTOOLS_API UClass* Z_Construct_UClass_UPackageUtils();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_EditorAssetTools();
	ASSETREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPackageUtils::execGetPackageDataForString)
	{
		P_GET_TARRAY(FString,Z_Param_pathname);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FAssetData>*)Z_Param__Result=P_THIS->GetPackageDataForString(Z_Param_pathname);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPackageUtils::execAnalysisDependencies)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_PackageName);
		P_GET_STRUCT_REF(FAssetRegistryDependencyOptions,Z_Param_Out_DependencyOptions);
		P_GET_PROPERTY(FIntProperty,Z_Param_depth);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->AnalysisDependencies(Z_Param_PackageName,Z_Param_Out_DependencyOptions,Z_Param_depth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPackageUtils::execSetStaticMeshCollisionPrimitives)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_target);
		P_GET_PROPERTY(FNameProperty,Z_Param_collisionprofilename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetStaticMeshCollisionPrimitives(Z_Param_target,Z_Param_collisionprofilename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPackageUtils::execGetStaticMeshRenderData)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_target);
		P_GET_UBOOL(Z_Param_bIsmaxLod);
		P_GET_UBOOL(Z_Param_bIsshowdetailed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetStaticMeshRenderData(Z_Param_target,Z_Param_bIsmaxLod,Z_Param_bIsshowdetailed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPackageUtils::execGetPackageUtilsPtr)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPackageUtils**)Z_Param__Result=UPackageUtils::GetPackageUtilsPtr();
		P_NATIVE_END;
	}
	void UPackageUtils::StaticRegisterNativesUPackageUtils()
	{
		UClass* Class = UPackageUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnalysisDependencies", &UPackageUtils::execAnalysisDependencies },
			{ "GetPackageDataForString", &UPackageUtils::execGetPackageDataForString },
			{ "GetPackageUtilsPtr", &UPackageUtils::execGetPackageUtilsPtr },
			{ "GetStaticMeshRenderData", &UPackageUtils::execGetStaticMeshRenderData },
			{ "SetStaticMeshCollisionPrimitives", &UPackageUtils::execSetStaticMeshCollisionPrimitives },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPackageUtils_AnalysisDependencies_Statics
	{
		struct PackageUtils_eventAnalysisDependencies_Parms
		{
			FName PackageName;
			FAssetRegistryDependencyOptions DependencyOptions;
			int32 depth;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PackageName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DependencyOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DependencyOptions;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_depth;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPackageUtils_AnalysisDependencies_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PackageUtils_eventAnalysisDependencies_Parms, PackageName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPackageUtils_AnalysisDependencies_Statics::NewProp_DependencyOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPackageUtils_AnalysisDependencies_Statics::NewProp_DependencyOptions = { "DependencyOptions", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PackageUtils_eventAnalysisDependencies_Parms, DependencyOptions), Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions, METADATA_PARAMS(Z_Construct_UFunction_UPackageUtils_AnalysisDependencies_Statics::NewProp_DependencyOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPackageUtils_AnalysisDependencies_Statics::NewProp_DependencyOptions_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPackageUtils_AnalysisDependencies_Statics::NewProp_depth = { "depth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PackageUtils_eventAnalysisDependencies_Parms, depth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPackageUtils_AnalysisDependencies_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPackageUtils_AnalysisDependencies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PackageUtils_eventAnalysisDependencies_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPackageUtils_AnalysisDependencies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPackageUtils_AnalysisDependencies_Statics::NewProp_PackageName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPackageUtils_AnalysisDependencies_Statics::NewProp_DependencyOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPackageUtils_AnalysisDependencies_Statics::NewProp_depth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPackageUtils_AnalysisDependencies_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPackageUtils_AnalysisDependencies_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPackageUtils_AnalysisDependencies_Statics::Function_MetaDataParams[] = {
		{ "Category", "PackageUtils" },
		{ "Comment", "/** \n\x09\x09\xe9\x80\x92\xe5\xbd\x92\xe5\x88\x86\xe6\x9e\x90\xe4\xbe\x9d\xe8\xb5\x96 \xe6\x90\x9c\xe7\xb4\xa2\xe6\xb7\xb1\xe5\xba\xa6\xe5\xb0\xbd\xe9\x87\x8f\xe4\xb8\x8d\xe8\xa6\x81\xe8\xb6\x85\xe8\xbf\x87""12 \xe7\x9c\x9f\xe5\xae\x9e\xe8\xb5\x84\xe4\xba\xa7\xe4\xbe\x9d\xe8\xb5\x96\xe4\xbf\xa1\xe6\x81\xaf \xe5\xa4\x9a\xe4\xb8\xaa\xe8\xb5\x84\xe4\xba\xa7\xe4\xbe\x9d\xe8\xb5\x96\xe5\x90\x8c\xe4\xb8\x80\xe8\xb5\x84\xe4\xba\xa7\xe4\xbc\x9a\xe9\x87\x8d\xe5\xa4\x8d\xe8\xbe\x93\xe5\x87\xba\xe4\xbf\xa1\xe6\x81\xaf \xe5\x87\xbd\xe6\x95\xb0\xe6\x95\x88\xe7\x8e\x87\xe8\xbe\x83\xe4\xbd\x8e \xe7\xa6\x81\xe6\xad\xa2\xe5\x9c\xa8\xe5\xbe\xaa\xe7\x8e\xaf\xe4\xbd\x93\xe5\x86\x85\xe4\xbd\xbf\xe7\x94\xa8\n\x09\x09@PackageName \xe5\x8c\x85\xe8\xb7\xaf\xe5\xbe\x84\n\x09\x09@DependencyOptions \xe4\xbe\x9d\xe8\xb5\x96\xe6\x90\x9c\xe7\xb4\xa2\xe5\xb1\x9e\xe6\x80\xa7\n\x09\x09@depth \xe6\xb7\xb1\xe5\xba\xa6\n\x09*/" },
		{ "DisplayName", "AnalysisDependencies" },
		{ "Keywords", "TGYC_AssetTools" },
		{ "ModuleRelativePath", "Public/PackageUtils.h" },
		{ "ToolTip", "\xe9\x80\x92\xe5\xbd\x92\xe5\x88\x86\xe6\x9e\x90\xe4\xbe\x9d\xe8\xb5\x96 \xe6\x90\x9c\xe7\xb4\xa2\xe6\xb7\xb1\xe5\xba\xa6\xe5\xb0\xbd\xe9\x87\x8f\xe4\xb8\x8d\xe8\xa6\x81\xe8\xb6\x85\xe8\xbf\x87""12 \xe7\x9c\x9f\xe5\xae\x9e\xe8\xb5\x84\xe4\xba\xa7\xe4\xbe\x9d\xe8\xb5\x96\xe4\xbf\xa1\xe6\x81\xaf \xe5\xa4\x9a\xe4\xb8\xaa\xe8\xb5\x84\xe4\xba\xa7\xe4\xbe\x9d\xe8\xb5\x96\xe5\x90\x8c\xe4\xb8\x80\xe8\xb5\x84\xe4\xba\xa7\xe4\xbc\x9a\xe9\x87\x8d\xe5\xa4\x8d\xe8\xbe\x93\xe5\x87\xba\xe4\xbf\xa1\xe6\x81\xaf \xe5\x87\xbd\xe6\x95\xb0\xe6\x95\x88\xe7\x8e\x87\xe8\xbe\x83\xe4\xbd\x8e \xe7\xa6\x81\xe6\xad\xa2\xe5\x9c\xa8\xe5\xbe\xaa\xe7\x8e\xaf\xe4\xbd\x93\xe5\x86\x85\xe4\xbd\xbf\xe7\x94\xa8\n@PackageName \xe5\x8c\x85\xe8\xb7\xaf\xe5\xbe\x84\n@DependencyOptions \xe4\xbe\x9d\xe8\xb5\x96\xe6\x90\x9c\xe7\xb4\xa2\xe5\xb1\x9e\xe6\x80\xa7\n@depth \xe6\xb7\xb1\xe5\xba\xa6" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPackageUtils_AnalysisDependencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPackageUtils, nullptr, "AnalysisDependencies", nullptr, nullptr, sizeof(PackageUtils_eventAnalysisDependencies_Parms), Z_Construct_UFunction_UPackageUtils_AnalysisDependencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPackageUtils_AnalysisDependencies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPackageUtils_AnalysisDependencies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPackageUtils_AnalysisDependencies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPackageUtils_AnalysisDependencies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPackageUtils_AnalysisDependencies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPackageUtils_GetPackageDataForString_Statics
	{
		struct PackageUtils_eventGetPackageDataForString_Parms
		{
			TArray<FString> pathname;
			TArray<FAssetData> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_pathname_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_pathname;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPackageUtils_GetPackageDataForString_Statics::NewProp_pathname_Inner = { "pathname", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPackageUtils_GetPackageDataForString_Statics::NewProp_pathname = { "pathname", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PackageUtils_eventGetPackageDataForString_Parms, pathname), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPackageUtils_GetPackageDataForString_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPackageUtils_GetPackageDataForString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PackageUtils_eventGetPackageDataForString_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPackageUtils_GetPackageDataForString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPackageUtils_GetPackageDataForString_Statics::NewProp_pathname_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPackageUtils_GetPackageDataForString_Statics::NewProp_pathname,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPackageUtils_GetPackageDataForString_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPackageUtils_GetPackageDataForString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPackageUtils_GetPackageDataForString_Statics::Function_MetaDataParams[] = {
		{ "Category", "PackageUtils" },
		{ "Comment", "/**\n\x09 \x09\xe6\x89\xb9\xe9\x87\x8f\xe9\x80\x9a\xe8\xbf\x87pathname\xe8\xbf\x94\xe5\x9b\x9e\xe8\xb5\x84\xe4\xba\xa7\xe6\x95\xb0\xe6\x8d\xae \xe8\xb7\xaf\xe5\xbe\x84\xe9\x94\x99\xe8\xaf\xaf\xe4\xb8\x8d\xe8\xbf\x9b\xe8\xa1\x8c\xe5\x8a\xa0\xe8\xbd\xbd \xe5\xb1\x9e\xe4\xba\x8e\xe5\xae\x89\xe5\x85\xa8\xe5\x8a\xa0\xe8\xbd\xbd\n\x09 */" },
		{ "DisplayName", "GetPackageDataForString" },
		{ "Keywords", "TGYC_AssetTools" },
		{ "ModuleRelativePath", "Public/PackageUtils.h" },
		{ "ToolTip", "\xe6\x89\xb9\xe9\x87\x8f\xe9\x80\x9a\xe8\xbf\x87pathname\xe8\xbf\x94\xe5\x9b\x9e\xe8\xb5\x84\xe4\xba\xa7\xe6\x95\xb0\xe6\x8d\xae \xe8\xb7\xaf\xe5\xbe\x84\xe9\x94\x99\xe8\xaf\xaf\xe4\xb8\x8d\xe8\xbf\x9b\xe8\xa1\x8c\xe5\x8a\xa0\xe8\xbd\xbd \xe5\xb1\x9e\xe4\xba\x8e\xe5\xae\x89\xe5\x85\xa8\xe5\x8a\xa0\xe8\xbd\xbd" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPackageUtils_GetPackageDataForString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPackageUtils, nullptr, "GetPackageDataForString", nullptr, nullptr, sizeof(PackageUtils_eventGetPackageDataForString_Parms), Z_Construct_UFunction_UPackageUtils_GetPackageDataForString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPackageUtils_GetPackageDataForString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPackageUtils_GetPackageDataForString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPackageUtils_GetPackageDataForString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPackageUtils_GetPackageDataForString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPackageUtils_GetPackageDataForString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPackageUtils_GetPackageUtilsPtr_Statics
	{
		struct PackageUtils_eventGetPackageUtilsPtr_Parms
		{
			UPackageUtils* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPackageUtils_GetPackageUtilsPtr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PackageUtils_eventGetPackageUtilsPtr_Parms, ReturnValue), Z_Construct_UClass_UPackageUtils_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPackageUtils_GetPackageUtilsPtr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPackageUtils_GetPackageUtilsPtr_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPackageUtils_GetPackageUtilsPtr_Statics::Function_MetaDataParams[] = {
		{ "Category", "PackageUtils" },
		{ "Comment", "/** \xe8\x8e\xb7\xe5\x8f\x96\xe5\x8c\x85\xe5\xae\x9e\xe7\x94\xa8\xe5\xb7\xa5\xe5\x85\xb7\xe5\xae\x9e\xe4\xbe\x8b\xe5\xaf\xb9\xe8\xb1\xa1 */" },
		{ "DisplayName", "GetPackageUtilsPtr" },
		{ "Keywords", "TGYC_AssetTools" },
		{ "ModuleRelativePath", "Public/PackageUtils.h" },
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\x8c\x85\xe5\xae\x9e\xe7\x94\xa8\xe5\xb7\xa5\xe5\x85\xb7\xe5\xae\x9e\xe4\xbe\x8b\xe5\xaf\xb9\xe8\xb1\xa1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPackageUtils_GetPackageUtilsPtr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPackageUtils, nullptr, "GetPackageUtilsPtr", nullptr, nullptr, sizeof(PackageUtils_eventGetPackageUtilsPtr_Parms), Z_Construct_UFunction_UPackageUtils_GetPackageUtilsPtr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPackageUtils_GetPackageUtilsPtr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPackageUtils_GetPackageUtilsPtr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPackageUtils_GetPackageUtilsPtr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPackageUtils_GetPackageUtilsPtr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPackageUtils_GetPackageUtilsPtr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPackageUtils_GetStaticMeshRenderData_Statics
	{
		struct PackageUtils_eventGetStaticMeshRenderData_Parms
		{
			UStaticMesh* target;
			bool bIsmaxLod;
			bool bIsshowdetailed;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static void NewProp_bIsmaxLod_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsmaxLod;
		static void NewProp_bIsshowdetailed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsshowdetailed;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPackageUtils_GetStaticMeshRenderData_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PackageUtils_eventGetStaticMeshRenderData_Parms, target), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPackageUtils_GetStaticMeshRenderData_Statics::NewProp_bIsmaxLod_SetBit(void* Obj)
	{
		((PackageUtils_eventGetStaticMeshRenderData_Parms*)Obj)->bIsmaxLod = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPackageUtils_GetStaticMeshRenderData_Statics::NewProp_bIsmaxLod = { "bIsmaxLod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PackageUtils_eventGetStaticMeshRenderData_Parms), &Z_Construct_UFunction_UPackageUtils_GetStaticMeshRenderData_Statics::NewProp_bIsmaxLod_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPackageUtils_GetStaticMeshRenderData_Statics::NewProp_bIsshowdetailed_SetBit(void* Obj)
	{
		((PackageUtils_eventGetStaticMeshRenderData_Parms*)Obj)->bIsshowdetailed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPackageUtils_GetStaticMeshRenderData_Statics::NewProp_bIsshowdetailed = { "bIsshowdetailed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PackageUtils_eventGetStaticMeshRenderData_Parms), &Z_Construct_UFunction_UPackageUtils_GetStaticMeshRenderData_Statics::NewProp_bIsshowdetailed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPackageUtils_GetStaticMeshRenderData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPackageUtils_GetStaticMeshRenderData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PackageUtils_eventGetStaticMeshRenderData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPackageUtils_GetStaticMeshRenderData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPackageUtils_GetStaticMeshRenderData_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPackageUtils_GetStaticMeshRenderData_Statics::NewProp_bIsmaxLod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPackageUtils_GetStaticMeshRenderData_Statics::NewProp_bIsshowdetailed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPackageUtils_GetStaticMeshRenderData_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPackageUtils_GetStaticMeshRenderData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPackageUtils_GetStaticMeshRenderData_Statics::Function_MetaDataParams[] = {
		{ "Category", "PackageUtils" },
		{ "Comment", "/** \n\x09\x09\xe8\x8e\xb7\xe5\x8f\x96\xe9\x9d\x99\xe6\x80\x81\xe7\xbd\x91\xe6\xa0\xbc\xe4\xbd\x93\xe7\xb1\xbb\xe7\x9a\x84\xe6\xb8\xb2\xe6\x9f\x93\xe6\x95\xb0\xe6\x8d\xae \xe8\xbf\x94\xe5\x9b\x9e\xe4\xb8\x8d\xe5\x90\x8cLOD\xe4\xb8\x8b\xe7\x9a\x84\xe4\xb8\x89\xe8\xa7\x92\xe9\x9d\xa2\xef\xbc\x8c\xe9\xa1\xb6\xe7\x82\xb9\xe6\x95\xb0\xe9\x87\x8f\xe4\xbf\xa1\xe6\x81\xaf \n\x09\x09@target \xe9\x9d\x99\xe6\x80\x81\xe7\xbd\x91\xe6\xa0\xbc\xe4\xbd\x93\xe7\x9b\xae\xe6\xa0\x87\n\x09\x09@Ismaxlod \xe5\x8f\xaa\xe8\x8e\xb7\xe5\x8f\x96\xe6\x9c\x80\xe5\xa4\xa7/\xe6\x9c\x80\xe5\xb0\x8f\xe7\x9a\x84Lod\xe4\xbf\xa1\xe6\x81\xaf\n\x09\x09@Isshowdetailed \xe8\xbe\x93\xe5\x87\xba\xe6\x89\x80\xe6\x9c\x89\xe7\x9a\x84Lod\xe4\xbf\xa1\xe6\x81\xaf\n\x09*/" },
		{ "CPP_Default_bIsmaxLod", "false" },
		{ "CPP_Default_bIsshowdetailed", "false" },
		{ "DisplayName", "GetStaticMeshRenderData" },
		{ "Keywords", "TGYC_AssetTools" },
		{ "ModuleRelativePath", "Public/PackageUtils.h" },
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe9\x9d\x99\xe6\x80\x81\xe7\xbd\x91\xe6\xa0\xbc\xe4\xbd\x93\xe7\xb1\xbb\xe7\x9a\x84\xe6\xb8\xb2\xe6\x9f\x93\xe6\x95\xb0\xe6\x8d\xae \xe8\xbf\x94\xe5\x9b\x9e\xe4\xb8\x8d\xe5\x90\x8cLOD\xe4\xb8\x8b\xe7\x9a\x84\xe4\xb8\x89\xe8\xa7\x92\xe9\x9d\xa2\xef\xbc\x8c\xe9\xa1\xb6\xe7\x82\xb9\xe6\x95\xb0\xe9\x87\x8f\xe4\xbf\xa1\xe6\x81\xaf\n@target \xe9\x9d\x99\xe6\x80\x81\xe7\xbd\x91\xe6\xa0\xbc\xe4\xbd\x93\xe7\x9b\xae\xe6\xa0\x87\n@Ismaxlod \xe5\x8f\xaa\xe8\x8e\xb7\xe5\x8f\x96\xe6\x9c\x80\xe5\xa4\xa7/\xe6\x9c\x80\xe5\xb0\x8f\xe7\x9a\x84Lod\xe4\xbf\xa1\xe6\x81\xaf\n@Isshowdetailed \xe8\xbe\x93\xe5\x87\xba\xe6\x89\x80\xe6\x9c\x89\xe7\x9a\x84Lod\xe4\xbf\xa1\xe6\x81\xaf" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPackageUtils_GetStaticMeshRenderData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPackageUtils, nullptr, "GetStaticMeshRenderData", nullptr, nullptr, sizeof(PackageUtils_eventGetStaticMeshRenderData_Parms), Z_Construct_UFunction_UPackageUtils_GetStaticMeshRenderData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPackageUtils_GetStaticMeshRenderData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPackageUtils_GetStaticMeshRenderData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPackageUtils_GetStaticMeshRenderData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPackageUtils_GetStaticMeshRenderData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPackageUtils_GetStaticMeshRenderData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPackageUtils_SetStaticMeshCollisionPrimitives_Statics
	{
		struct PackageUtils_eventSetStaticMeshCollisionPrimitives_Parms
		{
			UStaticMesh* target;
			FName collisionprofilename;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_collisionprofilename;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPackageUtils_SetStaticMeshCollisionPrimitives_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PackageUtils_eventSetStaticMeshCollisionPrimitives_Parms, target), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPackageUtils_SetStaticMeshCollisionPrimitives_Statics::NewProp_collisionprofilename = { "collisionprofilename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PackageUtils_eventSetStaticMeshCollisionPrimitives_Parms, collisionprofilename), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPackageUtils_SetStaticMeshCollisionPrimitives_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PackageUtils_eventSetStaticMeshCollisionPrimitives_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPackageUtils_SetStaticMeshCollisionPrimitives_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PackageUtils_eventSetStaticMeshCollisionPrimitives_Parms), &Z_Construct_UFunction_UPackageUtils_SetStaticMeshCollisionPrimitives_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPackageUtils_SetStaticMeshCollisionPrimitives_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPackageUtils_SetStaticMeshCollisionPrimitives_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPackageUtils_SetStaticMeshCollisionPrimitives_Statics::NewProp_collisionprofilename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPackageUtils_SetStaticMeshCollisionPrimitives_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPackageUtils_SetStaticMeshCollisionPrimitives_Statics::Function_MetaDataParams[] = {
		{ "Category", "PackageUtils" },
		{ "Comment", "/** \n\x09\x09\xe8\xae\xbe\xe7\xbd\xae\xe9\x9d\x99\xe6\x80\x81\xe7\xbd\x91\xe6\xa0\xbc\xe4\xbd\x93\xe7\x9a\x84\xe7\xa2\xb0\xe6\x92\x9e\xe9\xa2\x84\xe8\xae\xbe \xe8\xbf\x94\xe5\x9b\x9e\xe6\x98\xaf\xe5\x90\xa6\xe8\xae\xbe\xe7\xbd\xae\xe6\x88\x90\xe5\x8a\x9f\n\x09\x09@collisionprofilename \xe7\xa2\xb0\xe6\x92\x9e\xe9\xa2\x84\xe8\xae\xbe\xe5\x90\x8d\xe5\xad\x97 \xe5\x9c\xa8\xe9\xa1\xb9\xe7\x9b\xae\xe8\xae\xbe\xe7\xbd\xae-\xe7\xa2\xb0\xe6\x92\x9e\xe4\xb8\xad\xe6\x9f\xa5\xe7\x9c\x8b\n\x09*/" },
		{ "DisplayName", "SetStaticMeshCollisionPrimitives" },
		{ "Keywords", "TGYC_AssetTools" },
		{ "ModuleRelativePath", "Public/PackageUtils.h" },
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe9\x9d\x99\xe6\x80\x81\xe7\xbd\x91\xe6\xa0\xbc\xe4\xbd\x93\xe7\x9a\x84\xe7\xa2\xb0\xe6\x92\x9e\xe9\xa2\x84\xe8\xae\xbe \xe8\xbf\x94\xe5\x9b\x9e\xe6\x98\xaf\xe5\x90\xa6\xe8\xae\xbe\xe7\xbd\xae\xe6\x88\x90\xe5\x8a\x9f\n@collisionprofilename \xe7\xa2\xb0\xe6\x92\x9e\xe9\xa2\x84\xe8\xae\xbe\xe5\x90\x8d\xe5\xad\x97 \xe5\x9c\xa8\xe9\xa1\xb9\xe7\x9b\xae\xe8\xae\xbe\xe7\xbd\xae-\xe7\xa2\xb0\xe6\x92\x9e\xe4\xb8\xad\xe6\x9f\xa5\xe7\x9c\x8b" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPackageUtils_SetStaticMeshCollisionPrimitives_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPackageUtils, nullptr, "SetStaticMeshCollisionPrimitives", nullptr, nullptr, sizeof(PackageUtils_eventSetStaticMeshCollisionPrimitives_Parms), Z_Construct_UFunction_UPackageUtils_SetStaticMeshCollisionPrimitives_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPackageUtils_SetStaticMeshCollisionPrimitives_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPackageUtils_SetStaticMeshCollisionPrimitives_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPackageUtils_SetStaticMeshCollisionPrimitives_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPackageUtils_SetStaticMeshCollisionPrimitives()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPackageUtils_SetStaticMeshCollisionPrimitives_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPackageUtils_NoRegister()
	{
		return UPackageUtils::StaticClass();
	}
	struct Z_Construct_UClass_UPackageUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPackageUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorAssetTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPackageUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPackageUtils_AnalysisDependencies, "AnalysisDependencies" }, // 879140929
		{ &Z_Construct_UFunction_UPackageUtils_GetPackageDataForString, "GetPackageDataForString" }, // 2589418284
		{ &Z_Construct_UFunction_UPackageUtils_GetPackageUtilsPtr, "GetPackageUtilsPtr" }, // 3440170493
		{ &Z_Construct_UFunction_UPackageUtils_GetStaticMeshRenderData, "GetStaticMeshRenderData" }, // 2651676687
		{ &Z_Construct_UFunction_UPackageUtils_SetStaticMeshCollisionPrimitives, "SetStaticMeshCollisionPrimitives" }, // 1076129699
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPackageUtils_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \xe9\x92\x88\xe5\xaf\xb9\xe8\xb5\x84\xe4\xba\xa7\xe7\x9a\x84\xe5\xb7\xa5\xe5\x85\xb7\xe7\xb1\xbb\n */" },
		{ "IncludePath", "PackageUtils.h" },
		{ "ModuleRelativePath", "Public/PackageUtils.h" },
		{ "ToolTip", "\xe9\x92\x88\xe5\xaf\xb9\xe8\xb5\x84\xe4\xba\xa7\xe7\x9a\x84\xe5\xb7\xa5\xe5\x85\xb7\xe7\xb1\xbb" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPackageUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPackageUtils>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPackageUtils_Statics::ClassParams = {
		&UPackageUtils::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPackageUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPackageUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPackageUtils()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPackageUtils_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPackageUtils, 76724642);
	template<> EDITORASSETTOOLS_API UClass* StaticClass<UPackageUtils>()
	{
		return UPackageUtils::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPackageUtils(Z_Construct_UClass_UPackageUtils, &UPackageUtils::StaticClass, TEXT("/Script/EditorAssetTools"), TEXT("UPackageUtils"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPackageUtils);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
