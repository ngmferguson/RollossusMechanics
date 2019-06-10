// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Public/NavigationSystem.h"
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
	
private:
	//---------
	//VARIABLES
	//---------



	//---------
	//FUNCTIONS
	//---------

	///Returns a UNavigationPath containing the points needed to locate the path to a player
	UNavigationPath* GetPathToLocation(FVector Location);

};
