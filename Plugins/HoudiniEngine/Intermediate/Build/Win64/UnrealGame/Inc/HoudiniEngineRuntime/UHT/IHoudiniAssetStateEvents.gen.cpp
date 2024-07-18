// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/IHoudiniAssetStateEvents.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIHoudiniAssetStateEvents() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetStateEvents();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetStateEvents_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Interface UHoudiniAssetStateEvents
void UHoudiniAssetStateEvents::StaticRegisterNativesUHoudiniAssetStateEvents()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniAssetStateEvents);
UClass* Z_Construct_UClass_UHoudiniAssetStateEvents_NoRegister()
{
	return UHoudiniAssetStateEvents::StaticClass();
}
struct Z_Construct_UClass_UHoudiniAssetStateEvents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/IHoudiniAssetStateEvents.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IHoudiniAssetStateEvents>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHoudiniAssetStateEvents_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetStateEvents_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniAssetStateEvents_Statics::ClassParams = {
	&UHoudiniAssetStateEvents::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetStateEvents_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniAssetStateEvents_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniAssetStateEvents()
{
	if (!Z_Registration_Info_UClass_UHoudiniAssetStateEvents.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniAssetStateEvents.OuterSingleton, Z_Construct_UClass_UHoudiniAssetStateEvents_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniAssetStateEvents.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniAssetStateEvents>()
{
	return UHoudiniAssetStateEvents::StaticClass();
}
UHoudiniAssetStateEvents::UHoudiniAssetStateEvents(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniAssetStateEvents);
UHoudiniAssetStateEvents::~UHoudiniAssetStateEvents() {}
// End Interface UHoudiniAssetStateEvents

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_IHoudiniAssetStateEvents_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniAssetStateEvents, UHoudiniAssetStateEvents::StaticClass, TEXT("UHoudiniAssetStateEvents"), &Z_Registration_Info_UClass_UHoudiniAssetStateEvents, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniAssetStateEvents), 2434475939U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_IHoudiniAssetStateEvents_h_4011623271(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_IHoudiniAssetStateEvents_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_IHoudiniAssetStateEvents_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
