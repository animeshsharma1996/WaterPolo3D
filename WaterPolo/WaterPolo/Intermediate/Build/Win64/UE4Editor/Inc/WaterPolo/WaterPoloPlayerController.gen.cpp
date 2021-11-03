// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaterPolo/WaterPoloPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterPoloPlayerController() {}
// Cross Module References
	WATERPOLO_API UClass* Z_Construct_UClass_AWaterPoloPlayerController_NoRegister();
	WATERPOLO_API UClass* Z_Construct_UClass_AWaterPoloPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_WaterPolo();
// End Cross Module References
	void AWaterPoloPlayerController::StaticRegisterNativesAWaterPoloPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AWaterPoloPlayerController_NoRegister()
	{
		return AWaterPoloPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AWaterPoloPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWaterPoloPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_WaterPolo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterPoloPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "WaterPoloPlayerController.h" },
		{ "ModuleRelativePath", "WaterPoloPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWaterPoloPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWaterPoloPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWaterPoloPlayerController_Statics::ClassParams = {
		&AWaterPoloPlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWaterPoloPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterPoloPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWaterPoloPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWaterPoloPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWaterPoloPlayerController, 2046010860);
	template<> WATERPOLO_API UClass* StaticClass<AWaterPoloPlayerController>()
	{
		return AWaterPoloPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWaterPoloPlayerController(Z_Construct_UClass_AWaterPoloPlayerController, &AWaterPoloPlayerController::StaticClass, TEXT("/Script/WaterPolo"), TEXT("AWaterPoloPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWaterPoloPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
