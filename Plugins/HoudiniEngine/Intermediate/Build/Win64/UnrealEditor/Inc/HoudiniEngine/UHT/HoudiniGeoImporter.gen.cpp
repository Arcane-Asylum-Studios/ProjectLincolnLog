// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngine/Private/HoudiniGeoImporter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniGeoImporter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
HOUDINIENGINE_API UClass* Z_Construct_UClass_UHoudiniGeoImporter();
HOUDINIENGINE_API UClass* Z_Construct_UClass_UHoudiniGeoImporter_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngine();
// End Cross Module References

// Begin Class UHoudiniGeoImporter
void UHoudiniGeoImporter::StaticRegisterNativesUHoudiniGeoImporter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniGeoImporter);
UClass* Z_Construct_UClass_UHoudiniGeoImporter_NoRegister()
{
	return UHoudiniGeoImporter::StaticClass();
}
struct Z_Construct_UClass_UHoudiniGeoImporter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniGeoImporter.h" },
		{ "ModuleRelativePath", "Private/HoudiniGeoImporter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniGeoImporter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHoudiniGeoImporter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniGeoImporter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniGeoImporter_Statics::ClassParams = {
	&UHoudiniGeoImporter::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniGeoImporter_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniGeoImporter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniGeoImporter()
{
	if (!Z_Registration_Info_UClass_UHoudiniGeoImporter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniGeoImporter.OuterSingleton, Z_Construct_UClass_UHoudiniGeoImporter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniGeoImporter.OuterSingleton;
}
template<> HOUDINIENGINE_API UClass* StaticClass<UHoudiniGeoImporter>()
{
	return UHoudiniGeoImporter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniGeoImporter);
UHoudiniGeoImporter::~UHoudiniGeoImporter() {}
// End Class UHoudiniGeoImporter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniGeoImporter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniGeoImporter, UHoudiniGeoImporter::StaticClass, TEXT("UHoudiniGeoImporter"), &Z_Registration_Info_UClass_UHoudiniGeoImporter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniGeoImporter), 4174900852U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniGeoImporter_h_1102467777(TEXT("/Script/HoudiniEngine"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniGeoImporter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniGeoImporter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
