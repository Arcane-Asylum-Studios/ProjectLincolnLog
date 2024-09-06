// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineEditor/Public/HoudiniPublicAPIOutputTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniPublicAPIOutputTypes() {}

// Begin Cross Module References
HOUDINIENGINEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor();
// End Cross Module References

// Begin ScriptStruct FHoudiniPublicAPIOutputObjectIdentifier
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniPublicAPIOutputObjectIdentifier;
class UScriptStruct* FHoudiniPublicAPIOutputObjectIdentifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniPublicAPIOutputObjectIdentifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniPublicAPIOutputObjectIdentifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("HoudiniPublicAPIOutputObjectIdentifier"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniPublicAPIOutputObjectIdentifier.OuterSingleton;
}
template<> HOUDINIENGINEEDITOR_API UScriptStruct* StaticStruct<FHoudiniPublicAPIOutputObjectIdentifier>()
{
	return FHoudiniPublicAPIOutputObjectIdentifier::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Houdini Engine | Public API | Outputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This class represents an output object identifier for an output object of a wrapped Houdini asset in the\n * public API.\n */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIOutputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This class represents an output object identifier for an output object of a wrapped Houdini asset in the\npublic API." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplitIdentifier_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Outputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** String identifier for the split that created the output object identified by this identifier. */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIOutputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "String identifier for the split that created the output object identified by this identifier." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartName_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Outputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the part used to generate the output object identified by this identifier. */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIOutputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the part used to generate the output object identified by this identifier." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectId_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// NodeId of corresponding Houdini Object.\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIOutputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NodeId of corresponding Houdini Object." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeoId_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// NodeId of corresponding Houdini Geo.\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIOutputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NodeId of corresponding Houdini Geo." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartId_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// PartId\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIOutputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PartId" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveIndex_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// First valid primitive index for this output\n// (used to read generic attributes)\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIOutputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First valid primitive index for this output\n(used to read generic attributes)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointIndex_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// First valid point index for this output\n// (used to read generic attributes)\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIOutputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First valid point index for this output\n(used to read generic attributes)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SplitIdentifier;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PartName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ObjectId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GeoId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PartId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PrimitiveIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPublicAPIOutputObjectIdentifier>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_SplitIdentifier = { "SplitIdentifier", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPublicAPIOutputObjectIdentifier, SplitIdentifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplitIdentifier_MetaData), NewProp_SplitIdentifier_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_PartName = { "PartName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPublicAPIOutputObjectIdentifier, PartName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartName_MetaData), NewProp_PartName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_ObjectId = { "ObjectId", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPublicAPIOutputObjectIdentifier, ObjectId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectId_MetaData), NewProp_ObjectId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_GeoId = { "GeoId", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPublicAPIOutputObjectIdentifier, GeoId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeoId_MetaData), NewProp_GeoId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_PartId = { "PartId", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPublicAPIOutputObjectIdentifier, PartId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartId_MetaData), NewProp_PartId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_PrimitiveIndex = { "PrimitiveIndex", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPublicAPIOutputObjectIdentifier, PrimitiveIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimitiveIndex_MetaData), NewProp_PrimitiveIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPublicAPIOutputObjectIdentifier, PointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointIndex_MetaData), NewProp_PointIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_SplitIdentifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_PartName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_ObjectId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_GeoId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_PartId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_PrimitiveIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_PointIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
	nullptr,
	&NewStructOps,
	"HoudiniPublicAPIOutputObjectIdentifier",
	Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::PropPointers),
	sizeof(FHoudiniPublicAPIOutputObjectIdentifier),
	alignof(FHoudiniPublicAPIOutputObjectIdentifier),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniPublicAPIOutputObjectIdentifier.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniPublicAPIOutputObjectIdentifier.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniPublicAPIOutputObjectIdentifier.InnerSingleton;
}
// End ScriptStruct FHoudiniPublicAPIOutputObjectIdentifier

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIOutputTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHoudiniPublicAPIOutputObjectIdentifier::StaticStruct, Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewStructOps, TEXT("HoudiniPublicAPIOutputObjectIdentifier"), &Z_Registration_Info_UScriptStruct_HoudiniPublicAPIOutputObjectIdentifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniPublicAPIOutputObjectIdentifier), 882368651U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIOutputTypes_h_4101618949(TEXT("/Script/HoudiniEngineEditor"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIOutputTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIOutputTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
