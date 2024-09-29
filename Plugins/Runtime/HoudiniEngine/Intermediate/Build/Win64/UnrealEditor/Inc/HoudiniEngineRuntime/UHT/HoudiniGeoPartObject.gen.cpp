// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniGeoPartObject.h"
#include "HoudiniEngineRuntime/Private/HoudiniGenericAttribute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniGeoPartObject() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniGeoType();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInstancerType();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniPartType();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniCurveInfo();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGenericAttribute();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGeoInfo();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGeoPartObject();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniMeshSocket();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniObjectInfo();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPartInfo();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniVolumeInfo();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EHoudiniGeoType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniGeoType;
static UEnum* EHoudiniGeoType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniGeoType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniGeoType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniGeoType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniGeoType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniGeoType.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniGeoType>()
{
	return EHoudiniGeoType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniGeoType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Curve.Name", "EHoudiniGeoType::Curve" },
		{ "Default.Name", "EHoudiniGeoType::Default" },
		{ "Input.Name", "EHoudiniGeoType::Input" },
		{ "Intermediate.Name", "EHoudiniGeoType::Intermediate" },
		{ "Invalid.Name", "EHoudiniGeoType::Invalid" },
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniGeoType::Invalid", (int64)EHoudiniGeoType::Invalid },
		{ "EHoudiniGeoType::Default", (int64)EHoudiniGeoType::Default },
		{ "EHoudiniGeoType::Intermediate", (int64)EHoudiniGeoType::Intermediate },
		{ "EHoudiniGeoType::Input", (int64)EHoudiniGeoType::Input },
		{ "EHoudiniGeoType::Curve", (int64)EHoudiniGeoType::Curve },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniGeoType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniGeoType",
	"EHoudiniGeoType",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniGeoType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniGeoType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniGeoType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniGeoType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniGeoType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniGeoType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniGeoType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniGeoType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniGeoType.InnerSingleton;
}
// End Enum EHoudiniGeoType

