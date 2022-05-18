// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PORTARTTEST_Welder_generated_h
#error "Welder.generated.h already included, missing '#pragma once' in Welder.h"
#endif
#define PORTARTTEST_Welder_generated_h

#define PortArtTest_Source_PortArtTest_Public_Welder_h_17_SPARSE_DATA
#define PortArtTest_Source_PortArtTest_Public_Welder_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRelease);


#define PortArtTest_Source_PortArtTest_Public_Welder_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRelease);


#define PortArtTest_Source_PortArtTest_Public_Welder_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWelder(); \
	friend struct Z_Construct_UClass_AWelder_Statics; \
public: \
	DECLARE_CLASS(AWelder, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PortArtTest"), NO_API) \
	DECLARE_SERIALIZER(AWelder)


#define PortArtTest_Source_PortArtTest_Public_Welder_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAWelder(); \
	friend struct Z_Construct_UClass_AWelder_Statics; \
public: \
	DECLARE_CLASS(AWelder, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PortArtTest"), NO_API) \
	DECLARE_SERIALIZER(AWelder)


#define PortArtTest_Source_PortArtTest_Public_Welder_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWelder(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWelder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWelder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWelder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWelder(AWelder&&); \
	NO_API AWelder(const AWelder&); \
public:


#define PortArtTest_Source_PortArtTest_Public_Welder_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWelder(AWelder&&); \
	NO_API AWelder(const AWelder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWelder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWelder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWelder)


#define PortArtTest_Source_PortArtTest_Public_Welder_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MoveSpeed() { return STRUCT_OFFSET(AWelder, MoveSpeed); } \
	FORCEINLINE static uint32 __PPO__GrabDist() { return STRUCT_OFFSET(AWelder, GrabDist); } \
	FORCEINLINE static uint32 __PPO__GrabbedWeldable() { return STRUCT_OFFSET(AWelder, GrabbedWeldable); }


#define PortArtTest_Source_PortArtTest_Public_Welder_h_14_PROLOG
#define PortArtTest_Source_PortArtTest_Public_Welder_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PortArtTest_Source_PortArtTest_Public_Welder_h_17_PRIVATE_PROPERTY_OFFSET \
	PortArtTest_Source_PortArtTest_Public_Welder_h_17_SPARSE_DATA \
	PortArtTest_Source_PortArtTest_Public_Welder_h_17_RPC_WRAPPERS \
	PortArtTest_Source_PortArtTest_Public_Welder_h_17_INCLASS \
	PortArtTest_Source_PortArtTest_Public_Welder_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PortArtTest_Source_PortArtTest_Public_Welder_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PortArtTest_Source_PortArtTest_Public_Welder_h_17_PRIVATE_PROPERTY_OFFSET \
	PortArtTest_Source_PortArtTest_Public_Welder_h_17_SPARSE_DATA \
	PortArtTest_Source_PortArtTest_Public_Welder_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	PortArtTest_Source_PortArtTest_Public_Welder_h_17_INCLASS_NO_PURE_DECLS \
	PortArtTest_Source_PortArtTest_Public_Welder_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PORTARTTEST_API UClass* StaticClass<class AWelder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PortArtTest_Source_PortArtTest_Public_Welder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
