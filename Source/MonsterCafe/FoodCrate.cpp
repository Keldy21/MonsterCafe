// Fill out your copyright notice in the Description page of Project Settings.


#include "FoodCrate.h"
#include "Components/BoxComponent.h"

// Sets default values
AFoodCrate::AFoodCrate()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFoodCrate::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AFoodCrate::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

