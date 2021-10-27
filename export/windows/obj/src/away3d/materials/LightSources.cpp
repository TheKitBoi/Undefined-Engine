#include <hxcpp.h>

#ifndef INCLUDED_away3d_materials_LightSources
#include <away3d/materials/LightSources.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_504c20d6bd1a481f_20_boot,"away3d.materials.LightSources","boot",0xffa40acd,"away3d.materials.LightSources.boot","away3d/materials/LightSources.hx",20,0xe0e703e9)
HX_LOCAL_STACK_FRAME(_hx_pos_504c20d6bd1a481f_26_boot,"away3d.materials.LightSources","boot",0xffa40acd,"away3d.materials.LightSources.boot","away3d/materials/LightSources.hx",26,0xe0e703e9)
HX_LOCAL_STACK_FRAME(_hx_pos_504c20d6bd1a481f_32_boot,"away3d.materials.LightSources","boot",0xffa40acd,"away3d.materials.LightSources.boot","away3d/materials/LightSources.hx",32,0xe0e703e9)
namespace away3d{
namespace materials{

void LightSources_obj::__construct() { }

Dynamic LightSources_obj::__CreateEmpty() { return new LightSources_obj; }

void *LightSources_obj::_hx_vtable = 0;

Dynamic LightSources_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LightSources_obj > _hx_result = new LightSources_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LightSources_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0258e9e7;
}

int LightSources_obj::LIGHTS;

int LightSources_obj::PROBES;

int LightSources_obj::ALL;


LightSources_obj::LightSources_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *LightSources_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo LightSources_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &LightSources_obj::LIGHTS,HX_("LIGHTS",dd,d6,84,9a)},
	{::hx::fsInt,(void *) &LightSources_obj::PROBES,HX_("PROBES",43,9b,d2,67)},
	{::hx::fsInt,(void *) &LightSources_obj::ALL,HX_("ALL",01,95,31,00)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void LightSources_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LightSources_obj::LIGHTS,"LIGHTS");
	HX_MARK_MEMBER_NAME(LightSources_obj::PROBES,"PROBES");
	HX_MARK_MEMBER_NAME(LightSources_obj::ALL,"ALL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LightSources_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LightSources_obj::LIGHTS,"LIGHTS");
	HX_VISIT_MEMBER_NAME(LightSources_obj::PROBES,"PROBES");
	HX_VISIT_MEMBER_NAME(LightSources_obj::ALL,"ALL");
};

#endif

::hx::Class LightSources_obj::__mClass;

static ::String LightSources_obj_sStaticFields[] = {
	HX_("LIGHTS",dd,d6,84,9a),
	HX_("PROBES",43,9b,d2,67),
	HX_("ALL",01,95,31,00),
	::String(null())
};

void LightSources_obj::__register()
{
	LightSources_obj _hx_dummy;
	LightSources_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.materials.LightSources",b3,5f,af,dc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = LightSources_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LightSources_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< LightSources_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LightSources_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LightSources_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LightSources_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void LightSources_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_504c20d6bd1a481f_20_boot)
HXDLIN(  20)		LIGHTS = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_504c20d6bd1a481f_26_boot)
HXDLIN(  26)		PROBES = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_504c20d6bd1a481f_32_boot)
HXDLIN(  32)		ALL = 3;
            	}
}

} // end namespace away3d
} // end namespace materials
