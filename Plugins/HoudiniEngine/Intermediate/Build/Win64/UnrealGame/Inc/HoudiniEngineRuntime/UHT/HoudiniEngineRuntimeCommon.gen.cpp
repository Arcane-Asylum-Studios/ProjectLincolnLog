// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniEngineRuntimeCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniEngineRuntimeCommon() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveBreakpointParameterization();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineActorBakeOption();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineRequestResult();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineResult();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakePackageReplaceModeOption();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakeSelectionOption();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EHoudiniRampInterpolationType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniRampInterpolationType;
static UEnum* EHoudiniRampInterpolationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniRampInterpolationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniRampInterpolationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniRampInterpolationType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniRampInterpolationType.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniRampInterpolationType>()
{
	return EHoudiniRampInterpolationType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BEZIER.Name", "EHoudiniRampInterpolationType::BEZIER" },
		{ "BSPLINE.Name", "EHoudiniRampInterpolationType::BSPLINE" },
		{ "CATMULL_ROM.Name", "EHoudiniRampInterpolationType::CATMULL_ROM" },
		{ "CONSTANT.Name", "EHoudiniRampInterpolationType::CONSTANT" },
		{ "HERMITE.Name", "EHoudiniRampInterpolationType::HERMITE" },
		{ "InValid.Name", "EHoudiniRampInterpolationType::InValid" },
		{ "LINEAR.Name", "EHoudiniRampInterpolationType::LINEAR" },
		{ "ModuleRelativePath", "Public/HoudiniEngineRuntimeCommon.h" },
		{ "MONOTONE_CUBIC.Name", "EHoudiniRampInterpolationType::MONOTONE_CUBIC" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniRampInterpolationType::InValid", (int64)EHoudiniRampInterpolationType::InValid },
		{ "EHoudiniRampInterpolationType::CONSTANT", (int64)EHoudiniRampInterpolationType::CONSTANT },
		{ "EHoudiniRampInterpolationType::LINEAR", (int64)EHoudiniRampInterpolationType::LINEAR },
		{ "EHoudiniRampInterpolationType::CATMULL_ROM", (int64)EHoudiniRampInterpolationType::CATMULL_ROM },
		{ "EHoudiniRampInterpolationType::MONOTONE_CUBIC", (int64)EHoudiniRampInterpolationType::MONOTONE_CUBIC },
		{ "EHoudiniRampInterpolationType::BEZIER", (int64)EHoudiniRampInterpolationType::BEZIER },
		{ "EHoudiniRampInterpolationType::BSPLINE", (int64)EHoudiniRampInterpolationType::BSPLINE },
		{ "EHoudiniRampInterpolationType::HERMITE", (int64)EHoudiniRampInterpolationType::HERMITE },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniRampInterpolationType",
	"EHoudiniRampInterpolationType",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniRampInterpolationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniRampInterpolationType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniRampInterpolationType.InnerSingleton;
}
// End Enum EHoudiniRampInterpolationType

// Begin Enum EHoudiniEngineBakeOption
#if WITH_EDITORONLY_DATA
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniEngineBakeOption;
static UEnum* EHoudiniEngineBakeOption_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniEngineBakeOption.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniEngineBakeOption.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniEngineBakeOption"));
	}
	return Z_Registration_Info_UEnum_EHoudiniEngineBakeOption.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniEngineBakeOption>()
{
	return EHoudiniEngineBakeOption_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniEngineRuntimeCommon.h" },
		{ "ToActor.Name", "EHoudiniEngineBakeOption::ToActor" },
		{ "ToBlueprint.Name", "EHoudiniEngineBakeOption::ToBlueprint" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniEngineBakeOption::ToActor", (int64)EHoudiniEngineBakeOption::ToActor },
		{ "EHoudiniEngineBakeOption::ToBlueprint", (int64)EHoudiniEngineBakeOption::ToBlueprint },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniEngineBakeOption",
	"EHoudiniEngineBakeOption",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption()
{
	if (!Z_Registration_Info_UEnum_EHoudiniEngineBakeOption.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniEngineBakeOption.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniEngineBakeOption.InnerSingleton;
}
#endif // WITH_EDITORONLY_DATA
// End Enum EHoudiniEngineBakeOption

// Begin Enum EHoudiniEngineActorBakeOption
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniEngineActorBakeOption;
static UEnum* EHoudiniEngineActorBakeOption_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniEngineActorBakeOption.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniEngineActorBakeOption.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineActorBakeOption, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniEngineActorBakeOption"));
	}
	return Z_Registration_Info_UEnum_EHoudiniEngineActorBakeOption.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniEngineActorBakeOption>()
{
	return EHoudiniEngineActorBakeOption_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineActorBakeOption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniEngineRuntimeCommon.h" },
		{ "OneActorPerComponent.Name", "EHoudiniEngineActorBakeOption::OneActorPerComponent" },
		{ "OneActorPerHDA.Name", "EHoudiniEngineActorBakeOption::OneActorPerHDA" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniEngineActorBakeOption::OneActorPerComponent", (int64)EHoudiniEngineActorBakeOption::OneActorPerComponent },
		{ "EHoudiniEngineActorBakeOption::OneActorPerHDA", (int64)EHoudiniEngineActorBakeOption::OneActorPerHDA },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineActorBakeOption_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniEngineActorBakeOption",
	"EHoudiniEngineActorBakeOption",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineActorBakeOption_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineActorBakeOption_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineActorBakeOption_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineActorBakeOption_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineActorBakeOption()
{
	if (!Z_Registration_Info_UEnum_EHoudiniEngineActorBakeOption.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniEngineActorBakeOption.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineActorBakeOption_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniEngineActorBakeOption.InnerSingleton;
}
// End Enum EHoudiniEngineActorBakeOption

// Begin Enum EHoudiniLandscapeOutputBakeType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniLandscapeOutputBakeType;
static UEnum* EHoudiniLandscapeOutputBakeType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniLandscapeOutputBakeType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniLandscapeOutputBakeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniLandscapeOutputBakeType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniLandscapeOutputBakeType.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniLandscapeOutputBakeType>()
{
	return EHoudiniLandscapeOutputBakeType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BakeToImage.Name", "EHoudiniLandscapeOutputBakeType::BakeToImage" },
		{ "BakeToWorld.Name", "EHoudiniLandscapeOutputBakeType::BakeToWorld" },
		{ "Detachment.Name", "EHoudiniLandscapeOutputBakeType::Detachment" },
		{ "InValid.Name", "EHoudiniLandscapeOutputBakeType::InValid" },
		{ "ModuleRelativePath", "Public/HoudiniEngineRuntimeCommon.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniLandscapeOutputBakeType::Detachment", (int64)EHoudiniLandscapeOutputBakeType::Detachment },
		{ "EHoudiniLandscapeOutputBakeType::BakeToImage", (int64)EHoudiniLandscapeOutputBakeType::BakeToImage },
		{ "EHoudiniLandscapeOutputBakeType::BakeToWorld", (int64)EHoudiniLandscapeOutputBakeType::BakeToWorld },
		{ "EHoudiniLandscapeOutputBakeType::InValid", (int64)EHoudiniLandscapeOutputBakeType::InValid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniLandscapeOutputBakeType",
	"EHoudiniLandscapeOutputBakeType",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniLandscapeOutputBakeType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniLandscapeOutputBakeType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniLandscapeOutputBakeType.InnerSingleton;
}
// End Enum EHoudiniLandscapeOutputBakeType

// Begin Enum EHoudiniInputType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniInputType;
static UEnum* EHoudiniInputType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniInputType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniInputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniInputType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniInputType.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniInputType>()
{
	return EHoudiniInputType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Curve.Name", "EHoudiniInputType::Curve" },
		{ "Geometry.Name", "EHoudiniInputType::Geometry" },
		{ "Invalid.Name", "EHoudiniInputType::Invalid" },
		{ "ModuleRelativePath", "Public/HoudiniEngineRuntimeCommon.h" },
		{ "World.Comment", "/* Landscape = 4 - deprecated in Houdini 20 */" },
		{ "World.Name", "EHoudiniInputType::World" },
		{ "World.ToolTip", "Landscape = 4 - deprecated in Houdini 20" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniInputType::Invalid", (int64)EHoudiniInputType::Invalid },
		{ "EHoudiniInputType::Geometry", (int64)EHoudiniInputType::Geometry },
		{ "EHoudiniInputType::Curve", (int64)EHoudiniInputType::Curve },
		{ "EHoudiniInputType::World", (int64)EHoudiniInputType::World },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniInputType",
	"EHoudiniInputType",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniInputType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniInputType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniInputType.InnerSingleton;
}
// End Enum EHoudiniInputType

// Begin Enum EHoudiniOutputType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniOutputType;
static UEnum* EHoudiniOutputType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniOutputType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniOutputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniOutputType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniOutputType.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniOutputType>()
{
	return EHoudiniOutputType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AnimSequence.Name", "EHoudiniOutputType::AnimSequence" },
		{ "Curve.Name", "EHoudiniOutputType::Curve" },
		{ "DataTable.Name", "EHoudiniOutputType::DataTable" },
		{ "GeometryCollection.Name", "EHoudiniOutputType::GeometryCollection" },
		{ "Instancer.Name", "EHoudiniOutputType::Instancer" },
		{ "Invalid.Name", "EHoudiniOutputType::Invalid" },
		{ "Landscape.Name", "EHoudiniOutputType::Landscape" },
		{ "LandscapeSpline.Name", "EHoudiniOutputType::LandscapeSpline" },
		{ "Mesh.Name", "EHoudiniOutputType::Mesh" },
		{ "ModuleRelativePath", "Public/HoudiniEngineRuntimeCommon.h" },
		{ "Skeletal.Name", "EHoudiniOutputType::Skeletal" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniOutputType::Invalid", (int64)EHoudiniOutputType::Invalid },
		{ "EHoudiniOutputType::Mesh", (int64)EHoudiniOutputType::Mesh },
		{ "EHoudiniOutputType::Instancer", (int64)EHoudiniOutputType::Instancer },
		{ "EHoudiniOutputType::Landscape", (int64)EHoudiniOutputType::Landscape },
		{ "EHoudiniOutputType::Curve", (int64)EHoudiniOutputType::Curve },
		{ "EHoudiniOutputType::Skeletal", (int64)EHoudiniOutputType::Skeletal },
		{ "EHoudiniOutputType::GeometryCollection", (int64)EHoudiniOutputType::GeometryCollection },
		{ "EHoudiniOutputType::DataTable", (int64)EHoudiniOutputType::DataTable },
		{ "EHoudiniOutputType::LandscapeSpline", (int64)EHoudiniOutputType::LandscapeSpline },
		{ "EHoudiniOutputType::AnimSequence", (int64)EHoudiniOutputType::AnimSequence },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniOutputType",
	"EHoudiniOutputType",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniOutputType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniOutputType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniOutputType.InnerSingleton;
}
// End Enum EHoudiniOutputType

// Begin Enum EHoudiniCurveType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniCurveType;
static UEnum* EHoudiniCurveType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniCurveType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniCurveType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniCurveType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniCurveType.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniCurveType>()
{
	return EHoudiniCurveType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bezier.Name", "EHoudiniCurveType::Bezier" },
		{ "Invalid.Name", "EHoudiniCurveType::Invalid" },
		{ "ModuleRelativePath", "Public/HoudiniEngineRuntimeCommon.h" },
		{ "Nurbs.Name", "EHoudiniCurveType::Nurbs" },
		{ "Points.Name", "EHoudiniCurveType::Points" },
		{ "Polygon.Name", "EHoudiniCurveType::Polygon" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniCurveType::Invalid", (int64)EHoudiniCurveType::Invalid },
		{ "EHoudiniCurveType::Polygon", (int64)EHoudiniCurveType::Polygon },
		{ "EHoudiniCurveType::Nurbs", (int64)EHoudiniCurveType::Nurbs },
		{ "EHoudiniCurveType::Bezier", (int64)EHoudiniCurveType::Bezier },
		{ "EHoudiniCurveType::Points", (int64)EHoudiniCurveType::Points },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniCurveType",
	"EHoudiniCurveType",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniCurveType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniCurveType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniCurveType.InnerSingleton;
}
// End Enum EHoudiniCurveType

// Begin Enum EHoudiniCurveMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniCurveMethod;
static UEnum* EHoudiniCurveMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniCurveMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniCurveMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniCurveMethod"));
	}
	return Z_Registration_Info_UEnum_EHoudiniCurveMethod.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniCurveMethod>()
{
	return EHoudiniCurveMethod_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Breakpoints.Name", "EHoudiniCurveMethod::Breakpoints" },
		{ "CVs.Name", "EHoudiniCurveMethod::CVs" },
		{ "Freehand.Name", "EHoudiniCurveMethod::Freehand" },
		{ "Invalid.Name", "EHoudiniCurveMethod::Invalid" },
		{ "ModuleRelativePath", "Public/HoudiniEngineRuntimeCommon.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniCurveMethod::Invalid", (int64)EHoudiniCurveMethod::Invalid },
		{ "EHoudiniCurveMethod::CVs", (int64)EHoudiniCurveMethod::CVs },
		{ "EHoudiniCurveMethod::Breakpoints", (int64)EHoudiniCurveMethod::Breakpoints },
		{ "EHoudiniCurveMethod::Freehand", (int64)EHoudiniCurveMethod::Freehand },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniCurveMethod",
	"EHoudiniCurveMethod",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod()
{
	if (!Z_Registration_Info_UEnum_EHoudiniCurveMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniCurveMethod.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniCurveMethod.InnerSingleton;
}
// End Enum EHoudiniCurveMethod

// Begin Enum EHoudiniCurveBreakpointParameterization
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniCurveBreakpointParameterization;
static UEnum* EHoudiniCurveBreakpointParameterization_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniCurveBreakpointParameterization.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniCurveBreakpointParameterization.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveBreakpointParameterization, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniCurveBreakpointParameterization"));
	}
	return Z_Registration_Info_UEnum_EHoudiniCurveBreakpointParameterization.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniCurveBreakpointParameterization>()
{
	return EHoudiniCurveBreakpointParameterization_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveBreakpointParameterization_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Centripetal.Name", "EHoudiniCurveBreakpointParameterization::Centripetal" },
		{ "Chord.Name", "EHoudiniCurveBreakpointParameterization::Chord" },
		{ "Invalid.Name", "EHoudiniCurveBreakpointParameterization::Invalid" },
		{ "ModuleRelativePath", "Public/HoudiniEngineRuntimeCommon.h" },
		{ "Uniform.Name", "EHoudiniCurveBreakpointParameterization::Uniform" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniCurveBreakpointParameterization::Invalid", (int64)EHoudiniCurveBreakpointParameterization::Invalid },
		{ "EHoudiniCurveBreakpointParameterization::Uniform", (int64)EHoudiniCurveBreakpointParameterization::Uniform },
		{ "EHoudiniCurveBreakpointParameterization::Chord", (int64)EHoudiniCurveBreakpointParameterization::Chord },
		{ "EHoudiniCurveBreakpointParameterization::Centripetal", (int64)EHoudiniCurveBreakpointParameterization::Centripetal },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveBreakpointParameterization_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniCurveBreakpointParameterization",
	"EHoudiniCurveBreakpointParameterization",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveBreakpointParameterization_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveBreakpointParameterization_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveBreakpointParameterization_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveBreakpointParameterization_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveBreakpointParameterization()
{
	if (!Z_Registration_Info_UEnum_EHoudiniCurveBreakpointParameterization.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniCurveBreakpointParameterization.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveBreakpointParameterization_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniCurveBreakpointParameterization.InnerSingleton;
}
// End Enum EHoudiniCurveBreakpointParameterization

// Begin Enum EHoudiniLandscapeExportType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniLandscapeExportType;
static UEnum* EHoudiniLandscapeExportType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniLandscapeExportType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniLandscapeExportType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniLandscapeExportType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniLandscapeExportType.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniLandscapeExportType>()
{
	return EHoudiniLandscapeExportType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Heightfield.Name", "EHoudiniLandscapeExportType::Heightfield" },
		{ "Mesh.Name", "EHoudiniLandscapeExportType::Mesh" },
		{ "ModuleRelativePath", "Public/HoudiniEngineRuntimeCommon.h" },
		{ "Points.Name", "EHoudiniLandscapeExportType::Points" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniLandscapeExportType::Heightfield", (int64)EHoudiniLandscapeExportType::Heightfield },
		{ "EHoudiniLandscapeExportType::Mesh", (int64)EHoudiniLandscapeExportType::Mesh },
		{ "EHoudiniLandscapeExportType::Points", (int64)EHoudiniLandscapeExportType::Points },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniLandscapeExportType",
	"EHoudiniLandscapeExportType",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniLandscapeExportType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniLandscapeExportType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniLandscapeExportType.InnerSingleton;
}
// End Enum EHoudiniLandscapeExportType

// Begin Enum EPDGBakeSelectionOption
#if WITH_EDITORONLY_DATA
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPDGBakeSelectionOption;
static UEnum* EPDGBakeSelectionOption_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPDGBakeSelectionOption.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPDGBakeSelectionOption.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakeSelectionOption, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EPDGBakeSelectionOption"));
	}
	return Z_Registration_Info_UEnum_EPDGBakeSelectionOption.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EPDGBakeSelectionOption>()
{
	return EPDGBakeSelectionOption_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakeSelectionOption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.Name", "EPDGBakeSelectionOption::All" },
		{ "ModuleRelativePath", "Public/HoudiniEngineRuntimeCommon.h" },
		{ "SelectedNetwork.Name", "EPDGBakeSelectionOption::SelectedNetwork" },
		{ "SelectedNode.Name", "EPDGBakeSelectionOption::SelectedNode" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPDGBakeSelectionOption::All", (int64)EPDGBakeSelectionOption::All },
		{ "EPDGBakeSelectionOption::SelectedNetwork", (int64)EPDGBakeSelectionOption::SelectedNetwork },
		{ "EPDGBakeSelectionOption::SelectedNode", (int64)EPDGBakeSelectionOption::SelectedNode },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakeSelectionOption_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EPDGBakeSelectionOption",
	"EPDGBakeSelectionOption",
	Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakeSelectionOption_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakeSelectionOption_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakeSelectionOption_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakeSelectionOption_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakeSelectionOption()
{
	if (!Z_Registration_Info_UEnum_EPDGBakeSelectionOption.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPDGBakeSelectionOption.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakeSelectionOption_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPDGBakeSelectionOption.InnerSingleton;
}
#endif // WITH_EDITORONLY_DATA
// End Enum EPDGBakeSelectionOption

// Begin Enum EPDGBakePackageReplaceModeOption
#if WITH_EDITORONLY_DATA
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPDGBakePackageReplaceModeOption;
static UEnum* EPDGBakePackageReplaceModeOption_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPDGBakePackageReplaceModeOption.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPDGBakePackageReplaceModeOption.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakePackageReplaceModeOption, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EPDGBakePackageReplaceModeOption"));
	}
	return Z_Registration_Info_UEnum_EPDGBakePackageReplaceModeOption.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EPDGBakePackageReplaceModeOption>()
{
	return EPDGBakePackageReplaceModeOption_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakePackageReplaceModeOption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CreateNewAssets.Name", "EPDGBakePackageReplaceModeOption::CreateNewAssets" },
		{ "ModuleRelativePath", "Public/HoudiniEngineRuntimeCommon.h" },
		{ "ReplaceExistingAssets.Name", "EPDGBakePackageReplaceModeOption::ReplaceExistingAssets" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPDGBakePackageReplaceModeOption::CreateNewAssets", (int64)EPDGBakePackageReplaceModeOption::CreateNewAssets },
		{ "EPDGBakePackageReplaceModeOption::ReplaceExistingAssets", (int64)EPDGBakePackageReplaceModeOption::ReplaceExistingAssets },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakePackageReplaceModeOption_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EPDGBakePackageReplaceModeOption",
	"EPDGBakePackageReplaceModeOption",
	Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakePackageReplaceModeOption_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakePackageReplaceModeOption_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakePackageReplaceModeOption_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakePackageReplaceModeOption_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakePackageReplaceModeOption()
{
	if (!Z_Registration_Info_UEnum_EPDGBakePackageReplaceModeOption.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPDGBakePackageReplaceModeOption.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakePackageReplaceModeOption_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPDGBakePackageReplaceModeOption.InnerSingleton;
}
#endif // WITH_EDITORONLY_DATA
// End Enum EPDGBakePackageReplaceModeOption

// Begin Enum EHoudiniProxyRefineResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniProxyRefineResult;
static UEnum* EHoudiniProxyRefineResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniProxyRefineResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniProxyRefineResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineResult, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniProxyRefineResult"));
	}
	return Z_Registration_Info_UEnum_EHoudiniProxyRefineResult.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniProxyRefineResult>()
{
	return EHoudiniProxyRefineResult_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When attempting to refine proxy mesh outputs it is a possible that a cook is needed. \n// This enum defines the possible return values on a request to refine proxies.\n" },
#endif
		{ "Failed.Comment", "// Refinement (or cook if needed) failed\n" },
		{ "Failed.Name", "EHoudiniProxyRefineResult::Failed" },
		{ "Failed.ToolTip", "Refinement (or cook if needed) failed" },
		{ "Invalid.Name", "EHoudiniProxyRefineResult::Invalid" },
		{ "ModuleRelativePath", "Public/HoudiniEngineRuntimeCommon.h" },
		{ "Skipped.Comment", "// Refinement was skipped, either it was not necessary or the operation was cancelled by the user\n" },
		{ "Skipped.Name", "EHoudiniProxyRefineResult::Skipped" },
		{ "Skipped.ToolTip", "Refinement was skipped, either it was not necessary or the operation was cancelled by the user" },
		{ "Success.Comment", "// Refinement completed successfully\n" },
		{ "Success.Name", "EHoudiniProxyRefineResult::Success" },
		{ "Success.ToolTip", "Refinement completed successfully" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When attempting to refine proxy mesh outputs it is a possible that a cook is needed.\nThis enum defines the possible return values on a request to refine proxies." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniProxyRefineResult::Invalid", (int64)EHoudiniProxyRefineResult::Invalid },
		{ "EHoudiniProxyRefineResult::Failed", (int64)EHoudiniProxyRefineResult::Failed },
		{ "EHoudiniProxyRefineResult::Success", (int64)EHoudiniProxyRefineResult::Success },
		{ "EHoudiniProxyRefineResult::Skipped", (int64)EHoudiniProxyRefineResult::Skipped },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniProxyRefineResult",
	"EHoudiniProxyRefineResult",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineResult()
{
	if (!Z_Registration_Info_UEnum_EHoudiniProxyRefineResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniProxyRefineResult.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniProxyRefineResult.InnerSingleton;
}
// End Enum EHoudiniProxyRefineResult

// Begin Enum EHoudiniProxyRefineRequestResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniProxyRefineRequestResult;
static UEnum* EHoudiniProxyRefineRequestResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniProxyRefineRequestResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniProxyRefineRequestResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineRequestResult, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniProxyRefineRequestResult"));
	}
	return Z_Registration_Info_UEnum_EHoudiniProxyRefineRequestResult.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniProxyRefineRequestResult>()
{
	return EHoudiniProxyRefineRequestResult_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineRequestResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When attempting to refine proxy mesh outputs it is a possible that a cook is needed. \n// This enum defines the possible return values on a request to refine proxies.\n" },
#endif
		{ "Invalid.Name", "EHoudiniProxyRefineRequestResult::Invalid" },
		{ "ModuleRelativePath", "Public/HoudiniEngineRuntimeCommon.h" },
		{ "None.Comment", "// No refinement is needed\n" },
		{ "None.Name", "EHoudiniProxyRefineRequestResult::None" },
		{ "None.ToolTip", "No refinement is needed" },
		{ "PendingCooks.Comment", "// A cook is needed, refinement will commence automatically after the cook\n" },
		{ "PendingCooks.Name", "EHoudiniProxyRefineRequestResult::PendingCooks" },
		{ "PendingCooks.ToolTip", "A cook is needed, refinement will commence automatically after the cook" },
		{ "Refined.Comment", "// Successfully refined\n" },
		{ "Refined.Name", "EHoudiniProxyRefineRequestResult::Refined" },
		{ "Refined.ToolTip", "Successfully refined" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When attempting to refine proxy mesh outputs it is a possible that a cook is needed.\nThis enum defines the possible return values on a request to refine proxies." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniProxyRefineRequestResult::Invalid", (int64)EHoudiniProxyRefineRequestResult::Invalid },
		{ "EHoudiniProxyRefineRequestResult::None", (int64)EHoudiniProxyRefineRequestResult::None },
		{ "EHoudiniProxyRefineRequestResult::PendingCooks", (int64)EHoudiniProxyRefineRequestResult::PendingCooks },
		{ "EHoudiniProxyRefineRequestResult::Refined", (int64)EHoudiniProxyRefineRequestResult::Refined },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineRequestResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniProxyRefineRequestResult",
	"EHoudiniProxyRefineRequestResult",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineRequestResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineRequestResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineRequestResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineRequestResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineRequestResult()
{
	if (!Z_Registration_Info_UEnum_EHoudiniProxyRefineRequestResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniProxyRefineRequestResult.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineRequestResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniProxyRefineRequestResult.InnerSingleton;
}
// End Enum EHoudiniProxyRefineRequestResult

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniEngineRuntimeCommon_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniRampInterpolationType_StaticEnum, TEXT("EHoudiniRampInterpolationType"), &Z_Registration_Info_UEnum_EHoudiniRampInterpolationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 970475002U) },
#if WITH_EDITORONLY_DATA
		{ EHoudiniEngineBakeOption_StaticEnum, TEXT("EHoudiniEngineBakeOption"), &Z_Registration_Info_UEnum_EHoudiniEngineBakeOption, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1204825035U) },
#endif // WITH_EDITORONLY_DATA
		{ EHoudiniEngineActorBakeOption_StaticEnum, TEXT("EHoudiniEngineActorBakeOption"), &Z_Registration_Info_UEnum_EHoudiniEngineActorBakeOption, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2532276571U) },
		{ EHoudiniLandscapeOutputBakeType_StaticEnum, TEXT("EHoudiniLandscapeOutputBakeType"), &Z_Registration_Info_UEnum_EHoudiniLandscapeOutputBakeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 328344140U) },
		{ EHoudiniInputType_StaticEnum, TEXT("EHoudiniInputType"), &Z_Registration_Info_UEnum_EHoudiniInputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4280348708U) },
		{ EHoudiniOutputType_StaticEnum, TEXT("EHoudiniOutputType"), &Z_Registration_Info_UEnum_EHoudiniOutputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 390911851U) },
		{ EHoudiniCurveType_StaticEnum, TEXT("EHoudiniCurveType"), &Z_Registration_Info_UEnum_EHoudiniCurveType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4179495487U) },
		{ EHoudiniCurveMethod_StaticEnum, TEXT("EHoudiniCurveMethod"), &Z_Registration_Info_UEnum_EHoudiniCurveMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2617385928U) },
		{ EHoudiniCurveBreakpointParameterization_StaticEnum, TEXT("EHoudiniCurveBreakpointParameterization"), &Z_Registration_Info_UEnum_EHoudiniCurveBreakpointParameterization, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2551504618U) },
		{ EHoudiniLandscapeExportType_StaticEnum, TEXT("EHoudiniLandscapeExportType"), &Z_Registration_Info_UEnum_EHoudiniLandscapeExportType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3228417928U) },
#if WITH_EDITORONLY_DATA
		{ EPDGBakeSelectionOption_StaticEnum, TEXT("EPDGBakeSelectionOption"), &Z_Registration_Info_UEnum_EPDGBakeSelectionOption, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1558793176U) },
		{ EPDGBakePackageReplaceModeOption_StaticEnum, TEXT("EPDGBakePackageReplaceModeOption"), &Z_Registration_Info_UEnum_EPDGBakePackageReplaceModeOption, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1363337547U) },
#endif // WITH_EDITORONLY_DATA
		{ EHoudiniProxyRefineResult_StaticEnum, TEXT("EHoudiniProxyRefineResult"), &Z_Registration_Info_UEnum_EHoudiniProxyRefineResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 413275131U) },
		{ EHoudiniProxyRefineRequestResult_StaticEnum, TEXT("EHoudiniProxyRefineRequestResult"), &Z_Registration_Info_UEnum_EHoudiniProxyRefineRequestResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4167407838U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniEngineRuntimeCommon_h_1622747645(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniEngineRuntimeCommon_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniEngineRuntimeCommon_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
