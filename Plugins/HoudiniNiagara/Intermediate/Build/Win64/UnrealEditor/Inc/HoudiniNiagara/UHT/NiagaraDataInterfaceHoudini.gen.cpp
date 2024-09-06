// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniNiagara/Classes/NiagaraDataInterfaceHoudini.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceHoudini() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
HOUDININIAGARA_API UClass* Z_Construct_UClass_UHoudiniPointCache_NoRegister();
HOUDININIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceHoudini();
HOUDININIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceHoudini_NoRegister();
HOUDININIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniEvent();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
UPackage* Z_Construct_UPackage__Script_HoudiniNiagara();
// End Cross Module References

// Begin ScriptStruct FHoudiniEvent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniEvent;
class UScriptStruct* FHoudiniEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniEvent, (UObject*)Z_Construct_UPackage__Script_HoudiniNiagara(), TEXT("HoudiniEvent"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniEvent.OuterSingleton;
}
template<> HOUDININIAGARA_API UScriptStruct* StaticStruct<FHoudiniEvent>()
{
	return FHoudiniEvent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceHoudini.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Houdini Event" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceHoudini.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "Category", "Houdini Event" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceHoudini.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Impulse_MetaData[] = {
		{ "Category", "Houdini Event" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceHoudini.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "Category", "Houdini Event" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceHoudini.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointID_MetaData[] = {
		{ "Category", "Houdini Event" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceHoudini.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "Category", "Houdini Event" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceHoudini.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Life_MetaData[] = {
		{ "Category", "Houdini Event" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceHoudini.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Houdini Event" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceHoudini.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Houdini Event" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceHoudini.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Impulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PointID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Life;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniEvent, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniEvent, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Impulse = { "Impulse", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniEvent, Impulse), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Impulse_MetaData), NewProp_Impulse_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniEvent, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_PointID = { "PointID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniEvent, PointID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointID_MetaData), NewProp_PointID_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniEvent, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Life = { "Life", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniEvent, Life), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Life_MetaData), NewProp_Life_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniEvent, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniEvent, Type), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Impulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_PointID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Life,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniNiagara,
	nullptr,
	&NewStructOps,
	"HoudiniEvent",
	Z_Construct_UScriptStruct_FHoudiniEvent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::PropPointers),
	sizeof(FHoudiniEvent),
	alignof(FHoudiniEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniEvent()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniEvent.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniEvent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniEvent.InnerSingleton;
}
// End ScriptStruct FHoudiniEvent

// Begin Class UNiagaraDataInterfaceHoudini
void UNiagaraDataInterfaceHoudini::StaticRegisterNativesUNiagaraDataInterfaceHoudini()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceHoudini);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceHoudini_NoRegister()
{
	return UNiagaraDataInterfaceHoudini::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Houdini Niagara" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Data Interface allowing sampling of UHoudiniPointCache assets (CSV, .json (binary) files) files. */" },
#endif
		{ "DisplayName", "Houdini Point Cache Info" },
		{ "IncludePath", "NiagaraDataInterfaceHoudini.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceHoudini.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data Interface allowing sampling of UHoudiniPointCache assets (CSV, .json (binary) files) files." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniPointCacheAsset_MetaData[] = {
		{ "Category", "Houdini Niagara" },
		{ "DisplayName", "Houdini Point Cache Asset" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceHoudini.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoudiniPointCacheAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceHoudini>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics::NewProp_HoudiniPointCacheAsset = { "HoudiniPointCacheAsset", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceHoudini, HoudiniPointCacheAsset), Z_Construct_UClass_UHoudiniPointCache_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoudiniPointCacheAsset_MetaData), NewProp_HoudiniPointCacheAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics::NewProp_HoudiniPointCacheAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniNiagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics::ClassParams = {
	&UNiagaraDataInterfaceHoudini::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceHoudini()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceHoudini.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceHoudini.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceHoudini.OuterSingleton;
}
template<> HOUDININIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceHoudini>()
{
	return UNiagaraDataInterfaceHoudini::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceHoudini);
UNiagaraDataInterfaceHoudini::~UNiagaraDataInterfaceHoudini() {}
// End Class UNiagaraDataInterfaceHoudini

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Classes_NiagaraDataInterfaceHoudini_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHoudiniEvent::StaticStruct, Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewStructOps, TEXT("HoudiniEvent"), &Z_Registration_Info_UScriptStruct_HoudiniEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniEvent), 3662161935U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceHoudini, UNiagaraDataInterfaceHoudini::StaticClass, TEXT("UNiagaraDataInterfaceHoudini"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceHoudini, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceHoudini), 853449906U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Classes_NiagaraDataInterfaceHoudini_h_1326725202(TEXT("/Script/HoudiniNiagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Classes_NiagaraDataInterfaceHoudini_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Classes_NiagaraDataInterfaceHoudini_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Classes_NiagaraDataInterfaceHoudini_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Classes_NiagaraDataInterfaceHoudini_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
