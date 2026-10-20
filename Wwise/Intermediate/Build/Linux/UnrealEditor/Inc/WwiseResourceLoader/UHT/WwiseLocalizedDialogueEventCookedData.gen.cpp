// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseResourceLoader/Public/Wwise/CookedData/WwiseLocalizedDialogueEventCookedData.h"
#include "WwiseFileHandler/Public/Wwise/CookedData/WwiseLanguageCookedData.h"
#include "WwiseResourceLoader/Public/Wwise/CookedData/WwiseDialogueEventCookedData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseLocalizedDialogueEventCookedData() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseLanguageCookedData();
WWISERESOURCELOADER_API UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseGroupType();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseDialogueArgumentPosition();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData();
// End Cross Module References

// Begin ScriptStruct FWwiseDialogueArgumentItem
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseDialogueArgumentItem;
class UScriptStruct* FWwiseDialogueArgumentItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseDialogueArgumentItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseDialogueArgumentItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseDialogueArgumentItem"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseDialogueArgumentItem.OuterSingleton;
}
template<> WWISERESOURCELOADER_API UScriptStruct* StaticStruct<FWwiseDialogueArgumentItem>()
{
	return FWwiseDialogueArgumentItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Group argument requirement in a dialogue event. Used for validation.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedDialogueEventCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Group argument requirement in a dialogue event. Used for validation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedDialogueEventCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Short ID for the Group.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedDialogueEventCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Short ID for the Group." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Optional debug name. Can be empty in release, contain the name, or the full path of the asset.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedDialogueEventCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional debug name. Can be empty in release, contain the name, or the full path of the asset." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GroupId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseDialogueArgumentItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseDialogueArgumentItem, Type), Z_Construct_UEnum_WwiseResourceLoader_EWwiseGroupType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 1743636325
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseDialogueArgumentItem, GroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupId_MetaData), NewProp_GroupId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseDialogueArgumentItem, DebugName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugName_MetaData), NewProp_DebugName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem_Statics::NewProp_GroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem_Statics::NewProp_DebugName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	&NewStructOps,
	"WwiseDialogueArgumentItem",
	Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem_Statics::PropPointers),
	sizeof(FWwiseDialogueArgumentItem),
	alignof(FWwiseDialogueArgumentItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseDialogueArgumentItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseDialogueArgumentItem.InnerSingleton, Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WwiseDialogueArgumentItem.InnerSingleton;
}
// End ScriptStruct FWwiseDialogueArgumentItem

// Begin ScriptStruct FWwiseDialogueArgumentPosition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseDialogueArgumentPosition;
class UScriptStruct* FWwiseDialogueArgumentPosition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseDialogueArgumentPosition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseDialogueArgumentPosition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseDialogueArgumentPosition, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseDialogueArgumentPosition"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseDialogueArgumentPosition.OuterSingleton;
}
template<> WWISERESOURCELOADER_API UScriptStruct* StaticStruct<FWwiseDialogueArgumentPosition>()
{
	return FWwiseDialogueArgumentPosition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWwiseDialogueArgumentPosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Group argument requirement's position in a dialogue event.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedDialogueEventCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Group argument requirement's position in a dialogue event." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Positions_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedDialogueEventCookedData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Positions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Positions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseDialogueArgumentPosition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseDialogueArgumentPosition_Statics::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWwiseDialogueArgumentPosition_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseDialogueArgumentPosition, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Positions_MetaData), NewProp_Positions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseDialogueArgumentPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDialogueArgumentPosition_Statics::NewProp_Positions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDialogueArgumentPosition_Statics::NewProp_Positions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDialogueArgumentPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseDialogueArgumentPosition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	&NewStructOps,
	"WwiseDialogueArgumentPosition",
	Z_Construct_UScriptStruct_FWwiseDialogueArgumentPosition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDialogueArgumentPosition_Statics::PropPointers),
	sizeof(FWwiseDialogueArgumentPosition),
	alignof(FWwiseDialogueArgumentPosition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDialogueArgumentPosition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseDialogueArgumentPosition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWwiseDialogueArgumentPosition()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseDialogueArgumentPosition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseDialogueArgumentPosition.InnerSingleton, Z_Construct_UScriptStruct_FWwiseDialogueArgumentPosition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WwiseDialogueArgumentPosition.InnerSingleton;
}
// End ScriptStruct FWwiseDialogueArgumentPosition

