// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
#ifdef WATERPOLO_WaterPoloGameModeBase_generated_h
#error "WaterPoloGameModeBase.generated.h already included, missing '#pragma once' in WaterPoloGameModeBase.h"
#endif
#define WATERPOLO_WaterPoloGameModeBase_generated_h

#define WaterPolo_Source_WaterPolo_WaterPoloGameModeBase_h_15_SPARSE_DATA
#define WaterPolo_Source_WaterPolo_WaterPoloGameModeBase_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeMenuWidget);


#define WaterPolo_Source_WaterPolo_WaterPoloGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeMenuWidget);


#define WaterPolo_Source_WaterPolo_WaterPoloGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWaterPoloGameModeBase(); \
	friend struct Z_Construct_UClass_AWaterPoloGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AWaterPoloGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaterPolo"), NO_API) \
	DECLARE_SERIALIZER(AWaterPoloGameModeBase)


#define WaterPolo_Source_WaterPolo_WaterPoloGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAWaterPoloGameModeBase(); \
	friend struct Z_Construct_UClass_AWaterPoloGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AWaterPoloGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaterPolo"), NO_API) \
	DECLARE_SERIALIZER(AWaterPoloGameModeBase)


#define WaterPolo_Source_WaterPolo_WaterPoloGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWaterPoloGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWaterPoloGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaterPoloGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaterPoloGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWaterPoloGameModeBase(AWaterPoloGameModeBase&&); \
	NO_API AWaterPoloGameModeBase(const AWaterPoloGameModeBase&); \
public:


#define WaterPolo_Source_WaterPolo_WaterPoloGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWaterPoloGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWaterPoloGameModeBase(AWaterPoloGameModeBase&&); \
	NO_API AWaterPoloGameModeBase(const AWaterPoloGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaterPoloGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaterPoloGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWaterPoloGameModeBase)


#define WaterPolo_Source_WaterPolo_WaterPoloGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__startingWidgetClass() { return STRUCT_OFFSET(AWaterPoloGameModeBase, startingWidgetClass); } \
	FORCEINLINE static uint32 __PPO__currentWidget() { return STRUCT_OFFSET(AWaterPoloGameModeBase, currentWidget); }


#define WaterPolo_Source_WaterPolo_WaterPoloGameModeBase_h_12_PROLOG
#define WaterPolo_Source_WaterPolo_WaterPoloGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WaterPolo_Source_WaterPolo_WaterPoloGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	WaterPolo_Source_WaterPolo_WaterPoloGameModeBase_h_15_SPARSE_DATA \
	WaterPolo_Source_WaterPolo_WaterPoloGameModeBase_h_15_RPC_WRAPPERS \
	WaterPolo_Source_WaterPolo_WaterPoloGameModeBase_h_15_INCLASS \
	WaterPolo_Source_WaterPolo_WaterPoloGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WaterPolo_Source_WaterPolo_WaterPoloGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WaterPolo_Source_WaterPolo_WaterPoloGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	WaterPolo_Source_WaterPolo_WaterPoloGameModeBase_h_15_SPARSE_DATA \
	WaterPolo_Source_WaterPolo_WaterPoloGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	WaterPolo_Source_WaterPolo_WaterPoloGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	WaterPolo_Source_WaterPolo_WaterPoloGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATERPOLO_API UClass* StaticClass<class AWaterPoloGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID WaterPolo_Source_WaterPolo_WaterPoloGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
