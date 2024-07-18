// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniLiveLink/Private/HoudiniLiveLinkSourceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniLiveLinkSourceFactory() {}

// Begin Cross Module References
HOUDINILIVELINK_API UClass* Z_Construct_UClass_UHoudiniLiveLinkSourceFactory();
HOUDINILIVELINK_API UClass* Z_Construct_UClass_UHoudiniLiveLinkSourceFactory_NoRegister();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory();
UPackage* Z_Construct_UPackage__Script_HoudiniLiveLink();
// End Cross Module References

// Begin Class UHoudiniLiveLinkSourceFactory
void UHoudiniLiveLinkSourceFactory::StaticRegisterNativesUHoudiniLiveLinkSourceFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniLiveLinkSourceFactory);
UClass* Z_Construct_UClass_UHoudiniLiveLinkSourceFactory_NoRegister()
{
	return UHoudiniLiveLinkSourceFactory::StaticClass();
}
struct Z_Construct_UClass_UHoudiniLiveLinkSourceFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniLiveLinkSourceFactory.h" },
		{ "ModuleRelativePath", "Private/HoudiniLiveLinkSourceFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniLiveLinkSourceFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHoudiniLiveLinkSourceFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniLiveLink,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLiveLinkSourceFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniLiveLinkSourceFactory_Statics::ClassParams = {
	&UHoudiniLiveLinkSourceFactory::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLiveLinkSourceFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniLiveLinkSourceFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniLiveLinkSourceFactory()
{
	if (!Z_Registration_Info_UClass_UHoudiniLiveLinkSourceFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniLiveLinkSourceFactory.OuterSingleton, Z_Construct_UClass_UHoudiniLiveLinkSourceFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniLiveLinkSourceFactory.OuterSingleton;
}
template<> HOUDINILIVELINK_API UClass* StaticClass<UHoudiniLiveLinkSourceFactory>()
{
	return UHoudiniLiveLinkSourceFactory::StaticClass();
}
UHoudiniLiveLinkSourceFactory::UHoudiniLiveLinkSourceFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniLiveLinkSourceFactory);
UHoudiniLiveLinkSourceFactory::~UHoudiniLiveLinkSourceFactory() {}
// End Class UHoudiniLiveLinkSourceFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animations_HoudiniLiveLink_Source_HoudiniLiveLink_Private_HoudiniLiveLinkSourceFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniLiveLinkSourceFactory, UHoudiniLiveLinkSourceFactory::StaticClass, TEXT("UHoudiniLiveLinkSourceFactory"), &Z_Registration_Info_UClass_UHoudiniLiveLinkSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniLiveLinkSourceFactory), 639175785U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animations_HoudiniLiveLink_Source_HoudiniLiveLink_Private_HoudiniLiveLinkSourceFactory_h_2941804064(TEXT("/Script/HoudiniLiveLink"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animations_HoudiniLiveLink_Source_HoudiniLiveLink_Private_HoudiniLiveLinkSourceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animations_HoudiniLiveLink_Source_HoudiniLiveLink_Private_HoudiniLiveLinkSourceFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
