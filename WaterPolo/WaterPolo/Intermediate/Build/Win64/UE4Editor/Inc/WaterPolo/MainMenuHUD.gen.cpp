// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaterPolo/MainMenu/MainMenuHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuHUD() {}
// Cross Module References
	WATERPOLO_API UClass* Z_Construct_UClass_AMainMenuHUD_NoRegister();
	WATERPOLO_API UClass* Z_Construct_UClass_AMainMenuHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_WaterPolo();
// End Cross Module References
	void AMainMenuHUD::StaticRegisterNativesAMainMenuHUD()
	{
	}
	UClass* Z_Construct_UClass_AMainMenuHUD_NoRegister()
	{
		return AMainMenuHUD::StaticClass();
	}
	struct Z_Construct_UClass_AMainMenuHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainMenuHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_WaterPolo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainMenuHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "MainMenu/MainMenuHUD.h" },
		{ "ModuleRelativePath", "MainMenu/MainMenuHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainMenuHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainMenuHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMainMenuHUD_Statics::ClassParams = {
		&AMainMenuHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMainMenuHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainMenuHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMainMenuHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMainMenuHUD, 3945093206);
	template<> WATERPOLO_API UClass* StaticClass<AMainMenuHUD>()
	{
		return AMainMenuHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMainMenuHUD(Z_Construct_UClass_AMainMenuHUD, &AMainMenuHUD::StaticClass, TEXT("/Script/WaterPolo"), TEXT("AMainMenuHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainMenuHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
