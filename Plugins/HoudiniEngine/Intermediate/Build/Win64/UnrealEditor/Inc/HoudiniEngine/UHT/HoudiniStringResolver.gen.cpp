// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngine/Private/HoudiniStringResolver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniStringResolver() {}

// Begin Cross Module References
HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniAttributeResolver();
HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniStringResolver();
UPackage* Z_Construct_UPackage__Script_HoudiniEngine();
// End Cross Module References

// Begin ScriptStruct FHoudiniStringResolver
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniStringResolver;
class UScriptStruct* FHoudiniStringResolver::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniStringResolver.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniStringResolver.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniStringResolver, (UObject*)Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniStringResolver"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniStringResolver.OuterSingleton;
}
template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<FHoudiniStringResolver>()
{
	return FHoudiniStringResolver::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniStringResolver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStringResolver.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniStringResolver>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniStringResolver_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
	nullptr,
	&NewStructOps,
	"HoudiniStringResolver",
	nullptr,
	0,
	sizeof(FHoudiniStringResolver),
	alignof(FHoudiniStringResolver),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStringResolver_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniStringResolver_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniStringResolver()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniStringResolver.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniStringResolver.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniStringResolver_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniStringResolver.InnerSingleton;
}
// End ScriptStruct FHoudiniStringResolver

// Begin ScriptStruct FHoudiniAttributeResolver
static_assert(std::is_polymorphic<FHoudiniAttributeResolver>() == std::is_polymorphic<FHoudiniStringResolver>(), "USTRUCT FHoudiniAttributeResolver cannot be polymorphic unless super FHoudiniStringResolver is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniAttributeResolver;
class UScriptStruct* FHoudiniAttributeResolver::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniAttributeResolver.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniAttributeResolver.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniAttributeResolver, (UObject*)Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniAttributeResolver"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniAttributeResolver.OuterSingleton;
}
template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<FHoudiniAttributeResolver>()
{
	return FHoudiniAttributeResolver::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniAttributeResolver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStringResolver.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniAttributeResolver>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniAttributeResolver_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
	Z_Construct_UScriptStruct_FHoudiniStringResolver,
	&NewStructOps,
	"HoudiniAttributeResolver",
	nullptr,
	0,
	sizeof(FHoudiniAttributeResolver),
	alignof(FHoudiniAttributeResolver),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAttributeResolver_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniAttributeResolver_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniAttributeResolver()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniAttributeResolver.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniAttributeResolver.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniAttributeResolver_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniAttributeResolver.InnerSingleton;
}
// End ScriptStruct FHoudiniAttributeResolver

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniStringResolver_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHoudiniStringResolver::StaticStruct, Z_Construct_UScriptStruct_FHoudiniStringResolver_Statics::NewStructOps, TEXT("HoudiniStringResolver"), &Z_Registration_Info_UScriptStruct_HoudiniStringResolver, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniStringResolver), 215011197U) },
		{ FHoudiniAttributeResolver::StaticStruct, Z_Construct_UScriptStruct_FHoudiniAttributeResolver_Statics::NewStructOps, TEXT("HoudiniAttributeResolver"), &Z_Registration_Info_UScriptStruct_HoudiniAttributeResolver, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniAttributeResolver), 1421806924U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniStringResolver_h_586094449(TEXT("/Script/HoudiniEngine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniStringResolver_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniStringResolver_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
