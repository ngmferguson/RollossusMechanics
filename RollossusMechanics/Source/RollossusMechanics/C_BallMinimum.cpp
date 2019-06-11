#include "C_BallMinimum.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/Actor.h"
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

	TArray<UStaticMeshComponent*> StaticMeshComponents;
	GetOwner()->GetComponents<UStaticMeshComponent>(StaticMeshComponents);

	for (int i = 0; i < StaticMeshComponents.Num(); i++)
	{
		//Assigning Visible Sphere ptr
		if (StaticMeshComponents[i]->GetName() == "VisibleSphere")
			VisibleSphere = StaticMeshComponents[i];

		//Assigning Pilot Sphere ptr
		else if (StaticMeshComponents[i]->GetName() == "PilotSphere")
			PilotSphere = StaticMeshComponents[i];

	}



	//VisibleSphere = StaticMeshComponents[0]; //There's only one static mesh component, which is the visible sphere

	//Assigning the Pilot Sphere ptr
	//PilotSphere = StaticMeshComponents[1];
	
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

	//This is a fix to a non-perfect architecture for our ball. AS of now I haven't been able to find a better solution due to the way things
		//rotate when childed in C++ and the way our pilot sphere is used to calculate the visible sphere direction.
		//It's a pretty cheap operation, though.
	PilotSphere->SetWorldLocation(VisibleSphere->GetComponentLocation());
}


void UC_BallMinimum::RegisterHit(UPrimitiveComponent * HitComponent, AActor * OtherActor, UPrimitiveComponent * OtherComponent, FVector NormalImpulse, const FHitResult & Hit)
{
}

void UC_BallMinimum::Death()
{
	GetOwner()->Destroy();
}



