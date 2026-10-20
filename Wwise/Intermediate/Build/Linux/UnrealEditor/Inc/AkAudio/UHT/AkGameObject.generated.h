// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkGameObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAkAudioEvent;
class UAkDialogueEvent;
class UAkDynamicSequence;
class UAkGroupValue;
class UAkRtpc;
class UAkSwitchValue;
class UAkTrigger;
class UObject;
enum class ERTPCValueType : uint8;
struct FAkDynamicSequenceTransition;
struct FLatentActionInfo;
#ifdef AKAUDIO_AkGameObject_generated_h
#error "AkGameObject.generated.h already included, missing '#pragma once' in AkGameObject.h"
#endif
#define AKAUDIO_AkGameObject_generated_h

#define FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDetachDynamicSequence); \
	DECLARE_FUNCTION(execOpenDynamicSequence); \
	DECLARE_FUNCTION(execSetSwitch); \
	DECLARE_FUNCTION(execPostTrigger); \
	DECLARE_FUNCTION(execGetRTPCValue); \
	DECLARE_FUNCTION(execSetRTPCValue); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPostAkEventAsync); \
	DECLARE_FUNCTION(execPostAkDialogueEvent); \
	DECLARE_FUNCTION(execPostAkEvent); \
	DECLARE_FUNCTION(execPostAssociatedAkEventAsync); \
	DECLARE_FUNCTION(execPostAssociatedAkEvent); \
	DECLARE_FUNCTION(execSetAttenuationScalingFactor); \
	DECLARE_FUNCTION(execGetAttenuationScalingFactor);


#define FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkGameObject(); \
	friend struct Z_Construct_UClass_UAkGameObject_Statics; \
public: \
	DECLARE_CLASS(UAkGameObject, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkGameObject)


#define FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAkGameObject(UAkGameObject&&); \
	UAkGameObject(const UAkGameObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkGameObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkGameObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkGameObject) \
	NO_API virtual ~UAkGameObject();


#define FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_34_PROLOG
#define FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_37_INCLASS_NO_PURE_DECLS \
	FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkGameObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
