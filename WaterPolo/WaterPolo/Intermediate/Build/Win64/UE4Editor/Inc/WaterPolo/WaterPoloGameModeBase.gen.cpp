// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaterPolo/WaterPoloGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterPoloGameModeBase() {}
// Cross Module References
	WATERPOLO_API UClass* Z_Construct_UClass_AWaterPoloGameModeBase_NoRegister();
	WATERPOLO_API UClass* Z_Construct_UClass_AWaterPoloGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_WaterPolo();
// End Cross Module References
	void AWaterPoloGameModeBase::StaticRegisterNativesAWaterPoloGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AWaterPoloGameModeBase_NoRegister()
	{
		return AWaterPoloGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AWaterPoloGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWaterPoloGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WaterPolo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterPoloGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "WaterPoloGameModeBase.h" },
		{ "ModuleRelativePath", "WaterPoloGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWaterPoloGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWaterPoloGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWaterPoloGameModeBase_Statics::ClassParams = {
		&AWaterPoloGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AWaterPoloGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterPoloGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWaterPoloGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWaterPoloGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWaterPoloGameModeBase, 51643560);
	template<> WATERPOLO_API UClass* StaticClass<AWaterPoloGameModeBase>()
	{
		return AWaterPoloGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWaterPoloGameModeBase(Z_Construct_UClass_AWaterPoloGameModeBase, &AWaterPoloGameModeBase::StaticClass, TEXT("/Script/WaterPolo"), TEXT("AWaterPoloGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWaterPoloGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
