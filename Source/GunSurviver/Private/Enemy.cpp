#include "Enemy.h"

#include "kismet/GameplayStatics.h"

AEnemy::AEnemy()
{
	PrimaryActorTick.bCanEverTick = true;
	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComp"));
	SetRootComponent(CapsuleComp);

	EnemyFlipbook = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("EnemyFlipbook"));
	EnemyFlipbook->SetupAttachment(CapsuleComp);

}

void AEnemy::BeginPlay()
{
	Super::BeginPlay();

	if (!PlayerCharacter) {
		AActor* PlayerActor = UGameplayStatics::GetActorOfClass(GetWorld(), APlayerCharacter::StaticClass());
		if (PlayerActor) {
			PlayerCharacter = Cast<APlayerCharacter>(PlayerActor);
			CanFollow = true;
		}
	}
	
}

void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (CanFollow && IsAlive && PlayerCharacter) {
		FVector PlayerLocation = PlayerCharacter->GetActorLocation();
		FVector EnemyLocation = GetActorLocation();
		FVector Direction = PlayerLocation - EnemyLocation;
		float DistToPlayer = Direction.Length();
		if (DistToPlayer >= StopDistance) {
			Direction.Normalize();
			FVector NewLocation = EnemyLocation + Direction * MovementSpeed * DeltaTime;
			SetActorLocation(NewLocation);
		}
		float FlipbookScale = EnemyFlipbook->GetComponentScale().X;
		EnemyLocation = GetActorLocation();
		if (EnemyLocation.X > PlayerLocation.X) {
			if(FlipbookScale > 0)
				EnemyFlipbook->SetWorldScale3D(FVector(-1.0f, 1.0f, 1.0f));
		}
		else {
			if (FlipbookScale < 0)
				EnemyFlipbook->SetWorldScale3D(FVector(1.0f, 1.0f, 1.0f));
		}
	}
}

void AEnemy::Die() {
	if (!IsAlive) return;
	IsAlive = false;
	CanFollow = false;

	EnemyFlipbook->SetFlipbook(DeadFlipbookAsset);
	EnemyFlipbook->SetTranslucentSortPriority(-2);
	
	GetWorldTimerManager().SetTimer(DestroyTimer, this, &AEnemy::OnDestroyTimerTimeout, 1.0f, false, 4.0f);
}


void AEnemy::OnDestroyTimerTimeout() {
	Destroy();
}