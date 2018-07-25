// Fill out your copyright notice in the Description page of Project Settings.

#include "Burnable.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include <Runtime/Engine/Classes/Engine/Engine.h>
#include <Runtime/Core/Public/Math/UnrealMathUtility.h>

// Sets default values
ABurnable::ABurnable()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	RootComponent = SceneComponent;

	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BurnMesh"));
	mesh->SetupAttachment(SceneComponent);

	
	flames = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Flames"));
	flames->SetupAttachment(RootComponent);

	burningTime = FMath::RandRange(minRand, maxRand);
}

// Called when the game starts or when spawned
void ABurnable::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ABurnable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(isOnFire)
	{
		burningTime -= 1.0f * DeltaTime;

		//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, FString::SanitizeFloat(burningTime));

	}

	if(burningTime < 0)
	{
		Destroy();
	}
}

void ABurnable::SetOnFire()
{
	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Yellow, FString::SanitizeFloat(burningTime));

	isOnFire = true;
}

void ABurnable::PutOut()
{
	isOnFire = false;
}

