// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniToolsPackageAsset.h"
#include "HoudiniEngineRuntime/Private/HoudiniToolTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniToolsPackageAsset() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniToolsPackageAsset();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniToolsPackageAsset_NoRegister();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCategoryRules();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniToolsPackageAsset
void UHoudiniToolsPackageAsset::StaticRegisterNativesUHoudiniToolsPackageAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniToolsPackageAsset);
UClass* Z_Construct_UClass_UHoudiniToolsPackageAsset_NoRegister()
{
	return UHoudiniToolsPackageAsset::StaticClass();
}
struct Z_Construct_UClass_UHoudiniToolsPackageAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This is a Houdini Tools package descriptor inside of UE, typically created\n * after a HoudiniToolsPackage has been imported into the UE project.\n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "HoudiniToolsPackageAsset.h" },
		{ "ModuleRelativePath", "Private/HoudiniToolsPackageAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a Houdini Tools package descriptor inside of UE, typically created\nafter a HoudiniToolsPackage has been imported into the UE project." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Categories_MetaData[] = {
		{ "Category", "HoudiniToolsPackage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Category names mapped to string patterns that will be used to determine whether\n// HDAs in this package is assigned to the respective category.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniToolsPackageAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Category names mapped to string patterns that will be used to determine whether\nHDAs in this package is assigned to the respective category." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalPackageDir_MetaData[] = {
		{ "Category", "HoudiniToolsPackage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional path to an external directory containing HDAs associated with this package.\n// This path will be used to import new HDAs into this package.\n// This path is always relative to the Project File Path.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniToolsPackageAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional path to an external directory containing HDAs associated with this package.\nThis path will be used to import new HDAs into this package.\nThis path is always relative to the Project File Path." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReimportPackageDescription_MetaData[] = {
		{ "Category", "HoudiniToolsPackage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If a package update/reimport is executed, reimport external package JSON data.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniToolsPackageAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If a package update/reimport is executed, reimport external package JSON data." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportPackageDescription_MetaData[] = {
		{ "Category", "HoudiniToolsPackage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Any changes to this package description will be written to the package's external JSON file. If the external\n// JSON file doesn't exist, it will be created.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniToolsPackageAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Any changes to this package description will be written to the package's external JSON file. If the external\nJSON file doesn't exist, it will be created." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReimportToolsDescription_MetaData[] = {
		{ "Category", "HoudiniToolsPackage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When an HDA is reimported into this package, and it has an external JSON file, the data from the external\n// JSON file will be imported. NOTE: When HDA is imported into for the first time, it will always import\n// external JSON data, if it exists.\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniToolsPackageAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When an HDA is reimported into this package, and it has an external JSON file, the data from the external\nJSON file will be imported. NOTE: When HDA is imported into for the first time, it will always import\nexternal JSON data, if it exists." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportToolsDescription_MetaData[] = {
		{ "Category", "HoudiniToolsPackage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Any changes to HDAs in this package will be written to the HDA's external JSON file. If the external JSON file\n// doesn't exist, it will be created. \n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniToolsPackageAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Any changes to HDAs in this package will be written to the HDA's external JSON file. If the external JSON file\ndoesn't exist, it will be created." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Categories_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Categories_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Categories;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalPackageDir;
	static void NewProp_bReimportPackageDescription_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReimportPackageDescription;
	static void NewProp_bExportPackageDescription_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportPackageDescription;
	static void NewProp_bReimportToolsDescription_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReimportToolsDescription;
	static void NewProp_bExportToolsDescription_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportToolsDescription;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniToolsPackageAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniToolsPackageAsset_Statics::NewProp_Categories_ValueProp = { "Categories", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCategoryRules, METADATA_PARAMS(0, nullptr) }; // 100911843
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniToolsPackageAsset_Statics::NewProp_Categories_Key_KeyProp = { "Categories_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniToolsPackageAsset_Statics::NewProp_Categories = { "Categories", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniToolsPackageAsset, Categories), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Categories_MetaData), NewProp_Categories_MetaData) }; // 100911843
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniToolsPackageAsset_Statics::NewProp_ExternalPackageDir = { "ExternalPackageDir", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniToolsPackageAsset, ExternalPackageDir), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalPackageDir_MetaData), NewProp_ExternalPackageDir_MetaData) };
void Z_Construct_UClass_UHoudiniToolsPackageAsset_Statics::NewProp_bReimportPackageDescription_SetBit(void* Obj)
{
	((UHoudiniToolsPackageAsset*)Obj)->bReimportPackageDescription = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniToolsPackageAsset_Statics::NewProp_bReimportPackageDescription = { "bReimportPackageDescription", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniToolsPackageAsset), &Z_Construct_UClass_UHoudiniToolsPackageAsset_Statics::NewProp_bReimportPackageDescription_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReimportPackageDescription_MetaData), NewProp_bReimportPackageDescription_MetaData) };
void Z_Construct_UClass_UHoudiniToolsPackageAsset_Statics::NewProp_bExportPackageDescription_SetBit(void* Obj)
{
	((UHoudiniToolsPackageAsset*)Obj)->bExportPackageDescription = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniToolsPackageAsset_Statics::NewProp_bExportPackageDescription = { "bExportPackageDescription", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniToolsPackageAsset), &Z_Construct_UClass_UHoudiniToolsPackageAsset_Statics::NewProp_bExportPackageDescription_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportPackageDescription_MetaData), NewProp_bExportPackageDescription_MetaData) };
void Z_Construct_UClass_UHoudiniToolsPackageAsset_Statics::NewProp_bReimportToolsDescription_SetBit(void* Obj)
{
	((UHoudiniToolsPackageAsset*)Obj)->bReimportToolsDescription = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniToolsPackageAsset_Statics::NewProp_bReimportToolsDescription = { "bReimportToolsDescription", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniToolsPackageAsset), &Z_Construct_UClass_UHoudiniToolsPackageAsset_Statics::NewProp_bReimportToolsDescription_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReimportToolsDescription_MetaData), NewProp_bReimportToolsDescription_MetaData) };
void Z_Construct_UClass_UHoudiniToolsPackageAsset_Statics::NewProp_bExportToolsDescription_SetBit(void* Obj)
{
	((UHoudiniToolsPackageAsset*)Obj)->bExportToolsDescription = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniToolsPackageAsset_Statics::NewProp_bExportToolsDescription = { "bExportToolsDescription", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniToolsPackageAsset), &Z_Construct_UClass_UHoudiniToolsPackageAsset_Statics::NewProp_bExportToolsDescription_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportToolsDescription_MetaData), NewProp_bExportToolsDescription_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniToolsPackageAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolsPackageAsset_Statics::NewProp_Categories_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolsPackageAsset_Statics::NewProp_Categories_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolsPackageAsset_Statics::NewProp_Categories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolsPackageAsset_Statics::NewProp_ExternalPackageDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolsPackageAsset_Statics::NewProp_bReimportPackageDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolsPackageAsset_Statics::NewProp_bExportPackageDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolsPackageAsset_Statics::NewProp_bReimportToolsDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniToolsPackageAsset_Statics::NewProp_bExportToolsDescription,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniToolsPackageAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniToolsPackageAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniToolsPackageAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniToolsPackageAsset_Statics::ClassParams = {
	&UHoudiniToolsPackageAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniToolsPackageAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniToolsPackageAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniToolsPackageAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniToolsPackageAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniToolsPackageAsset()
{
	if (!Z_Registration_Info_UClass_UHoudiniToolsPackageAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniToolsPackageAsset.OuterSingleton, Z_Construct_UClass_UHoudiniToolsPackageAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniToolsPackageAsset.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniToolsPackageAsset>()
{
	return UHoudiniToolsPackageAsset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniToolsPackageAsset);
UHoudiniToolsPackageAsset::~UHoudiniToolsPackageAsset() {}
// End Class UHoudiniToolsPackageAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniToolsPackageAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniToolsPackageAsset, UHoudiniToolsPackageAsset::StaticClass, TEXT("UHoudiniToolsPackageAsset"), &Z_Registration_Info_UClass_UHoudiniToolsPackageAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniToolsPackageAsset), 3859011149U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniToolsPackageAsset_h_1330985934(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniToolsPackageAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniToolsPackageAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
