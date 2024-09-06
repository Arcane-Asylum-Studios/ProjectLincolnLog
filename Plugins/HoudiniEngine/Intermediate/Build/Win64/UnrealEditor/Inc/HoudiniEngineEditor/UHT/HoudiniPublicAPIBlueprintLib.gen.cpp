// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineEditor/Public/HoudiniPublicAPIBlueprintLib.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniPublicAPIBlueprintLib() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPI_NoRegister();
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib();
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor();
// End Cross Module References

// Begin Class UHoudiniPublicAPIBlueprintLib Function GetAPI
struct Z_Construct_UFunction_UHoudiniPublicAPIBlueprintLib_GetAPI_Statics
{
	struct HoudiniPublicAPIBlueprintLib_eventGetAPI_Parms
	{
		UHoudiniPublicAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the Houdini Public API instance. */" },
#endif
		{ "DisplayName", "GetHoudiniEnginePublicAPI" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIBlueprintLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the Houdini Public API instance." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIBlueprintLib_GetAPI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPublicAPIBlueprintLib_eventGetAPI_Parms, ReturnValue), Z_Construct_UClass_UHoudiniPublicAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIBlueprintLib_GetAPI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIBlueprintLib_GetAPI_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIBlueprintLib_GetAPI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIBlueprintLib_GetAPI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib, nullptr, "GetAPI", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPublicAPIBlueprintLib_GetAPI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIBlueprintLib_GetAPI_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPublicAPIBlueprintLib_GetAPI_Statics::HoudiniPublicAPIBlueprintLib_eventGetAPI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIBlueprintLib_GetAPI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPublicAPIBlueprintLib_GetAPI_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHoudiniPublicAPIBlueprintLib_GetAPI_Statics::HoudiniPublicAPIBlueprintLib_eventGetAPI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoudiniPublicAPIBlueprintLib_GetAPI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIBlueprintLib_GetAPI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoudiniPublicAPIBlueprintLib::execGetAPI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UHoudiniPublicAPI**)Z_Param__Result=UHoudiniPublicAPIBlueprintLib::GetAPI();
	P_NATIVE_END;
}
// End Class UHoudiniPublicAPIBlueprintLib Function GetAPI

// Begin Class UHoudiniPublicAPIBlueprintLib
void UHoudiniPublicAPIBlueprintLib::StaticRegisterNativesUHoudiniPublicAPIBlueprintLib()
{
	UClass* Class = UHoudiniPublicAPIBlueprintLib::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAPI", &UHoudiniPublicAPIBlueprintLib::execGetAPI },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniPublicAPIBlueprintLib);
UClass* Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib_NoRegister()
{
	return UHoudiniPublicAPIBlueprintLib::StaticClass();
}
struct Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Houdini Engine|Public API" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Houdini Public API Blueprint function library\n */" },
#endif
		{ "IncludePath", "HoudiniPublicAPIBlueprintLib.h" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIBlueprintLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Houdini Public API Blueprint function library" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoudiniPublicAPIBlueprintLib_GetAPI, "GetAPI" }, // 3612596958
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPublicAPIBlueprintLib>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib_Statics::ClassParams = {
	&UHoudiniPublicAPIBlueprintLib::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib()
{
	if (!Z_Registration_Info_UClass_UHoudiniPublicAPIBlueprintLib.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPublicAPIBlueprintLib.OuterSingleton, Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniPublicAPIBlueprintLib.OuterSingleton;
}
template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniPublicAPIBlueprintLib>()
{
	return UHoudiniPublicAPIBlueprintLib::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPublicAPIBlueprintLib);
UHoudiniPublicAPIBlueprintLib::~UHoudiniPublicAPIBlueprintLib() {}
// End Class UHoudiniPublicAPIBlueprintLib

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIBlueprintLib_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib, UHoudiniPublicAPIBlueprintLib::StaticClass, TEXT("UHoudiniPublicAPIBlueprintLib"), &Z_Registration_Info_UClass_UHoudiniPublicAPIBlueprintLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPublicAPIBlueprintLib), 3965815573U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIBlueprintLib_h_500773687(TEXT("/Script/HoudiniEngineEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIBlueprintLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIBlueprintLib_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
