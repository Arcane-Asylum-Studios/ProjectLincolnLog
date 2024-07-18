// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameterFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniParameterFloat() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameter();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterFloat();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterFloat_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniParameterFloat
void UHoudiniParameterFloat::StaticRegisterNativesUHoudiniParameterFloat()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniParameterFloat);
UClass* Z_Construct_UClass_UHoudiniParameterFloat_NoRegister()
{
	return UHoudiniParameterFloat::StaticClass();
}
struct Z_Construct_UClass_UHoudiniParameterFloat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniParameterFloat.h" },
		{ "ModuleRelativePath", "Private/HoudiniParameterFloat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Float Values\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameterFloat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Float Values" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValues_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default float values, assigned at creating the parameter\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameterFloat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default float values, assigned at creating the parameter" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Unit_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Unit for this property\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameterFloat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unit for this property" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNoSwap_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Do we have the noswap tag?\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameterFloat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Do we have the noswap tag?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasMin_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates we have a min/max value\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameterFloat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates we have a min/max value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasMax_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameterFloat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasUIMin_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates we have a UI min/max\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameterFloat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates we have a UI min/max" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasUIMax_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameterFloat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLogarithmic_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterFloat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Min and Max values for this property.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameterFloat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Min and Max values for this property." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameterFloat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIMin_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Min and Max values of this property for slider UI\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameterFloat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Min and Max values of this property for slider UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIMax_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameterFloat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsChildOfRamp_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterFloat.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUniformLocked_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates whether the float VEC change value uniformly\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameterFloat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates whether the float VEC change value uniformly" },
#endif
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultValues;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Unit;
	static void NewProp_bNoSwap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoSwap;
	static void NewProp_bHasMin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasMin;
	static void NewProp_bHasMax_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasMax;
	static void NewProp_bHasUIMin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasUIMin;
	static void NewProp_bHasUIMax_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasUIMax;
	static void NewProp_bIsLogarithmic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLogarithmic;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Min;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UIMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UIMax;
	static void NewProp_bIsChildOfRamp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsChildOfRamp;
#if WITH_EDITORONLY_DATA
	static void NewProp_bUniformLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUniformLocked;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterFloat>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterFloat, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_DefaultValues_Inner = { "DefaultValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_DefaultValues = { "DefaultValues", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterFloat, DefaultValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValues_MetaData), NewProp_DefaultValues_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_Unit = { "Unit", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterFloat, Unit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Unit_MetaData), NewProp_Unit_MetaData) };
void Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_bNoSwap_SetBit(void* Obj)
{
	((UHoudiniParameterFloat*)Obj)->bNoSwap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_bNoSwap = { "bNoSwap", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameterFloat), &Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_bNoSwap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNoSwap_MetaData), NewProp_bNoSwap_MetaData) };
void Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_bHasMin_SetBit(void* Obj)
{
	((UHoudiniParameterFloat*)Obj)->bHasMin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_bHasMin = { "bHasMin", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameterFloat), &Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_bHasMin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasMin_MetaData), NewProp_bHasMin_MetaData) };
void Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_bHasMax_SetBit(void* Obj)
{
	((UHoudiniParameterFloat*)Obj)->bHasMax = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_bHasMax = { "bHasMax", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameterFloat), &Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_bHasMax_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasMax_MetaData), NewProp_bHasMax_MetaData) };
void Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_bHasUIMin_SetBit(void* Obj)
{
	((UHoudiniParameterFloat*)Obj)->bHasUIMin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_bHasUIMin = { "bHasUIMin", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameterFloat), &Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_bHasUIMin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasUIMin_MetaData), NewProp_bHasUIMin_MetaData) };
void Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_bHasUIMax_SetBit(void* Obj)
{
	((UHoudiniParameterFloat*)Obj)->bHasUIMax = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_bHasUIMax = { "bHasUIMax", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameterFloat), &Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_bHasUIMax_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasUIMax_MetaData), NewProp_bHasUIMax_MetaData) };
void Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_bIsLogarithmic_SetBit(void* Obj)
{
	((UHoudiniParameterFloat*)Obj)->bIsLogarithmic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_bIsLogarithmic = { "bIsLogarithmic", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameterFloat), &Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_bIsLogarithmic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLogarithmic_MetaData), NewProp_bIsLogarithmic_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterFloat, Min), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Min_MetaData), NewProp_Min_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterFloat, Max), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_UIMin = { "UIMin", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterFloat, UIMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIMin_MetaData), NewProp_UIMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_UIMax = { "UIMax", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterFloat, UIMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIMax_MetaData), NewProp_UIMax_MetaData) };
void Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_bIsChildOfRamp_SetBit(void* Obj)
{
	((UHoudiniParameterFloat*)Obj)->bIsChildOfRamp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_bIsChildOfRamp = { "bIsChildOfRamp", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameterFloat), &Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_bIsChildOfRamp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsChildOfRamp_MetaData), NewProp_bIsChildOfRamp_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_bUniformLocked_SetBit(void* Obj)
{
	((UHoudiniParameterFloat*)Obj)->bUniformLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_bUniformLocked = { "bUniformLocked", nullptr, (EPropertyFlags)0x0020080c00202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameterFloat), &Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_bUniformLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUniformLocked_MetaData), NewProp_bUniformLocked_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_Values,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_DefaultValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_DefaultValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_Unit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_bNoSwap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_bHasMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_bHasMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_bHasUIMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_bHasUIMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_bIsLogarithmic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_Max,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_UIMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_UIMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_bIsChildOfRamp,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFloat_Statics::NewProp_bUniformLocked,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterFloat_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniParameterFloat_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniParameter,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterFloat_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterFloat_Statics::ClassParams = {
	&UHoudiniParameterFloat::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniParameterFloat_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterFloat_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterFloat_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniParameterFloat_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniParameterFloat()
{
	if (!Z_Registration_Info_UClass_UHoudiniParameterFloat.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniParameterFloat.OuterSingleton, Z_Construct_UClass_UHoudiniParameterFloat_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniParameterFloat.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterFloat>()
{
	return UHoudiniParameterFloat::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterFloat);
UHoudiniParameterFloat::~UHoudiniParameterFloat() {}
// End Class UHoudiniParameterFloat

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFloat_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniParameterFloat, UHoudiniParameterFloat::StaticClass, TEXT("UHoudiniParameterFloat"), &Z_Registration_Info_UClass_UHoudiniParameterFloat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniParameterFloat), 1555921130U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFloat_h_1513820587(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFloat_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFloat_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
