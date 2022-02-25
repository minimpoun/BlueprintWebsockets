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
				// ... add other public dependencies that you statically link with here ...
			}
		);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"WebSockets"
				// ... add private dependencies that you statically link with here ...	
			}
		);
	}
}
