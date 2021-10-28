package;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.addons.transition.FlxTransitionableState;
import flixel.group.FlxGroup.FlxTypedGroup;

class CreditsState extends FlxTransitionableState
{
	var bg = new FlxSprite(0, 0);
	var credits = ['AXYANIM8', 'BADTIE', 'RAF', 'NARUHODO A. WRIGHTO', 'INFDX', 'VOIDLESSARZON'];
	private var text:FlxTypedGroup<Alphabet>;

	var curSelected = 0;
	var camFollow:FlxObject;

	override public function create()
	{
		super.create();
		camFollow = new FlxObject(0, 0);
		camFollow.screenCenter();
		add(camFollow);
		FlxG.camera.follow(camFollow, null, 0.06);
		transIn = FlxTransitionableState.defaultTransIn;
		transOut = FlxTransitionableState.defaultTransOut;
		transitionIn();
		bg.loadGraphic(Paths.image('menuBG'));
		bg.screenCenter();
		bg.antialiasing = true;
		bg.scrollFactor.set(0, 0.01);
		add(bg);
		text = new FlxTypedGroup<Alphabet>();
		add(text);
		for (i in 0...credits.length)
		{
			var songText:Alphabet = new Alphabet(0, (70 * i) + 30, credits[i], true, false);
			songText.isMenuItem = true;
			songText.scrollFactor.set();
			songText.ID = i;
			songText.targetY = i;
			text.add(songText);
		}
		changeSelection(0);
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);
		// input bullshit
		if (FlxG.keys.justPressed.UP)
		{
			changeSelection(-1);
		}
		if (FlxG.keys.justPressed.DOWN)
		{
			changeSelection(1);
		}
		if (FlxG.keys.justPressed.ESCAPE)
		{
			FlxG.switchState(new MainMenuState());
		}
	}

	function changeSelection(change:Int = 0)
	{
		// NGio.logEvent('Fresh'); fuck off
		FlxG.sound.play(Paths.sound('scrollMenu'), 0.4);

		curSelected += change;

		if (curSelected < 0)
			curSelected = credits.length - 1;
		if (curSelected >= credits.length)
			curSelected = 0;
		var bullShit:Int = 0;

		for (item in text.members)
		{
			item.targetY = bullShit - curSelected;
			bullShit++;

			item.alpha = 0.6;
			// item.setGraphicSize(Std.int(item.width * 0.8));

			if (item.targetY == 0)
			{
				item.alpha = 1;
				camFollow.setPosition(item.x, item.y);
				// item.setGraphicSize(Std.int(item.width));
			}
		}
	}
}
