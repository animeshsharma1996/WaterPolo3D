// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WATERPOLO_MainMenuWidget_generated_h
#error "MainMenuWidget.generated.h already included, missing '#pragma once' in MainMenuWidget.h"
#endif
#define WATERPOLO_MainMenuWidget_generated_h

#define WaterPolo_Source_WaterPolo_MainMenu_MainMenuWidget_h_15_SPARSE_DATA
#define WaterPolo_Source_WaterPolo_MainMenu_MainMenuWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlayButtonClicked);


#define WaterPolo_Source_WaterPolo_MainMenu_MainMenuWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlayButtonClicked);


#define WaterPolo_Source_WaterPolo_MainMenu_MainMenuWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainMenuWidget(); \
	friend struct Z_Construct_UClass_UMainMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UMainMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WaterPolo"), NO_API) \
	DECLARE_SERIALIZER(UMainMenuWidget)


#define WaterPolo_Source_WaterPolo_MainMenu_MainMenuWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMainMenuWidget(); \
	friend struct Z_Construct_UClass_UMainMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UMainMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WaterPolo"), NO_API) \
	DECLARE_SERIALIZER(UMainMenuWidget)


#define WaterPolo_Source_WaterPolo_MainMenu_MainMenuWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenuWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenuWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenuWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenuWidget(UMainMenuWidget&&); \
	NO_API UMainMenuWidget(const UMainMenuWidget&); \
public:


#define WaterPolo_Source_WaterPolo_MainMenu_MainMenuWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenuWidget(UMainMenuWidget&&); \
	NO_API UMainMenuWidget(const UMainMenuWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenuWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenuWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenuWidget)


#define WaterPolo_Source_WaterPolo_MainMenu_MainMenuWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__playButton() { return STRUCT_OFFSET(UMainMenuWidget, playButton); }


#define WaterPolo_Source_WaterPolo_MainMenu_MainMenuWidget_h_12_PROLOG
#define WaterPolo_Source_WaterPolo_MainMenu_MainMenuWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WaterPolo_Source_WaterPolo_MainMenu_MainMenuWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	WaterPolo_Source_WaterPolo_MainMenu_MainMenuWidget_h_15_SPARSE_DATA \
	WaterPolo_Source_WaterPolo_MainMenu_MainMenuWidget_h_15_RPC_WRAPPERS \
	WaterPolo_Source_WaterPolo_MainMenu_MainMenuWidget_h_15_INCLASS \
	WaterPolo_Source_WaterPolo_MainMenu_MainMenuWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WaterPolo_Source_WaterPolo_MainMenu_MainMenuWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WaterPolo_Source_WaterPolo_MainMenu_MainMenuWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	WaterPolo_Source_WaterPolo_MainMenu_MainMenuWidget_h_15_SPARSE_DATA \
	WaterPolo_Source_WaterPolo_MainMenu_MainMenuWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	WaterPolo_Source_WaterPolo_MainMenu_MainMenuWidget_h_15_INCLASS_NO_PURE_DECLS \
	WaterPolo_Source_WaterPolo_MainMenu_MainMenuWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATERPOLO_API UClass* StaticClass<class UMainMenuWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID WaterPolo_Source_WaterPolo_MainMenu_MainMenuWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
