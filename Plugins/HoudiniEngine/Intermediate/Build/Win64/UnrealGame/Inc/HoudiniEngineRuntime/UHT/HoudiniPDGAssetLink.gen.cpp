// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniPDGAssetLink.h"
#include "HoudiniEngineRuntime/Private/HoudiniOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniPDGAssetLink() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniOutput_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPDGAssetLink();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPDGAssetLink_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UTOPNetwork();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UTOPNetwork_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UTOPNode();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UTOPNode_NoRegister();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakePackageReplaceModeOption();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakeSelectionOption();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGLinkState();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAggregatedWorkItemTally();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniBakedOutput();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniClearedEditLayers();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FOutputActorOwner();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTOPWorkResult();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTOPWorkResultObject();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FWorkItemTally();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FWorkItemTallyBase();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EPDGLinkState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPDGLinkState;
static UEnum* EPDGLinkState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPDGLinkState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPDGLinkState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGLinkState, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EPDGLinkState"));
	}
	return Z_Registration_Info_UEnum_EPDGLinkState.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EPDGLinkState>()
{
	return EPDGLinkState_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EPDGLinkState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Error_Not_Linked.Name", "EPDGLinkState::Error_Not_Linked" },
		{ "Inactive.Name", "EPDGLinkState::Inactive" },
		{ "Linked.Name", "EPDGLinkState::Linked" },
		{ "Linking.Name", "EPDGLinkState::Linking" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPDGLinkState::Inactive", (int64)EPDGLinkState::Inactive },
		{ "EPDGLinkState::Linking", (int64)EPDGLinkState::Linking },
		{ "EPDGLinkState::Linked", (int64)EPDGLinkState::Linked },
		{ "EPDGLinkState::Error_Not_Linked", (int64)EPDGLinkState::Error_Not_Linked },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EPDGLinkState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EPDGLinkState",
	"EPDGLinkState",
	Z_Construct_UEnum_HoudiniEngineRuntime_EPDGLinkState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGLinkState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGLinkState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EPDGLinkState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGLinkState()
{
	if (!Z_Registration_Info_UEnum_EPDGLinkState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPDGLinkState.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EPDGLinkState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPDGLinkState.InnerSingleton;
}
// End Enum EPDGLinkState

// Begin Enum EPDGNodeState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPDGNodeState;
static UEnum* EPDGNodeState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPDGNodeState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPDGNodeState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EPDGNodeState"));
	}
	return Z_Registration_Info_UEnum_EPDGNodeState.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EPDGNodeState>()
{
	return EPDGNodeState_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Cook_Complete.Name", "EPDGNodeState::Cook_Complete" },
		{ "Cook_Failed.Name", "EPDGNodeState::Cook_Failed" },
		{ "Cooking.Name", "EPDGNodeState::Cooking" },
		{ "Dirtied.Name", "EPDGNodeState::Dirtied" },
		{ "Dirtying.Name", "EPDGNodeState::Dirtying" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "None.Name", "EPDGNodeState::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPDGNodeState::None", (int64)EPDGNodeState::None },
		{ "EPDGNodeState::Dirtied", (int64)EPDGNodeState::Dirtied },
		{ "EPDGNodeState::Dirtying", (int64)EPDGNodeState::Dirtying },
		{ "EPDGNodeState::Cooking", (int64)EPDGNodeState::Cooking },
		{ "EPDGNodeState::Cook_Complete", (int64)EPDGNodeState::Cook_Complete },
		{ "EPDGNodeState::Cook_Failed", (int64)EPDGNodeState::Cook_Failed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EPDGNodeState",
	"EPDGNodeState",
	Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState()
{
	if (!Z_Registration_Info_UEnum_EPDGNodeState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPDGNodeState.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPDGNodeState.InnerSingleton;
}
// End Enum EPDGNodeState

// Begin Enum EPDGWorkResultState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPDGWorkResultState;
static UEnum* EPDGWorkResultState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPDGWorkResultState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPDGWorkResultState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EPDGWorkResultState"));
	}
	return Z_Registration_Info_UEnum_EPDGWorkResultState.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EPDGWorkResultState>()
{
	return EPDGWorkResultState_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Deleted.Name", "EPDGWorkResultState::Deleted" },
		{ "Deleting.Name", "EPDGWorkResultState::Deleting" },
		{ "Loaded.Name", "EPDGWorkResultState::Loaded" },
		{ "Loading.Name", "EPDGWorkResultState::Loading" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "None.Name", "EPDGWorkResultState::None" },
		{ "NotLoaded.Name", "EPDGWorkResultState::NotLoaded" },
		{ "ToDelete.Name", "EPDGWorkResultState::ToDelete" },
		{ "ToLoad.Name", "EPDGWorkResultState::ToLoad" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPDGWorkResultState::None", (int64)EPDGWorkResultState::None },
		{ "EPDGWorkResultState::ToLoad", (int64)EPDGWorkResultState::ToLoad },
		{ "EPDGWorkResultState::Loading", (int64)EPDGWorkResultState::Loading },
		{ "EPDGWorkResultState::Loaded", (int64)EPDGWorkResultState::Loaded },
		{ "EPDGWorkResultState::ToDelete", (int64)EPDGWorkResultState::ToDelete },
		{ "EPDGWorkResultState::Deleting", (int64)EPDGWorkResultState::Deleting },
		{ "EPDGWorkResultState::Deleted", (int64)EPDGWorkResultState::Deleted },
		{ "EPDGWorkResultState::NotLoaded", (int64)EPDGWorkResultState::NotLoaded },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EPDGWorkResultState",
	"EPDGWorkResultState",
	Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState()
{
	if (!Z_Registration_Info_UEnum_EPDGWorkResultState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPDGWorkResultState.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPDGWorkResultState.InnerSingleton;
}
// End Enum EPDGWorkResultState

// Begin ScriptStruct FOutputActorOwner
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OutputActorOwner;
class UScriptStruct* FOutputActorOwner::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OutputActorOwner.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OutputActorOwner.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOutputActorOwner, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("OutputActorOwner"));
	}
	return Z_Registration_Info_UScriptStruct_OutputActorOwner.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FOutputActorOwner>()
{
	return FOutputActorOwner::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOutputActorOwner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputActor_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOutputActorOwner>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOutputActorOwner_Statics::NewProp_OutputActor = { "OutputActor", nullptr, (EPropertyFlags)0x0040000400000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOutputActorOwner, OutputActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputActor_MetaData), NewProp_OutputActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOutputActorOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutputActorOwner_Statics::NewProp_OutputActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutputActorOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOutputActorOwner_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"OutputActorOwner",
	Z_Construct_UScriptStruct_FOutputActorOwner_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutputActorOwner_Statics::PropPointers),
	sizeof(FOutputActorOwner),
	alignof(FOutputActorOwner),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutputActorOwner_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOutputActorOwner_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOutputActorOwner()
{
	if (!Z_Registration_Info_UScriptStruct_OutputActorOwner.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OutputActorOwner.InnerSingleton, Z_Construct_UScriptStruct_FOutputActorOwner_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OutputActorOwner.InnerSingleton;
}
// End ScriptStruct FOutputActorOwner

// Begin ScriptStruct FTOPWorkResultObject
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TOPWorkResultObject;
class UScriptStruct* FTOPWorkResultObject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TOPWorkResultObject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TOPWorkResultObject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTOPWorkResultObject, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("TOPWorkResultObject"));
	}
	return Z_Registration_Info_UScriptStruct_TOPWorkResultObject.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FTOPWorkResultObject>()
{
	return FTOPWorkResultObject::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkItemResultInfoIndex_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The index in the WorkItemResultInfo array of this item as it was received from HAPI.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The index in the WorkItemResultInfo array of this item as it was received from HAPI." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultOutputs_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UPROPERTY()\n// TArray<UObject*>\x09\x09ResultObjects;\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY()\nTArray<UObject*>              ResultObjects;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoBakedSinceLastLoad_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, indicates that the work result object has been auto-baked since it was last loaded.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, indicates that the work result object has been auto-baked since it was last loaded." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputActorOwner_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WorkItemResultInfoIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResultOutputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ResultOutputs;
	static void NewProp_bAutoBakedSinceLastLoad_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoBakedSinceLastLoad;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputActorOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTOPWorkResultObject>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTOPWorkResultObject, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTOPWorkResultObject, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTOPWorkResultObject, State), Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) }; // 3130987196
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_WorkItemResultInfoIndex = { "WorkItemResultInfoIndex", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTOPWorkResultObject, WorkItemResultInfoIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkItemResultInfoIndex_MetaData), NewProp_WorkItemResultInfoIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_ResultOutputs_Inner = { "ResultOutputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniOutput_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_ResultOutputs = { "ResultOutputs", nullptr, (EPropertyFlags)0x0020080400000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTOPWorkResultObject, ResultOutputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultOutputs_MetaData), NewProp_ResultOutputs_MetaData) };
void Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_bAutoBakedSinceLastLoad_SetBit(void* Obj)
{
	((FTOPWorkResultObject*)Obj)->bAutoBakedSinceLastLoad = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_bAutoBakedSinceLastLoad = { "bAutoBakedSinceLastLoad", nullptr, (EPropertyFlags)0x0020080400000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTOPWorkResultObject), &Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_bAutoBakedSinceLastLoad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoBakedSinceLastLoad_MetaData), NewProp_bAutoBakedSinceLastLoad_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_OutputActorOwner = { "OutputActorOwner", nullptr, (EPropertyFlags)0x0040000400000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTOPWorkResultObject, OutputActorOwner), Z_Construct_UScriptStruct_FOutputActorOwner, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputActorOwner_MetaData), NewProp_OutputActorOwner_MetaData) }; // 712688168
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_State_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_WorkItemResultInfoIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_ResultOutputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_ResultOutputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_bAutoBakedSinceLastLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_OutputActorOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"TOPWorkResultObject",
	Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::PropPointers),
	sizeof(FTOPWorkResultObject),
	alignof(FTOPWorkResultObject),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTOPWorkResultObject()
{
	if (!Z_Registration_Info_UScriptStruct_TOPWorkResultObject.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TOPWorkResultObject.InnerSingleton, Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TOPWorkResultObject.InnerSingleton;
}
// End ScriptStruct FTOPWorkResultObject

// Begin ScriptStruct FTOPWorkResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TOPWorkResult;
class UScriptStruct* FTOPWorkResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TOPWorkResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TOPWorkResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTOPWorkResult, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("TOPWorkResult"));
	}
	return Z_Registration_Info_UScriptStruct_TOPWorkResult.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FTOPWorkResult>()
{
	return FTOPWorkResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTOPWorkResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkItemIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkItemID_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultObjects_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_WorkItemIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WorkItemID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResultObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ResultObjects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTOPWorkResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_WorkItemIndex = { "WorkItemIndex", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTOPWorkResult, WorkItemIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkItemIndex_MetaData), NewProp_WorkItemIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_WorkItemID = { "WorkItemID", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTOPWorkResult, WorkItemID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkItemID_MetaData), NewProp_WorkItemID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_ResultObjects_Inner = { "ResultObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTOPWorkResultObject, METADATA_PARAMS(0, nullptr) }; // 4073636573
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_ResultObjects = { "ResultObjects", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTOPWorkResult, ResultObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultObjects_MetaData), NewProp_ResultObjects_MetaData) }; // 4073636573
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTOPWorkResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_WorkItemIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_WorkItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_ResultObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_ResultObjects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTOPWorkResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTOPWorkResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"TOPWorkResult",
	Z_Construct_UScriptStruct_FTOPWorkResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTOPWorkResult_Statics::PropPointers),
	sizeof(FTOPWorkResult),
	alignof(FTOPWorkResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTOPWorkResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTOPWorkResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTOPWorkResult()
{
	if (!Z_Registration_Info_UScriptStruct_TOPWorkResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TOPWorkResult.InnerSingleton, Z_Construct_UScriptStruct_FTOPWorkResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TOPWorkResult.InnerSingleton;
}
// End ScriptStruct FTOPWorkResult

// Begin ScriptStruct FWorkItemTallyBase
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorkItemTallyBase;
class UScriptStruct* FWorkItemTallyBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorkItemTallyBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorkItemTallyBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorkItemTallyBase, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("WorkItemTallyBase"));
	}
	return Z_Registration_Info_UScriptStruct_WorkItemTallyBase.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FWorkItemTallyBase>()
{
	return FWorkItemTallyBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWorkItemTallyBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorkItemTallyBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorkItemTallyBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"WorkItemTallyBase",
	nullptr,
	0,
	sizeof(FWorkItemTallyBase),
	alignof(FWorkItemTallyBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkItemTallyBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWorkItemTallyBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWorkItemTallyBase()
{
	if (!Z_Registration_Info_UScriptStruct_WorkItemTallyBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorkItemTallyBase.InnerSingleton, Z_Construct_UScriptStruct_FWorkItemTallyBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WorkItemTallyBase.InnerSingleton;
}
// End ScriptStruct FWorkItemTallyBase

// Begin ScriptStruct FWorkItemTally
static_assert(std::is_polymorphic<FWorkItemTally>() == std::is_polymorphic<FWorkItemTallyBase>(), "USTRUCT FWorkItemTally cannot be polymorphic unless super FWorkItemTallyBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorkItemTally;
class UScriptStruct* FWorkItemTally::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorkItemTally.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorkItemTally.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorkItemTally, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("WorkItemTally"));
	}
	return Z_Registration_Info_UScriptStruct_WorkItemTally.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FWorkItemTally>()
{
	return FWorkItemTally::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWorkItemTally_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllWorkItems_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// We use sets to keep track of in what state a work item is. The set stores the WorkItemID.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "We use sets to keep track of in what state a work item is. The set stores the WorkItemID." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaitingWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScheduledWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CookingWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CookedWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErroredWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CookCancelledWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AllWorkItems_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_AllWorkItems;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WaitingWorkItems_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_WaitingWorkItems;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ScheduledWorkItems_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ScheduledWorkItems;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CookingWorkItems_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_CookingWorkItems;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CookedWorkItems_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_CookedWorkItems;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ErroredWorkItems_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ErroredWorkItems;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CookCancelledWorkItems_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_CookCancelledWorkItems;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorkItemTally>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_AllWorkItems_ElementProp = { "AllWorkItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_AllWorkItems = { "AllWorkItems", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorkItemTally, AllWorkItems), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllWorkItems_MetaData), NewProp_AllWorkItems_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_WaitingWorkItems_ElementProp = { "WaitingWorkItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_WaitingWorkItems = { "WaitingWorkItems", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorkItemTally, WaitingWorkItems), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaitingWorkItems_MetaData), NewProp_WaitingWorkItems_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ScheduledWorkItems_ElementProp = { "ScheduledWorkItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ScheduledWorkItems = { "ScheduledWorkItems", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorkItemTally, ScheduledWorkItems), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScheduledWorkItems_MetaData), NewProp_ScheduledWorkItems_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookingWorkItems_ElementProp = { "CookingWorkItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookingWorkItems = { "CookingWorkItems", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorkItemTally, CookingWorkItems), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CookingWorkItems_MetaData), NewProp_CookingWorkItems_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookedWorkItems_ElementProp = { "CookedWorkItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookedWorkItems = { "CookedWorkItems", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorkItemTally, CookedWorkItems), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CookedWorkItems_MetaData), NewProp_CookedWorkItems_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ErroredWorkItems_ElementProp = { "ErroredWorkItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ErroredWorkItems = { "ErroredWorkItems", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorkItemTally, ErroredWorkItems), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErroredWorkItems_MetaData), NewProp_ErroredWorkItems_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookCancelledWorkItems_ElementProp = { "CookCancelledWorkItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookCancelledWorkItems = { "CookCancelledWorkItems", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorkItemTally, CookCancelledWorkItems), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CookCancelledWorkItems_MetaData), NewProp_CookCancelledWorkItems_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorkItemTally_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_AllWorkItems_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_AllWorkItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_WaitingWorkItems_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_WaitingWorkItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ScheduledWorkItems_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ScheduledWorkItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookingWorkItems_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookingWorkItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookedWorkItems_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookedWorkItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ErroredWorkItems_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ErroredWorkItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookCancelledWorkItems_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookCancelledWorkItems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkItemTally_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	Z_Construct_UScriptStruct_FWorkItemTallyBase,
	&NewStructOps,
	"WorkItemTally",
	Z_Construct_UScriptStruct_FWorkItemTally_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkItemTally_Statics::PropPointers),
	sizeof(FWorkItemTally),
	alignof(FWorkItemTally),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkItemTally_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWorkItemTally_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWorkItemTally()
{
	if (!Z_Registration_Info_UScriptStruct_WorkItemTally.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorkItemTally.InnerSingleton, Z_Construct_UScriptStruct_FWorkItemTally_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WorkItemTally.InnerSingleton;
}
// End ScriptStruct FWorkItemTally

// Begin ScriptStruct FAggregatedWorkItemTally
static_assert(std::is_polymorphic<FAggregatedWorkItemTally>() == std::is_polymorphic<FWorkItemTallyBase>(), "USTRUCT FAggregatedWorkItemTally cannot be polymorphic unless super FWorkItemTallyBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AggregatedWorkItemTally;
class UScriptStruct* FAggregatedWorkItemTally::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AggregatedWorkItemTally.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AggregatedWorkItemTally.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAggregatedWorkItemTally, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("AggregatedWorkItemTally"));
	}
	return Z_Registration_Info_UScriptStruct_AggregatedWorkItemTally.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FAggregatedWorkItemTally>()
{
	return FAggregatedWorkItemTally::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaitingWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScheduledWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CookingWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CookedWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErroredWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CookCancelledWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalWorkItems;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WaitingWorkItems;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ScheduledWorkItems;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CookingWorkItems;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CookedWorkItems;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ErroredWorkItems;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CookCancelledWorkItems;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAggregatedWorkItemTally>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_TotalWorkItems = { "TotalWorkItems", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAggregatedWorkItemTally, TotalWorkItems), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalWorkItems_MetaData), NewProp_TotalWorkItems_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_WaitingWorkItems = { "WaitingWorkItems", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAggregatedWorkItemTally, WaitingWorkItems), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaitingWorkItems_MetaData), NewProp_WaitingWorkItems_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_ScheduledWorkItems = { "ScheduledWorkItems", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAggregatedWorkItemTally, ScheduledWorkItems), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScheduledWorkItems_MetaData), NewProp_ScheduledWorkItems_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_CookingWorkItems = { "CookingWorkItems", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAggregatedWorkItemTally, CookingWorkItems), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CookingWorkItems_MetaData), NewProp_CookingWorkItems_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_CookedWorkItems = { "CookedWorkItems", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAggregatedWorkItemTally, CookedWorkItems), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CookedWorkItems_MetaData), NewProp_CookedWorkItems_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_ErroredWorkItems = { "ErroredWorkItems", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAggregatedWorkItemTally, ErroredWorkItems), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErroredWorkItems_MetaData), NewProp_ErroredWorkItems_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_CookCancelledWorkItems = { "CookCancelledWorkItems", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAggregatedWorkItemTally, CookCancelledWorkItems), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CookCancelledWorkItems_MetaData), NewProp_CookCancelledWorkItems_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_TotalWorkItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_WaitingWorkItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_ScheduledWorkItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_CookingWorkItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_CookedWorkItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_ErroredWorkItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_CookCancelledWorkItems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	Z_Construct_UScriptStruct_FWorkItemTallyBase,
	&NewStructOps,
	"AggregatedWorkItemTally",
	Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::PropPointers),
	sizeof(FAggregatedWorkItemTally),
	alignof(FAggregatedWorkItemTally),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAggregatedWorkItemTally()
{
	if (!Z_Registration_Info_UScriptStruct_AggregatedWorkItemTally.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AggregatedWorkItemTally.InnerSingleton, Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AggregatedWorkItemTally.InnerSingleton;
}
// End ScriptStruct FAggregatedWorkItemTally

// Begin ScriptStruct FHoudiniPDGWorkResultObjectBakedOutput
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniPDGWorkResultObjectBakedOutput;
class UScriptStruct* FHoudiniPDGWorkResultObjectBakedOutput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniPDGWorkResultObjectBakedOutput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniPDGWorkResultObjectBakedOutput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniPDGWorkResultObjectBakedOutput"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniPDGWorkResultObjectBakedOutput.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniPDGWorkResultObjectBakedOutput>()
{
	return FHoudiniPDGWorkResultObjectBakedOutput::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Container for baked outputs of a PDG work result object. \n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Container for baked outputs of a PDG work result object." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakedOutputs_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Array of baked output per output index of the work result object's outputs.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of baked output per output index of the work result object's outputs." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BakedOutputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BakedOutputs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPDGWorkResultObjectBakedOutput>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::NewProp_BakedOutputs_Inner = { "BakedOutputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniBakedOutput, METADATA_PARAMS(0, nullptr) }; // 2551821974
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::NewProp_BakedOutputs = { "BakedOutputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPDGWorkResultObjectBakedOutput, BakedOutputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakedOutputs_MetaData), NewProp_BakedOutputs_MetaData) }; // 2551821974
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::NewProp_BakedOutputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::NewProp_BakedOutputs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniPDGWorkResultObjectBakedOutput",
	Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::PropPointers),
	sizeof(FHoudiniPDGWorkResultObjectBakedOutput),
	alignof(FHoudiniPDGWorkResultObjectBakedOutput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniPDGWorkResultObjectBakedOutput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniPDGWorkResultObjectBakedOutput.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniPDGWorkResultObjectBakedOutput.InnerSingleton;
}
// End ScriptStruct FHoudiniPDGWorkResultObjectBakedOutput

// Begin Class UTOPNode
void UTOPNode::StaticRegisterNativesUTOPNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTOPNode);
UClass* Z_Construct_UClass_UTOPNode_NoRegister()
{
	return UTOPNode::StaticClass();
}
struct Z_Construct_UClass_UTOPNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniPDGAssetLink.h" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeId_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodePath_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentName_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkResultParent_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkResult_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHidden_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hidden in the nodes combobox\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hidden in the nodes combobox" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoLoad_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeState_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCachedHaveNotLoadedWorkResults_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is set when the TOP node's work items are processed by\n// FHoudiniPDGManager based on if any NotLoaded work result objects are found\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is set when the TOP node's work items are processed by\nFHoudiniPDGManager based on if any NotLoaded work result objects are found" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCachedHaveLoadedWorkResults_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is set when the TOP node's work items are processed by\n// FHoudiniPDGManager based on if any Loaded work result objects are found\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is set when the TOP node's work items are processed by\nFHoudiniPDGManager based on if any Loaded work result objects are found" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasChildNodes_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// True if this node has child nodes\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if this node has child nodes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClearedLayers_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Keep track of cleared layers\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Keep track of cleared layers" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShow_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Visible in the level\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Visible in the level" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakedWorkResultObjectOutputs_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Map of [work_result_index]_[work_result_object_index] to the work result object's baked outputs. \n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map of [work_result_index]_[work_result_object_index] to the work result object's baked outputs." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkItemTally_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This node's own work items, used when bHasChildNodes is false.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This node's own work items, used when bHasChildNodes is false." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AggregatedWorkItemTally_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This node's aggregated work item tallys (sum of child work item tally, use when bHasChildNodes is true)\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This node's aggregated work item tallys (sum of child work item tally, use when bHasChildNodes is true)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasReceivedCookCompleteEvent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set to true when the node recieves HAPI_PDG_EVENT_COOK_COMPLETE event\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set to true when the node recieves HAPI_PDG_EVENT_COOK_COMPLETE event" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputActorOwner_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodeId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParentName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorkResultParent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorkResult_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WorkResult;
	static void NewProp_bHidden_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHidden;
	static void NewProp_bAutoLoad_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoLoad;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NodeState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NodeState;
	static void NewProp_bCachedHaveNotLoadedWorkResults_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCachedHaveNotLoadedWorkResults;
	static void NewProp_bCachedHaveLoadedWorkResults_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCachedHaveLoadedWorkResults;
	static void NewProp_bHasChildNodes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasChildNodes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClearedLayers;
	static void NewProp_bShow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShow;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BakedWorkResultObjectOutputs_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BakedWorkResultObjectOutputs_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BakedWorkResultObjectOutputs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorkItemTally;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AggregatedWorkItemTally;
	static void NewProp_bHasReceivedCookCompleteEvent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasReceivedCookCompleteEvent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputActorOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTOPNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000400002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTOPNode, NodeId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeId_MetaData), NewProp_NodeId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTOPNode, NodeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeName_MetaData), NewProp_NodeName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_NodePath = { "NodePath", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTOPNode, NodePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodePath_MetaData), NewProp_NodePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_ParentName = { "ParentName", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTOPNode, ParentName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentName_MetaData), NewProp_ParentName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkResultParent = { "WorkResultParent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTOPNode, WorkResultParent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkResultParent_MetaData), NewProp_WorkResultParent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkResult_Inner = { "WorkResult", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTOPWorkResult, METADATA_PARAMS(0, nullptr) }; // 1592188044
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkResult = { "WorkResult", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTOPNode, WorkResult), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkResult_MetaData), NewProp_WorkResult_MetaData) }; // 1592188044
void Z_Construct_UClass_UTOPNode_Statics::NewProp_bHidden_SetBit(void* Obj)
{
	((UTOPNode*)Obj)->bHidden = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_bHidden = { "bHidden", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTOPNode), &Z_Construct_UClass_UTOPNode_Statics::NewProp_bHidden_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHidden_MetaData), NewProp_bHidden_MetaData) };
