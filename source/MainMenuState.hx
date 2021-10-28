package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.system.FlxSound;
import flixel.util.FlxColor;

class MainMenuState extends FlxState
{
	var curSelected:Int;
	var menuShit = ['storymode', 'freeplay', 'credits', 'options'];
	var bg = new FlxSprite(0, 0);
	var funnyTriangle = new FlxSprite(0, 0);
	var menuItems:FlxTypedGroup<FlxSprite>;

	override public function create()
	{
		super.create();
		menuItems = new FlxTypedGroup(100);
		bg.loadGraphic(Paths.image('menuBG'));
		bg.screenCenter();
		bg.antialiasing = true;
		bg.scrollFactor.set();
		add(bg);
		var tex = Paths.getSparrowAtlas('funnyTriangle');
		funnyTriangle.frames = tex;
		funnyTriangle.antialiasing = true;
		funnyTriangle.animation.addByPrefix('0', 'story mode portrait', 24, true);
		funnyTriangle.animation.addByPrefix('1', 'freeplay portrait', 24, true);
		funnyTriangle.animation.addByPrefix('2', 'credits port', 24, true);
		funnyTriangle.animation.addByPrefix('3', 'options port', 24, true);
		funnyTriangle.setGraphicSize(Std.int(funnyTriangle.width * 1.284), 0);
		funnyTriangle.updateHitbox();
		funnyTriangle.x = 300;
		funnyTriangle.y = FlxG.height - funnyTriangle.height - 107;
		// ? funnyTriangle.setGraphicSize(Std.int(funnyTriangle.width * 1.5));
		add(funnyTriangle);
		funnyTriangle.animation.play(Std.string(curSelected));

		for (i in 0...menuShit.length)
		{
			// haha funny menu
			var menuItem = new FlxSprite(325, FlxG.width / 6);
			var tex = Paths.getSparrowAtlas('funkyMenu');
			menuItem.antialiasing = true;
			menuItem.frames = tex;
			menuItem.animation.addByPrefix('idle', menuShit[i], 24);
			menuItem.animation.play('idle');
			menuItem.setGraphicSize(0, 100);
			trace(Std.string(menuItem.height * 1.4));
			menuItem.updateHitbox();
			menuItem.y += i * 100;
			menuItem.x += i * 146;
			trace(menuItem.x);
			// stop doing this shit >>> get stuff done with other parts of the engine dumbass
			menuItem.ID = i;
			menuItems.add(menuItem);
		}
		add(menuItems);
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);

		menuItems.forEach(function(spr:FlxSprite)
		{
			if (spr.ID == curSelected)
			{
				spr.alpha = 1;
			}
			else
			{
				spr.alpha = 0.4;
			}
		});
		// input shit
		if (FlxG.keys.justPressed.UP)
		{
			scrollMenu(-1);
		}
		if (FlxG.keys.justPressed.DOWN)
		{
			scrollMenu(1);
		}
		if (FlxG.keys.justPressed.ENTER)
		{
			switch curSelected
			{
				case 0:
					trace('story mode'); // story mode

				case 1:
					trace('freeplay'); // freeplay

				case 2:
					trace('credits'); // credits

				case 3:
					trace('options'); // options
			}
		}
	}

	function scrollMenu(huh:Int = 0)
	{
		curSelected += huh;
		if (curSelected >= menuItems.length)
			curSelected = 0;
		if (curSelected < 0)
			curSelected = menuItems.length - 1;
		funnyTriangle.animation.play(Std.string(curSelected));
	}
}
