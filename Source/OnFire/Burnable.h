// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Burnable.generated.h"

UCLASS()
class ONFIRE_API ABurnable : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABurnable();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void SetOnFire();

	UFUNCTION(BlueprintCallable)
	void PutOut();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USceneComponent* SceneComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UParticleSystemComponent* flames;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isOnFire;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float burningTime = 30;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int minRand = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int maxRand = 30;

};
