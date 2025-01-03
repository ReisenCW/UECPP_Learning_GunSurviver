#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Components/CapsuleComponent.h"
#include "PaperFlipbookComponent.h"

#include "Engine/TimerHandle.h"

#include "PlayerCharacter.h"

#include "Kismet/GameplayStatics.h"

#include "Enemy.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEnemyDeathDelegate);

UCLASS()
class GUNSURVIVER_API AEnemy : public AActor
{
	GENERATED_BODY()
	
public:	
	AEnemy();
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UCapsuleComponent* CapsuleComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UPaperFlipbookComponent* EnemyFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UPaperFlipbook* DeadFlipbookAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USoundBase* EnemyDeathSound;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	APlayerCharacter* PlayerCharacter;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool IsAlive = true;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool CanFollow = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MovementSpeed = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StopDistance = 20.0f;

	FTimerHandle DestroyTimer;

	FEnemyDeathDelegate EnemyDeathDelegate;

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	void Die();
	void OnDestroyTimerTimeout();

};
