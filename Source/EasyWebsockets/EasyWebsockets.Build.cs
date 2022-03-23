// Copyright 2022 Chris Ringenberg https://www.ringenberg.dev/

using UnrealBuildTool;

public class EasyWebsockets : ModuleRules
{
	public EasyWebsockets(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"WebSockets"
			}
		);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"Engine",
				"Slate",
				"SlateCore"
			}
		);

		PublicDefinitions.Add("WITH_WEBSOCKETS=1");
	}
}
