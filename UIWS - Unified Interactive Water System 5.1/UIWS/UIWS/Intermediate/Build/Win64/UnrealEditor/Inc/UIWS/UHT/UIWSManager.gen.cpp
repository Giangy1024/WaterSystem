// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UIWS/Public/UIWSManager.h"
#include "Engine/Classes/Engine/CollisionProfile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIWSManager() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPostProcessComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionProfileName();
	UIWS_API UClass* Z_Construct_UClass_AUIWSManager();
	UIWS_API UClass* Z_Construct_UClass_AUIWSManager_NoRegister();
	UIWS_API UClass* Z_Construct_UClass_AUIWSWaterBody_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UIWS();
// End Cross Module References
	void AUIWSManager::StaticRegisterNativesAUIWSManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUIWSManager);
	UClass* Z_Construct_UClass_AUIWSManager_NoRegister()
	{
		return AUIWSManager::StaticClass();
	}
	struct Z_Construct_UClass_AUIWSManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateLightInfo_MetaData[];
#endif
		static void NewProp_UpdateLightInfo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UpdateLightInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldSpawnGlobalPostProcess_MetaData[];
#endif
		static void NewProp_bShouldSpawnGlobalPostProcess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldSpawnGlobalPostProcess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContinuousLightUpdate_MetaData[];
#endif
		static void NewProp_ContinuousLightUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ContinuousLightUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterSimOnPawn_MetaData[];
#endif
		static void NewProp_CenterSimOnPawn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CenterSimOnPawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCustomCollisionProfile_MetaData[];
