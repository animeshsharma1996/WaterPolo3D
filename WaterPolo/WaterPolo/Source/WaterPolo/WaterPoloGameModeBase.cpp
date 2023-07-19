// Copyright Epic Games, Inc. All Rights Reserved.

#include "WaterPolo.h"
#include "WaterPoloGameModeBase.h"

void AWaterPoloGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	ChangeMenuWidget(startingWidgetClass);
}

void AWaterPoloGameModeBase::ChangeMenuWidget(TSubclassOf<UUserWidget> NewWidgetClass)
{
    if (currentWidget != nullptr)
    {
        currentWidget->RemoveFromViewport();
        currentWidget = nullptr;
    }
    if (NewWidgetClass != nullptr)
    {
        currentWidget = CreateWidget<UUserWidget>(GetWorld(), NewWidgetClass);
        if (currentWidget != nullptr)
        {
            currentWidget->AddToViewport();
        }
    }
}