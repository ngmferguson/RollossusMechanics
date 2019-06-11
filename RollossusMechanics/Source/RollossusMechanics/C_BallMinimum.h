#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/InputComponent.h"
#include "C_BallMinimum.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ROLLOSSUSMECHANICS_API UC_BallMinimum : public UActorComponent
{
	GENERATED_BODY()
public:	
	// Sets default values for this component's properties
	UC_BallMinimum();

protected:
	//---------
	//FUNCTIONS
	//---------

	// Called when the game starts
	virtual void BeginPlay() override;

	///Destroys the actor this component is attached to
	UFUNCTION()
	void Death();

	//---------
	//VARIABLES
	//---------
	UStaticMeshComponent *VisibleSphere = nullptr;
	UStaticMeshComponent *PilotSphere = nullptr;
	USpringArmComponent *SpringArm = nullptr;

	//Various movement values
	float Torque;
	float AirForce;
	float TurningAid;

	float RollingTorque = 3000000000.0f;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	//---------
	//VARIABLES
	//---------

	//The Input axis
	float UpInput;
	float RightInput;


	//---------
	//FUNCTIONS
	//---------

	///Registers a hit to the object. Empty Definition because for now it doesn't do anything - will be implemented in child classes
	UFUNCTION()
	void RegisterHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);

	
};
