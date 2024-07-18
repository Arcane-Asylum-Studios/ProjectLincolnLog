// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniLiveLinkSourceFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINILIVELINK_HoudiniLiveLinkSourceFactory_generated_h
#error "HoudiniLiveLinkSourceFactory.generated.h already included, missing '#pragma once' in HoudiniLiveLinkSourceFactory.h"
#endif
#define HOUDINILIVELINK_HoudiniLiveLinkSourceFactory_generated_h

#define FID_Engine_Plugins_Animations_HoudiniLiveLink_Source_HoudiniLiveLink_Private_HoudiniLiveLinkSourceFactory_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniLiveLinkSourceFactory(); \
	friend struct Z_Construct_UClass_UHoudiniLiveLinkSourceFactory_Statics; \
public: \
	DECLARE_CLASS(UHoudiniLiveLinkSourceFactory, ULiveLinkSourceFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniLiveLink"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniLiveLinkSourceFactory)


#define FID_Engine_Plugins_Animations_HoudiniLiveLink_Source_HoudiniLiveLink_Private_HoudiniLiveLinkSourceFactory_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniLiveLinkSourceFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHoudiniLiveLinkSourceFactory(UHoudiniLiveLinkSourceFactory&&); \
	UHoudiniLiveLinkSourceFactory(const UHoudiniLiveLinkSourceFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniLiveLinkSourceFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniLiveLinkSourceFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniLiveLinkSourceFactory) \
	NO_API virtual ~UHoudiniLiveLinkSourceFactory();


#define FID_Engine_Plugins_Animations_HoudiniLiveLink_Source_HoudiniLiveLink_Private_HoudiniLiveLinkSourceFactory_h_35_PROLOG
#define FID_Engine_Plugins_Animations_HoudiniLiveLink_Source_HoudiniLiveLink_Private_HoudiniLiveLinkSourceFactory_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animations_HoudiniLiveLink_Source_HoudiniLiveLink_Private_HoudiniLiveLinkSourceFactory_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animations_HoudiniLiveLink_Source_HoudiniLiveLink_Private_HoudiniLiveLinkSourceFactory_h_40_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINILIVELINK_API UClass* StaticClass<class UHoudiniLiveLinkSourceFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animations_HoudiniLiveLink_Source_HoudiniLiveLink_Private_HoudiniLiveLinkSourceFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
