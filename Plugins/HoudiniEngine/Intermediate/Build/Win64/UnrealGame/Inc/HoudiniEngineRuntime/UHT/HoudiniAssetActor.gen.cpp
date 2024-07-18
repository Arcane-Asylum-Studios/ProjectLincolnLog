// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniAssetActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniAssetActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_AHoudiniAssetActor();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_AHoudiniAssetActor_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class AHoudiniAssetActor
void AHoudiniAssetActor::StaticRegisterNativesAHoudiniAssetActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHoudiniAssetActor);
UClass* Z_Construct_UClass_AHoudiniAssetActor_NoRegister()
{
	return AHoudiniAssetActor::StaticClass();
}
struct Z_Construct_UClass_AHoudiniAssetActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ChildCanTick", "" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "HoudiniAssetActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Public/HoudiniAssetActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniAssetComponent_MetaData[] = {
		{ "Category", "HoudiniAssetActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*, AllowPrivateAccess = \"true\"*/" },
#endif
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Mesh,Rendering,Physics,Components|HoudiniEngine" },
		{ "ModuleRelativePath", "Public/HoudiniAssetActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", ", AllowPrivateAccess = \"true\"" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoudiniAssetComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHoudiniAssetActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHoudiniAssetActor_Statics::NewProp_HoudiniAssetComponent = { "HoudiniAssetComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHoudiniAssetActor, HoudiniAssetComponent), Z_Construct_UClass_UHoudiniAssetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoudiniAssetComponent_MetaData), NewProp_HoudiniAssetComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHoudiniAssetActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoudiniAssetActor_Statics::NewProp_HoudiniAssetComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHoudiniAssetActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHoudiniAssetActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHoudiniAssetActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHoudiniAssetActor_Statics::ClassParams = {
	&AHoudiniAssetActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHoudiniAssetActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHoudiniAssetActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHoudiniAssetActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AHoudiniAssetActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHoudiniAssetActor()
{
	if (!Z_Registration_Info_UClass_AHoudiniAssetActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHoudiniAssetActor.OuterSingleton, Z_Construct_UClass_AHoudiniAssetActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHoudiniAssetActor.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<AHoudiniAssetActor>()
{
	return AHoudiniAssetActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHoudiniAssetActor);
AHoudiniAssetActor::~AHoudiniAssetActor() {}
// End Class AHoudiniAssetActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHoudiniAssetActor, AHoudiniAssetActor::StaticClass, TEXT("AHoudiniAssetActor"), &Z_Registration_Info_UClass_AHoudiniAssetActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHoudiniAssetActor), 3002771911U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetActor_h_3518190978(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
