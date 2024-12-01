#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"

#include "Engine/TimerHandle.h"

#include "MyGameMode.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FScoreChangedDelegate, int, NewScore);

UCLASS()
class GUNSURVIVER_API AMyGameMode : public AGameModeBase
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int Score = 0;

	UPROPERTY(BlueprintAssignable)
	FScoreChangedDelegate ScoreChangedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BeforeRestartTime = 1.0f;

	FTimerHandle RestartTimer;

	AMyGameMode();

	virtual void BeginPlay() override;

	void SetScore(int NewScore);
	void AddScore(int Increment);

	void RestartGame();
	void OnRestartTimerTimeout();
};
