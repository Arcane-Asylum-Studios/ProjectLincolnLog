// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngine/Private/HoudiniEngine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniEngine() {}

// Begin Cross Module References
HOUDINIENGINE_API UEnum* Z_Construct_UEnum_HoudiniEngine_EHoudiniSessionStatus();
UPackage* Z_Construct_UPackage__Script_HoudiniEngine();
// End Cross Module References

// Begin Enum EHoudiniSessionStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniSessionStatus;
static UEnum* EHoudiniSessionStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniSessionStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniSessionStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngine_EHoudiniSessionStatus, (UObject*)Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("EHoudiniSessionStatus"));
	}
	return Z_Registration_Info_UEnum_EHoudiniSessionStatus.OuterSingleton;
}
template<> HOUDINIENGINE_API UEnum* StaticEnum<EHoudiniSessionStatus>()
{
	return EHoudiniSessionStatus_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngine_EHoudiniSessionStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Connected.Comment", "// Session not initialized yet\n" },
		{ "Connected.Name", "EHoudiniSessionStatus::Connected" },
		{ "Connected.ToolTip", "Session not initialized yet" },
		{ "Failed.Comment", "// Session stopped\n" },
		{ "Failed.Name", "EHoudiniSessionStatus::Failed" },
		{ "Failed.ToolTip", "Session stopped" },
		{ "Invalid.Name", "EHoudiniSessionStatus::Invalid" },
		{ "Lost.Comment", "// Session failed to connect\n" },
		{ "Lost.Name", "EHoudiniSessionStatus::Lost" },
		{ "Lost.ToolTip", "Session failed to connect" },
		{ "ModuleRelativePath", "Private/HoudiniEngine.h" },
		{ "NoLicense.Comment", "// Session Lost (HARS/Houdini Crash?)\n" },
		{ "NoLicense.Name", "EHoudiniSessionStatus::NoLicense" },
		{ "NoLicense.ToolTip", "Session Lost (HARS/Houdini Crash?)" },
		{ "None.Comment", "// Session successfully started\n" },
		{ "None.Name", "EHoudiniSessionStatus::None" },
		{ "None.ToolTip", "Session successfully started" },
		{ "NotStarted.Name", "EHoudiniSessionStatus::NotStarted" },
		{ "Stopped.Comment", "// Session type set to None\n" },
		{ "Stopped.Name", "EHoudiniSessionStatus::Stopped" },
		{ "Stopped.ToolTip", "Session type set to None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniSessionStatus::Invalid", (int64)EHoudiniSessionStatus::Invalid },
		{ "EHoudiniSessionStatus::NotStarted", (int64)EHoudiniSessionStatus::NotStarted },
		{ "EHoudiniSessionStatus::Connected", (int64)EHoudiniSessionStatus::Connected },
		{ "EHoudiniSessionStatus::None", (int64)EHoudiniSessionStatus::None },
		{ "EHoudiniSessionStatus::Stopped", (int64)EHoudiniSessionStatus::Stopped },
		{ "EHoudiniSessionStatus::Failed", (int64)EHoudiniSessionStatus::Failed },
		{ "EHoudiniSessionStatus::Lost", (int64)EHoudiniSessionStatus::Lost },
		{ "EHoudiniSessionStatus::NoLicense", (int64)EHoudiniSessionStatus::NoLicense },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngine_EHoudiniSessionStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngine,
	nullptr,
	"EHoudiniSessionStatus",
	"EHoudiniSessionStatus",
	Z_Construct_UEnum_HoudiniEngine_EHoudiniSessionStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngine_EHoudiniSessionStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngine_EHoudiniSessionStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngine_EHoudiniSessionStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngine_EHoudiniSessionStatus()
{
	if (!Z_Registration_Info_UEnum_EHoudiniSessionStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniSessionStatus.InnerSingleton, Z_Construct_UEnum_HoudiniEngine_EHoudiniSessionStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniSessionStatus.InnerSingleton;
}
// End Enum EHoudiniSessionStatus

// Begin Registration
struct Z_CompiledInDeferFile_FID_projectlincolnlogs_Plugins_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniEngine_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniSessionStatus_StaticEnum, TEXT("EHoudiniSessionStatus"), &Z_Registration_Info_UEnum_EHoudiniSessionStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3323709598U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projectlincolnlogs_Plugins_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniEngine_h_455572756(TEXT("/Script/HoudiniEngine"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_projectlincolnlogs_Plugins_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniEngine_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projectlincolnlogs_Plugins_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniEngine_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
