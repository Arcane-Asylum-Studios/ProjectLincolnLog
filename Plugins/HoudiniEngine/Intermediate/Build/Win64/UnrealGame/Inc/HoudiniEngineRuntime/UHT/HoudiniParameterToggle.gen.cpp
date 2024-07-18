// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameterToggle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniParameterToggle() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameter();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterToggle();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterToggle_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniParameterToggle
void UHoudiniParameterToggle::StaticRegisterNativesUHoudiniParameterToggle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniParameterToggle);
UClass* Z_Construct_UClass_UHoudiniParameterToggle_NoRegister()
{
	return UHoudiniParameterToggle::StaticClass();
}
struct Z_Construct_UClass_UHoudiniParameterToggle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniParameterToggle.h" },
		{ "ModuleRelativePath", "Private/HoudiniParameterToggle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Values of this property.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameterToggle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Values of this property." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValues_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterToggle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultValues;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterToggle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterToggle_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterToggle_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterToggle, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterToggle_Statics::NewProp_DefaultValues_Inner = { "DefaultValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterToggle_Statics::NewProp_DefaultValues = { "DefaultValues", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterToggle, DefaultValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValues_MetaData), NewProp_DefaultValues_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterToggle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterToggle_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterToggle_Statics::NewProp_Values,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterToggle_Statics::NewProp_DefaultValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterToggle_Statics::NewProp_DefaultValues,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterToggle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniParameterToggle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniParameter,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterToggle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterToggle_Statics::ClassParams = {
	&UHoudiniParameterToggle::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniParameterToggle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterToggle_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterToggle_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniParameterToggle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniParameterToggle()
{
	if (!Z_Registration_Info_UClass_UHoudiniParameterToggle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniParameterToggle.OuterSingleton, Z_Construct_UClass_UHoudiniParameterToggle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniParameterToggle.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterToggle>()
{
	return UHoudiniParameterToggle::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterToggle);
UHoudiniParameterToggle::~UHoudiniParameterToggle() {}
// End Class UHoudiniParameterToggle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterToggle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniParameterToggle, UHoudiniParameterToggle::StaticClass, TEXT("UHoudiniParameterToggle"), &Z_Registration_Info_UClass_UHoudiniParameterToggle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniParameterToggle), 4073792651U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterToggle_h_2325745868(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterToggle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterToggle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
