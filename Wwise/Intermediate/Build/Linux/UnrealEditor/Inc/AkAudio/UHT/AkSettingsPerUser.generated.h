// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkSettingsPerUser.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkSettingsPerUser_generated_h
#error "AkSettingsPerUser.generated.h already included, missing '#pragma once' in AkSettingsPerUser.h"
#endif
#define AKAUDIO_AkSettingsPerUser_generated_h

#define FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkSettingsPerUser(); \
	friend struct Z_Construct_UClass_UAkSettingsPerUser_Statics; \
public: \
	DECLARE_CLASS(UAkSettingsPerUser, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkSettingsPerUser) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAkSettingsPerUser(UAkSettingsPerUser&&); \
	UAkSettingsPerUser(const UAkSettingsPerUser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkSettingsPerUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkSettingsPerUser); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkSettingsPerUser) \
	NO_API virtual ~UAkSettingsPerUser();


#define FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_40_PROLOG
#define FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_43_INCLASS_NO_PURE_DECLS \
	FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkSettingsPerUser>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h


#define FOREACH_ENUM_EWWISEPROJECTDATABASELOADMODE(op) \
	op(EWwiseProjectDatabaseLoadMode::Synchronous) \
	op(EWwiseProjectDatabaseLoadMode::Asynchronous) 

enum class EWwiseProjectDatabaseLoadMode : uint8;
template<> struct TIsUEnumClass<EWwiseProjectDatabaseLoadMode> { enum { Value = true }; };
template<> AKAUDIO_API UEnum* StaticEnum<EWwiseProjectDatabaseLoadMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
