// Copyright 2022 Chris Ringenberg https://www.ringenberg.dev/

#include "EasyWebsockets.h"
#include "Modules/ModuleManager.h"
#include "WebSocketsModule.h"

#define LOCTEXT_NAMESPACE "FEasyWebsocketsModule"

void FEasyWebsocketsModule::StartupModule()
{
	FModuleManager::LoadModuleChecked<FWebSocketsModule>("WebSockets");
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FEasyWebsocketsModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FEasyWebsocketsModule, EasyWebsockets)
