// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineEditor/Private/HoudiniRampEditorWindowSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniRampEditorWindowSubsystem() {}

// Begin Cross Module References
EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniRampEditorWindowSubsystem();
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniRampEditorWindowSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor();
// End Cross Module References

// Begin Class UHoudiniRampEditorWindowSubsystem
void UHoudiniRampEditorWindowSubsystem::StaticRegisterNativesUHoudiniRampEditorWindowSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniRampEditorWindowSubsystem);
UClass* Z_Construct_UClass_UHoudiniRampEditorWindowSubsystem_NoRegister()
{
	return UHoudiniRampEditorWindowSubsystem::StaticClass();
}
struct Z_Construct_UClass_UHoudiniRampEditorWindowSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The purpose of this subsystem is to manage opening and closing of ramp editor windows. */" },
#endif
		{ "IncludePath", "HoudiniRampEditorWindowSubsystem.h" },
		{ "ModuleRelativePath", "Private/HoudiniRampEditorWindowSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The purpose of this subsystem is to manage opening and closing of ramp editor windows." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniRampEditorWindowSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHoudiniRampEditorWindowSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRampEditorWindowSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniRampEditorWindowSubsystem_Statics::ClassParams = {
	&UHoudiniRampEditorWindowSubsystem::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniRampEditorWindowSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniRampEditorWindowSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniRampEditorWindowSubsystem()
{
	if (!Z_Registration_Info_UClass_UHoudiniRampEditorWindowSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniRampEditorWindowSubsystem.OuterSingleton, Z_Construct_UClass_UHoudiniRampEditorWindowSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniRampEditorWindowSubsystem.OuterSingleton;
}
template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniRampEditorWindowSubsystem>()
{
	return UHoudiniRampEditorWindowSubsystem::StaticClass();
}
UHoudiniRampEditorWindowSubsystem::UHoudiniRampEditorWindowSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniRampEditorWindowSubsystem);
UHoudiniRampEditorWindowSubsystem::~UHoudiniRampEditorWindowSubsystem() {}
// End Class UHoudiniRampEditorWindowSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniRampEditorWindowSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniRampEditorWindowSubsystem, UHoudiniRampEditorWindowSubsystem::StaticClass, TEXT("UHoudiniRampEditorWindowSubsystem"), &Z_Registration_Info_UClass_UHoudiniRampEditorWindowSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniRampEditorWindowSubsystem), 4245104170U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniRampEditorWindowSubsystem_h_412183249(TEXT("/Script/HoudiniEngineEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniRampEditorWindowSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniRampEditorWindowSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
