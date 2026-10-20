// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkDynamicSequence.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAkAudioNode;
class UAkCallbackInfo;
class UAkDialogueEvent;
class UAkDynamicSequencePlaylist;
class UAkDynamicSequencePlaylistItem;
class UAkGroupValue;
enum class EAkCallbackType : uint8;
enum class EAkResult : uint8;
struct FAkDynamicSequenceTransition;
#ifdef AKAUDIO_AkDynamicSequence_generated_h
#error "AkDynamicSequence.generated.h already included, missing '#pragma once' in AkDynamicSequence.h"
#endif
#define AKAUDIO_AkDynamicSequence_generated_h

#define FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequence_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnGameObjectCallback); \
	DECLARE_FUNCTION(execModifyPlaylist); \
	DECLARE_FUNCTION(execGetPlayingItem); \
	DECLARE_FUNCTION(execGetPauseTimes); \
	DECLARE_FUNCTION(execSeekPercent); \
	DECLARE_FUNCTION(execSeek); \
	DECLARE_FUNCTION(execBreak); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execResume); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execPostDialogueEventInPlaylist); \
	DECLARE_FUNCTION(execPostAudioNode); \
	DECLARE_FUNCTION(execPostPlaylistItem);


#define FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequence_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkDynamicSequence(); \
	friend struct Z_Construct_UClass_UAkDynamicSequence_Statics; \
public: \
	DECLARE_CLASS(UAkDynamicSequence, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkDynamicSequence)


#define FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequence_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkDynamicSequence(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAkDynamicSequence(UAkDynamicSequence&&); \
	UAkDynamicSequence(const UAkDynamicSequence&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkDynamicSequence); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkDynamicSequence); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkDynamicSequence) \
	NO_API virtual ~UAkDynamicSequence();


#define FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequence_h_46_PROLOG
#define FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequence_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequence_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequence_h_49_INCLASS_NO_PURE_DECLS \
	FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequence_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkDynamicSequence>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_AkAudio_Classes_AkDynamicSequence_h


#define FOREACH_ENUM_EAKDYNAMICSEQUENCESTATE(op) \
	op(EAkDynamicSequenceState::Stopped) \
	op(EAkDynamicSequenceState::Playing) \
	op(EAkDynamicSequenceState::Stopping) 

enum class EAkDynamicSequenceState : uint8;
template<> struct TIsUEnumClass<EAkDynamicSequenceState> { enum { Value = true }; };
template<> AKAUDIO_API UEnum* StaticEnum<EAkDynamicSequenceState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
