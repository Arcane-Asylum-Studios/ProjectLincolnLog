// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngine/Private/HoudiniMaterialTranslator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniMaterialTranslator() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
HOUDINIENGINE_API UEnum* Z_Construct_UEnum_HoudiniEngine_EHoudiniUnrealMaterialParameterDataType();
HOUDINIENGINE_API UEnum* Z_Construct_UEnum_HoudiniEngine_EHoudiniUnrealMaterialParameterType();
HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniMaterialInfo();
HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniMaterialParameterValue();
UPackage* Z_Construct_UPackage__Script_HoudiniEngine();
// End Cross Module References

// Begin Enum EHoudiniUnrealMaterialParameterType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniUnrealMaterialParameterType;
static UEnum* EHoudiniUnrealMaterialParameterType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniUnrealMaterialParameterType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniUnrealMaterialParameterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngine_EHoudiniUnrealMaterialParameterType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("EHoudiniUnrealMaterialParameterType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniUnrealMaterialParameterType.OuterSingleton;
}
template<> HOUDINIENGINE_API UEnum* StaticEnum<EHoudiniUnrealMaterialParameterType>()
{
	return EHoudiniUnrealMaterialParameterType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngine_EHoudiniUnrealMaterialParameterType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enum of material parameter type for Houdini material parameter attributes.\n" },
#endif
		{ "Invalid.Name", "EHoudiniUnrealMaterialParameterType::Invalid" },
		{ "ModuleRelativePath", "Private/HoudiniMaterialTranslator.h" },
		{ "Scalar.Comment", "// The following are the types for custom parameters\n// A scalar material parameter\n" },
		{ "Scalar.Name", "EHoudiniUnrealMaterialParameterType::Scalar" },
		{ "Scalar.ToolTip", "The following are the types for custom parameters\nA scalar material parameter" },
		{ "StandardParameter.Comment", "// The parameter is a standard parameter of the material instance (such as BlendMode, DiffuseBoost etc)\n" },
		{ "StandardParameter.Name", "EHoudiniUnrealMaterialParameterType::StandardParameter" },
		{ "StandardParameter.ToolTip", "The parameter is a standard parameter of the material instance (such as BlendMode, DiffuseBoost etc)" },
		{ "StaticSwitch.Comment", "// A static switch (bool) parameter\n" },
		{ "StaticSwitch.Name", "EHoudiniUnrealMaterialParameterType::StaticSwitch" },
		{ "StaticSwitch.ToolTip", "A static switch (bool) parameter" },
		{ "Texture.Comment", "// A texture parameter (represented with a string)\n" },
		{ "Texture.Name", "EHoudiniUnrealMaterialParameterType::Texture" },
		{ "Texture.ToolTip", "A texture parameter (represented with a string)" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum of material parameter type for Houdini material parameter attributes." },
#endif
		{ "Vector.Comment", "// A vector parameter (represented with a color)\n" },
		{ "Vector.Name", "EHoudiniUnrealMaterialParameterType::Vector" },
		{ "Vector.ToolTip", "A vector parameter (represented with a color)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniUnrealMaterialParameterType::Invalid", (int64)EHoudiniUnrealMaterialParameterType::Invalid },
		{ "EHoudiniUnrealMaterialParameterType::StandardParameter", (int64)EHoudiniUnrealMaterialParameterType::StandardParameter },
		{ "EHoudiniUnrealMaterialParameterType::Scalar", (int64)EHoudiniUnrealMaterialParameterType::Scalar },
		{ "EHoudiniUnrealMaterialParameterType::StaticSwitch", (int64)EHoudiniUnrealMaterialParameterType::StaticSwitch },
		{ "EHoudiniUnrealMaterialParameterType::Vector", (int64)EHoudiniUnrealMaterialParameterType::Vector },
		{ "EHoudiniUnrealMaterialParameterType::Texture", (int64)EHoudiniUnrealMaterialParameterType::Texture },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngine_EHoudiniUnrealMaterialParameterType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngine,
	nullptr,
	"EHoudiniUnrealMaterialParameterType",
	"EHoudiniUnrealMaterialParameterType",
	Z_Construct_UEnum_HoudiniEngine_EHoudiniUnrealMaterialParameterType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngine_EHoudiniUnrealMaterialParameterType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngine_EHoudiniUnrealMaterialParameterType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngine_EHoudiniUnrealMaterialParameterType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngine_EHoudiniUnrealMaterialParameterType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniUnrealMaterialParameterType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniUnrealMaterialParameterType.InnerSingleton, Z_Construct_UEnum_HoudiniEngine_EHoudiniUnrealMaterialParameterType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniUnrealMaterialParameterType.InnerSingleton;
}
// End Enum EHoudiniUnrealMaterialParameterType

// Begin Enum EHoudiniUnrealMaterialParameterDataType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniUnrealMaterialParameterDataType;
static UEnum* EHoudiniUnrealMaterialParameterDataType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniUnrealMaterialParameterDataType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniUnrealMaterialParameterDataType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngine_EHoudiniUnrealMaterialParameterDataType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("EHoudiniUnrealMaterialParameterDataType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniUnrealMaterialParameterDataType.OuterSingleton;
}
template<> HOUDINIENGINE_API UEnum* StaticEnum<EHoudiniUnrealMaterialParameterDataType>()
{
	return EHoudiniUnrealMaterialParameterDataType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngine_EHoudiniUnrealMaterialParameterDataType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Byte.Comment", "// One byte, used for enums and bools\n" },
		{ "Byte.Name", "EHoudiniUnrealMaterialParameterDataType::Byte" },
		{ "Byte.ToolTip", "One byte, used for enums and bools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Material parameter data types from Houdini attributes\n" },
#endif
		{ "Float.Comment", "// Floating point value (double is cast down to float)\n" },
		{ "Float.Name", "EHoudiniUnrealMaterialParameterDataType::Float" },
		{ "Float.ToolTip", "Floating point value (double is cast down to float)" },
		{ "Invalid.Name", "EHoudiniUnrealMaterialParameterDataType::Invalid" },
		{ "ModuleRelativePath", "Private/HoudiniMaterialTranslator.h" },
		{ "String.Comment", "// String\n" },
		{ "String.Name", "EHoudiniUnrealMaterialParameterDataType::String" },
		{ "String.ToolTip", "String" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material parameter data types from Houdini attributes" },
#endif
		{ "Vector.Comment", "// Vector represented as a RGB or RGBA linear color\n" },
		{ "Vector.Name", "EHoudiniUnrealMaterialParameterDataType::Vector" },
		{ "Vector.ToolTip", "Vector represented as a RGB or RGBA linear color" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniUnrealMaterialParameterDataType::Invalid", (int64)EHoudiniUnrealMaterialParameterDataType::Invalid },
		{ "EHoudiniUnrealMaterialParameterDataType::Byte", (int64)EHoudiniUnrealMaterialParameterDataType::Byte },
		{ "EHoudiniUnrealMaterialParameterDataType::Float", (int64)EHoudiniUnrealMaterialParameterDataType::Float },
		{ "EHoudiniUnrealMaterialParameterDataType::String", (int64)EHoudiniUnrealMaterialParameterDataType::String },
		{ "EHoudiniUnrealMaterialParameterDataType::Vector", (int64)EHoudiniUnrealMaterialParameterDataType::Vector },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngine_EHoudiniUnrealMaterialParameterDataType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngine,
	nullptr,
	"EHoudiniUnrealMaterialParameterDataType",
	"EHoudiniUnrealMaterialParameterDataType",
	Z_Construct_UEnum_HoudiniEngine_EHoudiniUnrealMaterialParameterDataType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngine_EHoudiniUnrealMaterialParameterDataType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngine_EHoudiniUnrealMaterialParameterDataType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngine_EHoudiniUnrealMaterialParameterDataType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngine_EHoudiniUnrealMaterialParameterDataType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniUnrealMaterialParameterDataType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniUnrealMaterialParameterDataType.InnerSingleton, Z_Construct_UEnum_HoudiniEngine_EHoudiniUnrealMaterialParameterDataType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniUnrealMaterialParameterDataType.InnerSingleton;
}
// End Enum EHoudiniUnrealMaterialParameterDataType

// Begin ScriptStruct FHoudiniMaterialParameterValue
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniMaterialParameterValue;
class UScriptStruct* FHoudiniMaterialParameterValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniMaterialParameterValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniMaterialParameterValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniMaterialParameterValue, (UObject*)Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniMaterialParameterValue"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniMaterialParameterValue.OuterSingleton;
}
template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<FHoudiniMaterialParameterValue>()
{
	return FHoudiniMaterialParameterValue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniMaterialParameterValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Struct for storing material parameter type and value information from Houdini attributes after processing via\n// FHoudiniMaterialTranslator::GetAndValidateMaterialInstanceParameterValue()\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniMaterialTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct for storing material parameter type and value information from Houdini attributes after processing via\nFHoudiniMaterialTranslator::GetAndValidateMaterialInstanceParameterValue()" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParamType_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The parameter type (standard parameter, scalar, static switch, texture, vector)\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniMaterialTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The parameter type (standard parameter, scalar, static switch, texture, vector)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The data type (byte, float, string, vector)\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniMaterialTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The data type (byte, float, string, vector)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ByteValue_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The value used if DataType is Byte\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniMaterialTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The value used if DataType is Byte" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The value used if DataType is Float\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniMaterialTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The value used if DataType is Float" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The value used if DataType is String\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniMaterialTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The value used if DataType is String" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VectorValue_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The value used if DataType is Vector\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniMaterialTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The value used if DataType is Vector" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ParamType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ParamType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DataType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DataType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ByteValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VectorValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniMaterialParameterValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoudiniMaterialParameterValue_Statics::NewProp_ParamType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniMaterialParameterValue_Statics::NewProp_ParamType = { "ParamType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniMaterialParameterValue, ParamType), Z_Construct_UEnum_HoudiniEngine_EHoudiniUnrealMaterialParameterType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParamType_MetaData), NewProp_ParamType_MetaData) }; // 875054829
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoudiniMaterialParameterValue_Statics::NewProp_DataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniMaterialParameterValue_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniMaterialParameterValue, DataType), Z_Construct_UEnum_HoudiniEngine_EHoudiniUnrealMaterialParameterDataType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataType_MetaData), NewProp_DataType_MetaData) }; // 3309220983
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoudiniMaterialParameterValue_Statics::NewProp_ByteValue = { "ByteValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniMaterialParameterValue, ByteValue), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ByteValue_MetaData), NewProp_ByteValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHoudiniMaterialParameterValue_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniMaterialParameterValue, FloatValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatValue_MetaData), NewProp_FloatValue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniMaterialParameterValue_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniMaterialParameterValue, StringValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringValue_MetaData), NewProp_StringValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniMaterialParameterValue_Statics::NewProp_VectorValue = { "VectorValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniMaterialParameterValue, VectorValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VectorValue_MetaData), NewProp_VectorValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniMaterialParameterValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniMaterialParameterValue_Statics::NewProp_ParamType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniMaterialParameterValue_Statics::NewProp_ParamType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniMaterialParameterValue_Statics::NewProp_DataType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniMaterialParameterValue_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniMaterialParameterValue_Statics::NewProp_ByteValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniMaterialParameterValue_Statics::NewProp_FloatValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniMaterialParameterValue_Statics::NewProp_StringValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniMaterialParameterValue_Statics::NewProp_VectorValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniMaterialParameterValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniMaterialParameterValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
	nullptr,
	&NewStructOps,
	"HoudiniMaterialParameterValue",
	Z_Construct_UScriptStruct_FHoudiniMaterialParameterValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniMaterialParameterValue_Statics::PropPointers),
	sizeof(FHoudiniMaterialParameterValue),
	alignof(FHoudiniMaterialParameterValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniMaterialParameterValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniMaterialParameterValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniMaterialParameterValue()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniMaterialParameterValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniMaterialParameterValue.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniMaterialParameterValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniMaterialParameterValue.InnerSingleton;
}
// End ScriptStruct FHoudiniMaterialParameterValue

