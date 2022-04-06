// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAssetData;
class UObject;
class UContentBrowerUtils;
#ifdef EDITORASSETTOOLS_ContentBrowerUtils_generated_h
#error "ContentBrowerUtils.generated.h already included, missing '#pragma once' in ContentBrowerUtils.h"
#endif
#define EDITORASSETTOOLS_ContentBrowerUtils_generated_h

#define HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_ContentBrowerUtils_h_17_SPARSE_DATA
#define HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_ContentBrowerUtils_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPhysicalPath); \
	DECLARE_FUNCTION(execGetAssetSourceFilePath); \
	DECLARE_FUNCTION(execGetSelectedFoldersPath); \
	DECLARE_FUNCTION(execGetObjAssetData); \
	DECLARE_FUNCTION(execFindObjInContentBrower); \
	DECLARE_FUNCTION(execGetContentBrowerUtilsPtr);


#define HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_ContentBrowerUtils_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPhysicalPath); \
	DECLARE_FUNCTION(execGetAssetSourceFilePath); \
	DECLARE_FUNCTION(execGetSelectedFoldersPath); \
	DECLARE_FUNCTION(execGetObjAssetData); \
	DECLARE_FUNCTION(execFindObjInContentBrower); \
	DECLARE_FUNCTION(execGetContentBrowerUtilsPtr);


#define HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_ContentBrowerUtils_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContentBrowerUtils(); \
	friend struct Z_Construct_UClass_UContentBrowerUtils_Statics; \
public: \
	DECLARE_CLASS(UContentBrowerUtils, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorAssetTools"), NO_API) \
	DECLARE_SERIALIZER(UContentBrowerUtils)


#define HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_ContentBrowerUtils_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUContentBrowerUtils(); \
	friend struct Z_Construct_UClass_UContentBrowerUtils_Statics; \
public: \
	DECLARE_CLASS(UContentBrowerUtils, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorAssetTools"), NO_API) \
	DECLARE_SERIALIZER(UContentBrowerUtils)


#define HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_ContentBrowerUtils_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UContentBrowerUtils(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContentBrowerUtils) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContentBrowerUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContentBrowerUtils); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UContentBrowerUtils(UContentBrowerUtils&&); \
	NO_API UContentBrowerUtils(const UContentBrowerUtils&); \
public:


#define HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_ContentBrowerUtils_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UContentBrowerUtils(UContentBrowerUtils&&); \
	NO_API UContentBrowerUtils(const UContentBrowerUtils&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContentBrowerUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContentBrowerUtils); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UContentBrowerUtils)


#define HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_ContentBrowerUtils_h_17_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_ContentBrowerUtils_h_14_PROLOG
#define HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_ContentBrowerUtils_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_ContentBrowerUtils_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_ContentBrowerUtils_h_17_SPARSE_DATA \
	HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_ContentBrowerUtils_h_17_RPC_WRAPPERS \
	HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_ContentBrowerUtils_h_17_INCLASS \
	HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_ContentBrowerUtils_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_ContentBrowerUtils_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_ContentBrowerUtils_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_ContentBrowerUtils_h_17_SPARSE_DATA \
	HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_ContentBrowerUtils_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_ContentBrowerUtils_h_17_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_ContentBrowerUtils_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EDITORASSETTOOLS_API UClass* StaticClass<class UContentBrowerUtils>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_EditorAssetTools_Source_TGYC_AssetTools_Public_ContentBrowerUtils_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
