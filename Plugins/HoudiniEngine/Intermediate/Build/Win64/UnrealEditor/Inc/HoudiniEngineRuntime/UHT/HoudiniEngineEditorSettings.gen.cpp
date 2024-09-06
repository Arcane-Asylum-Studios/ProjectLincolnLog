// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniEngineEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniEngineEditorSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniEngineEditorSettings();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniEngineEditorSettings_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniToolsPackageAsset_NoRegister();
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineEditorSettingUseCustomLocation();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FUserCategoryRules();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FUserPackageRules();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin ScriptStruct FUserPackageRules
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UserPackageRules;
class UScriptStruct* FUserPackageRules::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UserPackageRules.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UserPackageRules.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserPackageRules, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("UserPackageRules"));
	}
	return Z_Registration_Info_UScriptStruct_UserPackageRules.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FUserPackageRules>()
{
	return FUserPackageRules::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUserPackageRules_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniEngineEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolsPackageAsset_MetaData[] = {
		{ "Category", "User Category" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tools package that will be used to resolve the include/exclude patterns.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniEngineEditorSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tools package that will be used to resolve the include/exclude patterns." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Include_MetaData[] = {
		{ "Category", "User Category" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Include any tools that match the following patterns (relative to the Tools Package).\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniEngineEditorSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Include any tools that match the following patterns (relative to the Tools Package)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Exclude_MetaData[] = {
		{ "Category", "User Category" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Any tools matching these patterns (relative to the Tools Package) will be omitted from the inclusion set.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniEngineEditorSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Any tools matching these patterns (relative to the Tools Package) will be omitted from the inclusion set." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToolsPackageAsset;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Include_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Include;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Exclude_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Exclude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserPackageRules>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUserPackageRules_Statics::NewProp_ToolsPackageAsset = { "ToolsPackageAsset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserPackageRules, ToolsPackageAsset), Z_Construct_UClass_UHoudiniToolsPackageAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolsPackageAsset_MetaData), NewProp_ToolsPackageAsset_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserPackageRules_Statics::NewProp_Include_Inner = { "Include", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUserPackageRules_Statics::NewProp_Include = { "Include", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserPackageRules, Include), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Include_MetaData), NewProp_Include_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserPackageRules_Statics::NewProp_Exclude_Inner = { "Exclude", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUserPackageRules_Statics::NewProp_Exclude = { "Exclude", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserPackageRules, Exclude), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Exclude_MetaData), NewProp_Exclude_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserPackageRules_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserPackageRules_Statics::NewProp_ToolsPackageAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserPackageRules_Statics::NewProp_Include_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserPackageRules_Statics::NewProp_Include,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserPackageRules_Statics::NewProp_Exclude_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserPackageRules_Statics::NewProp_Exclude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserPackageRules_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserPackageRules_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"UserPackageRules",
	Z_Construct_UScriptStruct_FUserPackageRules_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserPackageRules_Statics::PropPointers),
	sizeof(FUserPackageRules),
	alignof(FUserPackageRules),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserPackageRules_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUserPackageRules_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUserPackageRules()
{
	if (!Z_Registration_Info_UScriptStruct_UserPackageRules.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UserPackageRules.InnerSingleton, Z_Construct_UScriptStruct_FUserPackageRules_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UserPackageRules.InnerSingleton;
}
// End ScriptStruct FUserPackageRules

// Begin Enum EHoudiniEngineEditorSettingUseCustomLocation
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniEngineEditorSettingUseCustomLocation;
static UEnum* EHoudiniEngineEditorSettingUseCustomLocation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniEngineEditorSettingUseCustomLocation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniEngineEditorSettingUseCustomLocation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineEditorSettingUseCustomLocation, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniEngineEditorSettingUseCustomLocation"));
	}
	return Z_Registration_Info_UEnum_EHoudiniEngineEditorSettingUseCustomLocation.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniEngineEditorSettingUseCustomLocation>()
{
	return EHoudiniEngineEditorSettingUseCustomLocation_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineEditorSettingUseCustomLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Disabled.Comment", "// Do not use a custom location at all.\n" },
		{ "Disabled.DisplayName", "Do Not Use Custom Location" },
		{ "Disabled.Name", "EHoudiniEngineEditorSettingUseCustomLocation::Disabled" },
		{ "Disabled.ToolTip", "Do not use a custom location at all." },
		{ "Enabled.Comment", "// Use the custom location defined here in editor preferences.\n" },
		{ "Enabled.DisplayName", "Use Custom Location" },
		{ "Enabled.Name", "EHoudiniEngineEditorSettingUseCustomLocation::Enabled" },
		{ "Enabled.ToolTip", "Use the custom location defined here in editor preferences." },
		{ "ModuleRelativePath", "Private/HoudiniEngineEditorSettings.h" },
		{ "Project.Comment", "// Use the per-project plugin settings.\n" },
		{ "Project.DisplayName", "Use The Per-Project Plugin Settings" },
		{ "Project.Name", "EHoudiniEngineEditorSettingUseCustomLocation::Project" },
		{ "Project.ToolTip", "Use the per-project plugin settings." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniEngineEditorSettingUseCustomLocation::Project", (int64)EHoudiniEngineEditorSettingUseCustomLocation::Project },
		{ "EHoudiniEngineEditorSettingUseCustomLocation::Disabled", (int64)EHoudiniEngineEditorSettingUseCustomLocation::Disabled },
		{ "EHoudiniEngineEditorSettingUseCustomLocation::Enabled", (int64)EHoudiniEngineEditorSettingUseCustomLocation::Enabled },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineEditorSettingUseCustomLocation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniEngineEditorSettingUseCustomLocation",
	"EHoudiniEngineEditorSettingUseCustomLocation",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineEditorSettingUseCustomLocation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineEditorSettingUseCustomLocation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineEditorSettingUseCustomLocation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineEditorSettingUseCustomLocation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineEditorSettingUseCustomLocation()
{
	if (!Z_Registration_Info_UEnum_EHoudiniEngineEditorSettingUseCustomLocation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniEngineEditorSettingUseCustomLocation.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineEditorSettingUseCustomLocation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniEngineEditorSettingUseCustomLocation.InnerSingleton;
}
// End Enum EHoudiniEngineEditorSettingUseCustomLocation

// Begin ScriptStruct FUserCategoryRules
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UserCategoryRules;
class UScriptStruct* FUserCategoryRules::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UserCategoryRules.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UserCategoryRules.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserCategoryRules, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("UserCategoryRules"));
	}
	return Z_Registration_Info_UScriptStruct_UserCategoryRules.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FUserCategoryRules>()
{
	return FUserCategoryRules::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUserCategoryRules_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniEngineEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Packages_MetaData[] = {
		{ "Category", "User Category" },
		{ "ModuleRelativePath", "Private/HoudiniEngineEditorSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Packages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Packages;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserCategoryRules>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserCategoryRules_Statics::NewProp_Packages_Inner = { "Packages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUserPackageRules, METADATA_PARAMS(0, nullptr) }; // 1036087404
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUserCategoryRules_Statics::NewProp_Packages = { "Packages", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserCategoryRules, Packages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Packages_MetaData), NewProp_Packages_MetaData) }; // 1036087404
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserCategoryRules_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserCategoryRules_Statics::NewProp_Packages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserCategoryRules_Statics::NewProp_Packages,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserCategoryRules_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserCategoryRules_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"UserCategoryRules",
	Z_Construct_UScriptStruct_FUserCategoryRules_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserCategoryRules_Statics::PropPointers),
	sizeof(FUserCategoryRules),
	alignof(FUserCategoryRules),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserCategoryRules_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUserCategoryRules_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUserCategoryRules()
{
	if (!Z_Registration_Info_UScriptStruct_UserCategoryRules.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UserCategoryRules.InnerSingleton, Z_Construct_UScriptStruct_FUserCategoryRules_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UserCategoryRules.InnerSingleton;
}
// End ScriptStruct FUserCategoryRules

// Begin Class UHoudiniEngineEditorSettings
void UHoudiniEngineEditorSettings::StaticRegisterNativesUHoudiniEngineEditorSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniEngineEditorSettings);
UClass* Z_Construct_UClass_UHoudiniEngineEditorSettings_NoRegister()
{
	return UHoudiniEngineEditorSettings::StaticClass();
}
struct Z_Construct_UClass_UHoudiniEngineEditorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniEngineEditorSettings.h" },
		{ "ModuleRelativePath", "Private/HoudiniEngineEditorSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserToolCategories_MetaData[] = {
		{ "Category", "HoudiniTools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// User defined categories for HoudiniTools\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniEngineEditorSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "User defined categories for HoudiniTools" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseCustomHoudiniLocation_MetaData[] = {
		{ "Category", "HoudiniLocation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether to use custom Houdini location from the project plugin settings, the editor setting, or do not use a custom location.\n" },
#endif
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Use custom Houdini location (requires restart)" },
		{ "ModuleRelativePath", "Private/HoudiniEngineEditorSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to use custom Houdini location from the project plugin settings, the editor setting, or do not use a custom location." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomHoudiniLocation_MetaData[] = {
		{ "Category", "HoudiniLocation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Custom Houdini location (where HAPI library is located).\n" },
#endif
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Custom Houdini location" },
		{ "EditCondition", "UseCustomHoudiniLocation == EHoudiniEngineEditorSettingUseCustomLocation::Enabled" },
		{ "ModuleRelativePath", "Private/HoudiniEngineEditorSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom Houdini location (where HAPI library is located)." },
#endif
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserToolCategories_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserToolCategories_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_UserToolCategories;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UseCustomHoudiniLocation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UseCustomHoudiniLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomHoudiniLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniEngineEditorSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniEngineEditorSettings_Statics::NewProp_UserToolCategories_ValueProp = { "UserToolCategories", nullptr, (EPropertyFlags)0x0000000800004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FUserCategoryRules, METADATA_PARAMS(0, nullptr) }; // 3617758740
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniEngineEditorSettings_Statics::NewProp_UserToolCategories_Key_KeyProp = { "UserToolCategories_Key", nullptr, (EPropertyFlags)0x0000000800004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniEngineEditorSettings_Statics::NewProp_UserToolCategories = { "UserToolCategories", nullptr, (EPropertyFlags)0x0010000800044001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniEngineEditorSettings, UserToolCategories), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserToolCategories_MetaData), NewProp_UserToolCategories_MetaData) }; // 3617758740
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniEngineEditorSettings_Statics::NewProp_UseCustomHoudiniLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniEngineEditorSettings_Statics::NewProp_UseCustomHoudiniLocation = { "UseCustomHoudiniLocation", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniEngineEditorSettings, UseCustomHoudiniLocation), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineEditorSettingUseCustomLocation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseCustomHoudiniLocation_MetaData), NewProp_UseCustomHoudiniLocation_MetaData) }; // 21235965
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniEngineEditorSettings_Statics::NewProp_CustomHoudiniLocation = { "CustomHoudiniLocation", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniEngineEditorSettings, CustomHoudiniLocation), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomHoudiniLocation_MetaData), NewProp_CustomHoudiniLocation_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniEngineEditorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniEngineEditorSettings_Statics::NewProp_UserToolCategories_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniEngineEditorSettings_Statics::NewProp_UserToolCategories_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniEngineEditorSettings_Statics::NewProp_UserToolCategories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniEngineEditorSettings_Statics::NewProp_UseCustomHoudiniLocation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniEngineEditorSettings_Statics::NewProp_UseCustomHoudiniLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniEngineEditorSettings_Statics::NewProp_CustomHoudiniLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniEngineEditorSettings_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UHoudiniEngineEditorSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniEngineEditorSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniEngineEditorSettings_Statics::ClassParams = {
	&UHoudiniEngineEditorSettings::StaticClass,
	"HoudiniEngine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UHoudiniEngineEditorSettings_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniEngineEditorSettings_Statics::PropPointers), 0),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniEngineEditorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniEngineEditorSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniEngineEditorSettings()
{
	if (!Z_Registration_Info_UClass_UHoudiniEngineEditorSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniEngineEditorSettings.OuterSingleton, Z_Construct_UClass_UHoudiniEngineEditorSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniEngineEditorSettings.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniEngineEditorSettings>()
{
	return UHoudiniEngineEditorSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniEngineEditorSettings);
UHoudiniEngineEditorSettings::~UHoudiniEngineEditorSettings() {}
// End Class UHoudiniEngineEditorSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniEngineEditorSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniEngineEditorSettingUseCustomLocation_StaticEnum, TEXT("EHoudiniEngineEditorSettingUseCustomLocation"), &Z_Registration_Info_UEnum_EHoudiniEngineEditorSettingUseCustomLocation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 21235965U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUserPackageRules::StaticStruct, Z_Construct_UScriptStruct_FUserPackageRules_Statics::NewStructOps, TEXT("UserPackageRules"), &Z_Registration_Info_UScriptStruct_UserPackageRules, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUserPackageRules), 1036087404U) },
		{ FUserCategoryRules::StaticStruct, Z_Construct_UScriptStruct_FUserCategoryRules_Statics::NewStructOps, TEXT("UserCategoryRules"), &Z_Registration_Info_UScriptStruct_UserCategoryRules, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUserCategoryRules), 3617758740U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniEngineEditorSettings, UHoudiniEngineEditorSettings::StaticClass, TEXT("UHoudiniEngineEditorSettings"), &Z_Registration_Info_UClass_UHoudiniEngineEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniEngineEditorSettings), 4016893196U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniEngineEditorSettings_h_3406216475(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniEngineEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniEngineEditorSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniEngineEditorSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniEngineEditorSettings_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniEngineEditorSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniEngineEditorSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
