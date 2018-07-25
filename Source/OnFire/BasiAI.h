// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Burnable.h"
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BasiAI.generated.h"

UCLASS()
class ONFIRE_API ABasiAI : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABasiAI();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isMoving = false;
	
};
