package;

import flixel.FlxG;
import flixel.FlxState;

class SettingsState extends FlxState
{
	// will be functional later
	public var left = FlxG.keys.pressed.D;
	public var up = FlxG.keys.pressed.F;
	public var down = FlxG.keys.pressed.J;
	public var right = FlxG.keys.pressed.K;

	override public function update(elapsed:Float)
	{
		super.update(elapsed);
		left = FlxG.keys.pressed.D;
		up = FlxG.keys.pressed.F;
		down = FlxG.keys.pressed.J;
		right = FlxG.keys.pressed.K;
		// e
	}
}
