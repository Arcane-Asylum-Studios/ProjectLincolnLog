// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineEditor/Public/HoudiniPublicAPI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniPublicAPI() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPI();
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPI_NoRegister();
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_NoRegister();
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIInput_NoRegister();
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIObjectBase();
HOUDINIENGINEEDITOR_API UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPIRampInterpolationType();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAsset_NoRegister();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor();
// End Cross Module References

// Begin Enum EHoudiniPublicAPIRampInterpolationType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniPublicAPIRampInterpolationType;
static UEnum* EHoudiniPublicAPIRampInterpolationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniPublicAPIRampInterpolationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniPublicAPIRampInterpolationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPIRampInterpolationType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("EHoudiniPublicAPIRampInterpolationType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniPublicAPIRampInterpolationType.OuterSingleton;
}
template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniPublicAPIRampInterpolationType>()
{
	return EHoudiniPublicAPIRampInterpolationType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPIRampInterpolationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BEZIER.Name", "EHoudiniPublicAPIRampInterpolationType::BEZIER" },
		{ "BlueprintType", "true" },
		{ "BSPLINE.Name", "EHoudiniPublicAPIRampInterpolationType::BSPLINE" },
		{ "CATMULL_ROM.Name", "EHoudiniPublicAPIRampInterpolationType::CATMULL_ROM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Public API version of EHoudiniRampInterpolationType: blueprints do not support int8 based enums. */" },
#endif
		{ "CONSTANT.Name", "EHoudiniPublicAPIRampInterpolationType::CONSTANT" },
		{ "HERMITE.Name", "EHoudiniPublicAPIRampInterpolationType::HERMITE" },
		{ "InValid.Name", "EHoudiniPublicAPIRampInterpolationType::InValid" },
		{ "LINEAR.Name", "EHoudiniPublicAPIRampInterpolationType::LINEAR" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPI.h" },
		{ "MONOTONE_CUBIC.Name", "EHoudiniPublicAPIRampInterpolationType::MONOTONE_CUBIC" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Public API version of EHoudiniRampInterpolationType: blueprints do not support int8 based enums." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniPublicAPIRampInterpolationType::InValid", (int64)EHoudiniPublicAPIRampInterpolationType::InValid },
		{ "EHoudiniPublicAPIRampInterpolationType::CONSTANT", (int64)EHoudiniPublicAPIRampInterpolationType::CONSTANT },
		{ "EHoudiniPublicAPIRampInterpolationType::LINEAR", (int64)EHoudiniPublicAPIRampInterpolationType::LINEAR },
		{ "EHoudiniPublicAPIRampInterpolationType::CATMULL_ROM", (int64)EHoudiniPublicAPIRampInterpolationType::CATMULL_ROM },
		{ "EHoudiniPublicAPIRampInterpolationType::MONOTONE_CUBIC", (int64)EHoudiniPublicAPIRampInterpolationType::MONOTONE_CUBIC },
		{ "EHoudiniPublicAPIRampInterpolationType::BEZIER", (int64)EHoudiniPublicAPIRampInterpolationType::BEZIER },
		{ "EHoudiniPublicAPIRampInterpolationType::BSPLINE", (int64)EHoudiniPublicAPIRampInterpolationType::BSPLINE },
		{ "EHoudiniPublicAPIRampInterpolationType::HERMITE", (int64)EHoudiniPublicAPIRampInterpolationType::HERMITE },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPIRampInterpolationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
	nullptr,
	"EHoudiniPublicAPIRampInterpolationType",
	"EHoudiniPublicAPIRampInterpolationType",
	Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPIRampInterpolationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPIRampInterpolationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPIRampInterpolationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPIRampInterpolationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPIRampInterpolationType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniPublicAPIRampInterpolationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniPublicAPIRampInterpolationType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPIRampInterpolationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniPublicAPIRampInterpolationType.InnerSingleton;
}
// End Enum EHoudiniPublicAPIRampInterpolationType

// Begin Class UHoudiniPublicAPI Function CreateEmptyInput
struct HoudiniPublicAPI_eventCreateEmptyInput_Parms
{
	TSubclassOf<UHoudiniPublicAPIInput> InInputClass;
	UObject* InOuter;
	UHoudiniPublicAPIInput* ReturnValue;

	/** Constructor, initializes return property only **/
	HoudiniPublicAPI_eventCreateEmptyInput_Parms()
		: ReturnValue(NULL)
	{
	}
};
static FName NAME_UHoudiniPublicAPI_CreateEmptyInput = FName(TEXT("CreateEmptyInput"));
UHoudiniPublicAPIInput* UHoudiniPublicAPI::CreateEmptyInput(TSubclassOf<UHoudiniPublicAPIInput> InInputClass, UObject* InOuter)
{
	HoudiniPublicAPI_eventCreateEmptyInput_Parms Parms;
	Parms.InInputClass=InInputClass;
	Parms.InOuter=InOuter;
	ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPI_CreateEmptyInput),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UHoudiniPublicAPI_CreateEmptyInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Create a new empty API input object. The user must populate it and then set it as an input on an asset wrapper.\n\x09 * @param InInputClass The class of the input to create, must be a subclass of UHoudiniPublicAPIInput.\n\x09 * @param InOuter The owner of the input, if nullptr, then this API instance will be set as the outer.\n\x09 * @return The newly created empty input object instance.\n\x09 */" },
#endif
		{ "CPP_Default_InOuter", "None" },
		{ "DeterminesOutputType", "InInputClass" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create a new empty API input object. The user must populate it and then set it as an input on an asset wrapper.\n@param InInputClass The class of the input to create, must be a subclass of UHoudiniPublicAPIInput.\n@param InOuter The owner of the input, if nullptr, then this API instance will be set as the outer.\n@return The newly created empty input object instance." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InInputClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InOuter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UHoudiniPublicAPI_CreateEmptyInput_Statics::NewProp_InInputClass = { "InInputClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPublicAPI_eventCreateEmptyInput_Parms, InInputClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UHoudiniPublicAPIInput_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPI_CreateEmptyInput_Statics::NewProp_InOuter = { "InOuter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPublicAPI_eventCreateEmptyInput_Parms, InOuter), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPI_CreateEmptyInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPublicAPI_eventCreateEmptyInput_Parms, ReturnValue), Z_Construct_UClass_UHoudiniPublicAPIInput_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPI_CreateEmptyInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPI_CreateEmptyInput_Statics::NewProp_InInputClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPI_CreateEmptyInput_Statics::NewProp_InOuter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPI_CreateEmptyInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPI_CreateEmptyInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPI_CreateEmptyInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPI, nullptr, "CreateEmptyInput", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPublicAPI_CreateEmptyInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPI_CreateEmptyInput_Statics::PropPointers), sizeof(HoudiniPublicAPI_eventCreateEmptyInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPI_CreateEmptyInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPublicAPI_CreateEmptyInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(HoudiniPublicAPI_eventCreateEmptyInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoudiniPublicAPI_CreateEmptyInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPI_CreateEmptyInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoudiniPublicAPI::execCreateEmptyInput)
{
	P_GET_OBJECT(UClass,Z_Param_InInputClass);
	P_GET_OBJECT(UObject,Z_Param_InOuter);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UHoudiniPublicAPIInput**)Z_Param__Result=P_THIS->CreateEmptyInput_Implementation(Z_Param_InInputClass,Z_Param_InOuter);
	P_NATIVE_END;
}
// End Class UHoudiniPublicAPI Function CreateEmptyInput

// Begin Class UHoudiniPublicAPI Function CreateSession
static FName NAME_UHoudiniPublicAPI_CreateSession = FName(TEXT("CreateSession"));
void UHoudiniPublicAPI::CreateSession()
{
	ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPI_CreateSession),NULL);
}
struct Z_Construct_UFunction_UHoudiniPublicAPI_CreateSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Start a new Houdini Engine Session if there is no current session */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start a new Houdini Engine Session if there is no current session" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPI_CreateSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPI, nullptr, "CreateSession", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPI_CreateSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPublicAPI_CreateSession_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHoudiniPublicAPI_CreateSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPI_CreateSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoudiniPublicAPI::execCreateSession)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateSession_Implementation();
	P_NATIVE_END;
}
// End Class UHoudiniPublicAPI Function CreateSession

