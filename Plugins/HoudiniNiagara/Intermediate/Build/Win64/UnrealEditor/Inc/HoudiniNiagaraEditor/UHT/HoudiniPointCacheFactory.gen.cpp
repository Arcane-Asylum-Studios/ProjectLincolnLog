// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniNiagaraEditor/Public/HoudiniPointCacheFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniPointCacheFactory() {}

// Begin Cross Module References
HOUDININIAGARAEDITOR_API UClass* Z_Construct_UClass_UHoudiniPointCacheFactory();
HOUDININIAGARAEDITOR_API UClass* Z_Construct_UClass_UHoudiniPointCacheFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_HoudiniNiagaraEditor();
// End Cross Module References

// Begin Class UHoudiniPointCacheFactory
void UHoudiniPointCacheFactory::StaticRegisterNativesUHoudiniPointCacheFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniPointCacheFactory);
UClass* Z_Construct_UClass_UHoudiniPointCacheFactory_NoRegister()
{
	return UHoudiniPointCacheFactory::StaticClass();
}
struct Z_Construct_UClass_UHoudiniPointCacheFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A factory for HoudiniPointCache assets. */" },
#endif
		{ "IncludePath", "HoudiniPointCacheFactory.h" },
		{ "ModuleRelativePath", "Public/HoudiniPointCacheFactory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A factory for HoudiniPointCache assets." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPointCacheFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHoudiniPointCacheFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniNiagaraEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCacheFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPointCacheFactory_Statics::ClassParams = {
	&UHoudiniPointCacheFactory::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCacheFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniPointCacheFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniPointCacheFactory()
{
	if (!Z_Registration_Info_UClass_UHoudiniPointCacheFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPointCacheFactory.OuterSingleton, Z_Construct_UClass_UHoudiniPointCacheFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniPointCacheFactory.OuterSingleton;
}
template<> HOUDININIAGARAEDITOR_API UClass* StaticClass<UHoudiniPointCacheFactory>()
{
	return UHoudiniPointCacheFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPointCacheFactory);
UHoudiniPointCacheFactory::~UHoudiniPointCacheFactory() {}
// End Class UHoudiniPointCacheFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagaraEditor_Public_HoudiniPointCacheFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniPointCacheFactory, UHoudiniPointCacheFactory::StaticClass, TEXT("UHoudiniPointCacheFactory"), &Z_Registration_Info_UClass_UHoudiniPointCacheFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPointCacheFactory), 3606756027U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagaraEditor_Public_HoudiniPointCacheFactory_h_3100667803(TEXT("/Script/HoudiniNiagaraEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagaraEditor_Public_HoudiniPointCacheFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagaraEditor_Public_HoudiniPointCacheFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
