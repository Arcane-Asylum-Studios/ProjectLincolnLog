// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineEditor/Private/HoudiniPresetActorFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniPresetActorFactory() {}

// Begin Cross Module References
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPresetActorFactory();
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPresetActorFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor();
// End Cross Module References

// Begin Class UHoudiniPresetActorFactory
void UHoudiniPresetActorFactory::StaticRegisterNativesUHoudiniPresetActorFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniPresetActorFactory);
UClass* Z_Construct_UClass_UHoudiniPresetActorFactory_NoRegister()
{
	return UHoudiniPresetActorFactory::StaticClass();
}
struct Z_Construct_UClass_UHoudiniPresetActorFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "HoudiniPresetActorFactory.h" },
		{ "ModuleRelativePath", "Private/HoudiniPresetActorFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPresetActorFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHoudiniPresetActorFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPresetActorFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPresetActorFactory_Statics::ClassParams = {
	&UHoudiniPresetActorFactory::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000030ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPresetActorFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniPresetActorFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniPresetActorFactory()
{
	if (!Z_Registration_Info_UClass_UHoudiniPresetActorFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPresetActorFactory.OuterSingleton, Z_Construct_UClass_UHoudiniPresetActorFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniPresetActorFactory.OuterSingleton;
}
template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniPresetActorFactory>()
{
	return UHoudiniPresetActorFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPresetActorFactory);
UHoudiniPresetActorFactory::~UHoudiniPresetActorFactory() {}
// End Class UHoudiniPresetActorFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPresetActorFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniPresetActorFactory, UHoudiniPresetActorFactory::StaticClass, TEXT("UHoudiniPresetActorFactory"), &Z_Registration_Info_UClass_UHoudiniPresetActorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPresetActorFactory), 2629262150U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPresetActorFactory_h_79057957(TEXT("/Script/HoudiniEngineEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPresetActorFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPresetActorFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
