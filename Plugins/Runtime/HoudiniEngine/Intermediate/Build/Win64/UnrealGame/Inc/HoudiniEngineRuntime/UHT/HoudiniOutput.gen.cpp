// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniOutput.h"
#include "HoudiniEngineRuntime/Private/HoudiniGenericAttribute.h"
#include "HoudiniEngineRuntime/Private/HoudiniGeoPartObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniOutput() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELevelInstanceCreationType();
FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniLandscapeOutput();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniLandscapeOutput_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniLandscapePtr();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniLandscapePtr_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniLandscapeSplinesOutput();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniOutput();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniOutput_NoRegister();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveOutputType();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniBakedOutput();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniBakedOutputObject();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniClearedEditLayers();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniDataLayer();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniExtents();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGenericAttribute();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGeoPartObject();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniHLODLayer();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniInstancedOutput();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniOutputObject();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier();
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeProxy_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeSplineActor_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplineControlPoint_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplinesComponent_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplineSegment_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EHoudiniCurveOutputType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniCurveOutputType;
static UEnum* EHoudiniCurveOutputType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniCurveOutputType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniCurveOutputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveOutputType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniCurveOutputType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniCurveOutputType.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniCurveOutputType>()
{
	return EHoudiniCurveOutputType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveOutputType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "HoudiniSpline.Name", "EHoudiniCurveOutputType::HoudiniSpline" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "UnrealSpline.Name", "EHoudiniCurveOutputType::UnrealSpline" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniCurveOutputType::UnrealSpline", (int64)EHoudiniCurveOutputType::UnrealSpline },
		{ "EHoudiniCurveOutputType::HoudiniSpline", (int64)EHoudiniCurveOutputType::HoudiniSpline },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveOutputType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniCurveOutputType",
	"EHoudiniCurveOutputType",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveOutputType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveOutputType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveOutputType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveOutputType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveOutputType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniCurveOutputType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniCurveOutputType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveOutputType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniCurveOutputType.InnerSingleton;
}
// End Enum EHoudiniCurveOutputType

// Begin ScriptStruct FHoudiniCurveOutputProperties
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniCurveOutputProperties;
class UScriptStruct* FHoudiniCurveOutputProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniCurveOutputProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniCurveOutputProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniCurveOutputProperties"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniCurveOutputProperties.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniCurveOutputProperties>()
{
	return FHoudiniCurveOutputProperties::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveOutputType_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Curve output properties\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Curve output properties" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumPoints_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClosed_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveType_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveMethod_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurveOutputType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveOutputType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumPoints;
	static void NewProp_bClosed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClosed;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_CurveType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveType;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_CurveMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniCurveOutputProperties>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveOutputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveOutputType = { "CurveOutputType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniCurveOutputProperties, CurveOutputType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveOutputType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveOutputType_MetaData), NewProp_CurveOutputType_MetaData) }; // 816756242
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_NumPoints = { "NumPoints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniCurveOutputProperties, NumPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumPoints_MetaData), NewProp_NumPoints_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_bClosed_SetBit(void* Obj)
{
	((FHoudiniCurveOutputProperties*)Obj)->bClosed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_bClosed = { "bClosed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniCurveOutputProperties), &Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_bClosed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClosed_MetaData), NewProp_bClosed_MetaData) };
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveType = { "CurveType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniCurveOutputProperties, CurveType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveType_MetaData), NewProp_CurveType_MetaData) }; // 4179495487
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveMethod = { "CurveMethod", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniCurveOutputProperties, CurveMethod), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveMethod_MetaData), NewProp_CurveMethod_MetaData) }; // 2617385928
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveOutputType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveOutputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_NumPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_bClosed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniCurveOutputProperties",
	Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::PropPointers),
	sizeof(FHoudiniCurveOutputProperties),
	alignof(FHoudiniCurveOutputProperties),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniCurveOutputProperties.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniCurveOutputProperties.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniCurveOutputProperties.InnerSingleton;
}
// End ScriptStruct FHoudiniCurveOutputProperties

// Begin Class UHoudiniLandscapePtr
void UHoudiniLandscapePtr::StaticRegisterNativesUHoudiniLandscapePtr()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniLandscapePtr);
UClass* Z_Construct_UClass_UHoudiniLandscapePtr_NoRegister()
{
	return UHoudiniLandscapePtr::StaticClass();
}
struct Z_Construct_UClass_UHoudiniLandscapePtr_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniOutput.h" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeSoftPtr_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakeType_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditLayerName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Edit layer to which this output corresponds, if applicable. \n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Edit layer to which this output corresponds, if applicable." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LandscapeSoftPtr;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BakeType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BakeType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EditLayerName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniLandscapePtr>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_LandscapeSoftPtr = { "LandscapeSoftPtr", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniLandscapePtr, LandscapeSoftPtr), Z_Construct_UClass_ALandscapeProxy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeSoftPtr_MetaData), NewProp_LandscapeSoftPtr_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_BakeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_BakeType = { "BakeType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniLandscapePtr, BakeType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakeType_MetaData), NewProp_BakeType_MetaData) }; // 328344140
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_EditLayerName = { "EditLayerName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniLandscapePtr, EditLayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditLayerName_MetaData), NewProp_EditLayerName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniLandscapePtr_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_LandscapeSoftPtr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_BakeType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_BakeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_EditLayerName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapePtr_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniLandscapePtr_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapePtr_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniLandscapePtr_Statics::ClassParams = {
	&UHoudiniLandscapePtr::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniLandscapePtr_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapePtr_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapePtr_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniLandscapePtr_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniLandscapePtr()
{
	if (!Z_Registration_Info_UClass_UHoudiniLandscapePtr.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniLandscapePtr.OuterSingleton, Z_Construct_UClass_UHoudiniLandscapePtr_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniLandscapePtr.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniLandscapePtr>()
{
	return UHoudiniLandscapePtr::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniLandscapePtr);
UHoudiniLandscapePtr::~UHoudiniLandscapePtr() {}
// End Class UHoudiniLandscapePtr

// Begin ScriptStruct FHoudiniExtents
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniExtents;
class UScriptStruct* FHoudiniExtents::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniExtents.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniExtents.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniExtents, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniExtents"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniExtents.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniExtents>()
{
	return FHoudiniExtents::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniExtents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Min;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Max;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniExtents>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniExtents_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniExtents, Min), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Min_MetaData), NewProp_Min_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniExtents_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniExtents, Max), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniExtents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniExtents_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniExtents_Statics::NewProp_Max,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniExtents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniExtents_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniExtents",
	Z_Construct_UScriptStruct_FHoudiniExtents_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniExtents_Statics::PropPointers),
	sizeof(FHoudiniExtents),
	alignof(FHoudiniExtents),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniExtents_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniExtents_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniExtents()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniExtents.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniExtents.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniExtents_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniExtents.InnerSingleton;
}
// End ScriptStruct FHoudiniExtents

// Begin ScriptStruct FHoudiniClearedTargetLayer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniClearedTargetLayer;
class UScriptStruct* FHoudiniClearedTargetLayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniClearedTargetLayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniClearedTargetLayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniClearedTargetLayer"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniClearedTargetLayer.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniClearedTargetLayer>()
{
	return FHoudiniClearedTargetLayer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLayers_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TargetLayers_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_TargetLayers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniClearedTargetLayer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics::NewProp_TargetLayers_ElementProp = { "TargetLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics::NewProp_TargetLayers = { "TargetLayers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniClearedTargetLayer, TargetLayers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLayers_MetaData), NewProp_TargetLayers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics::NewProp_TargetLayers_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics::NewProp_TargetLayers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniClearedTargetLayer",
	Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics::PropPointers),
	sizeof(FHoudiniClearedTargetLayer),
	alignof(FHoudiniClearedTargetLayer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniClearedTargetLayer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniClearedTargetLayer.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniClearedTargetLayer.InnerSingleton;
}
// End ScriptStruct FHoudiniClearedTargetLayer

// Begin ScriptStruct FHoudiniClearedEditLayers
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniClearedEditLayers;
class UScriptStruct* FHoudiniClearedEditLayers::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniClearedEditLayers.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniClearedEditLayers.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniClearedEditLayers, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniClearedEditLayers"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniClearedEditLayers.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniClearedEditLayers>()
{
	return FHoudiniClearedEditLayers::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditLayers_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EditLayers_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EditLayers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EditLayers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniClearedEditLayers>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::NewProp_EditLayers_ValueProp = { "EditLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer, METADATA_PARAMS(0, nullptr) }; // 3529665285
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::NewProp_EditLayers_Key_KeyProp = { "EditLayers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::NewProp_EditLayers = { "EditLayers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniClearedEditLayers, EditLayers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditLayers_MetaData), NewProp_EditLayers_MetaData) }; // 3529665285
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::NewProp_EditLayers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::NewProp_EditLayers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::NewProp_EditLayers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniClearedEditLayers",
	Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::PropPointers),
	sizeof(FHoudiniClearedEditLayers),
	alignof(FHoudiniClearedEditLayers),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniClearedEditLayers()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniClearedEditLayers.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniClearedEditLayers.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniClearedEditLayers.InnerSingleton;
}
// End ScriptStruct FHoudiniClearedEditLayers

