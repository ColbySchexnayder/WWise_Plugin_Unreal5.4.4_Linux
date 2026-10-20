// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Wwise/Info/WwiseDynamicEventInfoLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EWwiseAssetDestroyOptions : uint8;
enum class EWwiseAudioNodeLoading : uint8;
struct FGuid;
struct FWwiseDialogueEventInfo;
#ifdef WWISERESOURCELOADER_WwiseDynamicEventInfoLibrary_generated_h
#error "WwiseDynamicEventInfoLibrary.generated.h already included, missing '#pragma once' in WwiseDynamicEventInfoLibrary.h"
#endif
#define WWISERESOURCELOADER_WwiseDynamicEventInfoLibrary_generated_h

#define FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseDynamicEventInfoLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetHardCodedSoundBankShortId); \
	DECLARE_FUNCTION(execSetDestroyOptions); \
	DECLARE_FUNCTION(execSetSwitchContainerLoading); \
	DECLARE_FUNCTION(execSetWwiseName); \
	DECLARE_FUNCTION(execSetWwiseShortId); \
	DECLARE_FUNCTION(execSetWwiseGuid); \
	DECLARE_FUNCTION(execGetHardCodedSoundBankShortId); \
	DECLARE_FUNCTION(execGetDestroyOptions); \
	DECLARE_FUNCTION(execGetAudioNodeLoading); \
	DECLARE_FUNCTION(execGetWwiseName); \
	DECLARE_FUNCTION(execGetWwiseShortId); \
	DECLARE_FUNCTION(execGetWwiseGuid); \
	DECLARE_FUNCTION(execBreakStruct); \
	DECLARE_FUNCTION(execMakeStruct);


#define FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseDynamicEventInfoLibrary_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWwiseDynamicEventInfoLibrary(); \
	friend struct Z_Construct_UClass_UWwiseDynamicEventInfoLibrary_Statics; \
public: \
	DECLARE_CLASS(UWwiseDynamicEventInfoLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WwiseResourceLoader"), NO_API) \
	DECLARE_SERIALIZER(UWwiseDynamicEventInfoLibrary)


#define FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseDynamicEventInfoLibrary_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWwiseDynamicEventInfoLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWwiseDynamicEventInfoLibrary(UWwiseDynamicEventInfoLibrary&&); \
	UWwiseDynamicEventInfoLibrary(const UWwiseDynamicEventInfoLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWwiseDynamicEventInfoLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWwiseDynamicEventInfoLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWwiseDynamicEventInfoLibrary) \
	NO_API virtual ~UWwiseDynamicEventInfoLibrary();


#define FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseDynamicEventInfoLibrary_h_24_PROLOG
#define FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseDynamicEventInfoLibrary_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseDynamicEventInfoLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseDynamicEventInfoLibrary_h_27_INCLASS_NO_PURE_DECLS \
	FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseDynamicEventInfoLibrary_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WWISERESOURCELOADER_API UClass* StaticClass<class UWwiseDynamicEventInfoLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseDynamicEventInfoLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
