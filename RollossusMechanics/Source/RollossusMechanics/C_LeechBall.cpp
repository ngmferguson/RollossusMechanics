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
		UE_LOG(LogTemp, Warning, TEXT("Leech Hit Player"));
}