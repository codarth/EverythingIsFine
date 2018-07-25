// Fill out your copyright notice in the Description page of Project Settings.

#include "BasiAI.h"
#include <Runtime/AIModule/Classes/AIController.h>


// Sets default values
ABasiAI::ABasiAI()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	
}

// Called when the game starts or when spawned
void ABasiAI::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABasiAI::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABasiAI::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