#endif
		static void NewProp_bCustomCollisionProfile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCustomCollisionProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomCollisionProfile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomCollisionProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WindVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindTurbulence_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WindTurbulence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CausticBrightnessMult_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CausticBrightnessMult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MPC_UIWSWaterBodies_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MPC_UIWSWaterBodies;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ManagedWaterBodies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManagedWaterBodies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ManagedWaterBodies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PostProcessComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPriorityBody_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentPriorityBody;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastPriorityBody_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LastPriorityBody;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUIWSManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UIWS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// One of these per level.  If using level streaming, only one manager in the persistent level is required.  Non needed in sublevels.\n" },
		{ "HideCategories", "Rendering Input Actor Cooking" },
		{ "IncludePath", "UIWSManager.h" },
		{ "ModuleRelativePath", "Public/UIWSManager.h" },
		{ "ToolTip", "One of these per level.  If using level streaming, only one manager in the persistent level is required.  Non needed in sublevels." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSManager_Statics::NewProp_UpdateLightInfo_MetaData[] = {
		{ "Category", "UIWS: Update" },
		{ "Comment", "/** Enable to update light info for the current level.  Just for ease of us in the editor*/" },
		{ "ModuleRelativePath", "Public/UIWSManager.h" },
		{ "ToolTip", "Enable to update light info for the current level.  Just for ease of us in the editor" },
	};
#endif
	void Z_Construct_UClass_AUIWSManager_Statics::NewProp_UpdateLightInfo_SetBit(void* Obj)
	{
		((AUIWSManager*)Obj)->UpdateLightInfo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUIWSManager_Statics::NewProp_UpdateLightInfo = { "UpdateLightInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUIWSManager), &Z_Construct_UClass_AUIWSManager_Statics::NewProp_UpdateLightInfo_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUIWSManager_Statics::NewProp_UpdateLightInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSManager_Statics::NewProp_UpdateLightInfo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSManager_Statics::NewProp_bShouldSpawnGlobalPostProcess_MetaData[] = {
		{ "Category", "UIWS: Simulation" },
		{ "Comment", "/** This post process volume is used so that the underwater volumes blend correctly in game.  It shouldn't conflict with other volumes, but if you're getting strange results uncheck this uproperty*/" },
		{ "ModuleRelativePath", "Public/UIWSManager.h" },
		{ "ToolTip", "This post process volume is used so that the underwater volumes blend correctly in game.  It shouldn't conflict with other volumes, but if you're getting strange results uncheck this uproperty" },
	};
#endif
	void Z_Construct_UClass_AUIWSManager_Statics::NewProp_bShouldSpawnGlobalPostProcess_SetBit(void* Obj)
	{
		((AUIWSManager*)Obj)->bShouldSpawnGlobalPostProcess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUIWSManager_Statics::NewProp_bShouldSpawnGlobalPostProcess = { "bShouldSpawnGlobalPostProcess", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUIWSManager), &Z_Construct_UClass_AUIWSManager_Statics::NewProp_bShouldSpawnGlobalPostProcess_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUIWSManager_Statics::NewProp_bShouldSpawnGlobalPostProcess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSManager_Statics::NewProp_bShouldSpawnGlobalPostProcess_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSManager_Statics::NewProp_ContinuousLightUpdate_MetaData[] = {
		{ "Category", "UIWS: Simulation" },
		{ "Comment", "/** Enable to allow caustic strength and direction to be updated in real-time in game.  Useful if you update your directional light as part of a time of day system*/" },
		{ "ModuleRelativePath", "Public/UIWSManager.h" },
		{ "ToolTip", "Enable to allow caustic strength and direction to be updated in real-time in game.  Useful if you update your directional light as part of a time of day system" },
	};
#endif
	void Z_Construct_UClass_AUIWSManager_Statics::NewProp_ContinuousLightUpdate_SetBit(void* Obj)
	{
		((AUIWSManager*)Obj)->ContinuousLightUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUIWSManager_Statics::NewProp_ContinuousLightUpdate = { "ContinuousLightUpdate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUIWSManager), &Z_Construct_UClass_AUIWSManager_Statics::NewProp_ContinuousLightUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUIWSManager_Statics::NewProp_ContinuousLightUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSManager_Statics::NewProp_ContinuousLightUpdate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSManager_Statics::NewProp_CenterSimOnPawn_MetaData[] = {
		{ "Category", "UIWS: Simulation" },
		{ "Comment", "/** If true, water sim will center on pawn.  If disabled sim will center on camera.  If pawn is invalid (ie dead or not a APawn) sim centers on camera */" },
		{ "ModuleRelativePath", "Public/UIWSManager.h" },
		{ "ToolTip", "If true, water sim will center on pawn.  If disabled sim will center on camera.  If pawn is invalid (ie dead or not a APawn) sim centers on camera" },
	};
#endif
	void Z_Construct_UClass_AUIWSManager_Statics::NewProp_CenterSimOnPawn_SetBit(void* Obj)
	{
		((AUIWSManager*)Obj)->CenterSimOnPawn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUIWSManager_Statics::NewProp_CenterSimOnPawn = { "CenterSimOnPawn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUIWSManager), &Z_Construct_UClass_AUIWSManager_Statics::NewProp_CenterSimOnPawn_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUIWSManager_Statics::NewProp_CenterSimOnPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSManager_Statics::NewProp_CenterSimOnPawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSManager_Statics::NewProp_bCustomCollisionProfile_MetaData[] = {
		{ "Category", "UIWS: Simulation" },
		{ "Comment", "/** Set to true to assign your own collision preset for all water bodies*/" },
		{ "ModuleRelativePath", "Public/UIWSManager.h" },
		{ "ToolTip", "Set to true to assign your own collision preset for all water bodies" },
	};
#endif
	void Z_Construct_UClass_AUIWSManager_Statics::NewProp_bCustomCollisionProfile_SetBit(void* Obj)
	{
		((AUIWSManager*)Obj)->bCustomCollisionProfile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUIWSManager_Statics::NewProp_bCustomCollisionProfile = { "bCustomCollisionProfile", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUIWSManager), &Z_Construct_UClass_AUIWSManager_Statics::NewProp_bCustomCollisionProfile_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUIWSManager_Statics::NewProp_bCustomCollisionProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSManager_Statics::NewProp_bCustomCollisionProfile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSManager_Statics::NewProp_CustomCollisionProfile_MetaData[] = {
		{ "Category", "UIWS: Simulation" },
		{ "Comment", "/** Custom collision preset */" },
		{ "EditCondition", "bCustomCollisionProfile" },
		{ "ModuleRelativePath", "Public/UIWSManager.h" },
		{ "ToolTip", "Custom collision preset" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUIWSManager_Statics::NewProp_CustomCollisionProfile = { "CustomCollisionProfile", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUIWSManager, CustomCollisionProfile), Z_Construct_UScriptStruct_FCollisionProfileName, METADATA_PARAMS(Z_Construct_UClass_AUIWSManager_Statics::NewProp_CustomCollisionProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSManager_Statics::NewProp_CustomCollisionProfile_MetaData)) }; // 2816100078
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSManager_Statics::NewProp_WindVector_MetaData[] = {
		{ "Category", "UIWS: Water Params" },
		{ "Comment", "/** Adjusts water ripple panner for wind speed*/" },
		{ "ModuleRelativePath", "Public/UIWSManager.h" },
		{ "ToolTip", "Adjusts water ripple panner for wind speed" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUIWSManager_Statics::NewProp_WindVector = { "WindVector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUIWSManager, WindVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AUIWSManager_Statics::NewProp_WindVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSManager_Statics::NewProp_WindVector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSManager_Statics::NewProp_WindTurbulence_MetaData[] = {
		{ "Category", "UIWS: Water Params" },
		{ "Comment", "/** Adjusts water ripple motion chaos for wind turbulence*/" },
		{ "ModuleRelativePath", "Public/UIWSManager.h" },
		{ "ToolTip", "Adjusts water ripple motion chaos for wind turbulence" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUIWSManager_Statics::NewProp_WindTurbulence = { "WindTurbulence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUIWSManager, WindTurbulence), METADATA_PARAMS(Z_Construct_UClass_AUIWSManager_Statics::NewProp_WindTurbulence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSManager_Statics::NewProp_WindTurbulence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSManager_Statics::NewProp_CausticBrightnessMult_MetaData[] = {
		{ "Category", "UIWS: Tweaks" },
		{ "Comment", "/** Brightness multiplier applied to caustics.  Set this per level if you need specific overrides*/" },
		{ "ModuleRelativePath", "Public/UIWSManager.h" },
		{ "ToolTip", "Brightness multiplier applied to caustics.  Set this per level if you need specific overrides" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUIWSManager_Statics::NewProp_CausticBrightnessMult = { "CausticBrightnessMult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUIWSManager, CausticBrightnessMult), METADATA_PARAMS(Z_Construct_UClass_AUIWSManager_Statics::NewProp_CausticBrightnessMult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSManager_Statics::NewProp_CausticBrightnessMult_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSManager_Statics::NewProp_MPC_UIWSWaterBodies_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIWSManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSManager_Statics::NewProp_MPC_UIWSWaterBodies = { "MPC_UIWSWaterBodies", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUIWSManager, MPC_UIWSWaterBodies), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSManager_Statics::NewProp_MPC_UIWSWaterBodies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSManager_Statics::NewProp_MPC_UIWSWaterBodies_MetaData)) };
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AUIWSManager_Statics::NewProp_ManagedWaterBodies_Inner = { "ManagedWaterBodies", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AUIWSWaterBody_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSManager_Statics::NewProp_ManagedWaterBodies_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIWSManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUIWSManager_Statics::NewProp_ManagedWaterBodies = { "ManagedWaterBodies", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUIWSManager, ManagedWaterBodies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AUIWSManager_Statics::NewProp_ManagedWaterBodies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSManager_Statics::NewProp_ManagedWaterBodies_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSManager_Statics::NewProp_PostProcessComp_MetaData[] = {
		{ "Category", "UIWS" },
		{ "Comment", "/** This post process volume is used so that the underwater volumes blend correctly in game.  It shouldn't conflict with other volumes, but if you're getting strange results uncheck SpawnPostProcess uproperty on this actor*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UIWSManager.h" },
		{ "ToolTip", "This post process volume is used so that the underwater volumes blend correctly in game.  It shouldn't conflict with other volumes, but if you're getting strange results uncheck SpawnPostProcess uproperty on this actor" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSManager_Statics::NewProp_PostProcessComp = { "PostProcessComp", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUIWSManager, PostProcessComp), Z_Construct_UClass_UPostProcessComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSManager_Statics::NewProp_PostProcessComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSManager_Statics::NewProp_PostProcessComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSManager_Statics::NewProp_CurrentPriorityBody_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIWSManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSManager_Statics::NewProp_CurrentPriorityBody = { "CurrentPriorityBody", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUIWSManager, CurrentPriorityBody), Z_Construct_UClass_AUIWSWaterBody_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSManager_Statics::NewProp_CurrentPriorityBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSManager_Statics::NewProp_CurrentPriorityBody_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSManager_Statics::NewProp_LastPriorityBody_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIWSManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSManager_Statics::NewProp_LastPriorityBody = { "LastPriorityBody", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUIWSManager, LastPriorityBody), Z_Construct_UClass_AUIWSWaterBody_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSManager_Statics::NewProp_LastPriorityBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSManager_Statics::NewProp_LastPriorityBody_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUIWSManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSManager_Statics::NewProp_UpdateLightInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSManager_Statics::NewProp_bShouldSpawnGlobalPostProcess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSManager_Statics::NewProp_ContinuousLightUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSManager_Statics::NewProp_CenterSimOnPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSManager_Statics::NewProp_bCustomCollisionProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSManager_Statics::NewProp_CustomCollisionProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSManager_Statics::NewProp_WindVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSManager_Statics::NewProp_WindTurbulence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSManager_Statics::NewProp_CausticBrightnessMult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSManager_Statics::NewProp_MPC_UIWSWaterBodies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSManager_Statics::NewProp_ManagedWaterBodies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSManager_Statics::NewProp_ManagedWaterBodies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSManager_Statics::NewProp_PostProcessComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSManager_Statics::NewProp_CurrentPriorityBody,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSManager_Statics::NewProp_LastPriorityBody,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUIWSManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUIWSManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUIWSManager_Statics::ClassParams = {
		&AUIWSManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUIWSManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUIWSManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUIWSManager()
	{
		if (!Z_Registration_Info_UClass_AUIWSManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUIWSManager.OuterSingleton, Z_Construct_UClass_AUIWSManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUIWSManager.OuterSingleton;
	}
	template<> UIWS_API UClass* StaticClass<AUIWSManager>()
	{
		return AUIWSManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUIWSManager);
	AUIWSManager::~AUIWSManager() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUIWSManager, AUIWSManager::StaticClass, TEXT("AUIWSManager"), &Z_Registration_Info_UClass_AUIWSManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUIWSManager), 3374907826U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSManager_h_190357897(TEXT("/Script/UIWS"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS