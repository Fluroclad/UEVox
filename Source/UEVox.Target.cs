// Copyright 2017 Daniel Dickson (Fluroclad). All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class UEVoxTarget : TargetRules
{
	public UEVoxTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "UEVox" } );
	}
}
