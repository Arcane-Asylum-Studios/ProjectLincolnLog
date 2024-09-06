// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineEditor/Private/HoudiniToolTypesEditor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniToolTypesEditor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPreset_NoRegister();
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniToolEditorProperties();
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniToolEditorProperties_NoRegister();
HOUDINIENGINEEDITOR_API UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPackageToolType();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAsset_NoRegister();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolSelectionType();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolType();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor();
// End Cross Module References

// Begin Class UHoudiniToolEditorProperties
void UHoudiniToolEditorProperties::StaticRegisterNativesUHoudiniToolEditorProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniToolEditorProperties);
UClass* Z_Construct_UClass_UHoudiniToolEditorProperties_NoRegister()
{
	return UHoudiniToolEditorProperties::StaticClass();
}
struct Z_Construct_UClass_UHoudiniToolEditorProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Class describing the various properties for a Houdini Tool\n// adding a UClass was necessary to use the PropertyEditor window\n" },
#endif
		{ "IncludePath", "HoudiniToolTypesEditor.h" },
		{ "ModuleRelativePath", "Private/HoudiniToolTypesEditor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Class describing the various properties for a Houdini Tool\nadding a UClass was necessary to use the PropertyEditor window" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Tool" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the tool */" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniToolTypesEditor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the tool" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Tool" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Type of the tool */" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniToolTypesEditor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of the tool" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionType_MetaData[] = {
		{ "Category", "Tool" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Selection Type of the tool */" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniToolTypesEditor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Selection Type of the tool" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolTip_MetaData[] = {
		{ "Category", "Tool" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tooltip shown on mouse hover */" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniToolTypesEditor.h" },
		{ "MultiLine", "TRUE" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tooltip shown on mouse hover" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolType_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Type of tool that these properties represent.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniToolTypesEditor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of tool that these properties represent." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[] = {
		{ "Category", "Tool" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Houdini Asset path **/" },
#endif
		{ "EditCondition", "ToolType==EHoudiniPackageToolType::HoudiniAsset" },
		{ "EditConditionHides", "" },
		{ "FilePathFilter", "hda" },
		{ "ModuleRelativePath", "Private/HoudiniToolTypesEditor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Houdini Asset path *" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HelpURL_MetaData[] = {
		{ "Category", "Tool" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Clicking on help icon will bring up this URL */" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniToolTypesEditor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clicking on help icon will bring up this URL" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClearCachedIcon_MetaData[] = {
		{ "Category", "Tool" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This will ensure that the cached icon for this HDA is removed. Note that if an IconPath has been\n\x09\x09 * specified, this option will have no effect.\n\x09\x09 */" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniToolTypesEditor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This will ensure that the cached icon for this HDA is removed. Note that if an IconPath has been\nspecified, this option will have no effect." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconPath_MetaData[] = {
		{ "Category", "Tool" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Import a new icon for this HDA. If this field is left blank, we will look for an\n\x09\x09 * icon next to the HDA with matching name.\n\x09\x09 */" },
#endif
		{ "FilePathFilter", "png" },
		{ "ModuleRelativePath", "Private/HoudiniToolTypesEditor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Import a new icon for this HDA. If this field is left blank, we will look for an\nicon next to the HDA with matching name." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniAsset_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniToolTypesEditor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniPreset_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniToolTypesEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectionType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ToolTip;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ToolType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ToolType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HelpURL;
	static void NewProp_bClearCachedIcon_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearCachedIcon;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IconPath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoudiniAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoudiniPreset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniToolEditorProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniToolEditorProperties_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniToolEditorProperties, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniToolEditorProperties_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniToolEditorProperties_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniToolEditorProperties, Type), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 46416647
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniToolEditorProperties_Statics::NewProp_SelectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniToolEditorProperties_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniToolEditorProperties, SelectionType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolSelectionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionType_MetaData), NewProp_SelectionType_MetaData) }; // 4111166207
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniToolEditorProperties_Statics::NewProp_ToolTip = { "ToolTip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniToolEditorProperties, ToolTip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolTip_MetaData), NewProp_ToolTip_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniToolEditorProperties_Statics::NewProp_ToolType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniToolEditorProperties_Statics::NewProp_ToolType = { "ToolType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniToolEditorProperties, ToolType), Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPackageToolType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolType_MetaData), NewProp_ToolType_MetaData) }; // 1064590086
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniToolEditorProperties_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniToolEditorProperties, AssetPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetPath_MetaData), NewProp_AssetPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniToolEditorProperties_Statics::NewProp_HelpURL = { "HelpURL", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniToolEditorProperties, HelpURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HelpURL_MetaData), NewProp_HelpURL_MetaData) };
void Z_Construct_UClass_UHoudiniToolEditorProperties_Statics::NewProp_bClearCachedIcon_SetBit(void* Obj)
{
	((UHoudiniToolEditorProperties*)Obj)->bClearCachedIcon = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniToolEditorProperties_Statics::NewProp_bClearCachedIcon = { "bClearCachedIcon", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniToolEditorProperties), &Z_Construct_UClass_UHoudiniToolEditorProperties_Statics::NewProp_bClearCachedIcon_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClearCachedIcon_MetaData), NewProp_bClearCachedIcon_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniToolEditorProperties_Statics::NewProp_IconPath = { "IconPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniToolEditorProperties, IconPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconPath_MetaData), NewProp_IconPath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniToolEditorProperties_Statics::NewProp_HoudiniAsset = { "HoudiniAsset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniToolEditorProperties, HoudiniAsset), Z_Construct_UClass_UHoudiniAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoudiniAsset_MetaData), NewProp_HoudiniAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniToolEditorProperties_Statics::NewProp_HoudiniPreset = { "HoudiniPreset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniToolEditorProperties, HoudiniPreset), Z_Construct_UClass_UHoudiniPreset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoudiniPreset_MetaData), NewProp_HoudiniPreset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniToolEditorProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolEditorProperties_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolEditorProperties_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolEditorProperties_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolEditorProperties_Statics::NewProp_SelectionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolEditorProperties_Statics::NewProp_SelectionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolEditorProperties_Statics::NewProp_ToolTip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolEditorProperties_Statics::NewProp_ToolType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolEditorProperties_Statics::NewProp_ToolType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolEditorProperties_Statics::NewProp_AssetPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolEditorProperties_Statics::NewProp_HelpURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolEditorProperties_Statics::NewProp_bClearCachedIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolEditorProperties_Statics::NewProp_IconPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolEditorProperties_Statics::NewProp_HoudiniAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolEditorProperties_Statics::NewProp_HoudiniPreset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniToolEditorProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniToolEditorProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniToolEditorProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniToolEditorProperties_Statics::ClassParams = {
	&UHoudiniToolEditorProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniToolEditorProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniToolEditorProperties_Statics::PropPointers),
	0,
	0x000010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniToolEditorProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniToolEditorProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniToolEditorProperties()
{
	if (!Z_Registration_Info_UClass_UHoudiniToolEditorProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniToolEditorProperties.OuterSingleton, Z_Construct_UClass_UHoudiniToolEditorProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniToolEditorProperties.OuterSingleton;
}
template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniToolEditorProperties>()
{
	return UHoudiniToolEditorProperties::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniToolEditorProperties);
UHoudiniToolEditorProperties::~UHoudiniToolEditorProperties() {}
// End Class UHoudiniToolEditorProperties

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniToolTypesEditor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniToolEditorProperties, UHoudiniToolEditorProperties::StaticClass, TEXT("UHoudiniToolEditorProperties"), &Z_Registration_Info_UClass_UHoudiniToolEditorProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniToolEditorProperties), 323504850U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniToolTypesEditor_h_2895382831(TEXT("/Script/HoudiniEngineEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniToolTypesEditor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniToolTypesEditor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
