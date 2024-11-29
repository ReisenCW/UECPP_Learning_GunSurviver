// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GUNSURVIVER_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define GUNSURVIVER_PlayerCharacter_generated_h

#define FID_Unreal_Projects_learning_GunSurviver_GunSurviver_Source_GunSurviver_Public_PlayerCharacter_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GunSurviver"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define FID_Unreal_Projects_learning_GunSurviver_GunSurviver_Source_GunSurviver_Public_PlayerCharacter_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlayerCharacter(APlayerCharacter&&); \
	APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter) \
	NO_API virtual ~APlayerCharacter();


#define FID_Unreal_Projects_learning_GunSurviver_GunSurviver_Source_GunSurviver_Public_PlayerCharacter_h_26_PROLOG
#define FID_Unreal_Projects_learning_GunSurviver_GunSurviver_Source_GunSurviver_Public_PlayerCharacter_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_learning_GunSurviver_GunSurviver_Source_GunSurviver_Public_PlayerCharacter_h_29_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_learning_GunSurviver_GunSurviver_Source_GunSurviver_Public_PlayerCharacter_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GUNSURVIVER_API UClass* StaticClass<class APlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_learning_GunSurviver_GunSurviver_Source_GunSurviver_Public_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
