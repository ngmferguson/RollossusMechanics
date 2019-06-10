// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Public/NavigationSystem.h"
#include "Public/NavigationPath.h"
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
UCLASS()
class ROLLOSSUSMECHANICS_API UC_EnemyBallMinimum : public UC_BallMinimum
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

	//---------
	//VARIABLES
	//---------

	APlayerController* PlayerController = nullptr;

	//---------
	//FUNCTIONS
	//---------

	///The enemy death function is a little different because you need to clear timers
	void Death();
	
private:
	//---------
	//VARIABLES
	//---------

	//Handle for the timer for navigating paths to a location
	FTimerHandle NavigationTimerHandle;

	//Modify this to match how often we want to calculate the path to a location
	float NavigationRecalculationFrequency = 1.0f;

	UNavigationPath* PathToLocation;

	FVector TargetLocation = FVector(0,0,50);
	//---------
	//FUNCTIONS
	//---------

	///Sets PathTolocation containing the points needed to locate the path to TargetLocation - often the player
	void GetPathToLocation();



};
