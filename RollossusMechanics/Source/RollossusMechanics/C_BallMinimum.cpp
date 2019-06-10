#include "C_BallMinimum.h"
#include "Components/InputComponent.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"


// Sets default values for this component's properties
UC_BallMinimum::UC_BallMinimum()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UC_BallMinimum::BeginPlay()
{
	Super::BeginPlay();

	//Assigning Visible Sphere ptr
	TArray<UStaticMeshComponent*> StaticMeshComponents;
	GetOwner()->GetComponents<UStaticMeshComponent>(StaticMeshComponents);
	VisibleSphere = StaticMeshComponents[0]; //There's only one static mesh component, which is the visible sphere

	//Assigning the Pilot Sphere ptr
	PilotSphere = StaticMeshComponents[1];
	
	//Assigning the Spring Arm
	TArray<USpringArmComponent*> SpringArmComponents;
	GetOwner()->GetComponents<USpringArmComponent>(SpringArmComponents);
	SpringArm = SpringArmComponents[0]; //Only one spring arm component, assigned here.


	VisibleSphere->OnComponentHit.AddDynamic(this, &UC_BallMinimum::RegisterHit); //Calls RegisterHit() whenever the visible sphere component is hit

}


// Called every frame
void UC_BallMinimum::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}


void UC_BallMinimum::RegisterHit(UPrimitiveComponent * HitComponent, AActor * OtherActor, UPrimitiveComponent * OtherComponent, FVector NormalImpulse, const FHitResult & Hit)
{
}

void UC_BallMinimum::Death()
{
	GetOwner()->Destroy();
}