// Begin Class UHoudiniPublicAPI Function InstantiateAsset
struct HoudiniPublicAPI_eventInstantiateAsset_Parms
{
	UHoudiniAsset* InHoudiniAsset;
	FTransform InInstantiateAt;
	UObject* InWorldContextObject;
	ULevel* InSpawnInLevelOverride;
	bool bInEnableAutoCook;
	bool bInEnableAutoBake;
	FString InBakeDirectoryPath;
	EHoudiniEngineBakeOption InBakeMethod;
	bool bInRemoveOutputAfterBake;
	bool bInRecenterBakedActors;
	bool bInReplacePreviousBake;
	UHoudiniPublicAPIAssetWrapper* ReturnValue;

	/** Constructor, initializes return property only **/
	HoudiniPublicAPI_eventInstantiateAsset_Parms()
		: ReturnValue(NULL)
	{
	}
};
static FName NAME_UHoudiniPublicAPI_InstantiateAsset = FName(TEXT("InstantiateAsset"));
UHoudiniPublicAPIAssetWrapper* UHoudiniPublicAPI::InstantiateAsset(UHoudiniAsset* InHoudiniAsset, FTransform const& InInstantiateAt, UObject* InWorldContextObject, ULevel* InSpawnInLevelOverride, bool bInEnableAutoCook, bool bInEnableAutoBake, const FString& InBakeDirectoryPath, const EHoudiniEngineBakeOption InBakeMethod, bool bInRemoveOutputAfterBake, bool bInRecenterBakedActors, bool bInReplacePreviousBake)
{
	HoudiniPublicAPI_eventInstantiateAsset_Parms Parms;
	Parms.InHoudiniAsset=InHoudiniAsset;
	Parms.InInstantiateAt=InInstantiateAt;
	Parms.InWorldContextObject=InWorldContextObject;
	Parms.InSpawnInLevelOverride=InSpawnInLevelOverride;
	Parms.bInEnableAutoCook=bInEnableAutoCook ? true : false;
	Parms.bInEnableAutoBake=bInEnableAutoBake ? true : false;
	Parms.InBakeDirectoryPath=InBakeDirectoryPath;
	Parms.InBakeMethod=InBakeMethod;
	Parms.bInRemoveOutputAfterBake=bInRemoveOutputAfterBake ? true : false;
	Parms.bInRecenterBakedActors=bInRecenterBakedActors ? true : false;
	Parms.bInReplacePreviousBake=bInReplacePreviousBake ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPI_InstantiateAsset),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "InInstantiateAt" },
		{ "Category", "Houdini|Public API" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Instantiates an HDA in the specified world/level. Returns a wrapper for instantiated asset.\n\x09 *\n\x09 * Note: the lifecycle / ownership of the UHoudiniPublicAPIAssetWrapper* that is created and returned is not managed\n\x09 * by the public API after creation, the caller must, for example, use a UProperty to prevent garbage collection of\n\x09 * the wrapper if desired.\n\x09 * \n\x09 * @param InHoudiniAsset The HDA to instantiate.\n\x09 * @param InInstantiateAt The Transform to instantiate the HDA with.\n\x09 * @param InWorldContextObject A world context object for identifying the world to spawn in, if\n\x09 * @InSpawnInLevelOverride is null.\n\x09 * @param InSpawnInLevelOverride If not nullptr, then the AHoudiniAssetActor is spawned in that level. If both\n\x09 * InSpawnInLevelOverride and InWorldContextObject are null, then the actor is spawned in the current editor\n\x09 * context world's current level.\n\x09 * @param bInEnableAutoCook If true (the default) the HDA will cook automatically after instantiation and after\n\x09 * parameter, transform and input changes.\n\x09 * @param bInEnableAutoBake If true, the HDA output is automatically baked after a cook. Defaults to false.\n\x09 * @param InBakeDirectoryPath The directory to bake to if the bake path is not set via attributes on the HDA output.\n\x09 * @param InBakeMethod The bake target (to actor vs blueprint). @see EHoudiniEngineBakeOption.\n\x09 * @param bInRemoveOutputAfterBake If true, HDA temporary outputs are removed after a bake. Defaults to false.\n\x09 * @param bInRecenterBakedActors Recenter the baked actors to their bounding box center. Defaults to false.\n\x09 * @param bInReplacePreviousBake If true, on every bake replace the previous bake's output (assets + actors) with\n\x09 * the new bake's output. Defaults to false.\n\x09 * @return A wrapper for the instantiated asset, or nullptr if InHoudiniAsset or InInstantiateAt is invalid, or\n\x09 * the AHoudiniAssetActor could not be spawned. See UHoudiniPublicAPIAssetWrapper.\n\x09 */" },
#endif
		{ "CPP_Default_bInEnableAutoBake", "false" },
		{ "CPP_Default_bInEnableAutoCook", "true" },
		{ "CPP_Default_bInRecenterBakedActors", "false" },
		{ "CPP_Default_bInRemoveOutputAfterBake", "false" },
		{ "CPP_Default_bInReplacePreviousBake", "false" },
		{ "CPP_Default_InBakeDirectoryPath", "" },
		{ "CPP_Default_InBakeMethod", "ToActor" },
		{ "CPP_Default_InSpawnInLevelOverride", "None" },
		{ "CPP_Default_InWorldContextObject", "None" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instantiates an HDA in the specified world/level. Returns a wrapper for instantiated asset.\n\nNote: the lifecycle / ownership of the UHoudiniPublicAPIAssetWrapper* that is created and returned is not managed\nby the public API after creation, the caller must, for example, use a UProperty to prevent garbage collection of\nthe wrapper if desired.\n\n@param InHoudiniAsset The HDA to instantiate.\n@param InInstantiateAt The Transform to instantiate the HDA with.\n@param InWorldContextObject A world context object for identifying the world to spawn in, if\n@InSpawnInLevelOverride is null.\n@param InSpawnInLevelOverride If not nullptr, then the AHoudiniAssetActor is spawned in that level. If both\nInSpawnInLevelOverride and InWorldContextObject are null, then the actor is spawned in the current editor\ncontext world's current level.\n@param bInEnableAutoCook If true (the default) the HDA will cook automatically after instantiation and after\nparameter, transform and input changes.\n@param bInEnableAutoBake If true, the HDA output is automatically baked after a cook. Defaults to false.\n@param InBakeDirectoryPath The directory to bake to if the bake path is not set via attributes on the HDA output.\n@param InBakeMethod The bake target (to actor vs blueprint). @see EHoudiniEngineBakeOption.\n@param bInRemoveOutputAfterBake If true, HDA temporary outputs are removed after a bake. Defaults to false.\n@param bInRecenterBakedActors Recenter the baked actors to their bounding box center. Defaults to false.\n@param bInReplacePreviousBake If true, on every bake replace the previous bake's output (assets + actors) with\nthe new bake's output. Defaults to false.\n@return A wrapper for the instantiated asset, or nullptr if InHoudiniAsset or InInstantiateAt is invalid, or\nthe AHoudiniAssetActor could not be spawned. See UHoudiniPublicAPIAssetWrapper." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InInstantiateAt_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInEnableAutoCook_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInEnableAutoBake_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBakeDirectoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBakeMethod_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInRemoveOutputAfterBake_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInRecenterBakedActors_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInReplacePreviousBake_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InHoudiniAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InInstantiateAt;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InWorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSpawnInLevelOverride;
	static void NewProp_bInEnableAutoCook_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnableAutoCook;
	static void NewProp_bInEnableAutoBake_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnableAutoBake;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InBakeDirectoryPath;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InBakeMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InBakeMethod;
	static void NewProp_bInRemoveOutputAfterBake_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInRemoveOutputAfterBake;
	static void NewProp_bInRecenterBakedActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInRecenterBakedActors;
	static void NewProp_bInReplacePreviousBake_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInReplacePreviousBake;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::NewProp_InHoudiniAsset = { "InHoudiniAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPublicAPI_eventInstantiateAsset_Parms, InHoudiniAsset), Z_Construct_UClass_UHoudiniAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::NewProp_InInstantiateAt = { "InInstantiateAt", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPublicAPI_eventInstantiateAsset_Parms, InInstantiateAt), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InInstantiateAt_MetaData), NewProp_InInstantiateAt_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::NewProp_InWorldContextObject = { "InWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPublicAPI_eventInstantiateAsset_Parms, InWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::NewProp_InSpawnInLevelOverride = { "InSpawnInLevelOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPublicAPI_eventInstantiateAsset_Parms, InSpawnInLevelOverride), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::NewProp_bInEnableAutoCook_SetBit(void* Obj)
{
	((HoudiniPublicAPI_eventInstantiateAsset_Parms*)Obj)->bInEnableAutoCook = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::NewProp_bInEnableAutoCook = { "bInEnableAutoCook", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPublicAPI_eventInstantiateAsset_Parms), &Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::NewProp_bInEnableAutoCook_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInEnableAutoCook_MetaData), NewProp_bInEnableAutoCook_MetaData) };
void Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::NewProp_bInEnableAutoBake_SetBit(void* Obj)
{
	((HoudiniPublicAPI_eventInstantiateAsset_Parms*)Obj)->bInEnableAutoBake = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::NewProp_bInEnableAutoBake = { "bInEnableAutoBake", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPublicAPI_eventInstantiateAsset_Parms), &Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::NewProp_bInEnableAutoBake_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInEnableAutoBake_MetaData), NewProp_bInEnableAutoBake_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::NewProp_InBakeDirectoryPath = { "InBakeDirectoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPublicAPI_eventInstantiateAsset_Parms, InBakeDirectoryPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBakeDirectoryPath_MetaData), NewProp_InBakeDirectoryPath_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::NewProp_InBakeMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::NewProp_InBakeMethod = { "InBakeMethod", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPublicAPI_eventInstantiateAsset_Parms, InBakeMethod), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBakeMethod_MetaData), NewProp_InBakeMethod_MetaData) }; // 1204825035
void Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::NewProp_bInRemoveOutputAfterBake_SetBit(void* Obj)
{
	((HoudiniPublicAPI_eventInstantiateAsset_Parms*)Obj)->bInRemoveOutputAfterBake = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::NewProp_bInRemoveOutputAfterBake = { "bInRemoveOutputAfterBake", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPublicAPI_eventInstantiateAsset_Parms), &Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::NewProp_bInRemoveOutputAfterBake_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInRemoveOutputAfterBake_MetaData), NewProp_bInRemoveOutputAfterBake_MetaData) };
void Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::NewProp_bInRecenterBakedActors_SetBit(void* Obj)
{
	((HoudiniPublicAPI_eventInstantiateAsset_Parms*)Obj)->bInRecenterBakedActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::NewProp_bInRecenterBakedActors = { "bInRecenterBakedActors", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPublicAPI_eventInstantiateAsset_Parms), &Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::NewProp_bInRecenterBakedActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInRecenterBakedActors_MetaData), NewProp_bInRecenterBakedActors_MetaData) };
void Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::NewProp_bInReplacePreviousBake_SetBit(void* Obj)
{
	((HoudiniPublicAPI_eventInstantiateAsset_Parms*)Obj)->bInReplacePreviousBake = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::NewProp_bInReplacePreviousBake = { "bInReplacePreviousBake", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPublicAPI_eventInstantiateAsset_Parms), &Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::NewProp_bInReplacePreviousBake_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInReplacePreviousBake_MetaData), NewProp_bInReplacePreviousBake_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPublicAPI_eventInstantiateAsset_Parms, ReturnValue), Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::NewProp_InHoudiniAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::NewProp_InInstantiateAt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::NewProp_InWorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::NewProp_InSpawnInLevelOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::NewProp_bInEnableAutoCook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::NewProp_bInEnableAutoBake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::NewProp_InBakeDirectoryPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::NewProp_InBakeMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::NewProp_InBakeMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::NewProp_bInRemoveOutputAfterBake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::NewProp_bInRecenterBakedActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::NewProp_bInReplacePreviousBake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPI, nullptr, "InstantiateAsset", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::PropPointers), sizeof(HoudiniPublicAPI_eventInstantiateAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(HoudiniPublicAPI_eventInstantiateAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoudiniPublicAPI::execInstantiateAsset)
{
	P_GET_OBJECT(UHoudiniAsset,Z_Param_InHoudiniAsset);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_InInstantiateAt);
	P_GET_OBJECT(UObject,Z_Param_InWorldContextObject);
	P_GET_OBJECT(ULevel,Z_Param_InSpawnInLevelOverride);
	P_GET_UBOOL(Z_Param_bInEnableAutoCook);
	P_GET_UBOOL(Z_Param_bInEnableAutoBake);
	P_GET_PROPERTY(FStrProperty,Z_Param_InBakeDirectoryPath);
	P_GET_ENUM(EHoudiniEngineBakeOption,Z_Param_InBakeMethod);
	P_GET_UBOOL(Z_Param_bInRemoveOutputAfterBake);
	P_GET_UBOOL(Z_Param_bInRecenterBakedActors);
	P_GET_UBOOL(Z_Param_bInReplacePreviousBake);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UHoudiniPublicAPIAssetWrapper**)Z_Param__Result=P_THIS->InstantiateAsset_Implementation(Z_Param_InHoudiniAsset,Z_Param_Out_InInstantiateAt,Z_Param_InWorldContextObject,Z_Param_InSpawnInLevelOverride,Z_Param_bInEnableAutoCook,Z_Param_bInEnableAutoBake,Z_Param_InBakeDirectoryPath,EHoudiniEngineBakeOption(Z_Param_InBakeMethod),Z_Param_bInRemoveOutputAfterBake,Z_Param_bInRecenterBakedActors,Z_Param_bInReplacePreviousBake);
	P_NATIVE_END;
}
// End Class UHoudiniPublicAPI Function InstantiateAsset

