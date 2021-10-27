#include <hxcpp.h>

#ifndef INCLUDED_StoryMenuState
#include <StoryMenuState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f93022dfbe651d27_5_new,"StoryMenuState","new",0xec20accf,"StoryMenuState.new","StoryMenuState.hx",5,0xd8e12181)
HX_LOCAL_STACK_FRAME(_hx_pos_f93022dfbe651d27_9_create,"StoryMenuState","create",0xac12b9ed,"StoryMenuState.create","StoryMenuState.hx",9,0xd8e12181)
HX_LOCAL_STACK_FRAME(_hx_pos_f93022dfbe651d27_14_update,"StoryMenuState","update",0xb708d8fa,"StoryMenuState.update","StoryMenuState.hx",14,0xd8e12181)

void StoryMenuState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_f93022dfbe651d27_5_new)
HXDLIN(   5)		super::__construct(MaxSize);
            	}

Dynamic StoryMenuState_obj::__CreateEmpty() { return new StoryMenuState_obj; }

void *StoryMenuState_obj::_hx_vtable = 0;

Dynamic StoryMenuState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StoryMenuState_obj > _hx_result = new StoryMenuState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool StoryMenuState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x244c1c1d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x244c1c1d;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void StoryMenuState_obj::create(){
            	HX_STACKFRAME(&_hx_pos_f93022dfbe651d27_9_create)
HXDLIN(   9)		this->super::create();
            	}


void StoryMenuState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_f93022dfbe651d27_14_update)
HXDLIN(  14)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< StoryMenuState_obj > StoryMenuState_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< StoryMenuState_obj > __this = new StoryMenuState_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< StoryMenuState_obj > StoryMenuState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	StoryMenuState_obj *__this = (StoryMenuState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StoryMenuState_obj), true, "StoryMenuState"));
	*(void **)__this = StoryMenuState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

StoryMenuState_obj::StoryMenuState_obj()
{
}

::hx::Val StoryMenuState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *StoryMenuState_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *StoryMenuState_obj_sStaticStorageInfo = 0;
#endif

static ::String StoryMenuState_obj_sMemberFields[] = {
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class StoryMenuState_obj::__mClass;

void StoryMenuState_obj::__register()
{
	StoryMenuState_obj _hx_dummy;
	StoryMenuState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("StoryMenuState",5d,99,60,42);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StoryMenuState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StoryMenuState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StoryMenuState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StoryMenuState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

