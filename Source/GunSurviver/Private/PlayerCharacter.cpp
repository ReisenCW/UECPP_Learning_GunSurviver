#include "PlayerCharacter.h"
#include "Kismet/KismetMathLibrary.h"

APlayerCharacter::APlayerCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComp"));
	SetRootComponent(CapsuleComp);

	CharacterFlipbook = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("CharacterFlipbook"));
	CharacterFlipbook->SetupAttachment(RootComponent);

	GunParent = CreateDefaultSubobject<USceneComponent>(TEXT("GunParent"));
	GunParent->SetupAttachment(RootComponent);

	GunComp = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("GunComp"));
	GunComp->SetupAttachment(GunParent);

	BulletSpawnPosition = CreateDefaultSubobject<USceneComponent>(TEXT("BulletSpawnPosition"));
	BulletSpawnPosition->SetupAttachment(GunComp);
}

void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	APlayerController* PlayerController = Cast<APlayerController>(Controller);
	if (PlayerController)
	{
		PlayerController->SetShowMouseCursor(true);
		UEnhancedInputLocalPlayerSubsystem* Subsystem 
			= ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());
		if (Subsystem) {
			Subsystem->AddMappingContext(InputMappingContext, 0);
		}
	}
}

bool APlayerCharacter::IsInMapBoundsHorizontal(float XPos) {
	bool Res = true;
	Res = (XPos > HorizontalLimits.X) && (XPos < HorizontalLimits.Y);
	return Res;
}
bool APlayerCharacter::IsInMapBoundsVertical(float ZPos) {
	bool Res = true;
	Res = (ZPos > VerticalLimits.X) && (ZPos < VerticalLimits.Y);
	return Res;
}


void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	//Player Move
	if (CanMove) {
		if (MovementDirection.Length() > 0) {
			if (MovementDirection.Length() > 1) {
				MovementDirection.Normalize();
			}
			FVector2D DistToMove = DeltaTime * MovementDirection * MovementSpeed;
			FVector NewLocation = GetActorLocation() + FVector(DistToMove.X, 0.0f, 0.0f);
			if (!IsInMapBoundsHorizontal(NewLocation.X)) {
				NewLocation -= FVector(DistToMove.X, 0.0f, 0.0f);
			}

			NewLocation += FVector(0.0f, 0.0f, DistToMove.Y);
			if (!IsInMapBoundsVertical(NewLocation.Z)) {
				NewLocation -= FVector(0.0f, 0.0f, DistToMove.Y);
			}

			SetActorLocation(NewLocation);
		}
	}


	//Rotating the gun
	APlayerController* PlayerController = Cast<APlayerController>(Controller);
	if (PlayerController) {
		FVector MouseWorldLocation, MouseWolrdDirection;
		PlayerController->DeprojectMousePositionToWorld(MouseWorldLocation, MouseWolrdDirection);

		FVector CurrentLocation = GetActorLocation();
		FVector Start = FVector(CurrentLocation.X, 0.0f, CurrentLocation.Z);
		FVector End = FVector(MouseWorldLocation.X, 0.0f, MouseWorldLocation.Z);
		FRotator GunRotator = UKismetMathLibrary::FindLookAtRotation(Start, End);

		GunParent->SetRelativeRotation(GunRotator);
	}
}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	if (EnhancedInputComponent) {
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, 
			&APlayerCharacter::MoveTriggered);
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Canceled, this, 
			&APlayerCharacter::MoveCompleted);
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Completed, this, 
			&APlayerCharacter::MoveCompleted);
		EnhancedInputComponent->BindAction(ShootAction, ETriggerEvent::Started, this,
			&APlayerCharacter::Shoot);
		EnhancedInputComponent->BindAction(ShootAction, ETriggerEvent::Triggered, this,
			&APlayerCharacter::Shoot);
	}
}

void APlayerCharacter::MoveTriggered(const FInputActionValue& Value) {
	FVector2D MoveActionValue = Value.Get<FVector2D>();

	if (CanMove) {
		MovementDirection = MoveActionValue;
		CharacterFlipbook->SetFlipbook(RunFlipbook);

		FVector FlipScale = CharacterFlipbook->GetComponentScale();
		if (MoveActionValue.X < 0.0f) {
			if (FlipScale.X > 0.0f) {
				FlipScale.X *= -1;
				CharacterFlipbook->SetWorldScale3D(FlipScale);
			}
		}
		else if (MoveActionValue.X > 0.0f) {
			if (FlipScale.X < 0.0f) {
				FlipScale.X *= -1;
				CharacterFlipbook->SetWorldScale3D(FlipScale);
			}
		}
	}
}

void APlayerCharacter::MoveCompleted(const FInputActionValue& Value) {
	MovementDirection = FVector2D::ZeroVector;
	CharacterFlipbook->SetFlipbook(IdleFlipbook);
}

void APlayerCharacter::Shoot(const FInputActionValue& Value) {
	if (CanShoot) {
		CanShoot = false;

		//bullet spawn
		ABullet* Bullet = GetWorld()->SpawnActor<ABullet>(BulletToSpawn, 
			BulletSpawnPosition->GetComponentLocation(), FRotator(0.0f, 0.0f, 0.0f));
		check(Bullet);

		//get mouse world location
		APlayerController* PlayerController = Cast<APlayerController>(Controller);
		check(PlayerController)
		FVector MouseWorldLocation, MouseWolrdDirection;
		PlayerController->DeprojectMousePositionToWorld(MouseWorldLocation, MouseWolrdDirection);

		//caculate bullet direction
		FVector2D BulletDirection = FVector2D(MouseWorldLocation.X - GetActorLocation().X,
			MouseWorldLocation.Z - GetActorLocation().Z);
		BulletDirection.Normalize();
		//launch the bullet
		Bullet->Launch(BulletDirection, BulletSpeed);

		GetWorldTimerManager().SetTimer(ShootCoolDownTimer, this, &APlayerCharacter::OnShootCollDownTimeOut, 
			1.0f, false, ShootCoolDownInSecs);
	}
}

void APlayerCharacter::OnShootCollDownTimeOut() {
	CanShoot = true;
}
