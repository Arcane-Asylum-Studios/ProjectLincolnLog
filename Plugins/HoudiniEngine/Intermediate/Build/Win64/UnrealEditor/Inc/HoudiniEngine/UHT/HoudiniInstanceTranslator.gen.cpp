// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngine/Private/HoudiniInstanceTranslator.h"
#include "HoudiniEngine/Private/HoudiniMaterialTranslator.h"
#include "HoudiniEngineRuntime/Private/HoudiniGenericAttribute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniInstanceTranslator() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData();
HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes();
HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniMaterialInfo();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGenericAttribute();
UPackage* Z_Construct_UPackage__Script_HoudiniEngine();
// End Cross Module References

// Begin ScriptStruct FHoudiniInstancedOutputPerSplitAttributes
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniInstancedOutputPerSplitAttributes;
class UScriptStruct* FHoudiniInstancedOutputPerSplitAttributes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniInstancedOutputPerSplitAttributes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniInstancedOutputPerSplitAttributes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes, (UObject*)Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniInstancedOutputPerSplitAttributes"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniInstancedOutputPerSplitAttributes.OuterSingleton;
}
template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<FHoudiniInstancedOutputPerSplitAttributes>()
{
	return FHoudiniInstancedOutputPerSplitAttributes::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelPath_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// level path attribute value\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "level path attribute value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakeActorName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Bake actor name attribute value\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bake actor name attribute value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakeActorClassName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Bake actor class attribute value\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bake actor class attribute value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakeOutlinerFolder_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// bake outliner folder attribute value\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "bake outliner folder attribute value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakeFolder_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// unreal_bake_folder attribute value\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "unreal_bake_folder attribute value" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LevelPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BakeActorName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BakeActorClassName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BakeOutlinerFolder;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BakeFolder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniInstancedOutputPerSplitAttributes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_LevelPath = { "LevelPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPerSplitAttributes, LevelPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelPath_MetaData), NewProp_LevelPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_BakeActorName = { "BakeActorName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPerSplitAttributes, BakeActorName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakeActorName_MetaData), NewProp_BakeActorName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_BakeActorClassName = { "BakeActorClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPerSplitAttributes, BakeActorClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakeActorClassName_MetaData), NewProp_BakeActorClassName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_BakeOutlinerFolder = { "BakeOutlinerFolder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPerSplitAttributes, BakeOutlinerFolder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakeOutlinerFolder_MetaData), NewProp_BakeOutlinerFolder_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_BakeFolder = { "BakeFolder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPerSplitAttributes, BakeFolder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakeFolder_MetaData), NewProp_BakeFolder_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_LevelPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_BakeActorName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_BakeActorClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_BakeOutlinerFolder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_BakeFolder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
	nullptr,
	&NewStructOps,
	"HoudiniInstancedOutputPerSplitAttributes",
	Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::PropPointers),
	sizeof(FHoudiniInstancedOutputPerSplitAttributes),
	alignof(FHoudiniInstancedOutputPerSplitAttributes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniInstancedOutputPerSplitAttributes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniInstancedOutputPerSplitAttributes.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniInstancedOutputPerSplitAttributes.InnerSingleton;
}
// End ScriptStruct FHoudiniInstancedOutputPerSplitAttributes

