#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Components/SphereComponent.h"
#include "PaperSpriteComponent.h"
#include "Engine/TimerHandle.h"

#include "Bullet.generated.h"

UCLASS()
class GUNSURVIVER_API ABullet : public AActor
{
	GENERATED_BODY()
	
public:	
	ABullet();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	USphereComponent* SphereComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UPaperSpriteComponent* BulletSprite;

	UPROPERTY(BlueprintReadWrite)
	FVector2D MovementDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MovementSpeed = 300.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool IsLaunched = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool IsDisabled = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DeleteTime = 10;

	FTimerHandle DeleteTimer;

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	void Launch(FVector2D Direction, float Speed);
	void OnDeleteTimerOut();

	UFUNCTION()
	void OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, 
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	void DisableBullet();
};