// Begin ScriptStruct FHoudiniMaterialIdentifier
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniMaterialIdentifier;
class UScriptStruct* FHoudiniMaterialIdentifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniMaterialIdentifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniMaterialIdentifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniMaterialIdentifier"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniMaterialIdentifier.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniMaterialIdentifier>()
{
	return FHoudiniMaterialIdentifier::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A struct to identify a material from a Houdini output\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A struct to identify a material from a Houdini output" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialObjectPath_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Unreal UMaterial object path if bIsHoudiniMaterial is false. Otherwise this is a Houdini material node path. \n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unreal UMaterial object path if bIsHoudiniMaterial is false. Otherwise this is a Houdini material node path." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsHoudiniMaterial_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// True if this identifies a Houdini material (vs an Unreal material).\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if this identifies a Houdini material (vs an Unreal material)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMakeMaterialInstance_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If not a Houdini material, does this identify a material instance of MaterialObjectPath?\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If not a Houdini material, does this identify a material instance of MaterialObjectPath?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInstanceParametersSlug_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A string that encodes the overridden parameter value set of the material instance.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A string that encodes the overridden parameter value set of the material instance." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialObjectPath;
	static void NewProp_bIsHoudiniMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHoudiniMaterial;
	static void NewProp_bMakeMaterialInstance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMakeMaterialInstance;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialInstanceParametersSlug;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniMaterialIdentifier>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics::NewProp_MaterialObjectPath = { "MaterialObjectPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniMaterialIdentifier, MaterialObjectPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialObjectPath_MetaData), NewProp_MaterialObjectPath_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics::NewProp_bIsHoudiniMaterial_SetBit(void* Obj)
{
	((FHoudiniMaterialIdentifier*)Obj)->bIsHoudiniMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics::NewProp_bIsHoudiniMaterial = { "bIsHoudiniMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniMaterialIdentifier), &Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics::NewProp_bIsHoudiniMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsHoudiniMaterial_MetaData), NewProp_bIsHoudiniMaterial_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics::NewProp_bMakeMaterialInstance_SetBit(void* Obj)
{
	((FHoudiniMaterialIdentifier*)Obj)->bMakeMaterialInstance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics::NewProp_bMakeMaterialInstance = { "bMakeMaterialInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniMaterialIdentifier), &Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics::NewProp_bMakeMaterialInstance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMakeMaterialInstance_MetaData), NewProp_bMakeMaterialInstance_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics::NewProp_MaterialInstanceParametersSlug = { "MaterialInstanceParametersSlug", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniMaterialIdentifier, MaterialInstanceParametersSlug), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialInstanceParametersSlug_MetaData), NewProp_MaterialInstanceParametersSlug_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics::NewProp_MaterialObjectPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics::NewProp_bIsHoudiniMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics::NewProp_bMakeMaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics::NewProp_MaterialInstanceParametersSlug,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniMaterialIdentifier",
	Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics::PropPointers),
	sizeof(FHoudiniMaterialIdentifier),
	alignof(FHoudiniMaterialIdentifier),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniMaterialIdentifier.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniMaterialIdentifier.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniMaterialIdentifier.InnerSingleton;
}
// End ScriptStruct FHoudiniMaterialIdentifier

// Begin Class UHoudiniLandscapeTargetLayerOutput
void UHoudiniLandscapeTargetLayerOutput::StaticRegisterNativesUHoudiniLandscapeTargetLayerOutput()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniLandscapeTargetLayerOutput);
UClass* Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_NoRegister()
{
	return UHoudiniLandscapeTargetLayerOutput::StaticClass();
}
struct Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniOutput.h" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Landscape_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeProxy_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Parent Landscape\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parent Landscape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakedEditLayer_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Landscape Proxy\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Landscape Proxy" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CookedEditLayer_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Final baked layer name\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Final baked layer name" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLayer_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Temp cooked layer name\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Temp cooked layer name" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Extents_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Target layer name\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Target layer name" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClearLayer_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Extents of the grid updated\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Extents of the grid updated" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreatedLandscape_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCookedLayerRequiresBaking_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakedLandscapeName_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerInfoObjects_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakeFolder_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteLockedLayers_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockLayer_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyAttributes_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Landscape;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LandscapeProxy;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BakedEditLayer;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CookedEditLayer;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TargetLayer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Extents;
	static void NewProp_bClearLayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearLayer;
	static void NewProp_bCreatedLandscape_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreatedLandscape;
	static void NewProp_bCookedLayerRequiresBaking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCookedLayerRequiresBaking;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BakedLandscapeName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LayerInfoObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerInfoObjects;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BakeFolder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInstance;
	static void NewProp_bWriteLockedLayers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteLockedLayers;
	static void NewProp_bLockLayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockLayer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyAttributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyAttributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniLandscapeTargetLayerOutput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_Landscape = { "Landscape", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniLandscapeTargetLayerOutput, Landscape), Z_Construct_UClass_ALandscape_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Landscape_MetaData), NewProp_Landscape_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_LandscapeProxy = { "LandscapeProxy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniLandscapeTargetLayerOutput, LandscapeProxy), Z_Construct_UClass_ALandscapeProxy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeProxy_MetaData), NewProp_LandscapeProxy_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_BakedEditLayer = { "BakedEditLayer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniLandscapeTargetLayerOutput, BakedEditLayer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakedEditLayer_MetaData), NewProp_BakedEditLayer_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_CookedEditLayer = { "CookedEditLayer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniLandscapeTargetLayerOutput, CookedEditLayer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CookedEditLayer_MetaData), NewProp_CookedEditLayer_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_TargetLayer = { "TargetLayer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniLandscapeTargetLayerOutput, TargetLayer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLayer_MetaData), NewProp_TargetLayer_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_Extents = { "Extents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniLandscapeTargetLayerOutput, Extents), Z_Construct_UScriptStruct_FHoudiniExtents, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Extents_MetaData), NewProp_Extents_MetaData) }; // 904063507
void Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bClearLayer_SetBit(void* Obj)
{
	((UHoudiniLandscapeTargetLayerOutput*)Obj)->bClearLayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bClearLayer = { "bClearLayer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniLandscapeTargetLayerOutput), &Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bClearLayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClearLayer_MetaData), NewProp_bClearLayer_MetaData) };
void Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bCreatedLandscape_SetBit(void* Obj)
{
	((UHoudiniLandscapeTargetLayerOutput*)Obj)->bCreatedLandscape = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bCreatedLandscape = { "bCreatedLandscape", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniLandscapeTargetLayerOutput), &Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bCreatedLandscape_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreatedLandscape_MetaData), NewProp_bCreatedLandscape_MetaData) };
void Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bCookedLayerRequiresBaking_SetBit(void* Obj)
{
	((UHoudiniLandscapeTargetLayerOutput*)Obj)->bCookedLayerRequiresBaking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bCookedLayerRequiresBaking = { "bCookedLayerRequiresBaking", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniLandscapeTargetLayerOutput), &Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bCookedLayerRequiresBaking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCookedLayerRequiresBaking_MetaData), NewProp_bCookedLayerRequiresBaking_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_BakedLandscapeName = { "BakedLandscapeName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniLandscapeTargetLayerOutput, BakedLandscapeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakedLandscapeName_MetaData), NewProp_BakedLandscapeName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_LayerInfoObjects_Inner = { "LayerInfoObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_LayerInfoObjects = { "LayerInfoObjects", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniLandscapeTargetLayerOutput, LayerInfoObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerInfoObjects_MetaData), NewProp_LayerInfoObjects_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_BakeFolder = { "BakeFolder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniLandscapeTargetLayerOutput, BakeFolder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakeFolder_MetaData), NewProp_BakeFolder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_MaterialInstance = { "MaterialInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniLandscapeTargetLayerOutput, MaterialInstance), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialInstance_MetaData), NewProp_MaterialInstance_MetaData) };
void Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bWriteLockedLayers_SetBit(void* Obj)
{
	((UHoudiniLandscapeTargetLayerOutput*)Obj)->bWriteLockedLayers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bWriteLockedLayers = { "bWriteLockedLayers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniLandscapeTargetLayerOutput), &Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bWriteLockedLayers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteLockedLayers_MetaData), NewProp_bWriteLockedLayers_MetaData) };
void Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bLockLayer_SetBit(void* Obj)
{
	((UHoudiniLandscapeTargetLayerOutput*)Obj)->bLockLayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bLockLayer = { "bLockLayer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniLandscapeTargetLayerOutput), &Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bLockLayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockLayer_MetaData), NewProp_bLockLayer_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_PropertyAttributes_Inner = { "PropertyAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniGenericAttribute, METADATA_PARAMS(0, nullptr) }; // 2192899334
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_PropertyAttributes = { "PropertyAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniLandscapeTargetLayerOutput, PropertyAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyAttributes_MetaData), NewProp_PropertyAttributes_MetaData) }; // 2192899334
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_Landscape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_LandscapeProxy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_BakedEditLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_CookedEditLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_TargetLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_Extents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bClearLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bCreatedLandscape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bCookedLayerRequiresBaking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_BakedLandscapeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_LayerInfoObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_LayerInfoObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_BakeFolder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_MaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bWriteLockedLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bLockLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_PropertyAttributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_PropertyAttributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::ClassParams = {
	&UHoudiniLandscapeTargetLayerOutput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput()
{
	if (!Z_Registration_Info_UClass_UHoudiniLandscapeTargetLayerOutput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniLandscapeTargetLayerOutput.OuterSingleton, Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniLandscapeTargetLayerOutput.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniLandscapeTargetLayerOutput>()
{
	return UHoudiniLandscapeTargetLayerOutput::StaticClass();
}
UHoudiniLandscapeTargetLayerOutput::UHoudiniLandscapeTargetLayerOutput(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniLandscapeTargetLayerOutput);
UHoudiniLandscapeTargetLayerOutput::~UHoudiniLandscapeTargetLayerOutput() {}
// End Class UHoudiniLandscapeTargetLayerOutput

// Begin Class UHoudiniLandscapeOutput
void UHoudiniLandscapeOutput::StaticRegisterNativesUHoudiniLandscapeOutput()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniLandscapeOutput);
UClass* Z_Construct_UClass_UHoudiniLandscapeOutput_NoRegister()
{
	return UHoudiniLandscapeOutput::StaticClass();
}
struct Z_Construct_UClass_UHoudiniLandscapeOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniOutput.h" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Landscape_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakedName_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layers_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreated_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Landscape;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BakedName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Layers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Layers;
	static void NewProp_bCreated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniLandscapeOutput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_Landscape = { "Landscape", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniLandscapeOutput, Landscape), Z_Construct_UClass_ALandscape_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Landscape_MetaData), NewProp_Landscape_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_BakedName = { "BakedName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniLandscapeOutput, BakedName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakedName_MetaData), NewProp_BakedName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_Layers_Inner = { "Layers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniLandscapeOutput, Layers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layers_MetaData), NewProp_Layers_MetaData) };
void Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_bCreated_SetBit(void* Obj)
{
	((UHoudiniLandscapeOutput*)Obj)->bCreated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_bCreated = { "bCreated", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniLandscapeOutput), &Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_bCreated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreated_MetaData), NewProp_bCreated_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_Landscape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_BakedName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_Layers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_Layers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_bCreated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::ClassParams = {
	&UHoudiniLandscapeOutput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniLandscapeOutput()
{
	if (!Z_Registration_Info_UClass_UHoudiniLandscapeOutput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniLandscapeOutput.OuterSingleton, Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniLandscapeOutput.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniLandscapeOutput>()
{
	return UHoudiniLandscapeOutput::StaticClass();
}
UHoudiniLandscapeOutput::UHoudiniLandscapeOutput(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniLandscapeOutput);
UHoudiniLandscapeOutput::~UHoudiniLandscapeOutput() {}
// End Class UHoudiniLandscapeOutput

// Begin Class UHoudiniLandscapeSplineTargetLayerOutput
void UHoudiniLandscapeSplineTargetLayerOutput::StaticRegisterNativesUHoudiniLandscapeSplineTargetLayerOutput()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniLandscapeSplineTargetLayerOutput);
UClass* Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_NoRegister()
{
	return UHoudiniLandscapeSplineTargetLayerOutput::StaticClass();
}
struct Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniOutput.h" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AfterEditLayer_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Segments_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AfterEditLayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Segments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Segments;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniLandscapeSplineTargetLayerOutput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::NewProp_AfterEditLayer = { "AfterEditLayer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniLandscapeSplineTargetLayerOutput, AfterEditLayer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AfterEditLayer_MetaData), NewProp_AfterEditLayer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::NewProp_Segments_Inner = { "Segments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULandscapeSplineSegment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniLandscapeSplineTargetLayerOutput, Segments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Segments_MetaData), NewProp_Segments_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::NewProp_AfterEditLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::NewProp_Segments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::NewProp_Segments,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::ClassParams = {
	&UHoudiniLandscapeSplineTargetLayerOutput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput()
{
	if (!Z_Registration_Info_UClass_UHoudiniLandscapeSplineTargetLayerOutput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniLandscapeSplineTargetLayerOutput.OuterSingleton, Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniLandscapeSplineTargetLayerOutput.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniLandscapeSplineTargetLayerOutput>()
{
	return UHoudiniLandscapeSplineTargetLayerOutput::StaticClass();
}
UHoudiniLandscapeSplineTargetLayerOutput::UHoudiniLandscapeSplineTargetLayerOutput(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniLandscapeSplineTargetLayerOutput);
UHoudiniLandscapeSplineTargetLayerOutput::~UHoudiniLandscapeSplineTargetLayerOutput() {}
// End Class UHoudiniLandscapeSplineTargetLayerOutput

// Begin Class UHoudiniLandscapeSplinesOutput
void UHoudiniLandscapeSplinesOutput::StaticRegisterNativesUHoudiniLandscapeSplinesOutput()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniLandscapeSplinesOutput);
UClass* Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_NoRegister()
{
	return UHoudiniLandscapeSplinesOutput::StaticClass();
}
struct Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniOutput.h" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Landscape_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeProxy_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeSplineActor_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeSplinesComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerOutputs_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Segments_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlPoints_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Landscape;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LandscapeProxy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LandscapeSplineActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LandscapeSplinesComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LayerOutputs_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LayerOutputs_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LayerOutputs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Segments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Segments;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ControlPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniLandscapeSplinesOutput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_Landscape = { "Landscape", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniLandscapeSplinesOutput, Landscape), Z_Construct_UClass_ALandscape_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Landscape_MetaData), NewProp_Landscape_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LandscapeProxy = { "LandscapeProxy", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniLandscapeSplinesOutput, LandscapeProxy), Z_Construct_UClass_ALandscapeProxy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeProxy_MetaData), NewProp_LandscapeProxy_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LandscapeSplineActor = { "LandscapeSplineActor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniLandscapeSplinesOutput, LandscapeSplineActor), Z_Construct_UClass_ALandscapeSplineActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeSplineActor_MetaData), NewProp_LandscapeSplineActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LandscapeSplinesComponent = { "LandscapeSplinesComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniLandscapeSplinesOutput, LandscapeSplinesComponent), Z_Construct_UClass_ULandscapeSplinesComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeSplinesComponent_MetaData), NewProp_LandscapeSplinesComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LayerOutputs_ValueProp = { "LayerOutputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LayerOutputs_Key_KeyProp = { "LayerOutputs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LayerOutputs = { "LayerOutputs", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniLandscapeSplinesOutput, LayerOutputs), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerOutputs_MetaData), NewProp_LayerOutputs_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_Segments_Inner = { "Segments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULandscapeSplineSegment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniLandscapeSplinesOutput, Segments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Segments_MetaData), NewProp_Segments_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_ControlPoints_Inner = { "ControlPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULandscapeSplineControlPoint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_ControlPoints = { "ControlPoints", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniLandscapeSplinesOutput, ControlPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlPoints_MetaData), NewProp_ControlPoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_Landscape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LandscapeProxy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LandscapeSplineActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LandscapeSplinesComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LayerOutputs_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LayerOutputs_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LayerOutputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_Segments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_Segments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_ControlPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_ControlPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::ClassParams = {
	&UHoudiniLandscapeSplinesOutput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniLandscapeSplinesOutput()
{
	if (!Z_Registration_Info_UClass_UHoudiniLandscapeSplinesOutput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniLandscapeSplinesOutput.OuterSingleton, Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniLandscapeSplinesOutput.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniLandscapeSplinesOutput>()
{
	return UHoudiniLandscapeSplinesOutput::StaticClass();
}
UHoudiniLandscapeSplinesOutput::UHoudiniLandscapeSplinesOutput(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniLandscapeSplinesOutput);
UHoudiniLandscapeSplinesOutput::~UHoudiniLandscapeSplinesOutput() {}
// End Class UHoudiniLandscapeSplinesOutput

// Begin ScriptStruct FHoudiniOutputObjectIdentifier
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniOutputObjectIdentifier;
class UScriptStruct* FHoudiniOutputObjectIdentifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniOutputObjectIdentifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniOutputObjectIdentifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniOutputObjectIdentifier"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniOutputObjectIdentifier.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniOutputObjectIdentifier>()
{
	return FHoudiniOutputObjectIdentifier::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectId_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// NodeId of corresponding Houdini Object.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NodeId of corresponding Houdini Object." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeoId_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// NodeId of corresponding Houdini Geo.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NodeId of corresponding Houdini Geo." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartId_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// PartId\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PartId" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplitIdentifier_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// String identifier for the split that created this\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "String identifier for the split that created this" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Name of the part used to generate the output\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the part used to generate the output" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveIndex_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// First valid primitive index for this output\n// (used to read generic attributes)\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First valid primitive index for this output\n(used to read generic attributes)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointIndex_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// First valid point index for this output\n// (used to read generic attributes)\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First valid point index for this output\n(used to read generic attributes)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ObjectId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GeoId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PartId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SplitIdentifier;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PartName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PrimitiveIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniOutputObjectIdentifier>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_ObjectId = { "ObjectId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObjectIdentifier, ObjectId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectId_MetaData), NewProp_ObjectId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_GeoId = { "GeoId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObjectIdentifier, GeoId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeoId_MetaData), NewProp_GeoId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_PartId = { "PartId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObjectIdentifier, PartId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartId_MetaData), NewProp_PartId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_SplitIdentifier = { "SplitIdentifier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObjectIdentifier, SplitIdentifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplitIdentifier_MetaData), NewProp_SplitIdentifier_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_PartName = { "PartName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObjectIdentifier, PartName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartName_MetaData), NewProp_PartName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_PrimitiveIndex = { "PrimitiveIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObjectIdentifier, PrimitiveIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimitiveIndex_MetaData), NewProp_PrimitiveIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObjectIdentifier, PointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointIndex_MetaData), NewProp_PointIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_ObjectId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_GeoId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_PartId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_SplitIdentifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_PartName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_PrimitiveIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_PointIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniOutputObjectIdentifier",
	Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::PropPointers),
	sizeof(FHoudiniOutputObjectIdentifier),
	alignof(FHoudiniOutputObjectIdentifier),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniOutputObjectIdentifier.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniOutputObjectIdentifier.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniOutputObjectIdentifier.InnerSingleton;
}
// End ScriptStruct FHoudiniOutputObjectIdentifier

// Begin ScriptStruct FHoudiniBakedOutputObjectIdentifier
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObjectIdentifier;
class UScriptStruct* FHoudiniBakedOutputObjectIdentifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObjectIdentifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObjectIdentifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniBakedOutputObjectIdentifier"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObjectIdentifier.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniBakedOutputObjectIdentifier>()
{
	return FHoudiniBakedOutputObjectIdentifier::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartId_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// PartId\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PartId" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplitIdentifier_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// String identifier for the split that created this\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "String identifier for the split that created this" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PartId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SplitIdentifier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniBakedOutputObjectIdentifier>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::NewProp_PartId = { "PartId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBakedOutputObjectIdentifier, PartId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartId_MetaData), NewProp_PartId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::NewProp_SplitIdentifier = { "SplitIdentifier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBakedOutputObjectIdentifier, SplitIdentifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplitIdentifier_MetaData), NewProp_SplitIdentifier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::NewProp_PartId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::NewProp_SplitIdentifier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniBakedOutputObjectIdentifier",
	Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::PropPointers),
	sizeof(FHoudiniBakedOutputObjectIdentifier),
	alignof(FHoudiniBakedOutputObjectIdentifier),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObjectIdentifier.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObjectIdentifier.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObjectIdentifier.InnerSingleton;
}
// End ScriptStruct FHoudiniBakedOutputObjectIdentifier

// Begin ScriptStruct FHoudiniInstancedOutput
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniInstancedOutput;
class UScriptStruct* FHoudiniInstancedOutput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniInstancedOutput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniInstancedOutput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniInstancedOutput, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniInstancedOutput"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniInstancedOutput.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniInstancedOutput>()
{
	return FHoudiniInstancedOutput::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalObject_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Original object used by the instancer.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Original object used by the instancer." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalObjectIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalTransforms_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Original Instance transforms\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Original Instance transforms" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariationObjects_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Variation objects currently used for instancing\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Variation objects currently used for instancing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariationTransformOffsets_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Transform offsets, one for each variation.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transform offsets, one for each variation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformVariationIndices_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Index of the variation used for each transform\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Index of the variation used for each transform" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalInstanceIndices_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Original Indices of the variation instances\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Original Indices of the variation instances" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates this instanced output's component should be recreated\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates this instanced output's component should be recreated" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStale_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates this instanced output is stale and should be removed\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates this instanced output is stale and should be removed" },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUniformScaleLocked_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OriginalObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OriginalObjectIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OriginalTransforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OriginalTransforms;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_VariationObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VariationObjects;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariationTransformOffsets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VariationTransformOffsets;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TransformVariationIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TransformVariationIndices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OriginalInstanceIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OriginalInstanceIndices;
	static void NewProp_bChanged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bChanged;
	static void NewProp_bStale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStale;
#if WITH_EDITORONLY_DATA
	static void NewProp_bUniformScaleLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUniformScaleLocked;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniInstancedOutput>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalObject = { "OriginalObject", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancedOutput, OriginalObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalObject_MetaData), NewProp_OriginalObject_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalObjectIndex = { "OriginalObjectIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancedOutput, OriginalObjectIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalObjectIndex_MetaData), NewProp_OriginalObjectIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalTransforms_Inner = { "OriginalTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalTransforms = { "OriginalTransforms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancedOutput, OriginalTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalTransforms_MetaData), NewProp_OriginalTransforms_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_VariationObjects_Inner = { "VariationObjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_VariationObjects = { "VariationObjects", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancedOutput, VariationObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariationObjects_MetaData), NewProp_VariationObjects_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_VariationTransformOffsets_Inner = { "VariationTransformOffsets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_VariationTransformOffsets = { "VariationTransformOffsets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancedOutput, VariationTransformOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariationTransformOffsets_MetaData), NewProp_VariationTransformOffsets_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_TransformVariationIndices_Inner = { "TransformVariationIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_TransformVariationIndices = { "TransformVariationIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancedOutput, TransformVariationIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformVariationIndices_MetaData), NewProp_TransformVariationIndices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalInstanceIndices_Inner = { "OriginalInstanceIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalInstanceIndices = { "OriginalInstanceIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancedOutput, OriginalInstanceIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalInstanceIndices_MetaData), NewProp_OriginalInstanceIndices_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_bChanged_SetBit(void* Obj)
{
	((FHoudiniInstancedOutput*)Obj)->bChanged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_bChanged = { "bChanged", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInstancedOutput), &Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_bChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bChanged_MetaData), NewProp_bChanged_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_bStale_SetBit(void* Obj)
{
	((FHoudiniInstancedOutput*)Obj)->bStale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_bStale = { "bStale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInstancedOutput), &Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_bStale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStale_MetaData), NewProp_bStale_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_bUniformScaleLocked_SetBit(void* Obj)
{
	((FHoudiniInstancedOutput*)Obj)->bUniformScaleLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_bUniformScaleLocked = { "bUniformScaleLocked", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInstancedOutput), &Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_bUniformScaleLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUniformScaleLocked_MetaData), NewProp_bUniformScaleLocked_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalObjectIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalTransforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalTransforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_VariationObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_VariationObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_VariationTransformOffsets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_VariationTransformOffsets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_TransformVariationIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_TransformVariationIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalInstanceIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalInstanceIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_bChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_bStale,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_bUniformScaleLocked,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniInstancedOutput",
	Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::PropPointers),
	sizeof(FHoudiniInstancedOutput),
	alignof(FHoudiniInstancedOutput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniInstancedOutput()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniInstancedOutput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniInstancedOutput.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniInstancedOutput.InnerSingleton;
}
// End ScriptStruct FHoudiniInstancedOutput

// Begin ScriptStruct FHoudiniLevelInstanceParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniLevelInstanceParams;
class UScriptStruct* FHoudiniLevelInstanceParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniLevelInstanceParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniLevelInstanceParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniLevelInstanceParams"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniLevelInstanceParams.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniLevelInstanceParams>()
{
	return FHoudiniLevelInstanceParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Parameters used to create the level instance.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parameters used to create the level instance." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniLevelInstanceParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniLevelInstanceParams, Type), Z_Construct_UEnum_Engine_ELevelInstanceCreationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 1301537258
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniLevelInstanceParams, OutputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputName_MetaData), NewProp_OutputName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::NewProp_OutputName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniLevelInstanceParams",
	Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::PropPointers),
	sizeof(FHoudiniLevelInstanceParams),
	alignof(FHoudiniLevelInstanceParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniLevelInstanceParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniLevelInstanceParams.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniLevelInstanceParams.InnerSingleton;
}
// End ScriptStruct FHoudiniLevelInstanceParams

// Begin ScriptStruct FHoudiniBakedOutputObject
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObject;
class UScriptStruct* FHoudiniBakedOutputObject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniBakedOutputObject, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniBakedOutputObject"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObject.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniBakedOutputObject>()
{
	return FHoudiniBakedOutputObject::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The actor that the baked output was associated with\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The actor that the baked output was associated with" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Blueprint_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The blueprint that baked output was associated with, if any\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The blueprint that baked output was associated with, if any" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorBakeName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The intended bake actor name. The actor's actual name could have a numeric suffix for uniqueness.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The intended bake actor name. The actor's actual name could have a numeric suffix for uniqueness." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakedObject_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The baked output asset\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The baked output asset" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakedComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The baked output component \n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The baked output component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancedActors_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// In the case of instance actor component baking, this is the array of instanced actors\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In the case of instance actor component baking, this is the array of instanced actors" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancedComponents_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// In the case of mesh split instancer baking: this is the array of instance components\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In the case of mesh split instancer baking: this is the array of instance components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeLayers_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// For landscapes this is the previously bake layer info assets (layer name as key, soft object path as value)\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For landscapes this is the previously bake layer info assets (layer name as key, soft object path as value)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoliageInstancePositions_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Positions of Foliage instances; used for removal on rebake.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Positions of Foliage instances; used for removal on rebake." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoliageType_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Foliage Type (Baked or user-defined)\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Foliage Type (Baked or user-defined)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoliageActors_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Foliage Actor Instances\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Foliage Actor Instances" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelInstanceActors_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// All exported level instance actors.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All exported level instance actors." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Landscape_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// For landscape splines, this is the landscape that contains the splines.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For landscape splines, this is the landscape that contains the splines." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakedSkeleton_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// For skeletal meshes, this is the skeleton that was baked for the skeletal mesh.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For skeletal meshes, this is the skeleton that was baked for the skeletal mesh." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Blueprint;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActorBakeName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BakedObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BakedComponent;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InstancedActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InstancedActors;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InstancedComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InstancedComponents;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LandscapeLayers_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LandscapeLayers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LandscapeLayers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FoliageInstancePositions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FoliageInstancePositions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FoliageType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FoliageActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FoliageActors;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LevelInstanceActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelInstanceActors;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Landscape;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BakedSkeleton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniBakedOutputObject>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBakedOutputObject, Actor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBakedOutputObject, Blueprint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Blueprint_MetaData), NewProp_Blueprint_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_ActorBakeName = { "ActorBakeName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBakedOutputObject, ActorBakeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorBakeName_MetaData), NewProp_ActorBakeName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_BakedObject = { "BakedObject", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBakedOutputObject, BakedObject), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakedObject_MetaData), NewProp_BakedObject_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_BakedComponent = { "BakedComponent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBakedOutputObject, BakedComponent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakedComponent_MetaData), NewProp_BakedComponent_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_InstancedActors_Inner = { "InstancedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_InstancedActors = { "InstancedActors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBakedOutputObject, InstancedActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancedActors_MetaData), NewProp_InstancedActors_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_InstancedComponents_Inner = { "InstancedComponents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_InstancedComponents = { "InstancedComponents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBakedOutputObject, InstancedComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancedComponents_MetaData), NewProp_InstancedComponents_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_LandscapeLayers_ValueProp = { "LandscapeLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_LandscapeLayers_Key_KeyProp = { "LandscapeLayers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_LandscapeLayers = { "LandscapeLayers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBakedOutputObject, LandscapeLayers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeLayers_MetaData), NewProp_LandscapeLayers_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_FoliageInstancePositions_Inner = { "FoliageInstancePositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_FoliageInstancePositions = { "FoliageInstancePositions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBakedOutputObject, FoliageInstancePositions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoliageInstancePositions_MetaData), NewProp_FoliageInstancePositions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_FoliageType = { "FoliageType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBakedOutputObject, FoliageType), Z_Construct_UClass_UFoliageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoliageType_MetaData), NewProp_FoliageType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_FoliageActors_Inner = { "FoliageActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_FoliageActors = { "FoliageActors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBakedOutputObject, FoliageActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoliageActors_MetaData), NewProp_FoliageActors_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_LevelInstanceActors_Inner = { "LevelInstanceActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_LevelInstanceActors = { "LevelInstanceActors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBakedOutputObject, LevelInstanceActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelInstanceActors_MetaData), NewProp_LevelInstanceActors_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_Landscape = { "Landscape", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBakedOutputObject, Landscape), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Landscape_MetaData), NewProp_Landscape_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_BakedSkeleton = { "BakedSkeleton", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBakedOutputObject, BakedSkeleton), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakedSkeleton_MetaData), NewProp_BakedSkeleton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_Blueprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_ActorBakeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_BakedObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_BakedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_InstancedActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_InstancedActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_InstancedComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_InstancedComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_LandscapeLayers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_LandscapeLayers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_LandscapeLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_FoliageInstancePositions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_FoliageInstancePositions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_FoliageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_FoliageActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_FoliageActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_LevelInstanceActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_LevelInstanceActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_Landscape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_BakedSkeleton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniBakedOutputObject",
	Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::PropPointers),
	sizeof(FHoudiniBakedOutputObject),
	alignof(FHoudiniBakedOutputObject),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniBakedOutputObject()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObject.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObject.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObject.InnerSingleton;
}
// End ScriptStruct FHoudiniBakedOutputObject

// Begin ScriptStruct FHoudiniBakedOutput
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniBakedOutput;
class UScriptStruct* FHoudiniBakedOutput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniBakedOutput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniBakedOutput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniBakedOutput, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniBakedOutput"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniBakedOutput.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniBakedOutput>()
{
	return FHoudiniBakedOutput::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Container to hold the map of baked objects. There should be one of\n// these for each UHoudiniOutput. We manage this separately from UHoudiniOutput so\n// that the \"previous/last\" bake objects can survive output reconstruction or PDG\n// dirty/dirty all operations.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Container to hold the map of baked objects. There should be one of\nthese for each UHoudiniOutput. We manage this separately from UHoudiniOutput so\nthat the \"previous/last\" bake objects can survive output reconstruction or PDG\ndirty/dirty all operations." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakedOutputObjects_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BakedOutputObjects_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BakedOutputObjects_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BakedOutputObjects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniBakedOutput>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::NewProp_BakedOutputObjects_ValueProp = { "BakedOutputObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FHoudiniBakedOutputObject, METADATA_PARAMS(0, nullptr) }; // 2827891129
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::NewProp_BakedOutputObjects_Key_KeyProp = { "BakedOutputObjects_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier, METADATA_PARAMS(0, nullptr) }; // 1229885711
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::NewProp_BakedOutputObjects = { "BakedOutputObjects", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBakedOutput, BakedOutputObjects), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakedOutputObjects_MetaData), NewProp_BakedOutputObjects_MetaData) }; // 1229885711 2827891129
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::NewProp_BakedOutputObjects_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::NewProp_BakedOutputObjects_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::NewProp_BakedOutputObjects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniBakedOutput",
	Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::PropPointers),
	sizeof(FHoudiniBakedOutput),
	alignof(FHoudiniBakedOutput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniBakedOutput()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniBakedOutput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniBakedOutput.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniBakedOutput.InnerSingleton;
}
// End ScriptStruct FHoudiniBakedOutput

// Begin ScriptStruct FHoudiniDataLayer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniDataLayer;
class UScriptStruct* FHoudiniDataLayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniDataLayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniDataLayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniDataLayer, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniDataLayer"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniDataLayer.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniDataLayer>()
{
	return FHoudiniDataLayer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Information about the data the output is to be placed in.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Information about the data the output is to be placed in." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreateIfNeeded_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_bCreateIfNeeded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateIfNeeded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniDataLayer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniDataLayer, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::NewProp_bCreateIfNeeded_SetBit(void* Obj)
{
	((FHoudiniDataLayer*)Obj)->bCreateIfNeeded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::NewProp_bCreateIfNeeded = { "bCreateIfNeeded", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniDataLayer), &Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::NewProp_bCreateIfNeeded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreateIfNeeded_MetaData), NewProp_bCreateIfNeeded_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::NewProp_bCreateIfNeeded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniDataLayer",
	Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::PropPointers),
	sizeof(FHoudiniDataLayer),
	alignof(FHoudiniDataLayer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniDataLayer()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniDataLayer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniDataLayer.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniDataLayer.InnerSingleton;
}
// End ScriptStruct FHoudiniDataLayer

// Begin ScriptStruct FHoudiniHLODLayer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniHLODLayer;
class UScriptStruct* FHoudiniHLODLayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniHLODLayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniHLODLayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniHLODLayer, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniHLODLayer"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniHLODLayer.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniHLODLayer>()
{
	return FHoudiniHLODLayer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniHLODLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniHLODLayer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniHLODLayer_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniHLODLayer, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniHLODLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniHLODLayer_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniHLODLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniHLODLayer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniHLODLayer",
	Z_Construct_UScriptStruct_FHoudiniHLODLayer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniHLODLayer_Statics::PropPointers),
	sizeof(FHoudiniHLODLayer),
	alignof(FHoudiniHLODLayer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniHLODLayer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniHLODLayer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniHLODLayer()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniHLODLayer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniHLODLayer.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniHLODLayer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniHLODLayer.InnerSingleton;
}
// End ScriptStruct FHoudiniHLODLayer

// Begin ScriptStruct FHoudiniOutputObject
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniOutputObject;
class UScriptStruct* FHoudiniOutputObject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniOutputObject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniOutputObject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniOutputObject, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniOutputObject"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniOutputObject.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniOutputObject>()
{
	return FHoudiniOutputObject::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputObject_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The main output object\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The main output object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputComponents_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The main output component\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The main output component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputActors_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The main output component\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The main output component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProxyObject_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Proxy object\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Proxy object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProxyComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Proxy Component\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Proxy Component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProxyIsCurrent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mesh output properties\n// If this is true the proxy mesh is \"current\", \n// in other words, it is newer than the UStaticMesh\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mesh output properties\nIf this is true the proxy mesh is \"current\",\nin other words, it is newer than the UStaticMesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsImplicit_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implicit output objects shouldn't be created as actors / components in the scene. \n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implicit output objects shouldn't be created as actors / components in the scene." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInvisibleCollisionMesh_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When creating an invisible collision mesh we need to make tweaks to the component.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When creating an invisible collision mesh we need to make tweaks to the component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsGeometryCollectionPiece_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is this mesh a part of a geometry collection?\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is this mesh a part of a geometry collection?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometryCollectionPieceName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Associated geometry collection. Only valid if bIsGeometryCollectionPiece is true;\n// Cached on mesh generation to avoid a Houdini session requirement for baking\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Associated geometry collection. Only valid if bIsGeometryCollectionPiece is true;\nCached on mesh generation to avoid a Houdini session requirement for baking" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakeName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Bake Name override for this output object\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bake Name override for this output object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveOutputProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedAttributes_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// NOTE: The idea behind CachedAttributes and CachedTokens is to\n// collect attributes (such as unreal_level_path and unreal_output_name)\n// and context-specific tokens (hda name, hda actor name, geo and part ids, tile_id, etc)\n// and cache them directly on the output object. When the object gets baked,\n// certain tokens can be updated specifically for the bake pass afterwhich the \n// the string / path attributes can be resolved with the updated tokens.\n//\n// A more concrete example:\n//  unreal_output_name = \"{hda_actor_name}_PurplePlants_{geo_id}_{part_id}\"\n//  unreal_level_path  = \"{out}/{hda_name}/{guid}/PurplePlants/{geo_id}/{part_id}\"\n// \n// All of the aforementions tokens and attributes would be cached on the output object\n// when it is being cooked so that the same values are available at bake time. During \n// a bake some tokens may be updated, such as `{out}` to change where assets get serialized.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NOTE: The idea behind CachedAttributes and CachedTokens is to\ncollect attributes (such as unreal_level_path and unreal_output_name)\nand context-specific tokens (hda name, hda actor name, geo and part ids, tile_id, etc)\nand cache them directly on the output object. When the object gets baked,\ncertain tokens can be updated specifically for the bake pass afterwhich the\nthe string / path attributes can be resolved with the updated tokens.\n\nA more concrete example:\n unreal_output_name = \"{hda_actor_name}_PurplePlants_{geo_id}_{part_id}\"\n unreal_level_path  = \"{out}/{hda_name}/{guid}/PurplePlants/{geo_id}/{part_id}\"\n\nAll of the aforementions tokens and attributes would be cached on the output object\nwhen it is being cooked so that the same values are available at bake time. During\na bake some tokens may be updated, such as `{out}` to change where assets get serialized." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedTokens_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cache any tokens here that is needed for string resolving\n// at bake time. \n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cache any tokens here that is needed for string resolving\nat bake time." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserFoliageType_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Object that was instanced.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Object that was instanced." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoliageType_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Foliage Type was that used.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Foliage Type was that used." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// World used when creating the output. This is used for Foliage may have no explicit objects\n// are created and so we cannot track the original world when we want to remove instances.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "World used when creating the output. This is used for Foliage may have no explicit objects\nare created and so we cannot track the original world when we want to remove instances." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataLayers_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Data Layers which should be applied (during Baking only).\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data Layers which should be applied (during Baking only)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HLODLayers_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// HLOD Layers which should be applied (during Baking only).\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HLOD Layers which should be applied (during Baking only)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelInstanceParams_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputComponents;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OutputActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputActors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProxyObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProxyComponent;
	static void NewProp_bProxyIsCurrent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProxyIsCurrent;
	static void NewProp_bIsImplicit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsImplicit;
	static void NewProp_bIsInvisibleCollisionMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInvisibleCollisionMesh;
	static void NewProp_bIsGeometryCollectionPiece_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGeometryCollectionPiece;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GeometryCollectionPieceName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BakeName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurveOutputProperty;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CachedAttributes_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CachedAttributes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CachedAttributes;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CachedTokens_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CachedTokens_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CachedTokens;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UserFoliageType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FoliageType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataLayers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HLODLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HLODLayers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LevelInstanceParams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniOutputObject>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputObject = { "OutputObject", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObject, OutputObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputObject_MetaData), NewProp_OutputObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputComponents_Inner = { "OutputComponents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputComponents = { "OutputComponents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObject, OutputComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputComponents_MetaData), NewProp_OutputComponents_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputActors_Inner = { "OutputActors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputActors = { "OutputActors", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObject, OutputActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputActors_MetaData), NewProp_OutputActors_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_ProxyObject = { "ProxyObject", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObject, ProxyObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProxyObject_MetaData), NewProp_ProxyObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_ProxyComponent = { "ProxyComponent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObject, ProxyComponent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProxyComponent_MetaData), NewProp_ProxyComponent_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bProxyIsCurrent_SetBit(void* Obj)
{
	((FHoudiniOutputObject*)Obj)->bProxyIsCurrent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bProxyIsCurrent = { "bProxyIsCurrent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniOutputObject), &Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bProxyIsCurrent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProxyIsCurrent_MetaData), NewProp_bProxyIsCurrent_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsImplicit_SetBit(void* Obj)
{
	((FHoudiniOutputObject*)Obj)->bIsImplicit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsImplicit = { "bIsImplicit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniOutputObject), &Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsImplicit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsImplicit_MetaData), NewProp_bIsImplicit_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsInvisibleCollisionMesh_SetBit(void* Obj)
{
	((FHoudiniOutputObject*)Obj)->bIsInvisibleCollisionMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsInvisibleCollisionMesh = { "bIsInvisibleCollisionMesh", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniOutputObject), &Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsInvisibleCollisionMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInvisibleCollisionMesh_MetaData), NewProp_bIsInvisibleCollisionMesh_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsGeometryCollectionPiece_SetBit(void* Obj)
{
	((FHoudiniOutputObject*)Obj)->bIsGeometryCollectionPiece = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsGeometryCollectionPiece = { "bIsGeometryCollectionPiece", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniOutputObject), &Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsGeometryCollectionPiece_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsGeometryCollectionPiece_MetaData), NewProp_bIsGeometryCollectionPiece_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_GeometryCollectionPieceName = { "GeometryCollectionPieceName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObject, GeometryCollectionPieceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometryCollectionPieceName_MetaData), NewProp_GeometryCollectionPieceName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_BakeName = { "BakeName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObject, BakeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakeName_MetaData), NewProp_BakeName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CurveOutputProperty = { "CurveOutputProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObject, CurveOutputProperty), Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveOutputProperty_MetaData), NewProp_CurveOutputProperty_MetaData) }; // 3820953597
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedAttributes_ValueProp = { "CachedAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedAttributes_Key_KeyProp = { "CachedAttributes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedAttributes = { "CachedAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObject, CachedAttributes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedAttributes_MetaData), NewProp_CachedAttributes_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedTokens_ValueProp = { "CachedTokens", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedTokens_Key_KeyProp = { "CachedTokens_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedTokens = { "CachedTokens", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObject, CachedTokens), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedTokens_MetaData), NewProp_CachedTokens_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_UserFoliageType = { "UserFoliageType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObject, UserFoliageType), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserFoliageType_MetaData), NewProp_UserFoliageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_FoliageType = { "FoliageType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObject, FoliageType), Z_Construct_UClass_UFoliageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoliageType_MetaData), NewProp_FoliageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObject, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_World_MetaData), NewProp_World_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_DataLayers_Inner = { "DataLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniDataLayer, METADATA_PARAMS(0, nullptr) }; // 1880887850
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_DataLayers = { "DataLayers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObject, DataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataLayers_MetaData), NewProp_DataLayers_MetaData) }; // 1880887850
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_HLODLayers_Inner = { "HLODLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniHLODLayer, METADATA_PARAMS(0, nullptr) }; // 1242549441
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_HLODLayers = { "HLODLayers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObject, HLODLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HLODLayers_MetaData), NewProp_HLODLayers_MetaData) }; // 1242549441
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_LevelInstanceParams = { "LevelInstanceParams", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniOutputObject, LevelInstanceParams), Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelInstanceParams_MetaData), NewProp_LevelInstanceParams_MetaData) }; // 3848763663
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_ProxyObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_ProxyComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bProxyIsCurrent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsImplicit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsInvisibleCollisionMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsGeometryCollectionPiece,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_GeometryCollectionPieceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_BakeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CurveOutputProperty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedAttributes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedAttributes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedTokens_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedTokens_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedTokens,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_UserFoliageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_FoliageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_DataLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_DataLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_HLODLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_HLODLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_LevelInstanceParams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniOutputObject",
	Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::PropPointers),
	sizeof(FHoudiniOutputObject),
	alignof(FHoudiniOutputObject),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniOutputObject()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniOutputObject.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniOutputObject.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniOutputObject.InnerSingleton;
}
// End ScriptStruct FHoudiniOutputObject

// Begin Class UHoudiniOutput
void UHoudiniOutput::StaticRegisterNativesUHoudiniOutput()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniOutput);
UClass* Z_Construct_UClass_UHoudiniOutput_NoRegister()
{
	return UHoudiniOutput::StaticClass();
}
struct Z_Construct_UClass_UHoudiniOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniOutput.h" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates the type of output we're dealing with\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates the type of output we're dealing with" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniGeoPartObjects_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The output's corresponding HGPO\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The output's corresponding HGPO" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputObjects_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancedOutputs_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Instanced outputs\n// Stores the instance variations objects (replacement), transform offsets \n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instanced outputs\nStores the instance variations objects (replacement), transform offsets" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssignmentMaterialsById_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The material assignments for this output\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The material assignments for this output" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplacementMaterialsById_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The material replacements for this output\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The material replacements for this output" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeWorldComposition_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniCreatedSocketActors_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// stores the created actors for sockets with actor references.\n// <CreatedActorPtr, SocketName>\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "stores the created actors for sockets with actor references.\n<CreatedActorPtr, SocketName>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniAttachedSocketActors_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsEditableNode_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use HoudiniOutput to represent an editable curve.\n// This flag tells whether this output is an editable curve.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use HoudiniOutput to represent an editable curve.\nThis flag tells whether this output is an editable curve." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasEditableNodeBuilt_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// An editable node is only built once. This flag indicates whether this node has been built.\n// Transient, so resets every unreal session so curves must be rebuilt to work properly.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An editable node is only built once. This flag indicates whether this node has been built.\nTransient, so resets every unreal session so curves must be rebuilt to work properly." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsUpdating_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The IsUpdating flag is set to true when this out exists and is being updated.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The IsUpdating flag is set to true when this out exists and is being updated." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanDeleteHoudiniNodes_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HoudiniGeoPartObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HoudiniGeoPartObjects;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputObjects_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputObjects_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OutputObjects;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstancedOutputs_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstancedOutputs_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InstancedOutputs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssignmentMaterialsById_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssignmentMaterialsById_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AssignmentMaterialsById;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReplacementMaterialsById_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReplacementMaterialsById_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReplacementMaterialsById;
	static void NewProp_bLandscapeWorldComposition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeWorldComposition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoudiniCreatedSocketActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HoudiniCreatedSocketActors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoudiniAttachedSocketActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HoudiniAttachedSocketActors;
	static void NewProp_bIsEditableNode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEditableNode;
	static void NewProp_bHasEditableNodeBuilt_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasEditableNodeBuilt;
	static void NewProp_bIsUpdating_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUpdating;
	static void NewProp_bCanDeleteHoudiniNodes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanDeleteHoudiniNodes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniOutput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniOutput, Type), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 390911851
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniGeoPartObjects_Inner = { "HoudiniGeoPartObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniGeoPartObject, METADATA_PARAMS(0, nullptr) }; // 258446324
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniGeoPartObjects = { "HoudiniGeoPartObjects", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniOutput, HoudiniGeoPartObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoudiniGeoPartObjects_MetaData), NewProp_HoudiniGeoPartObjects_MetaData) }; // 258446324
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_OutputObjects_ValueProp = { "OutputObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FHoudiniOutputObject, METADATA_PARAMS(0, nullptr) }; // 145164782
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_OutputObjects_Key_KeyProp = { "OutputObjects_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier, METADATA_PARAMS(0, nullptr) }; // 3767398212
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_OutputObjects = { "OutputObjects", nullptr, (EPropertyFlags)0x0020080000200000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniOutput, OutputObjects), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputObjects_MetaData), NewProp_OutputObjects_MetaData) }; // 3767398212 145164782
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_InstancedOutputs_ValueProp = { "InstancedOutputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FHoudiniInstancedOutput, METADATA_PARAMS(0, nullptr) }; // 591330072
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_InstancedOutputs_Key_KeyProp = { "InstancedOutputs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier, METADATA_PARAMS(0, nullptr) }; // 3767398212
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_InstancedOutputs = { "InstancedOutputs", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniOutput, InstancedOutputs), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancedOutputs_MetaData), NewProp_InstancedOutputs_MetaData) }; // 3767398212 591330072
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_AssignmentMaterialsById_ValueProp = { "AssignmentMaterialsById", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_AssignmentMaterialsById_Key_KeyProp = { "AssignmentMaterialsById_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier, METADATA_PARAMS(0, nullptr) }; // 4175871401
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_AssignmentMaterialsById = { "AssignmentMaterialsById", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniOutput, AssignmentMaterialsById), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssignmentMaterialsById_MetaData), NewProp_AssignmentMaterialsById_MetaData) }; // 4175871401
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_ReplacementMaterialsById_ValueProp = { "ReplacementMaterialsById", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_ReplacementMaterialsById_Key_KeyProp = { "ReplacementMaterialsById_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier, METADATA_PARAMS(0, nullptr) }; // 4175871401
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_ReplacementMaterialsById = { "ReplacementMaterialsById", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniOutput, ReplacementMaterialsById), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplacementMaterialsById_MetaData), NewProp_ReplacementMaterialsById_MetaData) }; // 4175871401
void Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bLandscapeWorldComposition_SetBit(void* Obj)
{
	((UHoudiniOutput*)Obj)->bLandscapeWorldComposition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bLandscapeWorldComposition = { "bLandscapeWorldComposition", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniOutput), &Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bLandscapeWorldComposition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLandscapeWorldComposition_MetaData), NewProp_bLandscapeWorldComposition_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniCreatedSocketActors_Inner = { "HoudiniCreatedSocketActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniCreatedSocketActors = { "HoudiniCreatedSocketActors", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniOutput, HoudiniCreatedSocketActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoudiniCreatedSocketActors_MetaData), NewProp_HoudiniCreatedSocketActors_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniAttachedSocketActors_Inner = { "HoudiniAttachedSocketActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniAttachedSocketActors = { "HoudiniAttachedSocketActors", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniOutput, HoudiniAttachedSocketActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoudiniAttachedSocketActors_MetaData), NewProp_HoudiniAttachedSocketActors_MetaData) };
void Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bIsEditableNode_SetBit(void* Obj)
{
	((UHoudiniOutput*)Obj)->bIsEditableNode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bIsEditableNode = { "bIsEditableNode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniOutput), &Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bIsEditableNode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsEditableNode_MetaData), NewProp_bIsEditableNode_MetaData) };
void Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bHasEditableNodeBuilt_SetBit(void* Obj)
{
	((UHoudiniOutput*)Obj)->bHasEditableNodeBuilt = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bHasEditableNodeBuilt = { "bHasEditableNodeBuilt", nullptr, (EPropertyFlags)0x0040000000202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniOutput), &Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bHasEditableNodeBuilt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasEditableNodeBuilt_MetaData), NewProp_bHasEditableNodeBuilt_MetaData) };
void Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bIsUpdating_SetBit(void* Obj)
{
	((UHoudiniOutput*)Obj)->bIsUpdating = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bIsUpdating = { "bIsUpdating", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniOutput), &Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bIsUpdating_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsUpdating_MetaData), NewProp_bIsUpdating_MetaData) };
void Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bCanDeleteHoudiniNodes_SetBit(void* Obj)
{
	((UHoudiniOutput*)Obj)->bCanDeleteHoudiniNodes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bCanDeleteHoudiniNodes = { "bCanDeleteHoudiniNodes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniOutput), &Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bCanDeleteHoudiniNodes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanDeleteHoudiniNodes_MetaData), NewProp_bCanDeleteHoudiniNodes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniGeoPartObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniGeoPartObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_OutputObjects_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_OutputObjects_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_OutputObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_InstancedOutputs_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_InstancedOutputs_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_InstancedOutputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_AssignmentMaterialsById_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_AssignmentMaterialsById_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_AssignmentMaterialsById,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_ReplacementMaterialsById_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_ReplacementMaterialsById_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_ReplacementMaterialsById,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bLandscapeWorldComposition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniCreatedSocketActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniCreatedSocketActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniAttachedSocketActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniAttachedSocketActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bIsEditableNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bHasEditableNodeBuilt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bIsUpdating,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bCanDeleteHoudiniNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniOutput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniOutput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniOutput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniOutput_Statics::ClassParams = {
	&UHoudiniOutput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniOutput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniOutput_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniOutput_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniOutput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniOutput()
{
	if (!Z_Registration_Info_UClass_UHoudiniOutput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniOutput.OuterSingleton, Z_Construct_UClass_UHoudiniOutput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniOutput.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniOutput>()
{
	return UHoudiniOutput::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniOutput);
// End Class UHoudiniOutput

// Begin Registration
struct Z_CompiledInDeferFile_FID_cygwin_home_prisms_builder_new_Nightly20_5CMake_dev_engine_unreal_5_4_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniOutput_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniCurveOutputType_StaticEnum, TEXT("EHoudiniCurveOutputType"), &Z_Registration_Info_UEnum_EHoudiniCurveOutputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 816756242U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHoudiniCurveOutputProperties::StaticStruct, Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewStructOps, TEXT("HoudiniCurveOutputProperties"), &Z_Registration_Info_UScriptStruct_HoudiniCurveOutputProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniCurveOutputProperties), 3820953597U) },
		{ FHoudiniExtents::StaticStruct, Z_Construct_UScriptStruct_FHoudiniExtents_Statics::NewStructOps, TEXT("HoudiniExtents"), &Z_Registration_Info_UScriptStruct_HoudiniExtents, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniExtents), 904063507U) },
		{ FHoudiniClearedTargetLayer::StaticStruct, Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics::NewStructOps, TEXT("HoudiniClearedTargetLayer"), &Z_Registration_Info_UScriptStruct_HoudiniClearedTargetLayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniClearedTargetLayer), 3529665285U) },
		{ FHoudiniClearedEditLayers::StaticStruct, Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::NewStructOps, TEXT("HoudiniClearedEditLayers"), &Z_Registration_Info_UScriptStruct_HoudiniClearedEditLayers, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniClearedEditLayers), 1976386490U) },
		{ FHoudiniMaterialIdentifier::StaticStruct, Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics::NewStructOps, TEXT("HoudiniMaterialIdentifier"), &Z_Registration_Info_UScriptStruct_HoudiniMaterialIdentifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniMaterialIdentifier), 4175871401U) },
		{ FHoudiniOutputObjectIdentifier::StaticStruct, Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewStructOps, TEXT("HoudiniOutputObjectIdentifier"), &Z_Registration_Info_UScriptStruct_HoudiniOutputObjectIdentifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniOutputObjectIdentifier), 3767398212U) },
		{ FHoudiniBakedOutputObjectIdentifier::StaticStruct, Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::NewStructOps, TEXT("HoudiniBakedOutputObjectIdentifier"), &Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObjectIdentifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniBakedOutputObjectIdentifier), 1229885711U) },
		{ FHoudiniInstancedOutput::StaticStruct, Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewStructOps, TEXT("HoudiniInstancedOutput"), &Z_Registration_Info_UScriptStruct_HoudiniInstancedOutput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniInstancedOutput), 591330072U) },
		{ FHoudiniLevelInstanceParams::StaticStruct, Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::NewStructOps, TEXT("HoudiniLevelInstanceParams"), &Z_Registration_Info_UScriptStruct_HoudiniLevelInstanceParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniLevelInstanceParams), 3848763663U) },
		{ FHoudiniBakedOutputObject::StaticStruct, Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewStructOps, TEXT("HoudiniBakedOutputObject"), &Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniBakedOutputObject), 2827891129U) },
		{ FHoudiniBakedOutput::StaticStruct, Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::NewStructOps, TEXT("HoudiniBakedOutput"), &Z_Registration_Info_UScriptStruct_HoudiniBakedOutput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniBakedOutput), 3812921005U) },
		{ FHoudiniDataLayer::StaticStruct, Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::NewStructOps, TEXT("HoudiniDataLayer"), &Z_Registration_Info_UScriptStruct_HoudiniDataLayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniDataLayer), 1880887850U) },
		{ FHoudiniHLODLayer::StaticStruct, Z_Construct_UScriptStruct_FHoudiniHLODLayer_Statics::NewStructOps, TEXT("HoudiniHLODLayer"), &Z_Registration_Info_UScriptStruct_HoudiniHLODLayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniHLODLayer), 1242549441U) },
		{ FHoudiniOutputObject::StaticStruct, Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewStructOps, TEXT("HoudiniOutputObject"), &Z_Registration_Info_UScriptStruct_HoudiniOutputObject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniOutputObject), 145164782U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniLandscapePtr, UHoudiniLandscapePtr::StaticClass, TEXT("UHoudiniLandscapePtr"), &Z_Registration_Info_UClass_UHoudiniLandscapePtr, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniLandscapePtr), 4058405455U) },
		{ Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput, UHoudiniLandscapeTargetLayerOutput::StaticClass, TEXT("UHoudiniLandscapeTargetLayerOutput"), &Z_Registration_Info_UClass_UHoudiniLandscapeTargetLayerOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniLandscapeTargetLayerOutput), 3827111394U) },
		{ Z_Construct_UClass_UHoudiniLandscapeOutput, UHoudiniLandscapeOutput::StaticClass, TEXT("UHoudiniLandscapeOutput"), &Z_Registration_Info_UClass_UHoudiniLandscapeOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniLandscapeOutput), 350840407U) },
		{ Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput, UHoudiniLandscapeSplineTargetLayerOutput::StaticClass, TEXT("UHoudiniLandscapeSplineTargetLayerOutput"), &Z_Registration_Info_UClass_UHoudiniLandscapeSplineTargetLayerOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniLandscapeSplineTargetLayerOutput), 311040118U) },
		{ Z_Construct_UClass_UHoudiniLandscapeSplinesOutput, UHoudiniLandscapeSplinesOutput::StaticClass, TEXT("UHoudiniLandscapeSplinesOutput"), &Z_Registration_Info_UClass_UHoudiniLandscapeSplinesOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniLandscapeSplinesOutput), 282216724U) },
		{ Z_Construct_UClass_UHoudiniOutput, UHoudiniOutput::StaticClass, TEXT("UHoudiniOutput"), &Z_Registration_Info_UClass_UHoudiniOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniOutput), 534381832U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_cygwin_home_prisms_builder_new_Nightly20_5CMake_dev_engine_unreal_5_4_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniOutput_h_2996314321(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_cygwin_home_prisms_builder_new_Nightly20_5CMake_dev_engine_unreal_5_4_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_cygwin_home_prisms_builder_new_Nightly20_5CMake_dev_engine_unreal_5_4_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniOutput_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_cygwin_home_prisms_builder_new_Nightly20_5CMake_dev_engine_unreal_5_4_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniOutput_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_cygwin_home_prisms_builder_new_Nightly20_5CMake_dev_engine_unreal_5_4_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniOutput_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_cygwin_home_prisms_builder_new_Nightly20_5CMake_dev_engine_unreal_5_4_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniOutput_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_cygwin_home_prisms_builder_new_Nightly20_5CMake_dev_engine_unreal_5_4_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniOutput_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
