#pragma once

#include "CoreMinimal.h"
#include "C_EnemyBallMinimum.h"
#include "Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Engine/Classes/PhysicsEngine/PhysicsConstraintComponent.h"
#include "C_LeechBall.generated.h"

/**
 * The leech ball behaves very similarly to the basic enemy, except instead of trying to hit the player to deal damage,
	the leech will hit the player to stick on for an amount of time before dying. The goal of this is to impede the player's
	movement, making them more exposed to taking damage
 */
UCLASS(Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class ROLLOSSUSMECHANICS_API UC_LeechBall : public UC_EnemyBallMinimum
{
	GENERATED_BODY()
public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction);
protected:
	virtual void BeginPlay() override;
private:

	///Registers a hit to the object. Will then stick to the player.
	UFUNCTION()
	void RegisterHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);

	///Connects a component to this enemy's visible sphere
	bool ConstrainTwoComponents(UPrimitiveComponent* ConstrainedComponent);

};
