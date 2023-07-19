// Fill out your copyright notice in the Description page of Project Settings.


#include "WaterPoloPlayerController.h"

void AWaterPoloPlayerController::BeginPlay()
{
    Super::BeginPlay();
    SetInputMode(FInputModeGameAndUI());
}