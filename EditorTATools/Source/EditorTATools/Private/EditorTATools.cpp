// Copyright Epic Games, Inc. All Rights Reserved.

#include "EditorTATools.h"
#include "EditorTAToolsStyle.h"
#include "EditorTAToolsCommands.h"
#include "LevelEditor.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "ToolMenus.h"
#include "Demo/SWidgetDemo.h"

static const FName EditorTAToolsTabName("EditorTATools");
static const FName SWidgetDemoName("SWidgetDemo");

#define LOCTEXT_NAMESPACE "FEditorTAToolsModule"

void FEditorTAToolsModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FEditorTAToolsStyle::Initialize();
	FEditorTAToolsStyle::ReloadTextures();

	FEditorTAToolsCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FEditorTAToolsCommands::Get().OpenPluginWindow,
		FExecuteAction::CreateRaw(this, &FEditorTAToolsModule::PluginButtonClicked),
		FCanExecuteAction());

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FEditorTAToolsModule::RegisterMenus));
	
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(EditorTAToolsTabName, FOnSpawnTab::CreateRaw(this, &FEditorTAToolsModule::OnSpawnPluginTab))
		.SetDisplayName(LOCTEXT("FEditorTAToolsTabTitle", "EditorTATools"))
		.SetMenuType(ETabSpawnerMenuType::Hidden);

	{
		FGlobalTabmanager::Get()->RegisterNomadTabSpawner(SWidgetDemoName,
			FOnSpawnTab::CreateLambda([](const FSpawnTabArgs& SpawnTabArgs) {
				return SNew(SDockTab)
					.TabRole(ETabRole::NomadTab)
					[
						// Put your tab content here!
						SNew(SWidgetDemo)
					];
				}))
			.SetDisplayName(LOCTEXT("TAToolsTitle", "TATools"))
					.SetMenuType(ETabSpawnerMenuType::Hidden);
	}
}

void FEditorTAToolsModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	UToolMenus::UnRegisterStartupCallback(this);

	UToolMenus::UnregisterOwner(this);

	FEditorTAToolsStyle::Shutdown();

	FEditorTAToolsCommands::Unregister();

	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(EditorTAToolsTabName);
}

TSharedRef<SDockTab> FEditorTAToolsModule::OnSpawnPluginTab(const FSpawnTabArgs& SpawnTabArgs)
{
	FText WidgetText = FText::Format(
		LOCTEXT("WindowWidgetText", "Add code to {0} in {1} to override this window's contents"),
		FText::FromString(TEXT("FEditorTAToolsModule::OnSpawnPluginTab")),
		FText::FromString(TEXT("EditorTATools.cpp"))
		);

	return SNew(SDockTab)
		.TabRole(ETabRole::NomadTab)
		[
			// Put your tab content here!
			SNew(SBox)
			.HAlign(HAlign_Center)
			.VAlign(VAlign_Center)
			[
				SNew(STextBlock)
				.Text(WidgetText)
			]
		];
}

void FEditorTAToolsModule::PluginButtonClicked()
{
	FGlobalTabmanager::Get()->TryInvokeTab(SWidgetDemoName);
}


void FEditorTAToolsModule::RegisterMenus()
{
	// Owner will be used for cleanup in call to UToolMenus::UnregisterOwner
	FToolMenuOwnerScoped OwnerScoped(this);

	{
		UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
		{
			FToolMenuSection& Section = Menu->FindOrAddSection("WindowLayout");
			Section.AddMenuEntryWithCommandList(FEditorTAToolsCommands::Get().OpenPluginWindow, PluginCommands);
		}
	}

	{
		UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar");
		{
			FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("Settings");
			{
				FToolMenuEntry& Entry = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FEditorTAToolsCommands::Get().OpenPluginWindow));
				Entry.SetCommandList(PluginCommands);
			}
		}
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FEditorTAToolsModule, EditorTATools)