// Begin Class UHoudiniPublicAPI Function InstantiateAssetWithExistingWrapper
struct HoudiniPublicAPI_eventInstantiateAssetWithExistingWrapper_Parms
{
	UHoudiniPublicAPIAssetWrapper* InWrapper;
	UHoudiniAsset* InHoudiniAsset;
	FTransform InInstantiateAt;
	UObject* InWorldContextObject;
	ULevel* InSpawnInLevelOverride;
	bool bInEnableAutoCook;
	bool bInEnableAutoBake;
	FString InBakeDirectoryPath;
	EHoudiniEngineBakeOption InBakeMethod;
	bool bInRemoveOutputAfterBake;
	bool bInRecenterBakedActors;
	bool bInReplacePreviousBake;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	HoudiniPublicAPI_eventInstantiateAssetWithExistingWrapper_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper = FName(TEXT("InstantiateAssetWithExistingWrapper"));
bool UHoudiniPublicAPI::InstantiateAssetWithExistingWrapper(UHoudiniPublicAPIAssetWrapper* InWrapper, UHoudiniAsset* InHoudiniAsset, FTransform const& InInstantiateAt, UObject* InWorldContextObject, ULevel* InSpawnInLevelOverride, bool bInEnableAutoCook, bool bInEnableAutoBake, const FString& InBakeDirectoryPath, const EHoudiniEngineBakeOption InBakeMethod, bool bInRemoveOutputAfterBake, bool bInRecenterBakedActors, bool bInReplacePreviousBake)
{
	HoudiniPublicAPI_eventInstantiateAssetWithExistingWrapper_Parms Parms;
	Parms.InWrapper=InWrapper;
	Parms.InHoudiniAsset=InHoudiniAsset;
	Parms.InInstantiateAt=InInstantiateAt;
	Parms.InWorldContextObject=InWorldContextObject;
	Parms.InSpawnInLevelOverride=InSpawnInLevelOverride;
	Parms.bInEnableAutoCook=bInEnableAutoCook ? true : false;
	Parms.bInEnableAutoBake=bInEnableAutoBake ? true : false;
	Parms.InBakeDirectoryPath=InBakeDirectoryPath;
	Parms.InBakeMethod=InBakeMethod;
	Parms.bInRemoveOutputAfterBake=bInRemoveOutputAfterBake ? true : false;
	Parms.bInRecenterBakedActors=bInRecenterBakedActors ? true : false;
	Parms.bInReplacePreviousBake=bInReplacePreviousBake ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "InInstantiateAt" },
		{ "Category", "Houdini|Public API" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Instantiates an HDA in the specified world/level using an existing wrapper.\n\x09 * @param InWrapper The wrapper to instantiate the HDA with.\n\x09 * @param InHoudiniAsset The HDA to instantiate.\n\x09 * @param InInstantiateAt The Transform to instantiate the HDA with.\n\x09 * @param InWorldContextObject A world context object for identifying the world to spawn in, if\n\x09 * InSpawnInLevelOverride is null.\n\x09 * @param InSpawnInLevelOverride If not nullptr, then the AHoudiniAssetActor is spawned in that level. If both\n\x09 * InSpawnInLevelOverride and InWorldContextObject are null, then the actor is spawned in the current editor\n\x09 * context world's current level.\n\x09 * @param bInEnableAutoCook If true (the default) the HDA will cook automatically after instantiation and after\n\x09 * parameter, transform and input changes.\n\x09 * @param bInEnableAutoBake If true, the HDA output is automatically baked after a cook. Defaults to false.\n\x09 * @param InBakeDirectoryPath The directory to bake to if the bake path is not set via attributes on the HDA output.\n\x09 * @param InBakeMethod The bake target (to actor vs blueprint). @see EHoudiniEngineBakeOption.\n\x09 * @param bInRemoveOutputAfterBake If true, HDA temporary outputs are removed after a bake. Defaults to false.\n\x09 * @param bInRecenterBakedActors Recenter the baked actors to their bounding box center. Defaults to false.\n\x09 * @param bInReplacePreviousBake If true, on every bake replace the previous bake's output (assets + actors) with\n\x09 * the new bake's output. Defaults to false.\n\x09 * @return true if InWrapper and InHoudiniAsset is valid and the AHoudiniAssetActor was spawned.\n\x09 */" },
#endif
		{ "CPP_Default_bInEnableAutoBake", "false" },
		{ "CPP_Default_bInEnableAutoCook", "true" },
		{ "CPP_Default_bInRecenterBakedActors", "false" },
		{ "CPP_Default_bInRemoveOutputAfterBake", "false" },
		{ "CPP_Default_bInReplacePreviousBake", "false" },
		{ "CPP_Default_InBakeDirectoryPath", "" },
		{ "CPP_Default_InBakeMethod", "ToActor" },
		{ "CPP_Default_InSpawnInLevelOverride", "None" },
		{ "CPP_Default_InWorldContextObject", "None" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instantiates an HDA in the specified world/level using an existing wrapper.\n@param InWrapper The wrapper to instantiate the HDA with.\n@param InHoudiniAsset The HDA to instantiate.\n@param InInstantiateAt The Transform to instantiate the HDA with.\n@param InWorldContextObject A world context object for identifying the world to spawn in, if\nInSpawnInLevelOverride is null.\n@param InSpawnInLevelOverride If not nullptr, then the AHoudiniAssetActor is spawned in that level. If both\nInSpawnInLevelOverride and InWorldContextObject are null, then the actor is spawned in the current editor\ncontext world's current level.\n@param bInEnableAutoCook If true (the default) the HDA will cook automatically after instantiation and after\nparameter, transform and input changes.\n@param bInEnableAutoBake If true, the HDA output is automatically baked after a cook. Defaults to false.\n@param InBakeDirectoryPath The directory to bake to if the bake path is not set via attributes on the HDA output.\n@param InBakeMethod The bake target (to actor vs blueprint). @see EHoudiniEngineBakeOption.\n@param bInRemoveOutputAfterBake If true, HDA temporary outputs are removed after a bake. Defaults to false.\n@param bInRecenterBakedActors Recenter the baked actors to their bounding box center. Defaults to false.\n@param bInReplacePreviousBake If true, on every bake replace the previous bake's output (assets + actors) with\nthe new bake's output. Defaults to false.\n@return true if InWrapper and InHoudiniAsset is valid and the AHoudiniAssetActor was spawned." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InInstantiateAt_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInEnableAutoCook_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInEnableAutoBake_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBakeDirectoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBakeMethod_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInRemoveOutputAfterBake_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInRecenterBakedActors_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInReplacePreviousBake_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InWrapper;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InHoudiniAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InInstantiateAt;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InWorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSpawnInLevelOverride;
	static void NewProp_bInEnableAutoCook_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnableAutoCook;
	static void NewProp_bInEnableAutoBake_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnableAutoBake;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InBakeDirectoryPath;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InBakeMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InBakeMethod;
	static void NewProp_bInRemoveOutputAfterBake_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInRemoveOutputAfterBake;
	static void NewProp_bInRecenterBakedActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInRecenterBakedActors;
	static void NewProp_bInReplacePreviousBake_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInReplacePreviousBake;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::NewProp_InWrapper = { "InWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPublicAPI_eventInstantiateAssetWithExistingWrapper_Parms, InWrapper), Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::NewProp_InHoudiniAsset = { "InHoudiniAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPublicAPI_eventInstantiateAssetWithExistingWrapper_Parms, InHoudiniAsset), Z_Construct_UClass_UHoudiniAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::NewProp_InInstantiateAt = { "InInstantiateAt", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPublicAPI_eventInstantiateAssetWithExistingWrapper_Parms, InInstantiateAt), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InInstantiateAt_MetaData), NewProp_InInstantiateAt_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::NewProp_InWorldContextObject = { "InWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPublicAPI_eventInstantiateAssetWithExistingWrapper_Parms, InWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::NewProp_InSpawnInLevelOverride = { "InSpawnInLevelOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPublicAPI_eventInstantiateAssetWithExistingWrapper_Parms, InSpawnInLevelOverride), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::NewProp_bInEnableAutoCook_SetBit(void* Obj)
{
	((HoudiniPublicAPI_eventInstantiateAssetWithExistingWrapper_Parms*)Obj)->bInEnableAutoCook = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::NewProp_bInEnableAutoCook = { "bInEnableAutoCook", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPublicAPI_eventInstantiateAssetWithExistingWrapper_Parms), &Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::NewProp_bInEnableAutoCook_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInEnableAutoCook_MetaData), NewProp_bInEnableAutoCook_MetaData) };
void Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::NewProp_bInEnableAutoBake_SetBit(void* Obj)
{
	((HoudiniPublicAPI_eventInstantiateAssetWithExistingWrapper_Parms*)Obj)->bInEnableAutoBake = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::NewProp_bInEnableAutoBake = { "bInEnableAutoBake", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPublicAPI_eventInstantiateAssetWithExistingWrapper_Parms), &Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::NewProp_bInEnableAutoBake_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInEnableAutoBake_MetaData), NewProp_bInEnableAutoBake_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::NewProp_InBakeDirectoryPath = { "InBakeDirectoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPublicAPI_eventInstantiateAssetWithExistingWrapper_Parms, InBakeDirectoryPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBakeDirectoryPath_MetaData), NewProp_InBakeDirectoryPath_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::NewProp_InBakeMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::NewProp_InBakeMethod = { "InBakeMethod", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPublicAPI_eventInstantiateAssetWithExistingWrapper_Parms, InBakeMethod), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBakeMethod_MetaData), NewProp_InBakeMethod_MetaData) }; // 1204825035
void Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::NewProp_bInRemoveOutputAfterBake_SetBit(void* Obj)
{
	((HoudiniPublicAPI_eventInstantiateAssetWithExistingWrapper_Parms*)Obj)->bInRemoveOutputAfterBake = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::NewProp_bInRemoveOutputAfterBake = { "bInRemoveOutputAfterBake", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPublicAPI_eventInstantiateAssetWithExistingWrapper_Parms), &Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::NewProp_bInRemoveOutputAfterBake_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInRemoveOutputAfterBake_MetaData), NewProp_bInRemoveOutputAfterBake_MetaData) };
void Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::NewProp_bInRecenterBakedActors_SetBit(void* Obj)
{
	((HoudiniPublicAPI_eventInstantiateAssetWithExistingWrapper_Parms*)Obj)->bInRecenterBakedActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::NewProp_bInRecenterBakedActors = { "bInRecenterBakedActors", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPublicAPI_eventInstantiateAssetWithExistingWrapper_Parms), &Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::NewProp_bInRecenterBakedActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInRecenterBakedActors_MetaData), NewProp_bInRecenterBakedActors_MetaData) };
void Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::NewProp_bInReplacePreviousBake_SetBit(void* Obj)
{
	((HoudiniPublicAPI_eventInstantiateAssetWithExistingWrapper_Parms*)Obj)->bInReplacePreviousBake = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::NewProp_bInReplacePreviousBake = { "bInReplacePreviousBake", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPublicAPI_eventInstantiateAssetWithExistingWrapper_Parms), &Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::NewProp_bInReplacePreviousBake_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInReplacePreviousBake_MetaData), NewProp_bInReplacePreviousBake_MetaData) };
void Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HoudiniPublicAPI_eventInstantiateAssetWithExistingWrapper_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPublicAPI_eventInstantiateAssetWithExistingWrapper_Parms), &Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::NewProp_InWrapper,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::NewProp_InHoudiniAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::NewProp_InInstantiateAt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::NewProp_InWorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::NewProp_InSpawnInLevelOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::NewProp_bInEnableAutoCook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::NewProp_bInEnableAutoBake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::NewProp_InBakeDirectoryPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::NewProp_InBakeMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::NewProp_InBakeMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::NewProp_bInRemoveOutputAfterBake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::NewProp_bInRecenterBakedActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::NewProp_bInReplacePreviousBake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPI, nullptr, "InstantiateAssetWithExistingWrapper", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::PropPointers), sizeof(HoudiniPublicAPI_eventInstantiateAssetWithExistingWrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::Function_MetaDataParams) };
static_assert(sizeof(HoudiniPublicAPI_eventInstantiateAssetWithExistingWrapper_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoudiniPublicAPI::execInstantiateAssetWithExistingWrapper)
{
	P_GET_OBJECT(UHoudiniPublicAPIAssetWrapper,Z_Param_InWrapper);
	P_GET_OBJECT(UHoudiniAsset,Z_Param_InHoudiniAsset);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_InInstantiateAt);
	P_GET_OBJECT(UObject,Z_Param_InWorldContextObject);
	P_GET_OBJECT(ULevel,Z_Param_InSpawnInLevelOverride);
	P_GET_UBOOL(Z_Param_bInEnableAutoCook);
	P_GET_UBOOL(Z_Param_bInEnableAutoBake);
	P_GET_PROPERTY(FStrProperty,Z_Param_InBakeDirectoryPath);
	P_GET_ENUM(EHoudiniEngineBakeOption,Z_Param_InBakeMethod);
	P_GET_UBOOL(Z_Param_bInRemoveOutputAfterBake);
	P_GET_UBOOL(Z_Param_bInRecenterBakedActors);
	P_GET_UBOOL(Z_Param_bInReplacePreviousBake);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InstantiateAssetWithExistingWrapper_Implementation(Z_Param_InWrapper,Z_Param_InHoudiniAsset,Z_Param_Out_InInstantiateAt,Z_Param_InWorldContextObject,Z_Param_InSpawnInLevelOverride,Z_Param_bInEnableAutoCook,Z_Param_bInEnableAutoBake,Z_Param_InBakeDirectoryPath,EHoudiniEngineBakeOption(Z_Param_InBakeMethod),Z_Param_bInRemoveOutputAfterBake,Z_Param_bInRecenterBakedActors,Z_Param_bInReplacePreviousBake);
	P_NATIVE_END;
}
// End Class UHoudiniPublicAPI Function InstantiateAssetWithExistingWrapper

