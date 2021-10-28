package;

import flixel.FlxSprite;

class CreditIcons
{
	// scrapped
	public var sprTracker = [0, 0];

	function new(icon:String, textLength:Int)
	{
		var the = new FlxSprite(sprTracker[1] + textLength * 10, sprTracker[2]);
		the.loadGraphic(Paths.image(icon));
	}
}
