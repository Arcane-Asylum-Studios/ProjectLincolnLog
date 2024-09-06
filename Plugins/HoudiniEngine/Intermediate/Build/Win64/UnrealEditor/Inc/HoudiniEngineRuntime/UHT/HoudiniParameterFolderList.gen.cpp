// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameterFolderList.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniParameterFolderList() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameter();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterFolder_NoRegister();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterFolderList();
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterFolderList_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Class UHoudiniParameterFolderList
void UHoudiniParameterFolderList::StaticRegisterNativesUHoudiniParameterFolderList()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniParameterFolderList);
UClass* Z_Construct_UClass_UHoudiniParameterFolderList_NoRegister()
{
	return UHoudiniParameterFolderList::StaticClass();
}
struct Z_Construct_UClass_UHoudiniParameterFolderList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniParameterFolderList.h" },
		{ "ModuleRelativePath", "Private/HoudiniParameterFolderList.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTabMenu_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterFolderList.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTabsShown_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterFolderList.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TabFolders_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterFolderList.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsTabMenu_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTabMenu;
	static void NewProp_bIsTabsShown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTabsShown;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TabFolders_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TabFolders;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterFolderList>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UHoudiniParameterFolderList_Statics::NewProp_bIsTabMenu_SetBit(void* Obj)
{
	((UHoudiniParameterFolderList*)Obj)->bIsTabMenu = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterFolderList_Statics::NewProp_bIsTabMenu = { "bIsTabMenu", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameterFolderList), &Z_Construct_UClass_UHoudiniParameterFolderList_Statics::NewProp_bIsTabMenu_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTabMenu_MetaData), NewProp_bIsTabMenu_MetaData) };
void Z_Construct_UClass_UHoudiniParameterFolderList_Statics::NewProp_bIsTabsShown_SetBit(void* Obj)
{
	((UHoudiniParameterFolderList*)Obj)->bIsTabsShown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterFolderList_Statics::NewProp_bIsTabsShown = { "bIsTabsShown", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniParameterFolderList), &Z_Construct_UClass_UHoudiniParameterFolderList_Statics::NewProp_bIsTabsShown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTabsShown_MetaData), NewProp_bIsTabsShown_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterFolderList_Statics::NewProp_TabFolders_Inner = { "TabFolders", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHoudiniParameterFolder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterFolderList_Statics::NewProp_TabFolders = { "TabFolders", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniParameterFolderList, TabFolders), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TabFolders_MetaData), NewProp_TabFolders_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterFolderList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFolderList_Statics::NewProp_bIsTabMenu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFolderList_Statics::NewProp_bIsTabsShown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFolderList_Statics::NewProp_TabFolders_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterFolderList_Statics::NewProp_TabFolders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterFolderList_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoudiniParameterFolderList_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHoudiniParameter,
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterFolderList_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterFolderList_Statics::ClassParams = {
	&UHoudiniParameterFolderList::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoudiniParameterFolderList_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterFolderList_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterFolderList_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniParameterFolderList_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoudiniParameterFolderList()
{
	if (!Z_Registration_Info_UClass_UHoudiniParameterFolderList.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniParameterFolderList.OuterSingleton, Z_Construct_UClass_UHoudiniParameterFolderList_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoudiniParameterFolderList.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterFolderList>()
{
	return UHoudiniParameterFolderList::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterFolderList);
UHoudiniParameterFolderList::~UHoudiniParameterFolderList() {}
// End Class UHoudiniParameterFolderList

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFolderList_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniParameterFolderList, UHoudiniParameterFolderList::StaticClass, TEXT("UHoudiniParameterFolderList"), &Z_Registration_Info_UClass_UHoudiniParameterFolderList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniParameterFolderList), 1711525367U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFolderList_h_3673026467(TEXT("/Script/HoudiniEngineRuntime"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFolderList_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFolderList_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
