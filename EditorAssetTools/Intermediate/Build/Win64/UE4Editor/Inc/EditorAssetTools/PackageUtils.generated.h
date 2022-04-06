// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAssetData;
struct FAssetRegistryDependencyOptions;
class UStaticMesh;
class UPackageUtils;
#ifdef EDITORASSETTOOLS_PackageUtils_generated_h
#error "PackageUtils.generated.h already included, missing '#pragma once' in PackageUtils.h"
#endif
#define EDITORASSETTOOLS_PackageUtils_generated_h

#define HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_PackageUtils_h_19_SPARSE_DATA
#define HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_PackageUtils_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPackageDataForString); \
	DECLARE_FUNCTION(execAnalysisDependencies); \
	DECLARE_FUNCTION(execSetStaticMeshCollisionPrimitives); \
	DECLARE_FUNCTION(execGetStaticMeshRenderData); \
	DECLARE_FUNCTION(execGetPackageUtilsPtr);


#define HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_PackageUtils_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPackageDataForString); \
	DECLARE_FUNCTION(execAnalysisDependencies); \
	DECLARE_FUNCTION(execSetStaticMeshCollisionPrimitives); \
	DECLARE_FUNCTION(execGetStaticMeshRenderData); \
	DECLARE_FUNCTION(execGetPackageUtilsPtr);


#define HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_PackageUtils_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPackageUtils(); \
	friend struct Z_Construct_UClass_UPackageUtils_Statics; \
public: \
	DECLARE_CLASS(UPackageUtils, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorAssetTools"), NO_API) \
	DECLARE_SERIALIZER(UPackageUtils)


#define HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_PackageUtils_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUPackageUtils(); \
	friend struct Z_Construct_UClass_UPackageUtils_Statics; \
public: \
	DECLARE_CLASS(UPackageUtils, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorAssetTools"), NO_API) \
	DECLARE_SERIALIZER(UPackageUtils)


#define HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_PackageUtils_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPackageUtils(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPackageUtils) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPackageUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPackageUtils); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPackageUtils(UPackageUtils&&); \
	NO_API UPackageUtils(const UPackageUtils&); \
public:


#define HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_PackageUtils_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPackageUtils(UPackageUtils&&); \
	NO_API UPackageUtils(const UPackageUtils&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPackageUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPackageUtils); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPackageUtils)


#define HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_PackageUtils_h_19_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_PackageUtils_h_16_PROLOG
#define HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_PackageUtils_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_PackageUtils_h_19_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_PackageUtils_h_19_SPARSE_DATA \
	HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_PackageUtils_h_19_RPC_WRAPPERS \
	HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_PackageUtils_h_19_INCLASS \
	HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_PackageUtils_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_PackageUtils_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_PackageUtils_h_19_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_PackageUtils_h_19_SPARSE_DATA \
	HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_PackageUtils_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_PackageUtils_h_19_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_PackageUtils_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EDITORASSETTOOLS_API UClass* StaticClass<class UPackageUtils>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_PackageUtils_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