void Z_Construct_UClass_UTOPNode_Statics::NewProp_bAutoLoad_SetBit(void* Obj)
{
	((UTOPNode*)Obj)->bAutoLoad = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_bAutoLoad = { "bAutoLoad", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTOPNode), &Z_Construct_UClass_UTOPNode_Statics::NewProp_bAutoLoad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoLoad_MetaData), NewProp_bAutoLoad_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeState = { "NodeState", nullptr, (EPropertyFlags)0x0010000400002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTOPNode, NodeState), Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeState_MetaData), NewProp_NodeState_MetaData) }; // 4179324218
void Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveNotLoadedWorkResults_SetBit(void* Obj)
{
	((UTOPNode*)Obj)->bCachedHaveNotLoadedWorkResults = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveNotLoadedWorkResults = { "bCachedHaveNotLoadedWorkResults", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTOPNode), &Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveNotLoadedWorkResults_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCachedHaveNotLoadedWorkResults_MetaData), NewProp_bCachedHaveNotLoadedWorkResults_MetaData) };
void Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveLoadedWorkResults_SetBit(void* Obj)
{
	((UTOPNode*)Obj)->bCachedHaveLoadedWorkResults = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveLoadedWorkResults = { "bCachedHaveLoadedWorkResults", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTOPNode), &Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveLoadedWorkResults_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCachedHaveLoadedWorkResults_MetaData), NewProp_bCachedHaveLoadedWorkResults_MetaData) };
