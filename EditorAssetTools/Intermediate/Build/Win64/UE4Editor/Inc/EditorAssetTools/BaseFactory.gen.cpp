// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TGYC_AssetTools/Public/BlueprintFactory/BaseFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseFactory() {}
// Cross Module References
	EDITORASSETTOOLS_API UClass* Z_Construct_UClass_UBaseFactory_NoRegister();
	EDITORASSETTOOLS_API UClass* Z_Construct_UClass_UBaseFactory();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_EditorAssetTools();
// End Cross Module References
	void UBaseFactory::StaticRegisterNativesUBaseFactory()
	{
	}
	UClass* Z_Construct_UClass_UBaseFactory_NoRegister()
	{
		return UBaseFactory::StaticClass();
	}
	struct Z_Construct_UClass_UBaseFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorAssetTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \xe8\xbf\x99\xe4\xb8\xaa\xe6\x98\xaf\xe8\xa3\x85\xe9\x85\x8d\xe8\x93\x9d\xe5\x9b\xbe\xe7\x9a\x84\xe8\xb4\xa3\xe4\xbb\xbb\xe9\x93\xbe\xe6\xa8\xa1\xe5\xbc\x8f\xe6\x8a\xbd\xe8\xb1\xa1\xe5\x9f\xba\xe7\xb1\xbb\xe5\xb7\xa5\xe5\x8e\x82,\xe5\xb9\xb6\xe4\xb8\x8d\xe8\x83\xbd\xe8\xa2\xab\xe5\xae\x9e\xe4\xbe\x8b\xe5\x8c\x96\n *///\xe5\xa6\x82\xe4\xbd\x95\xe5\xa4\x84\xe7\x90\x86\xe6\x95\xb0\xe6\x8d\xae\xe7\x9a\x84\xe6\x80\x9d\xe8\xb7\xaf \xe9\x80\x9a\xe8\xbf\x87\xe5\x87\xbd\xe6\x95\xb0\xe6\x8c\x87\xe9\x92\x88\xe8\xbf\x9b\xe8\xa1\x8c\xe8\xbd\xae\xe8\xae\xad\xe7\xbb\x99\xe5\x88\xb0\xe7\x9a\x84\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xe6\x95\xb0\xe7\xbb\x84 \xe6\xaf\x8f\xe6\x9d\xa1\xe6\xb5\x81\xe6\xb0\xb4\xe7\xba\xbf\xe5\x8d\x95\xe7\x8b\xac\xe8\x8e\xb7\xe5\x8f\x96\xe8\x87\xaa\xe5\xb7\xb1\xe6\x89\x80\xe9\x9c\x80\xe8\xa6\x81\xe7\x9a\x84 \xe7\x84\xb6\xe5\x90\x8e\xe5\x88\x86\xe5\x88\xab\xe8\xa3\x85\xe9\x85\x8d\xe5\x88\xb0\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\xe4\xb8\xad \xe8\xbf\x99\xe7\xa7\x8d\xe4\xbf\x9d\xe8\xaf\x81\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae\xe4\xb8\x8e\n//\xe6\xb5\x81\xe6\xb0\xb4\xe7\xba\xbf\xe5\x87\xbd\xe6\x95\xb0\xe5\x90\x8c\xe6\x97\xb6\xe5\xa4\x84\xe7\x90\x86 \xe4\xbf\x9d\xe8\xaf\x81\xe6\x95\xb0\xe6\x8d\xae\xe7\xa1\xae\xe5\xae\x9e\xe8\xa2\xab\xe5\xa4\x84\xe7\x90\x86\xe5\xae\x8c\xe5\x85\xa8\n" },
		{ "IncludePath", "BlueprintFactory/BaseFactory.h" },
		{ "ModuleRelativePath", "Public/BlueprintFactory/BaseFactory.h" },
		{ "ToolTip", "\xe8\xbf\x99\xe4\xb8\xaa\xe6\x98\xaf\xe8\xa3\x85\xe9\x85\x8d\xe8\x93\x9d\xe5\x9b\xbe\xe7\x9a\x84\xe8\xb4\xa3\xe4\xbb\xbb\xe9\x93\xbe\xe6\xa8\xa1\xe5\xbc\x8f\xe6\x8a\xbd\xe8\xb1\xa1\xe5\x9f\xba\xe7\xb1\xbb\xe5\xb7\xa5\xe5\x8e\x82,\xe5\xb9\xb6\xe4\xb8\x8d\xe8\x83\xbd\xe8\xa2\xab\xe5\xae\x9e\xe4\xbe\x8b\xe5\x8c\x96\n //\xe5\xa6\x82\xe4\xbd\x95\xe5\xa4\x84\xe7\x90\x86\xe6\x95\xb0\xe6\x8d\xae\xe7\x9a\x84\xe6\x80\x9d\xe8\xb7\xaf \xe9\x80\x9a\xe8\xbf\x87\xe5\x87\xbd\xe6\x95\xb0\xe6\x8c\x87\xe9\x92\x88\xe8\xbf\x9b\xe8\xa1\x8c\xe8\xbd\xae\xe8\xae\xad\xe7\xbb\x99\xe5\x88\xb0\xe7\x9a\x84\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xe6\x95\xb0\xe7\xbb\x84 \xe6\xaf\x8f\xe6\x9d\xa1\xe6\xb5\x81\xe6\xb0\xb4\xe7\xba\xbf\xe5\x8d\x95\xe7\x8b\xac\xe8\x8e\xb7\xe5\x8f\x96\xe8\x87\xaa\xe5\xb7\xb1\xe6\x89\x80\xe9\x9c\x80\xe8\xa6\x81\xe7\x9a\x84 \xe7\x84\xb6\xe5\x90\x8e\xe5\x88\x86\xe5\x88\xab\xe8\xa3\x85\xe9\x85\x8d\xe5\x88\xb0\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\xe4\xb8\xad \xe8\xbf\x99\xe7\xa7\x8d\xe4\xbf\x9d\xe8\xaf\x81\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae\xe4\xb8\x8e\n//\xe6\xb5\x81\xe6\xb0\xb4\xe7\xba\xbf\xe5\x87\xbd\xe6\x95\xb0\xe5\x90\x8c\xe6\x97\xb6\xe5\xa4\x84\xe7\x90\x86 \xe4\xbf\x9d\xe8\xaf\x81\xe6\x95\xb0\xe6\x8d\xae\xe7\xa1\xae\xe5\xae\x9e\xe8\xa2\xab\xe5\xa4\x84\xe7\x90\x86\xe5\xae\x8c\xe5\x85\xa8" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseFactory_Statics::ClassParams = {
		&UBaseFactory::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseFactory, 2995674401);
	template<> EDITORASSETTOOLS_API UClass* StaticClass<UBaseFactory>()
	{
		return UBaseFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseFactory(Z_Construct_UClass_UBaseFactory, &UBaseFactory::StaticClass, TEXT("/Script/EditorAssetTools"), TEXT("UBaseFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
