// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineEditor/Private/HoudiniEditorAssetStateSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniEditorAssetStateSubsystem() {}

// Begin Cross Module References
EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniEditorAssetStateSubsystem();
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniEditorAssetStateSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor();
// End Cross Module References

// Begin Class UHoudiniEditorAssetStateSubsystem
void UHoudiniEditorAssetStateSubsystem::StaticRegisterNativesUHoudiniEditorAssetStateSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniEditorAssetStateSubsystem);
UClass* Z_Construct_UClass_UHoudiniEditorAssetStateSubsystem_NoRegister()
{
	return UHoudiniEditorAssetStateSubsystem::StaticClass();
}
struct Z_Construct_UClass_UHoudiniEditorAssetStateSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * An editor subsystem that gets notified about HoudiniAssetComponent state changes. Currently this subsystem is used\n * for auto-baking functionality (receiving the state update from the HoudiniEngineRuntime module and then baking\n * the HDA via this subsystem (HoudiniEngineEditor module)).\n */" },
#endif
		{ "IncludePath", "HoudiniEditorAssetStateSubsystem.h" },
		{ "ModuleRelativePath", "Private/HoudiniEditorAssetStateSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An editor subsystem that gets notified about HoudiniAssetComponent state changes. Currently this subsystem is used\nfor auto-baking functionality (receiving the state update from the HoudiniEngineRuntime module and then baking\nthe HDA via this subsystem (HoudiniEngineEditor module))." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniEditorAssetStateSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHoudiniEditorAssetStateSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniEditorAssetStateSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniEditorAssetStateSubsystem_Statics::ClassParams = {
	&UHoudiniEditorAssetStateSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniEditorAssetStateSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniEditorAssetStateSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniEditorAssetStateSubsystem()
{
	if (!Z_Registration_Info_UClass_UHoudiniEditorAssetStateSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniEditorAssetStateSubsystem.OuterSingleton, Z_Construct_UClass_UHoudiniEditorAssetStateSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniEditorAssetStateSubsystem.OuterSingleton;
}
template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniEditorAssetStateSubsystem>()
{
	return UHoudiniEditorAssetStateSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniEditorAssetStateSubsystem);
UHoudiniEditorAssetStateSubsystem::~UHoudiniEditorAssetStateSubsystem() {}
// End Class UHoudiniEditorAssetStateSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniEditorAssetStateSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniEditorAssetStateSubsystem, UHoudiniEditorAssetStateSubsystem::StaticClass, TEXT("UHoudiniEditorAssetStateSubsystem"), &Z_Registration_Info_UClass_UHoudiniEditorAssetStateSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniEditorAssetStateSubsystem), 940118215U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniEditorAssetStateSubsystem_h_1493671298(TEXT("/Script/HoudiniEngineEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniEditorAssetStateSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniEditorAssetStateSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
