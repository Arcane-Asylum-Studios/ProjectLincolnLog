// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniAssetStateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniAssetStateTypes() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetStateResult();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EHoudiniAssetState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniAssetState;
static UEnum* EHoudiniAssetState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniAssetState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniAssetState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniAssetState"));
	}
	return Z_Registration_Info_UEnum_EHoudiniAssetState.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniAssetState>()
{
	return EHoudiniAssetState_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Cooking.Comment", "// Cooking task in progress\n" },
		{ "Cooking.Name", "EHoudiniAssetState::Cooking" },
		{ "Cooking.ToolTip", "Cooking task in progress" },
		{ "Deleting.Comment", "// Deleting\n" },
		{ "Deleting.Name", "EHoudiniAssetState::Deleting" },
		{ "Deleting.ToolTip", "Deleting" },
		{ "Instantiating.Comment", "// Instantiating task in progress\n" },
		{ "Instantiating.Name", "EHoudiniAssetState::Instantiating" },
		{ "Instantiating.ToolTip", "Instantiating task in progress" },
		{ "ModuleRelativePath", "Private/HoudiniAssetStateTypes.h" },
		{ "NeedDelete.Comment", "// Asset needs to be deleted\n" },
		{ "NeedDelete.Name", "EHoudiniAssetState::NeedDelete" },
		{ "NeedDelete.ToolTip", "Asset needs to be deleted" },
		{ "NeedInstantiation.Comment", "// Loaded / Duplicated HDA,\n// Will need to be instantiated upon change/update\n" },
		{ "NeedInstantiation.Name", "EHoudiniAssetState::NeedInstantiation" },
		{ "NeedInstantiation.ToolTip", "Loaded / Duplicated HDA,\nWill need to be instantiated upon change/update" },
		{ "NeedRebuild.Comment", "// Asset needs to be rebuilt (Deleted/Instantiated/Cooked)\n" },
		{ "NeedRebuild.Name", "EHoudiniAssetState::NeedRebuild" },
		{ "NeedRebuild.ToolTip", "Asset needs to be rebuilt (Deleted/Instantiated/Cooked)" },
		{ "NewHDA.Comment", "// Newly created HDA, fetch its default parameters then proceed to PreInstantiation\n" },
		{ "NewHDA.Name", "EHoudiniAssetState::NewHDA" },
		{ "NewHDA.ToolTip", "Newly created HDA, fetch its default parameters then proceed to PreInstantiation" },
		{ "None.Comment", "// Processed / Updated HDA\n// Will need to be cooked upon change/update\n" },
		{ "None.Name", "EHoudiniAssetState::None" },
		{ "None.ToolTip", "Processed / Updated HDA\nWill need to be cooked upon change/update" },
		{ "PostCook.Comment", "// Cooking has finished\n" },
		{ "PostCook.Name", "EHoudiniAssetState::PostCook" },
		{ "PostCook.ToolTip", "Cooking has finished" },
		{ "PreCook.Comment", "// Instantiated HDA, needs to be cooked immediately\n" },
		{ "PreCook.Name", "EHoudiniAssetState::PreCook" },
		{ "PreCook.ToolTip", "Instantiated HDA, needs to be cooked immediately" },
		{ "PreInstantiation.Comment", "// Newly created HDA, after default parameters fetch, needs to be instantiated immediately\n" },
		{ "PreInstantiation.Name", "EHoudiniAssetState::PreInstantiation" },
		{ "PreInstantiation.ToolTip", "Newly created HDA, after default parameters fetch, needs to be instantiated immediately" },
		{ "PreProcess.Comment", "// Cooked HDA, needs to be processed immediately\n" },
		{ "PreProcess.Name", "EHoudiniAssetState::PreProcess" },
		{ "PreProcess.ToolTip", "Cooked HDA, needs to be processed immediately" },
		{ "Processing.Comment", "// Processing task in progress\n" },
		{ "Processing.Name", "EHoudiniAssetState::Processing" },
		{ "Processing.ToolTip", "Processing task in progress" },
		{ "ProcessTemplate.Comment", "// Process component template. This is ticking has very limited\n// functionality, typically limited to checking for parameter updates\n// in order to trigger PostEditChange() to run construction scripts again.\n" },
		{ "ProcessTemplate.Name", "EHoudiniAssetState::ProcessTemplate" },
		{ "ProcessTemplate.ToolTip", "Process component template. This is ticking has very limited\nfunctionality, typically limited to checking for parameter updates\nin order to trigger PostEditChange() to run construction scripts again." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniAssetState::NeedInstantiation", (int64)EHoudiniAssetState::NeedInstantiation },
		{ "EHoudiniAssetState::NewHDA", (int64)EHoudiniAssetState::NewHDA },
		{ "EHoudiniAssetState::PreInstantiation", (int64)EHoudiniAssetState::PreInstantiation },
		{ "EHoudiniAssetState::Instantiating", (int64)EHoudiniAssetState::Instantiating },
		{ "EHoudiniAssetState::PreCook", (int64)EHoudiniAssetState::PreCook },
		{ "EHoudiniAssetState::Cooking", (int64)EHoudiniAssetState::Cooking },
		{ "EHoudiniAssetState::PostCook", (int64)EHoudiniAssetState::PostCook },
		{ "EHoudiniAssetState::PreProcess", (int64)EHoudiniAssetState::PreProcess },
		{ "EHoudiniAssetState::Processing", (int64)EHoudiniAssetState::Processing },
		{ "EHoudiniAssetState::None", (int64)EHoudiniAssetState::None },
		{ "EHoudiniAssetState::NeedRebuild", (int64)EHoudiniAssetState::NeedRebuild },
		{ "EHoudiniAssetState::NeedDelete", (int64)EHoudiniAssetState::NeedDelete },
		{ "EHoudiniAssetState::Deleting", (int64)EHoudiniAssetState::Deleting },
		{ "EHoudiniAssetState::ProcessTemplate", (int64)EHoudiniAssetState::ProcessTemplate },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniAssetState",
	"EHoudiniAssetState",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState()
{
	if (!Z_Registration_Info_UEnum_EHoudiniAssetState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniAssetState.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniAssetState.InnerSingleton;
}
// End Enum EHoudiniAssetState

// Begin Enum EHoudiniAssetStateResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniAssetStateResult;
static UEnum* EHoudiniAssetStateResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniAssetStateResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniAssetStateResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetStateResult, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniAssetStateResult"));
	}
	return Z_Registration_Info_UEnum_EHoudiniAssetStateResult.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniAssetStateResult>()
{
	return EHoudiniAssetStateResult_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetStateResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Aborted.Name", "EHoudiniAssetStateResult::Aborted" },
		{ "FinishedWithError.Name", "EHoudiniAssetStateResult::FinishedWithError" },
		{ "FinishedWithFatalError.Name", "EHoudiniAssetStateResult::FinishedWithFatalError" },
		{ "ModuleRelativePath", "Private/HoudiniAssetStateTypes.h" },
		{ "None.Name", "EHoudiniAssetStateResult::None" },
		{ "Success.Name", "EHoudiniAssetStateResult::Success" },
		{ "Working.Name", "EHoudiniAssetStateResult::Working" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniAssetStateResult::None", (int64)EHoudiniAssetStateResult::None },
		{ "EHoudiniAssetStateResult::Working", (int64)EHoudiniAssetStateResult::Working },
		{ "EHoudiniAssetStateResult::Success", (int64)EHoudiniAssetStateResult::Success },
		{ "EHoudiniAssetStateResult::FinishedWithError", (int64)EHoudiniAssetStateResult::FinishedWithError },
		{ "EHoudiniAssetStateResult::FinishedWithFatalError", (int64)EHoudiniAssetStateResult::FinishedWithFatalError },
		{ "EHoudiniAssetStateResult::Aborted", (int64)EHoudiniAssetStateResult::Aborted },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetStateResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniAssetStateResult",
	"EHoudiniAssetStateResult",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetStateResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetStateResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetStateResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetStateResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetStateResult()
{
	if (!Z_Registration_Info_UEnum_EHoudiniAssetStateResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniAssetStateResult.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetStateResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniAssetStateResult.InnerSingleton;
}
// End Enum EHoudiniAssetStateResult

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectLincolnLog_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetStateTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniAssetState_StaticEnum, TEXT("EHoudiniAssetState"), &Z_Registration_Info_UEnum_EHoudiniAssetState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3154805457U) },
		{ EHoudiniAssetStateResult_StaticEnum, TEXT("EHoudiniAssetStateResult"), &Z_Registration_Info_UEnum_EHoudiniAssetStateResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1324121041U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectLincolnLog_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetStateTypes_h_4286186368(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectLincolnLog_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetStateTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectLincolnLog_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetStateTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
