// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameterInt.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniParameterInt() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameter();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterInt();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterInt_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniParameterInt
void UHoudiniParameterInt::StaticRegisterNativesUHoudiniParameterInt()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniParameterInt);
UClass* Z_Construct_UClass_UHoudiniParameterInt_NoRegister()
{
	return UHoudiniParameterInt::StaticClass();
}
struct Z_Construct_UClass_UHoudiniParameterInt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniParameterInt.h" },
		{ "ModuleRelativePath", "Private/HoudiniParameterInt.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Int Values\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameterInt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Int Values" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValues_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterInt.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Unit_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Unit for this property\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameterInt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unit for this property" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasMin_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates we have a min/max value\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameterInt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates we have a min/max value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasMax_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameterInt.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasUIMin_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates we have a UI min/max\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameterInt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates we have a UI min/max" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasUIMax_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameterInt.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLogarithmic_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterInt.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Min and Max values for this property.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameterInt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Min and Max values for this property." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameterInt.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIMin_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Min and Max values of this property for slider UI\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameterInt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Min and Max values of this property for slider UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIMax_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniParameterInt.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultValues;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Unit;
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
	static const UECodeGen_Private::FIntPropertyParams NewProp_Min;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Max;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UIMin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UIMax;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterInt>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterInt, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_DefaultValues_Inner = { "DefaultValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_DefaultValues = { "DefaultValues", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterInt, DefaultValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValues_MetaData), NewProp_DefaultValues_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Unit = { "Unit", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterInt, Unit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Unit_MetaData), NewProp_Unit_MetaData) };
void Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasMin_SetBit(void* Obj)
{
	((UHoudiniParameterInt*)Obj)->bHasMin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasMin = { "bHasMin", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameterInt), &Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasMin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasMin_MetaData), NewProp_bHasMin_MetaData) };
void Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasMax_SetBit(void* Obj)
{
	((UHoudiniParameterInt*)Obj)->bHasMax = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasMax = { "bHasMax", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameterInt), &Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasMax_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasMax_MetaData), NewProp_bHasMax_MetaData) };
void Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasUIMin_SetBit(void* Obj)
{
	((UHoudiniParameterInt*)Obj)->bHasUIMin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasUIMin = { "bHasUIMin", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameterInt), &Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasUIMin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasUIMin_MetaData), NewProp_bHasUIMin_MetaData) };
void Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasUIMax_SetBit(void* Obj)
{
	((UHoudiniParameterInt*)Obj)->bHasUIMax = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasUIMax = { "bHasUIMax", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameterInt), &Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasUIMax_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasUIMax_MetaData), NewProp_bHasUIMax_MetaData) };
void Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bIsLogarithmic_SetBit(void* Obj)
{
	((UHoudiniParameterInt*)Obj)->bIsLogarithmic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bIsLogarithmic = { "bIsLogarithmic", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameterInt), &Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bIsLogarithmic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLogarithmic_MetaData), NewProp_bIsLogarithmic_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterInt, Min), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Min_MetaData), NewProp_Min_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterInt, Max), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_UIMin = { "UIMin", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterInt, UIMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIMin_MetaData), NewProp_UIMin_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_UIMax = { "UIMax", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterInt, UIMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIMax_MetaData), NewProp_UIMax_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Values,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_DefaultValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_DefaultValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Unit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasUIMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bHasUIMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_bIsLogarithmic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_Max,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_UIMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterInt_Statics::NewProp_UIMax,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterInt_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniParameterInt_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniParameter,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterInt_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterInt_Statics::ClassParams = {
	&UHoudiniParameterInt::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniParameterInt_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterInt_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterInt_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniParameterInt_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniParameterInt()
{
	if (!Z_Registration_Info_UClass_UHoudiniParameterInt.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniParameterInt.OuterSingleton, Z_Construct_UClass_UHoudiniParameterInt_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniParameterInt.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterInt>()
{
	return UHoudiniParameterInt::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterInt);
UHoudiniParameterInt::~UHoudiniParameterInt() {}
// End Class UHoudiniParameterInt

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterInt_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniParameterInt, UHoudiniParameterInt::StaticClass, TEXT("UHoudiniParameterInt"), &Z_Registration_Info_UClass_UHoudiniParameterInt, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniParameterInt), 1161528506U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterInt_h_3236369308(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterInt_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterInt_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
