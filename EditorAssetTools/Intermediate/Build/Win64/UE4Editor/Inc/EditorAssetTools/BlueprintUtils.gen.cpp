// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TGYC_AssetTools/Public/BlueprintUtils.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintUtils() {}
// Cross Module References
	EDITORASSETTOOLS_API UClass* Z_Construct_UClass_UBlueprintUtils_NoRegister();
	EDITORASSETTOOLS_API UClass* Z_Construct_UClass_UBlueprintUtils();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_EditorAssetTools();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
	EDITORASSETTOOLS_API UClass* Z_Construct_UClass_UBaseFactory_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBlueprintUtils::execSetBlueprintComponentAssets)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_targetobj);
		P_GET_TARRAY(FAssetData,Z_Param_compsetasset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetBlueprintComponentAssets(Z_Param_targetobj,Z_Param_compsetasset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintUtils::execSetBlueprintComponentAsset)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_targetobj);
		P_GET_STRUCT(FAssetData,Z_Param_compsetasset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetBlueprintComponentAsset(Z_Param_targetobj,Z_Param_compsetasset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintUtils::execAddBlueprintComponent)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_blueprint);
		P_GET_OBJECT(UClass,Z_Param_compclass);
		P_GET_PROPERTY(FNameProperty,Z_Param_NewComponentVariableName);
		P_GET_PROPERTY(FNameProperty,Z_Param_attchto);
		P_GET_UBOOL(Z_Param_modiy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UActorComponent**)Z_Param__Result=P_THIS->AddBlueprintComponent(Z_Param_blueprint,Z_Param_compclass,Z_Param_NewComponentVariableName,Z_Param_attchto,Z_Param_modiy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintUtils::execMakeBlueprintBegin)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_blueprint);
		P_GET_TARRAY(FString,Z_Param_makedata);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->MakeBlueprintBegin(Z_Param_blueprint,Z_Param_makedata);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintUtils::execGetBlueprintownCompForName)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_targetbp);
		P_GET_PROPERTY(FStrProperty,Z_Param_compname);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UActorComponent**)Z_Param__Result=P_THIS->GetBlueprintownCompForName(Z_Param_targetbp,Z_Param_compname);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintUtils::execGetBlueprintownCompForClass)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_targetbp);
		P_GET_OBJECT(UClass,Z_Param_findclass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UActorComponent*>*)Z_Param__Result=P_THIS->GetBlueprintownCompForClass(Z_Param_targetbp,Z_Param_findclass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintUtils::execCreateBlueprint)
	{
		P_GET_OBJECT(UClass,Z_Param_ParentClass);
		P_GET_PROPERTY(FStrProperty,Z_Param_FoldersPath);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_BlueprintName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBlueprint**)Z_Param__Result=P_THIS->CreateBlueprint(Z_Param_ParentClass,Z_Param_FoldersPath,Z_Param_Out_BlueprintName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintUtils::execCastToBlueprint)
	{
		P_GET_OBJECT(UObject,Z_Param_taggetobj);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBlueprint**)Z_Param__Result=P_THIS->CastToBlueprint(Z_Param_taggetobj);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintUtils::execGetBlueprintUtilsPtr)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBlueprintUtils**)Z_Param__Result=UBlueprintUtils::GetBlueprintUtilsPtr();
		P_NATIVE_END;
	}
	void UBlueprintUtils::StaticRegisterNativesUBlueprintUtils()
	{
		UClass* Class = UBlueprintUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddBlueprintComponent", &UBlueprintUtils::execAddBlueprintComponent },
			{ "CastToBlueprint", &UBlueprintUtils::execCastToBlueprint },
			{ "CreateBlueprint", &UBlueprintUtils::execCreateBlueprint },
			{ "GetBlueprintownCompForClass", &UBlueprintUtils::execGetBlueprintownCompForClass },
			{ "GetBlueprintownCompForName", &UBlueprintUtils::execGetBlueprintownCompForName },
			{ "GetBlueprintUtilsPtr", &UBlueprintUtils::execGetBlueprintUtilsPtr },
			{ "MakeBlueprintBegin", &UBlueprintUtils::execMakeBlueprintBegin },
			{ "SetBlueprintComponentAsset", &UBlueprintUtils::execSetBlueprintComponentAsset },
			{ "SetBlueprintComponentAssets", &UBlueprintUtils::execSetBlueprintComponentAssets },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlueprintUtils_AddBlueprintComponent_Statics
	{
		struct BlueprintUtils_eventAddBlueprintComponent_Parms
		{
			UBlueprint* blueprint;
			TSubclassOf<UActorComponent>  compclass;
			FName NewComponentVariableName;
			FName attchto;
			bool modiy;
			UActorComponent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_blueprint;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_compclass;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewComponentVariableName;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_attchto;
		static void NewProp_modiy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_modiy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintUtils_AddBlueprintComponent_Statics::NewProp_blueprint = { "blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintUtils_eventAddBlueprintComponent_Parms, blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBlueprintUtils_AddBlueprintComponent_Statics::NewProp_compclass = { "compclass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintUtils_eventAddBlueprintComponent_Parms, compclass), Z_Construct_UClass_UActorComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlueprintUtils_AddBlueprintComponent_Statics::NewProp_NewComponentVariableName = { "NewComponentVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintUtils_eventAddBlueprintComponent_Parms, NewComponentVariableName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlueprintUtils_AddBlueprintComponent_Statics::NewProp_attchto = { "attchto", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintUtils_eventAddBlueprintComponent_Parms, attchto), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlueprintUtils_AddBlueprintComponent_Statics::NewProp_modiy_SetBit(void* Obj)
	{
		((BlueprintUtils_eventAddBlueprintComponent_Parms*)Obj)->modiy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintUtils_AddBlueprintComponent_Statics::NewProp_modiy = { "modiy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintUtils_eventAddBlueprintComponent_Parms), &Z_Construct_UFunction_UBlueprintUtils_AddBlueprintComponent_Statics::NewProp_modiy_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintUtils_AddBlueprintComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintUtils_AddBlueprintComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintUtils_eventAddBlueprintComponent_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintUtils_AddBlueprintComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintUtils_AddBlueprintComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintUtils_AddBlueprintComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintUtils_AddBlueprintComponent_Statics::NewProp_blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintUtils_AddBlueprintComponent_Statics::NewProp_compclass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintUtils_AddBlueprintComponent_Statics::NewProp_NewComponentVariableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintUtils_AddBlueprintComponent_Statics::NewProp_attchto,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintUtils_AddBlueprintComponent_Statics::NewProp_modiy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintUtils_AddBlueprintComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintUtils_AddBlueprintComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "BlueprintUtils" },
		{ "Comment", "/**\n\x09\x09\xe4\xb8\xba\xe8\x93\x9d\xe5\x9b\xbe\xe6\xb7\xbb\xe5\x8a\xa0\xe7\xbb\x84\xe4\xbb\xb6\n\x09\x09@blueprint\x09\x09\xe7\x9b\xae\xe6\xa0\x87\xe8\x93\x9d\xe5\x9b\xbe\n\x09\x09@compclass\x09\x09\xe7\xbb\x84\xe4\xbb\xb6\xe7\xb1\xbb\xe5\x9e\x8b\n\x09\x09@NewComponentVariableName \xe7\xbb\x84\xe4\xbb\xb6\xe9\xa2\x84\xe8\xae\xbe\xe5\x90\x8d\xe5\xad\x97 \xe8\xbf\x99\xe4\xb8\xaa\xe5\x90\x8d\xe5\xad\x97\xe4\xb8\x8d\xe4\xb8\x80\xe5\xae\x9a\xe6\x98\xaf\xe6\x9c\x80\xe5\x90\x8e\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84 \xe5\x9b\xa0\xe4\xb8\xba\xe8\xa6\x81\xe7\xa1\xae\xe4\xbf\x9d\xe5\x90\x8d\xe7\xa7\xb0\xe5\x94\xaf\xe4\xb8\x80\n\x09\x09@attchto\x09\x09\xe4\xbe\x9d\xe9\x99\x84\xe7\x9a\x84\xe7\x88\xb6\xe7\xb1\xbb\xe7\xbb\x84\xe4\xbb\xb6\xe5\x90\x8d\xe7\xa7\xb0 \xe9\xbb\x98\xe8\xae\xa4\xe4\xbe\x9d\xe9\x99\x84Root\n\x09\x09@modiy\x09\x09\x09\xe6\x98\xaf\xe5\x90\xa6\xe7\xab\x8b\xe5\x8d\xb3\xe6\xa0\x87\xe8\xae\xb0\xe5\x88\xb7\xe6\x96\xb0\n\x09*/" },
		{ "CPP_Default_attchto", "None" },
		{ "CPP_Default_modiy", "true" },
		{ "CPP_Default_NewComponentVariableName", "None" },
		{ "DisplayName", "AddBlueprintComponent" },
		{ "Keywords", "TGYC_AssetTools" },
		{ "ModuleRelativePath", "Public/BlueprintUtils.h" },
		{ "ToolTip", "\xe4\xb8\xba\xe8\x93\x9d\xe5\x9b\xbe\xe6\xb7\xbb\xe5\x8a\xa0\xe7\xbb\x84\xe4\xbb\xb6\n@blueprint              \xe7\x9b\xae\xe6\xa0\x87\xe8\x93\x9d\xe5\x9b\xbe\n@compclass              \xe7\xbb\x84\xe4\xbb\xb6\xe7\xb1\xbb\xe5\x9e\x8b\n@NewComponentVariableName \xe7\xbb\x84\xe4\xbb\xb6\xe9\xa2\x84\xe8\xae\xbe\xe5\x90\x8d\xe5\xad\x97 \xe8\xbf\x99\xe4\xb8\xaa\xe5\x90\x8d\xe5\xad\x97\xe4\xb8\x8d\xe4\xb8\x80\xe5\xae\x9a\xe6\x98\xaf\xe6\x9c\x80\xe5\x90\x8e\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84 \xe5\x9b\xa0\xe4\xb8\xba\xe8\xa6\x81\xe7\xa1\xae\xe4\xbf\x9d\xe5\x90\x8d\xe7\xa7\xb0\xe5\x94\xaf\xe4\xb8\x80\n@attchto                \xe4\xbe\x9d\xe9\x99\x84\xe7\x9a\x84\xe7\x88\xb6\xe7\xb1\xbb\xe7\xbb\x84\xe4\xbb\xb6\xe5\x90\x8d\xe7\xa7\xb0 \xe9\xbb\x98\xe8\xae\xa4\xe4\xbe\x9d\xe9\x99\x84Root\n@modiy                  \xe6\x98\xaf\xe5\x90\xa6\xe7\xab\x8b\xe5\x8d\xb3\xe6\xa0\x87\xe8\xae\xb0\xe5\x88\xb7\xe6\x96\xb0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintUtils_AddBlueprintComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintUtils, nullptr, "AddBlueprintComponent", nullptr, nullptr, sizeof(BlueprintUtils_eventAddBlueprintComponent_Parms), Z_Construct_UFunction_UBlueprintUtils_AddBlueprintComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintUtils_AddBlueprintComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintUtils_AddBlueprintComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintUtils_AddBlueprintComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintUtils_AddBlueprintComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintUtils_AddBlueprintComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintUtils_CastToBlueprint_Statics
	{
		struct BlueprintUtils_eventCastToBlueprint_Parms
		{
			UObject* taggetobj;
			UBlueprint* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_taggetobj;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintUtils_CastToBlueprint_Statics::NewProp_taggetobj = { "taggetobj", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintUtils_eventCastToBlueprint_Parms, taggetobj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintUtils_CastToBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintUtils_eventCastToBlueprint_Parms, ReturnValue), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintUtils_CastToBlueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintUtils_CastToBlueprint_Statics::NewProp_taggetobj,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintUtils_CastToBlueprint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintUtils_CastToBlueprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "BlueprintUtils" },
		{ "Comment", "/** \xe8\xbd\xac\xe6\x8d\xa2\xe6\x88\x90\xe8\x93\x9d\xe5\x9b\xbe\xe5\xaf\xb9\xe8\xb1\xa1 \xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe8\xb0\x83\xe7\x94\xa8 */" },
		{ "DisplayName", "CastToBlueprint" },
		{ "Keywords", "TGYC_AssetTools" },
		{ "ModuleRelativePath", "Public/BlueprintUtils.h" },
		{ "ToolTip", "\xe8\xbd\xac\xe6\x8d\xa2\xe6\x88\x90\xe8\x93\x9d\xe5\x9b\xbe\xe5\xaf\xb9\xe8\xb1\xa1 \xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe8\xb0\x83\xe7\x94\xa8" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintUtils_CastToBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintUtils, nullptr, "CastToBlueprint", nullptr, nullptr, sizeof(BlueprintUtils_eventCastToBlueprint_Parms), Z_Construct_UFunction_UBlueprintUtils_CastToBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintUtils_CastToBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintUtils_CastToBlueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintUtils_CastToBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintUtils_CastToBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintUtils_CastToBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintUtils_CreateBlueprint_Statics
	{
		struct BlueprintUtils_eventCreateBlueprint_Parms
		{
			UClass* ParentClass;
			FString FoldersPath;
			FName BlueprintName;
			UBlueprint* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ParentClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoldersPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FoldersPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BlueprintName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBlueprintUtils_CreateBlueprint_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintUtils_eventCreateBlueprint_Parms, ParentClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintUtils_CreateBlueprint_Statics::NewProp_FoldersPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintUtils_CreateBlueprint_Statics::NewProp_FoldersPath = { "FoldersPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintUtils_eventCreateBlueprint_Parms, FoldersPath), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintUtils_CreateBlueprint_Statics::NewProp_FoldersPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintUtils_CreateBlueprint_Statics::NewProp_FoldersPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintUtils_CreateBlueprint_Statics::NewProp_BlueprintName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlueprintUtils_CreateBlueprint_Statics::NewProp_BlueprintName = { "BlueprintName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintUtils_eventCreateBlueprint_Parms, BlueprintName), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintUtils_CreateBlueprint_Statics::NewProp_BlueprintName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintUtils_CreateBlueprint_Statics::NewProp_BlueprintName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintUtils_CreateBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintUtils_eventCreateBlueprint_Parms, ReturnValue), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintUtils_CreateBlueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintUtils_CreateBlueprint_Statics::NewProp_ParentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintUtils_CreateBlueprint_Statics::NewProp_FoldersPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintUtils_CreateBlueprint_Statics::NewProp_BlueprintName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintUtils_CreateBlueprint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintUtils_CreateBlueprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "BlueprintUtils" },
		{ "Comment", "/** \n\x09\x09\xe6\xa0\xb9\xe6\x8d\xae\xe7\x88\xb6\xe7\xb1\xbb\xe5\x88\x9b\xe5\xbb\xba\xe8\x93\x9d\xe5\x9b\xbe \n\x09\x09@ParentClass \xe8\x93\x9d\xe5\x9b\xbe\xe7\xb1\xbb\xe7\x9a\x84\xe7\x88\xb6\xe7\xb1\xbb\n\x09\x09@FoldersPath \xe5\xad\x98\xe6\x94\xbe\xe8\xb7\xaf\xe5\xbe\x84  \xe4\xbe\x8b\xe5\xa6\x82/Game/BP\n\x09\x09@BlueprintName \xe8\x93\x9d\xe5\x9b\xbe\xe5\x91\xbd\xe5\x90\x8d\n\x09*/" },
		{ "DisplayName", "CreateBlueprint" },
		{ "Keywords", "TGYC_AssetTools" },
		{ "ModuleRelativePath", "Public/BlueprintUtils.h" },
		{ "ToolTip", "\xe6\xa0\xb9\xe6\x8d\xae\xe7\x88\xb6\xe7\xb1\xbb\xe5\x88\x9b\xe5\xbb\xba\xe8\x93\x9d\xe5\x9b\xbe\n@ParentClass \xe8\x93\x9d\xe5\x9b\xbe\xe7\xb1\xbb\xe7\x9a\x84\xe7\x88\xb6\xe7\xb1\xbb\n@FoldersPath \xe5\xad\x98\xe6\x94\xbe\xe8\xb7\xaf\xe5\xbe\x84  \xe4\xbe\x8b\xe5\xa6\x82/Game/BP\n@BlueprintName \xe8\x93\x9d\xe5\x9b\xbe\xe5\x91\xbd\xe5\x90\x8d" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintUtils_CreateBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintUtils, nullptr, "CreateBlueprint", nullptr, nullptr, sizeof(BlueprintUtils_eventCreateBlueprint_Parms), Z_Construct_UFunction_UBlueprintUtils_CreateBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintUtils_CreateBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintUtils_CreateBlueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintUtils_CreateBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintUtils_CreateBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintUtils_CreateBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintUtils_GetBlueprintownCompForClass_Statics
	{
		struct BlueprintUtils_eventGetBlueprintownCompForClass_Parms
		{
			UBlueprint* targetbp;
			TSubclassOf<UActorComponent>  findclass;
			TArray<UActorComponent*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetbp;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_findclass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintUtils_GetBlueprintownCompForClass_Statics::NewProp_targetbp = { "targetbp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintUtils_eventGetBlueprintownCompForClass_Parms, targetbp), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBlueprintUtils_GetBlueprintownCompForClass_Statics::NewProp_findclass = { "findclass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintUtils_eventGetBlueprintownCompForClass_Parms, findclass), Z_Construct_UClass_UActorComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintUtils_GetBlueprintownCompForClass_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintUtils_GetBlueprintownCompForClass_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlueprintUtils_GetBlueprintownCompForClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintUtils_eventGetBlueprintownCompForClass_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintUtils_GetBlueprintownCompForClass_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintUtils_GetBlueprintownCompForClass_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintUtils_GetBlueprintownCompForClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintUtils_GetBlueprintownCompForClass_Statics::NewProp_targetbp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintUtils_GetBlueprintownCompForClass_Statics::NewProp_findclass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintUtils_GetBlueprintownCompForClass_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintUtils_GetBlueprintownCompForClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintUtils_GetBlueprintownCompForClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "BlueprintUtils" },
		{ "Comment", "/** \xe6\x8c\x89\xe7\x85\xa7\xe7\x88\xb6\xe7\xb1\xbb\xe8\x8e\xb7\xe5\x8f\x96\xe8\x93\x9d\xe5\x9b\xbe\xe7\x9a\x84\xe7\xbb\x84\xe4\xbb\xb6 */" },
		{ "DisplayName", "GetBlueprintownCompForClass" },
		{ "Keywords", "TGYC_AssetTools" },
		{ "ModuleRelativePath", "Public/BlueprintUtils.h" },
		{ "ToolTip", "\xe6\x8c\x89\xe7\x85\xa7\xe7\x88\xb6\xe7\xb1\xbb\xe8\x8e\xb7\xe5\x8f\x96\xe8\x93\x9d\xe5\x9b\xbe\xe7\x9a\x84\xe7\xbb\x84\xe4\xbb\xb6" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintUtils_GetBlueprintownCompForClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintUtils, nullptr, "GetBlueprintownCompForClass", nullptr, nullptr, sizeof(BlueprintUtils_eventGetBlueprintownCompForClass_Parms), Z_Construct_UFunction_UBlueprintUtils_GetBlueprintownCompForClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintUtils_GetBlueprintownCompForClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintUtils_GetBlueprintownCompForClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintUtils_GetBlueprintownCompForClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintUtils_GetBlueprintownCompForClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintUtils_GetBlueprintownCompForClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintUtils_GetBlueprintownCompForName_Statics
	{
		struct BlueprintUtils_eventGetBlueprintownCompForName_Parms
		{
			UBlueprint* targetbp;
			FString compname;
			UActorComponent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetbp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_compname;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintUtils_GetBlueprintownCompForName_Statics::NewProp_targetbp = { "targetbp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintUtils_eventGetBlueprintownCompForName_Parms, targetbp), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintUtils_GetBlueprintownCompForName_Statics::NewProp_compname = { "compname", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintUtils_eventGetBlueprintownCompForName_Parms, compname), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintUtils_GetBlueprintownCompForName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintUtils_GetBlueprintownCompForName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintUtils_eventGetBlueprintownCompForName_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintUtils_GetBlueprintownCompForName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintUtils_GetBlueprintownCompForName_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintUtils_GetBlueprintownCompForName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintUtils_GetBlueprintownCompForName_Statics::NewProp_targetbp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintUtils_GetBlueprintownCompForName_Statics::NewProp_compname,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintUtils_GetBlueprintownCompForName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintUtils_GetBlueprintownCompForName_Statics::Function_MetaDataParams[] = {
		{ "Category", "BlueprintUtils" },
		{ "Comment", "/** \xe6\x8c\x89\xe7\x85\xa7\xe5\x90\x8d\xe7\xa7\xb0\xe8\x8e\xb7\xe5\x8f\x96\xe8\x93\x9d\xe5\x9b\xbe\xe4\xb8\xad\xe7\x9a\x84\xe7\xbb\x84\xe4\xbb\xb6 */" },
		{ "DisplayName", "GetBlueprintownCompForName" },
		{ "Keywords", "TGYC_AssetTools" },
		{ "ModuleRelativePath", "Public/BlueprintUtils.h" },
		{ "ToolTip", "\xe6\x8c\x89\xe7\x85\xa7\xe5\x90\x8d\xe7\xa7\xb0\xe8\x8e\xb7\xe5\x8f\x96\xe8\x93\x9d\xe5\x9b\xbe\xe4\xb8\xad\xe7\x9a\x84\xe7\xbb\x84\xe4\xbb\xb6" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintUtils_GetBlueprintownCompForName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintUtils, nullptr, "GetBlueprintownCompForName", nullptr, nullptr, sizeof(BlueprintUtils_eventGetBlueprintownCompForName_Parms), Z_Construct_UFunction_UBlueprintUtils_GetBlueprintownCompForName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintUtils_GetBlueprintownCompForName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintUtils_GetBlueprintownCompForName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintUtils_GetBlueprintownCompForName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintUtils_GetBlueprintownCompForName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintUtils_GetBlueprintownCompForName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintUtils_GetBlueprintUtilsPtr_Statics
	{
		struct BlueprintUtils_eventGetBlueprintUtilsPtr_Parms
		{
			UBlueprintUtils* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintUtils_GetBlueprintUtilsPtr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintUtils_eventGetBlueprintUtilsPtr_Parms, ReturnValue), Z_Construct_UClass_UBlueprintUtils_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintUtils_GetBlueprintUtilsPtr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintUtils_GetBlueprintUtilsPtr_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintUtils_GetBlueprintUtilsPtr_Statics::Function_MetaDataParams[] = {
		{ "Category", "BlueprintUtils" },
		{ "Comment", "/** \xe8\x8e\xb7\xe5\x8f\x96\xe8\x93\x9d\xe5\x9b\xbe\xe5\xae\x9e\xe7\x94\xa8\xe5\xb7\xa5\xe5\x85\xb7\xe5\xae\x9e\xe4\xbe\x8b\xe5\xaf\xb9\xe8\xb1\xa1 */" },
		{ "DisplayName", "GetBlueprintUtilsPtr" },
		{ "Keywords", "TGYC_AssetTools" },
		{ "ModuleRelativePath", "Public/BlueprintUtils.h" },
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe8\x93\x9d\xe5\x9b\xbe\xe5\xae\x9e\xe7\x94\xa8\xe5\xb7\xa5\xe5\x85\xb7\xe5\xae\x9e\xe4\xbe\x8b\xe5\xaf\xb9\xe8\xb1\xa1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintUtils_GetBlueprintUtilsPtr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintUtils, nullptr, "GetBlueprintUtilsPtr", nullptr, nullptr, sizeof(BlueprintUtils_eventGetBlueprintUtilsPtr_Parms), Z_Construct_UFunction_UBlueprintUtils_GetBlueprintUtilsPtr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintUtils_GetBlueprintUtilsPtr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintUtils_GetBlueprintUtilsPtr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintUtils_GetBlueprintUtilsPtr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintUtils_GetBlueprintUtilsPtr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintUtils_GetBlueprintUtilsPtr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintUtils_MakeBlueprintBegin_Statics
	{
		struct BlueprintUtils_eventMakeBlueprintBegin_Parms
		{
			UBlueprint* blueprint;
			TArray<FString> makedata;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_blueprint;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_makedata_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_makedata;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintUtils_MakeBlueprintBegin_Statics::NewProp_blueprint = { "blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintUtils_eventMakeBlueprintBegin_Parms, blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintUtils_MakeBlueprintBegin_Statics::NewProp_makedata_Inner = { "makedata", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlueprintUtils_MakeBlueprintBegin_Statics::NewProp_makedata = { "makedata", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintUtils_eventMakeBlueprintBegin_Parms, makedata), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlueprintUtils_MakeBlueprintBegin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintUtils_eventMakeBlueprintBegin_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintUtils_MakeBlueprintBegin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintUtils_eventMakeBlueprintBegin_Parms), &Z_Construct_UFunction_UBlueprintUtils_MakeBlueprintBegin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintUtils_MakeBlueprintBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintUtils_MakeBlueprintBegin_Statics::NewProp_blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintUtils_MakeBlueprintBegin_Statics::NewProp_makedata_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintUtils_MakeBlueprintBegin_Statics::NewProp_makedata,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintUtils_MakeBlueprintBegin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintUtils_MakeBlueprintBegin_Statics::Function_MetaDataParams[] = {
		{ "Category", "BlueprintUtils" },
		{ "Comment", "/** \n\x09\x09\xe8\xa3\x85\xe9\x85\x8d\xe8\x93\x9d\xe5\x9b\xbe\xe4\xb8\xbb\xe5\x85\xa5\xe5\x8f\xa3 \xe8\xbe\x93\xe5\x85\xa5\xe8\xa3\x85\xe9\x85\x8d\xe6\x95\xb0\xe6\x8d\xae \n\x09\x09@blueprint     \xe9\x9c\x80\xe8\xa6\x81\xe8\xa3\x85\xe9\x85\x8d\xe7\x9a\x84\xe8\x93\x9d\xe5\x9b\xbe\n\x09\x09@makedata      \xe8\xa3\x85\xe9\x85\x8d\xe6\x95\xb0\xe6\x8d\xae\n\x09\x09@return        \xe8\xa3\x85\xe9\x85\x8d\xe6\x98\xaf\xe5\x90\xa6\xe6\x88\x90\xe5\x8a\x9f\n\x09*/" },
		{ "DisplayName", "MakeBlueprintBegin" },
		{ "Keywords", "TGYC_AssetTools" },
		{ "ModuleRelativePath", "Public/BlueprintUtils.h" },
		{ "ToolTip", "\xe8\xa3\x85\xe9\x85\x8d\xe8\x93\x9d\xe5\x9b\xbe\xe4\xb8\xbb\xe5\x85\xa5\xe5\x8f\xa3 \xe8\xbe\x93\xe5\x85\xa5\xe8\xa3\x85\xe9\x85\x8d\xe6\x95\xb0\xe6\x8d\xae\n@blueprint     \xe9\x9c\x80\xe8\xa6\x81\xe8\xa3\x85\xe9\x85\x8d\xe7\x9a\x84\xe8\x93\x9d\xe5\x9b\xbe\n@makedata      \xe8\xa3\x85\xe9\x85\x8d\xe6\x95\xb0\xe6\x8d\xae\n@return        \xe8\xa3\x85\xe9\x85\x8d\xe6\x98\xaf\xe5\x90\xa6\xe6\x88\x90\xe5\x8a\x9f" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintUtils_MakeBlueprintBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintUtils, nullptr, "MakeBlueprintBegin", nullptr, nullptr, sizeof(BlueprintUtils_eventMakeBlueprintBegin_Parms), Z_Construct_UFunction_UBlueprintUtils_MakeBlueprintBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintUtils_MakeBlueprintBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintUtils_MakeBlueprintBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintUtils_MakeBlueprintBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintUtils_MakeBlueprintBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintUtils_MakeBlueprintBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAsset_Statics
	{
		struct BlueprintUtils_eventSetBlueprintComponentAsset_Parms
		{
			UActorComponent* targetobj;
			FAssetData compsetasset;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetobj_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetobj;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_compsetasset;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAsset_Statics::NewProp_targetobj_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAsset_Statics::NewProp_targetobj = { "targetobj", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintUtils_eventSetBlueprintComponentAsset_Parms, targetobj), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAsset_Statics::NewProp_targetobj_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAsset_Statics::NewProp_targetobj_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAsset_Statics::NewProp_compsetasset = { "compsetasset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintUtils_eventSetBlueprintComponentAsset_Parms, compsetasset), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintUtils_eventSetBlueprintComponentAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintUtils_eventSetBlueprintComponentAsset_Parms), &Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAsset_Statics::NewProp_targetobj,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAsset_Statics::NewProp_compsetasset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "BlueprintUtils" },
		{ "Comment", "/**\n\x09\x09\xe8\xae\xbe\xe7\xbd\xae\xe8\x93\x9d\xe5\x9b\xbe\xe7\xbb\x84\xe4\xbb\xb6\xe7\x9a\x84\xe8\xb5\x84\xe4\xba\xa7\n\x09\x09@targetobj\x09\x09\x09\x09\xe7\x9b\xae\xe6\xa0\x87\xe7\xbb\x84\xe4\xbb\xb6\n\x09\x09@compsetfuncname\x09\x09\xe7\xbb\x84\xe4\xbb\xb6\xe8\xae\xbe\xe7\xbd\xae\xe8\xb5\x84\xe4\xba\xa7\xe5\x87\xbd\xe6\x95\xb0\xe5\x90\x8d\n\x09\x09@packagename\x09\x09\x09\xe8\xb5\x84\xe4\xba\xa7\xe8\xb7\xaf\xe5\xbe\x84\x09\x09\x09\n\x09\n\x09*/" },
		{ "DisplayName", "SetBlueprintComponentAsset" },
		{ "Keywords", "TGYC_AssetTools" },
		{ "ModuleRelativePath", "Public/BlueprintUtils.h" },
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe8\x93\x9d\xe5\x9b\xbe\xe7\xbb\x84\xe4\xbb\xb6\xe7\x9a\x84\xe8\xb5\x84\xe4\xba\xa7\n@targetobj                              \xe7\x9b\xae\xe6\xa0\x87\xe7\xbb\x84\xe4\xbb\xb6\n@compsetfuncname                \xe7\xbb\x84\xe4\xbb\xb6\xe8\xae\xbe\xe7\xbd\xae\xe8\xb5\x84\xe4\xba\xa7\xe5\x87\xbd\xe6\x95\xb0\xe5\x90\x8d\n@packagename                    \xe8\xb5\x84\xe4\xba\xa7\xe8\xb7\xaf\xe5\xbe\x84" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintUtils, nullptr, "SetBlueprintComponentAsset", nullptr, nullptr, sizeof(BlueprintUtils_eventSetBlueprintComponentAsset_Parms), Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAssets_Statics
	{
		struct BlueprintUtils_eventSetBlueprintComponentAssets_Parms
		{
			UActorComponent* targetobj;
			TArray<FAssetData> compsetasset;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetobj_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetobj;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_compsetasset_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_compsetasset;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAssets_Statics::NewProp_targetobj_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAssets_Statics::NewProp_targetobj = { "targetobj", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintUtils_eventSetBlueprintComponentAssets_Parms, targetobj), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAssets_Statics::NewProp_targetobj_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAssets_Statics::NewProp_targetobj_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAssets_Statics::NewProp_compsetasset_Inner = { "compsetasset", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAssets_Statics::NewProp_compsetasset = { "compsetasset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintUtils_eventSetBlueprintComponentAssets_Parms, compsetasset), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAssets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintUtils_eventSetBlueprintComponentAssets_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintUtils_eventSetBlueprintComponentAssets_Parms), &Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAssets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAssets_Statics::NewProp_targetobj,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAssets_Statics::NewProp_compsetasset_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAssets_Statics::NewProp_compsetasset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAssets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "BlueprintUtils" },
		{ "Comment", "/**\n\x09\x09\xe8\xae\xbe\xe7\xbd\xae\xe8\x93\x9d\xe5\x9b\xbe\xe7\xbb\x84\xe4\xbb\xb6\xe7\x9a\x84\xe8\xb5\x84\xe4\xba\xa7\xe5\xbd\x93\xe5\xad\x98\xe5\x9c\xa8\xe5\xa4\x8d\xe6\x95\xb0\xe8\xb5\x84\xe4\xba\xa7\xe6\x97\xb6\n\x09\x09@targetobj\x09\x09\x09\x09\xe7\x9b\xae\xe6\xa0\x87\xe7\xbb\x84\xe4\xbb\xb6\n\x09\x09@compsetasset\x09\x09\x09\xe8\xb5\x84\xe4\xba\xa7\xe7\xbe\xa4\n\n\x09*/" },
		{ "DisplayName", "SetBlueprintComponentAssets" },
		{ "Keywords", "TGYC_AssetTools" },
		{ "ModuleRelativePath", "Public/BlueprintUtils.h" },
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe8\x93\x9d\xe5\x9b\xbe\xe7\xbb\x84\xe4\xbb\xb6\xe7\x9a\x84\xe8\xb5\x84\xe4\xba\xa7\xe5\xbd\x93\xe5\xad\x98\xe5\x9c\xa8\xe5\xa4\x8d\xe6\x95\xb0\xe8\xb5\x84\xe4\xba\xa7\xe6\x97\xb6\n@targetobj                              \xe7\x9b\xae\xe6\xa0\x87\xe7\xbb\x84\xe4\xbb\xb6\n@compsetasset                   \xe8\xb5\x84\xe4\xba\xa7\xe7\xbe\xa4" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintUtils, nullptr, "SetBlueprintComponentAssets", nullptr, nullptr, sizeof(BlueprintUtils_eventSetBlueprintComponentAssets_Parms), Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBlueprintUtils_NoRegister()
	{
		return UBlueprintUtils::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bf_makedata_ValueProp;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bf_makedata_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bf_makedata_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_bf_makedata;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorAssetTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlueprintUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueprintUtils_AddBlueprintComponent, "AddBlueprintComponent" }, // 4247734193
		{ &Z_Construct_UFunction_UBlueprintUtils_CastToBlueprint, "CastToBlueprint" }, // 328008530
		{ &Z_Construct_UFunction_UBlueprintUtils_CreateBlueprint, "CreateBlueprint" }, // 2031199420
		{ &Z_Construct_UFunction_UBlueprintUtils_GetBlueprintownCompForClass, "GetBlueprintownCompForClass" }, // 982977805
		{ &Z_Construct_UFunction_UBlueprintUtils_GetBlueprintownCompForName, "GetBlueprintownCompForName" }, // 3874175869
		{ &Z_Construct_UFunction_UBlueprintUtils_GetBlueprintUtilsPtr, "GetBlueprintUtilsPtr" }, // 1239294365
		{ &Z_Construct_UFunction_UBlueprintUtils_MakeBlueprintBegin, "MakeBlueprintBegin" }, // 1337645908
		{ &Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAsset, "SetBlueprintComponentAsset" }, // 3262111175
		{ &Z_Construct_UFunction_UBlueprintUtils_SetBlueprintComponentAssets, "SetBlueprintComponentAssets" }, // 1788866928
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintUtils_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BlueprintUtils.h" },
		{ "ModuleRelativePath", "Public/BlueprintUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprintUtils_Statics::NewProp_bf_makedata_ValueProp = { "bf_makedata", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UBaseFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBlueprintUtils_Statics::NewProp_bf_makedata_Key_KeyProp = { "bf_makedata_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintUtils_Statics::NewProp_bf_makedata_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBlueprintUtils_Statics::NewProp_bf_makedata = { "bf_makedata", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintUtils, bf_makedata), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprintUtils_Statics::NewProp_bf_makedata_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintUtils_Statics::NewProp_bf_makedata_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintUtils_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintUtils_Statics::NewProp_bf_makedata_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintUtils_Statics::NewProp_bf_makedata_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintUtils_Statics::NewProp_bf_makedata,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintUtils>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintUtils_Statics::ClassParams = {
		&UBlueprintUtils::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBlueprintUtils_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintUtils_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintUtils()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlueprintUtils_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlueprintUtils, 4147895948);
	template<> EDITORASSETTOOLS_API UClass* StaticClass<UBlueprintUtils>()
	{
		return UBlueprintUtils::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprintUtils(Z_Construct_UClass_UBlueprintUtils, &UBlueprintUtils::StaticClass, TEXT("/Script/EditorAssetTools"), TEXT("UBlueprintUtils"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintUtils);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
