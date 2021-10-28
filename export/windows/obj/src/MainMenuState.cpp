#include <hxcpp.h>

#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_10_new,"MainMenuState","new",0x83a7c9cb,"MainMenuState.new","MainMenuState.hx",10,0x0e5db805)
static const ::String _hx_array_data_205e8859_1[] = {
	HX_("storymode",d8,85,a8,3d),HX_("freeplay",a0,90,86,22),HX_("credits",1a,0e,5e,13),HX_("options",5e,33,fe,df),
};
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_19_create,"MainMenuState","create",0x6b76e271,"MainMenuState.create","MainMenuState.hx",19,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_69_update,"MainMenuState","update",0x766d017e,"MainMenuState.update","MainMenuState.hx",69,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_64_update,"MainMenuState","update",0x766d017e,"MainMenuState.update","MainMenuState.hx",64,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_90_scrollMenu,"MainMenuState","scrollMenu",0xdc3bae41,"MainMenuState.scrollMenu","MainMenuState.hx",90,0x0e5db805)

void MainMenuState_obj::__construct( ::Dynamic MaxSize){
            	HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_10_new)
HXLINE(  15)		this->funnyTriangle =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXLINE(  14)		this->bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXLINE(  13)		this->menuShit = ::Array_obj< ::String >::fromData( _hx_array_data_205e8859_1,4);
HXLINE(  10)		super::__construct(MaxSize);
            	}

Dynamic MainMenuState_obj::__CreateEmpty() { return new MainMenuState_obj; }

void *MainMenuState_obj::_hx_vtable = 0;

Dynamic MainMenuState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MainMenuState_obj > _hx_result = new MainMenuState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MainMenuState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6915cded) {
		if (inClassId<=(int)0x62817b24) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x62817b24;
		} else {
			return inClassId==(int)0x6915cded;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void MainMenuState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_19_create)
HXLINE(  20)		this->super::create();
HXLINE(  21)		this->menuItems =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,100);
HXLINE(  22)		 ::flixel::FlxSprite _hx_tmp = this->bg;
HXDLIN(  22)		_hx_tmp->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menuBG",24,65,6d,05)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),null()),null(),null(),null(),null(),null());
HXLINE(  23)		this->bg->screenCenter(null());
HXLINE(  24)		this->bg->set_antialiasing(true);
HXLINE(  25)		this->bg->scrollFactor->set(null(),null());
HXLINE(  26)		this->add(this->bg);
HXLINE(  27)		::String library = null();
HXDLIN(  27)		::String tex = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("funnyTriangle",32,cf,52,f2)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),null());
HXDLIN(  27)		 ::flixel::graphics::frames::FlxAtlasFrames tex1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("funnyTriangle",32,cf,52,f2)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE(  28)		this->funnyTriangle->set_frames(tex1);
HXLINE(  29)		this->funnyTriangle->set_antialiasing(true);
HXLINE(  30)		this->funnyTriangle->animation->addByPrefix(HX_("0",30,00,00,00),HX_("story mode portrait",4d,0c,01,56),24,true,null(),null());
HXLINE(  31)		this->funnyTriangle->animation->addByPrefix(HX_("1",31,00,00,00),HX_("freeplay portrait",db,9c,8e,85),24,true,null(),null());
HXLINE(  32)		this->funnyTriangle->animation->addByPrefix(HX_("2",32,00,00,00),HX_("credits port",47,a7,65,13),24,true,null(),null());
HXLINE(  33)		this->funnyTriangle->animation->addByPrefix(HX_("3",33,00,00,00),HX_("options port",83,eb,63,e7),24,true,null(),null());
HXLINE(  34)		 ::flixel::FlxSprite _hx_tmp1 = this->funnyTriangle;
HXDLIN(  34)		_hx_tmp1->setGraphicSize(::Std_obj::_hx_int((this->funnyTriangle->get_width() * ((Float)1.5))),0);
HXLINE(  35)		this->funnyTriangle->updateHitbox();
HXLINE(  36)		this->funnyTriangle->set_x(( (Float)(25) ));
HXLINE(  37)		 ::flixel::FlxSprite _hx_tmp2 = this->funnyTriangle;
HXDLIN(  37)		int _hx_tmp3 = ::flixel::FlxG_obj::height;
HXDLIN(  37)		_hx_tmp2->set_y(((( (Float)(_hx_tmp3) ) - this->funnyTriangle->get_height()) - ( (Float)(25) )));
HXLINE(  39)		this->add(this->funnyTriangle);
HXLINE(  40)		 ::flixel::animation::FlxAnimationController _hx_tmp4 = this->funnyTriangle->animation;
HXDLIN(  40)		_hx_tmp4->play(::Std_obj::string(this->curSelected),null(),null(),null());
HXLINE(  42)		{
HXLINE(  42)			int _g = 0;
HXDLIN(  42)			int _g1 = this->menuShit->length;
HXDLIN(  42)			while((_g < _g1)){
HXLINE(  42)				_g = (_g + 1);
HXDLIN(  42)				int i = (_g - 1);
HXLINE(  45)				 ::flixel::FlxSprite menuItem =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,550,(( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(6) )),null());
HXLINE(  46)				::String library = null();
HXDLIN(  46)				::String tex = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("funkyMenu",ec,43,55,b5)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),null());
HXDLIN(  46)				 ::flixel::graphics::frames::FlxAtlasFrames tex1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("funkyMenu",ec,43,55,b5)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE(  47)				menuItem->set_antialiasing(true);
HXLINE(  48)				menuItem->set_frames(tex1);
HXLINE(  49)				menuItem->animation->addByPrefix(HX_("idle",14,a7,b3,45),this->menuShit->__get(i),24,null(),null(),null());
HXLINE(  50)				menuItem->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE(  51)				menuItem->setGraphicSize(0,100);
HXLINE(  52)				 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  52)				::String _hx_tmp1 = ::Std_obj::string((menuItem->get_height() * ((Float)1.5)));
HXDLIN(  52)				_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/MainMenuState.hx",f9,ee,86,cf),52,HX_("MainMenuState",59,88,5e,20),HX_("create",fc,66,0f,7c)));
HXLINE(  53)				menuItem->set_y((menuItem->y + (i * 100)));
HXLINE(  54)				menuItem->set_x((menuItem->x + (i * 120)));
HXLINE(  56)				menuItem->updateHitbox();
HXLINE(  57)				menuItem->ID = i;
HXLINE(  58)				this->menuItems->add(menuItem).StaticCast<  ::flixel::FlxSprite >();
            			}
            		}
