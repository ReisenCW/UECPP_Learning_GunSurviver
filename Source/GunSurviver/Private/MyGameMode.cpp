#include "MyGameMode.h"
#include "Kismet/GameplayStatics.h"

AMyGameMode::AMyGameMode()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AMyGameMode::BeginPlay(){
	Super::BeginPlay();
	SetScore(0);
}

void AMyGameMode::SetScore(int NewScore) {
	if (NewScore < 0) return;
	Score = NewScore;
	ScoreChangedDelegate.Broadcast(Score);
}
void AMyGameMode::AddScore(int Increment) {
	int NewScore = Score + Increment;
	SetScore(NewScore);
}

void AMyGameMode::RestartGame(){
	GetWorldTimerManager().SetTimer(RestartTimer, this, &AMyGameMode::OnRestartTimerTimeout, 1.0f, false, BeforeRestartTime);
}

void AMyGameMode::OnRestartTimerTimeout(){
	UGameplayStatics::OpenLevel(GetWorld(), FName("MainLevel"));
}

