#include "EnemySpawner.h"

AEnemySpawner::AEnemySpawner()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AEnemySpawner::BeginPlay()
{
	Super::BeginPlay();
	StartSpawning();
	
}
void AEnemySpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}



void AEnemySpawner::StartSpawning() {
	GetWorldTimerManager().SetTimer(EnemySpawnTimer, this, &AEnemySpawner::OnEnemySpawnTimerTimeout, SpawnTime, true, SpawnTime);
}

void AEnemySpawner::StopSpawning() {
	GetWorldTimerManager().ClearTimer(EnemySpawnTimer);
}

void AEnemySpawner::OnEnemySpawnTimerTimeout() {
	SpawnEnemy();
}

void AEnemySpawner::SpawnEnemy() {
	//spawn enemy
	FVector2D RandomLocation = FVector2D(FMath::VRand());
	RandomLocation.Normalize();
	RandomLocation *= SpawnDistance;
	FVector EnemyLocation = GetActorLocation() + FVector(RandomLocation.X, 0.0f, RandomLocation.Y);
	AEnemy* Enemy = GetWorld()->SpawnActor<AEnemy>(EnemyClass, EnemyLocation, FRotator(0.0f, 0.0f, 0.0f));
	//increase difficulty
	TotalEnemyCount++;
	if (TotalEnemyCount % DifficultySpikeInterval == 0) {
		if (SpawnTime > SpawnTimeMinimumLimit) {
			SpawnTime -= SpawnTimeDecrement;
			if(SpawnTime < SpawnTimeMinimumLimit)
				SpawnTime = SpawnTimeMinimumLimit;
			StopSpawning();//SetTimer传入的SpawnTime是值传递，所以这里需要重新设置
			StartSpawning();
		}
	}
}