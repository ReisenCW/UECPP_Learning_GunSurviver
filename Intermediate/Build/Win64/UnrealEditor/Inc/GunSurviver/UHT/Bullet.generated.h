// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Bullet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef GUNSURVIVER_Bullet_generated_h
#error "Bullet.generated.h already included, missing '#pragma once' in Bullet.h"
#endif
#define GUNSURVIVER_Bullet_generated_h

#define FID_Unreal_Projects_learning_GunSurviver_GunSurviver_Source_GunSurviver_Public_Bullet_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOverlapBegin);


#define FID_Unreal_Projects_learning_GunSurviver_GunSurviver_Source_GunSurviver_Public_Bullet_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABullet(); \
	friend struct Z_Construct_UClass_ABullet_Statics; \
public: \
	DECLARE_CLASS(ABullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GunSurviver"), NO_API) \
	DECLARE_SERIALIZER(ABullet)


#define FID_Unreal_Projects_learning_GunSurviver_GunSurviver_Source_GunSurviver_Public_Bullet_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABullet(ABullet&&); \
	ABullet(const ABullet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABullet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABullet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABullet) \
	NO_API virtual ~ABullet();


#define FID_Unreal_Projects_learning_GunSurviver_GunSurviver_Source_GunSurviver_Public_Bullet_h_12_PROLOG
#define FID_Unreal_Projects_learning_GunSurviver_GunSurviver_Source_GunSurviver_Public_Bullet_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_learning_GunSurviver_GunSurviver_Source_GunSurviver_Public_Bullet_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_learning_GunSurviver_GunSurviver_Source_GunSurviver_Public_Bullet_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_learning_GunSurviver_GunSurviver_Source_GunSurviver_Public_Bullet_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GUNSURVIVER_API UClass* StaticClass<class ABullet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_learning_GunSurviver_GunSurviver_Source_GunSurviver_Public_Bullet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
