// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TopDown_Cpp : ModuleRules
{
	public TopDown_Cpp(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "NavigationSystem", "AIModule", "Niagara", "EnhancedInput" });
    }
}