// Begin Enum EHoudiniPartType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniPartType;
static UEnum* EHoudiniPartType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniPartType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniPartType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniPartType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniPartType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniPartType.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniPartType>()
{
	return EHoudiniPartType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniPartType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Curve.Name", "EHoudiniPartType::Curve" },
		{ "DataTable.Name", "EHoudiniPartType::DataTable" },
		{ "Instancer.Name", "EHoudiniPartType::Instancer" },
		{ "Invalid.Name", "EHoudiniPartType::Invalid" },
		{ "LandscapeSpline.Name", "EHoudiniPartType::LandscapeSpline" },
		{ "Mesh.Name", "EHoudiniPartType::Mesh" },
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
		{ "MotionClip.Comment", "// Capture Pose for the skeletal mesh \n" },
		{ "MotionClip.Name", "EHoudiniPartType::MotionClip" },
		{ "MotionClip.ToolTip", "Capture Pose for the skeletal mesh" },
		{ "SkeletalMeshPose.Comment", "// Rest Geometry for the skeletal mesh\n" },
		{ "SkeletalMeshPose.Name", "EHoudiniPartType::SkeletalMeshPose" },
		{ "SkeletalMeshPose.ToolTip", "Rest Geometry for the skeletal mesh" },
		{ "SkeletalMeshShape.Name", "EHoudiniPartType::SkeletalMeshShape" },
		{ "Volume.Name", "EHoudiniPartType::Volume" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniPartType::Invalid", (int64)EHoudiniPartType::Invalid },
		{ "EHoudiniPartType::Mesh", (int64)EHoudiniPartType::Mesh },
		{ "EHoudiniPartType::Instancer", (int64)EHoudiniPartType::Instancer },
		{ "EHoudiniPartType::Curve", (int64)EHoudiniPartType::Curve },
		{ "EHoudiniPartType::Volume", (int64)EHoudiniPartType::Volume },
		{ "EHoudiniPartType::DataTable", (int64)EHoudiniPartType::DataTable },
		{ "EHoudiniPartType::LandscapeSpline", (int64)EHoudiniPartType::LandscapeSpline },
		{ "EHoudiniPartType::SkeletalMeshShape", (int64)EHoudiniPartType::SkeletalMeshShape },
		{ "EHoudiniPartType::SkeletalMeshPose", (int64)EHoudiniPartType::SkeletalMeshPose },
		{ "EHoudiniPartType::MotionClip", (int64)EHoudiniPartType::MotionClip },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniPartType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniPartType",
	"EHoudiniPartType",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniPartType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniPartType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniPartType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniPartType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniPartType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniPartType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniPartType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniPartType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniPartType.InnerSingleton;
}
// End Enum EHoudiniPartType

// Begin Enum EHoudiniInstancerType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniInstancerType;
static UEnum* EHoudiniInstancerType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniInstancerType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniInstancerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInstancerType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniInstancerType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniInstancerType.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniInstancerType>()
{
	return EHoudiniInstancerType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInstancerType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AttributeInstancer.Name", "EHoudiniInstancerType::AttributeInstancer" },
		{ "GeometryCollection.Name", "EHoudiniInstancerType::GeometryCollection" },
		{ "Invalid.Name", "EHoudiniInstancerType::Invalid" },
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
		{ "MotionClip.Name", "EHoudiniInstancerType::MotionClip" },
		{ "ObjectInstancer.Name", "EHoudiniInstancerType::ObjectInstancer" },
		{ "OldSchoolAttributeInstancer.Name", "EHoudiniInstancerType::OldSchoolAttributeInstancer" },
		{ "PackedPrimitive.Name", "EHoudiniInstancerType::PackedPrimitive" },
		{ "SkeletalMesh.Name", "EHoudiniInstancerType::SkeletalMesh" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniInstancerType::Invalid", (int64)EHoudiniInstancerType::Invalid },
		{ "EHoudiniInstancerType::ObjectInstancer", (int64)EHoudiniInstancerType::ObjectInstancer },
		{ "EHoudiniInstancerType::PackedPrimitive", (int64)EHoudiniInstancerType::PackedPrimitive },
		{ "EHoudiniInstancerType::AttributeInstancer", (int64)EHoudiniInstancerType::AttributeInstancer },
		{ "EHoudiniInstancerType::OldSchoolAttributeInstancer", (int64)EHoudiniInstancerType::OldSchoolAttributeInstancer },
		{ "EHoudiniInstancerType::GeometryCollection", (int64)EHoudiniInstancerType::GeometryCollection },
		{ "EHoudiniInstancerType::SkeletalMesh", (int64)EHoudiniInstancerType::SkeletalMesh },
		{ "EHoudiniInstancerType::MotionClip", (int64)EHoudiniInstancerType::MotionClip },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInstancerType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniInstancerType",
	"EHoudiniInstancerType",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInstancerType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInstancerType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInstancerType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInstancerType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInstancerType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniInstancerType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniInstancerType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInstancerType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniInstancerType.InnerSingleton;
}
// End Enum EHoudiniInstancerType

// Begin ScriptStruct FHoudiniObjectInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniObjectInfo;
class UScriptStruct* FHoudiniObjectInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniObjectInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniObjectInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniObjectInfo, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniObjectInfo"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniObjectInfo.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniObjectInfo>()
{
	return FHoudiniObjectInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniObjectInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniObjectInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniObjectInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniObjectInfo",
	nullptr,
	0,
	sizeof(FHoudiniObjectInfo),
	alignof(FHoudiniObjectInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniObjectInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniObjectInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniObjectInfo()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniObjectInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniObjectInfo.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniObjectInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniObjectInfo.InnerSingleton;
}
// End ScriptStruct FHoudiniObjectInfo

// Begin ScriptStruct FHoudiniGeoInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniGeoInfo;
class UScriptStruct* FHoudiniGeoInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniGeoInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniGeoInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniGeoInfo, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniGeoInfo"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniGeoInfo.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniGeoInfo>()
{
	return FHoudiniGeoInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniGeoInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniGeoInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniGeoInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniGeoInfo",
	nullptr,
	0,
	sizeof(FHoudiniGeoInfo),
	alignof(FHoudiniGeoInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGeoInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniGeoInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGeoInfo()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniGeoInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniGeoInfo.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniGeoInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniGeoInfo.InnerSingleton;
}
// End ScriptStruct FHoudiniGeoInfo

// Begin ScriptStruct FHoudiniPartInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniPartInfo;
class UScriptStruct* FHoudiniPartInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniPartInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniPartInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPartInfo, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniPartInfo"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniPartInfo.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniPartInfo>()
{
	return FHoudiniPartInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniPartInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPartInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPartInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniPartInfo",
	nullptr,
	0,
	sizeof(FHoudiniPartInfo),
	alignof(FHoudiniPartInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPartInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniPartInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPartInfo()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniPartInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniPartInfo.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniPartInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniPartInfo.InnerSingleton;
}
// End ScriptStruct FHoudiniPartInfo

// Begin ScriptStruct FHoudiniVolumeInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniVolumeInfo;
class UScriptStruct* FHoudiniVolumeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniVolumeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniVolumeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniVolumeInfo, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniVolumeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniVolumeInfo.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniVolumeInfo>()
{
	return FHoudiniVolumeInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniVolumeInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniVolumeInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniVolumeInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniVolumeInfo",
	nullptr,
	0,
	sizeof(FHoudiniVolumeInfo),
	alignof(FHoudiniVolumeInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniVolumeInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniVolumeInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniVolumeInfo()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniVolumeInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniVolumeInfo.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniVolumeInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniVolumeInfo.InnerSingleton;
}
// End ScriptStruct FHoudiniVolumeInfo

// Begin ScriptStruct FHoudiniCurveInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniCurveInfo;
class UScriptStruct* FHoudiniCurveInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniCurveInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniCurveInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniCurveInfo, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniCurveInfo"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniCurveInfo.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniCurveInfo>()
{
	return FHoudiniCurveInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniCurveInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniCurveInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniCurveInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniCurveInfo",
	nullptr,
	0,
	sizeof(FHoudiniCurveInfo),
	alignof(FHoudiniCurveInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniCurveInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniCurveInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniCurveInfo()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniCurveInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniCurveInfo.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniCurveInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniCurveInfo.InnerSingleton;
}
// End ScriptStruct FHoudiniCurveInfo

// Begin ScriptStruct FHoudiniMeshSocket
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniMeshSocket;
class UScriptStruct* FHoudiniMeshSocket::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniMeshSocket.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniMeshSocket.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniMeshSocket, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniMeshSocket"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniMeshSocket.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniMeshSocket>()
{
	return FHoudiniMeshSocket::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniMeshSocket_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniMeshSocket>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniMeshSocket_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniMeshSocket",
	nullptr,
	0,
	sizeof(FHoudiniMeshSocket),
	alignof(FHoudiniMeshSocket),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniMeshSocket_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniMeshSocket_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniMeshSocket()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniMeshSocket.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniMeshSocket.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniMeshSocket_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniMeshSocket.InnerSingleton;
}
// End ScriptStruct FHoudiniMeshSocket

// Begin ScriptStruct FHoudiniGeoPartObject
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniGeoPartObject;
class UScriptStruct* FHoudiniGeoPartObject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniGeoPartObject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniGeoPartObject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniGeoPartObject, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniGeoPartObject"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniGeoPartObject.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniGeoPartObject>()
{
	return FHoudiniGeoPartObject::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\nUSTRUCT()\nstruct HOUDINIENGINERUNTIME_API FHoudiniSplitDataCache\n{\n\x09GENERATED_USTRUCT_BODY()\n\n\x09UPROPERTY()\n\x09""FString SplitName;\n\x09//UPROPERTY()\n\x09//FHoudiniOutputObjectIdentifier SplitIdentifier;\n\x09//EHoudiniSplitType SplitType;\n\n\x09UPROPERTY()\n\x09TArray<FVector> Positions;\n\x09UPROPERTY()\n\x09TArray<uint32> Indices;\n\n\x09UPROPERTY()\n\x09TArray<FVector> Normals;\n\x09UPROPERTY()\n\x09TArray<FVector> Tangents;\n\x09UPROPERTY()\n\x09TArray<FVector> Binormals;\n\x09\n\x09UPROPERTY()\n\x09TArray<FVector4> Colors;\n\n\x09//UPROPERTY()\n\x09//TArray<TArray<FVector2D>> UVs;\n\x09\n\x09//TArray<bool> EdgeHardnesses;\x09\n\x09UPROPERTY()\n\x09TArray<int32> FaceSmoothingMasks;\n\x09UPROPERTY()\n\x09TArray<int32> LightMapResolutions;\n\n\x09UPROPERTY()\n\x09TArray<int32> MaterialIndices;\n\x09UPROPERTY()\n\x09TArray<UMaterialInterface*> Materials;\n\n\x09UPROPERTY()\n\x09""float lod_screensize;\n\n\x09UPROPERTY()\n\x09""FKAggregateGeom AggregateCollisions;\n};\n*/" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "USTRUCT()\nstruct HOUDINIENGINERUNTIME_API FHoudiniSplitDataCache\n{\n       GENERATED_USTRUCT_BODY()\n\n       UPROPERTY()\n       FString SplitName;\n       //UPROPERTY()\n       //FHoudiniOutputObjectIdentifier SplitIdentifier;\n       //EHoudiniSplitType SplitType;\n\n       UPROPERTY()\n       TArray<FVector> Positions;\n       UPROPERTY()\n       TArray<uint32> Indices;\n\n       UPROPERTY()\n       TArray<FVector> Normals;\n       UPROPERTY()\n       TArray<FVector> Tangents;\n       UPROPERTY()\n       TArray<FVector> Binormals;\n\n       UPROPERTY()\n       TArray<FVector4> Colors;\n\n       //UPROPERTY()\n       //TArray<TArray<FVector2D>> UVs;\n\n       //TArray<bool> EdgeHardnesses;\n       UPROPERTY()\n       TArray<int32> FaceSmoothingMasks;\n       UPROPERTY()\n       TArray<int32> LightMapResolutions;\n\n       UPROPERTY()\n       TArray<int32> MaterialIndices;\n       UPROPERTY()\n       TArray<UMaterialInterface*> Materials;\n\n       UPROPERTY()\n       float lod_screensize;\n\n       UPROPERTY()\n       FKAggregateGeom AggregateCollisions;\n};" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetId_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// NodeId of corresponding HAPI Asset.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NodeId of corresponding HAPI Asset." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Name of corresponding HDA.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of corresponding HDA." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectId_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// NodeId of corresponding HAPI Object.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NodeId of corresponding HAPI Object." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Name of associated object.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of associated object." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeoId_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// NodeId of corresponding HAPI Geo.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NodeId of corresponding HAPI Geo." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartId_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// PartId of corresponding HAPI Part.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PartId of corresponding HAPI Part." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Name of associated part.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of associated part." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasCustomPartName_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplitGroups_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09// Type of the split.\n\x09UPROPERTY()\n\x09""EHoudiniSplitType SplitType;\n\n\x09// Index of a split. In most cases this will be 0.\n\x09UPROPERTY()\n\x09int32 SplitIndex;\n\n\x09// Name of group which was used for splitting, empty if there's none.\n\x09UPROPERTY()\n\x09""FString SplitName;\n\x09*/// Split groups handled by this HGPO\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "// Type of the split.\nUPROPERTY()\nEHoudiniSplitType SplitType;\n\n// Index of a split. In most cases this will be 0.\nUPROPERTY()\nint32 SplitIndex;\n\n// Name of group which was used for splitting, empty if there's none.\nUPROPERTY()\nFString SplitName;\n// Split groups handled by this HGPO" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformMatrix_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Transform of this geo part object.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transform of this geo part object." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodePath_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Path to the corresponding node\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Path to the corresponding node" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates the type of the referenced object\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates the type of the referenced object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancerType_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates the type of instancer\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates the type of instancer" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasEditLayers_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeLayerName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Name of edit layer \n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of edit layer" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeTileIndex_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancerName_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is set to true when referenced object is visible.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is set to true when referenced object is visible." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsEditable_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is set to true when referenced object is editable.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is set to true when referenced object is editable." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTemplated_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is set to true when referenced object is templated.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is set to true when referenced object is templated." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInstanced_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is set to true when the referenced object is instanced.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is set to true when the referenced object is instanced." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasGeoChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates the parent geo has changed and needs to be rebuilt\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates the parent geo has changed and needs to be rebuilt" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasPartChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates the part has changed and needs to be rebuilt\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates the part has changed and needs to be rebuilt" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasTransformChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates only the transform needs to be updated\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates only the transform needs to be updated" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasMaterialsChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates only the material needs to be updated\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates only the material needs to be updated" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllMeshSockets_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Stores the Mesh Sockets found for a given HGPO\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stores the Mesh Sockets found for a given HGPO" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenericPropertyAttributes_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cached generic properties that we can pass through to the baking process\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached generic properties that we can pass through to the baking process" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bKeepTags_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniGeoPartObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AssetId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ObjectId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GeoId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PartId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PartName;
	static void NewProp_bHasCustomPartName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasCustomPartName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SplitGroups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SplitGroups;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformMatrix;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodePath;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InstancerType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InstancerType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VolumeName;
	static void NewProp_bHasEditLayers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasEditLayers;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VolumeLayerName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VolumeTileIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InstancerName;
	static void NewProp_bIsVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
	static void NewProp_bIsEditable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEditable;
	static void NewProp_bIsTemplated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTemplated;
	static void NewProp_bIsInstanced_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInstanced;
	static void NewProp_bHasGeoChanged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasGeoChanged;
	static void NewProp_bHasPartChanged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasPartChanged;
	static void NewProp_bHasTransformChanged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasTransformChanged;
	static void NewProp_bHasMaterialsChanged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasMaterialsChanged;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AllMeshSockets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllMeshSockets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GenericPropertyAttributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GenericPropertyAttributes;
	static void NewProp_bKeepTags_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniGeoPartObject>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_AssetId = { "AssetId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, AssetId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetId_MetaData), NewProp_AssetId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, AssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetName_MetaData), NewProp_AssetName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_ObjectId = { "ObjectId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, ObjectId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectId_MetaData), NewProp_ObjectId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_ObjectName = { "ObjectName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, ObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectName_MetaData), NewProp_ObjectName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_GeoId = { "GeoId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, GeoId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeoId_MetaData), NewProp_GeoId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_PartId = { "PartId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, PartId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartId_MetaData), NewProp_PartId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_PartName = { "PartName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, PartName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartName_MetaData), NewProp_PartName_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasCustomPartName_SetBit(void* Obj)
{
	((FHoudiniGeoPartObject*)Obj)->bHasCustomPartName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasCustomPartName = { "bHasCustomPartName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniGeoPartObject), &Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasCustomPartName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasCustomPartName_MetaData), NewProp_bHasCustomPartName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_SplitGroups_Inner = { "SplitGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_SplitGroups = { "SplitGroups", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, SplitGroups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplitGroups_MetaData), NewProp_SplitGroups_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_TransformMatrix = { "TransformMatrix", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, TransformMatrix), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformMatrix_MetaData), NewProp_TransformMatrix_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_NodePath = { "NodePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, NodePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodePath_MetaData), NewProp_NodePath_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, Type), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniPartType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 4252752369
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_InstancerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_InstancerType = { "InstancerType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, InstancerType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInstancerType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancerType_MetaData), NewProp_InstancerType_MetaData) }; // 1154785161
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_VolumeName = { "VolumeName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, VolumeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeName_MetaData), NewProp_VolumeName_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasEditLayers_SetBit(void* Obj)
{
	((FHoudiniGeoPartObject*)Obj)->bHasEditLayers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasEditLayers = { "bHasEditLayers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniGeoPartObject), &Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasEditLayers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasEditLayers_MetaData), NewProp_bHasEditLayers_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_VolumeLayerName = { "VolumeLayerName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, VolumeLayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeLayerName_MetaData), NewProp_VolumeLayerName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_VolumeTileIndex = { "VolumeTileIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, VolumeTileIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeTileIndex_MetaData), NewProp_VolumeTileIndex_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_InstancerName = { "InstancerName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, InstancerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancerName_MetaData), NewProp_InstancerName_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsVisible_SetBit(void* Obj)
{
	((FHoudiniGeoPartObject*)Obj)->bIsVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniGeoPartObject), &Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsVisible_MetaData), NewProp_bIsVisible_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsEditable_SetBit(void* Obj)
{
	((FHoudiniGeoPartObject*)Obj)->bIsEditable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsEditable = { "bIsEditable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniGeoPartObject), &Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsEditable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsEditable_MetaData), NewProp_bIsEditable_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsTemplated_SetBit(void* Obj)
{
	((FHoudiniGeoPartObject*)Obj)->bIsTemplated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsTemplated = { "bIsTemplated", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniGeoPartObject), &Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsTemplated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTemplated_MetaData), NewProp_bIsTemplated_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsInstanced_SetBit(void* Obj)
{
	((FHoudiniGeoPartObject*)Obj)->bIsInstanced = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsInstanced = { "bIsInstanced", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniGeoPartObject), &Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsInstanced_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInstanced_MetaData), NewProp_bIsInstanced_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasGeoChanged_SetBit(void* Obj)
{
	((FHoudiniGeoPartObject*)Obj)->bHasGeoChanged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasGeoChanged = { "bHasGeoChanged", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniGeoPartObject), &Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasGeoChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasGeoChanged_MetaData), NewProp_bHasGeoChanged_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasPartChanged_SetBit(void* Obj)
{
	((FHoudiniGeoPartObject*)Obj)->bHasPartChanged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasPartChanged = { "bHasPartChanged", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniGeoPartObject), &Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasPartChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasPartChanged_MetaData), NewProp_bHasPartChanged_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasTransformChanged_SetBit(void* Obj)
{
	((FHoudiniGeoPartObject*)Obj)->bHasTransformChanged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasTransformChanged = { "bHasTransformChanged", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniGeoPartObject), &Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasTransformChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasTransformChanged_MetaData), NewProp_bHasTransformChanged_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasMaterialsChanged_SetBit(void* Obj)
{
	((FHoudiniGeoPartObject*)Obj)->bHasMaterialsChanged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasMaterialsChanged = { "bHasMaterialsChanged", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniGeoPartObject), &Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasMaterialsChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasMaterialsChanged_MetaData), NewProp_bHasMaterialsChanged_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_AllMeshSockets_Inner = { "AllMeshSockets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniMeshSocket, METADATA_PARAMS(0, nullptr) }; // 3820436051
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_AllMeshSockets = { "AllMeshSockets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, AllMeshSockets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllMeshSockets_MetaData), NewProp_AllMeshSockets_MetaData) }; // 3820436051
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_GenericPropertyAttributes_Inner = { "GenericPropertyAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniGenericAttribute, METADATA_PARAMS(0, nullptr) }; // 2192899334
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_GenericPropertyAttributes = { "GenericPropertyAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGeoPartObject, GenericPropertyAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenericPropertyAttributes_MetaData), NewProp_GenericPropertyAttributes_MetaData) }; // 2192899334
void Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bKeepTags_SetBit(void* Obj)
{
	((FHoudiniGeoPartObject*)Obj)->bKeepTags = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bKeepTags = { "bKeepTags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniGeoPartObject), &Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bKeepTags_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bKeepTags_MetaData), NewProp_bKeepTags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_AssetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_AssetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_ObjectId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_ObjectName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_GeoId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_PartId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_PartName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasCustomPartName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_SplitGroups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_SplitGroups,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_TransformMatrix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_NodePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_InstancerType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_InstancerType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_VolumeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasEditLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_VolumeLayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_VolumeTileIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_InstancerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsEditable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsTemplated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bIsInstanced,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasGeoChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasPartChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasTransformChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bHasMaterialsChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_AllMeshSockets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_AllMeshSockets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_GenericPropertyAttributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_GenericPropertyAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewProp_bKeepTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniGeoPartObject",
	Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::PropPointers),
	sizeof(FHoudiniGeoPartObject),
	alignof(FHoudiniGeoPartObject),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGeoPartObject()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniGeoPartObject.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniGeoPartObject.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniGeoPartObject.InnerSingleton;
}
// End ScriptStruct FHoudiniGeoPartObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectLincolnLog_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGeoPartObject_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniGeoType_StaticEnum, TEXT("EHoudiniGeoType"), &Z_Registration_Info_UEnum_EHoudiniGeoType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2262773732U) },
		{ EHoudiniPartType_StaticEnum, TEXT("EHoudiniPartType"), &Z_Registration_Info_UEnum_EHoudiniPartType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4252752369U) },
		{ EHoudiniInstancerType_StaticEnum, TEXT("EHoudiniInstancerType"), &Z_Registration_Info_UEnum_EHoudiniInstancerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1154785161U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHoudiniObjectInfo::StaticStruct, Z_Construct_UScriptStruct_FHoudiniObjectInfo_Statics::NewStructOps, TEXT("HoudiniObjectInfo"), &Z_Registration_Info_UScriptStruct_HoudiniObjectInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniObjectInfo), 537372238U) },
		{ FHoudiniGeoInfo::StaticStruct, Z_Construct_UScriptStruct_FHoudiniGeoInfo_Statics::NewStructOps, TEXT("HoudiniGeoInfo"), &Z_Registration_Info_UScriptStruct_HoudiniGeoInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniGeoInfo), 153634741U) },
		{ FHoudiniPartInfo::StaticStruct, Z_Construct_UScriptStruct_FHoudiniPartInfo_Statics::NewStructOps, TEXT("HoudiniPartInfo"), &Z_Registration_Info_UScriptStruct_HoudiniPartInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniPartInfo), 2652834851U) },
		{ FHoudiniVolumeInfo::StaticStruct, Z_Construct_UScriptStruct_FHoudiniVolumeInfo_Statics::NewStructOps, TEXT("HoudiniVolumeInfo"), &Z_Registration_Info_UScriptStruct_HoudiniVolumeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniVolumeInfo), 718183056U) },
		{ FHoudiniCurveInfo::StaticStruct, Z_Construct_UScriptStruct_FHoudiniCurveInfo_Statics::NewStructOps, TEXT("HoudiniCurveInfo"), &Z_Registration_Info_UScriptStruct_HoudiniCurveInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniCurveInfo), 4064003902U) },
		{ FHoudiniMeshSocket::StaticStruct, Z_Construct_UScriptStruct_FHoudiniMeshSocket_Statics::NewStructOps, TEXT("HoudiniMeshSocket"), &Z_Registration_Info_UScriptStruct_HoudiniMeshSocket, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniMeshSocket), 3820436051U) },
		{ FHoudiniGeoPartObject::StaticStruct, Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics::NewStructOps, TEXT("HoudiniGeoPartObject"), &Z_Registration_Info_UScriptStruct_HoudiniGeoPartObject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniGeoPartObject), 258446324U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectLincolnLog_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGeoPartObject_h_3179330602(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectLincolnLog_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGeoPartObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectLincolnLog_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGeoPartObject_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_ProjectLincolnLog_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGeoPartObject_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectLincolnLog_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGeoPartObject_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
