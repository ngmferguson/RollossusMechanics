// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Public/NavigationSystem.h"
#include "Public/NavigationPath.h"
#include "Kismet/KismetMathLibrary.h"
#include "TimerManager.h"
#include "Public/TimerManager.h"
#include "GameFramework/PlayerController.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/World.h"
#include "C_BallMinimum.h"
#include "C_EnemyBallMinimum.generated.h"

/**
 *This is the Enemy-Specific class for this. This will contain basic functions such as navigating to the player, and dealing damage on hit.
	there will be more classes for specific enemies.
 */
UCLASS(Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class ROLLOSSUSMECHANICS_API UC_EnemyBallMinimum : public UC_BallMinimum
{
	GENERATED_BODY()
public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	virtual void BeginPlay() override;

	//---------
	//VARIABLES
	//---------

	APlayerController* PlayerController = nullptr;
	UStaticMeshComponent* PlayerVisibleSphere;

	bool IsBallNavigating = true; //Allows us to stop specific enemies from navigating

	///The amount of time (in seconds) to lead the player by for "predictive" pathfinding
	float LeadTime = 0.1;

	//---------
	//FUNCTIONS
	//---------

	///<summary> This function will destroy the Actor this component is attached to </summary>
	void Death();

	///Rolls the enemy ball toward the location calculated in GetPathToLocation
	void MoveToLocation();

	///Launches the enemy at the player
	void Bash(float BashLead);
	
private:
	//---------
	//VARIABLES
	//---------

	//Handle for the timer for navigating paths to a location
	FTimerHandle NavigationTimerHandle;

	//Modify this to match how often we want to calculate the path to a location
	float NavigationRecalculationFrequency = 1.0f;

	UNavigationPath* PathToLocation = nullptr;

	FVector TargetLocation = FVector(0,0,50);
	//---------
	//FUNCTIONS
	//---------

	///Sets PathTolocation containing the points needed to locate the path to TargetLocation - often the player
	UFUNCTION()
	void GetPathToLocation();


};
