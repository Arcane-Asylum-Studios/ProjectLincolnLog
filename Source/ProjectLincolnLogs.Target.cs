

using UnrealBuildTool;
using System.Collections.Generic;

public class ProjectLincolnLogsTarget : TargetRules
{
	public ProjectLincolnLogsTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "ProjectLincolnLogs" } );
	}
}