// Begin ScriptStruct FHoudiniMaterialInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniMaterialInfo;
class UScriptStruct* FHoudiniMaterialInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniMaterialInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniMaterialInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniMaterialInfo, (UObject*)Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniMaterialInfo"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniMaterialInfo.OuterSingleton;
}
template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<FHoudiniMaterialInfo>()
{
	return FHoudiniMaterialInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniMaterialInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Material info collected for each unreal_material / unreal_material_instance attribute value\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniMaterialTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material info collected for each unreal_material / unreal_material_instance attribute value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialObjectPath_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The object path the UMaterial\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniMaterialTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The object path the UMaterial" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMakeMaterialInstance_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether a material instance should be created from MaterialObjectPath \n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniMaterialTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether a material instance should be created from MaterialObjectPath" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialIndex_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The material slot index\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniMaterialTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The material slot index" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInstanceParameters_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If bMakeMaterialInstance is true (a material instance must be made), then this is the material parameters to apply\n// to the instance.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniMaterialTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If bMakeMaterialInstance is true (a material instance must be made), then this is the material parameters to apply\nto the instance." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialObjectPath;
	static void NewProp_bMakeMaterialInstance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMakeMaterialInstance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialInstanceParameters_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialInstanceParameters_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MaterialInstanceParameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniMaterialInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniMaterialInfo_Statics::NewProp_MaterialObjectPath = { "MaterialObjectPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniMaterialInfo, MaterialObjectPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialObjectPath_MetaData), NewProp_MaterialObjectPath_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniMaterialInfo_Statics::NewProp_bMakeMaterialInstance_SetBit(void* Obj)
{
	((FHoudiniMaterialInfo*)Obj)->bMakeMaterialInstance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniMaterialInfo_Statics::NewProp_bMakeMaterialInstance = { "bMakeMaterialInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniMaterialInfo), &Z_Construct_UScriptStruct_FHoudiniMaterialInfo_Statics::NewProp_bMakeMaterialInstance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMakeMaterialInstance_MetaData), NewProp_bMakeMaterialInstance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniMaterialInfo_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniMaterialInfo, MaterialIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialIndex_MetaData), NewProp_MaterialIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniMaterialInfo_Statics::NewProp_MaterialInstanceParameters_ValueProp = { "MaterialInstanceParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FHoudiniMaterialParameterValue, METADATA_PARAMS(0, nullptr) }; // 130017622
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHoudiniMaterialInfo_Statics::NewProp_MaterialInstanceParameters_Key_KeyProp = { "MaterialInstanceParameters_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHoudiniMaterialInfo_Statics::NewProp_MaterialInstanceParameters = { "MaterialInstanceParameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniMaterialInfo, MaterialInstanceParameters), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialInstanceParameters_MetaData), NewProp_MaterialInstanceParameters_MetaData) }; // 130017622
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniMaterialInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniMaterialInfo_Statics::NewProp_MaterialObjectPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniMaterialInfo_Statics::NewProp_bMakeMaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniMaterialInfo_Statics::NewProp_MaterialIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniMaterialInfo_Statics::NewProp_MaterialInstanceParameters_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniMaterialInfo_Statics::NewProp_MaterialInstanceParameters_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniMaterialInfo_Statics::NewProp_MaterialInstanceParameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniMaterialInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniMaterialInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
	nullptr,
	&NewStructOps,
	"HoudiniMaterialInfo",
	Z_Construct_UScriptStruct_FHoudiniMaterialInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniMaterialInfo_Statics::PropPointers),
	sizeof(FHoudiniMaterialInfo),
	alignof(FHoudiniMaterialInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniMaterialInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniMaterialInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniMaterialInfo()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniMaterialInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniMaterialInfo.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniMaterialInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniMaterialInfo.InnerSingleton;
}
// End ScriptStruct FHoudiniMaterialInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniMaterialTranslator_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniUnrealMaterialParameterType_StaticEnum, TEXT("EHoudiniUnrealMaterialParameterType"), &Z_Registration_Info_UEnum_EHoudiniUnrealMaterialParameterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 875054829U) },
		{ EHoudiniUnrealMaterialParameterDataType_StaticEnum, TEXT("EHoudiniUnrealMaterialParameterDataType"), &Z_Registration_Info_UEnum_EHoudiniUnrealMaterialParameterDataType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3309220983U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHoudiniMaterialParameterValue::StaticStruct, Z_Construct_UScriptStruct_FHoudiniMaterialParameterValue_Statics::NewStructOps, TEXT("HoudiniMaterialParameterValue"), &Z_Registration_Info_UScriptStruct_HoudiniMaterialParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniMaterialParameterValue), 130017622U) },
		{ FHoudiniMaterialInfo::StaticStruct, Z_Construct_UScriptStruct_FHoudiniMaterialInfo_Statics::NewStructOps, TEXT("HoudiniMaterialInfo"), &Z_Registration_Info_UScriptStruct_HoudiniMaterialInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniMaterialInfo), 2085175468U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniMaterialTranslator_h_2067165951(TEXT("/Script/HoudiniEngine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniMaterialTranslator_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniMaterialTranslator_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniMaterialTranslator_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniMaterialTranslator_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
