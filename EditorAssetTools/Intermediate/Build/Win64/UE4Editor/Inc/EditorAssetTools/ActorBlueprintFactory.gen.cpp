// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TGYC_AssetTools/Public/BlueprintFactory/ActorBlueprintFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorBlueprintFactory() {}
// Cross Module References
	EDITORASSETTOOLS_API UClass* Z_Construct_UClass_UActorBlueprintFactory_NoRegister();
	EDITORASSETTOOLS_API UClass* Z_Construct_UClass_UActorBlueprintFactory();
	EDITORASSETTOOLS_API UClass* Z_Construct_UClass_UBaseFactory();
	UPackage* Z_Construct_UPackage__Script_EditorAssetTools();
// End Cross Module References
	void UActorBlueprintFactory::StaticRegisterNativesUActorBlueprintFactory()
	{
	}
	UClass* Z_Construct_UClass_UActorBlueprintFactory_NoRegister()
	{
		return UActorBlueprintFactory::StaticClass();
	}
	struct Z_Construct_UClass_UActorBlueprintFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorBlueprintFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorAssetTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorBlueprintFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BlueprintFactory/ActorBlueprintFactory.h" },
		{ "ModuleRelativePath", "Public/BlueprintFactory/ActorBlueprintFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorBlueprintFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorBlueprintFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorBlueprintFactory_Statics::ClassParams = {
		&UActorBlueprintFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActorBlueprintFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorBlueprintFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorBlueprintFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorBlueprintFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorBlueprintFactory, 1001417999);
	template<> EDITORASSETTOOLS_API UClass* StaticClass<UActorBlueprintFactory>()
	{
		return UActorBlueprintFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorBlueprintFactory(Z_Construct_UClass_UActorBlueprintFactory, &UActorBlueprintFactory::StaticClass, TEXT("/Script/EditorAssetTools"), TEXT("UActorBlueprintFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorBlueprintFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
