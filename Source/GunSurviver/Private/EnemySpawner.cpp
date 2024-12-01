#include "EnemySpawner.h"
#include "Kismet/GameplayStatics.h"

AEnemySpawner::AEnemySpawner()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AEnemySpawner::BeginPlay()
{
	Super::BeginPlay();
	AGameModeBase* GameMode = UGameplayStatics::GetGameMode(GetWorld());	
	if (GameMode) {
		MyGameMode = Cast<AMyGameMode>(GameMode);
		check(MyGameMode);
	}
	AActor* PlayerActor = UGameplayStatics::GetActorOfClass(GetWorld(), APlayerCharacter::StaticClass());
	if (PlayerActor) {
		PlayerCharacter = Cast<APlayerCharacter>(PlayerActor);
		PlayerCharacter->PlayerDiedDelegate.AddDynamic(this, &AEnemySpawner::OnPlayerDied);
	}
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
	SetupEnemy(Enemy);
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

void AEnemySpawner::SetupEnemy(AEnemy* Enemy) {
	if (Enemy) {
		Enemy->PlayerCharacter = PlayerCharacter;
		Enemy->CanFollow = true;
		Enemy->EnemyDeathDelegate.AddDynamic(this, &AEnemySpawner::OnEnemyDied);
	}
}

void AEnemySpawner::OnEnemyDied() {
	int ScoreToAdd = 10;
	MyGameMode->AddScore(ScoreToAdd);
}

void AEnemySpawner::OnPlayerDied() {
	StopSpawning();

	TArray<AActor*> EnemyArray;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AEnemy::StaticClass(), EnemyArray);
	for (AActor* EnemyActor : EnemyArray) {
		AEnemy* Enemy = Cast<AEnemy>(EnemyActor);
		if (Enemy && Enemy->IsAlive) {
			Enemy->CanFollow = false;
		}
	}
	MyGameMode->RestartGame();
}