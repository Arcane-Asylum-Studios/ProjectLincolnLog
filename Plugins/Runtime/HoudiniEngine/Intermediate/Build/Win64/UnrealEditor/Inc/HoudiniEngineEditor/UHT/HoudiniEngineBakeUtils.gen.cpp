// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineEditor/Private/HoudiniEngineBakeUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniEngineBakeUtils() {}

// Begin Cross Module References
HOUDINIENGINEEDITOR_API UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniInstancerComponentType();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor();
// End Cross Module References

// Begin Enum EHoudiniInstancerComponentType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniInstancerComponentType;
static UEnum* EHoudiniInstancerComponentType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniInstancerComponentType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniInstancerComponentType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniInstancerComponentType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("EHoudiniInstancerComponentType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniInstancerComponentType.OuterSingleton;
}
template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniInstancerComponentType>()
{
	return EHoudiniInstancerComponentType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniInstancerComponentType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// An enum of the different types for instancer component/bake types\n" },
#endif
		{ "FoliageAsHierarchicalInstancedStaticMeshComponent.Comment", "// Baking foliage as HISMC\n" },
		{ "FoliageAsHierarchicalInstancedStaticMeshComponent.Name", "EHoudiniInstancerComponentType::FoliageAsHierarchicalInstancedStaticMeshComponent" },
		{ "FoliageAsHierarchicalInstancedStaticMeshComponent.ToolTip", "Baking foliage as HISMC" },
		{ "FoliageInstancedStaticMeshComponent.Comment", "// For baking foliage as foliage\n" },
		{ "FoliageInstancedStaticMeshComponent.Name", "EHoudiniInstancerComponentType::FoliageInstancedStaticMeshComponent" },
		{ "FoliageInstancedStaticMeshComponent.ToolTip", "For baking foliage as foliage" },
		{ "GeometryCollectionComponent.Name", "EHoudiniInstancerComponentType::GeometryCollectionComponent" },
		{ "InstancedActorComponent.Name", "EHoudiniInstancerComponentType::InstancedActorComponent" },
		{ "InstancedStaticMeshComponent.Comment", "// (Hierarichal)InstancedStaticMeshComponent\n" },
		{ "InstancedStaticMeshComponent.Name", "EHoudiniInstancerComponentType::InstancedStaticMeshComponent" },
		{ "InstancedStaticMeshComponent.ToolTip", "(Hierarichal)InstancedStaticMeshComponent" },
		{ "MeshSplitInstancerComponent.Name", "EHoudiniInstancerComponentType::MeshSplitInstancerComponent" },
		{ "ModuleRelativePath", "Private/HoudiniEngineBakeUtils.h" },
		{ "StaticMeshComponent.Comment", "// Single static mesh component\n" },
		{ "StaticMeshComponent.Name", "EHoudiniInstancerComponentType::StaticMeshComponent" },
		{ "StaticMeshComponent.ToolTip", "Single static mesh component" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An enum of the different types for instancer component/bake types" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniInstancerComponentType::StaticMeshComponent", (int64)EHoudiniInstancerComponentType::StaticMeshComponent },
		{ "EHoudiniInstancerComponentType::InstancedStaticMeshComponent", (int64)EHoudiniInstancerComponentType::InstancedStaticMeshComponent },
		{ "EHoudiniInstancerComponentType::MeshSplitInstancerComponent", (int64)EHoudiniInstancerComponentType::MeshSplitInstancerComponent },
		{ "EHoudiniInstancerComponentType::InstancedActorComponent", (int64)EHoudiniInstancerComponentType::InstancedActorComponent },
		{ "EHoudiniInstancerComponentType::FoliageInstancedStaticMeshComponent", (int64)EHoudiniInstancerComponentType::FoliageInstancedStaticMeshComponent },
		{ "EHoudiniInstancerComponentType::FoliageAsHierarchicalInstancedStaticMeshComponent", (int64)EHoudiniInstancerComponentType::FoliageAsHierarchicalInstancedStaticMeshComponent },
		{ "EHoudiniInstancerComponentType::GeometryCollectionComponent", (int64)EHoudiniInstancerComponentType::GeometryCollectionComponent },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniInstancerComponentType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
	nullptr,
	"EHoudiniInstancerComponentType",
	"EHoudiniInstancerComponentType",
	Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniInstancerComponentType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniInstancerComponentType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniInstancerComponentType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniInstancerComponentType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniInstancerComponentType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniInstancerComponentType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniInstancerComponentType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniInstancerComponentType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniInstancerComponentType.InnerSingleton;
}
// End Enum EHoudiniInstancerComponentType

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectLincolnLog_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniEngineBakeUtils_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniInstancerComponentType_StaticEnum, TEXT("EHoudiniInstancerComponentType"), &Z_Registration_Info_UEnum_EHoudiniInstancerComponentType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3921785011U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectLincolnLog_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniEngineBakeUtils_h_1533057948(TEXT("/Script/HoudiniEngineEditor"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectLincolnLog_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniEngineBakeUtils_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectLincolnLog_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniEngineBakeUtils_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
