#include "C_BallMinimum.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/InputComponent.h"

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

	UInputComponent *InputComponent = GetOwner()->FindComponentByClass<UInputComponent>();

	//Assigns the functions to set input axis for our UP and RIGHT values
	InputComponent->BindAxis("UP", this, &UC_BallMinimum::SetUpInput);
	InputComponent->BindAxis("RIGHT", this, &UC_BallMinimum::SetRightInput);

	//Assigning Visible Sphere ptr
	TArray<UStaticMeshComponent*> StaticMeshComponents;
	GetOwner()->GetComponents<UStaticMeshComponent>(StaticMeshComponents);
	VisibleSphere = StaticMeshComponents[0]; //There's only one static mesh component, which is the visible sphere

	//Creating and assigning the pilot sphere
	PilotSphere = NewObject<UStaticMeshComponent>(this, TEXT("PilotSphere")); //Initializes the pilot sphere
	PilotSphere->AttachToComponent(GetOwner()->GetRootComponent(), FAttachmentTransformRules::KeepWorldTransform);
	

	//Assigning the Spring Arm
	TArray<USpringArmComponent*> SpringArmComponents;
	GetOwner()->GetComponents<USpringArmComponent>(SpringArmComponents);
	SpringArm = SpringArmComponents[0]; //Only one spring arm component, assigned here.



}


// Called every frame
void UC_BallMinimum::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

//Sets two floats, Up and Right, between -1 and 1 depending on axis input

void UC_BallMinimum::SetUpInput(float AxisValue) {Up = AxisValue;}

void UC_BallMinimum::SetRightInput(float AxisValue) {Right = AxisValue;}

