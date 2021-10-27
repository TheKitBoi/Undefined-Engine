package;


import haxe.io.Bytes;
import lime.utils.AssetBundle;
import lime.utils.AssetLibrary;
import lime.utils.AssetManifest;
import lime.utils.Assets;

#if sys
import sys.FileSystem;
#end

@:access(lime.utils.Assets)


@:keep @:dox(hide) class ManifestResources {


	public static var preloadLibraries:Array<AssetLibrary>;
	public static var preloadLibraryNames:Array<String>;
	public static var rootPath:String;


	public static function init (config:Dynamic):Void {

		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();

		rootPath = null;

		if (config != null && Reflect.hasField (config, "rootPath")) {

			rootPath = Reflect.field (config, "rootPath");

		}

		if (rootPath == null) {

			#if (ios || tvos || emscripten)
			rootPath = "assets/";
			#elseif android
			rootPath = "";
			#elseif console
			rootPath = lime.system.System.applicationDirectory;
			#else
			rootPath = "./";
			#end

		}

		#if (openfl && !flash && !display)
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_monsterrat_ttf);
		
		#end

		var data, manifest, library, bundle;

		#if kha

		null
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("null", library);

		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("null");

		#else

		data = '{"name":null,"assets":"aoy4:pathy43:assets%2Fdata%2Fblammed%2Fblammed-easy.jsony4:sizei39025y4:typey4:TEXTy2:idR1y7:preloadtgoR0y43:assets%2Fdata%2Fblammed%2Fblammed-hard.jsonR2i53646R3R4R5R7R6tgoR0y38:assets%2Fdata%2Fblammed%2Fblammed.jsonR2i44638R3R4R5R8R6tgoR0y43:assets%2Fdata%2Fbopeebo%2Fbopeebo-easy.jsonR2i12574R3R4R5R9R6tgoR0y43:assets%2Fdata%2Fbopeebo%2Fbopeebo-hard.jsonR2i12576R3R4R5R10R6tgoR0y38:assets%2Fdata%2Fbopeebo%2Fbopeebo.jsonR2i12574R3R4R5R11R6tgoR0y33:assets%2Fdata%2FcharacterList.txtR2i162R3R4R5R12R6tgoR0y39:assets%2Fdata%2Fcocoa%2Fcocoa-easy.jsonR2i27364R3R4R5R13R6tgoR0y39:assets%2Fdata%2Fcocoa%2Fcocoa-hard.jsonR2i22841R3R4R5R14R6tgoR0y34:assets%2Fdata%2Fcocoa%2Fcocoa.jsonR2i30208R3R4R5R15R6tgoR0y28:assets%2Fdata%2Fcontrols.txtR2i355R3R4R5R16R6tgoR0y47:assets%2Fdata%2Fdadbattle%2Fdadbattle-easy.jsonR2i28153R3R4R5R17R6tgoR0y47:assets%2Fdata%2Fdadbattle%2Fdadbattle-hard.jsonR2i34945R3R4R5R18R6tgoR0y42:assets%2Fdata%2Fdadbattle%2Fdadbattle.jsonR2i30225R3R4R5R19R6tgoR0y34:assets%2Fdata%2Fdata-goes-here.txtR2zR3R4R5R20R6tgoR0y41:assets%2Fdata%2Feggnog%2Feggnog-easy.jsonR2i32768R3R4R5R21R6tgoR0y41:assets%2Fdata%2Feggnog%2Feggnog-hard.jsonR2i146888R3R4R5R22R6tgoR0y36:assets%2Fdata%2Feggnog%2Feggnog.jsonR2i35674R3R4R5R23R6tgoR0y36:assets%2Fdata%2FfreeplaySonglist.txtR2i35R3R4R5R24R6tgoR0y39:assets%2Fdata%2Ffresh%2Ffresh-easy.jsonR2i17647R3R4R5R25R6tgoR0y39:assets%2Fdata%2Ffresh%2Ffresh-hard.jsonR2i19185R3R4R5R26R6tgoR0y34:assets%2Fdata%2Ffresh%2Ffresh.jsonR2i18849R3R4R5R27R6tgoR0y37:assets%2Fdata%2Fhigh%2Fhigh-easy.jsonR2i34032R3R4R5R28R6tgoR0y37:assets%2Fdata%2Fhigh%2Fhigh-hard.jsonR2i26047R3R4R5R29R6tgoR0y32:assets%2Fdata%2Fhigh%2Fhigh.jsonR2i36383R3R4R5R30R6tgoR0y29:assets%2Fdata%2FintroText.txtR2i1268R3R4R5R31R6tgoR0y29:assets%2Fdata%2Fmain-view.xmlR2i125R3R4R5R32R6tgoR0y37:assets%2Fdata%2Fmilf%2Fmilf-easy.jsonR2i66246R3R4R5R33R6tgoR0y37:assets%2Fdata%2Fmilf%2Fmilf-hard.jsonR2i79053R3R4R5R34R6tgoR0y32:assets%2Fdata%2Fmilf%2Fmilf.jsonR2i70461R3R4R5R35R6tgoR0y38:assets%2Fdata%2Fmonster%2Fmonster.jsonR2i51073R3R4R5R36R6tgoR0y41:assets%2Fdata%2Fphilly%2Fphilly-easy.jsonR2i37684R3R4R5R37R6tgoR0y41:assets%2Fdata%2Fphilly%2Fphilly-hard.jsonR2i55578R3R4R5R38R6tgoR0y36:assets%2Fdata%2Fphilly%2Fphilly.jsonR2i44220R3R4R5R39R6tgoR0y37:assets%2Fdata%2Fpico%2Fpico-easy.jsonR2i16714R3R4R5R40R6tgoR0y37:assets%2Fdata%2Fpico%2Fpico-hard.jsonR2i29577R3R4R5R41R6tgoR0y32:assets%2Fdata%2Fpico%2Fpico.jsonR2i27699R3R4R5R42R6tgoR0y34:assets%2Fdata%2Fridge%2Fridge.jsonR2i34473R3R4R5R43R6tgoR0y39:assets%2Fdata%2Froses%2Froses-easy.jsonR2i27016R3R4R5R44R6tgoR0y39:assets%2Fdata%2Froses%2Froses-hard.jsonR2i34216R3R4R5R45R6tgoR0y34:assets%2Fdata%2Froses%2Froses.jsonR2i31159R3R4R5R46R6tgoR0y41:assets%2Fdata%2Froses%2FrosesDialogue.txtR2i155R3R4R5R47R6tgoR0y55:assets%2Fdata%2Fsatin-panties%2Fsatin-panties-easy.jsonR2i41066R3R4R5R48R6tgoR0y55:assets%2Fdata%2Fsatin-panties%2Fsatin-panties-hard.jsonR2i54488R3R4R5R49R6tgoR0y50:assets%2Fdata%2Fsatin-panties%2Fsatin-panties.jsonR2i47192R3R4R5R50R6tgoR0y41:assets%2Fdata%2Fsenpai%2Fsenpai-easy.jsonR2i45928R3R4R5R51R6tgoR0y41:assets%2Fdata%2Fsenpai%2Fsenpai-hard.jsonR2i51861R3R4R5R52R6tgoR0y36:assets%2Fdata%2Fsenpai%2Fsenpai.jsonR2i49335R3R4R5R53R6tgoR0y43:assets%2Fdata%2Fsenpai%2FsenpaiDialogue.txtR2i164R3R4R5R54R6tgoR0y34:assets%2Fdata%2Fsmash%2Fsmash.jsonR2i154R3R4R5R55R6tgoR0y39:assets%2Fdata%2Fsouth%2Fsouth-easy.jsonR2i30048R3R4R5R56R6tgoR0y39:assets%2Fdata%2Fsouth%2Fsouth-hard.jsonR2i34392R3R4R5R57R6tgoR0y34:assets%2Fdata%2Fsouth%2Fsouth.jsonR2i22240R3R4R5R58R6tgoR0y33:assets%2Fdata%2FspecialThanks.txtR2i305R3R4R5R59R6tgoR0y45:assets%2Fdata%2Fspookeez%2Fspookeez-easy.jsonR2i28639R3R4R5R60R6tgoR0y45:assets%2Fdata%2Fspookeez%2Fspookeez-hard.jsonR2i32667R3R4R5R61R6tgoR0y40:assets%2Fdata%2Fspookeez%2Fspookeez.jsonR2i30435R3R4R5R62R6tgoR0y41:assets%2Fdata%2Fthorns%2Fthorns-easy.jsonR2i51981R3R4R5R63R6tgoR0y41:assets%2Fdata%2Fthorns%2Fthorns-hard.jsonR2i71799R3R4R5R64R6tgoR0y36:assets%2Fdata%2Fthorns%2Fthorns.jsonR2i60997R3R4R5R65R6tgoR0y43:assets%2Fdata%2Fthorns%2FthornsDialogue.txtR2i309R3R4R5R66R6tgoR0y45:assets%2Fdata%2Ftutorial%2Ftutorial-easy.jsonR2i5739R3R4R5R67R6tgoR0y45:assets%2Fdata%2Ftutorial%2Ftutorial-hard.jsonR2i9504R3R4R5R68R6tgoR0y40:assets%2Fdata%2Ftutorial%2Ftutorial.jsonR2i5739R3R4R5R69R6tgoR0y63:assets%2Fdata%2Fwinter-horrorland%2Fwinter-horrorland-easy.jsonR2i137984R3R4R5R70R6tgoR0y63:assets%2Fdata%2Fwinter-horrorland%2Fwinter-horrorland-hard.jsonR2i177925R3R4R5R71R6tgoR0y58:assets%2Fdata%2Fwinter-horrorland%2Fwinter-horrorland.jsonR2i154340R3R4R5R72R6tgoR0y30:assets%2Fimages%2Falphabet.pngR2i139836R3y5:IMAGER5R73R6tgoR0y30:assets%2Fimages%2Falphabet.xmlR2i39069R3R4R5R75R6tgoR0y31:assets%2Fimages%2Fbackspace.pngR2i43348R3R74R5R76R6tgoR0y31:assets%2Fimages%2Fbackspace.xmlR2i747R3R4R5R77R6tgoR0y25:assets%2Fimages%2Fbad.pngR2i11727R3R74R5R78R6tgoR0y27:assets%2Fimages%2FbfCar.pngR2i1806271R3R74R5R79R6tgoR0y27:assets%2Fimages%2FbfCar.xmlR2i38250R3R4R5R80R6tgoR0y31:assets%2Fimages%2FBOYFRIEND.pngR2i5042658R3R74R5R81R6tgoR0y31:assets%2Fimages%2FBOYFRIEND.xmlR2i67577R3R4R5R82R6tgoR0y45:assets%2Fimages%2Fcampaign_menu_UI_assets.pngR2i128196R3R74R5R83R6tgoR0y45:assets%2Fimages%2Fcampaign_menu_UI_assets.xmlR2i1893R3R4R5R84R6tgoR0y49:assets%2Fimages%2Fcampaign_menu_UI_characters.pngR2i2285826R3R74R5R85R6tgoR0y49:assets%2Fimages%2Fcampaign_menu_UI_characters.xmlR2i22475R3R4R5R86R6tgoR0y45:assets%2Fimages%2Fchristmas%2FbfChristmas.pngR2i484746R3R74R5R87R6tgoR0y45:assets%2Fimages%2Fchristmas%2FbfChristmas.xmlR2i41586R3R4R5R88R6tgoR0y45:assets%2Fimages%2Fchristmas%2FbgEscalator.pngR2i166108R3R74R5R89R6tgoR0y41:assets%2Fimages%2Fchristmas%2FbgWalls.pngR2i935132R3R74R5R90R6tgoR0y43:assets%2Fimages%2Fchristmas%2FbottomBop.pngR2i1009627R3R74R5R91R6tgoR0y43:assets%2Fimages%2Fchristmas%2FbottomBop.xmlR2i2276R3R4R5R92R6tgoR0y47:assets%2Fimages%2Fchristmas%2FchristmasTree.pngR2i69663R3R74R5R93R6tgoR0y47:assets%2Fimages%2Fchristmas%2FchristmasWall.pngR2i840246R3R74R5R94R6tgoR0y40:assets%2Fimages%2Fchristmas%2FevilBG.pngR2i1230014R3R74R5R95R6tgoR0y42:assets%2Fimages%2Fchristmas%2FevilSnow.pngR2i17859R3R74R5R96R6tgoR0y42:assets%2Fimages%2Fchristmas%2FevilTree.pngR2i115115R3R74R5R97R6tgoR0y40:assets%2Fimages%2Fchristmas%2FfgSnow.pngR2i10538R3R74R5R98R6tgoR0y45:assets%2Fimages%2Fchristmas%2FgfChristmas.pngR2i4845151R3R74R5R99R6tgoR0y45:assets%2Fimages%2Fchristmas%2FgfChristmas.xmlR2i23084R3R4R5R100R6tgoR0y58:assets%2Fimages%2Fchristmas%2Fmom_dad_christmas_assets.pngR2i5065188R3R74R5R101R6tgoR0y58:assets%2Fimages%2Fchristmas%2Fmom_dad_christmas_assets.xmlR2i19356R3R4R5R102R6tgoR0y50:assets%2Fimages%2Fchristmas%2FmonsterChristmas.pngR2i872256R3R74R5R103R6tgoR0y50:assets%2Fimages%2Fchristmas%2FmonsterChristmas.xmlR2i14973R3R4R5R104R6tgoR0y39:assets%2Fimages%2Fchristmas%2Fsanta.pngR2i1066130R3R74R5R105R6tgoR0y39:assets%2Fimages%2Fchristmas%2Fsanta.xmlR2i2232R3R4R5R106R6tgoR0y42:assets%2Fimages%2Fchristmas%2FupperBop.pngR2i645807R3R74R5R107R6tgoR0y42:assets%2Fimages%2Fchristmas%2FupperBop.xmlR2i2046R3R4R5R108R6tgoR0y27:assets%2Fimages%2Fcombo.pngR2i14255R3R74R5R109R6tgoR0y35:assets%2Fimages%2FDADDY_DEAREST.pngR2i1106359R3R74R5R110R6tgoR0y35:assets%2Fimages%2FDADDY_DEAREST.xmlR2i6531R3R4R5R111R6tgoR0y42:assets%2Fimages%2FFNF_main_menu_assets.pngR2i281298R3R74R5R112R6tgoR0y42:assets%2Fimages%2FFNF_main_menu_assets.xmlR2i4755R3R4R5R113R6tgoR0y31:assets%2Fimages%2FfunkyMenu.pngR2i34370R3R74R5R114R6tgoR0y31:assets%2Fimages%2FfunkyMenu.xmlR2i498R3R4R5R115R6tgoR0y35:assets%2Fimages%2FfunnyTriangle.pngR2i110257R3R74R5R116R6tgoR0y35:assets%2Fimages%2FfunnyTriangle.xmlR2i538R3R4R5R117R6tgoR0y27:assets%2Fimages%2FgfCar.pngR2i1943171R3R74R5R118R6tgoR0y27:assets%2Fimages%2FgfCar.xmlR2i5000R3R4R5R119R6tgoR0y34:assets%2Fimages%2FgfDanceTitle.pngR2i1221436R3R74R5R120R6tgoR0y34:assets%2Fimages%2FgfDanceTitle.xmlR2i4259R3R4R5R121R6tgoR0y31:assets%2Fimages%2FGF_assets.pngR2i5966971R3R74R5R122R6tgoR0y31:assets%2Fimages%2FGF_assets.xmlR2i30950R3R4R5R123R6tgoR0y24:assets%2Fimages%2Fgo.pngR2i12296R3R74R5R124R6tgoR0y26:assets%2Fimages%2Fgood.pngR2i11923R3R74R5R125R6tgoR0y28:assets%2Fimages%2Fgrafix.pngR2i139101R3R74R5R126R6tgoR0y34:assets%2Fimages%2Fhalloween_bg.pngR2i5482377R3R74R5R127R6tgoR0y34:assets%2Fimages%2Fhalloween_bg.xmlR2i3663R3R4R5R128R6tgoR0y31:assets%2Fimages%2FhealthBar.pngR2i307R3R74R5R129R6tgoR0y30:assets%2Fimages%2FiconGrid.pngR2i147419R3R74R5R130R6tgoR0y36:assets%2Fimages%2Fimages-go-here.txtR2zR3R4R5R131R6tgoR0y35:assets%2Fimages%2Flimo%2FbgLimo.pngR2i859505R3R74R5R132R6tgoR0y35:assets%2Fimages%2Flimo%2FbgLimo.xmlR2i794R3R4R5R133R6tgoR0y33:assets%2Fimages%2Flimo%2Fdumb.pngR2i47055R3R74R5R134R6tgoR0y39:assets%2Fimages%2Flimo%2FfastCarLol.pngR2i310592R3R74R5R135R6tgoR0y39:assets%2Fimages%2Flimo%2FlimoDancer.pngR2i642819R3R74R5R136R6tgoR0y39:assets%2Fimages%2Flimo%2FlimoDancer.xmlR2i4675R3R4R5R137R6tgoR0y38:assets%2Fimages%2Flimo%2FlimoDrive.pngR2i607493R3R74R5R138R6tgoR0y38:assets%2Fimages%2Flimo%2FlimoDrive.xmlR2i515R3R4R5R139R6tgoR0y40:assets%2Fimages%2Flimo%2FlimoOverlay.pngR2i946605R3R74R5R140R6tgoR0y39:assets%2Fimages%2Flimo%2FlimoSunset.pngR2i1141336R3R74R5R141R6tgoR0y26:assets%2Fimages%2Flogo.pngR2i86924R3R74R5R142R6tgoR0y32:assets%2Fimages%2FlogoBumpin.pngR2i592724R3R74R5R143R6tgoR0y32:assets%2Fimages%2FlogoBumpin.xmlR2i2177R3R4R5R144R6tgoR0y25:assets%2Fimages%2Flol.pngR2i6701R3R74R5R145R6tgoR0y26:assets%2Fimages%2Flose.pngR2i236363R3R74R5R146R6tgoR0y26:assets%2Fimages%2Flose.xmlR2i4131R3R4R5R147R6tgoR0y28:assets%2Fimages%2FmenuBG.pngR2i464576R3R74R5R148R6tgoR0y32:assets%2Fimages%2FmenuBGBlue.pngR2i614586R3R74R5R149R6tgoR0y35:assets%2Fimages%2FmenuBGMagenta.pngR2i553468R3R74R5R150R6tgoR0y31:assets%2Fimages%2FmenuDesat.pngR2i357911R3R74R5R151R6tgoR0y28:assets%2Fimages%2FmomCar.pngR2i3421816R3R74R5R152R6tgoR0y28:assets%2Fimages%2FmomCar.xmlR2i8902R3R4R5R153R6tgoR0y32:assets%2Fimages%2FMom_Assets.pngR2i1816373R3R74R5R154R6tgoR0y32:assets%2Fimages%2FMom_Assets.xmlR2i8945R3R4R5R155R6tgoR0y36:assets%2Fimages%2FMonster_Assets.pngR2i1570346R3R74R5R156R6tgoR0y36:assets%2Fimages%2FMonster_Assets.xmlR2i14853R3R4R5R157R6tgoR0y37:assets%2Fimages%2Fnewgrounds_logo.pngR2i57747R3R74R5R158R6tgoR0y33:assets%2Fimages%2FNOTE_assets.pngR2i716622R3R74R5R159R6tgoR0y33:assets%2Fimages%2FNOTE_assets.xmlR2i5023R3R4R5R160R6tgoR0y26:assets%2Fimages%2Fnum0.pngR2i3738R3R74R5R161R6tgoR0y26:assets%2Fimages%2Fnum1.pngR2i3390R3R74R5R162R6tgoR0y26:assets%2Fimages%2Fnum2.pngR2i3990R3R74R5R163R6tgoR0y26:assets%2Fimages%2Fnum3.pngR2i4022R3R74R5R164R6tgoR0y26:assets%2Fimages%2Fnum4.pngR2i3989R3R74R5R165R6tgoR0y26:assets%2Fimages%2Fnum5.pngR2i4113R3R74R5R166R6tgoR0y26:assets%2Fimages%2Fnum6.pngR2i4181R3R74R5R167R6tgoR0y26:assets%2Fimages%2Fnum7.pngR2i3692R3R74R5R168R6tgoR0y26:assets%2Fimages%2Fnum8.pngR2i3914R3R74R5R169R6tgoR0y26:assets%2Fimages%2Fnum9.pngR2i3687R3R74R5R170R6tgoR0y38:assets%2Fimages%2FpauseAlt%2FbfLol.pngR2i36765R3R74R5R171R6tgoR0y38:assets%2Fimages%2FpauseAlt%2FbfLol.xmlR2i3106R3R4R5R172R6tgoR0y40:assets%2Fimages%2FpauseAlt%2FpauseBG.pngR2i96791R3R74R5R173R6tgoR0y40:assets%2Fimages%2FpauseAlt%2FpauseUI.pngR2i40939R3R74R5R174R6tgoR0y40:assets%2Fimages%2FpauseAlt%2FpauseUI.xmlR2i560R3R4R5R175R6tgoR0y42:assets%2Fimages%2Fphilly%2FbehindTrain.pngR2i51391R3R74R5R176R6tgoR0y35:assets%2Fimages%2Fphilly%2Fcity.pngR2i167048R3R74R5R177R6tgoR0y34:assets%2Fimages%2Fphilly%2Fsky.pngR2i438577R3R74R5R178R6tgoR0y37:assets%2Fimages%2Fphilly%2Fstreet.pngR2i146849R3R74R5R179R6tgoR0y36:assets%2Fimages%2Fphilly%2Ftrain.pngR2i186831R3R74R5R180R6tgoR0y35:assets%2Fimages%2Fphilly%2Fwin0.pngR2i30819R3R74R5R181R6tgoR0y35:assets%2Fimages%2Fphilly%2Fwin1.pngR2i30568R3R74R5R182R6tgoR0y35:assets%2Fimages%2Fphilly%2Fwin2.pngR2i31185R3R74R5R183R6tgoR0y35:assets%2Fimages%2Fphilly%2Fwin3.pngR2i30319R3R74R5R184R6tgoR0y35:assets%2Fimages%2Fphilly%2Fwin4.pngR2i31128R3R74R5R185R6tgoR0y38:assets%2Fimages%2FPico_FNF_assetss.pngR2i1750438R3R74R5R186R6tgoR0y38:assets%2Fimages%2FPico_FNF_assetss.xmlR2i24093R3R4R5R187R6tgoR0y27:assets%2Fimages%2Fready.pngR2i28966R3R74R5R188R6tgoR0y29:assets%2Fimages%2Frestart.pngR2i41117R3R74R5R189R6tgoR0y40:assets%2Fimages%2FscreencapTierImage.pngR2i109151R3R74R5R190R6tgoR0y25:assets%2Fimages%2Fset.pngR2i25471R3R74R5R191R6tgoR0y26:assets%2Fimages%2Fshit.pngR2i15319R3R74R5R192R6tgoR0y26:assets%2Fimages%2Fsick.pngR2i19249R3R74R5R193R6tgoR0y43:assets%2Fimages%2Fspeech_bubble_talking.pngR2i201150R3R74R5R194R6tgoR0y43:assets%2Fimages%2Fspeech_bubble_talking.xmlR2i4745R3R4R5R195R6tgoR0y40:assets%2Fimages%2Fspooky_kids_assets.pngR2i714454R3R74R5R196R6tgoR0y40:assets%2Fimages%2Fspooky_kids_assets.xmlR2i12390R3R4R5R197R6tgoR0y31:assets%2Fimages%2Fstageback.pngR2i36925R3R74R5R198R6tgoR0y35:assets%2Fimages%2Fstagecurtains.pngR2i154716R3R74R5R199R6tgoR0y32:assets%2Fimages%2Fstagefront.pngR2i143142R3R74R5R200R6tgoR0y33:assets%2Fimages%2Fstage_light.pngR2i12177R3R74R5R201R6tgoR0y32:assets%2Fimages%2FtitleEnter.pngR2i1449202R3R74R5R202R6tgoR0y32:assets%2Fimages%2FtitleEnter.xmlR2i4875R3R4R5R203R6tgoR0y47:assets%2Fimages%2Fweeb%2FanimatedEvilSchool.pngR2i289191R3R74R5R204R6tgoR0y47:assets%2Fimages%2Fweeb%2FanimatedEvilSchool.xmlR2i3887R3R4R5R205R6tgoR0y36:assets%2Fimages%2Fweeb%2FbfPixel.pngR2i34788R3R74R5R206R6tgoR0y36:assets%2Fimages%2Fweeb%2FbfPixel.xmlR2i11162R3R4R5R207R6tgoR0y41:assets%2Fimages%2Fweeb%2FbfPixelsDEAD.pngR2i120013R3R74R5R208R6tgoR0y41:assets%2Fimages%2Fweeb%2FbfPixelsDEAD.xmlR2i9974R3R4R5R209R6tgoR0y39:assets%2Fimages%2Fweeb%2FbfPortrait.pngR2i9778R3R74R5R210R6tgoR0y39:assets%2Fimages%2Fweeb%2FbfPortrait.xmlR2i1126R3R4R5R211R6tgoR0y37:assets%2Fimages%2Fweeb%2FbgFreaks.pngR2i101100R3R74R5R212R6tgoR0y37:assets%2Fimages%2Fweeb%2FbgFreaks.xmlR2i5211R3R4R5R213R6tgoR0y41:assets%2Fimages%2Fweeb%2FevilSchoolBG.pngR2i12567R3R74R5R214R6tgoR0y41:assets%2Fimages%2Fweeb%2FevilSchoolFG.pngR2i6220R3R74R5R215R6tgoR0y36:assets%2Fimages%2Fweeb%2FgfPixel.pngR2i23907R3R74R5R216R6tgoR0y36:assets%2Fimages%2Fweeb%2FgfPixel.xmlR2i2414R3R4R5R217R6tgoR0y35:assets%2Fimages%2Fweeb%2Fpetals.pngR2i18969R3R74R5R218R6tgoR0y35:assets%2Fimages%2Fweeb%2Fpetals.xmlR2i4557R3R4R5R219R6tgoR0y48:assets%2Fimages%2Fweeb%2FpixelUI%2FarrowEnds.pngR2i357R3R74R5R220R6tgoR0y52:assets%2Fimages%2Fweeb%2FpixelUI%2Farrows-pixels.pngR2i4806R3R74R5R221R6tgoR0y48:assets%2Fimages%2Fweeb%2FpixelUI%2Fbad-pixel.pngR2i418R3R74R5R222R6tgoR0y50:assets%2Fimages%2Fweeb%2FpixelUI%2Fcombo-pixel.pngR2i417R3R74R5R223R6tgoR0y49:assets%2Fimages%2Fweeb%2FpixelUI%2Fdate-pixel.pngR2i1055R3R74R5R224R6tgoR0y55:assets%2Fimages%2Fweeb%2FpixelUI%2FdialogueBox-evil.pngR2i1425R3R74R5R225R6tgoR0y55:assets%2Fimages%2Fweeb%2FpixelUI%2FdialogueBox-evil.xmlR2i1385R3R4R5R226R6tgoR0y56:assets%2Fimages%2Fweeb%2FpixelUI%2FdialogueBox-pixel.pngR2i7200R3R74R5R227R6tgoR0y56:assets%2Fimages%2Fweeb%2FpixelUI%2FdialogueBox-pixel.xmlR2i680R3R4R5R228R6tgoR0y60:assets%2Fimages%2Fweeb%2FpixelUI%2FdialogueBox-senpaiMad.pngR2i26689R3R74R5R229R6tgoR0y60:assets%2Fimages%2Fweeb%2FpixelUI%2FdialogueBox-senpaiMad.xmlR2i1050R3R4R5R230R6tgoR0y49:assets%2Fimages%2Fweeb%2FpixelUI%2Fgood-pixel.pngR2i396R3R74R5R231R6tgoR0y51:assets%2Fimages%2Fweeb%2FpixelUI%2Fhand_textbox.pngR2i260R3R74R5R232R6tgoR0y49:assets%2Fimages%2Fweeb%2FpixelUI%2Fnum0-pixel.pngR2i189R3R74R5R233R6tgoR0y49:assets%2Fimages%2Fweeb%2FpixelUI%2Fnum1-pixel.pngR2i169R3R74R5R234R6tgoR0y49:assets%2Fimages%2Fweeb%2FpixelUI%2Fnum2-pixel.pngR2i220R3R74R5R235R6tgoR0y49:assets%2Fimages%2Fweeb%2FpixelUI%2Fnum3-pixel.pngR2i204R3R74R5R236R6tgoR0y49:assets%2Fimages%2Fweeb%2FpixelUI%2Fnum4-pixel.pngR2i181R3R74R5R237R6tgoR0y49:assets%2Fimages%2Fweeb%2FpixelUI%2Fnum5-pixel.pngR2i203R3R74R5R238R6tgoR0y49:assets%2Fimages%2Fweeb%2FpixelUI%2Fnum6-pixel.pngR2i214R3R74R5R239R6tgoR0y49:assets%2Fimages%2Fweeb%2FpixelUI%2Fnum7-pixel.pngR2i197R3R74R5R240R6tgoR0y49:assets%2Fimages%2Fweeb%2FpixelUI%2Fnum8-pixel.pngR2i187R3R74R5R241R6tgoR0y49:assets%2Fimages%2Fweeb%2FpixelUI%2Fnum9-pixel.pngR2i176R3R74R5R242R6tgoR0y50:assets%2Fimages%2Fweeb%2FpixelUI%2Fready-pixel.pngR2i1092R3R74R5R243R6tgoR0y48:assets%2Fimages%2Fweeb%2FpixelUI%2Fset-pixel.pngR2i1068R3R74R5R244R6tgoR0y49:assets%2Fimages%2Fweeb%2FpixelUI%2Fshit-pixel.pngR2i628R3R74R5R245R6tgoR0y49:assets%2Fimages%2Fweeb%2FpixelUI%2Fsick-pixel.pngR2i553R3R74R5R246R6tgoR0y35:assets%2Fimages%2Fweeb%2Fsenpai.pngR2i91334R3R74R5R247R6tgoR0y35:assets%2Fimages%2Fweeb%2Fsenpai.xmlR2i14911R3R4R5R248R6tgoR0y40:assets%2Fimages%2Fweeb%2FsenpaiCrazy.pngR2i14142R3R74R5R249R6tgoR0y40:assets%2Fimages%2Fweeb%2FsenpaiCrazy.xmlR2i19805R3R4R5R250R6tgoR0y43:assets%2Fimages%2Fweeb%2FsenpaiPortrait.pngR2i14440R3R74R5R251R6tgoR0y43:assets%2Fimages%2Fweeb%2FsenpaiPortrait.xmlR2i1103R3R4R5R252R6tgoR0y35:assets%2Fimages%2Fweeb%2Fspirit.pngR2i217054R3R74R5R253R6tgoR0y35:assets%2Fimages%2Fweeb%2Fspirit.txtR2i2972R3R4R5R254R6tgoR0y46:assets%2Fimages%2Fweeb%2FspiritFaceForward.pngR2i2014R3R74R5R255R6tgoR0y39:assets%2Fimages%2Fweeb%2FweebSchool.pngR2i4034R3R74R5R256R6tgoR0y36:assets%2Fimages%2Fweeb%2FweebSky.pngR2i2714R3R74R5R257R6tgoR0y39:assets%2Fimages%2Fweeb%2FweebStreet.pngR2i3885R3R74R5R258R6tgoR0y38:assets%2Fimages%2Fweeb%2FweebTrees.pngR2i119590R3R74R5R259R6tgoR0y38:assets%2Fimages%2Fweeb%2FweebTrees.txtR2i548R3R4R5R260R6tgoR0y42:assets%2Fimages%2Fweeb%2FweebTreesBack.pngR2i1465R3R74R5R261R6tgoR0y30:assets%2Fimages%2Fzzzzzzzz.pngR2i239054R3R74R5R262R6tgoR2i2325355R3y5:MUSICR5y33:assets%2Fmusic%2FBlammed_Inst.oggy9:pathGroupaR264hR6tgoR2i1361640R3R263R5y35:assets%2Fmusic%2FBlammed_Voices.oggR265aR266hR6tgoR2i1354589R3R263R5y33:assets%2Fmusic%2FBopeebo_Inst.oggR265aR267hR6tgoR2i872153R3y5:SOUNDR5y35:assets%2Fmusic%2FBopeebo_Voices.oggR265aR269hR6tgoR2i1198040R3R263R5y30:assets%2Fmusic%2Fbreakfast.oggR265aR270hR6tgoR2i2441140R3R263R5y31:assets%2Fmusic%2FCocoa_Inst.oggR265aR271hR6tgoR2i1582309R3R263R5y33:assets%2Fmusic%2FCocoa_Voices.oggR265aR272hR6tgoR2i1458429R3R263R5y35:assets%2Fmusic%2FDadbattle_Inst.oggR265aR273hR6tgoR2i1093835R3R263R5y37:assets%2Fmusic%2FDadbattle_Voices.oggR265aR274hR6tgoR2i1818977R3R263R5y32:assets%2Fmusic%2FEggnog_Inst.oggR265aR275hR6tgoR2i1476707R3R263R5y34:assets%2Fmusic%2FEggnog_Voices.oggR265aR276hR6tgoR2i2040005R3R263R5y31:assets%2Fmusic%2FfreakyMenu.oggR265aR277hR6tgoR2i1242140R3R263R5y31:assets%2Fmusic%2FFresh_Inst.oggR265aR278hR6tgoR2i669070R3R268R5y33:assets%2Fmusic%2FFresh_Voices.oggR265aR279hR6tgoR2i1625233R3R263R5y35:assets%2Fmusic%2FgameOver-pixel.oggR265aR280hR6tgoR2i709995R3R268R5y29:assets%2Fmusic%2FgameOver.oggR265aR281hR6tgoR2i94419R3R268R5y38:assets%2Fmusic%2FgameOverEnd-pixel.oggR265aR282hR6tgoR2i122964R3R268R5y32:assets%2Fmusic%2FgameOverEnd.oggR265aR283hR6tgoR2i2145631R3R263R5y30:assets%2Fmusic%2FHigh_Inst.oggR265aR284hR6tgoR2i1651666R3R263R5y32:assets%2Fmusic%2FHigh_Voices.oggR265aR285hR6tgoR2i491250R3R268R5y29:assets%2Fmusic%2FLunchbox.oggR265aR286hR6tgoR2i253221R3R268R5y34:assets%2Fmusic%2FLunchboxScary.oggR265aR287hR6tgoR2i2502996R3R263R5y30:assets%2Fmusic%2FMilf_Inst.oggR265aR288hR6tgoR2i2197380R3R263R5y32:assets%2Fmusic%2FMilf_Voices.oggR265aR289hR6tgoR2i3031197R3R263R5y28:assets%2Fmusic%2FMonster.oggR265aR290hR6tgoR2i2958475R3R263R5y33:assets%2Fmusic%2FMonster_Inst.oggR265aR291hR6tgoR2i1212627R3R263R5y35:assets%2Fmusic%2FMonster_Voices.oggR265aR292hR6tgoR0y36:assets%2Fmusic%2Fmusic-goes-here.txtR2zR3R4R5R293R6tgoR2i1791249R3R263R5y32:assets%2Fmusic%2FPhilly_Inst.oggR265aR294hR6tgoR2i1386319R3R263R5y34:assets%2Fmusic%2FPhilly_Voices.oggR265aR295hR6tgoR2i1494375R3R263R5y30:assets%2Fmusic%2FPico_Inst.oggR265aR296hR6tgoR2i1106841R3R263R5y32:assets%2Fmusic%2FPico_Voices.oggR265aR297hR6tgoR2i1730806R3R263R5y31:assets%2Fmusic%2FRoses_Inst.oggR265aR298hR6tgoR2i1337017R3R263R5y33:assets%2Fmusic%2FRoses_Voices.oggR265aR299hR6tgoR2i1705467R3R263R5y39:assets%2Fmusic%2FSatin-Panties_Inst.oggR265aR300hR6tgoR2i1641940R3R263R5y41:assets%2Fmusic%2FSatin-Panties_Voices.oggR265aR301hR6tgoR2i1956580R3R263R5y32:assets%2Fmusic%2FSenpai_Inst.oggR265aR302hR6tgoR2i1631138R3R263R5y34:assets%2Fmusic%2FSenpai_Voices.oggR265aR303hR6tgoR2i1564577R3R263R5y31:assets%2Fmusic%2FSouth_Inst.oggR265aR304hR6tgoR2i1026930R3R268R5y33:assets%2Fmusic%2FSouth_Voices.oggR265aR305hR6tgoR2i1907584R3R263R5y29:assets%2Fmusic%2FSpookeez.oggR265aR306hR6tgoR2i1611036R3R263R5y34:assets%2Fmusic%2FSpookeez_Inst.oggR265aR307hR6tgoR2i1332725R3R263R5y36:assets%2Fmusic%2FSpookeez_Voices.oggR265aR308hR6tgoR2i1977690R3R263R5y30:assets%2Fmusic%2FTest_Inst.oggR265aR309hR6tgoR2i15483R3R268R5y32:assets%2Fmusic%2FTest_Voices.oggR265aR310hR6tgoR2i1908370R3R263R5y32:assets%2Fmusic%2FThorns_Inst.oggR265aR311hR6tgoR2i1724454R3R263R5y34:assets%2Fmusic%2FThorns_Voices.oggR265aR312hR6tgoR2i657589R3R268R5y26:assets%2Fmusic%2Ftitle.oggR265aR313hR6tgoR2i170690R3R268R5y31:assets%2Fmusic%2FtitleShoot.oggR265aR314hR6tgoR2i1129100R3R263R5y34:assets%2Fmusic%2FTutorial_Inst.oggR265aR315hR6tgoR2i2626805R3R263R5y43:assets%2Fmusic%2FWinter-Horrorland_Inst.oggR265aR316hR6tgoR2i1199782R3R263R5y45:assets%2Fmusic%2FWinter-Horrorland_Voices.oggR265aR317hR6tgoR2i5204R3R268R5y27:assets%2Fsounds%2FANGRY.oggR265aR318hR6tgoR2i39236R3R268R5y36:assets%2Fsounds%2FANGRY_TEXT_BOX.oggR265aR319hR6tgoR2i19356R3R268R5y31:assets%2Fsounds%2Fbadnoise1.oggR265aR320hR6tgoR2i18672R3R268R5y31:assets%2Fsounds%2Fbadnoise2.oggR265aR321hR6tgoR2i20065R3R268R5y31:assets%2Fsounds%2Fbadnoise3.oggR265aR322hR6tgoR2i11419R3R268R5y32:assets%2Fsounds%2FcancelMenu.oggR265aR323hR6tgoR2i47736R3R268R5y30:assets%2Fsounds%2FcarPass0.oggR265aR324hR6tgoR2i50294R3R268R5y30:assets%2Fsounds%2FcarPass1.oggR265aR325hR6tgoR2i9731R3R268R5y31:assets%2Fsounds%2FclickText.oggR265aR326hR6tgoR2i31599R3R268R5y33:assets%2Fsounds%2FconfirmMenu.oggR265aR327hR6tgoR2i64518R3R268R5y40:assets%2Fsounds%2Ffnf_loss_sfx-pixel.oggR265aR328hR6tgoR2i74157R3R268R5y34:assets%2Fsounds%2Ffnf_loss_sfx.oggR265aR329hR6tgoR2i7941R3R268R5y32:assets%2Fsounds%2FfreshIntro.oggR265aR330hR6tgoR2i9094R3R268R5y26:assets%2Fsounds%2FGF_1.oggR265aR331hR6tgoR2i9125R3R268R5y26:assets%2Fsounds%2FGF_2.oggR265aR332hR6tgoR2i9862R3R268R5y26:assets%2Fsounds%2FGF_3.oggR265aR333hR6tgoR2i9671R3R268R5y26:assets%2Fsounds%2FGF_4.oggR265aR334hR6tgoR2i11731R3R268R5y34:assets%2Fsounds%2Fintro1-pixel.oggR265aR335hR6tgoR2i13579R3R268R5y28:assets%2Fsounds%2Fintro1.oggR265aR336hR6tgoR2i13206R3R268R5y34:assets%2Fsounds%2Fintro2-pixel.oggR265aR337hR6tgoR2i13912R3R268R5y28:assets%2Fsounds%2Fintro2.oggR265aR338hR6tgoR2i12277R3R268R5y34:assets%2Fsounds%2Fintro3-pixel.oggR265aR339hR6tgoR2i13524R3R268R5y28:assets%2Fsounds%2Fintro3.oggR265aR340hR6tgoR2i21141R3R268R5y35:assets%2Fsounds%2FintroGo-pixel.oggR265aR341hR6tgoR2i14071R3R268R5y29:assets%2Fsounds%2FintroGo.oggR265aR342hR6tgoR2i55298R3R268R5y37:assets%2Fsounds%2FLights_Shut_off.oggR265aR343hR6tgoR2i82248R3R268R5y36:assets%2Fsounds%2FLights_Turn_On.oggR265aR344hR6tgoR2i10400R3R268R5y31:assets%2Fsounds%2Fmissnote1.oggR265aR345hR6tgoR2i11644R3R268R5y31:assets%2Fsounds%2Fmissnote2.oggR265aR346hR6tgoR2i12857R3R268R5y31:assets%2Fsounds%2Fmissnote3.oggR265aR347hR6tgoR2i4567R3R268R5y31:assets%2Fsounds%2FpixelText.oggR265aR348hR6tgoR2i9103R3R268R5y32:assets%2Fsounds%2FscrollMenu.oggR265aR349hR6tgoR2i136579R3R268R5y33:assets%2Fsounds%2FSenpai_Dies.oggR265aR350hR6tgoR0y36:assets%2Fsounds%2Fsounds-go-here.txtR2zR3R4R5R351R6tgoR2i170333R3R268R5y31:assets%2Fsounds%2FsoundTest.oggR265aR352hR6tgoR2i66346R3R268R5y31:assets%2Fsounds%2Fthunder_1.oggR265aR353hR6tgoR2i126347R3R268R5y31:assets%2Fsounds%2Fthunder_2.oggR265aR354hR6tgoR2i258325R3R268R5y34:assets%2Fsounds%2Ftrain_passes.oggR265aR355hR6tgoR2i2114R3R263R5y26:flixel%2Fsounds%2Fbeep.mp3R265aR356y26:flixel%2Fsounds%2Fbeep.ogghR6tgoR2i39706R3R263R5y28:flixel%2Fsounds%2Fflixel.mp3R265aR358y28:flixel%2Fsounds%2Fflixel.ogghR6tgoR2i5794R3R268R5R357R265aR356R357hgoR2i33629R3R268R5R359R265aR358R359hgoR2i15744R3y4:FONTy9:classNamey35:__ASSET__flixel_fonts_nokiafc22_ttfR5y30:flixel%2Ffonts%2Fnokiafc22.ttfR6tgoR2i29724R3R360R361y36:__ASSET__flixel_fonts_monsterrat_ttfR5y31:flixel%2Ffonts%2Fmonsterrat.ttfR6tgoR0y33:flixel%2Fimages%2Fui%2Fbutton.pngR2i519R3R74R5R366R6tgoR0y36:flixel%2Fimages%2Flogo%2Fdefault.pngR2i3280R3R74R5R367R6tgh","rootPath":null,"version":2,"libraryArgs":[],"libraryType":null}';
		manifest = AssetManifest.parse (data, rootPath);
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("default", library);
		

		library = Assets.getLibrary ("default");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("default");
		

		#end

	}


}


