// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniStaticMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniStaticMeshComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniStaticMesh_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniStaticMeshComponent();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniStaticMeshComponent Function GetMesh
struct Z_Construct_UFunction_UHoudiniStaticMeshComponent_GetMesh_Statics
{
	struct HoudiniStaticMeshComponent_eventGetMesh_Parms
	{
		UHoudiniStaticMesh* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniStaticMeshComponent_GetMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniStaticMeshComponent_eventGetMesh_Parms, ReturnValue), Z_Construct_UClass_UHoudiniStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMeshComponent_GetMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMeshComponent_GetMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMeshComponent_GetMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMeshComponent_GetMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMeshComponent, nullptr, "GetMesh", nullptr, nullptr, Z_Construct_UFunction_UHoudiniStaticMeshComponent_GetMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMeshComponent_GetMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniStaticMeshComponent_GetMesh_Statics::HoudiniStaticMeshComponent_eventGetMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMeshComponent_GetMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniStaticMeshComponent_GetMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHoudiniStaticMeshComponent_GetMesh_Statics::HoudiniStaticMeshComponent_eventGetMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoudiniStaticMeshComponent_GetMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMeshComponent_GetMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoudiniStaticMeshComponent::execGetMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UHoudiniStaticMesh**)Z_Param__Result=P_THIS->GetMesh();
	P_NATIVE_END;
}
// End Class UHoudiniStaticMeshComponent Function GetMesh

// Begin Class UHoudiniStaticMeshComponent Function IsHoudiniIconVisible
struct Z_Construct_UFunction_UHoudiniStaticMeshComponent_IsHoudiniIconVisible_Statics
{
	struct HoudiniStaticMeshComponent_eventIsHoudiniIconVisible_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMeshComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHoudiniStaticMeshComponent_IsHoudiniIconVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HoudiniStaticMeshComponent_eventIsHoudiniIconVisible_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniStaticMeshComponent_IsHoudiniIconVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniStaticMeshComponent_eventIsHoudiniIconVisible_Parms), &Z_Construct_UFunction_UHoudiniStaticMeshComponent_IsHoudiniIconVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMeshComponent_IsHoudiniIconVisible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMeshComponent_IsHoudiniIconVisible_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMeshComponent_IsHoudiniIconVisible_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMeshComponent_IsHoudiniIconVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMeshComponent, nullptr, "IsHoudiniIconVisible", nullptr, nullptr, Z_Construct_UFunction_UHoudiniStaticMeshComponent_IsHoudiniIconVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMeshComponent_IsHoudiniIconVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniStaticMeshComponent_IsHoudiniIconVisible_Statics::HoudiniStaticMeshComponent_eventIsHoudiniIconVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMeshComponent_IsHoudiniIconVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniStaticMeshComponent_IsHoudiniIconVisible_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHoudiniStaticMeshComponent_IsHoudiniIconVisible_Statics::HoudiniStaticMeshComponent_eventIsHoudiniIconVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoudiniStaticMeshComponent_IsHoudiniIconVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMeshComponent_IsHoudiniIconVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoudiniStaticMeshComponent::execIsHoudiniIconVisible)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsHoudiniIconVisible();
	P_NATIVE_END;
}
// End Class UHoudiniStaticMeshComponent Function IsHoudiniIconVisible

// Begin Class UHoudiniStaticMeshComponent Function NotifyMeshUpdated
struct Z_Construct_UFunction_UHoudiniStaticMeshComponent_NotifyMeshUpdated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Call this if the mesh updated (outside of calling SetMesh).\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniStaticMeshComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call this if the mesh updated (outside of calling SetMesh)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMeshComponent_NotifyMeshUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMeshComponent, nullptr, "NotifyMeshUpdated", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMeshComponent_NotifyMeshUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniStaticMeshComponent_NotifyMeshUpdated_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHoudiniStaticMeshComponent_NotifyMeshUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMeshComponent_NotifyMeshUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoudiniStaticMeshComponent::execNotifyMeshUpdated)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyMeshUpdated();
	P_NATIVE_END;
}
// End Class UHoudiniStaticMeshComponent Function NotifyMeshUpdated

