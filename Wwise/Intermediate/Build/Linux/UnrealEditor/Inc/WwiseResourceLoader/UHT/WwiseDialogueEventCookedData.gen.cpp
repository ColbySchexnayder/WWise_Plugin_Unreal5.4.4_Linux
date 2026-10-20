// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseResourceLoader/Public/Wwise/CookedData/WwiseDialogueEventCookedData.h"
#include "WwiseFileHandler/Public/Wwise/CookedData/WwiseSoundBankCookedData.h"
#include "WwiseResourceLoader/Public/Wwise/CookedData/WwiseAudioNodeCookedData.h"
#include "WwiseResourceLoader/Public/Wwise/CookedData/WwiseGroupValueCookedData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseDialogueEventCookedData() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseSoundBankCookedData();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseGroupValueCookedDataSet();
// End Cross Module References

// Begin ScriptStruct FWwiseDialogueEventCookedData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseDialogueEventCookedData;
class UScriptStruct* FWwiseDialogueEventCookedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseDialogueEventCookedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseDialogueEventCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseDialogueEventCookedData"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseDialogueEventCookedData.OuterSingleton;
}
template<> WWISERESOURCELOADER_API UScriptStruct* StaticStruct<FWwiseDialogueEventCookedData>()
{
	return FWwiseDialogueEventCookedData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseDialogueEventCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueEventId_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseDialogueEventCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundBanks_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseDialogueEventCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioNodes_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseDialogueEventCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseDialogueEventCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DialogueEventId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SoundBanks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SoundBanks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AudioNodes_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AudioNodes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AudioNodes;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseDialogueEventCookedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::NewProp_DialogueEventId = { "DialogueEventId", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseDialogueEventCookedData, DialogueEventId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueEventId_MetaData), NewProp_DialogueEventId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::NewProp_SoundBanks_Inner = { "SoundBanks", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseSoundBankCookedData, METADATA_PARAMS(0, nullptr) }; // 650265655
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::NewProp_SoundBanks = { "SoundBanks", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseDialogueEventCookedData, SoundBanks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundBanks_MetaData), NewProp_SoundBanks_MetaData) }; // 650265655
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::NewProp_AudioNodes_ValueProp = { "AudioNodes", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FWwiseAudioNodeCookedData, METADATA_PARAMS(0, nullptr) }; // 2404396207
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::NewProp_AudioNodes_Key_KeyProp = { "AudioNodes_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseGroupValueCookedDataSet, METADATA_PARAMS(0, nullptr) }; // 1036719948
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::NewProp_AudioNodes = { "AudioNodes", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseDialogueEventCookedData, AudioNodes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioNodes_MetaData), NewProp_AudioNodes_MetaData) }; // 1036719948 2404396207
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseDialogueEventCookedData, DebugName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugName_MetaData), NewProp_DebugName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::NewProp_DialogueEventId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::NewProp_SoundBanks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::NewProp_SoundBanks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::NewProp_AudioNodes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::NewProp_AudioNodes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::NewProp_AudioNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::NewProp_DebugName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	&NewStructOps,
	"WwiseDialogueEventCookedData",
	Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::PropPointers),
	sizeof(FWwiseDialogueEventCookedData),
	alignof(FWwiseDialogueEventCookedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseDialogueEventCookedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseDialogueEventCookedData.InnerSingleton, Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WwiseDialogueEventCookedData.InnerSingleton;
}
// End ScriptStruct FWwiseDialogueEventCookedData

// Begin Registration
struct Z_CompiledInDeferFile_FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseDialogueEventCookedData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWwiseDialogueEventCookedData::StaticStruct, Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData_Statics::NewStructOps, TEXT("WwiseDialogueEventCookedData"), &Z_Registration_Info_UScriptStruct_WwiseDialogueEventCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseDialogueEventCookedData), 683061489U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseDialogueEventCookedData_h_857720814(TEXT("/Script/WwiseResourceLoader"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseDialogueEventCookedData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseDialogueEventCookedData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
