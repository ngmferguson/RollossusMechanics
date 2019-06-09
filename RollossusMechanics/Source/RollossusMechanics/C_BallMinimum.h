#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/StaticMeshComponent.h"
#include "C_BallMinimum.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ROLLOSSUSMECHANICS_API UC_BallMinimum : public UActorComponent
{
	GENERATED_BODY()
public:	
	// Sets default values for this component's properties
	UC_BallMinimum();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:

	//---------
	//VARIABLES
	//---------

	//References needed to make the ball roll correctly.
	//For clarification on what a visible sphere and/or Pilot sphere are,
		// Visit: https://www.gamasutra.com/blogs/NathanielFerguson/20181128/331577/Rolling_a_Ball_Harder_Than_You_Thought_part_1.php
	UStaticMeshComponent *VisibleSphere;
	UStaticMeshComponent *PilotSphere;
	USpringArmComponent *SpringArm;

	//Various movement values
	float Torque;
	float AirForce;
	float TurningAid;

	//The Input axis
	float Up;
	float Right;

	//Input Component for the ball
	UInputComponent *InputComponent = nullptr;

	//---------
	//FUNCTIONS
	//---------


	///Sets UpInput
	void SetUpInput(float AxisValue);

	///Sets RightInput
	void SetRightInput(float AxisValue);
};
