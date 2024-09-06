// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngine/Private/HoudiniMeshTranslator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniMeshTranslator() {}

// Begin Cross Module References
HOUDINIENGINE_API UEnum* Z_Construct_UEnum_HoudiniEngine_EHoudiniSplitType();
UPackage* Z_Construct_UPackage__Script_HoudiniEngine();
// End Cross Module References

// Begin Enum EHoudiniSplitType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniSplitType;
static UEnum* EHoudiniSplitType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniSplitType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniSplitType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngine_EHoudiniSplitType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("EHoudiniSplitType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniSplitType.OuterSingleton;
}
template<> HOUDINIENGINE_API UEnum* StaticEnum<EHoudiniSplitType>()
{
	return EHoudiniSplitType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngine_EHoudiniSplitType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Invalid.Name", "EHoudiniSplitType::Invalid" },
		{ "InvisibleComplexCollider.Name", "EHoudiniSplitType::InvisibleComplexCollider" },
		{ "InvisibleSimpleCollider.Name", "EHoudiniSplitType::InvisibleSimpleCollider" },
		{ "InvisibleUCXCollider.Name", "EHoudiniSplitType::InvisibleUCXCollider" },
		{ "LOD.Name", "EHoudiniSplitType::LOD" },
		{ "ModuleRelativePath", "Private/HoudiniMeshTranslator.h" },
		{ "Normal.Name", "EHoudiniSplitType::Normal" },
		{ "RenderedComplexCollider.Name", "EHoudiniSplitType::RenderedComplexCollider" },
		{ "RenderedSimpleCollider.Name", "EHoudiniSplitType::RenderedSimpleCollider" },
		{ "RenderedUCXCollider.Name", "EHoudiniSplitType::RenderedUCXCollider" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniSplitType::Invalid", (int64)EHoudiniSplitType::Invalid },
		{ "EHoudiniSplitType::Normal", (int64)EHoudiniSplitType::Normal },
		{ "EHoudiniSplitType::LOD", (int64)EHoudiniSplitType::LOD },
		{ "EHoudiniSplitType::RenderedComplexCollider", (int64)EHoudiniSplitType::RenderedComplexCollider },
		{ "EHoudiniSplitType::InvisibleComplexCollider", (int64)EHoudiniSplitType::InvisibleComplexCollider },
		{ "EHoudiniSplitType::RenderedUCXCollider", (int64)EHoudiniSplitType::RenderedUCXCollider },
		{ "EHoudiniSplitType::InvisibleUCXCollider", (int64)EHoudiniSplitType::InvisibleUCXCollider },
		{ "EHoudiniSplitType::RenderedSimpleCollider", (int64)EHoudiniSplitType::RenderedSimpleCollider },
		{ "EHoudiniSplitType::InvisibleSimpleCollider", (int64)EHoudiniSplitType::InvisibleSimpleCollider },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngine_EHoudiniSplitType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngine,
	nullptr,
	"EHoudiniSplitType",
	"EHoudiniSplitType",
	Z_Construct_UEnum_HoudiniEngine_EHoudiniSplitType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngine_EHoudiniSplitType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngine_EHoudiniSplitType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngine_EHoudiniSplitType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngine_EHoudiniSplitType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniSplitType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniSplitType.InnerSingleton, Z_Construct_UEnum_HoudiniEngine_EHoudiniSplitType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniSplitType.InnerSingleton;
}
// End Enum EHoudiniSplitType

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniMeshTranslator_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniSplitType_StaticEnum, TEXT("EHoudiniSplitType"), &Z_Registration_Info_UEnum_EHoudiniSplitType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2134844158U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniMeshTranslator_h_3044185468(TEXT("/Script/HoudiniEngine"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniMeshTranslator_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniMeshTranslator_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
