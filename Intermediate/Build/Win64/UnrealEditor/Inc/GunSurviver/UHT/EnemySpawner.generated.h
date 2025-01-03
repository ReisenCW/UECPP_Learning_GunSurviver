// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnemySpawner.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GUNSURVIVER_EnemySpawner_generated_h
#error "EnemySpawner.generated.h already included, missing '#pragma once' in EnemySpawner.h"
#endif
#define GUNSURVIVER_EnemySpawner_generated_h

#define FID_Unreal_Projects_learning_GunSurviver_GunSurviver_Source_GunSurviver_Public_EnemySpawner_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPlayerDied); \
	DECLARE_FUNCTION(execOnEnemyDied);


#define FID_Unreal_Projects_learning_GunSurviver_GunSurviver_Source_GunSurviver_Public_EnemySpawner_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemySpawner(); \
	friend struct Z_Construct_UClass_AEnemySpawner_Statics; \
public: \
	DECLARE_CLASS(AEnemySpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GunSurviver"), NO_API) \
	DECLARE_SERIALIZER(AEnemySpawner)


#define FID_Unreal_Projects_learning_GunSurviver_GunSurviver_Source_GunSurviver_Public_EnemySpawner_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEnemySpawner(AEnemySpawner&&); \
	AEnemySpawner(const AEnemySpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemySpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemySpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemySpawner) \
	NO_API virtual ~AEnemySpawner();


#define FID_Unreal_Projects_learning_GunSurviver_GunSurviver_Source_GunSurviver_Public_EnemySpawner_h_13_PROLOG
#define FID_Unreal_Projects_learning_GunSurviver_GunSurviver_Source_GunSurviver_Public_EnemySpawner_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_learning_GunSurviver_GunSurviver_Source_GunSurviver_Public_EnemySpawner_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_learning_GunSurviver_GunSurviver_Source_GunSurviver_Public_EnemySpawner_h_16_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_learning_GunSurviver_GunSurviver_Source_GunSurviver_Public_EnemySpawner_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GUNSURVIVER_API UClass* StaticClass<class AEnemySpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_learning_GunSurviver_GunSurviver_Source_GunSurviver_Public_EnemySpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
