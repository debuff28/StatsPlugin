// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Projectile.generated.h"

UCLASS()
class STATSPLUGIN_API AProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectile();

	/**
	TeamID of Parent Actor

	Const Neutrals TeamID = Neutral
	Const Other TeamID = None

	If an actor does not have a "StatsComponent" component, its TeamID is considered "None"

	*/
	UPROPERTY(BlueprintReadWrite, replicated, Category = "Info")
		FName TeamID;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;




	void GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const override;
};