void Z_Construct_UClass_UTOPNode_Statics::NewProp_bHasChildNodes_SetBit(void* Obj)
{
	((UTOPNode*)Obj)->bHasChildNodes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_bHasChildNodes = { "bHasChildNodes", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTOPNode), &Z_Construct_UClass_UTOPNode_Statics::NewProp_bHasChildNodes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasChildNodes_MetaData), NewProp_bHasChildNodes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_ClearedLayers = { "ClearedLayers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTOPNode, ClearedLayers), Z_Construct_UScriptStruct_FHoudiniClearedEditLayers, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClearedLayers_MetaData), NewProp_ClearedLayers_MetaData) }; // 1976386490
void Z_Construct_UClass_UTOPNode_Statics::NewProp_bShow_SetBit(void* Obj)
{
	((UTOPNode*)Obj)->bShow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_bShow = { "bShow", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTOPNode), &Z_Construct_UClass_UTOPNode_Statics::NewProp_bShow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShow_MetaData), NewProp_bShow_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_BakedWorkResultObjectOutputs_ValueProp = { "BakedWorkResultObjectOutputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput, METADATA_PARAMS(0, nullptr) }; // 4250397028
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_BakedWorkResultObjectOutputs_Key_KeyProp = { "BakedWorkResultObjectOutputs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_BakedWorkResultObjectOutputs = { "BakedWorkResultObjectOutputs", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTOPNode, BakedWorkResultObjectOutputs), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakedWorkResultObjectOutputs_MetaData), NewProp_BakedWorkResultObjectOutputs_MetaData) }; // 4250397028
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkItemTally = { "WorkItemTally", nullptr, (EPropertyFlags)0x0020080400002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTOPNode, WorkItemTally), Z_Construct_UScriptStruct_FWorkItemTally, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkItemTally_MetaData), NewProp_WorkItemTally_MetaData) }; // 1742525764
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_AggregatedWorkItemTally = { "AggregatedWorkItemTally", nullptr, (EPropertyFlags)0x0020080400002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTOPNode, AggregatedWorkItemTally), Z_Construct_UScriptStruct_FAggregatedWorkItemTally, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AggregatedWorkItemTally_MetaData), NewProp_AggregatedWorkItemTally_MetaData) }; // 4016110894
void Z_Construct_UClass_UTOPNode_Statics::NewProp_bHasReceivedCookCompleteEvent_SetBit(void* Obj)
{
	((UTOPNode*)Obj)->bHasReceivedCookCompleteEvent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_bHasReceivedCookCompleteEvent = { "bHasReceivedCookCompleteEvent", nullptr, (EPropertyFlags)0x0020080400002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTOPNode), &Z_Construct_UClass_UTOPNode_Statics::NewProp_bHasReceivedCookCompleteEvent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasReceivedCookCompleteEvent_MetaData), NewProp_bHasReceivedCookCompleteEvent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_OutputActorOwner = { "OutputActorOwner", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTOPNode, OutputActorOwner), Z_Construct_UScriptStruct_FOutputActorOwner, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputActorOwner_MetaData), NewProp_OutputActorOwner_MetaData) }; // 712688168
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTOPNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_NodePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_ParentName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkResultParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkResult_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_bHidden,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_bAutoLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveNotLoadedWorkResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveLoadedWorkResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_bHasChildNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_ClearedLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_bShow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_BakedWorkResultObjectOutputs_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_BakedWorkResultObjectOutputs_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_BakedWorkResultObjectOutputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkItemTally,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_AggregatedWorkItemTally,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_bHasReceivedCookCompleteEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_OutputActorOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTOPNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTOPNode_Statics::ClassParams = {
	&UTOPNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTOPNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UTOPNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTOPNode()
{
	if (!Z_Registration_Info_UClass_UTOPNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTOPNode.OuterSingleton, Z_Construct_UClass_UTOPNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTOPNode.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UTOPNode>()
{
	return UTOPNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTOPNode);
UTOPNode::~UTOPNode() {}
// End Class UTOPNode

// Begin Class UTOPNetwork
void UTOPNetwork::StaticRegisterNativesUTOPNetwork()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTOPNetwork);
UClass* Z_Construct_UClass_UTOPNetwork_NoRegister()
{
	return UTOPNetwork::StaticClass();
}
struct Z_Construct_UClass_UTOPNetwork_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniPDGAssetLink.h" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeId_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodePath_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// HAPI path to this node (relative to the HDA)\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HAPI path to this node (relative to the HDA)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllTOPNodes_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedTOPIndex_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// TODO: Should be using SelectedNodeName instead?\n// Index is not consistent after updating filter\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TODO: Should be using SelectedNodeName instead?\nIndex is not consistent after updating filter" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentName_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowResults_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoLoadResults_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodeId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodePath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllTOPNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllTOPNodes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedTOPIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParentName;
	static void NewProp_bShowResults_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowResults;
	static void NewProp_bAutoLoadResults_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoLoadResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTOPNetwork>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTOPNetwork_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000400002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTOPNetwork, NodeId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeId_MetaData), NewProp_NodeId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTOPNetwork_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTOPNetwork, NodeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeName_MetaData), NewProp_NodeName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTOPNetwork_Statics::NewProp_NodePath = { "NodePath", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTOPNetwork, NodePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodePath_MetaData), NewProp_NodePath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTOPNetwork_Statics::NewProp_AllTOPNodes_Inner = { "AllTOPNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTOPNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTOPNetwork_Statics::NewProp_AllTOPNodes = { "AllTOPNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTOPNetwork, AllTOPNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllTOPNodes_MetaData), NewProp_AllTOPNodes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTOPNetwork_Statics::NewProp_SelectedTOPIndex = { "SelectedTOPIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTOPNetwork, SelectedTOPIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedTOPIndex_MetaData), NewProp_SelectedTOPIndex_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTOPNetwork_Statics::NewProp_ParentName = { "ParentName", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTOPNetwork, ParentName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentName_MetaData), NewProp_ParentName_MetaData) };
void Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bShowResults_SetBit(void* Obj)
{
	((UTOPNetwork*)Obj)->bShowResults = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bShowResults = { "bShowResults", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTOPNetwork), &Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bShowResults_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowResults_MetaData), NewProp_bShowResults_MetaData) };
void Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bAutoLoadResults_SetBit(void* Obj)
{
	((UTOPNetwork*)Obj)->bAutoLoadResults = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bAutoLoadResults = { "bAutoLoadResults", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTOPNetwork), &Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bAutoLoadResults_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoLoadResults_MetaData), NewProp_bAutoLoadResults_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTOPNetwork_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNetwork_Statics::NewProp_NodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNetwork_Statics::NewProp_NodeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNetwork_Statics::NewProp_NodePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNetwork_Statics::NewProp_AllTOPNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNetwork_Statics::NewProp_AllTOPNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNetwork_Statics::NewProp_SelectedTOPIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNetwork_Statics::NewProp_ParentName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bShowResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bAutoLoadResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNetwork_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTOPNetwork_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNetwork_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTOPNetwork_Statics::ClassParams = {
	&UTOPNetwork::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTOPNetwork_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNetwork_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNetwork_Statics::Class_MetaDataParams), Z_Construct_UClass_UTOPNetwork_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTOPNetwork()
{
	if (!Z_Registration_Info_UClass_UTOPNetwork.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTOPNetwork.OuterSingleton, Z_Construct_UClass_UTOPNetwork_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTOPNetwork.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UTOPNetwork>()
{
	return UTOPNetwork::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTOPNetwork);
UTOPNetwork::~UTOPNetwork() {}
// End Class UTOPNetwork

// Begin Class UHoudiniPDGAssetLink
void UHoudiniPDGAssetLink::StaticRegisterNativesUHoudiniPDGAssetLink()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniPDGAssetLink);
UClass* Z_Construct_UClass_UHoudiniPDGAssetLink_NoRegister()
{
	return UHoudiniPDGAssetLink::StaticClass();
}
struct Z_Construct_UClass_UHoudiniPDGAssetLink_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniPDGAssetLink.h" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY()\n//UHoudiniAssetComponent*\x09\x09ParentHAC;\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY()\nUHoudiniAssetComponent*                ParentHAC;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetNodePath_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The full path to the HDA in HAPI\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The full path to the HDA in HAPI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetID_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllTOPNetworks_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedTOPNetworkIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkState_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCook_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseTOPNodeFilter_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseTOPOutputFilter_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TOPNodeFilter_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TOPOutputFilter_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkItemTally_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputCachePath_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNeedsUIRefresh_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputParentActor_MetaData[] = {
		{ "Category", "Output" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A parent actor to serve as the parent of any output actors\n// that are created.\n// If null, then output actors are created under a folder\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A parent actor to serve as the parent of any output actors\nthat are created.\nIf null, then output actors are created under a folder" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakeFolder_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Folder used for baking PDG outputs\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Folder used for baking PDG outputs" },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBakeMenuExpanded_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniEngineBakeOption_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// What kind of output to bake, for example, bake actors, bake to blueprint\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "What kind of output to bake, for example, bake actors, bake to blueprint" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PDGBakeSelectionOption_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Which outputs to bake, for example, all, selected network, selected node\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Which outputs to bake, for example, all, selected network, selected node" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PDGBakePackageReplaceMode_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This determines if the baked assets should replace existing assets with the same name,\n// or always generate new assets (with numerical suffixes if needed to create unique names)\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This determines if the baked assets should replace existing assets with the same name,\nor always generate new assets (with numerical suffixes if needed to create unique names)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRecenterBakedActors_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, recenter baked actors to their bounding box center after bake\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, recenter baked actors to their bounding box center after bake" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBakeAfterAllWorkResultObjectsLoaded_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Auto-bake: if this is true, it indicates that once all work result objects for the node is loaded they should\n// all be baked \n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Auto-bake: if this is true, it indicates that once all work result objects for the node is loaded they should\nall be baked" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoBakeNodesWithFailedWorkItems_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true then a TOP Node with failed work items will still have the successful items auto-baked.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true then a TOP Node with failed work items will still have the successful items auto-baked." },
#endif
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumAttemptedNodeAutoBakes_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The number of TOP nodes that have been attempted to be baked since the last time HandlePostBake has been called.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of TOP nodes that have been attempted to be baked since the last time HandlePostBake has been called." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSuccessfulNodeAutoBakes_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The number of TOP nodes that have been successfully baked since the last time HandlePostBake has been called.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of TOP nodes that have been successfully baked since the last time HandlePostBake has been called." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetNodePath;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AssetID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllTOPNetworks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllTOPNetworks;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedTOPNetworkIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LinkState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LinkState;
	static void NewProp_bAutoCook_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCook;
	static void NewProp_bUseTOPNodeFilter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTOPNodeFilter;
	static void NewProp_bUseTOPOutputFilter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTOPOutputFilter;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TOPNodeFilter;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TOPOutputFilter;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumWorkItems;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorkItemTally;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputCachePath;
	static void NewProp_bNeedsUIRefresh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedsUIRefresh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputParentActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BakeFolder;
#if WITH_EDITORONLY_DATA
	static void NewProp_bBakeMenuExpanded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBakeMenuExpanded;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HoudiniEngineBakeOption_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HoudiniEngineBakeOption;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PDGBakeSelectionOption_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PDGBakeSelectionOption;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PDGBakePackageReplaceMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PDGBakePackageReplaceMode;
	static void NewProp_bRecenterBakedActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecenterBakedActors;
	static void NewProp_bBakeAfterAllWorkResultObjectsLoaded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBakeAfterAllWorkResultObjectsLoaded;
	static void NewProp_bAutoBakeNodesWithFailedWorkItems_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoBakeNodesWithFailedWorkItems;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumAttemptedNodeAutoBakes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSuccessfulNodeAutoBakes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPDGAssetLink>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000400200000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, AssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetName_MetaData), NewProp_AssetName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AssetNodePath = { "AssetNodePath", nullptr, (EPropertyFlags)0x0010000400200000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, AssetNodePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetNodePath_MetaData), NewProp_AssetNodePath_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AssetID = { "AssetID", nullptr, (EPropertyFlags)0x0010000400200000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, AssetID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetID_MetaData), NewProp_AssetID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AllTOPNetworks_Inner = { "AllTOPNetworks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTOPNetwork_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AllTOPNetworks = { "AllTOPNetworks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, AllTOPNetworks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllTOPNetworks_MetaData), NewProp_AllTOPNetworks_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_SelectedTOPNetworkIndex = { "SelectedTOPNetworkIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, SelectedTOPNetworkIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedTOPNetworkIndex_MetaData), NewProp_SelectedTOPNetworkIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_LinkState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_LinkState = { "LinkState", nullptr, (EPropertyFlags)0x0010000400002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, LinkState), Z_Construct_UEnum_HoudiniEngineRuntime_EPDGLinkState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkState_MetaData), NewProp_LinkState_MetaData) }; // 2867013978
void Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bAutoCook_SetBit(void* Obj)
{
	((UHoudiniPDGAssetLink*)Obj)->bAutoCook = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bAutoCook = { "bAutoCook", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPDGAssetLink), &Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bAutoCook_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoCook_MetaData), NewProp_bAutoCook_MetaData) };
void Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPNodeFilter_SetBit(void* Obj)
{
	((UHoudiniPDGAssetLink*)Obj)->bUseTOPNodeFilter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPNodeFilter = { "bUseTOPNodeFilter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPDGAssetLink), &Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPNodeFilter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseTOPNodeFilter_MetaData), NewProp_bUseTOPNodeFilter_MetaData) };
void Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPOutputFilter_SetBit(void* Obj)
{
	((UHoudiniPDGAssetLink*)Obj)->bUseTOPOutputFilter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPOutputFilter = { "bUseTOPOutputFilter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPDGAssetLink), &Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPOutputFilter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseTOPOutputFilter_MetaData), NewProp_bUseTOPOutputFilter_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_TOPNodeFilter = { "TOPNodeFilter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, TOPNodeFilter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TOPNodeFilter_MetaData), NewProp_TOPNodeFilter_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_TOPOutputFilter = { "TOPOutputFilter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, TOPOutputFilter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TOPOutputFilter_MetaData), NewProp_TOPOutputFilter_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_NumWorkItems = { "NumWorkItems", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, NumWorkItems), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumWorkItems_MetaData), NewProp_NumWorkItems_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_WorkItemTally = { "WorkItemTally", nullptr, (EPropertyFlags)0x0010000400002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, WorkItemTally), Z_Construct_UScriptStruct_FAggregatedWorkItemTally, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkItemTally_MetaData), NewProp_WorkItemTally_MetaData) }; // 4016110894
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_OutputCachePath = { "OutputCachePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, OutputCachePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputCachePath_MetaData), NewProp_OutputCachePath_MetaData) };
void Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bNeedsUIRefresh_SetBit(void* Obj)
{
	((UHoudiniPDGAssetLink*)Obj)->bNeedsUIRefresh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bNeedsUIRefresh = { "bNeedsUIRefresh", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPDGAssetLink), &Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bNeedsUIRefresh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNeedsUIRefresh_MetaData), NewProp_bNeedsUIRefresh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_OutputParentActor = { "OutputParentActor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, OutputParentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputParentActor_MetaData), NewProp_OutputParentActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_BakeFolder = { "BakeFolder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, BakeFolder), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakeFolder_MetaData), NewProp_BakeFolder_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bBakeMenuExpanded_SetBit(void* Obj)
{
	((UHoudiniPDGAssetLink*)Obj)->bBakeMenuExpanded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bBakeMenuExpanded = { "bBakeMenuExpanded", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPDGAssetLink), &Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bBakeMenuExpanded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBakeMenuExpanded_MetaData), NewProp_bBakeMenuExpanded_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_HoudiniEngineBakeOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_HoudiniEngineBakeOption = { "HoudiniEngineBakeOption", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, HoudiniEngineBakeOption), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoudiniEngineBakeOption_MetaData), NewProp_HoudiniEngineBakeOption_MetaData) }; // 1204825035
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_PDGBakeSelectionOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_PDGBakeSelectionOption = { "PDGBakeSelectionOption", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, PDGBakeSelectionOption), Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakeSelectionOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PDGBakeSelectionOption_MetaData), NewProp_PDGBakeSelectionOption_MetaData) }; // 1558793176
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_PDGBakePackageReplaceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_PDGBakePackageReplaceMode = { "PDGBakePackageReplaceMode", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, PDGBakePackageReplaceMode), Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakePackageReplaceModeOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PDGBakePackageReplaceMode_MetaData), NewProp_PDGBakePackageReplaceMode_MetaData) }; // 1363337547
void Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bRecenterBakedActors_SetBit(void* Obj)
{
	((UHoudiniPDGAssetLink*)Obj)->bRecenterBakedActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bRecenterBakedActors = { "bRecenterBakedActors", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPDGAssetLink), &Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bRecenterBakedActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRecenterBakedActors_MetaData), NewProp_bRecenterBakedActors_MetaData) };
void Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bBakeAfterAllWorkResultObjectsLoaded_SetBit(void* Obj)
{
	((UHoudiniPDGAssetLink*)Obj)->bBakeAfterAllWorkResultObjectsLoaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bBakeAfterAllWorkResultObjectsLoaded = { "bBakeAfterAllWorkResultObjectsLoaded", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPDGAssetLink), &Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bBakeAfterAllWorkResultObjectsLoaded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBakeAfterAllWorkResultObjectsLoaded_MetaData), NewProp_bBakeAfterAllWorkResultObjectsLoaded_MetaData) };
void Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bAutoBakeNodesWithFailedWorkItems_SetBit(void* Obj)
{
	((UHoudiniPDGAssetLink*)Obj)->bAutoBakeNodesWithFailedWorkItems = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bAutoBakeNodesWithFailedWorkItems = { "bAutoBakeNodesWithFailedWorkItems", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPDGAssetLink), &Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bAutoBakeNodesWithFailedWorkItems_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoBakeNodesWithFailedWorkItems_MetaData), NewProp_bAutoBakeNodesWithFailedWorkItems_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_NumAttemptedNodeAutoBakes = { "NumAttemptedNodeAutoBakes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, NumAttemptedNodeAutoBakes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumAttemptedNodeAutoBakes_MetaData), NewProp_NumAttemptedNodeAutoBakes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_NumSuccessfulNodeAutoBakes = { "NumSuccessfulNodeAutoBakes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, NumSuccessfulNodeAutoBakes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSuccessfulNodeAutoBakes_MetaData), NewProp_NumSuccessfulNodeAutoBakes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AssetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AssetNodePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AssetID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AllTOPNetworks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AllTOPNetworks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_SelectedTOPNetworkIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_LinkState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_LinkState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bAutoCook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPNodeFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPOutputFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_TOPNodeFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_TOPOutputFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_NumWorkItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_WorkItemTally,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_OutputCachePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bNeedsUIRefresh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_OutputParentActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_BakeFolder,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bBakeMenuExpanded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_HoudiniEngineBakeOption_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_HoudiniEngineBakeOption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_PDGBakeSelectionOption_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_PDGBakeSelectionOption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_PDGBakePackageReplaceMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_PDGBakePackageReplaceMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bRecenterBakedActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bBakeAfterAllWorkResultObjectsLoaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bAutoBakeNodesWithFailedWorkItems,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_NumAttemptedNodeAutoBakes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_NumSuccessfulNodeAutoBakes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::ClassParams = {
	&UHoudiniPDGAssetLink::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniPDGAssetLink()
{
	if (!Z_Registration_Info_UClass_UHoudiniPDGAssetLink.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPDGAssetLink.OuterSingleton, Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniPDGAssetLink.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniPDGAssetLink>()
{
	return UHoudiniPDGAssetLink::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPDGAssetLink);
UHoudiniPDGAssetLink::~UHoudiniPDGAssetLink() {}
// End Class UHoudiniPDGAssetLink

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPDGLinkState_StaticEnum, TEXT("EPDGLinkState"), &Z_Registration_Info_UEnum_EPDGLinkState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2867013978U) },
		{ EPDGNodeState_StaticEnum, TEXT("EPDGNodeState"), &Z_Registration_Info_UEnum_EPDGNodeState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4179324218U) },
		{ EPDGWorkResultState_StaticEnum, TEXT("EPDGWorkResultState"), &Z_Registration_Info_UEnum_EPDGWorkResultState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3130987196U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOutputActorOwner::StaticStruct, Z_Construct_UScriptStruct_FOutputActorOwner_Statics::NewStructOps, TEXT("OutputActorOwner"), &Z_Registration_Info_UScriptStruct_OutputActorOwner, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOutputActorOwner), 712688168U) },
		{ FTOPWorkResultObject::StaticStruct, Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewStructOps, TEXT("TOPWorkResultObject"), &Z_Registration_Info_UScriptStruct_TOPWorkResultObject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTOPWorkResultObject), 4073636573U) },
		{ FTOPWorkResult::StaticStruct, Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewStructOps, TEXT("TOPWorkResult"), &Z_Registration_Info_UScriptStruct_TOPWorkResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTOPWorkResult), 1592188044U) },
		{ FWorkItemTallyBase::StaticStruct, Z_Construct_UScriptStruct_FWorkItemTallyBase_Statics::NewStructOps, TEXT("WorkItemTallyBase"), &Z_Registration_Info_UScriptStruct_WorkItemTallyBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorkItemTallyBase), 2548878141U) },
		{ FWorkItemTally::StaticStruct, Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewStructOps, TEXT("WorkItemTally"), &Z_Registration_Info_UScriptStruct_WorkItemTally, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorkItemTally), 1742525764U) },
		{ FAggregatedWorkItemTally::StaticStruct, Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewStructOps, TEXT("AggregatedWorkItemTally"), &Z_Registration_Info_UScriptStruct_AggregatedWorkItemTally, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAggregatedWorkItemTally), 4016110894U) },
		{ FHoudiniPDGWorkResultObjectBakedOutput::StaticStruct, Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::NewStructOps, TEXT("HoudiniPDGWorkResultObjectBakedOutput"), &Z_Registration_Info_UScriptStruct_HoudiniPDGWorkResultObjectBakedOutput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniPDGWorkResultObjectBakedOutput), 4250397028U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTOPNode, UTOPNode::StaticClass, TEXT("UTOPNode"), &Z_Registration_Info_UClass_UTOPNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTOPNode), 77021080U) },
		{ Z_Construct_UClass_UTOPNetwork, UTOPNetwork::StaticClass, TEXT("UTOPNetwork"), &Z_Registration_Info_UClass_UTOPNetwork, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTOPNetwork), 1395235239U) },
		{ Z_Construct_UClass_UHoudiniPDGAssetLink, UHoudiniPDGAssetLink::StaticClass, TEXT("UHoudiniPDGAssetLink"), &Z_Registration_Info_UClass_UHoudiniPDGAssetLink, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPDGAssetLink), 4210579553U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_2920296408(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
