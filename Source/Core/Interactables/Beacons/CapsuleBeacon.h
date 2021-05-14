// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Beacon.h"
#include "CapsuleBeacon.generated.h"

UCLASS()
class SPEEGYPT_API ACapsuleBeacon : public ABeacon
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACapsuleBeacon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};