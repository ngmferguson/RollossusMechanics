#include "C_EnemyBallMinimum.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "C_BallMinimum.h"


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
			PlayerController = GetWorld()->GetFirstPlayerController();					
		}
	}

	//Sets a timer to get the path to the target location every NavigationRecalculationFrequency seconds. Has a 1 second delay at first run.
	GetWorld()->GetTimerManager().SetTimer(NavigationTimerHandle, this, &UC_EnemyBallMinimum::GetPathToLocation, NavigationRecalculationFrequency, true, 0.5f);
}

void UC_EnemyBallMinimum::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (PathToLocation != nullptr && PathToLocation->PathPoints.Num() > 0)
		MoveToLocation();
}


///<summary> Sets TargetLocation and PathToLocation.
///<para> TargetLocation is the FVector of where we want to go</para>
///<para> PathToLocation is a structure which has lots of pathfinding information, including an array of vectors, our path</para></summary>
void UC_EnemyBallMinimum::GetPathToLocation()
{
	TArray<UStaticMeshComponent*> StaticMeshComponents;
	PlayerController->GetPawn()->GetComponents<UStaticMeshComponent>(StaticMeshComponents);
	for (int i = 0; i < StaticMeshComponents.Num(); i++)
	{
		if (StaticMeshComponents[i]->GetName() == "VisibleSphere")
			PlayerVisibleSphere = StaticMeshComponents[i];
	}

	TargetLocation = (PlayerVisibleSphere->GetComponentLocation()) + (PlayerVisibleSphere->GetComponentVelocity() * LeadTime);
	UNavigationSystemV1* NavigationSystem = FNavigationSystem::GetCurrent<UNavigationSystemV1>(GetWorld());
	PathToLocation = NavigationSystem->FindPathToLocationSynchronously(GetWorld(), VisibleSphere->GetComponentLocation(), TargetLocation);
}


///<summary>Causes the enemy to die, specifically by destroying the object and clearing relevant timers</summary>
void UC_EnemyBallMinimum::Death() {
	//Clears our navigation timer
	GetWorld()->GetTimerManager().ClearTimer(NavigationTimerHandle);
	Super::Death();
}

///<summary>This function specifically causes our enemy to roll toward the TargetLocation</summary>
void UC_EnemyBallMinimum::MoveToLocation()
{
	if (PathToLocation->PathPoints.Num() == 0)
		return; //Avoids crashes :)
	else if (PathToLocation->PathPoints.Num() == 1)
		PilotSphere->SetWorldRotation(UKismetMathLibrary::FindLookAtRotation(VisibleSphere->GetComponentLocation(), PathToLocation->PathPoints[0]));// PlayerController->GetPawn()->GetActorLocation()));
	else
		PilotSphere->SetWorldRotation(UKismetMathLibrary::FindLookAtRotation(VisibleSphere->GetComponentLocation(), PathToLocation->PathPoints[1]));// PlayerController->GetPawn()->GetActorLocation()));

	VisibleSphere->SetAngularDamping(0.0f); //Lets ball roll freely
	FVector PilotRightVector = (PilotSphere->GetRightVector());
	PilotRightVector.Normalize();
	VisibleSphere->AddTorqueInRadians(PilotRightVector * (RollingTorque * FApp::GetDeltaTime())); //The actual rolling of the ball
}
