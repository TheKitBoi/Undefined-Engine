#include <hxcpp.h>

#ifndef INCLUDED_away3d_tools_utils_TextureUtils
#include <away3d/tools/utils/TextureUtils.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_0732d738f50d0223_10_isBitmapDataValid,"away3d.tools.utils.TextureUtils","isBitmapDataValid",0x5b2ca7e0,"away3d.tools.utils.TextureUtils.isBitmapDataValid","away3d/tools/utils/TextureUtils.hx",10,0xa315d626)
HX_LOCAL_STACK_FRAME(_hx_pos_0732d738f50d0223_19_isDimensionValid,"away3d.tools.utils.TextureUtils","isDimensionValid",0x57339af9,"away3d.tools.utils.TextureUtils.isDimensionValid","away3d/tools/utils/TextureUtils.hx",19,0xa315d626)
HX_LOCAL_STACK_FRAME(_hx_pos_0732d738f50d0223_24_isPowerOfTwo,"away3d.tools.utils.TextureUtils","isPowerOfTwo",0x9ca62433,"away3d.tools.utils.TextureUtils.isPowerOfTwo","away3d/tools/utils/TextureUtils.hx",24,0xa315d626)
HX_LOCAL_STACK_FRAME(_hx_pos_0732d738f50d0223_28_getBestPowerOf2,"away3d.tools.utils.TextureUtils","getBestPowerOf2",0x1abc6397,"away3d.tools.utils.TextureUtils.getBestPowerOf2","away3d/tools/utils/TextureUtils.hx",28,0xa315d626)
HX_LOCAL_STACK_FRAME(_hx_pos_0732d738f50d0223_7_boot,"away3d.tools.utils.TextureUtils","boot",0xdff7606b,"away3d.tools.utils.TextureUtils.boot","away3d/tools/utils/TextureUtils.hx",7,0xa315d626)
namespace away3d{
namespace tools{
namespace utils{

void TextureUtils_obj::__construct() { }

Dynamic TextureUtils_obj::__CreateEmpty() { return new TextureUtils_obj; }

void *TextureUtils_obj::_hx_vtable = 0;

Dynamic TextureUtils_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextureUtils_obj > _hx_result = new TextureUtils_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TextureUtils_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x17e9cd2b;
}

int TextureUtils_obj::MAX_SIZE;

bool TextureUtils_obj::isBitmapDataValid( ::openfl::display::BitmapData bitmapData){
            	HX_STACKFRAME(&_hx_pos_0732d738f50d0223_10_isBitmapDataValid)
HXLINE(  11)		if (::hx::IsNull( bitmapData )) {
HXLINE(  12)			return true;
            		}
HXLINE(  14)		if (::away3d::tools::utils::TextureUtils_obj::isDimensionValid(bitmapData->width)) {
HXLINE(  14)			return ::away3d::tools::utils::TextureUtils_obj::isDimensionValid(bitmapData->height);
            		}
            		else {
HXLINE(  14)			return false;
            		}
HXDLIN(  14)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextureUtils_obj,isBitmapDataValid,return )

bool TextureUtils_obj::isDimensionValid(int d){
            	HX_STACKFRAME(&_hx_pos_0732d738f50d0223_19_isDimensionValid)
HXDLIN(  19)		bool _hx_tmp;
HXDLIN(  19)		if ((d >= 1)) {
HXDLIN(  19)			_hx_tmp = (d <= 4096);
            		}
            		else {
HXDLIN(  19)			_hx_tmp = false;
            		}
HXDLIN(  19)		if (_hx_tmp) {
HXDLIN(  19)			return ::away3d::tools::utils::TextureUtils_obj::isPowerOfTwo(d);
            		}
            		else {
HXDLIN(  19)			return false;
            		}
HXDLIN(  19)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextureUtils_obj,isDimensionValid,return )

bool TextureUtils_obj::isPowerOfTwo(int value){
            	HX_STACKFRAME(&_hx_pos_0732d738f50d0223_24_isPowerOfTwo)
HXDLIN(  24)		if ((value > 0)) {
HXDLIN(  24)			return ((value & -(value)) == value);
            		}
            		else {
HXDLIN(  24)			return false;
            		}
HXDLIN(  24)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextureUtils_obj,isPowerOfTwo,return )

int TextureUtils_obj::getBestPowerOf2(int value){
            	HX_STACKFRAME(&_hx_pos_0732d738f50d0223_28_getBestPowerOf2)
HXLINE(  29)		int p = 1;
HXLINE(  31)		while((p < value)){
HXLINE(  32)			p = (p << 1);
            		}
HXLINE(  34)		if ((p > 4096)) {
HXLINE(  35)			p = 4096;
            		}
HXLINE(  37)		return p;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextureUtils_obj,getBestPowerOf2,return )


TextureUtils_obj::TextureUtils_obj()
{
}

bool TextureUtils_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"isPowerOfTwo") ) { outValue = isPowerOfTwo_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getBestPowerOf2") ) { outValue = getBestPowerOf2_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"isDimensionValid") ) { outValue = isDimensionValid_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"isBitmapDataValid") ) { outValue = isBitmapDataValid_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TextureUtils_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo TextureUtils_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &TextureUtils_obj::MAX_SIZE,HX_("MAX_SIZE",9c,bf,ac,dc)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void TextureUtils_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureUtils_obj::MAX_SIZE,"MAX_SIZE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextureUtils_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureUtils_obj::MAX_SIZE,"MAX_SIZE");
};

#endif

::hx::Class TextureUtils_obj::__mClass;

static ::String TextureUtils_obj_sStaticFields[] = {
	HX_("MAX_SIZE",9c,bf,ac,dc),
	HX_("isBitmapDataValid",b9,73,aa,1a),
	HX_("isDimensionValid",40,cd,21,68),
	HX_("isPowerOfTwo",fa,e6,cd,bc),
	HX_("getBestPowerOf2",30,57,e3,0b),
	::String(null())
};

void TextureUtils_obj::__register()
{
	TextureUtils_obj _hx_dummy;
	TextureUtils_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.tools.utils.TextureUtils",d5,ee,17,c4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextureUtils_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TextureUtils_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TextureUtils_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< TextureUtils_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextureUtils_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextureUtils_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextureUtils_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TextureUtils_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_0732d738f50d0223_7_boot)
HXDLIN(   7)		MAX_SIZE = 4096;
            	}
}

} // end namespace away3d
} // end namespace tools
} // end namespace utils
