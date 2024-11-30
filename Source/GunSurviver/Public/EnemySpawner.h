#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Enemy.h"
#include "Engine/TimerHandle.h"

#include "EnemySpawner.generated.h"

UCLASS()
class GUNSURVIVER_API AEnemySpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	AEnemySpawner();

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AEnemy> EnemyClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpawnTime = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpawnDistance = 400.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int TotalEnemyCount = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int DifficultySpikeInterval = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpawnTimeMinimumLimit = 0.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpawnTimeDecrement = 0.05f;

	FTimerHandle EnemySpawnTimer;

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	void OnEnemySpawnTimerTimeout();
	void SpawnEnemy();
	void StartSpawning();
	void StopSpawning();
};