#if kha

null

#else

#if !display
#if flash

@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_blammed_blammed_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_blammed_blammed_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_blammed_blammed_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_bopeebo_bopeebo_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_bopeebo_bopeebo_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_bopeebo_bopeebo_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_characterlist_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_cocoa_cocoa_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_cocoa_cocoa_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_cocoa_cocoa_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_controls_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_dadbattle_dadbattle_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_dadbattle_dadbattle_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_dadbattle_dadbattle_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_data_goes_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_eggnog_eggnog_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_eggnog_eggnog_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_eggnog_eggnog_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_freeplaysonglist_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_fresh_fresh_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_fresh_fresh_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_fresh_fresh_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_high_high_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_high_high_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_high_high_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_introtext_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_main_view_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_milf_milf_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_milf_milf_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_milf_milf_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_monster_monster_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_philly_philly_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_philly_philly_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_philly_philly_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_pico_pico_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_pico_pico_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_pico_pico_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_ridge_ridge_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_roses_roses_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_roses_roses_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_roses_roses_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_roses_rosesdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_satin_panties_satin_panties_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_satin_panties_satin_panties_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_satin_panties_satin_panties_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_senpai_senpai_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_senpai_senpai_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_senpai_senpai_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_senpai_senpaidialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_smash_smash_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_south_south_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_south_south_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_south_south_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_specialthanks_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_spookeez_spookeez_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_spookeez_spookeez_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_spookeez_spookeez_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_thorns_thorns_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_thorns_thorns_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_thorns_thorns_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_thorns_thornsdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_tutorial_tutorial_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_tutorial_tutorial_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_tutorial_tutorial_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_winter_horrorland_winter_horrorland_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_winter_horrorland_winter_horrorland_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_winter_horrorland_winter_horrorland_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_alphabet_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_alphabet_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backspace_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backspace_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_bad_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_bfcar_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_bfcar_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_boyfriend_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_boyfriend_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_campaign_menu_ui_assets_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_campaign_menu_ui_assets_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_campaign_menu_ui_characters_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_campaign_menu_ui_characters_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_christmas_bfchristmas_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_christmas_bfchristmas_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_christmas_bgescalator_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_christmas_bgwalls_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_christmas_bottombop_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_christmas_bottombop_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_christmas_christmastree_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_christmas_christmaswall_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_christmas_evilbg_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_christmas_evilsnow_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_christmas_eviltree_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_christmas_fgsnow_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_christmas_gfchristmas_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_christmas_gfchristmas_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_christmas_mom_dad_christmas_assets_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_christmas_mom_dad_christmas_assets_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_christmas_monsterchristmas_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_christmas_monsterchristmas_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_christmas_santa_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_christmas_santa_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_christmas_upperbop_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_christmas_upperbop_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_combo_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_daddy_dearest_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_daddy_dearest_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_fnf_main_menu_assets_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_fnf_main_menu_assets_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_funkymenu_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_funkymenu_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_funnytriangle_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_funnytriangle_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_gfcar_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_gfcar_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_gfdancetitle_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_gfdancetitle_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_gf_assets_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_gf_assets_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_go_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_good_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_grafix_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_halloween_bg_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_halloween_bg_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_healthbar_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_icongrid_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_images_go_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_limo_bglimo_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_limo_bglimo_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_limo_dumb_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_limo_fastcarlol_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_limo_limodancer_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_limo_limodancer_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_limo_limodrive_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_limo_limodrive_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_limo_limooverlay_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_limo_limosunset_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_logo_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_logobumpin_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_logobumpin_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_lol_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_lose_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_lose_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menubg_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menubgblue_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menubgmagenta_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menudesat_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_momcar_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_momcar_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_mom_assets_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_mom_assets_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_monster_assets_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_monster_assets_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_newgrounds_logo_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_note_assets_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_note_assets_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_num0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_num1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_num2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_num3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_num4_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_num5_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_num6_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_num7_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_num8_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_num9_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pausealt_bflol_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pausealt_bflol_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pausealt_pausebg_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pausealt_pauseui_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pausealt_pauseui_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_philly_behindtrain_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_philly_city_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_philly_sky_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_philly_street_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_philly_train_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_philly_win0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_philly_win1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_philly_win2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_philly_win3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_philly_win4_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pico_fnf_assetss_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pico_fnf_assetss_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_ready_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_restart_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_screencaptierimage_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_set_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_shit_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_sick_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_speech_bubble_talking_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_speech_bubble_talking_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_spooky_kids_assets_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_spooky_kids_assets_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_stageback_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_stagecurtains_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_stagefront_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_stage_light_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_titleenter_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_titleenter_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_animatedevilschool_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_animatedevilschool_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_bfpixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_bfpixel_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_bfpixelsdead_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_bfpixelsdead_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_bfportrait_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_bfportrait_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_bgfreaks_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_bgfreaks_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_evilschoolbg_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_evilschoolfg_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_gfpixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_gfpixel_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_petals_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_petals_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_arrowends_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_arrows_pixels_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_bad_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_combo_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_date_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_dialoguebox_evil_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_dialoguebox_evil_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_dialoguebox_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_dialoguebox_pixel_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_dialoguebox_senpaimad_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_dialoguebox_senpaimad_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_good_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_hand_textbox_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_num0_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_num1_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_num2_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_num3_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_num4_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_num5_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_num6_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_num7_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_num8_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_num9_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_ready_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_set_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_shit_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_sick_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_senpai_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_senpai_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_senpaicrazy_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_senpaicrazy_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_senpaiportrait_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_senpaiportrait_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_spirit_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_spirit_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_spiritfaceforward_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_weebschool_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_weebsky_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_weebstreet_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_weebtrees_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_weebtrees_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_weeb_weebtreesback_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_zzzzzzzz_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_blammed_inst_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_blammed_voices_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_bopeebo_inst_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_bopeebo_voices_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_breakfast_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_cocoa_inst_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_cocoa_voices_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_dadbattle_inst_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_dadbattle_voices_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_eggnog_inst_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_eggnog_voices_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_freakymenu_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_fresh_inst_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_fresh_voices_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_gameover_pixel_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_gameover_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_gameoverend_pixel_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_gameoverend_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_high_inst_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_high_voices_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_lunchbox_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_lunchboxscary_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_milf_inst_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_milf_voices_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_monster_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_monster_inst_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_monster_voices_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_music_goes_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_philly_inst_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_philly_voices_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_pico_inst_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_pico_voices_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_roses_inst_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_roses_voices_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_satin_panties_inst_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_satin_panties_voices_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_senpai_inst_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_senpai_voices_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_south_inst_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_south_voices_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_spookeez_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_spookeez_inst_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_spookeez_voices_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_test_inst_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_test_voices_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_thorns_inst_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_thorns_voices_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_title_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_titleshoot_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_tutorial_inst_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_winter_horrorland_inst_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_winter_horrorland_voices_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_angry_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_angry_text_box_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_badnoise1_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_badnoise2_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_badnoise3_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_cancelmenu_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_carpass0_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_carpass1_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_clicktext_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_confirmmenu_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_fnf_loss_sfx_pixel_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_fnf_loss_sfx_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_freshintro_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_gf_1_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_gf_2_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_gf_3_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_gf_4_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_intro1_pixel_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_intro1_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_intro2_pixel_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_intro2_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_intro3_pixel_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_intro3_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_introgo_pixel_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_introgo_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_lights_shut_off_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_lights_turn_on_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_missnote1_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_missnote2_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_missnote3_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_pixeltext_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_scrollmenu_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_senpai_dies_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_sounds_go_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_soundtest_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_thunder_1_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_thunder_2_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_train_passes_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_images_ui_button_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_images_logo_default_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__manifest_default_json extends null { }


