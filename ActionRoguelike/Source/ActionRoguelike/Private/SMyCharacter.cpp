// Fill out your copyright notice in the Description page of Project Settings.


#include "SMyCharacter.h"
#include "Camera\CameraComponent.h"
#include "GameFramework\SpringArmComponent.h"

// Sets default values
ASMyCharacter::ASMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>("SpringArmComp");

	CameraComp = CreateDefaultSubobject<UCameraComponent>("CameraComp");

}

// Called when the game starts or when spawned
void ASMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

