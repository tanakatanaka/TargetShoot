// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnDestroyCppCharacter.h"

// Sets default values
ASpawnDestroyCppCharacter::ASpawnDestroyCppCharacter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpawnDestroyCppCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpawnDestroyCppCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

