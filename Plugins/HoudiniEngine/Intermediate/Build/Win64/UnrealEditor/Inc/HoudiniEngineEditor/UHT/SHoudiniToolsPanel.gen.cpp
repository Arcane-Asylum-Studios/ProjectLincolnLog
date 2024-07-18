// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineEditor/Private/SHoudiniToolsPanel.h"
#include "HoudiniEngineEditor/Private/HoudiniEngineToolTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSHoudiniToolsPanel() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniToolDirectoryProperties();
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniToolDirectoryProperties_NoRegister();
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniToolHelpers();
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniToolHelpers_NoRegister();
HOUDINIENGINEEDITOR_API UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolsViewMode();
HOUDINIENGINEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniToolDirectory();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor();
// End Cross Module References

// Begin Enum EHoudiniToolsViewMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniToolsViewMode;
static UEnum* EHoudiniToolsViewMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniToolsViewMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniToolsViewMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolsViewMode, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("EHoudiniToolsViewMode"));
	}
	return Z_Registration_Info_UEnum_EHoudiniToolsViewMode.OuterSingleton;
}
template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniToolsViewMode>()
{
	return EHoudiniToolsViewMode_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolsViewMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// View mode for the HoudiniTools panel\n" },
#endif
		{ "ListView.Name", "EHoudiniToolsViewMode::ListView" },
		{ "ModuleRelativePath", "Private/SHoudiniToolsPanel.h" },
		{ "TileView.Name", "EHoudiniToolsViewMode::TileView" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "View mode for the HoudiniTools panel" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniToolsViewMode::TileView", (int64)EHoudiniToolsViewMode::TileView },
		{ "EHoudiniToolsViewMode::ListView", (int64)EHoudiniToolsViewMode::ListView },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolsViewMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
	nullptr,
	"EHoudiniToolsViewMode",
	"EHoudiniToolsViewMode",
	Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolsViewMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolsViewMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolsViewMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolsViewMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolsViewMode()
{
	if (!Z_Registration_Info_UEnum_EHoudiniToolsViewMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniToolsViewMode.InnerSingleton, Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolsViewMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniToolsViewMode.InnerSingleton;
}
// End Enum EHoudiniToolsViewMode

// Begin Class UHoudiniToolDirectoryProperties
void UHoudiniToolDirectoryProperties::StaticRegisterNativesUHoudiniToolDirectoryProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniToolDirectoryProperties);
UClass* Z_Construct_UClass_UHoudiniToolDirectoryProperties_NoRegister()
{
	return UHoudiniToolDirectoryProperties::StaticClass();
}
struct Z_Construct_UClass_UHoudiniToolDirectoryProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Class describing a Houdini Tool directory\n// adding a UClass was necessary to use the PropertyEditor window\n" },
#endif
		{ "IncludePath", "SHoudiniToolsPanel.h" },
		{ "ModuleRelativePath", "Private/SHoudiniToolsPanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Class describing a Houdini Tool directory\nadding a UClass was necessary to use the PropertyEditor window" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomHoudiniToolsDirectories_MetaData[] = {
		{ "Category", "CustomHoudiniTools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Custom Houdini Tool Directories **/" },
#endif
		{ "ModuleRelativePath", "Private/SHoudiniToolsPanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom Houdini Tool Directories *" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomHoudiniToolsDirectories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomHoudiniToolsDirectories;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniToolDirectoryProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniToolDirectoryProperties_Statics::NewProp_CustomHoudiniToolsDirectories_Inner = { "CustomHoudiniToolsDirectories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniToolDirectory, METADATA_PARAMS(0, nullptr) }; // 2041313703
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniToolDirectoryProperties_Statics::NewProp_CustomHoudiniToolsDirectories = { "CustomHoudiniToolsDirectories", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniToolDirectoryProperties, CustomHoudiniToolsDirectories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomHoudiniToolsDirectories_MetaData), NewProp_CustomHoudiniToolsDirectories_MetaData) }; // 2041313703
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniToolDirectoryProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolDirectoryProperties_Statics::NewProp_CustomHoudiniToolsDirectories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolDirectoryProperties_Statics::NewProp_CustomHoudiniToolsDirectories,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniToolDirectoryProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniToolDirectoryProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniToolDirectoryProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniToolDirectoryProperties_Statics::ClassParams = {
	&UHoudiniToolDirectoryProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniToolDirectoryProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniToolDirectoryProperties_Statics::PropPointers),
	0,
	0x000010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniToolDirectoryProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniToolDirectoryProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniToolDirectoryProperties()
{
	if (!Z_Registration_Info_UClass_UHoudiniToolDirectoryProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniToolDirectoryProperties.OuterSingleton, Z_Construct_UClass_UHoudiniToolDirectoryProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniToolDirectoryProperties.OuterSingleton;
}
template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniToolDirectoryProperties>()
{
	return UHoudiniToolDirectoryProperties::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniToolDirectoryProperties);
UHoudiniToolDirectoryProperties::~UHoudiniToolDirectoryProperties() {}
// End Class UHoudiniToolDirectoryProperties

// Begin Class UHoudiniToolHelpers
void UHoudiniToolHelpers::StaticRegisterNativesUHoudiniToolHelpers()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniToolHelpers);
UClass* Z_Construct_UClass_UHoudiniToolHelpers_NoRegister()
{
	return UHoudiniToolHelpers::StaticClass();
}
struct Z_Construct_UClass_UHoudiniToolHelpers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Houdini Tool Helper operations.\n// These operations should be callable from the UI as well as no-UI code. We don't want to\n// end up in a situation where we are only able to perform these operations from the frontend.\n" },
#endif
		{ "IncludePath", "SHoudiniToolsPanel.h" },
		{ "ModuleRelativePath", "Private/SHoudiniToolsPanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Houdini Tool Helper operations.\nThese operations should be callable from the UI as well as no-UI code. We don't want to\nend up in a situation where we are only able to perform these operations from the frontend." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniToolHelpers>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHoudiniToolHelpers_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniToolHelpers_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniToolHelpers_Statics::ClassParams = {
	&UHoudiniToolHelpers::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniToolHelpers_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniToolHelpers_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniToolHelpers()
{
	if (!Z_Registration_Info_UClass_UHoudiniToolHelpers.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniToolHelpers.OuterSingleton, Z_Construct_UClass_UHoudiniToolHelpers_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniToolHelpers.OuterSingleton;
}
template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniToolHelpers>()
{
	return UHoudiniToolHelpers::StaticClass();
}
UHoudiniToolHelpers::UHoudiniToolHelpers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniToolHelpers);
UHoudiniToolHelpers::~UHoudiniToolHelpers() {}
// End Class UHoudiniToolHelpers

// Begin Registration
struct Z_CompiledInDeferFile_FID_projectlincolnlogs_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Private_SHoudiniToolsPanel_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniToolsViewMode_StaticEnum, TEXT("EHoudiniToolsViewMode"), &Z_Registration_Info_UEnum_EHoudiniToolsViewMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2075789293U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniToolDirectoryProperties, UHoudiniToolDirectoryProperties::StaticClass, TEXT("UHoudiniToolDirectoryProperties"), &Z_Registration_Info_UClass_UHoudiniToolDirectoryProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniToolDirectoryProperties), 1206314761U) },
		{ Z_Construct_UClass_UHoudiniToolHelpers, UHoudiniToolHelpers::StaticClass, TEXT("UHoudiniToolHelpers"), &Z_Registration_Info_UClass_UHoudiniToolHelpers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniToolHelpers), 3942118655U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projectlincolnlogs_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Private_SHoudiniToolsPanel_h_1418783356(TEXT("/Script/HoudiniEngineEditor"),
	Z_CompiledInDeferFile_FID_projectlincolnlogs_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Private_SHoudiniToolsPanel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projectlincolnlogs_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Private_SHoudiniToolsPanel_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_projectlincolnlogs_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Private_SHoudiniToolsPanel_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projectlincolnlogs_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Private_SHoudiniToolsPanel_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
