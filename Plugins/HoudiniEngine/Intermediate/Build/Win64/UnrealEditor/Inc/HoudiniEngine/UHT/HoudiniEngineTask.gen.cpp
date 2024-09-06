// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngine/Private/HoudiniEngineTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniEngineTask() {}

// Begin Cross Module References
HOUDINIENGINE_API UEnum* Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskType();
UPackage* Z_Construct_UPackage__Script_HoudiniEngine();
// End Cross Module References

// Begin Enum EHoudiniEngineTaskType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniEngineTaskType;
static UEnum* EHoudiniEngineTaskType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniEngineTaskType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniEngineTaskType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("EHoudiniEngineTaskType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniEngineTaskType.OuterSingleton;
}
template<> HOUDINIENGINE_API UEnum* StaticEnum<EHoudiniEngineTaskType>()
{
	return EHoudiniEngineTaskType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AssetCooking.Comment", "// This type corresponds to Houdini asset cooking request.\n" },
		{ "AssetCooking.Name", "EHoudiniEngineTaskType::AssetCooking" },
		{ "AssetCooking.ToolTip", "This type corresponds to Houdini asset cooking request." },
		{ "AssetDeletion.Comment", "// This type is used for asynchronous asset deletion.\n" },
		{ "AssetDeletion.Name", "EHoudiniEngineTaskType::AssetDeletion" },
		{ "AssetDeletion.ToolTip", "This type is used for asynchronous asset deletion." },
		{ "AssetInstantiation.Comment", "// This type corresponds to Houdini asset instantiation (without cooking).\n" },
		{ "AssetInstantiation.Name", "EHoudiniEngineTaskType::AssetInstantiation" },
		{ "AssetInstantiation.ToolTip", "This type corresponds to Houdini asset instantiation (without cooking)." },
		{ "AssetProcess.Comment", "// This type is used when processing the results of a sucessful cook\n" },
		{ "AssetProcess.Name", "EHoudiniEngineTaskType::AssetProcess" },
		{ "AssetProcess.ToolTip", "This type is used when processing the results of a sucessful cook" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\nnamespace EHoudiniEngineTaskType\n{\n\x09""enum Type\n\x09{\n\x09\x09None,\n\n\x09\x09// This type corresponds to Houdini asset instantiation (without cooking).\n\x09\x09""AssetInstantiation,\n\n\x09\x09// This type corresponds to Houdini asset cooking request.\n\x09\x09""AssetCooking,\n\n\x09\x09// This type is used for asynchronous asset deletion.\n\x09\x09""AssetDeletion\n\x09};\n}\n*/" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniEngineTask.h" },
		{ "None.Name", "EHoudiniEngineTaskType::None" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "namespace EHoudiniEngineTaskType\n{\n       enum Type\n       {\n               None,\n\n               // This type corresponds to Houdini asset instantiation (without cooking).\n               AssetInstantiation,\n\n               // This type corresponds to Houdini asset cooking request.\n               AssetCooking,\n\n               // This type is used for asynchronous asset deletion.\n               AssetDeletion\n       };\n}" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniEngineTaskType::None", (int64)EHoudiniEngineTaskType::None },
		{ "EHoudiniEngineTaskType::AssetInstantiation", (int64)EHoudiniEngineTaskType::AssetInstantiation },
		{ "EHoudiniEngineTaskType::AssetCooking", (int64)EHoudiniEngineTaskType::AssetCooking },
		{ "EHoudiniEngineTaskType::AssetDeletion", (int64)EHoudiniEngineTaskType::AssetDeletion },
		{ "EHoudiniEngineTaskType::AssetProcess", (int64)EHoudiniEngineTaskType::AssetProcess },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngine,
	nullptr,
	"EHoudiniEngineTaskType",
	"EHoudiniEngineTaskType",
	Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniEngineTaskType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniEngineTaskType.InnerSingleton, Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniEngineTaskType.InnerSingleton;
}
// End Enum EHoudiniEngineTaskType

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniEngineTask_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniEngineTaskType_StaticEnum, TEXT("EHoudiniEngineTaskType"), &Z_Registration_Info_UEnum_EHoudiniEngineTaskType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 778305603U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniEngineTask_h_4009109409(TEXT("/Script/HoudiniEngine"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniEngineTask_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniEngineTask_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
