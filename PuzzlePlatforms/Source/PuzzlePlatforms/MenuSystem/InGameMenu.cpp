// Fill out your copyright notice in the Description page of Project Settings.


#include "InGameMenu.h"
#include "Components/Button.h"

bool UInGameMenu::Initialize()
{
	bool Success = Super::Initialize();
	if (!Success) { return false; }

	if (!ensure(CancelButton != nullptr)) { return false; }
	CancelButton->OnClicked.AddDynamic(this, &UInGameMenu::Cancel);

	if (!ensure(QuitButton != nullptr)) { return false; }
	QuitButton->OnClicked.AddDynamic(this, &UInGameMenu::Quit);

	return true;
}

void UInGameMenu::Cancel()
{
	TearDown();
}

void UInGameMenu::Quit()
{
	if (MenuInterface != nullptr)
	{
		TearDown();
		MenuInterface->BackToMainMenu();
	}
}