// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniToolTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniToolTypes() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolSelectionType();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolType();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCategoryRules();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin ScriptStruct FCategoryRules
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CategoryRules;
class UScriptStruct* FCategoryRules::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CategoryRules.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CategoryRules.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCategoryRules, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("CategoryRules"));
	}
	return Z_Registration_Info_UScriptStruct_CategoryRules.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FCategoryRules>()
{
	return FCategoryRules::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCategoryRules_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/HoudiniToolTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Include_MetaData[] = {
		{ "Category", "Category Patterns" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Include any tools that match the following patterns.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniToolTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Include any tools that match the following patterns." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Exclude_MetaData[] = {
		{ "Category", "Category Patterns" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Any tools matching these patterns will be omitted from the inclusion set.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniToolTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Any tools matching these patterns will be omitted from the inclusion set." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Include_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Include;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Exclude_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Exclude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCategoryRules>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCategoryRules_Statics::NewProp_Include_Inner = { "Include", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCategoryRules_Statics::NewProp_Include = { "Include", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCategoryRules, Include), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Include_MetaData), NewProp_Include_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCategoryRules_Statics::NewProp_Exclude_Inner = { "Exclude", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCategoryRules_Statics::NewProp_Exclude = { "Exclude", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCategoryRules, Exclude), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Exclude_MetaData), NewProp_Exclude_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCategoryRules_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCategoryRules_Statics::NewProp_Include_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCategoryRules_Statics::NewProp_Include,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCategoryRules_Statics::NewProp_Exclude_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCategoryRules_Statics::NewProp_Exclude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCategoryRules_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCategoryRules_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"CategoryRules",
	Z_Construct_UScriptStruct_FCategoryRules_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCategoryRules_Statics::PropPointers),
	sizeof(FCategoryRules),
	alignof(FCategoryRules),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCategoryRules_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCategoryRules_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCategoryRules()
{
	if (!Z_Registration_Info_UScriptStruct_CategoryRules.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CategoryRules.InnerSingleton, Z_Construct_UScriptStruct_FCategoryRules_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CategoryRules.InnerSingleton;
}
// End ScriptStruct FCategoryRules

// Begin Enum EHoudiniToolType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniToolType;
static UEnum* EHoudiniToolType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniToolType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniToolType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniToolType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniToolType.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniToolType>()
{
	return EHoudiniToolType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "HTOOLTYPE_GENERATOR.Comment", "// For tools that generates geometry, and do not need input\n" },
		{ "HTOOLTYPE_GENERATOR.DisplayName", "Generator" },
		{ "HTOOLTYPE_GENERATOR.Name", "EHoudiniToolType::HTOOLTYPE_GENERATOR" },
		{ "HTOOLTYPE_GENERATOR.ToolTip", "For tools that generates geometry, and do not need input" },
		{ "HTOOLTYPE_OPERATOR_BATCH.Comment", "// For tools that needs to be applied each time for each single selected\n" },
		{ "HTOOLTYPE_OPERATOR_BATCH.DisplayName", "Batch Operator" },
		{ "HTOOLTYPE_OPERATOR_BATCH.Name", "EHoudiniToolType::HTOOLTYPE_OPERATOR_BATCH" },
		{ "HTOOLTYPE_OPERATOR_BATCH.ToolTip", "For tools that needs to be applied each time for each single selected" },
		{ "HTOOLTYPE_OPERATOR_MULTI.Comment", "// For Tools that have multiple input, a single selected asset will be applied to each input\n" },
		{ "HTOOLTYPE_OPERATOR_MULTI.DisplayName", "Operator (multiple)" },
		{ "HTOOLTYPE_OPERATOR_MULTI.Name", "EHoudiniToolType::HTOOLTYPE_OPERATOR_MULTI" },
		{ "HTOOLTYPE_OPERATOR_MULTI.ToolTip", "For Tools that have multiple input, a single selected asset will be applied to each input" },
		{ "HTOOLTYPE_OPERATOR_SINGLE.Comment", "// For tools that have a single input, the selection will be merged in that single input\n" },
		{ "HTOOLTYPE_OPERATOR_SINGLE.DisplayName", "Operator (single)" },
		{ "HTOOLTYPE_OPERATOR_SINGLE.Name", "EHoudiniToolType::HTOOLTYPE_OPERATOR_SINGLE" },
		{ "HTOOLTYPE_OPERATOR_SINGLE.ToolTip", "For tools that have a single input, the selection will be merged in that single input" },
		{ "ModuleRelativePath", "Private/HoudiniToolTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniToolType::HTOOLTYPE_GENERATOR", (int64)EHoudiniToolType::HTOOLTYPE_GENERATOR },
		{ "EHoudiniToolType::HTOOLTYPE_OPERATOR_SINGLE", (int64)EHoudiniToolType::HTOOLTYPE_OPERATOR_SINGLE },
		{ "EHoudiniToolType::HTOOLTYPE_OPERATOR_MULTI", (int64)EHoudiniToolType::HTOOLTYPE_OPERATOR_MULTI },
		{ "EHoudiniToolType::HTOOLTYPE_OPERATOR_BATCH", (int64)EHoudiniToolType::HTOOLTYPE_OPERATOR_BATCH },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniToolType",
	"EHoudiniToolType",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniToolType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniToolType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniToolType.InnerSingleton;
}
// End Enum EHoudiniToolType

// Begin Enum EHoudiniToolSelectionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniToolSelectionType;
static UEnum* EHoudiniToolSelectionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniToolSelectionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniToolSelectionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolSelectionType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniToolSelectionType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniToolSelectionType.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniToolSelectionType>()
{
	return EHoudiniToolSelectionType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolSelectionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "HTOOL_SELECTION_ALL.Comment", "// For tools that can be applied both to Content Browser and World selection\n" },
		{ "HTOOL_SELECTION_ALL.DisplayName", "Content Browser AND World" },
		{ "HTOOL_SELECTION_ALL.Name", "EHoudiniToolSelectionType::HTOOL_SELECTION_ALL" },
		{ "HTOOL_SELECTION_ALL.ToolTip", "For tools that can be applied both to Content Browser and World selection" },
		{ "HTOOL_SELECTION_CB_ONLY.Comment", "// For tools that can be applied only to Content Browser selection\n" },
		{ "HTOOL_SELECTION_CB_ONLY.DisplayName", "Content browser selection only" },
		{ "HTOOL_SELECTION_CB_ONLY.Name", "EHoudiniToolSelectionType::HTOOL_SELECTION_CB_ONLY" },
		{ "HTOOL_SELECTION_CB_ONLY.ToolTip", "For tools that can be applied only to Content Browser selection" },
		{ "HTOOL_SELECTION_WORLD_ONLY.Comment", "// For tools that can be applied only to World selection\n" },
		{ "HTOOL_SELECTION_WORLD_ONLY.DisplayName", "World selection only" },
		{ "HTOOL_SELECTION_WORLD_ONLY.Name", "EHoudiniToolSelectionType::HTOOL_SELECTION_WORLD_ONLY" },
		{ "HTOOL_SELECTION_WORLD_ONLY.ToolTip", "For tools that can be applied only to World selection" },
		{ "ModuleRelativePath", "Private/HoudiniToolTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniToolSelectionType::HTOOL_SELECTION_ALL", (int64)EHoudiniToolSelectionType::HTOOL_SELECTION_ALL },
		{ "EHoudiniToolSelectionType::HTOOL_SELECTION_WORLD_ONLY", (int64)EHoudiniToolSelectionType::HTOOL_SELECTION_WORLD_ONLY },
		{ "EHoudiniToolSelectionType::HTOOL_SELECTION_CB_ONLY", (int64)EHoudiniToolSelectionType::HTOOL_SELECTION_CB_ONLY },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolSelectionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniToolSelectionType",
	"EHoudiniToolSelectionType",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolSelectionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolSelectionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolSelectionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolSelectionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolSelectionType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniToolSelectionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniToolSelectionType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolSelectionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniToolSelectionType.InnerSingleton;
}
// End Enum EHoudiniToolSelectionType

// Begin Registration
struct Z_CompiledInDeferFile_FID_MainProjectLincolnLog_Plugins_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniToolTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniToolType_StaticEnum, TEXT("EHoudiniToolType"), &Z_Registration_Info_UEnum_EHoudiniToolType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 46416647U) },
		{ EHoudiniToolSelectionType_StaticEnum, TEXT("EHoudiniToolSelectionType"), &Z_Registration_Info_UEnum_EHoudiniToolSelectionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4111166207U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCategoryRules::StaticStruct, Z_Construct_UScriptStruct_FCategoryRules_Statics::NewStructOps, TEXT("CategoryRules"), &Z_Registration_Info_UScriptStruct_CategoryRules, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCategoryRules), 100911843U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MainProjectLincolnLog_Plugins_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniToolTypes_h_3822961497(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MainProjectLincolnLog_Plugins_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniToolTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MainProjectLincolnLog_Plugins_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniToolTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_MainProjectLincolnLog_Plugins_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniToolTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MainProjectLincolnLog_Plugins_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniToolTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
