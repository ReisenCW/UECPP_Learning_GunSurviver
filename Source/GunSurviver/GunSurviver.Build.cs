using UnrealBuildTool;

public class GunSurviver : ModuleRules
{
	public GunSurviver(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", 
			"EnhancedInput", "Paper2D" });

		PrivateDependencyModuleNames.AddRange(new string[] {  });

	}
}
