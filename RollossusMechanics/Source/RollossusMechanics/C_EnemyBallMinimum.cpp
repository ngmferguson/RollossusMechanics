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
			UE_LOG(LogTemp, Warning, TEXT("Player Controller Found"));

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


///Returns UNavigationPath to the player
void UC_EnemyBallMinimum::GetPathToLocation()
{

	TargetLocation = PlayerController->GetPawn()->GetActorLocation();
	UNavigationSystemV1* NavigationSystem = FNavigationSystem::GetCurrent<UNavigationSystemV1>(GetWorld());
	PathToLocation = NavigationSystem->FindPathToLocationSynchronously(GetWorld(), VisibleSphere->GetComponentLocation(), TargetLocation);
	if (PathToLocation->IsPartial()) {
		UE_LOG(LogTemp, Error, TEXT("Partial Path"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Path Length: %d"), PathToLocation->PathPoints.Num());
		UE_LOG(LogTemp, Warning, TEXT("Distance To Target: %f"), FVector::Dist(VisibleSphere->GetComponentLocation(), PlayerController->GetPawn()->GetActorLocation()));
	}
	

}

void UC_EnemyBallMinimum::Death() {
	//Clears our navigation timer
	GetWorld()->GetTimerManager().ClearTimer(NavigationTimerHandle);
	//Super::Death();
}

void UC_EnemyBallMinimum::MoveToLocation()
{
	if (PathToLocation->PathPoints.Num() == 1)
		PilotSphere->SetWorldRotation(UKismetMathLibrary::FindLookAtRotation(VisibleSphere->GetComponentLocation(), PathToLocation->PathPoints[0]));// PlayerController->GetPawn()->GetActorLocation()));
	else
		PilotSphere->SetWorldRotation(UKismetMathLibrary::FindLookAtRotation(VisibleSphere->GetComponentLocation(), PathToLocation->PathPoints[1]));// PlayerController->GetPawn()->GetActorLocation()));

	VisibleSphere->SetAngularDamping(0.0f); //Lets ball roll freely
	FVector PilotRightVector = (PilotSphere->GetRightVector());
	PilotRightVector.Normalize();
	VisibleSphere->AddTorqueInRadians(PilotRightVector * (RollingTorque * FApp::GetDeltaTime())); //The actual rolling of the ball
}
