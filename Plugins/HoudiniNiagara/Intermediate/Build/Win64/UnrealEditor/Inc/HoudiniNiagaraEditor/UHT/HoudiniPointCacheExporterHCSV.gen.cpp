// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniNiagaraEditor/Private/HoudiniPointCacheExporterHCSV.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniPointCacheExporterHCSV() {}

// Begin Cross Module References
HOUDININIAGARAEDITOR_API UClass* Z_Construct_UClass_UHoudiniPointCacheExporterBase();
HOUDININIAGARAEDITOR_API UClass* Z_Construct_UClass_UHoudiniPointCacheExporterHCSV();
HOUDININIAGARAEDITOR_API UClass* Z_Construct_UClass_UHoudiniPointCacheExporterHCSV_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniNiagaraEditor();
// End Cross Module References

// Begin Class UHoudiniPointCacheExporterHCSV
void UHoudiniPointCacheExporterHCSV::StaticRegisterNativesUHoudiniPointCacheExporterHCSV()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniPointCacheExporterHCSV);
UClass* Z_Construct_UClass_UHoudiniPointCacheExporterHCSV_NoRegister()
{
	return UHoudiniPointCacheExporterHCSV::StaticClass();
}
struct Z_Construct_UClass_UHoudiniPointCacheExporterHCSV_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniPointCacheExporterHCSV.h" },
		{ "ModuleRelativePath", "Private/HoudiniPointCacheExporterHCSV.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPointCacheExporterHCSV>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHoudiniPointCacheExporterHCSV_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniPointCacheExporterBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniNiagaraEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCacheExporterHCSV_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPointCacheExporterHCSV_Statics::ClassParams = {
	&UHoudiniPointCacheExporterHCSV::StaticClass,
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
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCacheExporterHCSV_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniPointCacheExporterHCSV_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniPointCacheExporterHCSV()
{
	if (!Z_Registration_Info_UClass_UHoudiniPointCacheExporterHCSV.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPointCacheExporterHCSV.OuterSingleton, Z_Construct_UClass_UHoudiniPointCacheExporterHCSV_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniPointCacheExporterHCSV.OuterSingleton;
}
template<> HOUDININIAGARAEDITOR_API UClass* StaticClass<UHoudiniPointCacheExporterHCSV>()
{
	return UHoudiniPointCacheExporterHCSV::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPointCacheExporterHCSV);
UHoudiniPointCacheExporterHCSV::~UHoudiniPointCacheExporterHCSV() {}
// End Class UHoudiniPointCacheExporterHCSV

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagaraEditor_Private_HoudiniPointCacheExporterHCSV_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniPointCacheExporterHCSV, UHoudiniPointCacheExporterHCSV::StaticClass, TEXT("UHoudiniPointCacheExporterHCSV"), &Z_Registration_Info_UClass_UHoudiniPointCacheExporterHCSV, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPointCacheExporterHCSV), 2990004611U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagaraEditor_Private_HoudiniPointCacheExporterHCSV_h_2963771576(TEXT("/Script/HoudiniNiagaraEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagaraEditor_Private_HoudiniPointCacheExporterHCSV_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagaraEditor_Private_HoudiniPointCacheExporterHCSV_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
