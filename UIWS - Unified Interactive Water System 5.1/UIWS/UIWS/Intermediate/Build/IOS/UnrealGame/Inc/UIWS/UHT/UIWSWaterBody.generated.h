// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UIWSWaterBody.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef UIWS_UIWSWaterBody_generated_h
#error "UIWSWaterBody.generated.h already included, missing '#pragma once' in UIWSWaterBody.h"
#endif
#define UIWS_UIWSWaterBody_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_28_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRequestPriorityManual); \
	DECLARE_FUNCTION(execApplyForceAtLocation); \
	DECLARE_FUNCTION(execOnWaterOverlap); \
	DECLARE_FUNCTION(execRadialDamageSplashAtlocation); \
	DECLARE_FUNCTION(execPointDamageSplashAtlocation); \
	DECLARE_FUNCTION(execSplashAtlocation);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRequestPriorityManual); \
	DECLARE_FUNCTION(execApplyForceAtLocation); \
	DECLARE_FUNCTION(execOnWaterOverlap); \
	DECLARE_FUNCTION(execRadialDamageSplashAtlocation); \
	DECLARE_FUNCTION(execPointDamageSplashAtlocation); \
	DECLARE_FUNCTION(execSplashAtlocation);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_28_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_28_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUIWSWaterBody(); \
	friend struct Z_Construct_UClass_AUIWSWaterBody_Statics; \
public: \
	DECLARE_CLASS(AUIWSWaterBody, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UIWS"), NO_API) \
	DECLARE_SERIALIZER(AUIWSWaterBody)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_28_INCLASS \
private: \
	static void StaticRegisterNativesAUIWSWaterBody(); \
	friend struct Z_Construct_UClass_AUIWSWaterBody_Statics; \
public: \
	DECLARE_CLASS(AUIWSWaterBody, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UIWS"), NO_API) \
	DECLARE_SERIALIZER(AUIWSWaterBody)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUIWSWaterBody(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUIWSWaterBody) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUIWSWaterBody); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUIWSWaterBody); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUIWSWaterBody(AUIWSWaterBody&&); \
	NO_API AUIWSWaterBody(const AUIWSWaterBody&); \
public: \
	NO_API virtual ~AUIWSWaterBody();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUIWSWaterBody(AUIWSWaterBody&&); \
	NO_API AUIWSWaterBody(const AUIWSWaterBody&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUIWSWaterBody); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUIWSWaterBody); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUIWSWaterBody) \
	NO_API virtual ~AUIWSWaterBody();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_25_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_28_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_28_RPC_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_28_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_28_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_28_INCLASS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_28_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_28_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_28_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_28_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UIWS_API UClass* StaticClass<class AUIWSWaterBody>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