HXLINE(  60)		this->add(this->menuItems);
            	}


void MainMenuState_obj::update(Float elapsed){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::MainMenuState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite spr){
            			HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_69_update)
HXLINE(  69)			if ((spr->ID == _gthis->curSelected)) {
HXLINE(  71)				spr->set_alpha(( (Float)(1) ));
            			}
            			else {
HXLINE(  75)				spr->set_alpha(((Float)0.4));
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_64_update)
HXDLIN(  64)		 ::MainMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  65)		this->super::update(elapsed);
HXLINE(  67)		this->menuItems->forEach( ::Dynamic(new _hx_Closure_0(_gthis)),null());
HXLINE(  79)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  79)		if (_this->keyManager->checkStatus(38,_this->status)) {
HXLINE(  81)			this->scrollMenu(-1);
            		}
            		else {
HXLINE(  83)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  83)			if (_this->keyManager->checkStatus(40,_this->status)) {
HXLINE(  85)				this->scrollMenu(1);
            			}
            		}
            	}


void MainMenuState_obj::scrollMenu(::hx::Null< int >  __o_huh){
            		int huh = __o_huh.Default(0);
            	HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_90_scrollMenu)
HXLINE(  91)		 ::MainMenuState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  91)		_hx_tmp->curSelected = (_hx_tmp->curSelected + huh);
HXLINE(  92)		if ((this->curSelected >= this->menuItems->length)) {
HXLINE(  93)			this->curSelected = 0;
            		}
HXLINE(  94)		if ((this->curSelected < 0)) {
HXLINE(  95)			this->curSelected = (this->menuItems->length - 1);
            		}
HXLINE(  96)		 ::flixel::animation::FlxAnimationController _hx_tmp1 = this->funnyTriangle->animation;
HXDLIN(  96)		_hx_tmp1->play(::Std_obj::string(this->curSelected),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(MainMenuState_obj,scrollMenu,(void))


::hx::ObjectPtr< MainMenuState_obj > MainMenuState_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< MainMenuState_obj > __this = new MainMenuState_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< MainMenuState_obj > MainMenuState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	MainMenuState_obj *__this = (MainMenuState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MainMenuState_obj), true, "MainMenuState"));
	*(void **)__this = MainMenuState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

MainMenuState_obj::MainMenuState_obj()
{
}

void MainMenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MainMenuState);
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(menuShit,"menuShit");
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(funnyTriangle,"funnyTriangle");
	HX_MARK_MEMBER_NAME(menuItems,"menuItems");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MainMenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(menuShit,"menuShit");
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(funnyTriangle,"funnyTriangle");
	HX_VISIT_MEMBER_NAME(menuItems,"menuItems");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MainMenuState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return ::hx::Val( bg ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"menuShit") ) { return ::hx::Val( menuShit ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"menuItems") ) { return ::hx::Val( menuItems ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scrollMenu") ) { return ::hx::Val( scrollMenu_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"funnyTriangle") ) { return ::hx::Val( funnyTriangle ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MainMenuState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"menuShit") ) { menuShit=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"menuItems") ) { menuItems=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"funnyTriangle") ) { funnyTriangle=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MainMenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("menuShit",ff,fc,c1,52));
	outFields->push(HX_("bg",c5,55,00,00));
	outFields->push(HX_("funnyTriangle",32,cf,52,f2));
	outFields->push(HX_("menuItems",e1,15,e5,5c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MainMenuState_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(MainMenuState_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(MainMenuState_obj,menuShit),HX_("menuShit",ff,fc,c1,52)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(MainMenuState_obj,bg),HX_("bg",c5,55,00,00)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(MainMenuState_obj,funnyTriangle),HX_("funnyTriangle",32,cf,52,f2)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(MainMenuState_obj,menuItems),HX_("menuItems",e1,15,e5,5c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MainMenuState_obj_sStaticStorageInfo = 0;
#endif

static ::String MainMenuState_obj_sMemberFields[] = {
	HX_("curSelected",fb,eb,ab,32),
	HX_("menuShit",ff,fc,c1,52),
	HX_("bg",c5,55,00,00),
	HX_("funnyTriangle",32,cf,52,f2),
	HX_("menuItems",e1,15,e5,5c),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("scrollMenu",4c,d4,18,06),
	::String(null()) };

::hx::Class MainMenuState_obj::__mClass;

void MainMenuState_obj::__register()
{
	MainMenuState_obj _hx_dummy;
	MainMenuState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MainMenuState",59,88,5e,20);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MainMenuState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MainMenuState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MainMenuState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MainMenuState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

