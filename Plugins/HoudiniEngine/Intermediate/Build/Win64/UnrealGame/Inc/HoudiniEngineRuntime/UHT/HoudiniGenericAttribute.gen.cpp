// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniGenericAttribute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniGenericAttribute() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGenericAttribute();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EAttribStorageType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAttribStorageType;
static UEnum* EAttribStorageType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAttribStorageType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAttribStorageType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EAttribStorageType"));
	}
	return Z_Registration_Info_UEnum_EAttribStorageType.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EAttribStorageType>()
{
	return EAttribStorageType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "FLOAT.Name", "EAttribStorageType::FLOAT" },
		{ "FLOAT64.Name", "EAttribStorageType::FLOAT64" },
		{ "INT.Name", "EAttribStorageType::INT" },
		{ "INT64.Name", "EAttribStorageType::INT64" },
		{ "Invalid.Name", "EAttribStorageType::Invalid" },
		{ "ModuleRelativePath", "Private/HoudiniGenericAttribute.h" },
		{ "STRING.Name", "EAttribStorageType::STRING" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAttribStorageType::Invalid", (int64)EAttribStorageType::Invalid },
		{ "EAttribStorageType::INT", (int64)EAttribStorageType::INT },
		{ "EAttribStorageType::INT64", (int64)EAttribStorageType::INT64 },
		{ "EAttribStorageType::FLOAT", (int64)EAttribStorageType::FLOAT },
		{ "EAttribStorageType::FLOAT64", (int64)EAttribStorageType::FLOAT64 },
		{ "EAttribStorageType::STRING", (int64)EAttribStorageType::STRING },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EAttribStorageType",
	"EAttribStorageType",
	Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType()
{
	if (!Z_Registration_Info_UEnum_EAttribStorageType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAttribStorageType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAttribStorageType.InnerSingleton;
}
// End Enum EAttribStorageType

// Begin Enum EAttribOwner
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAttribOwner;
static UEnum* EAttribOwner_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAttribOwner.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAttribOwner.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EAttribOwner"));
	}
	return Z_Registration_Info_UEnum_EAttribOwner.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EAttribOwner>()
{
	return EAttribOwner_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Detail.Name", "EAttribOwner::Detail" },
		{ "Invalid.Name", "EAttribOwner::Invalid" },
		{ "ModuleRelativePath", "Private/HoudiniGenericAttribute.h" },
		{ "Point.Name", "EAttribOwner::Point" },
		{ "Prim.Name", "EAttribOwner::Prim" },
		{ "Vertex.Name", "EAttribOwner::Vertex" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAttribOwner::Invalid", (int64)EAttribOwner::Invalid },
		{ "EAttribOwner::Vertex", (int64)EAttribOwner::Vertex },
		{ "EAttribOwner::Point", (int64)EAttribOwner::Point },
		{ "EAttribOwner::Prim", (int64)EAttribOwner::Prim },
		{ "EAttribOwner::Detail", (int64)EAttribOwner::Detail },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EAttribOwner",
	"EAttribOwner",
	Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner()
{
	if (!Z_Registration_Info_UEnum_EAttribOwner.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAttribOwner.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAttribOwner.InnerSingleton;
}
// End Enum EAttribOwner

// Begin ScriptStruct FHoudiniGenericAttributeChangedProperty
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniGenericAttributeChangedProperty;
class UScriptStruct* FHoudiniGenericAttributeChangedProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniGenericAttributeChangedProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniGenericAttributeChangedProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniGenericAttributeChangedProperty"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniGenericAttributeChangedProperty.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniGenericAttributeChangedProperty>()
{
	return FHoudiniGenericAttributeChangedProperty::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniGenericAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The object from where to follow the PropertyChain to the changed property. */" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniGenericAttribute.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The object from where to follow the PropertyChain to the changed property." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniGenericAttributeChangedProperty>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGenericAttributeChangedProperty, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Object_MetaData), NewProp_Object_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::NewProp_Object,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniGenericAttributeChangedProperty",
	Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::PropPointers),
	sizeof(FHoudiniGenericAttributeChangedProperty),
	alignof(FHoudiniGenericAttributeChangedProperty),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniGenericAttributeChangedProperty.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniGenericAttributeChangedProperty.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniGenericAttributeChangedProperty.InnerSingleton;
}
// End ScriptStruct FHoudiniGenericAttributeChangedProperty

// Begin ScriptStruct FHoudiniGenericAttribute
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniGenericAttribute;
class UScriptStruct* FHoudiniGenericAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniGenericAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniGenericAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniGenericAttribute, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniGenericAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniGenericAttribute.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniGenericAttribute>()
{
	return FHoudiniGenericAttribute::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniGenericAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniGenericAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeType_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniGenericAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeOwner_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniGenericAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeCount_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniGenericAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeTupleSize_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniGenericAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoubleValues_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniGenericAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntValues_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniGenericAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringValues_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniGenericAttribute.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeName;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_AttributeType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeType;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_AttributeOwner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeOwner;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeTupleSize;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DoubleValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DoubleValues;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_IntValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IntValues;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StringValues;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniGenericAttribute>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGenericAttribute, AttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeName_MetaData), NewProp_AttributeName_MetaData) };
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeType = { "AttributeType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGenericAttribute, AttributeType), Z_Construct_UEnum_HoudiniEngineRuntime_EAttribStorageType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeType_MetaData), NewProp_AttributeType_MetaData) }; // 1138721957
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeOwner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeOwner = { "AttributeOwner", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGenericAttribute, AttributeOwner), Z_Construct_UEnum_HoudiniEngineRuntime_EAttribOwner, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeOwner_MetaData), NewProp_AttributeOwner_MetaData) }; // 780072190
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeCount = { "AttributeCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGenericAttribute, AttributeCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeCount_MetaData), NewProp_AttributeCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeTupleSize = { "AttributeTupleSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGenericAttribute, AttributeTupleSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeTupleSize_MetaData), NewProp_AttributeTupleSize_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_DoubleValues_Inner = { "DoubleValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_DoubleValues = { "DoubleValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGenericAttribute, DoubleValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoubleValues_MetaData), NewProp_DoubleValues_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_IntValues_Inner = { "IntValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_IntValues = { "IntValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGenericAttribute, IntValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntValues_MetaData), NewProp_IntValues_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_StringValues_Inner = { "StringValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_StringValues = { "StringValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniGenericAttribute, StringValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringValues_MetaData), NewProp_StringValues_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeOwner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_AttributeTupleSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_DoubleValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_DoubleValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_IntValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_IntValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_StringValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewProp_StringValues,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniGenericAttribute",
	Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::PropPointers),
	sizeof(FHoudiniGenericAttribute),
	alignof(FHoudiniGenericAttribute),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGenericAttribute()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniGenericAttribute.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniGenericAttribute.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniGenericAttribute.InnerSingleton;
}
// End ScriptStruct FHoudiniGenericAttribute

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGenericAttribute_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAttribStorageType_StaticEnum, TEXT("EAttribStorageType"), &Z_Registration_Info_UEnum_EAttribStorageType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1138721957U) },
		{ EAttribOwner_StaticEnum, TEXT("EAttribOwner"), &Z_Registration_Info_UEnum_EAttribOwner, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 780072190U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHoudiniGenericAttributeChangedProperty::StaticStruct, Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics::NewStructOps, TEXT("HoudiniGenericAttributeChangedProperty"), &Z_Registration_Info_UScriptStruct_HoudiniGenericAttributeChangedProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniGenericAttributeChangedProperty), 633911156U) },
		{ FHoudiniGenericAttribute::StaticStruct, Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics::NewStructOps, TEXT("HoudiniGenericAttribute"), &Z_Registration_Info_UScriptStruct_HoudiniGenericAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniGenericAttribute), 2192899334U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGenericAttribute_h_2389817316(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGenericAttribute_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGenericAttribute_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGenericAttribute_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGenericAttribute_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
