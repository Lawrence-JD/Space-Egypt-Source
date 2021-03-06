//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//			Copyright 2020 (C) Bruno Xavier B. Leite
//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "SaviorMetaData.h"
#include "Savior3_Shared.h"

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

USlotMeta::USlotMeta() {
	const auto &Settings = GetDefault<USavior3Settings>();
	//
	PlayerLevel = Settings->DefaultPlayerLevel;
	PlayerName = Settings->DefaultPlayerName;
	SaveLocation = Settings->DefaultLocation;
	Chapter = Settings->DefaultChapter;
	SaveDate = FDateTime::Now();
	Progress = 0.f;
	PlayTime = 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////