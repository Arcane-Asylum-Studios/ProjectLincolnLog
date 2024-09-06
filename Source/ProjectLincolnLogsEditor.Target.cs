

using UnrealBuildTool;
using System.Collections.Generic;

public class ProjectLincolnLogsEditorTarget : TargetRules
{
	public ProjectLincolnLogsEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "ProjectLincolnLogs" } );
	}
}
