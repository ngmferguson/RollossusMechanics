#include "Engine/World.h"
#include "C_BallMinimum.h"
#include "GameFramework//PlayerController.h"
#include "Components/StaticMeshComponent.h"
#include "C_EnemyBallMinimum.h"

void UC_EnemyBallMinimum::BeginPlay() {
	Super::BeginPlay(); // Parent BeginPlay assigned pointers for VisibleSphere, PilotSphere, and SpringArm. these are still relevant here.

	//Checks to see if the player is not present in the world, and throws an error if so
	try {			
		if (GetWorld()->GetFirstPlayerController() == NULL)
			throw 0;
	}
	
	catch(int i){
		if (i == 0) {
			UE_LOG(LogTemp, Error, TEXT("NO PLAYER CONTROLLER FOUND"));
		}
		else {
			PlayerController = GetWorld()->GetFirstPlayerController();
		}
	}

}

///Returns UNavigationPath to the player
UNavigationPath * UC_EnemyBallMinimum::GetPathToLocation(FVector Location)
{
	UNavigationSystemV1* NavigationSystem = FNavigationSystem::GetCurrent<UNavigationSystemV1>(GetWorld());

	return NavigationSystem->FindPathToLocationSynchronously(GetWorld(), VisibleSphere->GetComponentLocation(), PlayerController->GetPawn()->GetActorLocation());
}
