// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableTargetContainer.h"

// Sets default values
AInteractableTargetContainer::AInteractableTargetContainer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CyanTarget = CreateDefaultSubobject<UCyanVesselTarget>(TEXT("CyanTarget"));
	MagentaTarget = CreateDefaultSubobject<UMagentaVesselTarget>(TEXT("MagentaTarget"));
	YellowTarget = CreateDefaultSubobject<UYellowVesselTarget>(TEXT("YellowTarget"));
}

// Called when the game starts or when spawned
void AInteractableTargetContainer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInteractableTargetContainer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