// Begin ScriptStruct FWwiseLocalizedDialogueEventCookedData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseLocalizedDialogueEventCookedData;
class UScriptStruct* FWwiseLocalizedDialogueEventCookedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseLocalizedDialogueEventCookedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseLocalizedDialogueEventCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseLocalizedDialogueEventCookedData"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseLocalizedDialogueEventCookedData.OuterSingleton;
}
template<> WWISERESOURCELOADER_API UScriptStruct* StaticStruct<FWwiseLocalizedDialogueEventCookedData>()
{
	return FWwiseLocalizedDialogueEventCookedData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Dialogue Event, as cooked in the final product.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedDialogueEventCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dialogue Event, as cooked in the final product." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueEventLanguageMap_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedDialogueEventCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Optional debug name. Can be empty in release, contain the name, or the full path of the asset.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedDialogueEventCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional debug name. Can be empty in release, contain the name, or the full path of the asset." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueEventId_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Short ID for the Dialogue Event.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedDialogueEventCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Short ID for the Dialogue Event." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredArguments_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Enumeration of the arguments required for this dialogue event, pointing to the position where it should be stored.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedDialogueEventCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enumeration of the arguments required for this dialogue event, pointing to the position where it should be stored." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueEventLanguageMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueEventLanguageMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DialogueEventLanguageMap;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DialogueEventId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredArguments_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredArguments_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RequiredArguments;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseLocalizedDialogueEventCookedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::NewProp_DialogueEventLanguageMap_ValueProp = { "DialogueEventLanguageMap", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FWwiseDialogueEventCookedData, METADATA_PARAMS(0, nullptr) }; // 683061489
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::NewProp_DialogueEventLanguageMap_Key_KeyProp = { "DialogueEventLanguageMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseLanguageCookedData, METADATA_PARAMS(0, nullptr) }; // 1724715165
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::NewProp_DialogueEventLanguageMap = { "DialogueEventLanguageMap", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseLocalizedDialogueEventCookedData, DialogueEventLanguageMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueEventLanguageMap_MetaData), NewProp_DialogueEventLanguageMap_MetaData) }; // 1724715165 683061489
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseLocalizedDialogueEventCookedData, DebugName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugName_MetaData), NewProp_DebugName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::NewProp_DialogueEventId = { "DialogueEventId", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseLocalizedDialogueEventCookedData, DialogueEventId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueEventId_MetaData), NewProp_DialogueEventId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::NewProp_RequiredArguments_ValueProp = { "RequiredArguments", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FWwiseDialogueArgumentPosition, METADATA_PARAMS(0, nullptr) }; // 3843544717
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::NewProp_RequiredArguments_Key_KeyProp = { "RequiredArguments_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem, METADATA_PARAMS(0, nullptr) }; // 2382235196
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::NewProp_RequiredArguments = { "RequiredArguments", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseLocalizedDialogueEventCookedData, RequiredArguments), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredArguments_MetaData), NewProp_RequiredArguments_MetaData) }; // 2382235196 3843544717
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::NewProp_DialogueEventLanguageMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::NewProp_DialogueEventLanguageMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::NewProp_DialogueEventLanguageMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::NewProp_DebugName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::NewProp_DialogueEventId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::NewProp_RequiredArguments_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::NewProp_RequiredArguments_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::NewProp_RequiredArguments,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	&NewStructOps,
	"WwiseLocalizedDialogueEventCookedData",
	Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::PropPointers),
	sizeof(FWwiseLocalizedDialogueEventCookedData),
	alignof(FWwiseLocalizedDialogueEventCookedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseLocalizedDialogueEventCookedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseLocalizedDialogueEventCookedData.InnerSingleton, Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WwiseLocalizedDialogueEventCookedData.InnerSingleton;
}
// End ScriptStruct FWwiseLocalizedDialogueEventCookedData

// Begin Registration
struct Z_CompiledInDeferFile_FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseLocalizedDialogueEventCookedData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWwiseDialogueArgumentItem::StaticStruct, Z_Construct_UScriptStruct_FWwiseDialogueArgumentItem_Statics::NewStructOps, TEXT("WwiseDialogueArgumentItem"), &Z_Registration_Info_UScriptStruct_WwiseDialogueArgumentItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseDialogueArgumentItem), 2382235196U) },
		{ FWwiseDialogueArgumentPosition::StaticStruct, Z_Construct_UScriptStruct_FWwiseDialogueArgumentPosition_Statics::NewStructOps, TEXT("WwiseDialogueArgumentPosition"), &Z_Registration_Info_UScriptStruct_WwiseDialogueArgumentPosition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseDialogueArgumentPosition), 3843544717U) },
		{ FWwiseLocalizedDialogueEventCookedData::StaticStruct, Z_Construct_UScriptStruct_FWwiseLocalizedDialogueEventCookedData_Statics::NewStructOps, TEXT("WwiseLocalizedDialogueEventCookedData"), &Z_Registration_Info_UScriptStruct_WwiseLocalizedDialogueEventCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseLocalizedDialogueEventCookedData), 2121155545U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseLocalizedDialogueEventCookedData_h_3302721344(TEXT("/Script/WwiseResourceLoader"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseLocalizedDialogueEventCookedData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseLocalizedDialogueEventCookedData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
