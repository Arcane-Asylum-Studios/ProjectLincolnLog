// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameterOperatorPath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniParameterOperatorPath() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInput_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameter();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterOperatorPath();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterOperatorPath_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniParameterOperatorPath
void UHoudiniParameterOperatorPath::StaticRegisterNativesUHoudiniParameterOperatorPath()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniParameterOperatorPath);
UClass* Z_Construct_UClass_UHoudiniParameterOperatorPath_NoRegister()
{
	return UHoudiniParameterOperatorPath::StaticClass();
}
struct Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniParameterOperatorPath.h" },
		{ "ModuleRelativePath", "Private/HoudiniParameterOperatorPath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniInput_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterOperatorPath.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_HoudiniInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterOperatorPath>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::NewProp_HoudiniInput = { "HoudiniInput", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterOperatorPath, HoudiniInput), Z_Construct_UClass_UHoudiniInput_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoudiniInput_MetaData), NewProp_HoudiniInput_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::NewProp_HoudiniInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniParameter,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::ClassParams = {
	&UHoudiniParameterOperatorPath::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniParameterOperatorPath()
{
	if (!Z_Registration_Info_UClass_UHoudiniParameterOperatorPath.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniParameterOperatorPath.OuterSingleton, Z_Construct_UClass_UHoudiniParameterOperatorPath_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniParameterOperatorPath.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterOperatorPath>()
{
	return UHoudiniParameterOperatorPath::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterOperatorPath);
UHoudiniParameterOperatorPath::~UHoudiniParameterOperatorPath() {}
// End Class UHoudiniParameterOperatorPath

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterOperatorPath_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniParameterOperatorPath, UHoudiniParameterOperatorPath::StaticClass, TEXT("UHoudiniParameterOperatorPath"), &Z_Registration_Info_UClass_UHoudiniParameterOperatorPath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniParameterOperatorPath), 1491700537U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterOperatorPath_h_3763710072(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterOperatorPath_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterOperatorPath_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
