// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BomberGameMode.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT2_API ABomberGameMode : public AGameModeBase
{
	GENERATED_BODY()
		ABomberGameMode();
		virtual void PostInitializeComponents() override;
	
	
	
	
};
