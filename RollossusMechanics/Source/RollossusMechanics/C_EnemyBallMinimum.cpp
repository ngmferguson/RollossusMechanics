#include "Engine/World.h"
#include "C_BallMinimum.h"
#include "C_EnemyBallMinimum.h"

void UC_EnemyBallMinimum::BeginPlay() {
	Super::BeginPlay(); // I still want to assign all the pointers that were assigned from C_BallMinimum's BeginPlay


	try {			
		if (GetWorld()->GetFirstPlayerController() == NULL)
			throw 0;
	}
	
	catch(int i){
		if (i == 0) {
			UE_LOG(LogTemp, Error, TEXT("NO PLAYER CONTROLLER FOUND"));
		}
		else {
			PlayerController = GetWorld()->GetFirstPlayerController();
		}
	}

	/*if(GetWorld()->GetFirstPlayerController())
		PlayerController = GetWorld()->GetFirstPlayerController();
	else
		UE_LOG(LogTemp, Error, TEXT("NO PLAYER CONTROLLER FOUND"));*/

}