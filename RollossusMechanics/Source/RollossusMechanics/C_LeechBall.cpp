#include "C_LeechBall.h"
#include "GameFramework/Actor.h"




void UC_LeechBall::BeginPlay() {
	Super::BeginPlay();

	VisibleSphere->SetNotifyRigidBodyCollision(true);
	VisibleSphere->OnComponentHit.AddDynamic(this, &UC_LeechBall::RegisterHit); //Calls RegisterHit() whenever the visible sphere component is hit
}

void UC_LeechBall::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) {
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UC_LeechBall::RegisterHit(UPrimitiveComponent * HitComponent, AActor * OtherActor, UPrimitiveComponent * OtherComponent, FVector NormalImpulse, const FHitResult & Hit)
{
	if (OtherComponent == PlayerVisibleSphere)
	{
		UE_LOG(LogTemp, Warning, TEXT("Leech Hit Player"));
		ConstrainTwoComponents(OtherComponent);
	}
}

void UC_LeechBall::ConstrainTwoComponents(UPrimitiveComponent * ConstrainedComponent)
{
	FConstraintInstance ConstraintInstance;

	UPhysicsConstraintComponent *PhysConstraintComp =
		NewObject<UPhysicsConstraintComponent>();
	if (!PhysConstraintComp)
		UE_LOG(LogTemp, Fatal, TEXT("PhysConstraintComp was not created in LeechBall.cpp"));

	//Sets the constraint instance
	PhysConstraintComp->ConstraintInstance = ConstraintInstance;

	//Sets location of constraint
	PhysConstraintComp->SetWorldLocation(VisibleSphere->GetComponentLocation());

	//Attach it to the root
	PhysConstraintComp->AttachTo(GetOwner()->GetRootComponent(), NAME_None, EAttachLocation::KeepWorldPosition);

	//Initialize the constraint
	PhysConstraintComp->SetConstrainedComponents(VisibleSphere, NAME_None, ConstrainedComponent, NAME_None);

}
