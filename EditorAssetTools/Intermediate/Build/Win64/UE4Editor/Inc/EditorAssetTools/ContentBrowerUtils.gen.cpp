// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TGYC_AssetTools/Public/ContentBrowerUtils.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentBrowerUtils() {}
// Cross Module References
	EDITORASSETTOOLS_API UClass* Z_Construct_UClass_UContentBrowerUtils_NoRegister();
	EDITORASSETTOOLS_API UClass* Z_Construct_UClass_UContentBrowerUtils();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_EditorAssetTools();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
// End Cross Module References
	DEFINE_FUNCTION(UContentBrowerUtils::execGetPhysicalPath)
	{
		P_GET_TARRAY(FAssetData,Z_Param_targetdata);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetPhysicalPath(Z_Param_targetdata);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContentBrowerUtils::execGetAssetSourceFilePath)
	{
		P_GET_TARRAY(UObject*,Z_Param_Objects);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetAssetSourceFilePath(Z_Param_Objects);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContentBrowerUtils::execGetSelectedFoldersPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetSelectedFoldersPath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContentBrowerUtils::execGetObjAssetData)
	{
		P_GET_TARRAY(UObject*,Z_Param_Objects);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FAssetData>*)Z_Param__Result=P_THIS->GetObjAssetData(Z_Param_Objects);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContentBrowerUtils::execFindObjInContentBrower)
	{
		P_GET_TARRAY(UObject*,Z_Param_Objects);
		P_GET_UBOOL(Z_Param_bIsShowInBrower);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FAssetData>*)Z_Param__Result=P_THIS->FindObjInContentBrower(Z_Param_Objects,Z_Param_bIsShowInBrower);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContentBrowerUtils::execGetContentBrowerUtilsPtr)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UContentBrowerUtils**)Z_Param__Result=UContentBrowerUtils::GetContentBrowerUtilsPtr();
		P_NATIVE_END;
	}
	void UContentBrowerUtils::StaticRegisterNativesUContentBrowerUtils()
	{
		UClass* Class = UContentBrowerUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindObjInContentBrower", &UContentBrowerUtils::execFindObjInContentBrower },
			{ "GetAssetSourceFilePath", &UContentBrowerUtils::execGetAssetSourceFilePath },
			{ "GetContentBrowerUtilsPtr", &UContentBrowerUtils::execGetContentBrowerUtilsPtr },
			{ "GetObjAssetData", &UContentBrowerUtils::execGetObjAssetData },
			{ "GetPhysicalPath", &UContentBrowerUtils::execGetPhysicalPath },
			{ "GetSelectedFoldersPath", &UContentBrowerUtils::execGetSelectedFoldersPath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UContentBrowerUtils_FindObjInContentBrower_Statics
	{
		struct ContentBrowerUtils_eventFindObjInContentBrower_Parms
		{
			TArray<UObject*> Objects;
			bool bIsShowInBrower;
			TArray<FAssetData> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Objects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Objects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Objects;
		static void NewProp_bIsShowInBrower_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsShowInBrower;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContentBrowerUtils_FindObjInContentBrower_Statics::NewProp_Objects_Inner = { "Objects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowerUtils_FindObjInContentBrower_Statics::NewProp_Objects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UContentBrowerUtils_FindObjInContentBrower_Statics::NewProp_Objects = { "Objects", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ContentBrowerUtils_eventFindObjInContentBrower_Parms, Objects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UContentBrowerUtils_FindObjInContentBrower_Statics::NewProp_Objects_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowerUtils_FindObjInContentBrower_Statics::NewProp_Objects_MetaData)) };
	void Z_Construct_UFunction_UContentBrowerUtils_FindObjInContentBrower_Statics::NewProp_bIsShowInBrower_SetBit(void* Obj)
	{
		((ContentBrowerUtils_eventFindObjInContentBrower_Parms*)Obj)->bIsShowInBrower = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UContentBrowerUtils_FindObjInContentBrower_Statics::NewProp_bIsShowInBrower = { "bIsShowInBrower", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ContentBrowerUtils_eventFindObjInContentBrower_Parms), &Z_Construct_UFunction_UContentBrowerUtils_FindObjInContentBrower_Statics::NewProp_bIsShowInBrower_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContentBrowerUtils_FindObjInContentBrower_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UContentBrowerUtils_FindObjInContentBrower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ContentBrowerUtils_eventFindObjInContentBrower_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContentBrowerUtils_FindObjInContentBrower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowerUtils_FindObjInContentBrower_Statics::NewProp_Objects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowerUtils_FindObjInContentBrower_Statics::NewProp_Objects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowerUtils_FindObjInContentBrower_Statics::NewProp_bIsShowInBrower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowerUtils_FindObjInContentBrower_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowerUtils_FindObjInContentBrower_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowerUtils_FindObjInContentBrower_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentBrowerUtils" },
		{ "Comment", "/** \n\x09\x09\xe5\x9c\xa8\xe5\x86\x85\xe5\xae\xb9\xe6\xb5\x8f\xe8\xa7\x88\xe5\x99\xa8\xe4\xb8\xad\xe7\x9a\x84\xe9\xab\x98\xe4\xba\xae\xe7\x9b\xae\xe6\xa0\x87\xe8\xb5\x84\xe4\xba\xa7\xe5\xb9\xb6\xe8\xbf\x94\xe5\x9b\x9e\xe5\xaf\xbb\xe6\x89\xbe\xe7\x9a\x84\xe8\xb5\x84\xe4\xba\xa7\xe6\x95\xb0\xe6\x8d\xae\n\x09\x09@bIsShowInBrower \xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe5\x86\x85\xe5\xae\xb9\xe6\xb5\x8f\xe8\xa7\x88\xe5\x99\xa8\xe4\xb8\xad\xe9\xab\x98\xe4\xba\xae\xe7\x9b\xae\xe6\xa0\x87\n\x09*/" },
		{ "CPP_Default_bIsShowInBrower", "true" },
		{ "DisplayName", "FindObjInContentBrower" },
		{ "Keywords", "TGYC_AssetTools" },
		{ "ModuleRelativePath", "Public/ContentBrowerUtils.h" },
		{ "ToolTip", "\xe5\x9c\xa8\xe5\x86\x85\xe5\xae\xb9\xe6\xb5\x8f\xe8\xa7\x88\xe5\x99\xa8\xe4\xb8\xad\xe7\x9a\x84\xe9\xab\x98\xe4\xba\xae\xe7\x9b\xae\xe6\xa0\x87\xe8\xb5\x84\xe4\xba\xa7\xe5\xb9\xb6\xe8\xbf\x94\xe5\x9b\x9e\xe5\xaf\xbb\xe6\x89\xbe\xe7\x9a\x84\xe8\xb5\x84\xe4\xba\xa7\xe6\x95\xb0\xe6\x8d\xae\n@bIsShowInBrower \xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe5\x86\x85\xe5\xae\xb9\xe6\xb5\x8f\xe8\xa7\x88\xe5\x99\xa8\xe4\xb8\xad\xe9\xab\x98\xe4\xba\xae\xe7\x9b\xae\xe6\xa0\x87" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UContentBrowerUtils_FindObjInContentBrower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContentBrowerUtils, nullptr, "FindObjInContentBrower", nullptr, nullptr, sizeof(ContentBrowerUtils_eventFindObjInContentBrower_Parms), Z_Construct_UFunction_UContentBrowerUtils_FindObjInContentBrower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowerUtils_FindObjInContentBrower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContentBrowerUtils_FindObjInContentBrower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowerUtils_FindObjInContentBrower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContentBrowerUtils_FindObjInContentBrower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UContentBrowerUtils_FindObjInContentBrower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContentBrowerUtils_GetAssetSourceFilePath_Statics
	{
		struct ContentBrowerUtils_eventGetAssetSourceFilePath_Parms
		{
			TArray<UObject*> Objects;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Objects_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Objects;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContentBrowerUtils_GetAssetSourceFilePath_Statics::NewProp_Objects_Inner = { "Objects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UContentBrowerUtils_GetAssetSourceFilePath_Statics::NewProp_Objects = { "Objects", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ContentBrowerUtils_eventGetAssetSourceFilePath_Parms, Objects), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UContentBrowerUtils_GetAssetSourceFilePath_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UContentBrowerUtils_GetAssetSourceFilePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ContentBrowerUtils_eventGetAssetSourceFilePath_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContentBrowerUtils_GetAssetSourceFilePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowerUtils_GetAssetSourceFilePath_Statics::NewProp_Objects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowerUtils_GetAssetSourceFilePath_Statics::NewProp_Objects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowerUtils_GetAssetSourceFilePath_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowerUtils_GetAssetSourceFilePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowerUtils_GetAssetSourceFilePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentBrowerUtils" },
		{ "Comment", "/** \xe8\x8e\xb7\xe5\x8f\x96\xe8\xb5\x84\xe4\xba\xa7\xe7\x9a\x84\xe6\xba\x90\xe6\x96\x87\xe4\xbb\xb6\xe8\xb7\xaf\xe5\xbe\x84 //\xe5\xbf\x85\xe9\xa1\xbb\xe6\x98\xaf\xe5\xa4\x96\xe9\x83\xa8\xe6\x96\x87\xe4\xbb\xb6\xe5\xaf\xbc\xe5\x85\xa5\xe6\x89\x8d\xe6\x8b\xa5\xe6\x9c\x89\xe5\x85\xb6\xe6\xba\x90\xe6\x96\x87\xe4\xbb\xb6\xe4\xbf\xa1\xe6\x81\xaf */" },
		{ "DisplayName", "GetAssetSourceFilePath" },
		{ "Keywords", "TGYC_AssetTools" },
		{ "ModuleRelativePath", "Public/ContentBrowerUtils.h" },
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe8\xb5\x84\xe4\xba\xa7\xe7\x9a\x84\xe6\xba\x90\xe6\x96\x87\xe4\xbb\xb6\xe8\xb7\xaf\xe5\xbe\x84 //\xe5\xbf\x85\xe9\xa1\xbb\xe6\x98\xaf\xe5\xa4\x96\xe9\x83\xa8\xe6\x96\x87\xe4\xbb\xb6\xe5\xaf\xbc\xe5\x85\xa5\xe6\x89\x8d\xe6\x8b\xa5\xe6\x9c\x89\xe5\x85\xb6\xe6\xba\x90\xe6\x96\x87\xe4\xbb\xb6\xe4\xbf\xa1\xe6\x81\xaf" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UContentBrowerUtils_GetAssetSourceFilePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContentBrowerUtils, nullptr, "GetAssetSourceFilePath", nullptr, nullptr, sizeof(ContentBrowerUtils_eventGetAssetSourceFilePath_Parms), Z_Construct_UFunction_UContentBrowerUtils_GetAssetSourceFilePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowerUtils_GetAssetSourceFilePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContentBrowerUtils_GetAssetSourceFilePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowerUtils_GetAssetSourceFilePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContentBrowerUtils_GetAssetSourceFilePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UContentBrowerUtils_GetAssetSourceFilePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContentBrowerUtils_GetContentBrowerUtilsPtr_Statics
	{
		struct ContentBrowerUtils_eventGetContentBrowerUtilsPtr_Parms
		{
			UContentBrowerUtils* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContentBrowerUtils_GetContentBrowerUtilsPtr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ContentBrowerUtils_eventGetContentBrowerUtilsPtr_Parms, ReturnValue), Z_Construct_UClass_UContentBrowerUtils_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContentBrowerUtils_GetContentBrowerUtilsPtr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowerUtils_GetContentBrowerUtilsPtr_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowerUtils_GetContentBrowerUtilsPtr_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentBrowerUtils" },
		{ "Comment", "/** \xe8\x8e\xb7\xe5\x8f\x96\xe5\x86\x85\xe5\xae\xb9\xe6\xb5\x8f\xe8\xa7\x88\xe5\x99\xa8\xe5\xae\x9e\xe7\x94\xa8\xe5\xb7\xa5\xe5\x85\xb7\xe5\xae\x9e\xe4\xbe\x8b\xe5\xaf\xb9\xe8\xb1\xa1 */" },
		{ "DisplayName", "GetContentBrowerUtilsPtr" },
		{ "Keywords", "TGYC_AssetTools" },
		{ "ModuleRelativePath", "Public/ContentBrowerUtils.h" },
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\x86\x85\xe5\xae\xb9\xe6\xb5\x8f\xe8\xa7\x88\xe5\x99\xa8\xe5\xae\x9e\xe7\x94\xa8\xe5\xb7\xa5\xe5\x85\xb7\xe5\xae\x9e\xe4\xbe\x8b\xe5\xaf\xb9\xe8\xb1\xa1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UContentBrowerUtils_GetContentBrowerUtilsPtr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContentBrowerUtils, nullptr, "GetContentBrowerUtilsPtr", nullptr, nullptr, sizeof(ContentBrowerUtils_eventGetContentBrowerUtilsPtr_Parms), Z_Construct_UFunction_UContentBrowerUtils_GetContentBrowerUtilsPtr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowerUtils_GetContentBrowerUtilsPtr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContentBrowerUtils_GetContentBrowerUtilsPtr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowerUtils_GetContentBrowerUtilsPtr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContentBrowerUtils_GetContentBrowerUtilsPtr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UContentBrowerUtils_GetContentBrowerUtilsPtr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContentBrowerUtils_GetObjAssetData_Statics
	{
		struct ContentBrowerUtils_eventGetObjAssetData_Parms
		{
			TArray<UObject*> Objects;
			TArray<FAssetData> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Objects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Objects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Objects;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContentBrowerUtils_GetObjAssetData_Statics::NewProp_Objects_Inner = { "Objects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowerUtils_GetObjAssetData_Statics::NewProp_Objects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UContentBrowerUtils_GetObjAssetData_Statics::NewProp_Objects = { "Objects", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ContentBrowerUtils_eventGetObjAssetData_Parms, Objects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UContentBrowerUtils_GetObjAssetData_Statics::NewProp_Objects_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowerUtils_GetObjAssetData_Statics::NewProp_Objects_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContentBrowerUtils_GetObjAssetData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UContentBrowerUtils_GetObjAssetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ContentBrowerUtils_eventGetObjAssetData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContentBrowerUtils_GetObjAssetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowerUtils_GetObjAssetData_Statics::NewProp_Objects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowerUtils_GetObjAssetData_Statics::NewProp_Objects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowerUtils_GetObjAssetData_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowerUtils_GetObjAssetData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowerUtils_GetObjAssetData_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentBrowerUtils" },
		{ "Comment", "/** \xe8\x8e\xb7\xe5\x8f\x96\xe5\xaf\xb9\xe8\xb1\xa1\xe7\x9a\x84\xe8\xb5\x84\xe4\xba\xa7\xe6\x95\xb0\xe6\x8d\xae */" },
		{ "DisplayName", "GetObjAssetData" },
		{ "Keywords", "TGYC_AssetTools" },
		{ "ModuleRelativePath", "Public/ContentBrowerUtils.h" },
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\xaf\xb9\xe8\xb1\xa1\xe7\x9a\x84\xe8\xb5\x84\xe4\xba\xa7\xe6\x95\xb0\xe6\x8d\xae" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UContentBrowerUtils_GetObjAssetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContentBrowerUtils, nullptr, "GetObjAssetData", nullptr, nullptr, sizeof(ContentBrowerUtils_eventGetObjAssetData_Parms), Z_Construct_UFunction_UContentBrowerUtils_GetObjAssetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowerUtils_GetObjAssetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContentBrowerUtils_GetObjAssetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowerUtils_GetObjAssetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContentBrowerUtils_GetObjAssetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UContentBrowerUtils_GetObjAssetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContentBrowerUtils_GetPhysicalPath_Statics
	{
		struct ContentBrowerUtils_eventGetPhysicalPath_Parms
		{
			TArray<FAssetData> targetdata;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_targetdata_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_targetdata;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContentBrowerUtils_GetPhysicalPath_Statics::NewProp_targetdata_Inner = { "targetdata", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UContentBrowerUtils_GetPhysicalPath_Statics::NewProp_targetdata = { "targetdata", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ContentBrowerUtils_eventGetPhysicalPath_Parms, targetdata), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UContentBrowerUtils_GetPhysicalPath_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UContentBrowerUtils_GetPhysicalPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ContentBrowerUtils_eventGetPhysicalPath_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContentBrowerUtils_GetPhysicalPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowerUtils_GetPhysicalPath_Statics::NewProp_targetdata_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowerUtils_GetPhysicalPath_Statics::NewProp_targetdata,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowerUtils_GetPhysicalPath_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowerUtils_GetPhysicalPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowerUtils_GetPhysicalPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentBrowerUtils" },
		{ "Comment", "/** \xe8\x8e\xb7\xe5\x8f\x96\xe8\xb5\x84\xe4\xba\xa7\xe7\x9a\x84\xe7\xa3\x81\xe7\x9b\x98\xe8\xb7\xaf\xe5\xbe\x84 */" },
		{ "DisplayName", "GetPhysicalPath" },
		{ "Keywords", "TGYC_AssetTools" },
		{ "ModuleRelativePath", "Public/ContentBrowerUtils.h" },
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe8\xb5\x84\xe4\xba\xa7\xe7\x9a\x84\xe7\xa3\x81\xe7\x9b\x98\xe8\xb7\xaf\xe5\xbe\x84" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UContentBrowerUtils_GetPhysicalPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContentBrowerUtils, nullptr, "GetPhysicalPath", nullptr, nullptr, sizeof(ContentBrowerUtils_eventGetPhysicalPath_Parms), Z_Construct_UFunction_UContentBrowerUtils_GetPhysicalPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowerUtils_GetPhysicalPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContentBrowerUtils_GetPhysicalPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowerUtils_GetPhysicalPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContentBrowerUtils_GetPhysicalPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UContentBrowerUtils_GetPhysicalPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContentBrowerUtils_GetSelectedFoldersPath_Statics
	{
		struct ContentBrowerUtils_eventGetSelectedFoldersPath_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UContentBrowerUtils_GetSelectedFoldersPath_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UContentBrowerUtils_GetSelectedFoldersPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ContentBrowerUtils_eventGetSelectedFoldersPath_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContentBrowerUtils_GetSelectedFoldersPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowerUtils_GetSelectedFoldersPath_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowerUtils_GetSelectedFoldersPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowerUtils_GetSelectedFoldersPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentBrowerUtils" },
		{ "Comment", "/** \xe8\x8e\xb7\xe5\x8f\x96\xe5\xbd\x93\xe5\x89\x8d\xe6\x89\x80\xe9\x80\x89\xe7\x9a\x84\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe8\xb7\xaf\xe5\xbe\x84 //\xe8\x99\x9a\xe6\x8b\x9f\xe8\xb7\xaf\xe5\xbe\x84 */" },
		{ "DisplayName", "GetSelectedFoldersPath" },
		{ "Keywords", "TGYC_AssetTools" },
		{ "ModuleRelativePath", "Public/ContentBrowerUtils.h" },
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\xbd\x93\xe5\x89\x8d\xe6\x89\x80\xe9\x80\x89\xe7\x9a\x84\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe8\xb7\xaf\xe5\xbe\x84 //\xe8\x99\x9a\xe6\x8b\x9f\xe8\xb7\xaf\xe5\xbe\x84" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UContentBrowerUtils_GetSelectedFoldersPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContentBrowerUtils, nullptr, "GetSelectedFoldersPath", nullptr, nullptr, sizeof(ContentBrowerUtils_eventGetSelectedFoldersPath_Parms), Z_Construct_UFunction_UContentBrowerUtils_GetSelectedFoldersPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowerUtils_GetSelectedFoldersPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContentBrowerUtils_GetSelectedFoldersPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowerUtils_GetSelectedFoldersPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContentBrowerUtils_GetSelectedFoldersPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UContentBrowerUtils_GetSelectedFoldersPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UContentBrowerUtils_NoRegister()
	{
		return UContentBrowerUtils::StaticClass();
	}
	struct Z_Construct_UClass_UContentBrowerUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContentBrowerUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorAssetTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UContentBrowerUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UContentBrowerUtils_FindObjInContentBrower, "FindObjInContentBrower" }, // 759983058
		{ &Z_Construct_UFunction_UContentBrowerUtils_GetAssetSourceFilePath, "GetAssetSourceFilePath" }, // 2530730782
		{ &Z_Construct_UFunction_UContentBrowerUtils_GetContentBrowerUtilsPtr, "GetContentBrowerUtilsPtr" }, // 948944360
		{ &Z_Construct_UFunction_UContentBrowerUtils_GetObjAssetData, "GetObjAssetData" }, // 2268920369
		{ &Z_Construct_UFunction_UContentBrowerUtils_GetPhysicalPath, "GetPhysicalPath" }, // 3987088511
		{ &Z_Construct_UFunction_UContentBrowerUtils_GetSelectedFoldersPath, "GetSelectedFoldersPath" }, // 2474400643
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowerUtils_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \xe5\x86\x85\xe5\xae\xb9\xe6\xb5\x8f\xe8\xa7\x88\xe5\x99\xa8\xe8\xb5\x84\xe4\xba\xa7\xe7\x9a\x84\xe4\xb8\x80\xe4\xba\x9b\xe5\xae\x9e\xe7\x94\xa8\xe5\xb7\xa5\xe5\x85\xb7 \xe7\x94\xa8\xe6\x9d\xa5\xe9\x85\x8d\xe5\x90\x88\xe8\xb5\x84\xe4\xba\xa7\xe8\xb0\x83\xe8\xaf\x95\xe6\x8f\x92\xe4\xbb\xb6\n */" },
		{ "IncludePath", "ContentBrowerUtils.h" },
		{ "ModuleRelativePath", "Public/ContentBrowerUtils.h" },
		{ "ToolTip", "\xe5\x86\x85\xe5\xae\xb9\xe6\xb5\x8f\xe8\xa7\x88\xe5\x99\xa8\xe8\xb5\x84\xe4\xba\xa7\xe7\x9a\x84\xe4\xb8\x80\xe4\xba\x9b\xe5\xae\x9e\xe7\x94\xa8\xe5\xb7\xa5\xe5\x85\xb7 \xe7\x94\xa8\xe6\x9d\xa5\xe9\x85\x8d\xe5\x90\x88\xe8\xb5\x84\xe4\xba\xa7\xe8\xb0\x83\xe8\xaf\x95\xe6\x8f\x92\xe4\xbb\xb6" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContentBrowerUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentBrowerUtils>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UContentBrowerUtils_Statics::ClassParams = {
		&UContentBrowerUtils::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UContentBrowerUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowerUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContentBrowerUtils()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UContentBrowerUtils_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UContentBrowerUtils, 4276744497);
	template<> EDITORASSETTOOLS_API UClass* StaticClass<UContentBrowerUtils>()
	{
		return UContentBrowerUtils::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UContentBrowerUtils(Z_Construct_UClass_UContentBrowerUtils, &UContentBrowerUtils::StaticClass, TEXT("/Script/EditorAssetTools"), TEXT("UContentBrowerUtils"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContentBrowerUtils);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
