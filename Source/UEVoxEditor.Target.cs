// Copyright 2017 Daniel Dickson (Fluroclad). All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class UEVoxEditorTarget : TargetRules
{
	public UEVoxEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "UEVox" } );
	}
}
