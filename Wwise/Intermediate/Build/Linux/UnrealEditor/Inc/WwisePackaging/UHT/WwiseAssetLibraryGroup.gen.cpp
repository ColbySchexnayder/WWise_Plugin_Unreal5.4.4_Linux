// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwisePackaging/Public/Wwise/Packaging/WwiseAssetLibraryGroup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseAssetLibraryGroup() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_WwisePackaging();
WWISEPACKAGING_API UClass* Z_Construct_UClass_UWwiseAssetLibrary_NoRegister();
WWISEPACKAGING_API UClass* Z_Construct_UClass_UWwiseAssetLibraryGroup();
WWISEPACKAGING_API UClass* Z_Construct_UClass_UWwiseAssetLibraryGroup_NoRegister();
// End Cross Module References

// Begin Class UWwiseAssetLibraryGroup
void UWwiseAssetLibraryGroup::StaticRegisterNativesUWwiseAssetLibraryGroup()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWwiseAssetLibraryGroup);
UClass* Z_Construct_UClass_UWwiseAssetLibraryGroup_NoRegister()
{
	return UWwiseAssetLibraryGroup::StaticClass();
}
struct Z_Construct_UClass_UWwiseAssetLibraryGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Prioritized list of all Wwise Asset Libraries to include when packaging its Gameplay Module's Wwise Assets.\n// If no values are set or if they fall through, shared Wwise Assets are cooked as Additional Data.\n" },
#endif
		{ "DisplayName", "Wwise Asset Library Filter Group" },
		{ "IncludePath", "Wwise/Packaging/WwiseAssetLibraryGroup.h" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibraryGroup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prioritized list of all Wwise Asset Libraries to include when packaging its Gameplay Module's Wwise Assets.\nIf no values are set or if they fall through, shared Wwise Assets are cooked as Additional Data." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Libraries_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Prioritized list of all Wwise Libraries to include when packaging Wwise assets as Bulk Data.\n//If no value is set or if they fall through, shared Wwise asset files are cooked as Additional Data.\n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibraryGroup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prioritized list of all Wwise Libraries to include when packaging Wwise assets as Bulk Data.\nIf no value is set or if they fall through, shared Wwise asset files are cooked as Additional Data." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Libraries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Libraries;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseAssetLibraryGroup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UWwiseAssetLibraryGroup_Statics::NewProp_Libraries_Inner = { "Libraries", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UWwiseAssetLibrary_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWwiseAssetLibraryGroup_Statics::NewProp_Libraries = { "Libraries", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWwiseAssetLibraryGroup, Libraries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Libraries_MetaData), NewProp_Libraries_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWwiseAssetLibraryGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAssetLibraryGroup_Statics::NewProp_Libraries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAssetLibraryGroup_Statics::NewProp_Libraries,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAssetLibraryGroup_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWwiseAssetLibraryGroup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_WwisePackaging,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAssetLibraryGroup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwiseAssetLibraryGroup_Statics::ClassParams = {
	&UWwiseAssetLibraryGroup::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWwiseAssetLibraryGroup_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAssetLibraryGroup_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAssetLibraryGroup_Statics::Class_MetaDataParams), Z_Construct_UClass_UWwiseAssetLibraryGroup_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWwiseAssetLibraryGroup()
{
	if (!Z_Registration_Info_UClass_UWwiseAssetLibraryGroup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseAssetLibraryGroup.OuterSingleton, Z_Construct_UClass_UWwiseAssetLibraryGroup_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwiseAssetLibraryGroup.OuterSingleton;
}
template<> WWISEPACKAGING_API UClass* StaticClass<UWwiseAssetLibraryGroup>()
{
	return UWwiseAssetLibraryGroup::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWwiseAssetLibraryGroup);
// End Class UWwiseAssetLibraryGroup

// Begin Registration
struct Z_CompiledInDeferFile_FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_WwisePackaging_Public_Wwise_Packaging_WwiseAssetLibraryGroup_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseAssetLibraryGroup, UWwiseAssetLibraryGroup::StaticClass, TEXT("UWwiseAssetLibraryGroup"), &Z_Registration_Info_UClass_UWwiseAssetLibraryGroup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseAssetLibraryGroup), 3245778931U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_WwisePackaging_Public_Wwise_Packaging_WwiseAssetLibraryGroup_h_2120754681(TEXT("/Script/WwisePackaging"),
	Z_CompiledInDeferFile_FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_WwisePackaging_Public_Wwise_Packaging_WwiseAssetLibraryGroup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WeeTattieStudios_CastleCairnSVNwc_trunk_Plugins_Wwise_Source_WwisePackaging_Public_Wwise_Packaging_WwiseAssetLibraryGroup_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
