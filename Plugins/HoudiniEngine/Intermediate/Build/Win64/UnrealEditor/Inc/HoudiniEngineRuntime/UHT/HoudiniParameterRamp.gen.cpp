// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameterRamp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniParameterRamp() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterChoice_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterColor_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterFloat_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterMultiParm();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterRampColor();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterRampColor_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterRampColorPoint();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterRampColorPoint_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterRampFloat();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterRampFloat_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterRampFloatPoint();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterRampFloatPoint_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterRampModificationEvent();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterRampModificationEvent_NoRegister();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampPointConstructStatus();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EHoudiniRampPointConstructStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniRampPointConstructStatus;
static UEnum* EHoudiniRampPointConstructStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniRampPointConstructStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniRampPointConstructStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampPointConstructStatus, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniRampPointConstructStatus"));
	}
	return Z_Registration_Info_UEnum_EHoudiniRampPointConstructStatus.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniRampPointConstructStatus>()
{
	return EHoudiniRampPointConstructStatus_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampPointConstructStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "INITIALIZED.Name", "EHoudiniRampPointConstructStatus::INITIALIZED" },
		{ "INTERPTYPE_INSERTED.Name", "EHoudiniRampPointConstructStatus::INTERPTYPE_INSERTED" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
		{ "None.Name", "EHoudiniRampPointConstructStatus::None" },
		{ "POSITION_INSERTED.Name", "EHoudiniRampPointConstructStatus::POSITION_INSERTED" },
		{ "VALUE_INSERTED.Name", "EHoudiniRampPointConstructStatus::VALUE_INSERTED" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniRampPointConstructStatus::None", (int64)EHoudiniRampPointConstructStatus::None },
		{ "EHoudiniRampPointConstructStatus::INITIALIZED", (int64)EHoudiniRampPointConstructStatus::INITIALIZED },
		{ "EHoudiniRampPointConstructStatus::POSITION_INSERTED", (int64)EHoudiniRampPointConstructStatus::POSITION_INSERTED },
		{ "EHoudiniRampPointConstructStatus::VALUE_INSERTED", (int64)EHoudiniRampPointConstructStatus::VALUE_INSERTED },
		{ "EHoudiniRampPointConstructStatus::INTERPTYPE_INSERTED", (int64)EHoudiniRampPointConstructStatus::INTERPTYPE_INSERTED },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampPointConstructStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniRampPointConstructStatus",
	"EHoudiniRampPointConstructStatus",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampPointConstructStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampPointConstructStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampPointConstructStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampPointConstructStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampPointConstructStatus()
{
	if (!Z_Registration_Info_UEnum_EHoudiniRampPointConstructStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniRampPointConstructStatus.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampPointConstructStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniRampPointConstructStatus.InnerSingleton;
}
// End Enum EHoudiniRampPointConstructStatus

// Begin Class UHoudiniParameterRampModificationEvent
void UHoudiniParameterRampModificationEvent::StaticRegisterNativesUHoudiniParameterRampModificationEvent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniParameterRampModificationEvent);
UClass* Z_Construct_UClass_UHoudiniParameterRampModificationEvent_NoRegister()
{
	return UHoudiniParameterRampModificationEvent::StaticClass();
}
struct Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniParameterRamp.h" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInsertEvent_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFloatRamp_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeleteInstanceIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InsertPosition_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InsertFloat_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InsertColor_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InsertInterpolation_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsInsertEvent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInsertEvent;
	static void NewProp_bIsFloatRamp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFloatRamp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DeleteInstanceIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InsertPosition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InsertFloat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InsertColor;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_InsertInterpolation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InsertInterpolation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterRampModificationEvent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsInsertEvent_SetBit(void* Obj)
{
	((UHoudiniParameterRampModificationEvent*)Obj)->bIsInsertEvent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsInsertEvent = { "bIsInsertEvent", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameterRampModificationEvent), &Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsInsertEvent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInsertEvent_MetaData), NewProp_bIsInsertEvent_MetaData) };
void Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsFloatRamp_SetBit(void* Obj)
{
	((UHoudiniParameterRampModificationEvent*)Obj)->bIsFloatRamp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsFloatRamp = { "bIsFloatRamp", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameterRampModificationEvent), &Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsFloatRamp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFloatRamp_MetaData), NewProp_bIsFloatRamp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_DeleteInstanceIndex = { "DeleteInstanceIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampModificationEvent, DeleteInstanceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeleteInstanceIndex_MetaData), NewProp_DeleteInstanceIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertPosition = { "InsertPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampModificationEvent, InsertPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InsertPosition_MetaData), NewProp_InsertPosition_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertFloat = { "InsertFloat", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampModificationEvent, InsertFloat), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InsertFloat_MetaData), NewProp_InsertFloat_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertColor = { "InsertColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampModificationEvent, InsertColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InsertColor_MetaData), NewProp_InsertColor_MetaData) };
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertInterpolation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertInterpolation = { "InsertInterpolation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampModificationEvent, InsertInterpolation), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InsertInterpolation_MetaData), NewProp_InsertInterpolation_MetaData) }; // 970475002
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsInsertEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsFloatRamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_DeleteInstanceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertFloat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertInterpolation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertInterpolation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::ClassParams = {
	&UHoudiniParameterRampModificationEvent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniParameterRampModificationEvent()
{
	if (!Z_Registration_Info_UClass_UHoudiniParameterRampModificationEvent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniParameterRampModificationEvent.OuterSingleton, Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniParameterRampModificationEvent.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterRampModificationEvent>()
{
	return UHoudiniParameterRampModificationEvent::StaticClass();
}
UHoudiniParameterRampModificationEvent::UHoudiniParameterRampModificationEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterRampModificationEvent);
UHoudiniParameterRampModificationEvent::~UHoudiniParameterRampModificationEvent() {}
// End Class UHoudiniParameterRampModificationEvent

// Begin Class UHoudiniParameterRampFloatPoint
void UHoudiniParameterRampFloatPoint::StaticRegisterNativesUHoudiniParameterRampFloatPoint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniParameterRampFloatPoint);
UClass* Z_Construct_UClass_UHoudiniParameterRampFloatPoint_NoRegister()
{
	return UHoudiniParameterRampFloatPoint::StaticClass();
}
struct Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniParameterRamp.h" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interpolation_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionParentParm_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueParentParm_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationParentParm_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_Interpolation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Interpolation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PositionParentParm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ValueParentParm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InterpolationParentParm;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterRampFloatPoint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampFloatPoint, Position), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampFloatPoint, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_Interpolation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_Interpolation = { "Interpolation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampFloatPoint, Interpolation), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interpolation_MetaData), NewProp_Interpolation_MetaData) }; // 970475002
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampFloatPoint, InstanceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceIndex_MetaData), NewProp_InstanceIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_PositionParentParm = { "PositionParentParm", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampFloatPoint, PositionParentParm), Z_Construct_UClass_UHoudiniParameterFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionParentParm_MetaData), NewProp_PositionParentParm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_ValueParentParm = { "ValueParentParm", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampFloatPoint, ValueParentParm), Z_Construct_UClass_UHoudiniParameterFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueParentParm_MetaData), NewProp_ValueParentParm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_InterpolationParentParm = { "InterpolationParentParm", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampFloatPoint, InterpolationParentParm), Z_Construct_UClass_UHoudiniParameterChoice_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpolationParentParm_MetaData), NewProp_InterpolationParentParm_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_Interpolation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_Interpolation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_InstanceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_PositionParentParm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_ValueParentParm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_InterpolationParentParm,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::ClassParams = {
	&UHoudiniParameterRampFloatPoint::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniParameterRampFloatPoint()
{
	if (!Z_Registration_Info_UClass_UHoudiniParameterRampFloatPoint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniParameterRampFloatPoint.OuterSingleton, Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniParameterRampFloatPoint.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterRampFloatPoint>()
{
	return UHoudiniParameterRampFloatPoint::StaticClass();
}
UHoudiniParameterRampFloatPoint::UHoudiniParameterRampFloatPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterRampFloatPoint);
UHoudiniParameterRampFloatPoint::~UHoudiniParameterRampFloatPoint() {}
// End Class UHoudiniParameterRampFloatPoint

// Begin Class UHoudiniParameterRampColorPoint
void UHoudiniParameterRampColorPoint::StaticRegisterNativesUHoudiniParameterRampColorPoint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniParameterRampColorPoint);
UClass* Z_Construct_UClass_UHoudiniParameterRampColorPoint_NoRegister()
{
	return UHoudiniParameterRampColorPoint::StaticClass();
}
struct Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniParameterRamp.h" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interpolation_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionParentParm_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueParentParm_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationParentParm_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_Interpolation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Interpolation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PositionParentParm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ValueParentParm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InterpolationParentParm;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterRampColorPoint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampColorPoint, Position), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampColorPoint, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Interpolation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Interpolation = { "Interpolation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampColorPoint, Interpolation), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interpolation_MetaData), NewProp_Interpolation_MetaData) }; // 970475002
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampColorPoint, InstanceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceIndex_MetaData), NewProp_InstanceIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_PositionParentParm = { "PositionParentParm", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampColorPoint, PositionParentParm), Z_Construct_UClass_UHoudiniParameterFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionParentParm_MetaData), NewProp_PositionParentParm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_ValueParentParm = { "ValueParentParm", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampColorPoint, ValueParentParm), Z_Construct_UClass_UHoudiniParameterColor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueParentParm_MetaData), NewProp_ValueParentParm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_InterpolationParentParm = { "InterpolationParentParm", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampColorPoint, InterpolationParentParm), Z_Construct_UClass_UHoudiniParameterChoice_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpolationParentParm_MetaData), NewProp_InterpolationParentParm_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Interpolation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Interpolation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_InstanceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_PositionParentParm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_ValueParentParm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_InterpolationParentParm,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::ClassParams = {
	&UHoudiniParameterRampColorPoint::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniParameterRampColorPoint()
{
	if (!Z_Registration_Info_UClass_UHoudiniParameterRampColorPoint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniParameterRampColorPoint.OuterSingleton, Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniParameterRampColorPoint.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterRampColorPoint>()
{
	return UHoudiniParameterRampColorPoint::StaticClass();
}
UHoudiniParameterRampColorPoint::UHoudiniParameterRampColorPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterRampColorPoint);
UHoudiniParameterRampColorPoint::~UHoudiniParameterRampColorPoint() {}
// End Class UHoudiniParameterRampColorPoint

// Begin Class UHoudiniParameterRampFloat
void UHoudiniParameterRampFloat::StaticRegisterNativesUHoudiniParameterRampFloat()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniParameterRampFloat);
UClass* Z_Construct_UClass_UHoudiniParameterRampFloat_NoRegister()
{
	return UHoudiniParameterRampFloat::StaticClass();
}
struct Z_Construct_UClass_UHoudiniParameterRampFloat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Houdini Ramp Parameter (float)\n */" },
#endif
		{ "IncludePath", "HoudiniParameterRamp.h" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Houdini Ramp Parameter (float)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedPoints_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPositions_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValues_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultChoices_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumDefaultPoints_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCaching_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If this is true, the cached points will be synced prior to cooking.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If this is true, the cached points will be synced prior to cooking." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModificationEvents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedPoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultPositions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultPositions;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultValues;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultChoices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultChoices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumDefaultPoints;
	static void NewProp_bCaching_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaching;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ModificationEvents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ModificationEvents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterRampFloat>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniParameterRampFloatPoint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampFloat, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_CachedPoints_Inner = { "CachedPoints", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniParameterRampFloatPoint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_CachedPoints = { "CachedPoints", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampFloat, CachedPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedPoints_MetaData), NewProp_CachedPoints_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultPositions_Inner = { "DefaultPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultPositions = { "DefaultPositions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampFloat, DefaultPositions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPositions_MetaData), NewProp_DefaultPositions_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultValues_Inner = { "DefaultValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultValues = { "DefaultValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampFloat, DefaultValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValues_MetaData), NewProp_DefaultValues_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultChoices_Inner = { "DefaultChoices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultChoices = { "DefaultChoices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampFloat, DefaultChoices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultChoices_MetaData), NewProp_DefaultChoices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_NumDefaultPoints = { "NumDefaultPoints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampFloat, NumDefaultPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumDefaultPoints_MetaData), NewProp_NumDefaultPoints_MetaData) };
void Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_bCaching_SetBit(void* Obj)
{
	((UHoudiniParameterRampFloat*)Obj)->bCaching = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_bCaching = { "bCaching", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameterRampFloat), &Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_bCaching_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCaching_MetaData), NewProp_bCaching_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_ModificationEvents_Inner = { "ModificationEvents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniParameterRampModificationEvent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_ModificationEvents = { "ModificationEvents", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampFloat, ModificationEvents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModificationEvents_MetaData), NewProp_ModificationEvents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_CachedPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_CachedPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultPositions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultPositions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultChoices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultChoices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_NumDefaultPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_bCaching,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_ModificationEvents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_ModificationEvents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniParameterMultiParm,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::ClassParams = {
	&UHoudiniParameterRampFloat::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniParameterRampFloat()
{
	if (!Z_Registration_Info_UClass_UHoudiniParameterRampFloat.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniParameterRampFloat.OuterSingleton, Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniParameterRampFloat.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterRampFloat>()
{
	return UHoudiniParameterRampFloat::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterRampFloat);
UHoudiniParameterRampFloat::~UHoudiniParameterRampFloat() {}
// End Class UHoudiniParameterRampFloat

// Begin Class UHoudiniParameterRampColor
void UHoudiniParameterRampColor::StaticRegisterNativesUHoudiniParameterRampColor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniParameterRampColor);
UClass* Z_Construct_UClass_UHoudiniParameterRampColor_NoRegister()
{
	return UHoudiniParameterRampColor::StaticClass();
}
struct Z_Construct_UClass_UHoudiniParameterRampColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Houdini Ramp Parameter (FLinearColor)\n */" },
#endif
		{ "IncludePath", "HoudiniParameterRamp.h" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Houdini Ramp Parameter (FLinearColor)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_Inner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCaching_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedPoints_Inner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedPoints_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPositions_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValues_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultChoices_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumDefaultPoints_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModificationEvents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static void NewProp_bCaching_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaching;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedPoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultPositions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultPositions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultValues;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultChoices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultChoices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumDefaultPoints;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ModificationEvents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ModificationEvents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterRampColor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniParameterRampColorPoint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_Inner_MetaData), NewProp_Points_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampColor, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
void Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_bCaching_SetBit(void* Obj)
{
	((UHoudiniParameterRampColor*)Obj)->bCaching = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_bCaching = { "bCaching", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameterRampColor), &Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_bCaching_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCaching_MetaData), NewProp_bCaching_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_CachedPoints_Inner = { "CachedPoints", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniParameterRampColorPoint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedPoints_Inner_MetaData), NewProp_CachedPoints_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_CachedPoints = { "CachedPoints", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampColor, CachedPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedPoints_MetaData), NewProp_CachedPoints_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultPositions_Inner = { "DefaultPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultPositions = { "DefaultPositions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampColor, DefaultPositions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPositions_MetaData), NewProp_DefaultPositions_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultValues_Inner = { "DefaultValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultValues = { "DefaultValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampColor, DefaultValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValues_MetaData), NewProp_DefaultValues_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultChoices_Inner = { "DefaultChoices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultChoices = { "DefaultChoices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampColor, DefaultChoices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultChoices_MetaData), NewProp_DefaultChoices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_NumDefaultPoints = { "NumDefaultPoints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampColor, NumDefaultPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumDefaultPoints_MetaData), NewProp_NumDefaultPoints_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_ModificationEvents_Inner = { "ModificationEvents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniParameterRampModificationEvent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_ModificationEvents = { "ModificationEvents", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterRampColor, ModificationEvents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModificationEvents_MetaData), NewProp_ModificationEvents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterRampColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_bCaching,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_CachedPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_CachedPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultPositions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultPositions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultChoices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultChoices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_NumDefaultPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_ModificationEvents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_ModificationEvents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniParameterRampColor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniParameterMultiParm,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::ClassParams = {
	&UHoudiniParameterRampColor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniParameterRampColor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniParameterRampColor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniParameterRampColor()
{
	if (!Z_Registration_Info_UClass_UHoudiniParameterRampColor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniParameterRampColor.OuterSingleton, Z_Construct_UClass_UHoudiniParameterRampColor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniParameterRampColor.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterRampColor>()
{
	return UHoudiniParameterRampColor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterRampColor);
UHoudiniParameterRampColor::~UHoudiniParameterRampColor() {}
// End Class UHoudiniParameterRampColor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterRamp_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniRampPointConstructStatus_StaticEnum, TEXT("EHoudiniRampPointConstructStatus"), &Z_Registration_Info_UEnum_EHoudiniRampPointConstructStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3435115228U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniParameterRampModificationEvent, UHoudiniParameterRampModificationEvent::StaticClass, TEXT("UHoudiniParameterRampModificationEvent"), &Z_Registration_Info_UClass_UHoudiniParameterRampModificationEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniParameterRampModificationEvent), 1833406550U) },
		{ Z_Construct_UClass_UHoudiniParameterRampFloatPoint, UHoudiniParameterRampFloatPoint::StaticClass, TEXT("UHoudiniParameterRampFloatPoint"), &Z_Registration_Info_UClass_UHoudiniParameterRampFloatPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniParameterRampFloatPoint), 3845471426U) },
		{ Z_Construct_UClass_UHoudiniParameterRampColorPoint, UHoudiniParameterRampColorPoint::StaticClass, TEXT("UHoudiniParameterRampColorPoint"), &Z_Registration_Info_UClass_UHoudiniParameterRampColorPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniParameterRampColorPoint), 4137821100U) },
		{ Z_Construct_UClass_UHoudiniParameterRampFloat, UHoudiniParameterRampFloat::StaticClass, TEXT("UHoudiniParameterRampFloat"), &Z_Registration_Info_UClass_UHoudiniParameterRampFloat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniParameterRampFloat), 890884805U) },
		{ Z_Construct_UClass_UHoudiniParameterRampColor, UHoudiniParameterRampColor::StaticClass, TEXT("UHoudiniParameterRampColor"), &Z_Registration_Info_UClass_UHoudiniParameterRampColor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniParameterRampColor), 3603765158U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterRamp_h_701700085(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterRamp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterRamp_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterRamp_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterRamp_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
