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
	virtual void BeginPlay() override;


public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	//Input Component for the ball
	UInputComponent *InputComponent = nullptr;

	void SetUpInput(float AxisValue);

	void SetRightInput(float AxisValue);

	float RightInput;
	float UpInput;

	float RollingTorque = 80000000000.0f;

	///Returns a float from 0-1 on the different between two vectors. 0deg = 0, 180 deg = 1
	float AngleBetweenVectors(FVector v1, FVector v2);

	///GetRotationOfPilot takes the the Up/Right inputs and returns a rotation for the pilot sphere
	FRotator GetRotationOfPilot(float pitch, float yaw);
};



