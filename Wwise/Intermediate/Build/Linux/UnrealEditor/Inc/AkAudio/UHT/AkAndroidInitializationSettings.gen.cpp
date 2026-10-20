// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h"
#include "AkAudio/Classes/InitializationSettings/AkInitializationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAndroidInitializationSettings() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UAkAndroidInitializationSettings();
AKAUDIO_API UClass* Z_Construct_UClass_UAkAndroidInitializationSettings_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInitializationSettingsBase();
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkAndroidAudioAPI();
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkAndroidAudioPath();
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkAndroidSpatializerAPI();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

// Begin Enum EAkAndroidAudioAPI
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkAndroidAudioAPI;
static UEnum* EAkAndroidAudioAPI_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAkAndroidAudioAPI.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAkAndroidAudioAPI.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkAndroidAudioAPI, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkAndroidAudioAPI"));
	}
	return Z_Registration_Info_UEnum_EAkAndroidAudioAPI.OuterSingleton;
}
template<> AKAUDIO_API UEnum* StaticEnum<EAkAndroidAudioAPI>()
{
	return EAkAndroidAudioAPI_StaticEnum();
}
struct Z_Construct_UEnum_AkAudio_EAkAndroidAudioAPI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AAudio.Name", "EAkAndroidAudioAPI::AAudio" },
		{ "Bitmask", "" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h" },
		{ "OpenSL_ES.Name", "EAkAndroidAudioAPI::OpenSL_ES" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAkAndroidAudioAPI::AAudio", (int64)EAkAndroidAudioAPI::AAudio },
		{ "EAkAndroidAudioAPI::OpenSL_ES", (int64)EAkAndroidAudioAPI::OpenSL_ES },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkAndroidAudioAPI_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"EAkAndroidAudioAPI",
	"EAkAndroidAudioAPI",
	Z_Construct_UEnum_AkAudio_EAkAndroidAudioAPI_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkAndroidAudioAPI_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkAndroidAudioAPI_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AkAudio_EAkAndroidAudioAPI_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AkAudio_EAkAndroidAudioAPI()
{
	if (!Z_Registration_Info_UEnum_EAkAndroidAudioAPI.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkAndroidAudioAPI.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkAndroidAudioAPI_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAkAndroidAudioAPI.InnerSingleton;
}
// End Enum EAkAndroidAudioAPI

// Begin Enum EAkAndroidSpatializerAPI
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkAndroidSpatializerAPI;
static UEnum* EAkAndroidSpatializerAPI_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAkAndroidSpatializerAPI.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAkAndroidSpatializerAPI.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkAndroidSpatializerAPI, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkAndroidSpatializerAPI"));
	}
	return Z_Registration_Info_UEnum_EAkAndroidSpatializerAPI.OuterSingleton;
}
template<> AKAUDIO_API UEnum* StaticEnum<EAkAndroidSpatializerAPI>()
{
	return EAkAndroidSpatializerAPI_StaticEnum();
}
struct Z_Construct_UEnum_AkAudio_EAkAndroidSpatializerAPI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AndroidSpatializer.Name", "EAkAndroidSpatializerAPI::AndroidSpatializer" },
		{ "Bitmask", "" },
		{ "DolbyAtmos.Name", "EAkAndroidSpatializerAPI::DolbyAtmos" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAkAndroidSpatializerAPI::DolbyAtmos", (int64)EAkAndroidSpatializerAPI::DolbyAtmos },
		{ "EAkAndroidSpatializerAPI::AndroidSpatializer", (int64)EAkAndroidSpatializerAPI::AndroidSpatializer },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkAndroidSpatializerAPI_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"EAkAndroidSpatializerAPI",
	"EAkAndroidSpatializerAPI",
	Z_Construct_UEnum_AkAudio_EAkAndroidSpatializerAPI_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkAndroidSpatializerAPI_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkAndroidSpatializerAPI_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AkAudio_EAkAndroidSpatializerAPI_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AkAudio_EAkAndroidSpatializerAPI()
{
	if (!Z_Registration_Info_UEnum_EAkAndroidSpatializerAPI.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkAndroidSpatializerAPI.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkAndroidSpatializerAPI_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAkAndroidSpatializerAPI.InnerSingleton;
}
// End Enum EAkAndroidSpatializerAPI

// Begin Enum EAkAndroidAudioPath
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkAndroidAudioPath;
static UEnum* EAkAndroidAudioPath_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAkAndroidAudioPath.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAkAndroidAudioPath.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkAndroidAudioPath, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkAndroidAudioPath"));
	}
	return Z_Registration_Info_UEnum_EAkAndroidAudioPath.OuterSingleton;
}
template<> AKAUDIO_API UEnum* StaticEnum<EAkAndroidAudioPath>()
{
	return EAkAndroidAudioPath_StaticEnum();
}
struct Z_Construct_UEnum_AkAudio_EAkAndroidAudioPath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Exclusive.Name", "EAkAndroidAudioPath::Exclusive" },
		{ "Legacy.Name", "EAkAndroidAudioPath::Legacy" },
		{ "LowLatency.Name", "EAkAndroidAudioPath::LowLatency" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAkAndroidAudioPath::Legacy", (int64)EAkAndroidAudioPath::Legacy },
		{ "EAkAndroidAudioPath::LowLatency", (int64)EAkAndroidAudioPath::LowLatency },
		{ "EAkAndroidAudioPath::Exclusive", (int64)EAkAndroidAudioPath::Exclusive },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkAndroidAudioPath_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"EAkAndroidAudioPath",
	"EAkAndroidAudioPath",
	Z_Construct_UEnum_AkAudio_EAkAndroidAudioPath_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkAndroidAudioPath_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkAndroidAudioPath_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AkAudio_EAkAndroidAudioPath_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AkAudio_EAkAndroidAudioPath()
{
	if (!Z_Registration_Info_UEnum_EAkAndroidAudioPath.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkAndroidAudioPath.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkAndroidAudioPath_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAkAndroidAudioPath.InnerSingleton;
}
// End Enum EAkAndroidAudioPath

// Begin ScriptStruct FAkAndroidAdvancedInitializationSettings
static_assert(std::is_polymorphic<FAkAndroidAdvancedInitializationSettings>() == std::is_polymorphic<FAkAdvancedInitializationSettingsWithMultiCoreRendering>(), "USTRUCT FAkAndroidAdvancedInitializationSettings cannot be polymorphic unless super FAkAdvancedInitializationSettingsWithMultiCoreRendering is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkAndroidAdvancedInitializationSettings;
class UScriptStruct* FAkAndroidAdvancedInitializationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkAndroidAdvancedInitializationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkAndroidAdvancedInitializationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkAndroidAdvancedInitializationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AkAndroidAdvancedInitializationSettings.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkAndroidAdvancedInitializationSettings>()
{
	return FAkAndroidAdvancedInitializationSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioAPI_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/AkAudio.EAkAndroidAudioAPI" },
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main audio API to allow using for audio output. Enable both to let Wwise decide the best audio API for the device." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpatializerAPI_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/AkAudio.EAkAndroidSpatializerAPI" },
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spatializer API to allow using for 3D audio support. Note that Android Spatializer has noticeable latency issues. Disabling all spatializer APIs will effectively disable 3D audio." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioPath_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Which audio path to use. Legacy gives best compatibility with the widest range of devices but noticeably high latency. Exclusive has best latency but has several drawbacks and bad compatibility. LowLatency is a good balance between the two." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoundFrameSizeToHardwareSize_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "(deprecated) Rounds the pipeline buffer size to a multiple of the hardware-preferred frame size. This setting is deprecated. This has no impact on performance and should be left to false (the default)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseLowLatencyMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVerboseSink_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable this to inspect sink behavior. Useful for debugging non-standard Android devices." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_AudioAPI;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_SpatializerAPI;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_AudioPath_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioPath;
	static void NewProp_RoundFrameSizeToHardwareSize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RoundFrameSizeToHardwareSize;
	static void NewProp_UseLowLatencyMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseLowLatencyMode;
	static void NewProp_bVerboseSink_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVerboseSink;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkAndroidAdvancedInitializationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_AudioAPI = { "AudioAPI", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAndroidAdvancedInitializationSettings, AudioAPI), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioAPI_MetaData), NewProp_AudioAPI_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_SpatializerAPI = { "SpatializerAPI", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAndroidAdvancedInitializationSettings, SpatializerAPI), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpatializerAPI_MetaData), NewProp_SpatializerAPI_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_AudioPath_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_AudioPath = { "AudioPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAndroidAdvancedInitializationSettings, AudioPath), Z_Construct_UEnum_AkAudio_EAkAndroidAudioPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioPath_MetaData), NewProp_AudioPath_MetaData) }; // 4207876291
void Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_RoundFrameSizeToHardwareSize_SetBit(void* Obj)
{
	((FAkAndroidAdvancedInitializationSettings*)Obj)->RoundFrameSizeToHardwareSize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_RoundFrameSizeToHardwareSize = { "RoundFrameSizeToHardwareSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkAndroidAdvancedInitializationSettings), &Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_RoundFrameSizeToHardwareSize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoundFrameSizeToHardwareSize_MetaData), NewProp_RoundFrameSizeToHardwareSize_MetaData) };
void Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_UseLowLatencyMode_SetBit(void* Obj)
{
	((FAkAndroidAdvancedInitializationSettings*)Obj)->UseLowLatencyMode_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_UseLowLatencyMode = { "UseLowLatencyMode", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkAndroidAdvancedInitializationSettings), &Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_UseLowLatencyMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseLowLatencyMode_MetaData), NewProp_UseLowLatencyMode_MetaData) };
void Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_bVerboseSink_SetBit(void* Obj)
{
	((FAkAndroidAdvancedInitializationSettings*)Obj)->bVerboseSink = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_bVerboseSink = { "bVerboseSink", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkAndroidAdvancedInitializationSettings), &Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_bVerboseSink_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVerboseSink_MetaData), NewProp_bVerboseSink_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_AudioAPI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_SpatializerAPI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_AudioPath_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_AudioPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_RoundFrameSizeToHardwareSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_UseLowLatencyMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_bVerboseSink,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering,
	&NewStructOps,
	"AkAndroidAdvancedInitializationSettings",
	Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::PropPointers),
	sizeof(FAkAndroidAdvancedInitializationSettings),
	alignof(FAkAndroidAdvancedInitializationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings()
{
	if (!Z_Registration_Info_UScriptStruct_AkAndroidAdvancedInitializationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkAndroidAdvancedInitializationSettings.InnerSingleton, Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AkAndroidAdvancedInitializationSettings.InnerSingleton;
}
// End ScriptStruct FAkAndroidAdvancedInitializationSettings

// Begin Class UAkAndroidInitializationSettings Function MigrateMultiCoreRendering
struct Z_Construct_UFunction_UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Statics
{
	struct AkAndroidInitializationSettings_eventMigrateMultiCoreRendering_Parms
	{
		bool NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue_SetBit(void* Obj)
{
	((AkAndroidInitializationSettings_eventMigrateMultiCoreRendering_Parms*)Obj)->NewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkAndroidInitializationSettings_eventMigrateMultiCoreRendering_Parms), &Z_Construct_UFunction_UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkAndroidInitializationSettings, nullptr, "MigrateMultiCoreRendering", nullptr, nullptr, Z_Construct_UFunction_UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Statics::AkAndroidInitializationSettings_eventMigrateMultiCoreRendering_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Statics::AkAndroidInitializationSettings_eventMigrateMultiCoreRendering_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkAndroidInitializationSettings_MigrateMultiCoreRendering()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkAndroidInitializationSettings::execMigrateMultiCoreRendering)
{
	P_GET_UBOOL(Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MigrateMultiCoreRendering(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UAkAndroidInitializationSettings Function MigrateMultiCoreRendering

// Begin Class UAkAndroidInitializationSettings
void UAkAndroidInitializationSettings::StaticRegisterNativesUAkAndroidInitializationSettings()
{
	UClass* Class = UAkAndroidInitializationSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MigrateMultiCoreRendering", &UAkAndroidInitializationSettings::execMigrateMultiCoreRendering },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkAndroidInitializationSettings);
UClass* Z_Construct_UClass_UAkAndroidInitializationSettings_NoRegister()
{
	return UAkAndroidInitializationSettings::StaticClass();
}
struct Z_Construct_UClass_UAkAndroidInitializationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommunicationSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommonSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommunicationSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdvancedSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkAndroidInitializationSettings_MigrateMultiCoreRendering, "MigrateMultiCoreRendering" }, // 3387617689
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAndroidInitializationSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::NewProp_CommonSettings = { "CommonSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAndroidInitializationSettings, CommonSettings), Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonSettings_MetaData), NewProp_CommonSettings_MetaData) }; // 2733679787
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::NewProp_CommunicationSettings = { "CommunicationSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAndroidInitializationSettings, CommunicationSettings), Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommunicationSettings_MetaData), NewProp_CommunicationSettings_MetaData) }; // 1988522286
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::NewProp_AdvancedSettings = { "AdvancedSettings", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAndroidInitializationSettings, AdvancedSettings), Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdvancedSettings_MetaData), NewProp_AdvancedSettings_MetaData) }; // 3947609462
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::NewProp_CommonSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::NewProp_CommunicationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::NewProp_AdvancedSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkPlatformInitializationSettingsBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::ClassParams = {
	&UAkAndroidInitializationSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkAndroidInitializationSettings()
{
	if (!Z_Registration_Info_UClass_UAkAndroidInitializationSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAndroidInitializationSettings.OuterSingleton, Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkAndroidInitializationSettings.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkAndroidInitializationSettings>()
{
	return UAkAndroidInitializationSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAndroidInitializationSettings);
UAkAndroidInitializationSettings::~UAkAndroidInitializationSettings() {}
// End Class UAkAndroidInitializationSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAkAndroidAudioAPI_StaticEnum, TEXT("EAkAndroidAudioAPI"), &Z_Registration_Info_UEnum_EAkAndroidAudioAPI, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1101566611U) },
		{ EAkAndroidSpatializerAPI_StaticEnum, TEXT("EAkAndroidSpatializerAPI"), &Z_Registration_Info_UEnum_EAkAndroidSpatializerAPI, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3282472241U) },
		{ EAkAndroidAudioPath_StaticEnum, TEXT("EAkAndroidAudioPath"), &Z_Registration_Info_UEnum_EAkAndroidAudioPath, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4207876291U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAkAndroidAdvancedInitializationSettings::StaticStruct, Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewStructOps, TEXT("AkAndroidAdvancedInitializationSettings"), &Z_Registration_Info_UScriptStruct_AkAndroidAdvancedInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkAndroidAdvancedInitializationSettings), 3947609462U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkAndroidInitializationSettings, UAkAndroidInitializationSettings::StaticClass, TEXT("UAkAndroidInitializationSettings"), &Z_Registration_Info_UClass_UAkAndroidInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAndroidInitializationSettings), 285463087U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_77610634(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
