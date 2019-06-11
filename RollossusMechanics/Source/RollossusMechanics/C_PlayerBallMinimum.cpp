// Fill out your copyright notice in the Description page of Project Settings.
#include "C_PlayerBallMinimum.h"
#include "C_BallMinimum.h"

void UC_PlayerBallMinimum::BeginPlay() {
	Super::BeginPlay(); // Parent BeginPlay assigned pointers for VisibleSphere, PilotSphere, and SpringArm. these are still relevant here.

	UInputComponent* InputComponent = GetOwner()->FindComponentByClass<UInputComponent>();
	if (InputComponent == nullptr) {
		UE_LOG(LogTemp, Fatal, TEXT("INPUT COMPONENT NOT GRABBED")); //Throws a fatal error to control our crashes
	}

	//Binds the axes for our up and right inputs to a function, so our UpInput and RightInput values are updated
	InputComponent->BindAxis("UP", this, &UC_PlayerBallMinimum::SetUpInput);
	InputComponent->BindAxis("RIGHT", this, &UC_PlayerBallMinimum::SetRightInput);
}

void UC_PlayerBallMinimum::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (UpInput != 0 || RightInput != 0)
	{
		PilotSphere->SetWorldRotation(GetRotationOfPilot(UpInput, RightInput));//GetRotationOfPilot sets the fwd vector of the pilot sphere to match control inputs
		VisibleSphere->SetAngularDamping(0.0f); //Lets ball roll freely
		FVector PilotRightVector = (PilotSphere->GetRightVector());
		PilotRightVector.Normalize(); //Teamwork makes the dream work, but Normalizing makes the physics work
		VisibleSphere->AddTorqueInRadians(PilotRightVector * (RollingTorque * FApp::GetDeltaTime())); //The actual rolling of the ball

		//Turn Aid
		float turnAssistAmount = AngleBetweenVectors(VisibleSphere->GetComponentVelocity(), PilotSphere->GetForwardVector());//float from 0-1 for % to turn assist
		FVector turnAssistVec = turnAssistAmount * TurnAid * PilotSphere->GetForwardVector(); //Regulates Delta Time here
		VisibleSphere->AddForce(FVector(turnAssistVec.X * FApp::GetDeltaTime(), turnAssistVec.Y * DeltaTime, 0), FName(TEXT(""), true)); //application of turn assist
	}
}

///<summary>Calculates the angle between two vectors and then returns a number between 0 and 1. 1 is 180degrees, 0 is 0 degrees.
///<para>We use this so that the turn aid function has an easy percentage to use in turn aid</para></summary>
///<param name="v1"> Our first vector </param>
///<param name="v2"> Our second vector</param>
float UC_PlayerBallMinimum::AngleBetweenVectors(FVector v1, FVector v2)
{
	v1 = v1.GetSafeNormal();
	v2 = v2.GetSafeNormal();
	float vectorDot = Dot3(v1, v2);
	return UKismetMathLibrary::DegAcos(vectorDot) / 180;
}


///<summary>GetRotationOfPilot takes the the Up/Right inputs and returns a rotation for the pilot sphere
///<para>We can use this with a joystick and essentially have the pilot sphere point in the same direction the joystick is</para>
///<para>This makes it easy to do controller inputs</para></summary>
///<param name="pitch"> The pitch for our rotation </param>
///<param name="yaw"> The yaw for our rotation</param>
FRotator UC_PlayerBallMinimum::GetRotationOfPilot(float pitch, float yaw)
{
	float SpringArmYaw = SpringArm->GetComponentRotation().Yaw;
	//Get the X rotation for the pilot, basically when the controller stick input faces upper right, so does the pilot sphere
	FRotator PilotRotation = UKismetMathLibrary::MakeRotFromX(FVector(pitch, yaw, 0).RotateAngleAxis(SpringArm->GetComponentRotation().Yaw, FVector(0, 0, 0)));
	return PilotRotation;// PilotRotation;
}


///<summary>Sets the Up Input</summary>
void UC_PlayerBallMinimum::SetUpInput(float AxisValue) { UpInput = AxisValue; }
///<summary>Sets the Right Input</summary>
void UC_PlayerBallMinimum::SetRightInput(float AxisValue) { RightInput = AxisValue; }