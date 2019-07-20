#include "C_LeechBall.h"
#include "GameFramework/Actor.h"

namespace LeechStates {
	typedef enum class ELeechState : uint8
	{
		LE_Idle,
		LE_Navigating,
		LE_Attacking,
		LE_Leeching,
		LE_Detaching,
		LE_Resting,
		LE_Death,
		LE_CaveAndDie,
	};

	enum ELeechState GetLeechState()
	{

		return ELeechState::LE_Navigating;
	}
}



void UC_LeechBall::BeginPlay() {
	Super::BeginPlay();
	VisibleSphere->SetNotifyRigidBodyCollision(true);
	VisibleSphere->OnComponentHit.AddDynamic(this, &UC_LeechBall::RegisterHit); //Calls RegisterHit() whenever the visible sphere component is hit
}

void UC_LeechBall::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) {
		Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

		LeechStates::ELeechState CurrentLeechState = LeechStates::ELeechState::LE_Idle;
		CurrentLeechState = LeechStates::GetLeechState();

		//Finite State Machine for the Leech
		switch (CurrentLeechState) {
		case LeechStates::ELeechState::LE_Idle:
			//Default state, does nothing
			break;
		case LeechStates::ELeechState::LE_Navigating:
			//Navigates to player
			MoveToLocation();
			break;
		case LeechStates::ELeechState::LE_Attacking:
			Bash(LeadTime);
			break;
		case LeechStates::ELeechState::LE_Resting:
			//Does nothing, should not be in this state for long
			break;
		case LeechStates::ELeechState::LE_Detaching:
			VisibleSphere->SetLinearDamping(0);
			break;
		case LeechStates::ELeechState::LE_Death:
			this->BeginDestroy(); //RIP :(
			break;
		case LeechStates::ELeechState::LE_CaveAndDie:
			//TODO
			break;
		}
		//END OF THE FSM

}

void UC_LeechBall::RegisterHit(UPrimitiveComponent * HitComponent, AActor * OtherActor, UPrimitiveComponent * OtherComponent, FVector NormalImpulse, const FHitResult & Hit)
{
	if (OtherComponent == PlayerVisibleSphere)
	{
		UE_LOG(LogTemp, Warning, TEXT("Leech Hit Player"));

		if (ConstrainTwoComponents(OtherComponent)) //Ensures the leech is actually constrained to the player
		{
			IsBallNavigating = false; //Stops navigation behaviors in parent function
		}
	}
}
///<summary> Constrains this ball to the passed variable, ConstrainedComponent
///<para> ConstrainedComponent is the component which we want to tie with a physics constraint to this object</para></summary>
bool UC_LeechBall::ConstrainTwoComponents(UPrimitiveComponent * ConstrainedComponent)
{
	FConstraintInstance ConstraintInstance;

	UPhysicsConstraintComponent *PhysConstraintComp = NewObject<UPhysicsConstraintComponent>(); //Initializing the physics constraint component
	if (!PhysConstraintComp) //Ducks any potential errors in initialization
	{
		UE_LOG(LogTemp, Fatal, TEXT("PhysConstraintComp was not created in LeechBall.cpp"));
		return false;
	}

	//Sets the constraint instance
	PhysConstraintComp->ConstraintInstance = ConstraintInstance;

	//Sets location of constraint
	PhysConstraintComp->SetWorldLocation(VisibleSphere->GetComponentLocation());

	//Attach it to the root
	PhysConstraintComp->AttachTo(GetOwner()->GetRootComponent(), NAME_None, EAttachLocation::KeepWorldPosition);

	//Initialize the constraint
	PhysConstraintComp->SetConstrainedComponents(VisibleSphere, NAME_None, ConstrainedComponent, NAME_None);


	//Restricting leech movement while on player
	PhysConstraintComp->SetLinearXLimit(ELinearConstraintMotion::LCM_Locked, 10); //
	PhysConstraintComp->SetLinearYLimit(ELinearConstraintMotion::LCM_Locked, 10); //   Locks the Leech into place
	PhysConstraintComp->SetLinearZLimit(ELinearConstraintMotion::LCM_Locked, 10); //

	VisibleSphere->SetAngularDamping(50); //Restricts rolling motion as well


	return true;
}



