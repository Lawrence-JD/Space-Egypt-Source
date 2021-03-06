//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//			Copyright 2018 (C) Bruno Xavier B. Leite
//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Savior2Editor.h"
#include "Kismet2/KismetEditorUtilities.h"

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define LOCTEXT_NAMESPACE "Synaptech"

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Slot:

USavior2Factory::USavior2Factory(const class FObjectInitializer &OBJ) : Super(OBJ) {
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = USavior2::StaticClass();
}

UObject* USavior2Factory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) {
	check(Class->IsChildOf(USavior2::StaticClass()));
	return NewObject<USavior2>(InParent,Class,Name,Flags,Context);
}

FText FATA_Savior2::GetAssetDescription(const FAssetData &AssetData) const {
	return FText::FromString(FString(TEXT("Savior Slot.\nObject holding Record Data from Game World for the 'Auto-Save System'.")));
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef LOCTEXT_NAMESPACE

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////