// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TGYC_AssetTools/Public/BlueprintFactory/FactoryData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFactoryData() {}
// Cross Module References
	EDITORASSETTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FActorBlueprintFactoryData();
	UPackage* Z_Construct_UPackage__Script_EditorAssetTools();
	EDITORASSETTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FBaseFactoryData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	EDITORASSETTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FMakeComponentData();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
// End Cross Module References

static_assert(std::is_polymorphic<FActorBlueprintFactoryData>() == std::is_polymorphic<FBaseFactoryData>(), "USTRUCT FActorBlueprintFactoryData cannot be polymorphic unless super FBaseFactoryData is polymorphic");

class UScriptStruct* FActorBlueprintFactoryData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITORASSETTOOLS_API uint32 Get_Z_Construct_UScriptStruct_FActorBlueprintFactoryData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorBlueprintFactoryData, Z_Construct_UPackage__Script_EditorAssetTools(), TEXT("ActorBlueprintFactoryData"), sizeof(FActorBlueprintFactoryData), Get_Z_Construct_UScriptStruct_FActorBlueprintFactoryData_Hash());
	}
	return Singleton;
}
template<> EDITORASSETTOOLS_API UScriptStruct* StaticStruct<FActorBlueprintFactoryData>()
{
	return FActorBlueprintFactoryData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActorBlueprintFactoryData(FActorBlueprintFactoryData::StaticStruct, TEXT("/Script/EditorAssetTools"), TEXT("ActorBlueprintFactoryData"), false, nullptr, nullptr);
static struct FScriptStruct_EditorAssetTools_StaticRegisterNativesFActorBlueprintFactoryData
{
	FScriptStruct_EditorAssetTools_StaticRegisterNativesFActorBlueprintFactoryData()
	{
		UScriptStruct::DeferCppStructOps<FActorBlueprintFactoryData>(FName(TEXT("ActorBlueprintFactoryData")));
	}
} ScriptStruct_EditorAssetTools_StaticRegisterNativesFActorBlueprintFactoryData;
	struct Z_Construct_UScriptStruct_FActorBlueprintFactoryData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_make_compdata_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_make_compdata_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_make_compdata_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_make_compdata;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_makecomponentdata_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_makecomponentdata_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_makecomponentdata;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorBlueprintFactoryData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//????\xce\xaa""Actor????\xcd\xbc?\xe0\xb9\xa4??????\n" },
		{ "ModuleRelativePath", "Public/BlueprintFactory/FactoryData.h" },
		{ "ToolTip", "????\xce\xaa""Actor????\xcd\xbc?\xe0\xb9\xa4??????" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorBlueprintFactoryData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorBlueprintFactoryData>();
	}
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FActorBlueprintFactoryData_Statics::NewProp_make_compdata_ValueProp = { "make_compdata", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FActorBlueprintFactoryData_Statics::NewProp_make_compdata_Key_KeyProp = { "make_compdata_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorBlueprintFactoryData_Statics::NewProp_make_compdata_MetaData[] = {
		{ "Comment", "/* \n\x09\x09????\xd7\xb0??\xd3\xb3???? \n\x09\x09??????\xd4\xb4?\xda\xb3?\xca\xbc?? ????\xd2\xaa???? ?\xcc\xb6?\xd6\xb5\n\x09*/" },
		{ "ModuleRelativePath", "Public/BlueprintFactory/FactoryData.h" },
		{ "ToolTip", "????\xd7\xb0??\xd3\xb3????\n??????\xd4\xb4?\xda\xb3?\xca\xbc?? ????\xd2\xaa???? ?\xcc\xb6?\xd6\xb5" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FActorBlueprintFactoryData_Statics::NewProp_make_compdata = { "make_compdata", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorBlueprintFactoryData, make_compdata), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorBlueprintFactoryData_Statics::NewProp_make_compdata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorBlueprintFactoryData_Statics::NewProp_make_compdata_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorBlueprintFactoryData_Statics::NewProp_makecomponentdata_Inner = { "makecomponentdata", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMakeComponentData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorBlueprintFactoryData_Statics::NewProp_makecomponentdata_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintFactory/FactoryData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActorBlueprintFactoryData_Statics::NewProp_makecomponentdata = { "makecomponentdata", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorBlueprintFactoryData, makecomponentdata), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorBlueprintFactoryData_Statics::NewProp_makecomponentdata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorBlueprintFactoryData_Statics::NewProp_makecomponentdata_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorBlueprintFactoryData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorBlueprintFactoryData_Statics::NewProp_make_compdata_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorBlueprintFactoryData_Statics::NewProp_make_compdata_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorBlueprintFactoryData_Statics::NewProp_make_compdata,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorBlueprintFactoryData_Statics::NewProp_makecomponentdata_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorBlueprintFactoryData_Statics::NewProp_makecomponentdata,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorBlueprintFactoryData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorAssetTools,
		Z_Construct_UScriptStruct_FBaseFactoryData,
		&NewStructOps,
		"ActorBlueprintFactoryData",
		sizeof(FActorBlueprintFactoryData),
		alignof(FActorBlueprintFactoryData),
		Z_Construct_UScriptStruct_FActorBlueprintFactoryData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorBlueprintFactoryData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorBlueprintFactoryData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorBlueprintFactoryData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorBlueprintFactoryData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActorBlueprintFactoryData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditorAssetTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActorBlueprintFactoryData"), sizeof(FActorBlueprintFactoryData), Get_Z_Construct_UScriptStruct_FActorBlueprintFactoryData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActorBlueprintFactoryData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActorBlueprintFactoryData_Hash() { return 1959744351U; }
class UScriptStruct* FBaseFactoryData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITORASSETTOOLS_API uint32 Get_Z_Construct_UScriptStruct_FBaseFactoryData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBaseFactoryData, Z_Construct_UPackage__Script_EditorAssetTools(), TEXT("BaseFactoryData"), sizeof(FBaseFactoryData), Get_Z_Construct_UScriptStruct_FBaseFactoryData_Hash());
	}
	return Singleton;
}
template<> EDITORASSETTOOLS_API UScriptStruct* StaticStruct<FBaseFactoryData>()
{
	return FBaseFactoryData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBaseFactoryData(FBaseFactoryData::StaticStruct, TEXT("/Script/EditorAssetTools"), TEXT("BaseFactoryData"), false, nullptr, nullptr);
static struct FScriptStruct_EditorAssetTools_StaticRegisterNativesFBaseFactoryData
{
	FScriptStruct_EditorAssetTools_StaticRegisterNativesFBaseFactoryData()
	{
		UScriptStruct::DeferCppStructOps<FBaseFactoryData>(FName(TEXT("BaseFactoryData")));
	}
} ScriptStruct_EditorAssetTools_StaticRegisterNativesFBaseFactoryData;
	struct Z_Construct_UScriptStruct_FBaseFactoryData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_makebp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_makebp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseFactoryData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//???????????\xc4\xbd\xe1\xb9\xb9?? ?????\xc2\xbd??\xc4\xb9??????\xdd\xb2?\xcd\xac ???\xd4\xbc\xcc\xb3??????\xe1\xb9\xb9????\xca\xb9??\n" },
		{ "ModuleRelativePath", "Public/BlueprintFactory/FactoryData.h" },
		{ "ToolTip", "???????????\xc4\xbd\xe1\xb9\xb9?? ?????\xc2\xbd??\xc4\xb9??????\xdd\xb2?\xcd\xac ???\xd4\xbc\xcc\xb3??????\xe1\xb9\xb9????\xca\xb9??" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBaseFactoryData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBaseFactoryData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseFactoryData_Statics::NewProp_makebp_MetaData[] = {
		{ "Comment", "//\xd7\xb0????\xc4\xbf????\xcd\xbc\n" },
		{ "ModuleRelativePath", "Public/BlueprintFactory/FactoryData.h" },
		{ "ToolTip", "\xd7\xb0????\xc4\xbf????\xcd\xbc" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBaseFactoryData_Statics::NewProp_makebp = { "makebp", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseFactoryData, makebp), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseFactoryData_Statics::NewProp_makebp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseFactoryData_Statics::NewProp_makebp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBaseFactoryData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseFactoryData_Statics::NewProp_makebp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBaseFactoryData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorAssetTools,
		nullptr,
		&NewStructOps,
		"BaseFactoryData",
		sizeof(FBaseFactoryData),
		alignof(FBaseFactoryData),
		Z_Construct_UScriptStruct_FBaseFactoryData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseFactoryData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseFactoryData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseFactoryData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBaseFactoryData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBaseFactoryData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditorAssetTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BaseFactoryData"), sizeof(FBaseFactoryData), Get_Z_Construct_UScriptStruct_FBaseFactoryData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBaseFactoryData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBaseFactoryData_Hash() { return 228871722U; }
class UScriptStruct* FMakeComponentData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITORASSETTOOLS_API uint32 Get_Z_Construct_UScriptStruct_FMakeComponentData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMakeComponentData, Z_Construct_UPackage__Script_EditorAssetTools(), TEXT("MakeComponentData"), sizeof(FMakeComponentData), Get_Z_Construct_UScriptStruct_FMakeComponentData_Hash());
	}
	return Singleton;
}
template<> EDITORASSETTOOLS_API UScriptStruct* StaticStruct<FMakeComponentData>()
{
	return FMakeComponentData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMakeComponentData(FMakeComponentData::StaticStruct, TEXT("/Script/EditorAssetTools"), TEXT("MakeComponentData"), false, nullptr, nullptr);
static struct FScriptStruct_EditorAssetTools_StaticRegisterNativesFMakeComponentData
{
	FScriptStruct_EditorAssetTools_StaticRegisterNativesFMakeComponentData()
	{
		UScriptStruct::DeferCppStructOps<FMakeComponentData>(FName(TEXT("MakeComponentData")));
	}
} ScriptStruct_EditorAssetTools_StaticRegisterNativesFMakeComponentData;
	struct Z_Construct_UScriptStruct_FMakeComponentData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_componentclass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_componentclass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_componentname_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_componentname;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attachtoname_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_attachtoname;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_packagedata_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_packagedata_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_packagedata;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMakeComponentData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//????\xd7\xb0??????\n" },
		{ "ModuleRelativePath", "Public/BlueprintFactory/FactoryData.h" },
		{ "ToolTip", "????\xd7\xb0??????" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMakeComponentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMakeComponentData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMakeComponentData_Statics::NewProp_componentclass_MetaData[] = {
		{ "Comment", "//??????\n" },
		{ "ModuleRelativePath", "Public/BlueprintFactory/FactoryData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMakeComponentData_Statics::NewProp_componentclass = { "componentclass", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMakeComponentData, componentclass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FMakeComponentData_Statics::NewProp_componentclass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeComponentData_Statics::NewProp_componentclass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMakeComponentData_Statics::NewProp_componentname_MetaData[] = {
		{ "Comment", "//\xd7\xb0??????????\n" },
		{ "ModuleRelativePath", "Public/BlueprintFactory/FactoryData.h" },
		{ "ToolTip", "\xd7\xb0??????????" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMakeComponentData_Statics::NewProp_componentname = { "componentname", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMakeComponentData, componentname), METADATA_PARAMS(Z_Construct_UScriptStruct_FMakeComponentData_Statics::NewProp_componentname_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeComponentData_Statics::NewProp_componentname_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMakeComponentData_Statics::NewProp_attachtoname_MetaData[] = {
		{ "Comment", "//????????????\n" },
		{ "ModuleRelativePath", "Public/BlueprintFactory/FactoryData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMakeComponentData_Statics::NewProp_attachtoname = { "attachtoname", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMakeComponentData, attachtoname), METADATA_PARAMS(Z_Construct_UScriptStruct_FMakeComponentData_Statics::NewProp_attachtoname_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeComponentData_Statics::NewProp_attachtoname_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMakeComponentData_Statics::NewProp_packagedata_Inner = { "packagedata", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMakeComponentData_Statics::NewProp_packagedata_MetaData[] = {
		{ "Comment", "//????\xd0\xaf?????\xca\xb2???\xcf\xa2 \xd2\xbb????????\xd2\xbb?????????\xdc\xb9?????\xd2\xbb???\xca\xb2? ??????groom???????????? ????\xd0\xaf??\xd3\xb5?\xd0\xb6????\xca\xb2?????\n" },
		{ "ModuleRelativePath", "Public/BlueprintFactory/FactoryData.h" },
		{ "ToolTip", "????\xd0\xaf?????\xca\xb2???\xcf\xa2 \xd2\xbb????????\xd2\xbb?????????\xdc\xb9?????\xd2\xbb???\xca\xb2? ??????groom???????????? ????\xd0\xaf??\xd3\xb5?\xd0\xb6????\xca\xb2?????" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMakeComponentData_Statics::NewProp_packagedata = { "packagedata", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMakeComponentData, packagedata), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMakeComponentData_Statics::NewProp_packagedata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeComponentData_Statics::NewProp_packagedata_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMakeComponentData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeComponentData_Statics::NewProp_componentclass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeComponentData_Statics::NewProp_componentname,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeComponentData_Statics::NewProp_attachtoname,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeComponentData_Statics::NewProp_packagedata_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeComponentData_Statics::NewProp_packagedata,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMakeComponentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorAssetTools,
		nullptr,
		&NewStructOps,
		"MakeComponentData",
		sizeof(FMakeComponentData),
		alignof(FMakeComponentData),
		Z_Construct_UScriptStruct_FMakeComponentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeComponentData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMakeComponentData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeComponentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMakeComponentData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMakeComponentData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EditorAssetTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MakeComponentData"), sizeof(FMakeComponentData), Get_Z_Construct_UScriptStruct_FMakeComponentData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMakeComponentData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMakeComponentData_Hash() { return 3911639137U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
