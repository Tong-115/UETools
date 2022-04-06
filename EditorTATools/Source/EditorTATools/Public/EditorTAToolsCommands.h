// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "EditorTAToolsStyle.h"

class FEditorTAToolsCommands : public TCommands<FEditorTAToolsCommands>
{
public:

	FEditorTAToolsCommands()
		: TCommands<FEditorTAToolsCommands>(TEXT("EditorTATools"), NSLOCTEXT("Contexts", "EditorTATools", "EditorTATools Plugin"), NAME_None, FEditorTAToolsStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > OpenPluginWindow;
};