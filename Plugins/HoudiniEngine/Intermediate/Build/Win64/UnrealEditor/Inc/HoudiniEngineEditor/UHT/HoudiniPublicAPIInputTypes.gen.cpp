// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineEditor/Public/HoudiniPublicAPIInputTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniPublicAPIInputTypes() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPICurveInput();
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPICurveInput_NoRegister();
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPICurveInputObject();
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_NoRegister();
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIGeoInput();
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIGeoInput_NoRegister();
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIInput();
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIInput_NoRegister();
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIObjectBase();
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIWorldInput();
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIWorldInput_NoRegister();
HOUDINIENGINEEDITOR_API UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveBreakpointParameterization();
HOUDINIENGINEEDITOR_API UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveMethod();
HOUDINIENGINEEDITOR_API UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveType();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor();
// End Cross Module References

// Begin Class UHoudiniPublicAPIInput Function GetInputObjects
struct HoudiniPublicAPIInput_eventGetInputObjects_Parms
{
	TArray<UObject*> OutObjects;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	HoudiniPublicAPIInput_eventGetInputObjects_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UHoudiniPublicAPIInput_GetInputObjects = FName(TEXT("GetInputObjects"));
bool UHoudiniPublicAPIInput::GetInputObjects(TArray<UObject*>& OutObjects)
{
	HoudiniPublicAPIInput_eventGetInputObjects_Parms Parms;
	Parms.OutObjects=OutObjects;
	ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIInput_GetInputObjects),&Parms);
	OutObjects=Parms.OutObjects;
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the currently assigned input objects.\n\x09 * @param OutObjects The current input objects of this input.\n\x09 * @return true if input objects were successfully added to OutObjects (even if there are no input objects).\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the currently assigned input objects.\n@param OutObjects The current input objects of this input.\n@return true if input objects were successfully added to OutObjects (even if there are no input objects)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutObjects;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::NewProp_OutObjects_Inner = { "OutObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::NewProp_OutObjects = { "OutObjects", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPublicAPIInput_eventGetInputObjects_Parms, OutObjects), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HoudiniPublicAPIInput_eventGetInputObjects_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPublicAPIInput_eventGetInputObjects_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::NewProp_OutObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::NewProp_OutObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIInput, nullptr, "GetInputObjects", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::PropPointers), sizeof(HoudiniPublicAPIInput_eventGetInputObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::Function_MetaDataParams) };
static_assert(sizeof(HoudiniPublicAPIInput_eventGetInputObjects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoudiniPublicAPIInput::execGetInputObjects)
{
	P_GET_TARRAY_REF(UObject*,Z_Param_Out_OutObjects);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetInputObjects_Implementation(Z_Param_Out_OutObjects);
	P_NATIVE_END;
}
// End Class UHoudiniPublicAPIInput Function GetInputObjects

// Begin Class UHoudiniPublicAPIInput Function IsAcceptableObjectForInput
struct HoudiniPublicAPIInput_eventIsAcceptableObjectForInput_Parms
{
	UObject* InObject;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	HoudiniPublicAPIInput_eventIsAcceptableObjectForInput_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UHoudiniPublicAPIInput_IsAcceptableObjectForInput = FName(TEXT("IsAcceptableObjectForInput"));
bool UHoudiniPublicAPIInput::IsAcceptableObjectForInput(UObject* InObject) const
{
	HoudiniPublicAPIInput_eventIsAcceptableObjectForInput_Parms Parms;
	Parms.InObject=InObject;
	const_cast<UHoudiniPublicAPIInput*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIInput_IsAcceptableObjectForInput),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns true if InObject is acceptable for this input type.\n\x09 * @param InObject The object to check for acceptance as an input object on this input.\n\x09 * @return true if InObject is acceptable for this input type.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if InObject is acceptable for this input type.\n@param InObject The object to check for acceptance as an input object on this input.\n@return true if InObject is acceptable for this input type." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPublicAPIInput_eventIsAcceptableObjectForInput_Parms, InObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HoudiniPublicAPIInput_eventIsAcceptableObjectForInput_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPublicAPIInput_eventIsAcceptableObjectForInput_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics::NewProp_InObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIInput, nullptr, "IsAcceptableObjectForInput", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics::PropPointers), sizeof(HoudiniPublicAPIInput_eventIsAcceptableObjectForInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(HoudiniPublicAPIInput_eventIsAcceptableObjectForInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoudiniPublicAPIInput::execIsAcceptableObjectForInput)
{
	P_GET_OBJECT(UObject,Z_Param_InObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAcceptableObjectForInput_Implementation(Z_Param_InObject);
	P_NATIVE_END;
}
// End Class UHoudiniPublicAPIInput Function IsAcceptableObjectForInput

// Begin Class UHoudiniPublicAPIInput Function SetInputObjects
struct HoudiniPublicAPIInput_eventSetInputObjects_Parms
{
	TArray<UObject*> InObjects;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	HoudiniPublicAPIInput_eventSetInputObjects_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UHoudiniPublicAPIInput_SetInputObjects = FName(TEXT("SetInputObjects"));
bool UHoudiniPublicAPIInput::SetInputObjects(TArray<UObject*> const& InObjects)
{
	HoudiniPublicAPIInput_eventSetInputObjects_Parms Parms;
	Parms.InObjects=InObjects;
	ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIInput_SetInputObjects),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the specified objects as the input objects.\n\x09 * @param InObjects The objects to set as input objects for this input.\n\x09 * @return false if any object was incompatible (all compatible objects are added).\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the specified objects as the input objects.\n@param InObjects The objects to set as input objects for this input.\n@return false if any object was incompatible (all compatible objects are added)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InObjects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InObjects;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::NewProp_InObjects_Inner = { "InObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::NewProp_InObjects = { "InObjects", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPublicAPIInput_eventSetInputObjects_Parms, InObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InObjects_MetaData), NewProp_InObjects_MetaData) };
void Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HoudiniPublicAPIInput_eventSetInputObjects_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPublicAPIInput_eventSetInputObjects_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::NewProp_InObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::NewProp_InObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIInput, nullptr, "SetInputObjects", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::PropPointers), sizeof(HoudiniPublicAPIInput_eventSetInputObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::Function_MetaDataParams) };
static_assert(sizeof(HoudiniPublicAPIInput_eventSetInputObjects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoudiniPublicAPIInput::execSetInputObjects)
{
	P_GET_TARRAY_REF(UObject*,Z_Param_Out_InObjects);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetInputObjects_Implementation(Z_Param_Out_InObjects);
	P_NATIVE_END;
}
// End Class UHoudiniPublicAPIInput Function SetInputObjects

// Begin Class UHoudiniPublicAPIInput
void UHoudiniPublicAPIInput::StaticRegisterNativesUHoudiniPublicAPIInput()
{
	UClass* Class = UHoudiniPublicAPIInput::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInputObjects", &UHoudiniPublicAPIInput::execGetInputObjects },
		{ "IsAcceptableObjectForInput", &UHoudiniPublicAPIInput::execIsAcceptableObjectForInput },
		{ "SetInputObjects", &UHoudiniPublicAPIInput::execSetInputObjects },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniPublicAPIInput);
UClass* Z_Construct_UClass_UHoudiniPublicAPIInput_NoRegister()
{
	return UHoudiniPublicAPIInput::StaticClass();
}
struct Z_Construct_UClass_UHoudiniPublicAPIInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Houdini Engine | Public API | Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This class is the base class of a hierarchy that represents an input to an HDA in the public API.\n *\n * Each type of input has a derived class:\n *   - Geometry: UHoudiniPublicAPIGeoInput\n *   - Curve: UHoudiniPublicAPICurveInput\n *   - World: UHoudiniPublicAPIWorldInput\n *\n * Each instance of one of these classes represents the configuration of an input and wraps the actor/object/asset\n * used as the input. These instances are always treated as copies of the actual state of the HDA's input: changing\n * a property of one of these instances does not immediately affect the instantiated HDA: one has to pass the input\n * instances as arguments to UHoudiniPublicAPIAssetWrapper::SetInputAtIndex() or\n * UHoudiniPublicAPIAssetWrapper::SetInputParameter() functions to actually change the inputs on the instantiated asset.\n * A copy of the existing input state of an instantiated HDA can be fetched via\n * UHoudiniPublicAPIAssetWrapper::GetInputAtIndex() and UHoudiniPublicAPIAssetWrapper::GetInputParameter().\n */" },
#endif
		{ "IncludePath", "HoudiniPublicAPIInputTypes.h" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This class is the base class of a hierarchy that represents an input to an HDA in the public API.\n\nEach type of input has a derived class:\n  - Geometry: UHoudiniPublicAPIGeoInput\n  - Curve: UHoudiniPublicAPICurveInput\n  - World: UHoudiniPublicAPIWorldInput\n\nEach instance of one of these classes represents the configuration of an input and wraps the actor/object/asset\nused as the input. These instances are always treated as copies of the actual state of the HDA's input: changing\na property of one of these instances does not immediately affect the instantiated HDA: one has to pass the input\ninstances as arguments to UHoudiniPublicAPIAssetWrapper::SetInputAtIndex() or\nUHoudiniPublicAPIAssetWrapper::SetInputParameter() functions to actually change the inputs on the instantiated asset.\nA copy of the existing input state of an instantiated HDA can be fetched via\nUHoudiniPublicAPIAssetWrapper::GetInputAtIndex() and UHoudiniPublicAPIAssetWrapper::GetInputParameter()." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bKeepWorldTransform_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Is set to true when this input's Transform Type is set to NONE, 2 will use the input's default value .*/" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is set to true when this input's Transform Type is set to NONE, 2 will use the input's default value ." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportAsReference_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Indicates that all the input objects are imported to Houdini as references instead of actual geo\n\x09 * (for Geo/World input types only)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates that all the input objects are imported to Houdini as references instead of actual geo\n(for Geo/World input types only)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportAsReferenceRotScaleEnabled_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Indicates whether or not to add the rot / scale attributes for reference imports\n\x09 * (for Geo/World input types only)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates whether or not to add the rot / scale attributes for reference imports\n(for Geo/World input types only)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportAsReferenceBboxEnabled_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Indicates whether or not to add bounding box attributes for reference imports\n\x09 * (for Geo/World input types only)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates whether or not to add bounding box attributes for reference imports\n(for Geo/World input types only)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportAsReferenceMaterialEnabled_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Indicates whether or not to add material attributes for reference imports\n\x09 * (for Geo/World input types only)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates whether or not to add material attributes for reference imports\n(for Geo/World input types only)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportMaterialParameters_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Indicates whether or not to export the detailled materials parameters with the input data\n\x09 * (for Geo/World input types only)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates whether or not to export the detailled materials parameters with the input data\n(for Geo/World input types only)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputObjects_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The input objects for this input. */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The input objects for this input." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bKeepWorldTransform_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepWorldTransform;
	static void NewProp_bImportAsReference_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportAsReference;
	static void NewProp_bImportAsReferenceRotScaleEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportAsReferenceRotScaleEnabled;
	static void NewProp_bImportAsReferenceBboxEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportAsReferenceBboxEnabled;
	static void NewProp_bImportAsReferenceMaterialEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportAsReferenceMaterialEnabled;
	static void NewProp_bExportMaterialParameters_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportMaterialParameters;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputObjects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects, "GetInputObjects" }, // 444840914
		{ &Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput, "IsAcceptableObjectForInput" }, // 2593241664
		{ &Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects, "SetInputObjects" }, // 4213431888
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPublicAPIInput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bKeepWorldTransform_SetBit(void* Obj)
{
	((UHoudiniPublicAPIInput*)Obj)->bKeepWorldTransform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bKeepWorldTransform = { "bKeepWorldTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPublicAPIInput), &Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bKeepWorldTransform_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bKeepWorldTransform_MetaData), NewProp_bKeepWorldTransform_MetaData) };
void Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bImportAsReference_SetBit(void* Obj)
{
	((UHoudiniPublicAPIInput*)Obj)->bImportAsReference = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bImportAsReference = { "bImportAsReference", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPublicAPIInput), &Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bImportAsReference_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportAsReference_MetaData), NewProp_bImportAsReference_MetaData) };
void Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bImportAsReferenceRotScaleEnabled_SetBit(void* Obj)
{
	((UHoudiniPublicAPIInput*)Obj)->bImportAsReferenceRotScaleEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bImportAsReferenceRotScaleEnabled = { "bImportAsReferenceRotScaleEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPublicAPIInput), &Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bImportAsReferenceRotScaleEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportAsReferenceRotScaleEnabled_MetaData), NewProp_bImportAsReferenceRotScaleEnabled_MetaData) };
void Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bImportAsReferenceBboxEnabled_SetBit(void* Obj)
{
	((UHoudiniPublicAPIInput*)Obj)->bImportAsReferenceBboxEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bImportAsReferenceBboxEnabled = { "bImportAsReferenceBboxEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPublicAPIInput), &Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bImportAsReferenceBboxEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportAsReferenceBboxEnabled_MetaData), NewProp_bImportAsReferenceBboxEnabled_MetaData) };
void Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bImportAsReferenceMaterialEnabled_SetBit(void* Obj)
{
	((UHoudiniPublicAPIInput*)Obj)->bImportAsReferenceMaterialEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bImportAsReferenceMaterialEnabled = { "bImportAsReferenceMaterialEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPublicAPIInput), &Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bImportAsReferenceMaterialEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportAsReferenceMaterialEnabled_MetaData), NewProp_bImportAsReferenceMaterialEnabled_MetaData) };
void Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bExportMaterialParameters_SetBit(void* Obj)
{
	((UHoudiniPublicAPIInput*)Obj)->bExportMaterialParameters = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bExportMaterialParameters = { "bExportMaterialParameters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPublicAPIInput), &Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bExportMaterialParameters_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportMaterialParameters_MetaData), NewProp_bExportMaterialParameters_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_InputObjects_Inner = { "InputObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_InputObjects = { "InputObjects", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPublicAPIInput, InputObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputObjects_MetaData), NewProp_InputObjects_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bKeepWorldTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bImportAsReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bImportAsReferenceRotScaleEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bImportAsReferenceBboxEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bImportAsReferenceMaterialEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bExportMaterialParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_InputObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_InputObjects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniPublicAPIObjectBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::ClassParams = {
	&UHoudiniPublicAPIInput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniPublicAPIInput()
{
	if (!Z_Registration_Info_UClass_UHoudiniPublicAPIInput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPublicAPIInput.OuterSingleton, Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniPublicAPIInput.OuterSingleton;
}
template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniPublicAPIInput>()
{
	return UHoudiniPublicAPIInput::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPublicAPIInput);
UHoudiniPublicAPIInput::~UHoudiniPublicAPIInput() {}
// End Class UHoudiniPublicAPIInput

// Begin Class UHoudiniPublicAPIGeoInput Function GetInputObjectTransformOffset
struct HoudiniPublicAPIGeoInput_eventGetInputObjectTransformOffset_Parms
{
	int32 InInputObjectIndex;
	FTransform OutTransform;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	HoudiniPublicAPIGeoInput_eventGetInputObjectTransformOffset_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset = FName(TEXT("GetInputObjectTransformOffset"));
bool UHoudiniPublicAPIGeoInput::GetInputObjectTransformOffset(const int32 InInputObjectIndex, FTransform& OutTransform) const
{
	HoudiniPublicAPIGeoInput_eventGetInputObjectTransformOffset_Parms Parms;
	Parms.InInputObjectIndex=InInputObjectIndex;
	Parms.OutTransform=OutTransform;
	const_cast<UHoudiniPublicAPIGeoInput*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset),&Parms);
	OutTransform=Parms.OutTransform;
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the transform offset of the input object at the specified index in InputObjects (must already have been set via SetInputObjects()).\n\x09 * @param InInputObjectIndex The input object index to get a transform offset for.\n\x09 * @param OutTransform The transform offset that was fetched.\n\x09 * @return true if the index is valid and the was transform offset fetched.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the transform offset of the input object at the specified index in InputObjects (must already have been set via SetInputObjects()).\n@param InInputObjectIndex The input object index to get a transform offset for.\n@param OutTransform The transform offset that was fetched.\n@return true if the index is valid and the was transform offset fetched." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InInputObjectIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InInputObjectIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTransform;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset_Statics::NewProp_InInputObjectIndex = { "InInputObjectIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPublicAPIGeoInput_eventGetInputObjectTransformOffset_Parms, InInputObjectIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InInputObjectIndex_MetaData), NewProp_InInputObjectIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset_Statics::NewProp_OutTransform = { "OutTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPublicAPIGeoInput_eventGetInputObjectTransformOffset_Parms, OutTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HoudiniPublicAPIGeoInput_eventGetInputObjectTransformOffset_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPublicAPIGeoInput_eventGetInputObjectTransformOffset_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset_Statics::NewProp_InInputObjectIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset_Statics::NewProp_OutTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIGeoInput, nullptr, "GetInputObjectTransformOffset", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset_Statics::PropPointers), sizeof(HoudiniPublicAPIGeoInput_eventGetInputObjectTransformOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(HoudiniPublicAPIGeoInput_eventGetInputObjectTransformOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoudiniPublicAPIGeoInput::execGetInputObjectTransformOffset)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InInputObjectIndex);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetInputObjectTransformOffset_Implementation(Z_Param_InInputObjectIndex,Z_Param_Out_OutTransform);
	P_NATIVE_END;
}
// End Class UHoudiniPublicAPIGeoInput Function GetInputObjectTransformOffset

// Begin Class UHoudiniPublicAPIGeoInput Function GetInputObjectTransformOffsetArray
struct HoudiniPublicAPIGeoInput_eventGetInputObjectTransformOffsetArray_Parms
{
	TArray<FTransform> OutInputObjectTransformOffsetArray;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	HoudiniPublicAPIGeoInput_eventGetInputObjectTransformOffsetArray_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffsetArray = FName(TEXT("GetInputObjectTransformOffsetArray"));
bool UHoudiniPublicAPIGeoInput::GetInputObjectTransformOffsetArray(TArray<FTransform>& OutInputObjectTransformOffsetArray) const
{
	HoudiniPublicAPIGeoInput_eventGetInputObjectTransformOffsetArray_Parms Parms;
	Parms.OutInputObjectTransformOffsetArray=OutInputObjectTransformOffsetArray;
	const_cast<UHoudiniPublicAPIGeoInput*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffsetArray),&Parms);
	OutInputObjectTransformOffsetArray=Parms.OutInputObjectTransformOffsetArray;
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffsetArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the array of input object transforms.\n\x09 * @param OutInputObjectTransformOffsetArray The output array.\n\x09 * @return false if the input type does not support input object transform offsets. See SupportsTransformOffset.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the array of input object transforms.\n@param OutInputObjectTransformOffsetArray The output array.\n@return false if the input type does not support input object transform offsets. See SupportsTransformOffset." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutInputObjectTransformOffsetArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutInputObjectTransformOffsetArray;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffsetArray_Statics::NewProp_OutInputObjectTransformOffsetArray_Inner = { "OutInputObjectTransformOffsetArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffsetArray_Statics::NewProp_OutInputObjectTransformOffsetArray = { "OutInputObjectTransformOffsetArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPublicAPIGeoInput_eventGetInputObjectTransformOffsetArray_Parms, OutInputObjectTransformOffsetArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffsetArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HoudiniPublicAPIGeoInput_eventGetInputObjectTransformOffsetArray_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffsetArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPublicAPIGeoInput_eventGetInputObjectTransformOffsetArray_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffsetArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffsetArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffsetArray_Statics::NewProp_OutInputObjectTransformOffsetArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffsetArray_Statics::NewProp_OutInputObjectTransformOffsetArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffsetArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffsetArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffsetArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIGeoInput, nullptr, "GetInputObjectTransformOffsetArray", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffsetArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffsetArray_Statics::PropPointers), sizeof(HoudiniPublicAPIGeoInput_eventGetInputObjectTransformOffsetArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffsetArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffsetArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(HoudiniPublicAPIGeoInput_eventGetInputObjectTransformOffsetArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffsetArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffsetArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoudiniPublicAPIGeoInput::execGetInputObjectTransformOffsetArray)
{
	P_GET_TARRAY_REF(FTransform,Z_Param_Out_OutInputObjectTransformOffsetArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetInputObjectTransformOffsetArray_Implementation(Z_Param_Out_OutInputObjectTransformOffsetArray);
	P_NATIVE_END;
}
// End Class UHoudiniPublicAPIGeoInput Function GetInputObjectTransformOffsetArray

// Begin Class UHoudiniPublicAPIGeoInput Function SetInputObjectTransformOffset
struct HoudiniPublicAPIGeoInput_eventSetInputObjectTransformOffset_Parms
{
	int32 InInputObjectIndex;
	FTransform InTransform;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	HoudiniPublicAPIGeoInput_eventSetInputObjectTransformOffset_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset = FName(TEXT("SetInputObjectTransformOffset"));
bool UHoudiniPublicAPIGeoInput::SetInputObjectTransformOffset(const int32 InInputObjectIndex, FTransform const& InTransform)
{
	HoudiniPublicAPIGeoInput_eventSetInputObjectTransformOffset_Parms Parms;
	Parms.InInputObjectIndex=InInputObjectIndex;
	Parms.InTransform=InTransform;
	ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "InTransform" },
		{ "Category", "Houdini Engine | Public API | Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the transform offset of the input object at the specified index in InputObjects (must already have been set via SetInputObjects()).\n\x09 * @param InInputObjectIndex The input object index to set a transform offset for.\n\x09 * @param InTransform The transform offset to set.\n\x09 * @return true if the index is valid and the transform offset set.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the transform offset of the input object at the specified index in InputObjects (must already have been set via SetInputObjects()).\n@param InInputObjectIndex The input object index to set a transform offset for.\n@param InTransform The transform offset to set.\n@return true if the index is valid and the transform offset set." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InInputObjectIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InInputObjectIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTransform;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset_Statics::NewProp_InInputObjectIndex = { "InInputObjectIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPublicAPIGeoInput_eventSetInputObjectTransformOffset_Parms, InInputObjectIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InInputObjectIndex_MetaData), NewProp_InInputObjectIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPublicAPIGeoInput_eventSetInputObjectTransformOffset_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTransform_MetaData), NewProp_InTransform_MetaData) };
void Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HoudiniPublicAPIGeoInput_eventSetInputObjectTransformOffset_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPublicAPIGeoInput_eventSetInputObjectTransformOffset_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset_Statics::NewProp_InInputObjectIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset_Statics::NewProp_InTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIGeoInput, nullptr, "SetInputObjectTransformOffset", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset_Statics::PropPointers), sizeof(HoudiniPublicAPIGeoInput_eventSetInputObjectTransformOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(HoudiniPublicAPIGeoInput_eventSetInputObjectTransformOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoudiniPublicAPIGeoInput::execSetInputObjectTransformOffset)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InInputObjectIndex);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetInputObjectTransformOffset_Implementation(Z_Param_InInputObjectIndex,Z_Param_Out_InTransform);
	P_NATIVE_END;
}
// End Class UHoudiniPublicAPIGeoInput Function SetInputObjectTransformOffset

// Begin Class UHoudiniPublicAPIGeoInput
void UHoudiniPublicAPIGeoInput::StaticRegisterNativesUHoudiniPublicAPIGeoInput()
{
	UClass* Class = UHoudiniPublicAPIGeoInput::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInputObjectTransformOffset", &UHoudiniPublicAPIGeoInput::execGetInputObjectTransformOffset },
		{ "GetInputObjectTransformOffsetArray", &UHoudiniPublicAPIGeoInput::execGetInputObjectTransformOffsetArray },
		{ "SetInputObjectTransformOffset", &UHoudiniPublicAPIGeoInput::execSetInputObjectTransformOffset },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniPublicAPIGeoInput);
UClass* Z_Construct_UClass_UHoudiniPublicAPIGeoInput_NoRegister()
{
	return UHoudiniPublicAPIGeoInput::StaticClass();
}
struct Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Houdini Engine | Public API | Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * API wrapper input class for geometry inputs. Derived from UHoudiniPublicAPIInput.\n */" },
#endif
		{ "IncludePath", "HoudiniPublicAPIInputTypes.h" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "API wrapper input class for geometry inputs. Derived from UHoudiniPublicAPIInput." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPackBeforeMerge_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Indicates that the geometry must be packed before merging it into the input */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates that the geometry must be packed before merging it into the input" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportLODs_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Indicates that all LODs in the input should be marshalled to Houdini */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates that all LODs in the input should be marshalled to Houdini" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportSockets_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Indicates that all sockets in the input should be marshalled to Houdini */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates that all sockets in the input should be marshalled to Houdini" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportColliders_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Indicates that all colliders in the input should be marshalled to Houdini */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates that all colliders in the input should be marshalled to Houdini" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreferNaniteFallbackMesh_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Prefer Nanite fallback mesh when using Nanite asset as geometry input */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prefer Nanite fallback mesh when using Nanite asset as geometry input" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputObjectTransformOffsetArray_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Transform offset per input object (by input object array index). */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transform offset per input object (by input object array index)." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bPackBeforeMerge_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPackBeforeMerge;
	static void NewProp_bExportLODs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportLODs;
	static void NewProp_bExportSockets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportSockets;
	static void NewProp_bExportColliders_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportColliders;
	static void NewProp_bPreferNaniteFallbackMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreferNaniteFallbackMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputObjectTransformOffsetArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputObjectTransformOffsetArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffset, "GetInputObjectTransformOffset" }, // 3959011243
		{ &Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetInputObjectTransformOffsetArray, "GetInputObjectTransformOffsetArray" }, // 3319594382
		{ &Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetInputObjectTransformOffset, "SetInputObjectTransformOffset" }, // 3583946280
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPublicAPIGeoInput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bPackBeforeMerge_SetBit(void* Obj)
{
	((UHoudiniPublicAPIGeoInput*)Obj)->bPackBeforeMerge = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bPackBeforeMerge = { "bPackBeforeMerge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPublicAPIGeoInput), &Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bPackBeforeMerge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPackBeforeMerge_MetaData), NewProp_bPackBeforeMerge_MetaData) };
void Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportLODs_SetBit(void* Obj)
{
	((UHoudiniPublicAPIGeoInput*)Obj)->bExportLODs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportLODs = { "bExportLODs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPublicAPIGeoInput), &Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportLODs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportLODs_MetaData), NewProp_bExportLODs_MetaData) };
void Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportSockets_SetBit(void* Obj)
{
	((UHoudiniPublicAPIGeoInput*)Obj)->bExportSockets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportSockets = { "bExportSockets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPublicAPIGeoInput), &Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportSockets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportSockets_MetaData), NewProp_bExportSockets_MetaData) };
void Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportColliders_SetBit(void* Obj)
{
	((UHoudiniPublicAPIGeoInput*)Obj)->bExportColliders = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportColliders = { "bExportColliders", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPublicAPIGeoInput), &Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportColliders_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportColliders_MetaData), NewProp_bExportColliders_MetaData) };
void Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bPreferNaniteFallbackMesh_SetBit(void* Obj)
{
	((UHoudiniPublicAPIGeoInput*)Obj)->bPreferNaniteFallbackMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bPreferNaniteFallbackMesh = { "bPreferNaniteFallbackMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPublicAPIGeoInput), &Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bPreferNaniteFallbackMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreferNaniteFallbackMesh_MetaData), NewProp_bPreferNaniteFallbackMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_InputObjectTransformOffsetArray_Inner = { "InputObjectTransformOffsetArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_InputObjectTransformOffsetArray = { "InputObjectTransformOffsetArray", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPublicAPIGeoInput, InputObjectTransformOffsetArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputObjectTransformOffsetArray_MetaData), NewProp_InputObjectTransformOffsetArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bPackBeforeMerge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportLODs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportSockets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportColliders,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bPreferNaniteFallbackMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_InputObjectTransformOffsetArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_InputObjectTransformOffsetArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniPublicAPIInput,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::ClassParams = {
	&UHoudiniPublicAPIGeoInput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniPublicAPIGeoInput()
{
	if (!Z_Registration_Info_UClass_UHoudiniPublicAPIGeoInput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPublicAPIGeoInput.OuterSingleton, Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniPublicAPIGeoInput.OuterSingleton;
}
template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniPublicAPIGeoInput>()
{
	return UHoudiniPublicAPIGeoInput::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPublicAPIGeoInput);
UHoudiniPublicAPIGeoInput::~UHoudiniPublicAPIGeoInput() {}
// End Class UHoudiniPublicAPIGeoInput

// Begin Enum EHoudiniPublicAPICurveType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniPublicAPICurveType;
static UEnum* EHoudiniPublicAPICurveType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniPublicAPICurveType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniPublicAPICurveType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("EHoudiniPublicAPICurveType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniPublicAPICurveType.OuterSingleton;
}
template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniPublicAPICurveType>()
{
	return EHoudiniPublicAPICurveType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bezier.Name", "EHoudiniPublicAPICurveType::Bezier" },
		{ "BlueprintType", "true" },
		{ "Invalid.Name", "EHoudiniPublicAPICurveType::Invalid" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "Nurbs.Name", "EHoudiniPublicAPICurveType::Nurbs" },
		{ "Points.Name", "EHoudiniPublicAPICurveType::Points" },
		{ "Polygon.Name", "EHoudiniPublicAPICurveType::Polygon" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniPublicAPICurveType::Invalid", (int64)EHoudiniPublicAPICurveType::Invalid },
		{ "EHoudiniPublicAPICurveType::Polygon", (int64)EHoudiniPublicAPICurveType::Polygon },
		{ "EHoudiniPublicAPICurveType::Nurbs", (int64)EHoudiniPublicAPICurveType::Nurbs },
		{ "EHoudiniPublicAPICurveType::Bezier", (int64)EHoudiniPublicAPICurveType::Bezier },
		{ "EHoudiniPublicAPICurveType::Points", (int64)EHoudiniPublicAPICurveType::Points },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
	nullptr,
	"EHoudiniPublicAPICurveType",
	"EHoudiniPublicAPICurveType",
	Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniPublicAPICurveType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniPublicAPICurveType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniPublicAPICurveType.InnerSingleton;
}
// End Enum EHoudiniPublicAPICurveType

// Begin Enum EHoudiniPublicAPICurveMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniPublicAPICurveMethod;
static UEnum* EHoudiniPublicAPICurveMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniPublicAPICurveMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniPublicAPICurveMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveMethod, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("EHoudiniPublicAPICurveMethod"));
	}
	return Z_Registration_Info_UEnum_EHoudiniPublicAPICurveMethod.OuterSingleton;
}
template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniPublicAPICurveMethod>()
{
	return EHoudiniPublicAPICurveMethod_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Breakpoints.Name", "EHoudiniPublicAPICurveMethod::Breakpoints" },
		{ "CVs.Name", "EHoudiniPublicAPICurveMethod::CVs" },
		{ "Freehand.Name", "EHoudiniPublicAPICurveMethod::Freehand" },
		{ "Invalid.Name", "EHoudiniPublicAPICurveMethod::Invalid" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniPublicAPICurveMethod::Invalid", (int64)EHoudiniPublicAPICurveMethod::Invalid },
		{ "EHoudiniPublicAPICurveMethod::CVs", (int64)EHoudiniPublicAPICurveMethod::CVs },
		{ "EHoudiniPublicAPICurveMethod::Breakpoints", (int64)EHoudiniPublicAPICurveMethod::Breakpoints },
		{ "EHoudiniPublicAPICurveMethod::Freehand", (int64)EHoudiniPublicAPICurveMethod::Freehand },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
	nullptr,
	"EHoudiniPublicAPICurveMethod",
	"EHoudiniPublicAPICurveMethod",
	Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveMethod()
{
	if (!Z_Registration_Info_UEnum_EHoudiniPublicAPICurveMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniPublicAPICurveMethod.InnerSingleton, Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniPublicAPICurveMethod.InnerSingleton;
}
// End Enum EHoudiniPublicAPICurveMethod

// Begin Enum EHoudiniPublicAPICurveBreakpointParameterization
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniPublicAPICurveBreakpointParameterization;
static UEnum* EHoudiniPublicAPICurveBreakpointParameterization_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniPublicAPICurveBreakpointParameterization.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniPublicAPICurveBreakpointParameterization.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveBreakpointParameterization, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("EHoudiniPublicAPICurveBreakpointParameterization"));
	}
	return Z_Registration_Info_UEnum_EHoudiniPublicAPICurveBreakpointParameterization.OuterSingleton;
}
template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniPublicAPICurveBreakpointParameterization>()
{
	return EHoudiniPublicAPICurveBreakpointParameterization_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveBreakpointParameterization_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Centripetal.Name", "EHoudiniPublicAPICurveBreakpointParameterization::Centripetal" },
		{ "Chord.Name", "EHoudiniPublicAPICurveBreakpointParameterization::Chord" },
		{ "Invalid.Name", "EHoudiniPublicAPICurveBreakpointParameterization::Invalid" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "Uniform.Name", "EHoudiniPublicAPICurveBreakpointParameterization::Uniform" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniPublicAPICurveBreakpointParameterization::Invalid", (int64)EHoudiniPublicAPICurveBreakpointParameterization::Invalid },
		{ "EHoudiniPublicAPICurveBreakpointParameterization::Uniform", (int64)EHoudiniPublicAPICurveBreakpointParameterization::Uniform },
		{ "EHoudiniPublicAPICurveBreakpointParameterization::Chord", (int64)EHoudiniPublicAPICurveBreakpointParameterization::Chord },
		{ "EHoudiniPublicAPICurveBreakpointParameterization::Centripetal", (int64)EHoudiniPublicAPICurveBreakpointParameterization::Centripetal },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveBreakpointParameterization_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
	nullptr,
	"EHoudiniPublicAPICurveBreakpointParameterization",
	"EHoudiniPublicAPICurveBreakpointParameterization",
	Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveBreakpointParameterization_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveBreakpointParameterization_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveBreakpointParameterization_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveBreakpointParameterization_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveBreakpointParameterization()
{
	if (!Z_Registration_Info_UEnum_EHoudiniPublicAPICurveBreakpointParameterization.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniPublicAPICurveBreakpointParameterization.InnerSingleton, Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveBreakpointParameterization_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniPublicAPICurveBreakpointParameterization.InnerSingleton;
}
// End Enum EHoudiniPublicAPICurveBreakpointParameterization

// Begin Class UHoudiniPublicAPICurveInputObject Function AppendCurvePoint
struct HoudiniPublicAPICurveInputObject_eventAppendCurvePoint_Parms
{
	FTransform InCurvePoint;
};
static FName NAME_UHoudiniPublicAPICurveInputObject_AppendCurvePoint = FName(TEXT("AppendCurvePoint"));
void UHoudiniPublicAPICurveInputObject::AppendCurvePoint(FTransform const& InCurvePoint)
{
	HoudiniPublicAPICurveInputObject_eventAppendCurvePoint_Parms Parms;
	Parms.InCurvePoint=InCurvePoint;
	ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPICurveInputObject_AppendCurvePoint),&Parms);
}
struct Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "InCurvePoint" },
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Append a point to the end of this curve.\n\x09 * @param InCurvePoint The point to append.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Append a point to the end of this curve.\n@param InCurvePoint The point to append." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCurvePoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InCurvePoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint_Statics::NewProp_InCurvePoint = { "InCurvePoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPublicAPICurveInputObject_eventAppendCurvePoint_Parms, InCurvePoint), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCurvePoint_MetaData), NewProp_InCurvePoint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint_Statics::NewProp_InCurvePoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPICurveInputObject, nullptr, "AppendCurvePoint", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint_Statics::PropPointers), sizeof(HoudiniPublicAPICurveInputObject_eventAppendCurvePoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(HoudiniPublicAPICurveInputObject_eventAppendCurvePoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoudiniPublicAPICurveInputObject::execAppendCurvePoint)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_InCurvePoint);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AppendCurvePoint_Implementation(Z_Param_Out_InCurvePoint);
	P_NATIVE_END;
}
// End Class UHoudiniPublicAPICurveInputObject Function AppendCurvePoint

// Begin Class UHoudiniPublicAPICurveInputObject Function ClearCurvePoints
static FName NAME_UHoudiniPublicAPICurveInputObject_ClearCurvePoints = FName(TEXT("ClearCurvePoints"));
void UHoudiniPublicAPICurveInputObject::ClearCurvePoints()
{
	ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPICurveInputObject_ClearCurvePoints),NULL);
}
struct Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_ClearCurvePoints_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Remove all points from the curve. */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove all points from the curve." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_ClearCurvePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPICurveInputObject, nullptr, "ClearCurvePoints", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_ClearCurvePoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_ClearCurvePoints_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_ClearCurvePoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_ClearCurvePoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoudiniPublicAPICurveInputObject::execClearCurvePoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearCurvePoints_Implementation();
	P_NATIVE_END;
}
// End Class UHoudiniPublicAPICurveInputObject Function ClearCurvePoints

// Begin Class UHoudiniPublicAPICurveInputObject Function GetCurveBreakpointParameterization
struct HoudiniPublicAPICurveInputObject_eventGetCurveBreakpointParameterization_Parms
{
	EHoudiniPublicAPICurveBreakpointParameterization ReturnValue;

	/** Constructor, initializes return property only **/
	HoudiniPublicAPICurveInputObject_eventGetCurveBreakpointParameterization_Parms()
		: ReturnValue((EHoudiniPublicAPICurveBreakpointParameterization)0)
	{
	}
};
static FName NAME_UHoudiniPublicAPICurveInputObject_GetCurveBreakpointParameterization = FName(TEXT("GetCurveBreakpointParameterization"));
EHoudiniPublicAPICurveBreakpointParameterization UHoudiniPublicAPICurveInputObject::GetCurveBreakpointParameterization() const
{
	HoudiniPublicAPICurveInputObject_eventGetCurveBreakpointParameterization_Parms Parms;
	const_cast<UHoudiniPublicAPICurveInputObject*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPICurveInputObject_GetCurveBreakpointParameterization),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveBreakpointParameterization_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the curve breakpoint parameterization, for example Uniform, or Chord. */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the curve breakpoint parameterization, for example Uniform, or Chord." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveBreakpointParameterization_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveBreakpointParameterization_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPublicAPICurveInputObject_eventGetCurveBreakpointParameterization_Parms, ReturnValue), Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveBreakpointParameterization, METADATA_PARAMS(0, nullptr) }; // 204518696
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveBreakpointParameterization_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveBreakpointParameterization_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveBreakpointParameterization_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveBreakpointParameterization_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveBreakpointParameterization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPICurveInputObject, nullptr, "GetCurveBreakpointParameterization", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveBreakpointParameterization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveBreakpointParameterization_Statics::PropPointers), sizeof(HoudiniPublicAPICurveInputObject_eventGetCurveBreakpointParameterization_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveBreakpointParameterization_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveBreakpointParameterization_Statics::Function_MetaDataParams) };
static_assert(sizeof(HoudiniPublicAPICurveInputObject_eventGetCurveBreakpointParameterization_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveBreakpointParameterization()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveBreakpointParameterization_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoudiniPublicAPICurveInputObject::execGetCurveBreakpointParameterization)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EHoudiniPublicAPICurveBreakpointParameterization*)Z_Param__Result=P_THIS->GetCurveBreakpointParameterization_Implementation();
	P_NATIVE_END;
}
// End Class UHoudiniPublicAPICurveInputObject Function GetCurveBreakpointParameterization

// Begin Class UHoudiniPublicAPICurveInputObject Function GetCurveMethod
struct HoudiniPublicAPICurveInputObject_eventGetCurveMethod_Parms
{
	EHoudiniPublicAPICurveMethod ReturnValue;

	/** Constructor, initializes return property only **/
	HoudiniPublicAPICurveInputObject_eventGetCurveMethod_Parms()
		: ReturnValue((EHoudiniPublicAPICurveMethod)0)
	{
	}
};
static FName NAME_UHoudiniPublicAPICurveInputObject_GetCurveMethod = FName(TEXT("GetCurveMethod"));
EHoudiniPublicAPICurveMethod UHoudiniPublicAPICurveInputObject::GetCurveMethod() const
{
	HoudiniPublicAPICurveInputObject_eventGetCurveMethod_Parms Parms;
	const_cast<UHoudiniPublicAPICurveInputObject*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPICurveInputObject_GetCurveMethod),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the curve method, for example CVs, or freehand. */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the curve method, for example CVs, or freehand." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPublicAPICurveInputObject_eventGetCurveMethod_Parms, ReturnValue), Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveMethod, METADATA_PARAMS(0, nullptr) }; // 615332700
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPICurveInputObject, nullptr, "GetCurveMethod", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod_Statics::PropPointers), sizeof(HoudiniPublicAPICurveInputObject_eventGetCurveMethod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod_Statics::Function_MetaDataParams) };
static_assert(sizeof(HoudiniPublicAPICurveInputObject_eventGetCurveMethod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoudiniPublicAPICurveInputObject::execGetCurveMethod)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EHoudiniPublicAPICurveMethod*)Z_Param__Result=P_THIS->GetCurveMethod_Implementation();
	P_NATIVE_END;
}
// End Class UHoudiniPublicAPICurveInputObject Function GetCurveMethod

// Begin Class UHoudiniPublicAPICurveInputObject Function GetCurvePoints
struct HoudiniPublicAPICurveInputObject_eventGetCurvePoints_Parms
{
	TArray<FTransform> OutCurvePoints;
};
static FName NAME_UHoudiniPublicAPICurveInputObject_GetCurvePoints = FName(TEXT("GetCurvePoints"));
void UHoudiniPublicAPICurveInputObject::GetCurvePoints(TArray<FTransform>& OutCurvePoints) const
{
	HoudiniPublicAPICurveInputObject_eventGetCurvePoints_Parms Parms;
	Parms.OutCurvePoints=OutCurvePoints;
	const_cast<UHoudiniPublicAPICurveInputObject*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPICurveInputObject_GetCurvePoints),&Parms);
	OutCurvePoints=Parms.OutCurvePoints;
}
struct Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get all points of the curve.\n\x09 * @param OutCurvePoints Set to a copy of all of the points of the curve.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get all points of the curve.\n@param OutCurvePoints Set to a copy of all of the points of the curve." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutCurvePoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutCurvePoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints_Statics::NewProp_OutCurvePoints_Inner = { "OutCurvePoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints_Statics::NewProp_OutCurvePoints = { "OutCurvePoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPublicAPICurveInputObject_eventGetCurvePoints_Parms, OutCurvePoints), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints_Statics::NewProp_OutCurvePoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints_Statics::NewProp_OutCurvePoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPICurveInputObject, nullptr, "GetCurvePoints", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints_Statics::PropPointers), sizeof(HoudiniPublicAPICurveInputObject_eventGetCurvePoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(HoudiniPublicAPICurveInputObject_eventGetCurvePoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoudiniPublicAPICurveInputObject::execGetCurvePoints)
{
	P_GET_TARRAY_REF(FTransform,Z_Param_Out_OutCurvePoints);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCurvePoints_Implementation(Z_Param_Out_OutCurvePoints);
	P_NATIVE_END;
}
// End Class UHoudiniPublicAPICurveInputObject Function GetCurvePoints

// Begin Class UHoudiniPublicAPICurveInputObject Function GetCurveType
struct HoudiniPublicAPICurveInputObject_eventGetCurveType_Parms
{
	EHoudiniPublicAPICurveType ReturnValue;

	/** Constructor, initializes return property only **/
	HoudiniPublicAPICurveInputObject_eventGetCurveType_Parms()
		: ReturnValue((EHoudiniPublicAPICurveType)0)
	{
	}
};
static FName NAME_UHoudiniPublicAPICurveInputObject_GetCurveType = FName(TEXT("GetCurveType"));
EHoudiniPublicAPICurveType UHoudiniPublicAPICurveInputObject::GetCurveType() const
{
	HoudiniPublicAPICurveInputObject_eventGetCurveType_Parms Parms;
	const_cast<UHoudiniPublicAPICurveInputObject*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPICurveInputObject_GetCurveType),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the curve type (for example: polygon, nurbs, bezier) */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the curve type (for example: polygon, nurbs, bezier)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPublicAPICurveInputObject_eventGetCurveType_Parms, ReturnValue), Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveType, METADATA_PARAMS(0, nullptr) }; // 3609578188
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPICurveInputObject, nullptr, "GetCurveType", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType_Statics::PropPointers), sizeof(HoudiniPublicAPICurveInputObject_eventGetCurveType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType_Statics::Function_MetaDataParams) };
static_assert(sizeof(HoudiniPublicAPICurveInputObject_eventGetCurveType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoudiniPublicAPICurveInputObject::execGetCurveType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EHoudiniPublicAPICurveType*)Z_Param__Result=P_THIS->GetCurveType_Implementation();
	P_NATIVE_END;
}
// End Class UHoudiniPublicAPICurveInputObject Function GetCurveType

// Begin Class UHoudiniPublicAPICurveInputObject Function IsClosed
struct HoudiniPublicAPICurveInputObject_eventIsClosed_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	HoudiniPublicAPICurveInputObject_eventIsClosed_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UHoudiniPublicAPICurveInputObject_IsClosed = FName(TEXT("IsClosed"));
bool UHoudiniPublicAPICurveInputObject::IsClosed() const
{
	HoudiniPublicAPICurveInputObject_eventIsClosed_Parms Parms;
	const_cast<UHoudiniPublicAPICurveInputObject*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPICurveInputObject_IsClosed),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns true if this is a closed curve. */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if this is a closed curve." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HoudiniPublicAPICurveInputObject_eventIsClosed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPublicAPICurveInputObject_eventIsClosed_Parms), &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPICurveInputObject, nullptr, "IsClosed", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed_Statics::PropPointers), sizeof(HoudiniPublicAPICurveInputObject_eventIsClosed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed_Statics::Function_MetaDataParams) };
static_assert(sizeof(HoudiniPublicAPICurveInputObject_eventIsClosed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoudiniPublicAPICurveInputObject::execIsClosed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsClosed_Implementation();
	P_NATIVE_END;
}
// End Class UHoudiniPublicAPICurveInputObject Function IsClosed

// Begin Class UHoudiniPublicAPICurveInputObject Function IsReversed
struct HoudiniPublicAPICurveInputObject_eventIsReversed_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	HoudiniPublicAPICurveInputObject_eventIsReversed_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UHoudiniPublicAPICurveInputObject_IsReversed = FName(TEXT("IsReversed"));
bool UHoudiniPublicAPICurveInputObject::IsReversed() const
{
	HoudiniPublicAPICurveInputObject_eventIsReversed_Parms Parms;
	const_cast<UHoudiniPublicAPICurveInputObject*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPICurveInputObject_IsReversed),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns true if the curve is reversed. */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the curve is reversed." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HoudiniPublicAPICurveInputObject_eventIsReversed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPublicAPICurveInputObject_eventIsReversed_Parms), &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPICurveInputObject, nullptr, "IsReversed", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed_Statics::PropPointers), sizeof(HoudiniPublicAPICurveInputObject_eventIsReversed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed_Statics::Function_MetaDataParams) };
static_assert(sizeof(HoudiniPublicAPICurveInputObject_eventIsReversed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoudiniPublicAPICurveInputObject::execIsReversed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsReversed_Implementation();
	P_NATIVE_END;
}
// End Class UHoudiniPublicAPICurveInputObject Function IsReversed

// Begin Class UHoudiniPublicAPICurveInputObject Function SetClosed
struct HoudiniPublicAPICurveInputObject_eventSetClosed_Parms
{
	bool bInClosed;
};
static FName NAME_UHoudiniPublicAPICurveInputObject_SetClosed = FName(TEXT("SetClosed"));
void UHoudiniPublicAPICurveInputObject::SetClosed(bool bInClosed)
{
	HoudiniPublicAPICurveInputObject_eventSetClosed_Parms Parms;
	Parms.bInClosed=bInClosed ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPICurveInputObject_SetClosed),&Parms);
}
struct Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set whether the curve is closed or not.\n\x09 * @param bInClosed The new closed setting for the curve: set to true if the curve is closed.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set whether the curve is closed or not.\n@param bInClosed The new closed setting for the curve: set to true if the curve is closed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInClosed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bInClosed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInClosed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics::NewProp_bInClosed_SetBit(void* Obj)
{
	((HoudiniPublicAPICurveInputObject_eventSetClosed_Parms*)Obj)->bInClosed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics::NewProp_bInClosed = { "bInClosed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPublicAPICurveInputObject_eventSetClosed_Parms), &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics::NewProp_bInClosed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInClosed_MetaData), NewProp_bInClosed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics::NewProp_bInClosed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPICurveInputObject, nullptr, "SetClosed", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics::PropPointers), sizeof(HoudiniPublicAPICurveInputObject_eventSetClosed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics::Function_MetaDataParams) };
static_assert(sizeof(HoudiniPublicAPICurveInputObject_eventSetClosed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoudiniPublicAPICurveInputObject::execSetClosed)
{
	P_GET_UBOOL(Z_Param_bInClosed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetClosed_Implementation(Z_Param_bInClosed);
	P_NATIVE_END;
}
// End Class UHoudiniPublicAPICurveInputObject Function SetClosed

// Begin Class UHoudiniPublicAPICurveInputObject Function SetCurveBreakpointParameterization
struct HoudiniPublicAPICurveInputObject_eventSetCurveBreakpointParameterization_Parms
{
	EHoudiniPublicAPICurveBreakpointParameterization InCurveBreakpointParameterization;
};
static FName NAME_UHoudiniPublicAPICurveInputObject_SetCurveBreakpointParameterization = FName(TEXT("SetCurveBreakpointParameterization"));
void UHoudiniPublicAPICurveInputObject::SetCurveBreakpointParameterization(const EHoudiniPublicAPICurveBreakpointParameterization InCurveBreakpointParameterization)
{
	HoudiniPublicAPICurveInputObject_eventSetCurveBreakpointParameterization_Parms Parms;
	Parms.InCurveBreakpointParameterization=InCurveBreakpointParameterization;
	ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPICurveInputObject_SetCurveBreakpointParameterization),&Parms);
}
struct Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveBreakpointParameterization_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Set the curve breakpoint parameterization, for example Uniform, or Chord.\n\x09* @param InCurveBreakpointParameterization The new curve method.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the curve breakpoint parameterization, for example Uniform, or Chord.\n@param InCurveBreakpointParameterization The new curve method." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCurveBreakpointParameterization_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InCurveBreakpointParameterization_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InCurveBreakpointParameterization;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveBreakpointParameterization_Statics::NewProp_InCurveBreakpointParameterization_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveBreakpointParameterization_Statics::NewProp_InCurveBreakpointParameterization = { "InCurveBreakpointParameterization", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPublicAPICurveInputObject_eventSetCurveBreakpointParameterization_Parms, InCurveBreakpointParameterization), Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveBreakpointParameterization, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCurveBreakpointParameterization_MetaData), NewProp_InCurveBreakpointParameterization_MetaData) }; // 204518696
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveBreakpointParameterization_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveBreakpointParameterization_Statics::NewProp_InCurveBreakpointParameterization_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveBreakpointParameterization_Statics::NewProp_InCurveBreakpointParameterization,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveBreakpointParameterization_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveBreakpointParameterization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPICurveInputObject, nullptr, "SetCurveBreakpointParameterization", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveBreakpointParameterization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveBreakpointParameterization_Statics::PropPointers), sizeof(HoudiniPublicAPICurveInputObject_eventSetCurveBreakpointParameterization_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveBreakpointParameterization_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveBreakpointParameterization_Statics::Function_MetaDataParams) };
static_assert(sizeof(HoudiniPublicAPICurveInputObject_eventSetCurveBreakpointParameterization_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveBreakpointParameterization()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveBreakpointParameterization_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoudiniPublicAPICurveInputObject::execSetCurveBreakpointParameterization)
{
	P_GET_ENUM(EHoudiniPublicAPICurveBreakpointParameterization,Z_Param_InCurveBreakpointParameterization);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurveBreakpointParameterization_Implementation(EHoudiniPublicAPICurveBreakpointParameterization(Z_Param_InCurveBreakpointParameterization));
	P_NATIVE_END;
}
// End Class UHoudiniPublicAPICurveInputObject Function SetCurveBreakpointParameterization

// Begin Class UHoudiniPublicAPICurveInputObject Function SetCurveMethod
struct HoudiniPublicAPICurveInputObject_eventSetCurveMethod_Parms
{
	EHoudiniPublicAPICurveMethod InCurveMethod;
};
static FName NAME_UHoudiniPublicAPICurveInputObject_SetCurveMethod = FName(TEXT("SetCurveMethod"));
void UHoudiniPublicAPICurveInputObject::SetCurveMethod(const EHoudiniPublicAPICurveMethod InCurveMethod)
{
	HoudiniPublicAPICurveInputObject_eventSetCurveMethod_Parms Parms;
	Parms.InCurveMethod=InCurveMethod;
	ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPICurveInputObject_SetCurveMethod),&Parms);
}
struct Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the curve method, for example CVs, or freehand.\n\x09 * @param InCurveMethod The new curve method.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the curve method, for example CVs, or freehand.\n@param InCurveMethod The new curve method." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCurveMethod_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InCurveMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InCurveMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics::NewProp_InCurveMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics::NewProp_InCurveMethod = { "InCurveMethod", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPublicAPICurveInputObject_eventSetCurveMethod_Parms, InCurveMethod), Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCurveMethod_MetaData), NewProp_InCurveMethod_MetaData) }; // 615332700
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics::NewProp_InCurveMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics::NewProp_InCurveMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPICurveInputObject, nullptr, "SetCurveMethod", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics::PropPointers), sizeof(HoudiniPublicAPICurveInputObject_eventSetCurveMethod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics::Function_MetaDataParams) };
static_assert(sizeof(HoudiniPublicAPICurveInputObject_eventSetCurveMethod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoudiniPublicAPICurveInputObject::execSetCurveMethod)
{
	P_GET_ENUM(EHoudiniPublicAPICurveMethod,Z_Param_InCurveMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurveMethod_Implementation(EHoudiniPublicAPICurveMethod(Z_Param_InCurveMethod));
	P_NATIVE_END;
}
// End Class UHoudiniPublicAPICurveInputObject Function SetCurveMethod

// Begin Class UHoudiniPublicAPICurveInputObject Function SetCurvePoints
struct HoudiniPublicAPICurveInputObject_eventSetCurvePoints_Parms
{
	TArray<FTransform> InCurvePoints;
};
static FName NAME_UHoudiniPublicAPICurveInputObject_SetCurvePoints = FName(TEXT("SetCurvePoints"));
void UHoudiniPublicAPICurveInputObject::SetCurvePoints(TArray<FTransform> const& InCurvePoints)
{
	HoudiniPublicAPICurveInputObject_eventSetCurvePoints_Parms Parms;
	Parms.InCurvePoints=InCurvePoints;
	ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPICurveInputObject_SetCurvePoints),&Parms);
}
struct Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the points of the curve (replacing any previously set points with InCurvePoints).\n\x09 * @param InCurvePoints The new points to set / replace the curve's points with.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the points of the curve (replacing any previously set points with InCurvePoints).\n@param InCurvePoints The new points to set / replace the curve's points with." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCurvePoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InCurvePoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InCurvePoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics::NewProp_InCurvePoints_Inner = { "InCurvePoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics::NewProp_InCurvePoints = { "InCurvePoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPublicAPICurveInputObject_eventSetCurvePoints_Parms, InCurvePoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCurvePoints_MetaData), NewProp_InCurvePoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics::NewProp_InCurvePoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics::NewProp_InCurvePoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPICurveInputObject, nullptr, "SetCurvePoints", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics::PropPointers), sizeof(HoudiniPublicAPICurveInputObject_eventSetCurvePoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(HoudiniPublicAPICurveInputObject_eventSetCurvePoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoudiniPublicAPICurveInputObject::execSetCurvePoints)
{
	P_GET_TARRAY_REF(FTransform,Z_Param_Out_InCurvePoints);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurvePoints_Implementation(Z_Param_Out_InCurvePoints);
	P_NATIVE_END;
}
// End Class UHoudiniPublicAPICurveInputObject Function SetCurvePoints

// Begin Class UHoudiniPublicAPICurveInputObject Function SetCurveType
struct HoudiniPublicAPICurveInputObject_eventSetCurveType_Parms
{
	EHoudiniPublicAPICurveType InCurveType;
};
static FName NAME_UHoudiniPublicAPICurveInputObject_SetCurveType = FName(TEXT("SetCurveType"));
void UHoudiniPublicAPICurveInputObject::SetCurveType(const EHoudiniPublicAPICurveType InCurveType)
{
	HoudiniPublicAPICurveInputObject_eventSetCurveType_Parms Parms;
	Parms.InCurveType=InCurveType;
	ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPICurveInputObject_SetCurveType),&Parms);
}
struct Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the curve type (for example: polygon, nurbs, bezier).\n\x09 * @param InCurveType The new curve type.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the curve type (for example: polygon, nurbs, bezier).\n@param InCurveType The new curve type." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCurveType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InCurveType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InCurveType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics::NewProp_InCurveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics::NewProp_InCurveType = { "InCurveType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPublicAPICurveInputObject_eventSetCurveType_Parms, InCurveType), Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCurveType_MetaData), NewProp_InCurveType_MetaData) }; // 3609578188
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics::NewProp_InCurveType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics::NewProp_InCurveType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPICurveInputObject, nullptr, "SetCurveType", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics::PropPointers), sizeof(HoudiniPublicAPICurveInputObject_eventSetCurveType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics::Function_MetaDataParams) };
static_assert(sizeof(HoudiniPublicAPICurveInputObject_eventSetCurveType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoudiniPublicAPICurveInputObject::execSetCurveType)
{
	P_GET_ENUM(EHoudiniPublicAPICurveType,Z_Param_InCurveType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurveType_Implementation(EHoudiniPublicAPICurveType(Z_Param_InCurveType));
	P_NATIVE_END;
}
// End Class UHoudiniPublicAPICurveInputObject Function SetCurveType

// Begin Class UHoudiniPublicAPICurveInputObject Function SetReversed
struct HoudiniPublicAPICurveInputObject_eventSetReversed_Parms
{
	bool bInReversed;
};
static FName NAME_UHoudiniPublicAPICurveInputObject_SetReversed = FName(TEXT("SetReversed"));
void UHoudiniPublicAPICurveInputObject::SetReversed(bool bInReversed)
{
	HoudiniPublicAPICurveInputObject_eventSetReversed_Parms Parms;
	Parms.bInReversed=bInReversed ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPICurveInputObject_SetReversed),&Parms);
}
struct Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set whether the curve is reversed or not.\n\x09 * @param bInReversed The new reversed setting for the curve: set to true if the curve is reversed.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set whether the curve is reversed or not.\n@param bInReversed The new reversed setting for the curve: set to true if the curve is reversed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInReversed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bInReversed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInReversed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics::NewProp_bInReversed_SetBit(void* Obj)
{
	((HoudiniPublicAPICurveInputObject_eventSetReversed_Parms*)Obj)->bInReversed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics::NewProp_bInReversed = { "bInReversed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPublicAPICurveInputObject_eventSetReversed_Parms), &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics::NewProp_bInReversed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInReversed_MetaData), NewProp_bInReversed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics::NewProp_bInReversed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPICurveInputObject, nullptr, "SetReversed", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics::PropPointers), sizeof(HoudiniPublicAPICurveInputObject_eventSetReversed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics::Function_MetaDataParams) };
static_assert(sizeof(HoudiniPublicAPICurveInputObject_eventSetReversed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoudiniPublicAPICurveInputObject::execSetReversed)
{
	P_GET_UBOOL(Z_Param_bInReversed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetReversed_Implementation(Z_Param_bInReversed);
	P_NATIVE_END;
}
// End Class UHoudiniPublicAPICurveInputObject Function SetReversed

// Begin Class UHoudiniPublicAPICurveInputObject
void UHoudiniPublicAPICurveInputObject::StaticRegisterNativesUHoudiniPublicAPICurveInputObject()
{
	UClass* Class = UHoudiniPublicAPICurveInputObject::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AppendCurvePoint", &UHoudiniPublicAPICurveInputObject::execAppendCurvePoint },
		{ "ClearCurvePoints", &UHoudiniPublicAPICurveInputObject::execClearCurvePoints },
		{ "GetCurveBreakpointParameterization", &UHoudiniPublicAPICurveInputObject::execGetCurveBreakpointParameterization },
		{ "GetCurveMethod", &UHoudiniPublicAPICurveInputObject::execGetCurveMethod },
		{ "GetCurvePoints", &UHoudiniPublicAPICurveInputObject::execGetCurvePoints },
		{ "GetCurveType", &UHoudiniPublicAPICurveInputObject::execGetCurveType },
		{ "IsClosed", &UHoudiniPublicAPICurveInputObject::execIsClosed },
		{ "IsReversed", &UHoudiniPublicAPICurveInputObject::execIsReversed },
		{ "SetClosed", &UHoudiniPublicAPICurveInputObject::execSetClosed },
		{ "SetCurveBreakpointParameterization", &UHoudiniPublicAPICurveInputObject::execSetCurveBreakpointParameterization },
		{ "SetCurveMethod", &UHoudiniPublicAPICurveInputObject::execSetCurveMethod },
		{ "SetCurvePoints", &UHoudiniPublicAPICurveInputObject::execSetCurvePoints },
		{ "SetCurveType", &UHoudiniPublicAPICurveInputObject::execSetCurveType },
		{ "SetReversed", &UHoudiniPublicAPICurveInputObject::execSetReversed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniPublicAPICurveInputObject);
UClass* Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_NoRegister()
{
	return UHoudiniPublicAPICurveInputObject::StaticClass();
}
struct Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * API wrapper input class for curve inputs. Derived from UHoudiniPublicAPIInput.\n */" },
#endif
		{ "IncludePath", "HoudiniPublicAPIInputTypes.h" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "API wrapper input class for curve inputs. Derived from UHoudiniPublicAPIInput." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurvePoints_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The control points of the curve. */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The control points of the curve." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClosed_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the curve is closed (true) or not. */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the curve is closed (true) or not." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReversed_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the curve is reversed (true) or not. */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the curve is reversed (true) or not." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveType_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The curve type (for example: polygon, nurbs, bezier). */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The curve type (for example: polygon, nurbs, bezier)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveMethod_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The curve method, for example CVs, or freehand. */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The curve method, for example CVs, or freehand." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveBreakpointParameterization_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The curve breakpoint parameterization, for example CVs, or freehand. */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The curve breakpoint parameterization, for example CVs, or freehand." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurvePoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurvePoints;
	static void NewProp_bClosed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClosed;
	static void NewProp_bReversed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReversed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurveType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurveMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveMethod;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurveBreakpointParameterization_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveBreakpointParameterization;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint, "AppendCurvePoint" }, // 1996233107
		{ &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_ClearCurvePoints, "ClearCurvePoints" }, // 491123709
		{ &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveBreakpointParameterization, "GetCurveBreakpointParameterization" }, // 2944299188
		{ &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod, "GetCurveMethod" }, // 1673560828
		{ &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints, "GetCurvePoints" }, // 1348654472
		{ &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType, "GetCurveType" }, // 294796240
		{ &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed, "IsClosed" }, // 3563888405
		{ &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed, "IsReversed" }, // 846733244
		{ &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed, "SetClosed" }, // 426629323
		{ &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveBreakpointParameterization, "SetCurveBreakpointParameterization" }, // 2288516735
		{ &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod, "SetCurveMethod" }, // 1976412728
		{ &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints, "SetCurvePoints" }, // 2698910072
		{ &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType, "SetCurveType" }, // 3835345551
		{ &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed, "SetReversed" }, // 3154616036
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPublicAPICurveInputObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurvePoints_Inner = { "CurvePoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurvePoints = { "CurvePoints", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPublicAPICurveInputObject, CurvePoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurvePoints_MetaData), NewProp_CurvePoints_MetaData) };
void Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_bClosed_SetBit(void* Obj)
{
	((UHoudiniPublicAPICurveInputObject*)Obj)->bClosed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_bClosed = { "bClosed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPublicAPICurveInputObject), &Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_bClosed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClosed_MetaData), NewProp_bClosed_MetaData) };
void Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_bReversed_SetBit(void* Obj)
{
	((UHoudiniPublicAPICurveInputObject*)Obj)->bReversed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_bReversed = { "bReversed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPublicAPICurveInputObject), &Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_bReversed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReversed_MetaData), NewProp_bReversed_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveType = { "CurveType", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPublicAPICurveInputObject, CurveType), Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveType_MetaData), NewProp_CurveType_MetaData) }; // 3609578188
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveMethod = { "CurveMethod", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPublicAPICurveInputObject, CurveMethod), Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveMethod_MetaData), NewProp_CurveMethod_MetaData) }; // 615332700
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveBreakpointParameterization_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveBreakpointParameterization = { "CurveBreakpointParameterization", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPublicAPICurveInputObject, CurveBreakpointParameterization), Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveBreakpointParameterization, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveBreakpointParameterization_MetaData), NewProp_CurveBreakpointParameterization_MetaData) }; // 204518696
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurvePoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurvePoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_bClosed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_bReversed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveBreakpointParameterization_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveBreakpointParameterization,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniPublicAPIObjectBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::ClassParams = {
	&UHoudiniPublicAPICurveInputObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniPublicAPICurveInputObject()
{
	if (!Z_Registration_Info_UClass_UHoudiniPublicAPICurveInputObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPublicAPICurveInputObject.OuterSingleton, Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniPublicAPICurveInputObject.OuterSingleton;
}
template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniPublicAPICurveInputObject>()
{
	return UHoudiniPublicAPICurveInputObject::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPublicAPICurveInputObject);
UHoudiniPublicAPICurveInputObject::~UHoudiniPublicAPICurveInputObject() {}
// End Class UHoudiniPublicAPICurveInputObject

// Begin Class UHoudiniPublicAPICurveInput
void UHoudiniPublicAPICurveInput::StaticRegisterNativesUHoudiniPublicAPICurveInput()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniPublicAPICurveInput);
UClass* Z_Construct_UClass_UHoudiniPublicAPICurveInput_NoRegister()
{
	return UHoudiniPublicAPICurveInput::StaticClass();
}
struct Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Houdini Engine | Public API | Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * API wrapper input class for curve inputs. Derived from UHoudiniPublicAPIInput.\n */" },
#endif
		{ "IncludePath", "HoudiniPublicAPIInputTypes.h" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "API wrapper input class for curve inputs. Derived from UHoudiniPublicAPIInput." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCookOnCurveChanged_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Indicates that if trigger cook automatically on curve Input spline modified */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates that if trigger cook automatically on curve Input spline modified" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddRotAndScaleAttributesOnCurves_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set this to true to add rot and scale attributes on curve inputs. */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set this to true to add rot and scale attributes on curve inputs." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLegacyInputCurves_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set this to true to use legacy input curves (i.e. curve::1.0). */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set this to true to use legacy input curves (i.e. curve::1.0)." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bCookOnCurveChanged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCookOnCurveChanged;
	static void NewProp_bAddRotAndScaleAttributesOnCurves_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddRotAndScaleAttributesOnCurves;
	static void NewProp_bUseLegacyInputCurves_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLegacyInputCurves;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPublicAPICurveInput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bCookOnCurveChanged_SetBit(void* Obj)
{
	((UHoudiniPublicAPICurveInput*)Obj)->bCookOnCurveChanged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bCookOnCurveChanged = { "bCookOnCurveChanged", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPublicAPICurveInput), &Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bCookOnCurveChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCookOnCurveChanged_MetaData), NewProp_bCookOnCurveChanged_MetaData) };
void Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_SetBit(void* Obj)
{
	((UHoudiniPublicAPICurveInput*)Obj)->bAddRotAndScaleAttributesOnCurves = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bAddRotAndScaleAttributesOnCurves = { "bAddRotAndScaleAttributesOnCurves", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPublicAPICurveInput), &Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddRotAndScaleAttributesOnCurves_MetaData), NewProp_bAddRotAndScaleAttributesOnCurves_MetaData) };
void Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bUseLegacyInputCurves_SetBit(void* Obj)
{
	((UHoudiniPublicAPICurveInput*)Obj)->bUseLegacyInputCurves = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bUseLegacyInputCurves = { "bUseLegacyInputCurves", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPublicAPICurveInput), &Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bUseLegacyInputCurves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLegacyInputCurves_MetaData), NewProp_bUseLegacyInputCurves_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bCookOnCurveChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bAddRotAndScaleAttributesOnCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bUseLegacyInputCurves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniPublicAPIInput,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::ClassParams = {
	&UHoudiniPublicAPICurveInput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniPublicAPICurveInput()
{
	if (!Z_Registration_Info_UClass_UHoudiniPublicAPICurveInput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPublicAPICurveInput.OuterSingleton, Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniPublicAPICurveInput.OuterSingleton;
}
template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniPublicAPICurveInput>()
{
	return UHoudiniPublicAPICurveInput::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPublicAPICurveInput);
UHoudiniPublicAPICurveInput::~UHoudiniPublicAPICurveInput() {}
// End Class UHoudiniPublicAPICurveInput

// Begin Class UHoudiniPublicAPIWorldInput
void UHoudiniPublicAPIWorldInput::StaticRegisterNativesUHoudiniPublicAPIWorldInput()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniPublicAPIWorldInput);
UClass* Z_Construct_UClass_UHoudiniPublicAPIWorldInput_NoRegister()
{
	return UHoudiniPublicAPIWorldInput::StaticClass();
}
struct Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Houdini Engine | Public API | Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * API wrapper input class for world inputs. Derived from UHoudiniPublicAPIGeoInput.\n */" },
#endif
		{ "IncludePath", "HoudiniPublicAPIInputTypes.h" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "API wrapper input class for world inputs. Derived from UHoudiniPublicAPIGeoInput." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldInputBoundSelectorObjects_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Objects used for automatic bound selection */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Objects used for automatic bound selection" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsWorldInputBoundSelector_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Indicates that this world input is in \"BoundSelector\" mode */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates that this world input is in \"BoundSelector\" mode" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWorldInputBoundSelectorAutoUpdate_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Indicates that selected actors by the bound selectors should update automatically */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates that selected actors by the bound selectors should update automatically" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnrealSplineResolution_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Resolution used when converting unreal splines to houdini curves */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resolution used when converting unreal splines to houdini curves" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportLevelInstanceContent_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If enabled, level instances (and packed level actor) content is exported vs just exporting a single point\n\x09 * with attributes identifying the level instance / packed level actor.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, level instances (and packed level actor) content is exported vs just exporting a single point\nwith attributes identifying the level instance / packed level actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDirectlyConnectHdas_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* If enabled, HDA used as inputs objects will be directly connected to this HDAs input in Houdini\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, HDA used as inputs objects will be directly connected to this HDAs input in Houdini" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportHeightDataPerEditLayer_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* If enabled, Edit Layers data will be exported with Landscapes.\n\x09* If Edit Layers are not needed, disabling this will improve performance\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, Edit Layers data will be exported with Landscapes.\nIf Edit Layers are not needed, disabling this will improve performance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportPaintLayersPerEditLayer_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Paint Layer export.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Paint Layer export." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportMergedPaintLayers_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldInputBoundSelectorObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WorldInputBoundSelectorObjects;
	static void NewProp_bIsWorldInputBoundSelector_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWorldInputBoundSelector;
	static void NewProp_bWorldInputBoundSelectorAutoUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorldInputBoundSelectorAutoUpdate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UnrealSplineResolution;
	static void NewProp_bExportLevelInstanceContent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportLevelInstanceContent;
	static void NewProp_bDirectlyConnectHdas_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDirectlyConnectHdas;
	static void NewProp_bExportHeightDataPerEditLayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportHeightDataPerEditLayer;
	static void NewProp_bExportPaintLayersPerEditLayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportPaintLayersPerEditLayer;
	static void NewProp_bExportMergedPaintLayers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportMergedPaintLayers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPublicAPIWorldInput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_WorldInputBoundSelectorObjects_Inner = { "WorldInputBoundSelectorObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_WorldInputBoundSelectorObjects = { "WorldInputBoundSelectorObjects", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPublicAPIWorldInput, WorldInputBoundSelectorObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldInputBoundSelectorObjects_MetaData), NewProp_WorldInputBoundSelectorObjects_MetaData) };
void Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bIsWorldInputBoundSelector_SetBit(void* Obj)
{
	((UHoudiniPublicAPIWorldInput*)Obj)->bIsWorldInputBoundSelector = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bIsWorldInputBoundSelector = { "bIsWorldInputBoundSelector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPublicAPIWorldInput), &Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bIsWorldInputBoundSelector_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsWorldInputBoundSelector_MetaData), NewProp_bIsWorldInputBoundSelector_MetaData) };
void Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bWorldInputBoundSelectorAutoUpdate_SetBit(void* Obj)
{
	((UHoudiniPublicAPIWorldInput*)Obj)->bWorldInputBoundSelectorAutoUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bWorldInputBoundSelectorAutoUpdate = { "bWorldInputBoundSelectorAutoUpdate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPublicAPIWorldInput), &Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bWorldInputBoundSelectorAutoUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWorldInputBoundSelectorAutoUpdate_MetaData), NewProp_bWorldInputBoundSelectorAutoUpdate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_UnrealSplineResolution = { "UnrealSplineResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPublicAPIWorldInput, UnrealSplineResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnrealSplineResolution_MetaData), NewProp_UnrealSplineResolution_MetaData) };
void Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bExportLevelInstanceContent_SetBit(void* Obj)
{
	((UHoudiniPublicAPIWorldInput*)Obj)->bExportLevelInstanceContent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bExportLevelInstanceContent = { "bExportLevelInstanceContent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPublicAPIWorldInput), &Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bExportLevelInstanceContent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportLevelInstanceContent_MetaData), NewProp_bExportLevelInstanceContent_MetaData) };
void Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bDirectlyConnectHdas_SetBit(void* Obj)
{
	((UHoudiniPublicAPIWorldInput*)Obj)->bDirectlyConnectHdas = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bDirectlyConnectHdas = { "bDirectlyConnectHdas", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPublicAPIWorldInput), &Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bDirectlyConnectHdas_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDirectlyConnectHdas_MetaData), NewProp_bDirectlyConnectHdas_MetaData) };
void Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bExportHeightDataPerEditLayer_SetBit(void* Obj)
{
	((UHoudiniPublicAPIWorldInput*)Obj)->bExportHeightDataPerEditLayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bExportHeightDataPerEditLayer = { "bExportHeightDataPerEditLayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPublicAPIWorldInput), &Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bExportHeightDataPerEditLayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportHeightDataPerEditLayer_MetaData), NewProp_bExportHeightDataPerEditLayer_MetaData) };
void Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bExportPaintLayersPerEditLayer_SetBit(void* Obj)
{
	((UHoudiniPublicAPIWorldInput*)Obj)->bExportPaintLayersPerEditLayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bExportPaintLayersPerEditLayer = { "bExportPaintLayersPerEditLayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPublicAPIWorldInput), &Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bExportPaintLayersPerEditLayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportPaintLayersPerEditLayer_MetaData), NewProp_bExportPaintLayersPerEditLayer_MetaData) };
void Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bExportMergedPaintLayers_SetBit(void* Obj)
{
	((UHoudiniPublicAPIWorldInput*)Obj)->bExportMergedPaintLayers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bExportMergedPaintLayers = { "bExportMergedPaintLayers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPublicAPIWorldInput), &Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bExportMergedPaintLayers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportMergedPaintLayers_MetaData), NewProp_bExportMergedPaintLayers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_WorldInputBoundSelectorObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_WorldInputBoundSelectorObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bIsWorldInputBoundSelector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bWorldInputBoundSelectorAutoUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_UnrealSplineResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bExportLevelInstanceContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bDirectlyConnectHdas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bExportHeightDataPerEditLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bExportPaintLayersPerEditLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bExportMergedPaintLayers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniPublicAPIGeoInput,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::ClassParams = {
	&UHoudiniPublicAPIWorldInput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniPublicAPIWorldInput()
{
	if (!Z_Registration_Info_UClass_UHoudiniPublicAPIWorldInput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPublicAPIWorldInput.OuterSingleton, Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniPublicAPIWorldInput.OuterSingleton;
}
template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniPublicAPIWorldInput>()
{
	return UHoudiniPublicAPIWorldInput::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPublicAPIWorldInput);
UHoudiniPublicAPIWorldInput::~UHoudiniPublicAPIWorldInput() {}
// End Class UHoudiniPublicAPIWorldInput

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniPublicAPICurveType_StaticEnum, TEXT("EHoudiniPublicAPICurveType"), &Z_Registration_Info_UEnum_EHoudiniPublicAPICurveType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3609578188U) },
		{ EHoudiniPublicAPICurveMethod_StaticEnum, TEXT("EHoudiniPublicAPICurveMethod"), &Z_Registration_Info_UEnum_EHoudiniPublicAPICurveMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 615332700U) },
		{ EHoudiniPublicAPICurveBreakpointParameterization_StaticEnum, TEXT("EHoudiniPublicAPICurveBreakpointParameterization"), &Z_Registration_Info_UEnum_EHoudiniPublicAPICurveBreakpointParameterization, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 204518696U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniPublicAPIInput, UHoudiniPublicAPIInput::StaticClass, TEXT("UHoudiniPublicAPIInput"), &Z_Registration_Info_UClass_UHoudiniPublicAPIInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPublicAPIInput), 3574247097U) },
		{ Z_Construct_UClass_UHoudiniPublicAPIGeoInput, UHoudiniPublicAPIGeoInput::StaticClass, TEXT("UHoudiniPublicAPIGeoInput"), &Z_Registration_Info_UClass_UHoudiniPublicAPIGeoInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPublicAPIGeoInput), 3401193262U) },
		{ Z_Construct_UClass_UHoudiniPublicAPICurveInputObject, UHoudiniPublicAPICurveInputObject::StaticClass, TEXT("UHoudiniPublicAPICurveInputObject"), &Z_Registration_Info_UClass_UHoudiniPublicAPICurveInputObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPublicAPICurveInputObject), 972147296U) },
		{ Z_Construct_UClass_UHoudiniPublicAPICurveInput, UHoudiniPublicAPICurveInput::StaticClass, TEXT("UHoudiniPublicAPICurveInput"), &Z_Registration_Info_UClass_UHoudiniPublicAPICurveInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPublicAPICurveInput), 1288587502U) },
		{ Z_Construct_UClass_UHoudiniPublicAPIWorldInput, UHoudiniPublicAPIWorldInput::StaticClass, TEXT("UHoudiniPublicAPIWorldInput"), &Z_Registration_Info_UClass_UHoudiniPublicAPIWorldInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPublicAPIWorldInput), 1248150148U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_2843462902(TEXT("/Script/HoudiniEngineEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
