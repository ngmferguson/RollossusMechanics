// Fill out your copyright notice in the Description page of Project Settings.
#include "C_PlayerBallMinimum.h"
#include "C_BallMinimum.h"

void UC_PlayerBallMinimum::BeginPlay() {
	Super::BeginPlay(); // Parent BeginPlay assigned pointers for VisibleSphere, PilotSphere, and SpringArm. these are still relevant here.

	InputComponent = GetOwner()->FindComponentByClass<UInputComponent>();
	if (InputComponent == nullptr) {
		UE_LOG(LogTemp, Fatal, TEXT("INPUT COMPONENT NOT GRABBED"));
	}

	InputComponent->BindAxis("UP", this, &UC_PlayerBallMinimum::SetUpInput);
	InputComponent->BindAxis("RIGHT", this, &UC_PlayerBallMinimum::SetRightInput);
}

void UC_PlayerBallMinimum::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (UpInput != 0 || RightInput != 0)
	{
		//TODO: Use this, my man -- > FApp::GetDeltaTime
		//TODO: Regulate with deltaTime
		PilotSphere->SetWorldRotation(GetRotationOfPilot(UpInput, RightInput));//GetRotationOfPilot sets the fwd vector of the pilot sphere to match control inputs
		VisibleSphere->SetAngularDamping(0.0f); //Lets ball roll freely
		FVector PilotFwdVector = PilotSphere->GetRightVector();
		PilotFwdVector.Normalize();
		VisibleSphere->AddTorqueInRadians(PilotFwdVector * (RollingTorque * FApp::GetDeltaTime())); //The actual rolling of the ball

	}

}

float UC_PlayerBallMinimum::AngleBetweenVectors(FVector v1, FVector v2)
{
	v1 = v1.GetSafeNormal();
	v2 = v2.GetSafeNormal();
	float vectorDot = Dot3(v1, v2);
	return UKismetMathLibrary::DegAcos(vectorDot) / 180;
}

FRotator UC_PlayerBallMinimum::GetRotationOfPilot(float pitch, float yaw)
{
	float SpringArmYaw = SpringArm->GetComponentRotation().Yaw;

	//Get the X rotation from the pilot, basically when the controller faces upper right, so does the pilot sphere
	FRotator PilotRotation = UKismetMathLibrary::MakeRotFromX(FVector(pitch, yaw, 0).RotateAngleAxis(SpringArm->GetComponentRotation().Yaw, FVector(0, 0, 0)));
	

	return PilotRotation;// PilotRotation;
}



void UC_PlayerBallMinimum::SetUpInput(float AxisValue) { UpInput = AxisValue; }

void UC_PlayerBallMinimum::SetRightInput(float AxisValue) { RightInput = AxisValue; }