// Begin Class UHoudiniPublicAPI Function IsAssetCookingPaused
struct HoudiniPublicAPI_eventIsAssetCookingPaused_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	HoudiniPublicAPI_eventIsAssetCookingPaused_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UHoudiniPublicAPI_IsAssetCookingPaused = FName(TEXT("IsAssetCookingPaused"));
bool UHoudiniPublicAPI::IsAssetCookingPaused() const
{
	HoudiniPublicAPI_eventIsAssetCookingPaused_Parms Parms;
	const_cast<UHoudiniPublicAPI*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPI_IsAssetCookingPaused),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UHoudiniPublicAPI_IsAssetCookingPaused_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns true if asset cooking is paused. */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if asset cooking is paused." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHoudiniPublicAPI_IsAssetCookingPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HoudiniPublicAPI_eventIsAssetCookingPaused_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPI_IsAssetCookingPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPublicAPI_eventIsAssetCookingPaused_Parms), &Z_Construct_UFunction_UHoudiniPublicAPI_IsAssetCookingPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPI_IsAssetCookingPaused_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPI_IsAssetCookingPaused_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPI_IsAssetCookingPaused_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPI_IsAssetCookingPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPI, nullptr, "IsAssetCookingPaused", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPublicAPI_IsAssetCookingPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPI_IsAssetCookingPaused_Statics::PropPointers), sizeof(HoudiniPublicAPI_eventIsAssetCookingPaused_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPI_IsAssetCookingPaused_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPublicAPI_IsAssetCookingPaused_Statics::Function_MetaDataParams) };
static_assert(sizeof(HoudiniPublicAPI_eventIsAssetCookingPaused_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoudiniPublicAPI_IsAssetCookingPaused()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPI_IsAssetCookingPaused_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoudiniPublicAPI::execIsAssetCookingPaused)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAssetCookingPaused_Implementation();
	P_NATIVE_END;
}
// End Class UHoudiniPublicAPI Function IsAssetCookingPaused

// Begin Class UHoudiniPublicAPI Function IsSessionValid
struct HoudiniPublicAPI_eventIsSessionValid_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	HoudiniPublicAPI_eventIsSessionValid_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UHoudiniPublicAPI_IsSessionValid = FName(TEXT("IsSessionValid"));
bool UHoudiniPublicAPI::IsSessionValid() const
{
	HoudiniPublicAPI_eventIsSessionValid_Parms Parms;
	const_cast<UHoudiniPublicAPI*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPI_IsSessionValid),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UHoudiniPublicAPI_IsSessionValid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns true if there is a valid Houdini Engine session running/connected */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if there is a valid Houdini Engine session running/connected" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHoudiniPublicAPI_IsSessionValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HoudiniPublicAPI_eventIsSessionValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPI_IsSessionValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPublicAPI_eventIsSessionValid_Parms), &Z_Construct_UFunction_UHoudiniPublicAPI_IsSessionValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPI_IsSessionValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPI_IsSessionValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPI_IsSessionValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPI_IsSessionValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPI, nullptr, "IsSessionValid", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPublicAPI_IsSessionValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPI_IsSessionValid_Statics::PropPointers), sizeof(HoudiniPublicAPI_eventIsSessionValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPI_IsSessionValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPublicAPI_IsSessionValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(HoudiniPublicAPI_eventIsSessionValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoudiniPublicAPI_IsSessionValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPI_IsSessionValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoudiniPublicAPI::execIsSessionValid)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSessionValid_Implementation();
	P_NATIVE_END;
}
// End Class UHoudiniPublicAPI Function IsSessionValid

// Begin Class UHoudiniPublicAPI Function PauseAssetCooking
static FName NAME_UHoudiniPublicAPI_PauseAssetCooking = FName(TEXT("PauseAssetCooking"));
void UHoudiniPublicAPI::PauseAssetCooking()
{
	ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPI_PauseAssetCooking),NULL);
}
struct Z_Construct_UFunction_UHoudiniPublicAPI_PauseAssetCooking_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pause asset cooking (if not already paused) */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pause asset cooking (if not already paused)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPI_PauseAssetCooking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPI, nullptr, "PauseAssetCooking", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPI_PauseAssetCooking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPublicAPI_PauseAssetCooking_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHoudiniPublicAPI_PauseAssetCooking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPI_PauseAssetCooking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoudiniPublicAPI::execPauseAssetCooking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PauseAssetCooking_Implementation();
	P_NATIVE_END;
}
// End Class UHoudiniPublicAPI Function PauseAssetCooking

// Begin Class UHoudiniPublicAPI Function RestartSession
static FName NAME_UHoudiniPublicAPI_RestartSession = FName(TEXT("RestartSession"));
void UHoudiniPublicAPI::RestartSession()
{
	ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPI_RestartSession),NULL);
}
struct Z_Construct_UFunction_UHoudiniPublicAPI_RestartSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stops, then creates a new session */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stops, then creates a new session" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPI_RestartSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPI, nullptr, "RestartSession", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPI_RestartSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPublicAPI_RestartSession_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHoudiniPublicAPI_RestartSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPI_RestartSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoudiniPublicAPI::execRestartSession)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RestartSession_Implementation();
	P_NATIVE_END;
}
// End Class UHoudiniPublicAPI Function RestartSession

