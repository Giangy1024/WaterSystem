// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UIWS/Public/UIWSInteractorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIWSInteractorComponent() {}
// Cross Module References
	UIWS_API UClass* Z_Construct_UClass_UUIWSInteractorComponent_NoRegister();
	UIWS_API UClass* Z_Construct_UClass_UUIWSInteractorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_UIWS();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUIWSInteractorComponent::execUpdateComponentList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateComponentList();
		P_NATIVE_END;
	}
	void UUIWSInteractorComponent::StaticRegisterNativesUUIWSInteractorComponent()
	{
		UClass* Class = UUIWSInteractorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateComponentList", &UUIWSInteractorComponent::execUpdateComponentList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUIWSInteractorComponent_UpdateComponentList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIWSInteractorComponent_UpdateComponentList_Statics::Function_MetaDataParams[] = {
		{ "Category", "UIWS" },
		{ "Comment", "/**Called to update list of static and skeletal mesh comps.  Call it whenever you add another component if you need want this component to control it's interactivity state*/" },
		{ "ModuleRelativePath", "Public/UIWSInteractorComponent.h" },
		{ "ToolTip", "Called to update list of static and skeletal mesh comps.  Call it whenever you add another component if you need want this component to control it's interactivity state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIWSInteractorComponent_UpdateComponentList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIWSInteractorComponent, nullptr, "UpdateComponentList", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIWSInteractorComponent_UpdateComponentList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIWSInteractorComponent_UpdateComponentList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIWSInteractorComponent_UpdateComponentList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIWSInteractorComponent_UpdateComponentList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUIWSInteractorComponent);
	UClass* Z_Construct_UClass_UUIWSInteractorComponent_NoRegister()
	{
		return UUIWSInteractorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUIWSInteractorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldInteract_MetaData[];
#endif
		static void NewProp_bShouldInteract_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldInteract;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableInteractiveStateSwitching_MetaData[];
#endif
		static void NewProp_bEnableInteractiveStateSwitching_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableInteractiveStateSwitching;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinInteractionVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinInteractionVelocity;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Statics_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Statics_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Statics;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Skels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Skels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUIWSInteractorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UIWS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUIWSInteractorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIWSInteractorComponent_UpdateComponentList, "UpdateComponentList" }, // 1232970142
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIWSInteractorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Cooking Input Replication Tags Component Replication" },
		{ "IncludePath", "UIWSInteractorComponent.h" },
		{ "ModuleRelativePath", "Public/UIWSInteractorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIWSInteractorComponent_Statics::NewProp_bShouldInteract_MetaData[] = {
		{ "Category", "UIWS" },
		{ "Comment", "/**Enable/disable water ripples. (this just enables or disables custom depth on all child components - no need to use the component if you want to set those values yourself elsewhere)*/" },
		{ "ModuleRelativePath", "Public/UIWSInteractorComponent.h" },
		{ "ToolTip", "Enable/disable water ripples. (this just enables or disables custom depth on all child components - no need to use the component if you want to set those values yourself elsewhere)" },
	};
#endif
	void Z_Construct_UClass_UUIWSInteractorComponent_Statics::NewProp_bShouldInteract_SetBit(void* Obj)
	{
		((UUIWSInteractorComponent*)Obj)->bShouldInteract = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUIWSInteractorComponent_Statics::NewProp_bShouldInteract = { "bShouldInteract", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUIWSInteractorComponent), &Z_Construct_UClass_UUIWSInteractorComponent_Statics::NewProp_bShouldInteract_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUIWSInteractorComponent_Statics::NewProp_bShouldInteract_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIWSInteractorComponent_Statics::NewProp_bShouldInteract_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIWSInteractorComponent_Statics::NewProp_bEnableInteractiveStateSwitching_MetaData[] = {
		{ "Category", "UIWS" },
		{ "EditCondition", "bShouldInteract" },
		{ "ModuleRelativePath", "Public/UIWSInteractorComponent.h" },
	};
#endif
	void Z_Construct_UClass_UUIWSInteractorComponent_Statics::NewProp_bEnableInteractiveStateSwitching_SetBit(void* Obj)
	{
		((UUIWSInteractorComponent*)Obj)->bEnableInteractiveStateSwitching = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUIWSInteractorComponent_Statics::NewProp_bEnableInteractiveStateSwitching = { "bEnableInteractiveStateSwitching", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUIWSInteractorComponent), &Z_Construct_UClass_UUIWSInteractorComponent_Statics::NewProp_bEnableInteractiveStateSwitching_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUIWSInteractorComponent_Statics::NewProp_bEnableInteractiveStateSwitching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIWSInteractorComponent_Statics::NewProp_bEnableInteractiveStateSwitching_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIWSInteractorComponent_Statics::NewProp_MinInteractionVelocity_MetaData[] = {
		{ "Category", "UIWS" },
		{ "Comment", "/**Any actor velocity lower than this will disable interaction\n\x09This solves any unwated/unrealistic ripples caused by an object being permanently in water.\n\x09Not ideal for skeletal meshes as you may want their animations to impact water despite no actor movement.\n\x09Will extend in the future.\n\x09*/" },
		{ "EditCondition", "bEnableInteractiveStateSwitching" },
		{ "ModuleRelativePath", "Public/UIWSInteractorComponent.h" },
		{ "ToolTip", "Any actor velocity lower than this will disable interaction\n       This solves any unwated/unrealistic ripples caused by an object being permanently in water.\n       Not ideal for skeletal meshes as you may want their animations to impact water despite no actor movement.\n       Will extend in the future." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUIWSInteractorComponent_Statics::NewProp_MinInteractionVelocity = { "MinInteractionVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUIWSInteractorComponent, MinInteractionVelocity), METADATA_PARAMS(Z_Construct_UClass_UUIWSInteractorComponent_Statics::NewProp_MinInteractionVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIWSInteractorComponent_Statics::NewProp_MinInteractionVelocity_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIWSInteractorComponent_Statics::NewProp_Statics_Inner = { "Statics", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIWSInteractorComponent_Statics::NewProp_Statics_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UIWSInteractorComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUIWSInteractorComponent_Statics::NewProp_Statics = { "Statics", nullptr, (EPropertyFlags)0x0020088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUIWSInteractorComponent, Statics), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUIWSInteractorComponent_Statics::NewProp_Statics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIWSInteractorComponent_Statics::NewProp_Statics_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIWSInteractorComponent_Statics::NewProp_Skels_Inner = { "Skels", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIWSInteractorComponent_Statics::NewProp_Skels_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UIWSInteractorComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUIWSInteractorComponent_Statics::NewProp_Skels = { "Skels", nullptr, (EPropertyFlags)0x0020088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUIWSInteractorComponent, Skels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUIWSInteractorComponent_Statics::NewProp_Skels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIWSInteractorComponent_Statics::NewProp_Skels_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUIWSInteractorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWSInteractorComponent_Statics::NewProp_bShouldInteract,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWSInteractorComponent_Statics::NewProp_bEnableInteractiveStateSwitching,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWSInteractorComponent_Statics::NewProp_MinInteractionVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWSInteractorComponent_Statics::NewProp_Statics_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWSInteractorComponent_Statics::NewProp_Statics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWSInteractorComponent_Statics::NewProp_Skels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIWSInteractorComponent_Statics::NewProp_Skels,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUIWSInteractorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIWSInteractorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIWSInteractorComponent_Statics::ClassParams = {
		&UUIWSInteractorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUIWSInteractorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUIWSInteractorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUIWSInteractorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUIWSInteractorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUIWSInteractorComponent()
	{
		if (!Z_Registration_Info_UClass_UUIWSInteractorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIWSInteractorComponent.OuterSingleton, Z_Construct_UClass_UUIWSInteractorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUIWSInteractorComponent.OuterSingleton;
	}
	template<> UIWS_API UClass* StaticClass<UUIWSInteractorComponent>()
	{
		return UUIWSInteractorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIWSInteractorComponent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSInteractorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSInteractorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUIWSInteractorComponent, UUIWSInteractorComponent::StaticClass, TEXT("UUIWSInteractorComponent"), &Z_Registration_Info_UClass_UUIWSInteractorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIWSInteractorComponent), 1640602215U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSInteractorComponent_h_653741536(TEXT("/Script/UIWS"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSInteractorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSInteractorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
