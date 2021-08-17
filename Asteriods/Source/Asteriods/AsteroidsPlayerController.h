// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "AsteroidsPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class ASTERIODS_API AAsteroidsPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:


private:
	UPROPERTY(EditAnywhere)
		APlayerController* m_playerController;

	UPROPERTY(EditAnywhere)
		APawn* m_playerShip;
};
