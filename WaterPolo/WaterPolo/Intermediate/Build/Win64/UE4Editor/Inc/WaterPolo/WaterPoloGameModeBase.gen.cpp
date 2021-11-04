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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AWaterPoloGameModeBase::execChangeMenuWidget)
	{
		P_GET_OBJECT(UClass,Z_Param_NewWidgetClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeMenuWidget(Z_Param_NewWidgetClass);
		P_NATIVE_END;
	}
	void AWaterPoloGameModeBase::StaticRegisterNativesAWaterPoloGameModeBase()
	{
		UClass* Class = AWaterPoloGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeMenuWidget", &AWaterPoloGameModeBase::execChangeMenuWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWaterPoloGameModeBase_ChangeMenuWidget_Statics
	{
		struct WaterPoloGameModeBase_eventChangeMenuWidget_Parms
		{
			TSubclassOf<UUserWidget>  NewWidgetClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NewWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AWaterPoloGameModeBase_ChangeMenuWidget_Statics::NewProp_NewWidgetClass = { "NewWidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WaterPoloGameModeBase_eventChangeMenuWidget_Parms, NewWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWaterPoloGameModeBase_ChangeMenuWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterPoloGameModeBase_ChangeMenuWidget_Statics::NewProp_NewWidgetClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaterPoloGameModeBase_ChangeMenuWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water Polo" },
		{ "Comment", "/** Remove the current menu widget and create a new one from the specified class, if provided. */" },
		{ "ModuleRelativePath", "WaterPoloGameModeBase.h" },
		{ "ToolTip", "Remove the current menu widget and create a new one from the specified class, if provided." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaterPoloGameModeBase_ChangeMenuWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaterPoloGameModeBase, nullptr, "ChangeMenuWidget", nullptr, nullptr, sizeof(WaterPoloGameModeBase_eventChangeMenuWidget_Parms), Z_Construct_UFunction_AWaterPoloGameModeBase_ChangeMenuWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterPoloGameModeBase_ChangeMenuWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaterPoloGameModeBase_ChangeMenuWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterPoloGameModeBase_ChangeMenuWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaterPoloGameModeBase_ChangeMenuWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWaterPoloGameModeBase_ChangeMenuWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWaterPoloGameModeBase_NoRegister()
	{
		return AWaterPoloGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AWaterPoloGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_startingWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_startingWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_currentWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWaterPoloGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WaterPolo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWaterPoloGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWaterPoloGameModeBase_ChangeMenuWidget, "ChangeMenuWidget" }, // 3952921906
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterPoloGameModeBase_Statics::NewProp_startingWidgetClass_MetaData[] = {
		{ "Category", "Water Polo" },
		{ "Comment", "/** The widget class we will use as our menu when the game starts. */" },
		{ "ModuleRelativePath", "WaterPoloGameModeBase.h" },
		{ "ToolTip", "The widget class we will use as our menu when the game starts." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWaterPoloGameModeBase_Statics::NewProp_startingWidgetClass = { "startingWidgetClass", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWaterPoloGameModeBase, startingWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AWaterPoloGameModeBase_Statics::NewProp_startingWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterPoloGameModeBase_Statics::NewProp_startingWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterPoloGameModeBase_Statics::NewProp_currentWidget_MetaData[] = {
		{ "Comment", "/** The widget instance that we are using as our menu. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WaterPoloGameModeBase.h" },
		{ "ToolTip", "The widget instance that we are using as our menu." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWaterPoloGameModeBase_Statics::NewProp_currentWidget = { "currentWidget", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWaterPoloGameModeBase, currentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterPoloGameModeBase_Statics::NewProp_currentWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterPoloGameModeBase_Statics::NewProp_currentWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWaterPoloGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterPoloGameModeBase_Statics::NewProp_startingWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterPoloGameModeBase_Statics::NewProp_currentWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWaterPoloGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWaterPoloGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWaterPoloGameModeBase_Statics::ClassParams = {
		&AWaterPoloGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWaterPoloGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWaterPoloGameModeBase_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AWaterPoloGameModeBase, 1923805247);
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
