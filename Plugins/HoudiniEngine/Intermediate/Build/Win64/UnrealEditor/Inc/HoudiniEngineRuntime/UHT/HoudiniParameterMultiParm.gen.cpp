// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameterMultiParm.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniParameterMultiParm() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameter();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterMultiParm();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterMultiParm_NoRegister();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniMultiParmModificationType();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EHoudiniMultiParmModificationType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniMultiParmModificationType;
static UEnum* EHoudiniMultiParmModificationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniMultiParmModificationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniMultiParmModificationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniMultiParmModificationType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniMultiParmModificationType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniMultiParmModificationType.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniMultiParmModificationType>()
{
	return EHoudiniMultiParmModificationType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniMultiParmModificationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Inserted.Name", "EHoudiniMultiParmModificationType::Inserted" },
		{ "Modified.Name", "EHoudiniMultiParmModificationType::Modified" },
		{ "ModuleRelativePath", "Private/HoudiniParameterMultiParm.h" },
		{ "None.Name", "EHoudiniMultiParmModificationType::None" },
		{ "Removed.Name", "EHoudiniMultiParmModificationType::Removed" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniMultiParmModificationType::None", (int64)EHoudiniMultiParmModificationType::None },
		{ "EHoudiniMultiParmModificationType::Inserted", (int64)EHoudiniMultiParmModificationType::Inserted },
		{ "EHoudiniMultiParmModificationType::Removed", (int64)EHoudiniMultiParmModificationType::Removed },
		{ "EHoudiniMultiParmModificationType::Modified", (int64)EHoudiniMultiParmModificationType::Modified },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniMultiParmModificationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniMultiParmModificationType",
	"EHoudiniMultiParmModificationType",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniMultiParmModificationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniMultiParmModificationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniMultiParmModificationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniMultiParmModificationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniMultiParmModificationType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniMultiParmModificationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniMultiParmModificationType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniMultiParmModificationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniMultiParmModificationType.InnerSingleton;
}
// End Enum EHoudiniMultiParmModificationType

// Begin Class UHoudiniParameterMultiParm
void UHoudiniParameterMultiParm::StaticRegisterNativesUHoudiniParameterMultiParm()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniParameterMultiParm);
UClass* Z_Construct_UClass_UHoudiniParameterMultiParm_NoRegister()
{
	return UHoudiniParameterMultiParm::StaticClass();
}
struct Z_Construct_UClass_UHoudiniParameterMultiParm_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniParameterMultiParm.h" },
		{ "ModuleRelativePath", "Private/HoudiniParameterMultiParm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsShown_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterMultiParm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Value of the multiparm\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameterMultiParm.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Value of the multiparm" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemplateName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameterMultiParm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiparmValue_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Value of this property.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameterMultiParm.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Value of this property." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiParmInstanceNum_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameterMultiParm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiParmInstanceLength_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameterMultiParm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiParmInstanceCount_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameterMultiParm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceStartOffset_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterMultiParm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiParmInstanceLastModifyArray_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This array records the last modified instance of the multiparm\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameterMultiParm.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This array records the last modified instance of the multiparm" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInstanceCount_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterMultiParm.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsShown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsShown;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TemplateName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MultiparmValue;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MultiParmInstanceNum;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MultiParmInstanceLength;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MultiParmInstanceCount;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_InstanceStartOffset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MultiParmInstanceLastModifyArray_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MultiParmInstanceLastModifyArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MultiParmInstanceLastModifyArray;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultInstanceCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterMultiParm>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_bIsShown_SetBit(void* Obj)
{
	((UHoudiniParameterMultiParm*)Obj)->bIsShown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_bIsShown = { "bIsShown", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameterMultiParm), &Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_bIsShown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsShown_MetaData), NewProp_bIsShown_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterMultiParm, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_TemplateName = { "TemplateName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterMultiParm, TemplateName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemplateName_MetaData), NewProp_TemplateName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_MultiparmValue = { "MultiparmValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterMultiParm, MultiparmValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiparmValue_MetaData), NewProp_MultiparmValue_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_MultiParmInstanceNum = { "MultiParmInstanceNum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterMultiParm, MultiParmInstanceNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiParmInstanceNum_MetaData), NewProp_MultiParmInstanceNum_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_MultiParmInstanceLength = { "MultiParmInstanceLength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterMultiParm, MultiParmInstanceLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiParmInstanceLength_MetaData), NewProp_MultiParmInstanceLength_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_MultiParmInstanceCount = { "MultiParmInstanceCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterMultiParm, MultiParmInstanceCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiParmInstanceCount_MetaData), NewProp_MultiParmInstanceCount_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_InstanceStartOffset = { "InstanceStartOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterMultiParm, InstanceStartOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceStartOffset_MetaData), NewProp_InstanceStartOffset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_MultiParmInstanceLastModifyArray_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_MultiParmInstanceLastModifyArray_Inner = { "MultiParmInstanceLastModifyArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniMultiParmModificationType, METADATA_PARAMS(0, nullptr) }; // 3740262650
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_MultiParmInstanceLastModifyArray = { "MultiParmInstanceLastModifyArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterMultiParm, MultiParmInstanceLastModifyArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiParmInstanceLastModifyArray_MetaData), NewProp_MultiParmInstanceLastModifyArray_MetaData) }; // 3740262650
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_DefaultInstanceCount = { "DefaultInstanceCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterMultiParm, DefaultInstanceCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultInstanceCount_MetaData), NewProp_DefaultInstanceCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_bIsShown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_TemplateName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_MultiparmValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_MultiParmInstanceNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_MultiParmInstanceLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_MultiParmInstanceCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_InstanceStartOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_MultiParmInstanceLastModifyArray_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_MultiParmInstanceLastModifyArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_MultiParmInstanceLastModifyArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::NewProp_DefaultInstanceCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniParameter,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::ClassParams = {
	&UHoudiniParameterMultiParm::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniParameterMultiParm()
{
	if (!Z_Registration_Info_UClass_UHoudiniParameterMultiParm.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniParameterMultiParm.OuterSingleton, Z_Construct_UClass_UHoudiniParameterMultiParm_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniParameterMultiParm.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterMultiParm>()
{
	return UHoudiniParameterMultiParm::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterMultiParm);
UHoudiniParameterMultiParm::~UHoudiniParameterMultiParm() {}
// End Class UHoudiniParameterMultiParm

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterMultiParm_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniMultiParmModificationType_StaticEnum, TEXT("EHoudiniMultiParmModificationType"), &Z_Registration_Info_UEnum_EHoudiniMultiParmModificationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3740262650U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniParameterMultiParm, UHoudiniParameterMultiParm::StaticClass, TEXT("UHoudiniParameterMultiParm"), &Z_Registration_Info_UClass_UHoudiniParameterMultiParm, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniParameterMultiParm), 1384431567U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterMultiParm_h_3092769118(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterMultiParm_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterMultiParm_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterMultiParm_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterMultiParm_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