// Begin ScriptStruct FHoudiniInstancedOutputPartData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniInstancedOutputPartData;
class UScriptStruct* FHoudiniInstancedOutputPartData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniInstancedOutputPartData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniInstancedOutputPartData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData, (UObject*)Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniInstancedOutputPartData"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniInstancedOutputPartData.OuterSingleton;
}
template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<FHoudiniInstancedOutputPartData>()
{
	return FHoudiniInstancedOutputPartData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceHISM_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceInstancer_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Should we create an instancer even for single instances?\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should we create an instancer even for single instances?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalInstancedObjects_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalInstanceObjectPackagePaths_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Object paths of OriginalInstancedObjects. Used by message passing system\n// when sending messages from the async importer to the PDG manager. UObject*/references\n// are not directly supported by the messaging system. See BuildFlatInstancedTransformsAndObjectPaths().\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Object paths of OriginalInstancedObjects. Used by message passing system\nwhen sending messages from the async importer to the PDG manager. UObject*/references\nare not directly supported by the messaging system. See BuildFlatInstancedTransformsAndObjectPaths()." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumInstancedTransformsPerObject_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Number of entries in OriginalInstancedTransforms. Populated when building\n// OriginalInstancedTransformsFlat in BuildFlatInstancedTransformsAndObjectPaths() and used when rebuilding\n// OriginalInstancedTransforms from OriginalInstancedTransformsFlat in BuildOriginalInstancedTransformsAndObjectArrays().\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of entries in OriginalInstancedTransforms. Populated when building\nOriginalInstancedTransformsFlat in BuildFlatInstancedTransformsAndObjectPaths() and used when rebuilding\nOriginalInstancedTransforms from OriginalInstancedTransformsFlat in BuildOriginalInstancedTransformsAndObjectArrays()." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalInstancedTransformsFlat_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Flattened version of OriginalInstancedTransforms. Used by message passing system\n// when sending messages from the async importer to the PDG manager. Nested arrays\n// are not supported by UPROPERTIES and thus not by the messaging system.\n// See BuildFlatInstancedTransformsAndObjectPaths().\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flattened version of OriginalInstancedTransforms. Used by message passing system\nwhen sending messages from the async importer to the PDG manager. Nested arrays\nare not supported by UPROPERTIES and thus not by the messaging system.\nSee BuildFlatInstancedTransformsAndObjectPaths()." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumInstancedIndicesPerObject_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Number of entries in OriginalInstancedIndices. Populated when building\n// OriginalInstancedIndicesFlat in BuildFlatInstancedTransformsAndObjectPaths() and used when rebuilding\n// OriginalInstancedIndices from OriginalInstancedIndicesFlat in BuildOriginalInstancedTransformsAndObjectArrays().\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of entries in OriginalInstancedIndices. Populated when building\nOriginalInstancedIndicesFlat in BuildFlatInstancedTransformsAndObjectPaths() and used when rebuilding\nOriginalInstancedIndices from OriginalInstancedIndicesFlat in BuildOriginalInstancedTransformsAndObjectArrays()." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalInstancedIndicesFlat_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Flattened version of OriginalInstancedIndices. Used by message passing system\n// when sending messages from the async importer to the PDG manager. Nested arrays\n// are not supported by UPROPERTIES and thus not by the messaging system. See\n// BuildFlatInstancedTransformsAndObjectPaths().\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flattened version of OriginalInstancedIndices. Used by message passing system\nwhen sending messages from the async importer to the PDG manager. Nested arrays\nare not supported by UPROPERTIES and thus not by the messaging system. See\nBuildFlatInstancedTransformsAndObjectPaths()." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplitAttributeName_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplitAttributeValues_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSplitMeshInstancer_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFoliageInstancer_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllPropertyAttributes_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllLevelPaths_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// All level path attributes from the first attribute owner we could find\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All level path attributes from the first attribute owner we could find" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllBakeActorNames_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// All bake actor name attributes from the first attribute owner we could find\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All bake actor name attributes from the first attribute owner we could find" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllBakeActorClassNames_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// All bake actor class name attributes from the first attribute owner we could find\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All bake actor class name attributes from the first attribute owner we could find" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllBakeFolders_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// All unreal_bake_folder attributes (prim attr is checked first then detail)\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All unreal_bake_folder attributes (prim attr is checked first then detail)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllBakeOutlinerFolders_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// All bake outliner folder attributes from the first attribute owner we could find\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All bake outliner folder attributes from the first attribute owner we could find" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerSplitAttributes_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A map of split value to attribute values that are valid per split (unreal_bake_actor, unreal_level_path,\n// unreal_bake_outliner_folder)\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A map of split value to attribute values that are valid per split (unreal_bake_actor, unreal_level_path,\nunreal_bake_outliner_folder)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputNames_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakeNames_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileValues_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialAttributes_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Array of material attributes\n// If multiple slots are defined, we store all the different attributes values in a flat array\n// Such that the size of MaterialAttributes is NumberOfAttributes * NumberOfMaterialSlots\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of material attributes\nIf multiple slots are defined, we store all the different attributes values in a flat array\nSuch that the size of MaterialAttributes is NumberOfAttributes * NumberOfMaterialSlots" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumPerInstanceCustomDataPerObject_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Number of entries in PerInstanceCustomData. Populated when building\n// PerInstanceCustomDataFlat in BuildFlatInstancedTransformsAndObjectPaths() and used when rebuilding\n// PerInstanceCustomData from PerInstanceCustomDataFlat in BuildOriginalInstancedTransformsAndObjectArrays().\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of entries in PerInstanceCustomData. Populated when building\nPerInstanceCustomDataFlat in BuildFlatInstancedTransformsAndObjectPaths() and used when rebuilding\nPerInstanceCustomData from PerInstanceCustomDataFlat in BuildOriginalInstancedTransformsAndObjectArrays()." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerInstanceCustomDataFlat_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Flattened version of OriginalInstancedTransforms. Used by message passing system\n// when sending messages from the async importer to the PDG manager. Nested arrays\n// are not supported by UPROPERTIES and thus not by the messaging system.\n// See BuildFlatInstancedTransformsAndObjectPaths().\n" },
#endif
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flattened version of OriginalInstancedTransforms. Used by message passing system\nwhen sending messages from the async importer to the PDG manager. Nested arrays\nare not supported by UPROPERTIES and thus not by the messaging system.\nSee BuildFlatInstancedTransformsAndObjectPaths()." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bForceHISM_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceHISM;
	static void NewProp_bForceInstancer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceInstancer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginalInstancedObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OriginalInstancedObjects;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OriginalInstanceObjectPackagePaths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OriginalInstanceObjectPackagePaths;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumInstancedTransformsPerObject_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NumInstancedTransformsPerObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OriginalInstancedTransformsFlat_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OriginalInstancedTransformsFlat;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumInstancedIndicesPerObject_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NumInstancedIndicesPerObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OriginalInstancedIndicesFlat_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OriginalInstancedIndicesFlat;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SplitAttributeName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SplitAttributeValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SplitAttributeValues;
	static void NewProp_bSplitMeshInstancer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSplitMeshInstancer;
	static void NewProp_bIsFoliageInstancer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFoliageInstancer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AllPropertyAttributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllPropertyAttributes;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AllLevelPaths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllLevelPaths;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AllBakeActorNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllBakeActorNames;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AllBakeActorClassNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllBakeActorClassNames;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AllBakeFolders_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllBakeFolders;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AllBakeOutlinerFolders_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllBakeOutlinerFolders;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerSplitAttributes_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PerSplitAttributes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PerSplitAttributes;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputNames;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BakeNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BakeNames;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TileValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TileValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialAttributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialAttributes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumPerInstanceCustomDataPerObject_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NumPerInstanceCustomDataPerObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PerInstanceCustomDataFlat_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PerInstanceCustomDataFlat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniInstancedOutputPartData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bForceHISM_SetBit(void* Obj)
{
	((FHoudiniInstancedOutputPartData*)Obj)->bForceHISM = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bForceHISM = { "bForceHISM", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInstancedOutputPartData), &Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bForceHISM_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceHISM_MetaData), NewProp_bForceHISM_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bForceInstancer_SetBit(void* Obj)
{
	((FHoudiniInstancedOutputPartData*)Obj)->bForceInstancer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bForceInstancer = { "bForceInstancer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInstancedOutputPartData), &Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bForceInstancer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceInstancer_MetaData), NewProp_bForceInstancer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedObjects_Inner = { "OriginalInstancedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedObjects = { "OriginalInstancedObjects", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, OriginalInstancedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalInstancedObjects_MetaData), NewProp_OriginalInstancedObjects_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstanceObjectPackagePaths_Inner = { "OriginalInstanceObjectPackagePaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstanceObjectPackagePaths = { "OriginalInstanceObjectPackagePaths", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, OriginalInstanceObjectPackagePaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalInstanceObjectPackagePaths_MetaData), NewProp_OriginalInstanceObjectPackagePaths_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumInstancedTransformsPerObject_Inner = { "NumInstancedTransformsPerObject", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumInstancedTransformsPerObject = { "NumInstancedTransformsPerObject", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, NumInstancedTransformsPerObject), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumInstancedTransformsPerObject_MetaData), NewProp_NumInstancedTransformsPerObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedTransformsFlat_Inner = { "OriginalInstancedTransformsFlat", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedTransformsFlat = { "OriginalInstancedTransformsFlat", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, OriginalInstancedTransformsFlat), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalInstancedTransformsFlat_MetaData), NewProp_OriginalInstancedTransformsFlat_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumInstancedIndicesPerObject_Inner = { "NumInstancedIndicesPerObject", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumInstancedIndicesPerObject = { "NumInstancedIndicesPerObject", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, NumInstancedIndicesPerObject), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumInstancedIndicesPerObject_MetaData), NewProp_NumInstancedIndicesPerObject_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedIndicesFlat_Inner = { "OriginalInstancedIndicesFlat", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedIndicesFlat = { "OriginalInstancedIndicesFlat", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, OriginalInstancedIndicesFlat), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalInstancedIndicesFlat_MetaData), NewProp_OriginalInstancedIndicesFlat_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_SplitAttributeName = { "SplitAttributeName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, SplitAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplitAttributeName_MetaData), NewProp_SplitAttributeName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_SplitAttributeValues_Inner = { "SplitAttributeValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_SplitAttributeValues = { "SplitAttributeValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, SplitAttributeValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplitAttributeValues_MetaData), NewProp_SplitAttributeValues_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bSplitMeshInstancer_SetBit(void* Obj)
{
	((FHoudiniInstancedOutputPartData*)Obj)->bSplitMeshInstancer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bSplitMeshInstancer = { "bSplitMeshInstancer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInstancedOutputPartData), &Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bSplitMeshInstancer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSplitMeshInstancer_MetaData), NewProp_bSplitMeshInstancer_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bIsFoliageInstancer_SetBit(void* Obj)
{
	((FHoudiniInstancedOutputPartData*)Obj)->bIsFoliageInstancer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bIsFoliageInstancer = { "bIsFoliageInstancer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniInstancedOutputPartData), &Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bIsFoliageInstancer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFoliageInstancer_MetaData), NewProp_bIsFoliageInstancer_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllPropertyAttributes_Inner = { "AllPropertyAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniGenericAttribute, METADATA_PARAMS(0, nullptr) }; // 2192899334
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllPropertyAttributes = { "AllPropertyAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, AllPropertyAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllPropertyAttributes_MetaData), NewProp_AllPropertyAttributes_MetaData) }; // 2192899334
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllLevelPaths_Inner = { "AllLevelPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllLevelPaths = { "AllLevelPaths", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, AllLevelPaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllLevelPaths_MetaData), NewProp_AllLevelPaths_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeActorNames_Inner = { "AllBakeActorNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeActorNames = { "AllBakeActorNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, AllBakeActorNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllBakeActorNames_MetaData), NewProp_AllBakeActorNames_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeActorClassNames_Inner = { "AllBakeActorClassNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeActorClassNames = { "AllBakeActorClassNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, AllBakeActorClassNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllBakeActorClassNames_MetaData), NewProp_AllBakeActorClassNames_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeFolders_Inner = { "AllBakeFolders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeFolders = { "AllBakeFolders", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, AllBakeFolders), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllBakeFolders_MetaData), NewProp_AllBakeFolders_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeOutlinerFolders_Inner = { "AllBakeOutlinerFolders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeOutlinerFolders = { "AllBakeOutlinerFolders", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, AllBakeOutlinerFolders), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllBakeOutlinerFolders_MetaData), NewProp_AllBakeOutlinerFolders_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_PerSplitAttributes_ValueProp = { "PerSplitAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes, METADATA_PARAMS(0, nullptr) }; // 2706329750
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_PerSplitAttributes_Key_KeyProp = { "PerSplitAttributes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_PerSplitAttributes = { "PerSplitAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, PerSplitAttributes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerSplitAttributes_MetaData), NewProp_PerSplitAttributes_MetaData) }; // 2706329750
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OutputNames_Inner = { "OutputNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OutputNames = { "OutputNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, OutputNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputNames_MetaData), NewProp_OutputNames_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_BakeNames_Inner = { "BakeNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_BakeNames = { "BakeNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, BakeNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakeNames_MetaData), NewProp_BakeNames_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_TileValues_Inner = { "TileValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_TileValues = { "TileValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, TileValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileValues_MetaData), NewProp_TileValues_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_MaterialAttributes_Inner = { "MaterialAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniMaterialInfo, METADATA_PARAMS(0, nullptr) }; // 2085175468
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_MaterialAttributes = { "MaterialAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, MaterialAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialAttributes_MetaData), NewProp_MaterialAttributes_MetaData) }; // 2085175468
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumPerInstanceCustomDataPerObject_Inner = { "NumPerInstanceCustomDataPerObject", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumPerInstanceCustomDataPerObject = { "NumPerInstanceCustomDataPerObject", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, NumPerInstanceCustomDataPerObject), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumPerInstanceCustomDataPerObject_MetaData), NewProp_NumPerInstanceCustomDataPerObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_PerInstanceCustomDataFlat_Inner = { "PerInstanceCustomDataFlat", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_PerInstanceCustomDataFlat = { "PerInstanceCustomDataFlat", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, PerInstanceCustomDataFlat), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerInstanceCustomDataFlat_MetaData), NewProp_PerInstanceCustomDataFlat_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bForceHISM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bForceInstancer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstanceObjectPackagePaths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstanceObjectPackagePaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumInstancedTransformsPerObject_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumInstancedTransformsPerObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedTransformsFlat_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedTransformsFlat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumInstancedIndicesPerObject_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumInstancedIndicesPerObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedIndicesFlat_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedIndicesFlat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_SplitAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_SplitAttributeValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_SplitAttributeValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bSplitMeshInstancer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bIsFoliageInstancer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllPropertyAttributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllPropertyAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllLevelPaths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllLevelPaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeActorNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeActorNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeActorClassNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeActorClassNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeFolders_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeFolders,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeOutlinerFolders_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeOutlinerFolders,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_PerSplitAttributes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_PerSplitAttributes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_PerSplitAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OutputNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OutputNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_BakeNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_BakeNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_TileValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_TileValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_MaterialAttributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_MaterialAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumPerInstanceCustomDataPerObject_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumPerInstanceCustomDataPerObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_PerInstanceCustomDataFlat_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_PerInstanceCustomDataFlat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
	nullptr,
	&NewStructOps,
	"HoudiniInstancedOutputPartData",
	Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::PropPointers),
	sizeof(FHoudiniInstancedOutputPartData),
	alignof(FHoudiniInstancedOutputPartData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniInstancedOutputPartData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniInstancedOutputPartData.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniInstancedOutputPartData.InnerSingleton;
}
// End ScriptStruct FHoudiniInstancedOutputPartData

// Begin Registration
struct Z_CompiledInDeferFile_FID_MainProjectLincolnLog_Plugins_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniInstanceTranslator_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHoudiniInstancedOutputPerSplitAttributes::StaticStruct, Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewStructOps, TEXT("HoudiniInstancedOutputPerSplitAttributes"), &Z_Registration_Info_UScriptStruct_HoudiniInstancedOutputPerSplitAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniInstancedOutputPerSplitAttributes), 2706329750U) },
		{ FHoudiniInstancedOutputPartData::StaticStruct, Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewStructOps, TEXT("HoudiniInstancedOutputPartData"), &Z_Registration_Info_UScriptStruct_HoudiniInstancedOutputPartData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniInstancedOutputPartData), 3052999492U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MainProjectLincolnLog_Plugins_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniInstanceTranslator_h_2812848549(TEXT("/Script/HoudiniEngine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MainProjectLincolnLog_Plugins_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniInstanceTranslator_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MainProjectLincolnLog_Plugins_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniInstanceTranslator_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
