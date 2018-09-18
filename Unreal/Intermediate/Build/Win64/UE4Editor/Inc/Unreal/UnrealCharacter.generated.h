// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREAL_UnrealCharacter_generated_h
#error "UnrealCharacter.generated.h already included, missing '#pragma once' in UnrealCharacter.h"
#endif
#define UNREAL_UnrealCharacter_generated_h

#define Unreal_Source_Unreal_UnrealCharacter_h_12_RPC_WRAPPERS
#define Unreal_Source_Unreal_UnrealCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Unreal_Source_Unreal_UnrealCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUnrealCharacter(); \
	friend UNREAL_API class UClass* Z_Construct_UClass_AUnrealCharacter(); \
public: \
	DECLARE_CLASS(AUnrealCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Unreal"), NO_API) \
	DECLARE_SERIALIZER(AUnrealCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Unreal_Source_Unreal_UnrealCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAUnrealCharacter(); \
	friend UNREAL_API class UClass* Z_Construct_UClass_AUnrealCharacter(); \
public: \
	DECLARE_CLASS(AUnrealCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Unreal"), NO_API) \
	DECLARE_SERIALIZER(AUnrealCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Unreal_Source_Unreal_UnrealCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUnrealCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUnrealCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnrealCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnrealCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnrealCharacter(AUnrealCharacter&&); \
	NO_API AUnrealCharacter(const AUnrealCharacter&); \
public:


#define Unreal_Source_Unreal_UnrealCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnrealCharacter(AUnrealCharacter&&); \
	NO_API AUnrealCharacter(const AUnrealCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnrealCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnrealCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUnrealCharacter)


#define Unreal_Source_Unreal_UnrealCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AUnrealCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AUnrealCharacter, FollowCamera); }


#define Unreal_Source_Unreal_UnrealCharacter_h_9_PROLOG
#define Unreal_Source_Unreal_UnrealCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Unreal_Source_Unreal_UnrealCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Unreal_Source_Unreal_UnrealCharacter_h_12_RPC_WRAPPERS \
	Unreal_Source_Unreal_UnrealCharacter_h_12_INCLASS \
	Unreal_Source_Unreal_UnrealCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Unreal_Source_Unreal_UnrealCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Unreal_Source_Unreal_UnrealCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Unreal_Source_Unreal_UnrealCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Unreal_Source_Unreal_UnrealCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Unreal_Source_Unreal_UnrealCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Unreal_Source_Unreal_UnrealCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
