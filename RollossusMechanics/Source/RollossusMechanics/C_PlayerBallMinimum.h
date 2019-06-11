// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "C_BallMinimum.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/StaticMeshComponent.h"
#include "C_PlayerBallMinimum.generated.h"
/**
 * The playerball version of BallMinimum. This will be possessed by the player and be the thing the player can actually control.
 */
UCLASS()
class ROLLOSSUSMECHANICS_API UC_PlayerBallMinimum : public UC_BallMinimum
{
	GENERATED_BODY()

protected:
	///Our begin play component for the player ball
	virtual void BeginPlay() override;


public:
	///Our tick component for the player ball
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:

	//---------
	//VARIABLES
	//---------

	///Input Component for the player ball
	UInputComponent *InputComponent = nullptr;

	///Sets the Up input
	void SetUpInput(float AxisValue);
	
	void SetRightInput(float AxisValue);

	//Declaring the values which will reflect the input axis value of our up and right vals
	float RightInput = 0.f;
	float UpInput = 0.f;

	///The amount of force to add when player wants to change direction
	float TurnAid = 3000000.f;

	//---------
	//FUNCTIONS
	//---------

	float AngleBetweenVectors(FVector v1, FVector v2);

	FRotator GetRotationOfPilot(float pitch, float yaw);
};



