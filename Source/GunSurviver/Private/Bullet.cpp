#include "Bullet.h"
#include "Enemy.h"

ABullet::ABullet()
{
	PrimaryActorTick.bCanEverTick = true;

	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	SetRootComponent(SphereComp);

	BulletSprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("BulletSprite"));
	BulletSprite->SetupAttachment(RootComponent);

	//Default
	MovementDirection = FVector2D(1.0f, 0.0f);
}

void ABullet::BeginPlay()
{
	Super::BeginPlay();
	SphereComp->OnComponentBeginOverlap.AddDynamic(this, &ABullet::OverlapBegin);
}

void ABullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (IsLaunched) {
		if (MovementDirection.Length() > 1.0f)
			MovementDirection.Normalize();
		FVector2D DistToMove = MovementDirection * MovementSpeed * DeltaTime;
		FVector NewLocation = FVector(DistToMove.X, 0.0f, DistToMove.Y) + GetActorLocation();
		SetActorLocation(NewLocation);
	}
}

void ABullet::Launch(FVector2D Direction, float Speed) {
	if (IsLaunched) {
		return;
	}
	IsLaunched = true;
	MovementDirection = Direction;
	MovementSpeed = Speed;

	GetWorldTimerManager().SetTimer(DeleteTimer, this, &ABullet::OnDeleteTimerOut, 1.0f, false, DeleteTime);
}

void ABullet::OnDeleteTimerOut() {
	Destroy();
}

void ABullet::OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
	AEnemy* Enemy = Cast<AEnemy>(OtherActor);
	if (Enemy && Enemy->IsAlive) {
		DisableBullet();
		Enemy->Die();
	}
}

void ABullet::DisableBullet() {
	if (IsDisabled) {
		return;
	}
	IsDisabled = true;

	SphereComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}
