// Copyright Epic Games, Inc. All Rights Reserved.

#include "EditorTAToolsCommands.h"

#define LOCTEXT_NAMESPACE "FEditorTAToolsModule"

void FEditorTAToolsCommands::RegisterCommands()
{
	UI_COMMAND(OpenPluginWindow, "EditorTATools", "Bring up EditorTATools window", EUserInterfaceActionType::Button, FInputGesture());
}

#undef LOCTEXT_NAMESPACE
