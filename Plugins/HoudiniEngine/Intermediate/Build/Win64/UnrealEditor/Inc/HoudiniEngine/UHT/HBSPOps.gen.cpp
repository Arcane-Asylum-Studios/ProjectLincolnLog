// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngine/Private/HBSPOps.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHBSPOps() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
HOUDINIENGINE_API UClass* Z_Construct_UClass_UHBspPointsGrid();
HOUDINIENGINE_API UClass* Z_Construct_UClass_UHBspPointsGrid_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngine();
// End Cross Module References

// Begin Class UHBspPointsGrid
void UHBspPointsGrid::StaticRegisterNativesUHBspPointsGrid()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHBspPointsGrid);
UClass* Z_Construct_UClass_UHBspPointsGrid_NoRegister()
{
	return UHBspPointsGrid::StaticClass();
}
struct Z_Construct_UClass_UHBspPointsGrid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Represents a sparse granular 3D grid into which points are added for quick (~O(1)) lookup.\n// The 3D space is divided into a grid with a given granularity.\n// Points are considered to have a given radius (threshold) and are added to the grid cube they fall in, and to up to seven neighbours if they overlap.\n" },
#endif
		{ "IncludePath", "HBSPOps.h" },
		{ "ModuleRelativePath", "Private/HBSPOps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a sparse granular 3D grid into which points are added for quick (~O(1)) lookup.\nThe 3D space is divided into a grid with a given granularity.\nPoints are considered to have a given radius (threshold) and are added to the grid cube they fall in, and to up to seven neighbours if they overlap." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHBspPointsGrid>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHBspPointsGrid_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHBspPointsGrid_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHBspPointsGrid_Statics::ClassParams = {
	&UHBspPointsGrid::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHBspPointsGrid_Statics::Class_MetaDataParams), Z_Construct_UClass_UHBspPointsGrid_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHBspPointsGrid()
{
	if (!Z_Registration_Info_UClass_UHBspPointsGrid.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHBspPointsGrid.OuterSingleton, Z_Construct_UClass_UHBspPointsGrid_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHBspPointsGrid.OuterSingleton;
}
template<> HOUDINIENGINE_API UClass* StaticClass<UHBspPointsGrid>()
{
	return UHBspPointsGrid::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHBspPointsGrid);
UHBspPointsGrid::~UHBspPointsGrid() {}
// End Class UHBspPointsGrid

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HBSPOps_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHBspPointsGrid, UHBspPointsGrid::StaticClass, TEXT("UHBspPointsGrid"), &Z_Registration_Info_UClass_UHBspPointsGrid, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHBspPointsGrid), 4282462430U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HBSPOps_h_3454288510(TEXT("/Script/HoudiniEngine"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HBSPOps_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HBSPOps_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