#elseif (desktop || cpp)

@:keep @:file("assets/data/blammed/blammed-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_blammed_blammed_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/blammed/blammed-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_blammed_blammed_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/blammed/blammed.json") @:noCompletion #if display private #end class __ASSET__assets_data_blammed_blammed_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/bopeebo/bopeebo-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_bopeebo_bopeebo_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/bopeebo/bopeebo-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_bopeebo_bopeebo_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/bopeebo/bopeebo.json") @:noCompletion #if display private #end class __ASSET__assets_data_bopeebo_bopeebo_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/characterList.txt") @:noCompletion #if display private #end class __ASSET__assets_data_characterlist_txt extends haxe.io.Bytes {}
@:keep @:file("assets/data/cocoa/cocoa-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_cocoa_cocoa_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/cocoa/cocoa-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_cocoa_cocoa_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/cocoa/cocoa.json") @:noCompletion #if display private #end class __ASSET__assets_data_cocoa_cocoa_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/controls.txt") @:noCompletion #if display private #end class __ASSET__assets_data_controls_txt extends haxe.io.Bytes {}
@:keep @:file("assets/data/dadbattle/dadbattle-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_dadbattle_dadbattle_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/dadbattle/dadbattle-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_dadbattle_dadbattle_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/dadbattle/dadbattle.json") @:noCompletion #if display private #end class __ASSET__assets_data_dadbattle_dadbattle_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/data-goes-here.txt") @:noCompletion #if display private #end class __ASSET__assets_data_data_goes_here_txt extends haxe.io.Bytes {}
@:keep @:file("assets/data/eggnog/eggnog-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_eggnog_eggnog_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/eggnog/eggnog-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_eggnog_eggnog_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/eggnog/eggnog.json") @:noCompletion #if display private #end class __ASSET__assets_data_eggnog_eggnog_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/freeplaySonglist.txt") @:noCompletion #if display private #end class __ASSET__assets_data_freeplaysonglist_txt extends haxe.io.Bytes {}
@:keep @:file("assets/data/fresh/fresh-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_fresh_fresh_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/fresh/fresh-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_fresh_fresh_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/fresh/fresh.json") @:noCompletion #if display private #end class __ASSET__assets_data_fresh_fresh_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/high/high-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_high_high_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/high/high-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_high_high_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/high/high.json") @:noCompletion #if display private #end class __ASSET__assets_data_high_high_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/introText.txt") @:noCompletion #if display private #end class __ASSET__assets_data_introtext_txt extends haxe.io.Bytes {}
@:keep @:file("assets/data/main-view.xml") @:noCompletion #if display private #end class __ASSET__assets_data_main_view_xml extends haxe.io.Bytes {}
@:keep @:file("assets/data/milf/milf-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_milf_milf_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/milf/milf-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_milf_milf_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/milf/milf.json") @:noCompletion #if display private #end class __ASSET__assets_data_milf_milf_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/monster/monster.json") @:noCompletion #if display private #end class __ASSET__assets_data_monster_monster_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/philly/philly-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_philly_philly_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/philly/philly-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_philly_philly_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/philly/philly.json") @:noCompletion #if display private #end class __ASSET__assets_data_philly_philly_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/pico/pico-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_pico_pico_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/pico/pico-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_pico_pico_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/pico/pico.json") @:noCompletion #if display private #end class __ASSET__assets_data_pico_pico_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/ridge/ridge.json") @:noCompletion #if display private #end class __ASSET__assets_data_ridge_ridge_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/roses/roses-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_roses_roses_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/roses/roses-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_roses_roses_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/roses/roses.json") @:noCompletion #if display private #end class __ASSET__assets_data_roses_roses_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/roses/rosesDialogue.txt") @:noCompletion #if display private #end class __ASSET__assets_data_roses_rosesdialogue_txt extends haxe.io.Bytes {}
@:keep @:file("assets/data/satin-panties/satin-panties-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_satin_panties_satin_panties_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/satin-panties/satin-panties-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_satin_panties_satin_panties_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/satin-panties/satin-panties.json") @:noCompletion #if display private #end class __ASSET__assets_data_satin_panties_satin_panties_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/senpai/senpai-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_senpai_senpai_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/senpai/senpai-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_senpai_senpai_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/senpai/senpai.json") @:noCompletion #if display private #end class __ASSET__assets_data_senpai_senpai_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/senpai/senpaiDialogue.txt") @:noCompletion #if display private #end class __ASSET__assets_data_senpai_senpaidialogue_txt extends haxe.io.Bytes {}
@:keep @:file("assets/data/smash/smash.json") @:noCompletion #if display private #end class __ASSET__assets_data_smash_smash_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/south/south-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_south_south_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/south/south-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_south_south_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/south/south.json") @:noCompletion #if display private #end class __ASSET__assets_data_south_south_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/specialThanks.txt") @:noCompletion #if display private #end class __ASSET__assets_data_specialthanks_txt extends haxe.io.Bytes {}
@:keep @:file("assets/data/spookeez/spookeez-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_spookeez_spookeez_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/spookeez/spookeez-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_spookeez_spookeez_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/spookeez/spookeez.json") @:noCompletion #if display private #end class __ASSET__assets_data_spookeez_spookeez_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/thorns/thorns-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_thorns_thorns_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/thorns/thorns-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_thorns_thorns_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/thorns/thorns.json") @:noCompletion #if display private #end class __ASSET__assets_data_thorns_thorns_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/thorns/thornsDialogue.txt") @:noCompletion #if display private #end class __ASSET__assets_data_thorns_thornsdialogue_txt extends haxe.io.Bytes {}
@:keep @:file("assets/data/tutorial/tutorial-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_tutorial_tutorial_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/tutorial/tutorial-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_tutorial_tutorial_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/tutorial/tutorial.json") @:noCompletion #if display private #end class __ASSET__assets_data_tutorial_tutorial_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/winter-horrorland/winter-horrorland-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_winter_horrorland_winter_horrorland_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/winter-horrorland/winter-horrorland-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_winter_horrorland_winter_horrorland_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/winter-horrorland/winter-horrorland.json") @:noCompletion #if display private #end class __ASSET__assets_data_winter_horrorland_winter_horrorland_json extends haxe.io.Bytes {}
@:keep @:image("assets/images/alphabet.png") @:noCompletion #if display private #end class __ASSET__assets_images_alphabet_png extends lime.graphics.Image {}
@:keep @:file("assets/images/alphabet.xml") @:noCompletion #if display private #end class __ASSET__assets_images_alphabet_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/backspace.png") @:noCompletion #if display private #end class __ASSET__assets_images_backspace_png extends lime.graphics.Image {}
@:keep @:file("assets/images/backspace.xml") @:noCompletion #if display private #end class __ASSET__assets_images_backspace_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/bad.png") @:noCompletion #if display private #end class __ASSET__assets_images_bad_png extends lime.graphics.Image {}
@:keep @:image("assets/images/bfCar.png") @:noCompletion #if display private #end class __ASSET__assets_images_bfcar_png extends lime.graphics.Image {}
@:keep @:file("assets/images/bfCar.xml") @:noCompletion #if display private #end class __ASSET__assets_images_bfcar_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/BOYFRIEND.png") @:noCompletion #if display private #end class __ASSET__assets_images_boyfriend_png extends lime.graphics.Image {}
@:keep @:file("assets/images/BOYFRIEND.xml") @:noCompletion #if display private #end class __ASSET__assets_images_boyfriend_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/campaign_menu_UI_assets.png") @:noCompletion #if display private #end class __ASSET__assets_images_campaign_menu_ui_assets_png extends lime.graphics.Image {}
@:keep @:file("assets/images/campaign_menu_UI_assets.xml") @:noCompletion #if display private #end class __ASSET__assets_images_campaign_menu_ui_assets_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/campaign_menu_UI_characters.png") @:noCompletion #if display private #end class __ASSET__assets_images_campaign_menu_ui_characters_png extends lime.graphics.Image {}
@:keep @:file("assets/images/campaign_menu_UI_characters.xml") @:noCompletion #if display private #end class __ASSET__assets_images_campaign_menu_ui_characters_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/christmas/bfChristmas.png") @:noCompletion #if display private #end class __ASSET__assets_images_christmas_bfchristmas_png extends lime.graphics.Image {}
@:keep @:file("assets/images/christmas/bfChristmas.xml") @:noCompletion #if display private #end class __ASSET__assets_images_christmas_bfchristmas_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/christmas/bgEscalator.png") @:noCompletion #if display private #end class __ASSET__assets_images_christmas_bgescalator_png extends lime.graphics.Image {}
@:keep @:image("assets/images/christmas/bgWalls.png") @:noCompletion #if display private #end class __ASSET__assets_images_christmas_bgwalls_png extends lime.graphics.Image {}
@:keep @:image("assets/images/christmas/bottomBop.png") @:noCompletion #if display private #end class __ASSET__assets_images_christmas_bottombop_png extends lime.graphics.Image {}
@:keep @:file("assets/images/christmas/bottomBop.xml") @:noCompletion #if display private #end class __ASSET__assets_images_christmas_bottombop_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/christmas/christmasTree.png") @:noCompletion #if display private #end class __ASSET__assets_images_christmas_christmastree_png extends lime.graphics.Image {}
@:keep @:image("assets/images/christmas/christmasWall.png") @:noCompletion #if display private #end class __ASSET__assets_images_christmas_christmaswall_png extends lime.graphics.Image {}
@:keep @:image("assets/images/christmas/evilBG.png") @:noCompletion #if display private #end class __ASSET__assets_images_christmas_evilbg_png extends lime.graphics.Image {}
@:keep @:image("assets/images/christmas/evilSnow.png") @:noCompletion #if display private #end class __ASSET__assets_images_christmas_evilsnow_png extends lime.graphics.Image {}
@:keep @:image("assets/images/christmas/evilTree.png") @:noCompletion #if display private #end class __ASSET__assets_images_christmas_eviltree_png extends lime.graphics.Image {}
@:keep @:image("assets/images/christmas/fgSnow.png") @:noCompletion #if display private #end class __ASSET__assets_images_christmas_fgsnow_png extends lime.graphics.Image {}
@:keep @:image("assets/images/christmas/gfChristmas.png") @:noCompletion #if display private #end class __ASSET__assets_images_christmas_gfchristmas_png extends lime.graphics.Image {}
@:keep @:file("assets/images/christmas/gfChristmas.xml") @:noCompletion #if display private #end class __ASSET__assets_images_christmas_gfchristmas_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/christmas/mom_dad_christmas_assets.png") @:noCompletion #if display private #end class __ASSET__assets_images_christmas_mom_dad_christmas_assets_png extends lime.graphics.Image {}
@:keep @:file("assets/images/christmas/mom_dad_christmas_assets.xml") @:noCompletion #if display private #end class __ASSET__assets_images_christmas_mom_dad_christmas_assets_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/christmas/monsterChristmas.png") @:noCompletion #if display private #end class __ASSET__assets_images_christmas_monsterchristmas_png extends lime.graphics.Image {}
@:keep @:file("assets/images/christmas/monsterChristmas.xml") @:noCompletion #if display private #end class __ASSET__assets_images_christmas_monsterchristmas_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/christmas/santa.png") @:noCompletion #if display private #end class __ASSET__assets_images_christmas_santa_png extends lime.graphics.Image {}
@:keep @:file("assets/images/christmas/santa.xml") @:noCompletion #if display private #end class __ASSET__assets_images_christmas_santa_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/christmas/upperBop.png") @:noCompletion #if display private #end class __ASSET__assets_images_christmas_upperbop_png extends lime.graphics.Image {}
@:keep @:file("assets/images/christmas/upperBop.xml") @:noCompletion #if display private #end class __ASSET__assets_images_christmas_upperbop_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/combo.png") @:noCompletion #if display private #end class __ASSET__assets_images_combo_png extends lime.graphics.Image {}
@:keep @:image("assets/images/DADDY_DEAREST.png") @:noCompletion #if display private #end class __ASSET__assets_images_daddy_dearest_png extends lime.graphics.Image {}
@:keep @:file("assets/images/DADDY_DEAREST.xml") @:noCompletion #if display private #end class __ASSET__assets_images_daddy_dearest_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/FNF_main_menu_assets.png") @:noCompletion #if display private #end class __ASSET__assets_images_fnf_main_menu_assets_png extends lime.graphics.Image {}
@:keep @:file("assets/images/FNF_main_menu_assets.xml") @:noCompletion #if display private #end class __ASSET__assets_images_fnf_main_menu_assets_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/funkyMenu.png") @:noCompletion #if display private #end class __ASSET__assets_images_funkymenu_png extends lime.graphics.Image {}
@:keep @:file("assets/images/funkyMenu.xml") @:noCompletion #if display private #end class __ASSET__assets_images_funkymenu_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/funnyTriangle.png") @:noCompletion #if display private #end class __ASSET__assets_images_funnytriangle_png extends lime.graphics.Image {}
@:keep @:file("assets/images/funnyTriangle.xml") @:noCompletion #if display private #end class __ASSET__assets_images_funnytriangle_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/gfCar.png") @:noCompletion #if display private #end class __ASSET__assets_images_gfcar_png extends lime.graphics.Image {}
@:keep @:file("assets/images/gfCar.xml") @:noCompletion #if display private #end class __ASSET__assets_images_gfcar_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/gfDanceTitle.png") @:noCompletion #if display private #end class __ASSET__assets_images_gfdancetitle_png extends lime.graphics.Image {}
@:keep @:file("assets/images/gfDanceTitle.xml") @:noCompletion #if display private #end class __ASSET__assets_images_gfdancetitle_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/GF_assets.png") @:noCompletion #if display private #end class __ASSET__assets_images_gf_assets_png extends lime.graphics.Image {}
@:keep @:file("assets/images/GF_assets.xml") @:noCompletion #if display private #end class __ASSET__assets_images_gf_assets_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/go.png") @:noCompletion #if display private #end class __ASSET__assets_images_go_png extends lime.graphics.Image {}
@:keep @:image("assets/images/good.png") @:noCompletion #if display private #end class __ASSET__assets_images_good_png extends lime.graphics.Image {}
@:keep @:image("assets/images/grafix.png") @:noCompletion #if display private #end class __ASSET__assets_images_grafix_png extends lime.graphics.Image {}
@:keep @:image("assets/images/halloween_bg.png") @:noCompletion #if display private #end class __ASSET__assets_images_halloween_bg_png extends lime.graphics.Image {}
@:keep @:file("assets/images/halloween_bg.xml") @:noCompletion #if display private #end class __ASSET__assets_images_halloween_bg_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/healthBar.png") @:noCompletion #if display private #end class __ASSET__assets_images_healthbar_png extends lime.graphics.Image {}
@:keep @:image("assets/images/iconGrid.png") @:noCompletion #if display private #end class __ASSET__assets_images_icongrid_png extends lime.graphics.Image {}
@:keep @:file("assets/images/images-go-here.txt") @:noCompletion #if display private #end class __ASSET__assets_images_images_go_here_txt extends haxe.io.Bytes {}
@:keep @:image("assets/images/limo/bgLimo.png") @:noCompletion #if display private #end class __ASSET__assets_images_limo_bglimo_png extends lime.graphics.Image {}
@:keep @:file("assets/images/limo/bgLimo.xml") @:noCompletion #if display private #end class __ASSET__assets_images_limo_bglimo_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/limo/dumb.png") @:noCompletion #if display private #end class __ASSET__assets_images_limo_dumb_png extends lime.graphics.Image {}
@:keep @:image("assets/images/limo/fastCarLol.png") @:noCompletion #if display private #end class __ASSET__assets_images_limo_fastcarlol_png extends lime.graphics.Image {}
@:keep @:image("assets/images/limo/limoDancer.png") @:noCompletion #if display private #end class __ASSET__assets_images_limo_limodancer_png extends lime.graphics.Image {}
@:keep @:file("assets/images/limo/limoDancer.xml") @:noCompletion #if display private #end class __ASSET__assets_images_limo_limodancer_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/limo/limoDrive.png") @:noCompletion #if display private #end class __ASSET__assets_images_limo_limodrive_png extends lime.graphics.Image {}
@:keep @:file("assets/images/limo/limoDrive.xml") @:noCompletion #if display private #end class __ASSET__assets_images_limo_limodrive_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/limo/limoOverlay.png") @:noCompletion #if display private #end class __ASSET__assets_images_limo_limooverlay_png extends lime.graphics.Image {}
@:keep @:image("assets/images/limo/limoSunset.png") @:noCompletion #if display private #end class __ASSET__assets_images_limo_limosunset_png extends lime.graphics.Image {}
@:keep @:image("assets/images/logo.png") @:noCompletion #if display private #end class __ASSET__assets_images_logo_png extends lime.graphics.Image {}
@:keep @:image("assets/images/logoBumpin.png") @:noCompletion #if display private #end class __ASSET__assets_images_logobumpin_png extends lime.graphics.Image {}
@:keep @:file("assets/images/logoBumpin.xml") @:noCompletion #if display private #end class __ASSET__assets_images_logobumpin_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/lol.png") @:noCompletion #if display private #end class __ASSET__assets_images_lol_png extends lime.graphics.Image {}
@:keep @:image("assets/images/lose.png") @:noCompletion #if display private #end class __ASSET__assets_images_lose_png extends lime.graphics.Image {}
@:keep @:file("assets/images/lose.xml") @:noCompletion #if display private #end class __ASSET__assets_images_lose_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/menuBG.png") @:noCompletion #if display private #end class __ASSET__assets_images_menubg_png extends lime.graphics.Image {}
@:keep @:image("assets/images/menuBGBlue.png") @:noCompletion #if display private #end class __ASSET__assets_images_menubgblue_png extends lime.graphics.Image {}
@:keep @:image("assets/images/menuBGMagenta.png") @:noCompletion #if display private #end class __ASSET__assets_images_menubgmagenta_png extends lime.graphics.Image {}
@:keep @:image("assets/images/menuDesat.png") @:noCompletion #if display private #end class __ASSET__assets_images_menudesat_png extends lime.graphics.Image {}
@:keep @:image("assets/images/momCar.png") @:noCompletion #if display private #end class __ASSET__assets_images_momcar_png extends lime.graphics.Image {}
@:keep @:file("assets/images/momCar.xml") @:noCompletion #if display private #end class __ASSET__assets_images_momcar_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/Mom_Assets.png") @:noCompletion #if display private #end class __ASSET__assets_images_mom_assets_png extends lime.graphics.Image {}
@:keep @:file("assets/images/Mom_Assets.xml") @:noCompletion #if display private #end class __ASSET__assets_images_mom_assets_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/Monster_Assets.png") @:noCompletion #if display private #end class __ASSET__assets_images_monster_assets_png extends lime.graphics.Image {}
@:keep @:file("assets/images/Monster_Assets.xml") @:noCompletion #if display private #end class __ASSET__assets_images_monster_assets_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/newgrounds_logo.png") @:noCompletion #if display private #end class __ASSET__assets_images_newgrounds_logo_png extends lime.graphics.Image {}
@:keep @:image("assets/images/NOTE_assets.png") @:noCompletion #if display private #end class __ASSET__assets_images_note_assets_png extends lime.graphics.Image {}
@:keep @:file("assets/images/NOTE_assets.xml") @:noCompletion #if display private #end class __ASSET__assets_images_note_assets_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/num0.png") @:noCompletion #if display private #end class __ASSET__assets_images_num0_png extends lime.graphics.Image {}
@:keep @:image("assets/images/num1.png") @:noCompletion #if display private #end class __ASSET__assets_images_num1_png extends lime.graphics.Image {}
@:keep @:image("assets/images/num2.png") @:noCompletion #if display private #end class __ASSET__assets_images_num2_png extends lime.graphics.Image {}
@:keep @:image("assets/images/num3.png") @:noCompletion #if display private #end class __ASSET__assets_images_num3_png extends lime.graphics.Image {}
@:keep @:image("assets/images/num4.png") @:noCompletion #if display private #end class __ASSET__assets_images_num4_png extends lime.graphics.Image {}
@:keep @:image("assets/images/num5.png") @:noCompletion #if display private #end class __ASSET__assets_images_num5_png extends lime.graphics.Image {}
@:keep @:image("assets/images/num6.png") @:noCompletion #if display private #end class __ASSET__assets_images_num6_png extends lime.graphics.Image {}
@:keep @:image("assets/images/num7.png") @:noCompletion #if display private #end class __ASSET__assets_images_num7_png extends lime.graphics.Image {}
@:keep @:image("assets/images/num8.png") @:noCompletion #if display private #end class __ASSET__assets_images_num8_png extends lime.graphics.Image {}
@:keep @:image("assets/images/num9.png") @:noCompletion #if display private #end class __ASSET__assets_images_num9_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pauseAlt/bfLol.png") @:noCompletion #if display private #end class __ASSET__assets_images_pausealt_bflol_png extends lime.graphics.Image {}
@:keep @:file("assets/images/pauseAlt/bfLol.xml") @:noCompletion #if display private #end class __ASSET__assets_images_pausealt_bflol_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/pauseAlt/pauseBG.png") @:noCompletion #if display private #end class __ASSET__assets_images_pausealt_pausebg_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pauseAlt/pauseUI.png") @:noCompletion #if display private #end class __ASSET__assets_images_pausealt_pauseui_png extends lime.graphics.Image {}
@:keep @:file("assets/images/pauseAlt/pauseUI.xml") @:noCompletion #if display private #end class __ASSET__assets_images_pausealt_pauseui_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/philly/behindTrain.png") @:noCompletion #if display private #end class __ASSET__assets_images_philly_behindtrain_png extends lime.graphics.Image {}
@:keep @:image("assets/images/philly/city.png") @:noCompletion #if display private #end class __ASSET__assets_images_philly_city_png extends lime.graphics.Image {}
@:keep @:image("assets/images/philly/sky.png") @:noCompletion #if display private #end class __ASSET__assets_images_philly_sky_png extends lime.graphics.Image {}
@:keep @:image("assets/images/philly/street.png") @:noCompletion #if display private #end class __ASSET__assets_images_philly_street_png extends lime.graphics.Image {}
@:keep @:image("assets/images/philly/train.png") @:noCompletion #if display private #end class __ASSET__assets_images_philly_train_png extends lime.graphics.Image {}
@:keep @:image("assets/images/philly/win0.png") @:noCompletion #if display private #end class __ASSET__assets_images_philly_win0_png extends lime.graphics.Image {}
@:keep @:image("assets/images/philly/win1.png") @:noCompletion #if display private #end class __ASSET__assets_images_philly_win1_png extends lime.graphics.Image {}
@:keep @:image("assets/images/philly/win2.png") @:noCompletion #if display private #end class __ASSET__assets_images_philly_win2_png extends lime.graphics.Image {}
@:keep @:image("assets/images/philly/win3.png") @:noCompletion #if display private #end class __ASSET__assets_images_philly_win3_png extends lime.graphics.Image {}
@:keep @:image("assets/images/philly/win4.png") @:noCompletion #if display private #end class __ASSET__assets_images_philly_win4_png extends lime.graphics.Image {}
@:keep @:image("assets/images/Pico_FNF_assetss.png") @:noCompletion #if display private #end class __ASSET__assets_images_pico_fnf_assetss_png extends lime.graphics.Image {}
@:keep @:file("assets/images/Pico_FNF_assetss.xml") @:noCompletion #if display private #end class __ASSET__assets_images_pico_fnf_assetss_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/ready.png") @:noCompletion #if display private #end class __ASSET__assets_images_ready_png extends lime.graphics.Image {}
@:keep @:image("assets/images/restart.png") @:noCompletion #if display private #end class __ASSET__assets_images_restart_png extends lime.graphics.Image {}
@:keep @:image("assets/images/screencapTierImage.png") @:noCompletion #if display private #end class __ASSET__assets_images_screencaptierimage_png extends lime.graphics.Image {}
@:keep @:image("assets/images/set.png") @:noCompletion #if display private #end class __ASSET__assets_images_set_png extends lime.graphics.Image {}
@:keep @:image("assets/images/shit.png") @:noCompletion #if display private #end class __ASSET__assets_images_shit_png extends lime.graphics.Image {}
@:keep @:image("assets/images/sick.png") @:noCompletion #if display private #end class __ASSET__assets_images_sick_png extends lime.graphics.Image {}
@:keep @:image("assets/images/speech_bubble_talking.png") @:noCompletion #if display private #end class __ASSET__assets_images_speech_bubble_talking_png extends lime.graphics.Image {}
@:keep @:file("assets/images/speech_bubble_talking.xml") @:noCompletion #if display private #end class __ASSET__assets_images_speech_bubble_talking_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/spooky_kids_assets.png") @:noCompletion #if display private #end class __ASSET__assets_images_spooky_kids_assets_png extends lime.graphics.Image {}
@:keep @:file("assets/images/spooky_kids_assets.xml") @:noCompletion #if display private #end class __ASSET__assets_images_spooky_kids_assets_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/stageback.png") @:noCompletion #if display private #end class __ASSET__assets_images_stageback_png extends lime.graphics.Image {}
@:keep @:image("assets/images/stagecurtains.png") @:noCompletion #if display private #end class __ASSET__assets_images_stagecurtains_png extends lime.graphics.Image {}
@:keep @:image("assets/images/stagefront.png") @:noCompletion #if display private #end class __ASSET__assets_images_stagefront_png extends lime.graphics.Image {}
@:keep @:image("assets/images/stage_light.png") @:noCompletion #if display private #end class __ASSET__assets_images_stage_light_png extends lime.graphics.Image {}
@:keep @:image("assets/images/titleEnter.png") @:noCompletion #if display private #end class __ASSET__assets_images_titleenter_png extends lime.graphics.Image {}
@:keep @:file("assets/images/titleEnter.xml") @:noCompletion #if display private #end class __ASSET__assets_images_titleenter_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/weeb/animatedEvilSchool.png") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_animatedevilschool_png extends lime.graphics.Image {}
@:keep @:file("assets/images/weeb/animatedEvilSchool.xml") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_animatedevilschool_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/weeb/bfPixel.png") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_bfpixel_png extends lime.graphics.Image {}
@:keep @:file("assets/images/weeb/bfPixel.xml") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_bfpixel_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/weeb/bfPixelsDEAD.png") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_bfpixelsdead_png extends lime.graphics.Image {}
@:keep @:file("assets/images/weeb/bfPixelsDEAD.xml") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_bfpixelsdead_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/weeb/bfPortrait.png") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_bfportrait_png extends lime.graphics.Image {}
@:keep @:file("assets/images/weeb/bfPortrait.xml") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_bfportrait_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/weeb/bgFreaks.png") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_bgfreaks_png extends lime.graphics.Image {}
@:keep @:file("assets/images/weeb/bgFreaks.xml") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_bgfreaks_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/weeb/evilSchoolBG.png") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_evilschoolbg_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weeb/evilSchoolFG.png") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_evilschoolfg_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weeb/gfPixel.png") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_gfpixel_png extends lime.graphics.Image {}
@:keep @:file("assets/images/weeb/gfPixel.xml") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_gfpixel_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/weeb/petals.png") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_petals_png extends lime.graphics.Image {}
@:keep @:file("assets/images/weeb/petals.xml") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_petals_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/weeb/pixelUI/arrowEnds.png") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_arrowends_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weeb/pixelUI/arrows-pixels.png") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_arrows_pixels_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weeb/pixelUI/bad-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_bad_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weeb/pixelUI/combo-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_combo_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weeb/pixelUI/date-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_date_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weeb/pixelUI/dialogueBox-evil.png") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_dialoguebox_evil_png extends lime.graphics.Image {}
@:keep @:file("assets/images/weeb/pixelUI/dialogueBox-evil.xml") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_dialoguebox_evil_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/weeb/pixelUI/dialogueBox-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_dialoguebox_pixel_png extends lime.graphics.Image {}
@:keep @:file("assets/images/weeb/pixelUI/dialogueBox-pixel.xml") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_dialoguebox_pixel_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/weeb/pixelUI/dialogueBox-senpaiMad.png") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_dialoguebox_senpaimad_png extends lime.graphics.Image {}
@:keep @:file("assets/images/weeb/pixelUI/dialogueBox-senpaiMad.xml") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_dialoguebox_senpaimad_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/weeb/pixelUI/good-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_good_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weeb/pixelUI/hand_textbox.png") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_hand_textbox_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weeb/pixelUI/num0-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_num0_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weeb/pixelUI/num1-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_num1_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weeb/pixelUI/num2-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_num2_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weeb/pixelUI/num3-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_num3_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weeb/pixelUI/num4-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_num4_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weeb/pixelUI/num5-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_num5_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weeb/pixelUI/num6-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_num6_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weeb/pixelUI/num7-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_num7_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weeb/pixelUI/num8-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_num8_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weeb/pixelUI/num9-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_num9_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weeb/pixelUI/ready-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_ready_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weeb/pixelUI/set-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_set_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weeb/pixelUI/shit-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_shit_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weeb/pixelUI/sick-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_pixelui_sick_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weeb/senpai.png") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_senpai_png extends lime.graphics.Image {}
@:keep @:file("assets/images/weeb/senpai.xml") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_senpai_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/weeb/senpaiCrazy.png") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_senpaicrazy_png extends lime.graphics.Image {}
@:keep @:file("assets/images/weeb/senpaiCrazy.xml") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_senpaicrazy_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/weeb/senpaiPortrait.png") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_senpaiportrait_png extends lime.graphics.Image {}
@:keep @:file("assets/images/weeb/senpaiPortrait.xml") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_senpaiportrait_xml extends haxe.io.Bytes {}
@:keep @:image("assets/images/weeb/spirit.png") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_spirit_png extends lime.graphics.Image {}
@:keep @:file("assets/images/weeb/spirit.txt") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_spirit_txt extends haxe.io.Bytes {}
@:keep @:image("assets/images/weeb/spiritFaceForward.png") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_spiritfaceforward_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weeb/weebSchool.png") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_weebschool_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weeb/weebSky.png") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_weebsky_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weeb/weebStreet.png") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_weebstreet_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weeb/weebTrees.png") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_weebtrees_png extends lime.graphics.Image {}
@:keep @:file("assets/images/weeb/weebTrees.txt") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_weebtrees_txt extends haxe.io.Bytes {}
@:keep @:image("assets/images/weeb/weebTreesBack.png") @:noCompletion #if display private #end class __ASSET__assets_images_weeb_weebtreesback_png extends lime.graphics.Image {}
@:keep @:image("assets/images/zzzzzzzz.png") @:noCompletion #if display private #end class __ASSET__assets_images_zzzzzzzz_png extends lime.graphics.Image {}
@:keep @:file("assets/music/Blammed_Inst.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_blammed_inst_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/Blammed_Voices.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_blammed_voices_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/Bopeebo_Inst.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_bopeebo_inst_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/Bopeebo_Voices.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_bopeebo_voices_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/breakfast.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_breakfast_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/Cocoa_Inst.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_cocoa_inst_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/Cocoa_Voices.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_cocoa_voices_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/Dadbattle_Inst.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_dadbattle_inst_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/Dadbattle_Voices.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_dadbattle_voices_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/Eggnog_Inst.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_eggnog_inst_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/Eggnog_Voices.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_eggnog_voices_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/freakyMenu.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_freakymenu_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/Fresh_Inst.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_fresh_inst_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/Fresh_Voices.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_fresh_voices_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/gameOver-pixel.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_gameover_pixel_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/gameOver.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_gameover_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/gameOverEnd-pixel.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_gameoverend_pixel_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/gameOverEnd.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_gameoverend_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/High_Inst.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_high_inst_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/High_Voices.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_high_voices_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/Lunchbox.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_lunchbox_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/LunchboxScary.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_lunchboxscary_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/Milf_Inst.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_milf_inst_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/Milf_Voices.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_milf_voices_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/Monster.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_monster_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/Monster_Inst.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_monster_inst_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/Monster_Voices.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_monster_voices_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/music-goes-here.txt") @:noCompletion #if display private #end class __ASSET__assets_music_music_goes_here_txt extends haxe.io.Bytes {}
@:keep @:file("assets/music/Philly_Inst.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_philly_inst_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/Philly_Voices.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_philly_voices_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/Pico_Inst.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_pico_inst_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/Pico_Voices.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_pico_voices_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/Roses_Inst.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_roses_inst_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/Roses_Voices.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_roses_voices_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/Satin-Panties_Inst.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_satin_panties_inst_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/Satin-Panties_Voices.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_satin_panties_voices_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/Senpai_Inst.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_senpai_inst_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/Senpai_Voices.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_senpai_voices_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/South_Inst.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_south_inst_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/South_Voices.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_south_voices_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/Spookeez.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_spookeez_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/Spookeez_Inst.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_spookeez_inst_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/Spookeez_Voices.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_spookeez_voices_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/Test_Inst.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_test_inst_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/Test_Voices.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_test_voices_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/Thorns_Inst.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_thorns_inst_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/Thorns_Voices.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_thorns_voices_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/title.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_title_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/titleShoot.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_titleshoot_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/Tutorial_Inst.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_tutorial_inst_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/Winter-Horrorland_Inst.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_winter_horrorland_inst_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/Winter-Horrorland_Voices.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_winter_horrorland_voices_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/ANGRY.ogg") @:noCompletion #if display private #end class __ASSET__assets_sounds_angry_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/ANGRY_TEXT_BOX.ogg") @:noCompletion #if display private #end class __ASSET__assets_sounds_angry_text_box_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/badnoise1.ogg") @:noCompletion #if display private #end class __ASSET__assets_sounds_badnoise1_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/badnoise2.ogg") @:noCompletion #if display private #end class __ASSET__assets_sounds_badnoise2_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/badnoise3.ogg") @:noCompletion #if display private #end class __ASSET__assets_sounds_badnoise3_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/cancelMenu.ogg") @:noCompletion #if display private #end class __ASSET__assets_sounds_cancelmenu_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/carPass0.ogg") @:noCompletion #if display private #end class __ASSET__assets_sounds_carpass0_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/carPass1.ogg") @:noCompletion #if display private #end class __ASSET__assets_sounds_carpass1_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/clickText.ogg") @:noCompletion #if display private #end class __ASSET__assets_sounds_clicktext_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/confirmMenu.ogg") @:noCompletion #if display private #end class __ASSET__assets_sounds_confirmmenu_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/fnf_loss_sfx-pixel.ogg") @:noCompletion #if display private #end class __ASSET__assets_sounds_fnf_loss_sfx_pixel_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/fnf_loss_sfx.ogg") @:noCompletion #if display private #end class __ASSET__assets_sounds_fnf_loss_sfx_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/freshIntro.ogg") @:noCompletion #if display private #end class __ASSET__assets_sounds_freshintro_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/GF_1.ogg") @:noCompletion #if display private #end class __ASSET__assets_sounds_gf_1_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/GF_2.ogg") @:noCompletion #if display private #end class __ASSET__assets_sounds_gf_2_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/GF_3.ogg") @:noCompletion #if display private #end class __ASSET__assets_sounds_gf_3_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/GF_4.ogg") @:noCompletion #if display private #end class __ASSET__assets_sounds_gf_4_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/intro1-pixel.ogg") @:noCompletion #if display private #end class __ASSET__assets_sounds_intro1_pixel_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/intro1.ogg") @:noCompletion #if display private #end class __ASSET__assets_sounds_intro1_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/intro2-pixel.ogg") @:noCompletion #if display private #end class __ASSET__assets_sounds_intro2_pixel_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/intro2.ogg") @:noCompletion #if display private #end class __ASSET__assets_sounds_intro2_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/intro3-pixel.ogg") @:noCompletion #if display private #end class __ASSET__assets_sounds_intro3_pixel_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/intro3.ogg") @:noCompletion #if display private #end class __ASSET__assets_sounds_intro3_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/introGo-pixel.ogg") @:noCompletion #if display private #end class __ASSET__assets_sounds_introgo_pixel_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/introGo.ogg") @:noCompletion #if display private #end class __ASSET__assets_sounds_introgo_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/Lights_Shut_off.ogg") @:noCompletion #if display private #end class __ASSET__assets_sounds_lights_shut_off_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/Lights_Turn_On.ogg") @:noCompletion #if display private #end class __ASSET__assets_sounds_lights_turn_on_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/missnote1.ogg") @:noCompletion #if display private #end class __ASSET__assets_sounds_missnote1_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/missnote2.ogg") @:noCompletion #if display private #end class __ASSET__assets_sounds_missnote2_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/missnote3.ogg") @:noCompletion #if display private #end class __ASSET__assets_sounds_missnote3_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/pixelText.ogg") @:noCompletion #if display private #end class __ASSET__assets_sounds_pixeltext_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/scrollMenu.ogg") @:noCompletion #if display private #end class __ASSET__assets_sounds_scrollmenu_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/Senpai_Dies.ogg") @:noCompletion #if display private #end class __ASSET__assets_sounds_senpai_dies_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/sounds-go-here.txt") @:noCompletion #if display private #end class __ASSET__assets_sounds_sounds_go_here_txt extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/soundTest.ogg") @:noCompletion #if display private #end class __ASSET__assets_sounds_soundtest_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/thunder_1.ogg") @:noCompletion #if display private #end class __ASSET__assets_sounds_thunder_1_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/thunder_2.ogg") @:noCompletion #if display private #end class __ASSET__assets_sounds_thunder_2_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/train_passes.ogg") @:noCompletion #if display private #end class __ASSET__assets_sounds_train_passes_ogg extends haxe.io.Bytes {}
@:keep @:file("C:/bin/winBin/haxe_20201231082044_5e33a78aa/haxe/lib/flixel/4,10,0/assets/sounds/beep.mp3") @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_mp3 extends haxe.io.Bytes {}
@:keep @:file("C:/bin/winBin/haxe_20201231082044_5e33a78aa/haxe/lib/flixel/4,10,0/assets/sounds/flixel.mp3") @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_mp3 extends haxe.io.Bytes {}
@:keep @:file("C:/bin/winBin/haxe_20201231082044_5e33a78aa/haxe/lib/flixel/4,10,0/assets/sounds/beep.ogg") @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_ogg extends haxe.io.Bytes {}
@:keep @:file("C:/bin/winBin/haxe_20201231082044_5e33a78aa/haxe/lib/flixel/4,10,0/assets/sounds/flixel.ogg") @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends haxe.io.Bytes {}
@:keep @:font("export/html5/obj/webfont/nokiafc22.ttf") @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font {}
@:keep @:font("export/html5/obj/webfont/monsterrat.ttf") @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font {}
@:keep @:image("C:/bin/winBin/haxe_20201231082044_5e33a78aa/haxe/lib/flixel/4,10,0/assets/images/ui/button.png") @:noCompletion #if display private #end class __ASSET__flixel_images_ui_button_png extends lime.graphics.Image {}
@:keep @:image("C:/bin/winBin/haxe_20201231082044_5e33a78aa/haxe/lib/flixel/4,10,0/assets/images/logo/default.png") @:noCompletion #if display private #end class __ASSET__flixel_images_logo_default_png extends lime.graphics.Image {}
@:keep @:file("") @:noCompletion #if display private #end class __ASSET__manifest_default_json extends haxe.io.Bytes {}



#else

@:keep @:expose('__ASSET__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "flixel/fonts/nokiafc22"; #else ascender = 2048; descender = -512; height = 2816; numGlyphs = 172; underlinePosition = -640; underlineThickness = 256; unitsPerEM = 2048; #end name = "Nokia Cellphone FC Small"; super (); }}
@:keep @:expose('__ASSET__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "flixel/fonts/monsterrat"; #else ascender = 968; descender = -251; height = 1219; numGlyphs = 263; underlinePosition = -150; underlineThickness = 50; unitsPerEM = 1000; #end name = "Monsterrat"; super (); }}


#end

#if (openfl && !flash)

#if html5
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_nokiafc22_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_monsterrat_ttf ()); super (); }}

#else
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_nokiafc22_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_monsterrat_ttf ()); super (); }}

#end

#end
#end

#end
