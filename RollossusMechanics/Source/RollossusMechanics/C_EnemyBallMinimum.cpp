#include "Engine/World.h"
#include "C_BallMinimum.h"
#include "C_EnemyBallMinimum.h"

void UC_EnemyBallMinimum::BeginPlay() {
	Super::BeginPlay(); // Parent BeginPlay assigned pointers for VisibleSphere, PilotSphere, and SpringArm. these are still relevant here.
	
	//Checks to see if the player is not present in the world, and throws an error if the player is not present.
	try {			
		if (GetWorld()->GetFirstPlayerController() == NULL)
			throw 0;
		else
			throw 999;
	}
	catch(int i){
		if (i == 0) {
			UE_LOG(LogTemp, Error, TEXT("NO PLAYER CONTROLLER FOUND"));
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("Player Controller Found"));
			PlayerController = GetWorld()->GetFirstPlayerController();
		}
	}

	FTimerDynamicDelegate NavigationDynamicDelegate;
	NavigationDynamicDelegate.BindUFunction(this, "GetPathToLocation");
	//Sets a timer to get the path to the target location every NavigationRecalculationFrequency seconds. Has a 1 second delay at first run.
	GetWorld()->GetTimerManager().SetTimer(NavigationTimerHandle, NavigationDynamicDelegate, false, 1.0f);

}

///Returns UNavigationPath to the player
void UC_EnemyBallMinimum::GetPathToLocation()
{
	UE_LOG(LogTemp, Warning, TEXT("CALCULATING PATH"));
	UNavigationSystemV1* NavigationSystem = FNavigationSystem::GetCurrent<UNavigationSystemV1>(GetWorld());
	PathToLocation = NavigationSystem->FindPathToLocationSynchronously(GetWorld(), VisibleSphere->GetComponentLocation(), TargetLocation);
	UE_LOG(LogTemp, Warning, TEXT("Path Length: %d"), PathToLocation->GetPathLength());
}

void UC_EnemyBallMinimum::Death() {
	//Clears our navigation timer
	GetWorld()->GetTimerManager().ClearTimer(NavigationTimerHandle);

	Super::Death();
}