// Begin Class UHoudiniPublicAPI Function ResumeAssetCooking
static FName NAME_UHoudiniPublicAPI_ResumeAssetCooking = FName(TEXT("ResumeAssetCooking"));
void UHoudiniPublicAPI::ResumeAssetCooking()
{
	ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPI_ResumeAssetCooking),NULL);
}
struct Z_Construct_UFunction_UHoudiniPublicAPI_ResumeAssetCooking_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Resume asset cooking (if it was paused) */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resume asset cooking (if it was paused)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPI_ResumeAssetCooking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPI, nullptr, "ResumeAssetCooking", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPI_ResumeAssetCooking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPublicAPI_ResumeAssetCooking_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHoudiniPublicAPI_ResumeAssetCooking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPI_ResumeAssetCooking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoudiniPublicAPI::execResumeAssetCooking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResumeAssetCooking_Implementation();
	P_NATIVE_END;
}
// End Class UHoudiniPublicAPI Function ResumeAssetCooking

// Begin Class UHoudiniPublicAPI Function StopSession
static FName NAME_UHoudiniPublicAPI_StopSession = FName(TEXT("StopSession"));
void UHoudiniPublicAPI::StopSession()
{
	ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPI_StopSession),NULL);
}
struct Z_Construct_UFunction_UHoudiniPublicAPI_StopSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Houdini|Public API" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stops the current session */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stops the current session" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPI_StopSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPI, nullptr, "StopSession", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPI_StopSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPublicAPI_StopSession_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHoudiniPublicAPI_StopSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPI_StopSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoudiniPublicAPI::execStopSession)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopSession_Implementation();
	P_NATIVE_END;
}
// End Class UHoudiniPublicAPI Function StopSession

// Begin Class UHoudiniPublicAPI
void UHoudiniPublicAPI::StaticRegisterNativesUHoudiniPublicAPI()
{
	UClass* Class = UHoudiniPublicAPI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateEmptyInput", &UHoudiniPublicAPI::execCreateEmptyInput },
		{ "CreateSession", &UHoudiniPublicAPI::execCreateSession },
		{ "InstantiateAsset", &UHoudiniPublicAPI::execInstantiateAsset },
		{ "InstantiateAssetWithExistingWrapper", &UHoudiniPublicAPI::execInstantiateAssetWithExistingWrapper },
		{ "IsAssetCookingPaused", &UHoudiniPublicAPI::execIsAssetCookingPaused },
		{ "IsSessionValid", &UHoudiniPublicAPI::execIsSessionValid },
		{ "PauseAssetCooking", &UHoudiniPublicAPI::execPauseAssetCooking },
		{ "RestartSession", &UHoudiniPublicAPI::execRestartSession },
		{ "ResumeAssetCooking", &UHoudiniPublicAPI::execResumeAssetCooking },
		{ "StopSession", &UHoudiniPublicAPI::execStopSession },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniPublicAPI);
UClass* Z_Construct_UClass_UHoudiniPublicAPI_NoRegister()
{
	return UHoudiniPublicAPI::StaticClass();
}
struct Z_Construct_UClass_UHoudiniPublicAPI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Houdini|Public API" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The Houdini Engine v2 Plug-in's Public API.\n *\n * The API allows one to manage a Houdini Engine session (Create/Stop/Restart), Pause/Resume asset cooking and\n * instantiate HDA's and interact with it (set/update inputs, parameters, cook, iterate over outputs and bake outputs).\n *\n * Interaction with an instantiated HDA is done via UHoudiniPublicAPIAssetWrapper. \n *\n */" },
#endif
		{ "IncludePath", "HoudiniPublicAPI.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Houdini Engine v2 Plug-in's Public API.\n\nThe API allows one to manage a Houdini Engine session (Create/Stop/Restart), Pause/Resume asset cooking and\ninstantiate HDA's and interact with it (set/update inputs, parameters, cook, iterate over outputs and bake outputs).\n\nInteraction with an instantiated HDA is done via UHoudiniPublicAPIAssetWrapper." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoudiniPublicAPI_CreateEmptyInput, "CreateEmptyInput" }, // 2185164513
		{ &Z_Construct_UFunction_UHoudiniPublicAPI_CreateSession, "CreateSession" }, // 1910986278
		{ &Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAsset, "InstantiateAsset" }, // 818660486
		{ &Z_Construct_UFunction_UHoudiniPublicAPI_InstantiateAssetWithExistingWrapper, "InstantiateAssetWithExistingWrapper" }, // 3278332925
		{ &Z_Construct_UFunction_UHoudiniPublicAPI_IsAssetCookingPaused, "IsAssetCookingPaused" }, // 2737986922
		{ &Z_Construct_UFunction_UHoudiniPublicAPI_IsSessionValid, "IsSessionValid" }, // 384514279
		{ &Z_Construct_UFunction_UHoudiniPublicAPI_PauseAssetCooking, "PauseAssetCooking" }, // 223795790
		{ &Z_Construct_UFunction_UHoudiniPublicAPI_RestartSession, "RestartSession" }, // 223256148
		{ &Z_Construct_UFunction_UHoudiniPublicAPI_ResumeAssetCooking, "ResumeAssetCooking" }, // 3661579853
		{ &Z_Construct_UFunction_UHoudiniPublicAPI_StopSession, "StopSession" }, // 1693555776
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPublicAPI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHoudiniPublicAPI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniPublicAPIObjectBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPublicAPI_Statics::ClassParams = {
	&UHoudiniPublicAPI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPI_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniPublicAPI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniPublicAPI()
{
	if (!Z_Registration_Info_UClass_UHoudiniPublicAPI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPublicAPI.OuterSingleton, Z_Construct_UClass_UHoudiniPublicAPI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniPublicAPI.OuterSingleton;
}
template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniPublicAPI>()
{
	return UHoudiniPublicAPI::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPublicAPI);
UHoudiniPublicAPI::~UHoudiniPublicAPI() {}
// End Class UHoudiniPublicAPI

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniPublicAPIRampInterpolationType_StaticEnum, TEXT("EHoudiniPublicAPIRampInterpolationType"), &Z_Registration_Info_UEnum_EHoudiniPublicAPIRampInterpolationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 544198712U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniPublicAPI, UHoudiniPublicAPI::StaticClass, TEXT("UHoudiniPublicAPI"), &Z_Registration_Info_UClass_UHoudiniPublicAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPublicAPI), 3194086684U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h_978659102(TEXT("/Script/HoudiniEngineEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