// Begin Class UHoudiniStaticMeshComponent Function SetHoudiniIconVisible
struct Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetHoudiniIconVisible_Statics
{
	struct HoudiniStaticMeshComponent_eventSetHoudiniIconVisible_Parms
	{
		bool bInHoudiniIconVisible;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMeshComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bInHoudiniIconVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInHoudiniIconVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetHoudiniIconVisible_Statics::NewProp_bInHoudiniIconVisible_SetBit(void* Obj)
{
	((HoudiniStaticMeshComponent_eventSetHoudiniIconVisible_Parms*)Obj)->bInHoudiniIconVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetHoudiniIconVisible_Statics::NewProp_bInHoudiniIconVisible = { "bInHoudiniIconVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniStaticMeshComponent_eventSetHoudiniIconVisible_Parms), &Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetHoudiniIconVisible_Statics::NewProp_bInHoudiniIconVisible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetHoudiniIconVisible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetHoudiniIconVisible_Statics::NewProp_bInHoudiniIconVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetHoudiniIconVisible_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetHoudiniIconVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMeshComponent, nullptr, "SetHoudiniIconVisible", nullptr, nullptr, Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetHoudiniIconVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetHoudiniIconVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetHoudiniIconVisible_Statics::HoudiniStaticMeshComponent_eventSetHoudiniIconVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetHoudiniIconVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetHoudiniIconVisible_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetHoudiniIconVisible_Statics::HoudiniStaticMeshComponent_eventSetHoudiniIconVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetHoudiniIconVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetHoudiniIconVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoudiniStaticMeshComponent::execSetHoudiniIconVisible)
{
	P_GET_UBOOL(Z_Param_bInHoudiniIconVisible);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHoudiniIconVisible(Z_Param_bInHoudiniIconVisible);
	P_NATIVE_END;
}
// End Class UHoudiniStaticMeshComponent Function SetHoudiniIconVisible

// Begin Class UHoudiniStaticMeshComponent Function SetMesh
struct Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetMesh_Statics
{
	struct HoudiniStaticMeshComponent_eventSetMesh_Parms
	{
		UHoudiniStaticMesh* InMesh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStaticMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetMesh_Statics::NewProp_InMesh = { "InMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniStaticMeshComponent_eventSetMesh_Parms, InMesh), Z_Construct_UClass_UHoudiniStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetMesh_Statics::NewProp_InMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniStaticMeshComponent, nullptr, "SetMesh", nullptr, nullptr, Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetMesh_Statics::HoudiniStaticMeshComponent_eventSetMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetMesh_Statics::HoudiniStaticMeshComponent_eventSetMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoudiniStaticMeshComponent::execSetMesh)
{
	P_GET_OBJECT(UHoudiniStaticMesh,Z_Param_InMesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMesh(Z_Param_InMesh);
	P_NATIVE_END;
}
// End Class UHoudiniStaticMeshComponent Function SetMesh

// Begin Class UHoudiniStaticMeshComponent
void UHoudiniStaticMeshComponent::StaticRegisterNativesUHoudiniStaticMeshComponent()
{
	UClass* Class = UHoudiniStaticMeshComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMesh", &UHoudiniStaticMeshComponent::execGetMesh },
		{ "IsHoudiniIconVisible", &UHoudiniStaticMeshComponent::execIsHoudiniIconVisible },
		{ "NotifyMeshUpdated", &UHoudiniStaticMeshComponent::execNotifyMeshUpdated },
		{ "SetHoudiniIconVisible", &UHoudiniStaticMeshComponent::execSetHoudiniIconVisible },
		{ "SetMesh", &UHoudiniStaticMeshComponent::execSetMesh },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniStaticMeshComponent);
UClass* Z_Construct_UClass_UHoudiniStaticMeshComponent_NoRegister()
{
	return UHoudiniStaticMeshComponent::StaticClass();
}
struct Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Houdini Engine | Rendering" },
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "HoudiniStaticMeshComponent.h" },
		{ "ModuleRelativePath", "Private/HoudiniStaticMeshComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The mesh. */" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniStaticMeshComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The mesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalBounds_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Local space bounds of mesh. */" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniStaticMeshComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Local space bounds of mesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHoudiniIconVisible_MetaData[] = {
		{ "Category", "Icons" },
		{ "ModuleRelativePath", "Private/HoudiniStaticMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalBounds;
	static void NewProp_bHoudiniIconVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHoudiniIconVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoudiniStaticMeshComponent_GetMesh, "GetMesh" }, // 2529505104
		{ &Z_Construct_UFunction_UHoudiniStaticMeshComponent_IsHoudiniIconVisible, "IsHoudiniIconVisible" }, // 3835821438
		{ &Z_Construct_UFunction_UHoudiniStaticMeshComponent_NotifyMeshUpdated, "NotifyMeshUpdated" }, // 3972733142
		{ &Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetHoudiniIconVisible, "SetHoudiniIconVisible" }, // 1528264892
		{ &Z_Construct_UFunction_UHoudiniStaticMeshComponent_SetMesh, "SetMesh" }, // 2009696132
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniStaticMeshComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniStaticMeshComponent, Mesh), Z_Construct_UClass_UHoudiniStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::NewProp_LocalBounds = { "LocalBounds", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniStaticMeshComponent, LocalBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalBounds_MetaData), NewProp_LocalBounds_MetaData) };
void Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::NewProp_bHoudiniIconVisible_SetBit(void* Obj)
{
	((UHoudiniStaticMeshComponent*)Obj)->bHoudiniIconVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::NewProp_bHoudiniIconVisible = { "bHoudiniIconVisible", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniStaticMeshComponent), &Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::NewProp_bHoudiniIconVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHoudiniIconVisible_MetaData), NewProp_bHoudiniIconVisible_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::NewProp_LocalBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::NewProp_bHoudiniIconVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::ClassParams = {
	&UHoudiniStaticMeshComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniStaticMeshComponent()
{
	if (!Z_Registration_Info_UClass_UHoudiniStaticMeshComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniStaticMeshComponent.OuterSingleton, Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniStaticMeshComponent.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniStaticMeshComponent>()
{
	return UHoudiniStaticMeshComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniStaticMeshComponent);
UHoudiniStaticMeshComponent::~UHoudiniStaticMeshComponent() {}
// End Class UHoudiniStaticMeshComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniStaticMeshComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniStaticMeshComponent, UHoudiniStaticMeshComponent::StaticClass, TEXT("UHoudiniStaticMeshComponent"), &Z_Registration_Info_UClass_UHoudiniStaticMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniStaticMeshComponent), 3302674213U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniStaticMeshComponent_h_593171662(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniStaticMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniStaticMeshComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
