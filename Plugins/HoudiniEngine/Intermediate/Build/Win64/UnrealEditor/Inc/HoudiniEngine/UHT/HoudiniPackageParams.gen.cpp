// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngine/Private/HoudiniPackageParams.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniPackageParams() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
HOUDINIENGINE_API UEnum* Z_Construct_UEnum_HoudiniEngine_EPackageMode();
HOUDINIENGINE_API UEnum* Z_Construct_UEnum_HoudiniEngine_EPackageReplaceMode();
HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPackageParams();
UPackage* Z_Construct_UPackage__Script_HoudiniEngine();
// End Cross Module References

// Begin Enum EPackageMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPackageMode;
static UEnum* EPackageMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPackageMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPackageMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngine_EPackageMode, (UObject*)Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("EPackageMode"));
	}
	return Z_Registration_Info_UEnum_EPackageMode.OuterSingleton;
}
template<> HOUDINIENGINE_API UEnum* StaticEnum<EPackageMode>()
{
	return EPackageMode_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngine_EPackageMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bake.Name", "EPackageMode::Bake" },
		{ "CookToLevel_Invalid.Name", "EPackageMode::CookToLevel_Invalid" },
		{ "CookToTemp.Comment", "// V1 Behaviour, saving package to the level, now invalid\n" },
		{ "CookToTemp.Name", "EPackageMode::CookToTemp" },
		{ "CookToTemp.ToolTip", "V1 Behaviour, saving package to the level, now invalid" },
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPackageMode::CookToLevel_Invalid", (int64)EPackageMode::CookToLevel_Invalid },
		{ "EPackageMode::CookToTemp", (int64)EPackageMode::CookToTemp },
		{ "EPackageMode::Bake", (int64)EPackageMode::Bake },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngine_EPackageMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngine,
	nullptr,
	"EPackageMode",
	"EPackageMode",
	Z_Construct_UEnum_HoudiniEngine_EPackageMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngine_EPackageMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngine_EPackageMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngine_EPackageMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngine_EPackageMode()
{
	if (!Z_Registration_Info_UEnum_EPackageMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPackageMode.InnerSingleton, Z_Construct_UEnum_HoudiniEngine_EPackageMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPackageMode.InnerSingleton;
}
// End Enum EPackageMode

// Begin Enum EPackageReplaceMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPackageReplaceMode;
static UEnum* EPackageReplaceMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPackageReplaceMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPackageReplaceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngine_EPackageReplaceMode, (UObject*)Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("EPackageReplaceMode"));
	}
	return Z_Registration_Info_UEnum_EPackageReplaceMode.OuterSingleton;
}
template<> HOUDINIENGINE_API UEnum* StaticEnum<EPackageReplaceMode>()
{
	return EPackageReplaceMode_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngine_EPackageReplaceMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CreateNewAssets.Name", "EPackageReplaceMode::CreateNewAssets" },
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
		{ "ReplaceExistingAssets.Name", "EPackageReplaceMode::ReplaceExistingAssets" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPackageReplaceMode::CreateNewAssets", (int64)EPackageReplaceMode::CreateNewAssets },
		{ "EPackageReplaceMode::ReplaceExistingAssets", (int64)EPackageReplaceMode::ReplaceExistingAssets },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngine_EPackageReplaceMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngine,
	nullptr,
	"EPackageReplaceMode",
	"EPackageReplaceMode",
	Z_Construct_UEnum_HoudiniEngine_EPackageReplaceMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngine_EPackageReplaceMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngine_EPackageReplaceMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngine_EPackageReplaceMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngine_EPackageReplaceMode()
{
	if (!Z_Registration_Info_UEnum_EPackageReplaceMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPackageReplaceMode.InnerSingleton, Z_Construct_UEnum_HoudiniEngine_EPackageReplaceMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPackageReplaceMode.InnerSingleton;
}
// End Enum EPackageReplaceMode

// Begin ScriptStruct FHoudiniPackageParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniPackageParams;
class UScriptStruct* FHoudiniPackageParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniPackageParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniPackageParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPackageParams, (UObject*)Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniPackageParams"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniPackageParams.OuterSingleton;
}
template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<FHoudiniPackageParams>()
{
	return FHoudiniPackageParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackageMode_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The current cook/baking mode\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The current cook/baking mode" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplaceMode_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How to handle existing assets? replace or rename?\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How to handle existing assets? replace or rename?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakeFolder_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When cooking in bake mode - folder to create assets in\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When cooking in bake mode - folder to create assets in" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TempCookFolder_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When cooking in temp mode - folder to create assets in\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When cooking in temp mode - folder to create assets in" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OuterPackage_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Package to save to\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Package to save to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Name of the package we want to create\n// If null, we'll generate one from:\n// (without PDG) ASSET_OBJ_GEO_PART_SPLIT,\n// (with PDG) ASSET_TOPNET_TOPNODE_WORKITEMINDEX_PART_SPLIT\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the package we want to create\nIf null, we'll generate one from:\n(without PDG) ASSET_OBJ_GEO_PART_SPLIT,\n(with PDG) ASSET_TOPNET_TOPNODE_WORKITEMINDEX_PART_SPLIT" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniAssetName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Name of the HDA\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the HDA" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniAssetActorName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Name of actor that is managing an instance of the HDA\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of actor that is managing an instance of the HDA" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectId_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeoId_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartId_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplitStr_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentGUID_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// GUID used for the owner\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GUID used for the owner" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PDGTOPNetworkName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// For PDG temporary outputs: the TOP network name\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For PDG temporary outputs: the TOP network name" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PDGTOPNodeName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// For PDG temporary outputs: the TOP node name\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For PDG temporary outputs: the TOP node name" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PDGWorkItemIndex_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// For PDG temporary outputs: the work item index of the TOP node\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For PDG temporary outputs: the work item index of the TOP node" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PDGWorkResultArrayIndex_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// For PDG temporary outputs: the work item array index in the WorkResult array of the TOP node\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For PDG temporary outputs: the work item array index in the WorkResult array of the TOP node" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameOverride_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Session Sync Asset Editor Users need the ability explicitly set the name\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Session Sync Asset Editor Users need the ability explicitly set the name" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FolderOverride_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverideEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt8PropertyParams NewProp_PackageMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PackageMode;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_ReplaceMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReplaceMode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BakeFolder;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TempCookFolder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OuterPackage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HoudiniAssetName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HoudiniAssetActorName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ObjectId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GeoId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PartId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SplitStr;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentGUID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PDGTOPNetworkName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PDGTOPNodeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PDGWorkItemIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PDGWorkResultArrayIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NameOverride;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FolderOverride;
	static void NewProp_OverideEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OverideEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPackageParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PackageMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PackageMode = { "PackageMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPackageParams, PackageMode), Z_Construct_UEnum_HoudiniEngine_EPackageMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackageMode_MetaData), NewProp_PackageMode_MetaData) }; // 1288638071
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ReplaceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ReplaceMode = { "ReplaceMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPackageParams, ReplaceMode), Z_Construct_UEnum_HoudiniEngine_EPackageReplaceMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplaceMode_MetaData), NewProp_ReplaceMode_MetaData) }; // 3776377039
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_BakeFolder = { "BakeFolder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPackageParams, BakeFolder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakeFolder_MetaData), NewProp_BakeFolder_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_TempCookFolder = { "TempCookFolder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPackageParams, TempCookFolder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TempCookFolder_MetaData), NewProp_TempCookFolder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_OuterPackage = { "OuterPackage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPackageParams, OuterPackage), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OuterPackage_MetaData), NewProp_OuterPackage_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ObjectName = { "ObjectName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPackageParams, ObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectName_MetaData), NewProp_ObjectName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_HoudiniAssetName = { "HoudiniAssetName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPackageParams, HoudiniAssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoudiniAssetName_MetaData), NewProp_HoudiniAssetName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_HoudiniAssetActorName = { "HoudiniAssetActorName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPackageParams, HoudiniAssetActorName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoudiniAssetActorName_MetaData), NewProp_HoudiniAssetActorName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ObjectId = { "ObjectId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPackageParams, ObjectId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectId_MetaData), NewProp_ObjectId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_GeoId = { "GeoId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPackageParams, GeoId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeoId_MetaData), NewProp_GeoId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PartId = { "PartId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPackageParams, PartId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartId_MetaData), NewProp_PartId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_SplitStr = { "SplitStr", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPackageParams, SplitStr), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplitStr_MetaData), NewProp_SplitStr_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ComponentGUID = { "ComponentGUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPackageParams, ComponentGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentGUID_MetaData), NewProp_ComponentGUID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PDGTOPNetworkName = { "PDGTOPNetworkName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPackageParams, PDGTOPNetworkName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PDGTOPNetworkName_MetaData), NewProp_PDGTOPNetworkName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PDGTOPNodeName = { "PDGTOPNodeName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPackageParams, PDGTOPNodeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PDGTOPNodeName_MetaData), NewProp_PDGTOPNodeName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PDGWorkItemIndex = { "PDGWorkItemIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPackageParams, PDGWorkItemIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PDGWorkItemIndex_MetaData), NewProp_PDGWorkItemIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PDGWorkResultArrayIndex = { "PDGWorkResultArrayIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPackageParams, PDGWorkResultArrayIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PDGWorkResultArrayIndex_MetaData), NewProp_PDGWorkResultArrayIndex_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_NameOverride = { "NameOverride", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPackageParams, NameOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameOverride_MetaData), NewProp_NameOverride_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_FolderOverride = { "FolderOverride", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPackageParams, FolderOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FolderOverride_MetaData), NewProp_FolderOverride_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_OverideEnabled_SetBit(void* Obj)
{
	((FHoudiniPackageParams*)Obj)->OverideEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_OverideEnabled = { "OverideEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniPackageParams), &Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_OverideEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverideEnabled_MetaData), NewProp_OverideEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PackageMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PackageMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ReplaceMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ReplaceMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_BakeFolder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_TempCookFolder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_OuterPackage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ObjectName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_HoudiniAssetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_HoudiniAssetActorName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ObjectId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_GeoId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PartId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_SplitStr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ComponentGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PDGTOPNetworkName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PDGTOPNodeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PDGWorkItemIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PDGWorkResultArrayIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_NameOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_FolderOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_OverideEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
	nullptr,
	&NewStructOps,
	"HoudiniPackageParams",
	Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::PropPointers),
	sizeof(FHoudiniPackageParams),
	alignof(FHoudiniPackageParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPackageParams()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniPackageParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniPackageParams.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniPackageParams.InnerSingleton;
}
// End ScriptStruct FHoudiniPackageParams

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPackageParams_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPackageMode_StaticEnum, TEXT("EPackageMode"), &Z_Registration_Info_UEnum_EPackageMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1288638071U) },
		{ EPackageReplaceMode_StaticEnum, TEXT("EPackageReplaceMode"), &Z_Registration_Info_UEnum_EPackageReplaceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3776377039U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHoudiniPackageParams::StaticStruct, Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewStructOps, TEXT("HoudiniPackageParams"), &Z_Registration_Info_UScriptStruct_HoudiniPackageParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniPackageParams), 2391247744U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPackageParams_h_1259319879(TEXT("/Script/HoudiniEngine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPackageParams_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPackageParams_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPackageParams_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPackageParams_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
