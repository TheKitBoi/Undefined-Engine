#include <hxcpp.h>

#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_8_boot,"Controls","boot",0x44b4d10a,"Controls.boot","Controls.hx",8,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_9_boot,"Controls","boot",0x44b4d10a,"Controls.boot","Controls.hx",9,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_10_boot,"Controls","boot",0x44b4d10a,"Controls.boot","Controls.hx",10,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_11_boot,"Controls","boot",0x44b4d10a,"Controls.boot","Controls.hx",11,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_12_boot,"Controls","boot",0x44b4d10a,"Controls.boot","Controls.hx",12,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_13_boot,"Controls","boot",0x44b4d10a,"Controls.boot","Controls.hx",13,0x0ab041e8)

void Controls_obj::__construct() { }

Dynamic Controls_obj::__CreateEmpty() { return new Controls_obj; }

void *Controls_obj::_hx_vtable = 0;

Dynamic Controls_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Controls_obj > _hx_result = new Controls_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Controls_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6cff3556;
}

bool Controls_obj::up;

bool Controls_obj::down;

bool Controls_obj::left;

bool Controls_obj::right;

bool Controls_obj::confirmMenu;

bool Controls_obj::confirmDialogue;


Controls_obj::Controls_obj()
{
}

bool Controls_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"up") ) { outValue = ( up ); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"down") ) { outValue = ( down ); return true; }
		if (HX_FIELD_EQ(inName,"left") ) { outValue = ( left ); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { outValue = ( right ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"confirmMenu") ) { outValue = ( confirmMenu ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"confirmDialogue") ) { outValue = ( confirmDialogue ); return true; }
	}
	return false;
}

bool Controls_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"up") ) { up=ioValue.Cast< bool >(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"down") ) { down=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"left") ) { left=ioValue.Cast< bool >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { right=ioValue.Cast< bool >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"confirmMenu") ) { confirmMenu=ioValue.Cast< bool >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"confirmDialogue") ) { confirmDialogue=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Controls_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Controls_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &Controls_obj::up,HX_("up",5b,66,00,00)},
	{::hx::fsBool,(void *) &Controls_obj::down,HX_("down",62,f8,6d,42)},
	{::hx::fsBool,(void *) &Controls_obj::left,HX_("left",07,08,b0,47)},
	{::hx::fsBool,(void *) &Controls_obj::right,HX_("right",dc,0b,64,e9)},
	{::hx::fsBool,(void *) &Controls_obj::confirmMenu,HX_("confirmMenu",bf,8e,fe,3c)},
	{::hx::fsBool,(void *) &Controls_obj::confirmDialogue,HX_("confirmDialogue",38,86,e4,ff)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Controls_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Controls_obj::up,"up");
	HX_MARK_MEMBER_NAME(Controls_obj::down,"down");
	HX_MARK_MEMBER_NAME(Controls_obj::left,"left");
	HX_MARK_MEMBER_NAME(Controls_obj::right,"right");
	HX_MARK_MEMBER_NAME(Controls_obj::confirmMenu,"confirmMenu");
	HX_MARK_MEMBER_NAME(Controls_obj::confirmDialogue,"confirmDialogue");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Controls_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Controls_obj::up,"up");
	HX_VISIT_MEMBER_NAME(Controls_obj::down,"down");
	HX_VISIT_MEMBER_NAME(Controls_obj::left,"left");
	HX_VISIT_MEMBER_NAME(Controls_obj::right,"right");
	HX_VISIT_MEMBER_NAME(Controls_obj::confirmMenu,"confirmMenu");
	HX_VISIT_MEMBER_NAME(Controls_obj::confirmDialogue,"confirmDialogue");
};

#endif

::hx::Class Controls_obj::__mClass;

static ::String Controls_obj_sStaticFields[] = {
	HX_("up",5b,66,00,00),
	HX_("down",62,f8,6d,42),
	HX_("left",07,08,b0,47),
	HX_("right",dc,0b,64,e9),
	HX_("confirmMenu",bf,8e,fe,3c),
	HX_("confirmDialogue",38,86,e4,ff),
	::String(null())
};

void Controls_obj::__register()
{
	Controls_obj _hx_dummy;
	Controls_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Controls",96,42,6e,11);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Controls_obj::__GetStatic;
	__mClass->mSetStaticField = &Controls_obj::__SetStatic;
	__mClass->mMarkFunc = Controls_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Controls_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Controls_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Controls_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Controls_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Controls_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Controls_obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		bool _hx_run(){
            			HX_STACKFRAME(&_hx_pos_948b5caa279cd923_8_boot)
HXDLIN(   8)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(   8)			return _this->keyManager->checkStatus(87,_this->status);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_8_boot)
HXDLIN(   8)		up = ( (bool)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		bool _hx_run(){
            			HX_STACKFRAME(&_hx_pos_948b5caa279cd923_9_boot)
HXDLIN(   9)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(   9)			return _this->keyManager->checkStatus(83,_this->status);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_9_boot)
HXDLIN(   9)		down = ( (bool)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		bool _hx_run(){
            			HX_STACKFRAME(&_hx_pos_948b5caa279cd923_10_boot)
HXDLIN(  10)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  10)			return _this->keyManager->checkStatus(65,_this->status);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_10_boot)
HXDLIN(  10)		left = ( (bool)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		bool _hx_run(){
            			HX_STACKFRAME(&_hx_pos_948b5caa279cd923_11_boot)
HXDLIN(  11)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  11)			return _this->keyManager->checkStatus(68,_this->status);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_11_boot)
HXDLIN(  11)		right = ( (bool)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		bool _hx_run(){
            			HX_STACKFRAME(&_hx_pos_948b5caa279cd923_12_boot)
HXDLIN(  12)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  12)			return _this->keyManager->checkStatus(13,_this->status);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_12_boot)
HXDLIN(  12)		confirmMenu = ( (bool)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		bool _hx_run(){
            			HX_STACKFRAME(&_hx_pos_948b5caa279cd923_13_boot)
HXDLIN(  13)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  13)			return _this->keyManager->checkStatus(32,_this->status);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_13_boot)
HXDLIN(  13)		confirmDialogue = ( (bool)( ::Dynamic(new _hx_Closure_0())()) );
            	}
}

