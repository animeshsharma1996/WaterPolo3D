// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuWidget.h"
#include "Components/Button.h"
#include "Kismet/KismetSystemLibrary.h"

bool UMainMenuWidget::Initialize()
{
	Super::Initialize();

	playButton->OnClicked.AddDynamic(this, &UMainMenuWidget::PlayButtonClicked);
	settingsButton->OnClicked.AddDynamic(this, &UMainMenuWidget::SettingsButtonClicked);
	exitButton->OnClicked.AddDynamic(this, &UMainMenuWidget::ExitButtonClicked);

	return true;
}

void UMainMenuWidget::PlayButtonClicked()
{
	this->RemoveFromViewport();
}

void UMainMenuWidget::SettingsButtonClicked()
{
	UE_LOG(LogTemp, Warning, TEXT("Settings button is clicked!"));
}

void UMainMenuWidget::ExitButtonClicked()
{
	APlayerController* SpecificPlayer = GetWorld()->GetFirstPlayerController();
	UKismetSystemLibrary::QuitGame(GetWorld(), SpecificPlayer, EQuitPreference::Quit, true);
}
