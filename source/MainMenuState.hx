package;

import away3d.materials.methods.SubsurfaceScatteringDiffuseMethod;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.util.FlxColor;

class MainMenuState extends FlxState
{
	var menuID = 1.00;
	var menuShit = ['storymode', 'freeplay', 'credits', 'options'];
	var bg = new FlxSprite(0, 0);
	var funnyTriangle = new FlxSprite(0, 0);
	var menuItems = new FlxGroup(100);

	override public function create()
	{
		super.create();
		bg.loadGraphic(Paths.image('menuBG'));
		bg.screenCenter();
		bg.antialiasing = true;
		bg.scrollFactor.set();
		add(bg);
		var tex = Paths.getSparrowAtlas('funnyTriangle');
		funnyTriangle.frames = tex;
		funnyTriangle.antialiasing = true;
		funnyTriangle.animation.addByPrefix('1', 'story mode portrait', 24, true);
		funnyTriangle.animation.addByPrefix('2', 'freeplay portrait', 24, true);
		funnyTriangle.animation.addByPrefix('3', 'credits port', 24, true);
		funnyTriangle.animation.addByPrefix('4', 'options port', 24, true);
		funnyTriangle.x = funnyTriangle.width * 1.2;
		funnyTriangle.y = FlxG.height - funnyTriangle.height * 1.6;
		// ? funnyTriangle.setGraphicSize(Std.int(funnyTriangle.width * 1.5));
		add(funnyTriangle);
		funnyTriangle.animation.play(Std.string(menuID));

		for (i in 0...menuShit.length)
		{
			// haha funny menu
			var menuItem = new FlxSprite(550, FlxG.width / 6);
			var tex = Paths.getSparrowAtlas('funkyMenu');
			menuItem.antialiasing = true;
			menuItem.frames = tex;
			menuItem.animation.addByPrefix('idle', menuShit[i], 24);
			menuItem.animation.play('idle');
			menuItem.y += i * 100;
			menuItem.x += i * 120;
			// stop doing this shit >>> get stuff done with other parts of the engine dumbass
			menuItem.updateHitbox();
			menuItem.ID = i;
			menuItems.add(menuItem);
		}
		add(menuItems);
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);
		if (FlxG.keys.justReleased.UP)
		{
			scrollMenu(1);
		}
		else if (FlxG.keys.justReleased.DOWN)
		{
			scrollMenu(-1);
		}
	}

	function scrollMenu(delta:Float)
	{
		// im stupid
		// ok so this is offtopic but this song is such a bop https://open.spotify.com/track/1by5Wbf3h3ikCd3GR8Wg3v?si=9881f088f5fc442a
		FlxG.sound.play(Paths.sound('scrollMenu'));
		funnyTriangle.animation.play(Std.string(menuID));
		if (menuID > 0 && menuID < menuItems.length)
		{
			menuID += delta;
		}
		else
		{
			menuID = 1;
		}
	}
}
