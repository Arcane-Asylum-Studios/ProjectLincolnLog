// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniEngineCopyPropertiesInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniEngineCopyPropertiesInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Interface UHoudiniEngineCopyPropertiesInterface
void UHoudiniEngineCopyPropertiesInterface::StaticRegisterNativesUHoudiniEngineCopyPropertiesInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniEngineCopyPropertiesInterface);
UClass* Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface_NoRegister()
{
	return UHoudiniEngineCopyPropertiesInterface::StaticClass();
}
struct Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Private/HoudiniEngineCopyPropertiesInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IHoudiniEngineCopyPropertiesInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface_Statics::ClassParams = {
	&UHoudiniEngineCopyPropertiesInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface()
{
	if (!Z_Registration_Info_UClass_UHoudiniEngineCopyPropertiesInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniEngineCopyPropertiesInterface.OuterSingleton, Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniEngineCopyPropertiesInterface.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniEngineCopyPropertiesInterface>()
{
	return UHoudiniEngineCopyPropertiesInterface::StaticClass();
}
UHoudiniEngineCopyPropertiesInterface::UHoudiniEngineCopyPropertiesInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniEngineCopyPropertiesInterface);
UHoudiniEngineCopyPropertiesInterface::~UHoudiniEngineCopyPropertiesInterface() {}
// End Interface UHoudiniEngineCopyPropertiesInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniEngineCopyPropertiesInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface, UHoudiniEngineCopyPropertiesInterface::StaticClass, TEXT("UHoudiniEngineCopyPropertiesInterface"), &Z_Registration_Info_UClass_UHoudiniEngineCopyPropertiesInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniEngineCopyPropertiesInterface), 994215550U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniEngineCopyPropertiesInterface_h_2397131926(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniEngineCopyPropertiesInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniEngineCopyPropertiesInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
