//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//			Copyright 2018 (C) Bruno Xavier B. Leite
//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "SaviorMetaData.h"
#include "Savior2_Shared.h"

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

USlotMeta::USlotMeta() {
	const auto &Settings = GetDefault<USavior2Settings>();
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