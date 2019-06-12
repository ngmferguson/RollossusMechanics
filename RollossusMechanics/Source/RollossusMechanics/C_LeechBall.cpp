#include "C_LeechBall.h"


void UC_LeechBall::BeginPlay() {
	Super::BeginPlay();

	VisibleSphere->SetNotifyRigidBodyCollision(true);
	VisibleSphere->OnComponentHit.AddDynamic(this, &UC_LeechBall::RegisterHit);
}

void UC_LeechBall::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) {
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UC_LeechBall::RegisterHit(UPrimitiveComponent * HitComponent, AActor * OtherActor, UPrimitiveComponent * OtherComponent, FVector NormalImpulse, const FHitResult & Hit)
{
	UE_LOG(LogTemp, Warning, TEXT("hit"));

	if (OtherComponent == PlayerVisibleSphere)
		UE_LOG(LogTemp, Warning, TEXT("Leech Hit Player"));
}