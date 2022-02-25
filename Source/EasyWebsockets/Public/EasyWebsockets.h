// Copyright 2022 Chris Ringenberg https://www.ringenberg.dev/

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FEasyWebsocketsModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
