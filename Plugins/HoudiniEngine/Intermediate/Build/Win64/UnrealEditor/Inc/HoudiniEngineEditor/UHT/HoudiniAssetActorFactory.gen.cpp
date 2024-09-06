// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineEditor/Private/HoudiniAssetActorFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniAssetActorFactory() {}

// Begin Cross Module References
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniAssetActorFactory();
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniAssetActorFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor();
// End Cross Module References

// Begin Class UHoudiniAssetActorFactory
void UHoudiniAssetActorFactory::StaticRegisterNativesUHoudiniAssetActorFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniAssetActorFactory);
UClass* Z_Construct_UClass_UHoudiniAssetActorFactory_NoRegister()
{
	return UHoudiniAssetActorFactory::StaticClass();
}
struct Z_Construct_UClass_UHoudiniAssetActorFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "HoudiniAssetActorFactory.h" },
		{ "ModuleRelativePath", "Private/HoudiniAssetActorFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniAssetActorFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHoudiniAssetActorFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetActorFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniAssetActorFactory_Statics::ClassParams = {
	&UHoudiniAssetActorFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetActorFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniAssetActorFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniAssetActorFactory()
{
	if (!Z_Registration_Info_UClass_UHoudiniAssetActorFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniAssetActorFactory.OuterSingleton, Z_Construct_UClass_UHoudiniAssetActorFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniAssetActorFactory.OuterSingleton;
}
template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniAssetActorFactory>()
{
	return UHoudiniAssetActorFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniAssetActorFactory);
UHoudiniAssetActorFactory::~UHoudiniAssetActorFactory() {}
// End Class UHoudiniAssetActorFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniAssetActorFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniAssetActorFactory, UHoudiniAssetActorFactory::StaticClass, TEXT("UHoudiniAssetActorFactory"), &Z_Registration_Info_UClass_UHoudiniAssetActorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniAssetActorFactory), 1200111783U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniAssetActorFactory_h_3223133702(TEXT("/Script/HoudiniEngineEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniAssetActorFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniAssetActorFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
