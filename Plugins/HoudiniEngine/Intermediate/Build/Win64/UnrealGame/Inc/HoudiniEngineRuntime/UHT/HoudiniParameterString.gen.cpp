// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameterString.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniParameterString() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameter();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterString();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterString_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniParameterString
void UHoudiniParameterString::StaticRegisterNativesUHoudiniParameterString()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniParameterString);
UClass* Z_Construct_UClass_UHoudiniParameterString_NoRegister()
{
	return UHoudiniParameterString::StaticClass();
}
struct Z_Construct_UClass_UHoudiniParameterString_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniParameterString.h" },
		{ "ModuleRelativePath", "Private/HoudiniParameterString.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Values of this property.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameterString.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Values of this property." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValues_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterString.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChosenAssets_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterString.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAssetRef_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates this string parameter should be treated as an asset reference\n// and display an object picker\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameterString.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates this string parameter should be treated as an asset reference\nand display an object picker" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultValues;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChosenAssets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChosenAssets;
	static void NewProp_bIsAssetRef_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAssetRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterString>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterString, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_DefaultValues_Inner = { "DefaultValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_DefaultValues = { "DefaultValues", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterString, DefaultValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValues_MetaData), NewProp_DefaultValues_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_ChosenAssets_Inner = { "ChosenAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_ChosenAssets = { "ChosenAssets", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterString, ChosenAssets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChosenAssets_MetaData), NewProp_ChosenAssets_MetaData) };
void Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_bIsAssetRef_SetBit(void* Obj)
{
	((UHoudiniParameterString*)Obj)->bIsAssetRef = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_bIsAssetRef = { "bIsAssetRef", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameterString), &Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_bIsAssetRef_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAssetRef_MetaData), NewProp_bIsAssetRef_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_Values,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_DefaultValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_DefaultValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_ChosenAssets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_ChosenAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterString_Statics::NewProp_bIsAssetRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterString_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniParameterString_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniParameter,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterString_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterString_Statics::ClassParams = {
	&UHoudiniParameterString::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniParameterString_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterString_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterString_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniParameterString_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniParameterString()
{
	if (!Z_Registration_Info_UClass_UHoudiniParameterString.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniParameterString.OuterSingleton, Z_Construct_UClass_UHoudiniParameterString_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniParameterString.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterString>()
{
	return UHoudiniParameterString::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterString);
UHoudiniParameterString::~UHoudiniParameterString() {}
// End Class UHoudiniParameterString

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterString_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniParameterString, UHoudiniParameterString::StaticClass, TEXT("UHoudiniParameterString"), &Z_Registration_Info_UClass_UHoudiniParameterString, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniParameterString), 1089851659U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterString_h_171401006(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterString_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterString_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
