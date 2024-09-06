// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniHandleComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniHandleComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniHandleComponent();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniHandleComponent_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniHandleParameter();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniHandleParameter_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameter_NoRegister();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EXformParameter();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EXformParameter
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EXformParameter;
static UEnum* EXformParameter_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EXformParameter.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EXformParameter.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EXformParameter, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EXformParameter"));
	}
	return Z_Registration_Info_UEnum_EXformParameter.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EXformParameter>()
{
	return EXformParameter_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EXformParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "COUNT.Name", "EXformParameter::COUNT" },
		{ "ModuleRelativePath", "Private/HoudiniHandleComponent.h" },
		{ "RX.Name", "EXformParameter::RX" },
		{ "RY.Name", "EXformParameter::RY" },
		{ "RZ.Name", "EXformParameter::RZ" },
		{ "SX.Name", "EXformParameter::SX" },
		{ "SY.Name", "EXformParameter::SY" },
		{ "SZ.Name", "EXformParameter::SZ" },
		{ "TX.Name", "EXformParameter::TX" },
		{ "TY.Name", "EXformParameter::TY" },
		{ "TZ.Name", "EXformParameter::TZ" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EXformParameter::TX", (int64)EXformParameter::TX },
		{ "EXformParameter::TY", (int64)EXformParameter::TY },
		{ "EXformParameter::TZ", (int64)EXformParameter::TZ },
		{ "EXformParameter::RX", (int64)EXformParameter::RX },
		{ "EXformParameter::RY", (int64)EXformParameter::RY },
		{ "EXformParameter::RZ", (int64)EXformParameter::RZ },
		{ "EXformParameter::SX", (int64)EXformParameter::SX },
		{ "EXformParameter::SY", (int64)EXformParameter::SY },
		{ "EXformParameter::SZ", (int64)EXformParameter::SZ },
		{ "EXformParameter::COUNT", (int64)EXformParameter::COUNT },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EXformParameter_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EXformParameter",
	"EXformParameter",
	Z_Construct_UEnum_HoudiniEngineRuntime_EXformParameter_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EXformParameter_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EXformParameter_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EXformParameter_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EXformParameter()
{
	if (!Z_Registration_Info_UEnum_EXformParameter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EXformParameter.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EXformParameter_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EXformParameter.InnerSingleton;
}
// End Enum EXformParameter

// Begin Class UHoudiniHandleParameter
void UHoudiniHandleParameter::StaticRegisterNativesUHoudiniHandleParameter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniHandleParameter);
UClass* Z_Construct_UClass_UHoudiniHandleParameter_NoRegister()
{
	return UHoudiniHandleParameter::StaticClass();
}
struct Z_Construct_UClass_UHoudiniHandleParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniHandleComponent.h" },
		{ "ModuleRelativePath", "Private/HoudiniHandleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetParameter_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniHandleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TupleIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniHandleComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetParameter;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TupleIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniHandleParameter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniHandleParameter_Statics::NewProp_AssetParameter = { "AssetParameter", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniHandleParameter, AssetParameter), Z_Construct_UClass_UHoudiniParameter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetParameter_MetaData), NewProp_AssetParameter_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniHandleParameter_Statics::NewProp_TupleIndex = { "TupleIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniHandleParameter, TupleIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TupleIndex_MetaData), NewProp_TupleIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniHandleParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleParameter_Statics::NewProp_AssetParameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleParameter_Statics::NewProp_TupleIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleParameter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniHandleParameter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleParameter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniHandleParameter_Statics::ClassParams = {
	&UHoudiniHandleParameter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniHandleParameter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleParameter_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleParameter_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniHandleParameter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniHandleParameter()
{
	if (!Z_Registration_Info_UClass_UHoudiniHandleParameter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniHandleParameter.OuterSingleton, Z_Construct_UClass_UHoudiniHandleParameter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniHandleParameter.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniHandleParameter>()
{
	return UHoudiniHandleParameter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniHandleParameter);
UHoudiniHandleParameter::~UHoudiniHandleParameter() {}
// End Class UHoudiniHandleParameter

// Begin Enum EHoudiniHandleType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniHandleType;
static UEnum* EHoudiniHandleType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniHandleType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniHandleType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniHandleType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniHandleType.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniHandleType>()
{
	return EHoudiniHandleType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bounder.Name", "EHoudiniHandleType::Bounder" },
		{ "ModuleRelativePath", "Private/HoudiniHandleComponent.h" },
		{ "Unsupported.Name", "EHoudiniHandleType::Unsupported" },
		{ "Xform.Name", "EHoudiniHandleType::Xform" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniHandleType::Xform", (int64)EHoudiniHandleType::Xform },
		{ "EHoudiniHandleType::Bounder", (int64)EHoudiniHandleType::Bounder },
		{ "EHoudiniHandleType::Unsupported", (int64)EHoudiniHandleType::Unsupported },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniHandleType",
	"EHoudiniHandleType",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniHandleType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniHandleType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniHandleType.InnerSingleton;
}
// End Enum EHoudiniHandleType

// Begin Class UHoudiniHandleComponent
void UHoudiniHandleComponent::StaticRegisterNativesUHoudiniHandleComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniHandleComponent);
UClass* Z_Construct_UClass_UHoudiniHandleComponent_NoRegister()
{
	return UHoudiniHandleComponent::StaticClass();
}
struct Z_Construct_UClass_UHoudiniHandleComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "HoudiniHandleComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/HoudiniHandleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XformParms_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniHandleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RSTParm_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniHandleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotOrderParm_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniHandleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastSentTransform_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniHandleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandleType_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniHandleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandleName_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniHandleComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_XformParms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_XformParms;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RSTParm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RotOrderParm;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastSentTransform;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HandleType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HandleType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HandleName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniHandleComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_XformParms_Inner = { "XformParms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniHandleParameter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_XformParms = { "XformParms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniHandleComponent, XformParms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XformParms_MetaData), NewProp_XformParms_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_RSTParm = { "RSTParm", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniHandleComponent, RSTParm), Z_Construct_UClass_UHoudiniHandleParameter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RSTParm_MetaData), NewProp_RSTParm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_RotOrderParm = { "RotOrderParm", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniHandleComponent, RotOrderParm), Z_Construct_UClass_UHoudiniHandleParameter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotOrderParm_MetaData), NewProp_RotOrderParm_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_LastSentTransform = { "LastSentTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniHandleComponent, LastSentTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastSentTransform_MetaData), NewProp_LastSentTransform_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleType = { "HandleType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniHandleComponent, HandleType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandleType_MetaData), NewProp_HandleType_MetaData) }; // 1009343566
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleName = { "HandleName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniHandleComponent, HandleName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandleName_MetaData), NewProp_HandleName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniHandleComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_XformParms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_XformParms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_RSTParm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_RotOrderParm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_LastSentTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniHandleComponent_Statics::NewProp_HandleName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniHandleComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniHandleComponent_Statics::ClassParams = {
	&UHoudiniHandleComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniHandleComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniHandleComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniHandleComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniHandleComponent()
{
	if (!Z_Registration_Info_UClass_UHoudiniHandleComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniHandleComponent.OuterSingleton, Z_Construct_UClass_UHoudiniHandleComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniHandleComponent.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniHandleComponent>()
{
	return UHoudiniHandleComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniHandleComponent);
UHoudiniHandleComponent::~UHoudiniHandleComponent() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UHoudiniHandleComponent)
// End Class UHoudiniHandleComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniHandleComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EXformParameter_StaticEnum, TEXT("EXformParameter"), &Z_Registration_Info_UEnum_EXformParameter, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 29241240U) },
		{ EHoudiniHandleType_StaticEnum, TEXT("EHoudiniHandleType"), &Z_Registration_Info_UEnum_EHoudiniHandleType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1009343566U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniHandleParameter, UHoudiniHandleParameter::StaticClass, TEXT("UHoudiniHandleParameter"), &Z_Registration_Info_UClass_UHoudiniHandleParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniHandleParameter), 1232990436U) },
		{ Z_Construct_UClass_UHoudiniHandleComponent, UHoudiniHandleComponent::StaticClass, TEXT("UHoudiniHandleComponent"), &Z_Registration_Info_UClass_UHoudiniHandleComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniHandleComponent), 224122939U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniHandleComponent_h_2919008909(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniHandleComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniHandleComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniHandleComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniHandleComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
