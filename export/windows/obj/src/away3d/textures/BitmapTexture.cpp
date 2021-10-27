#include <hxcpp.h>

#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_materials_utils_MipmapGenerator
#include <away3d/materials/utils/MipmapGenerator.h>
#endif
#ifndef INCLUDED_away3d_textures_BitmapTexture
#include <away3d/textures/BitmapTexture.h>
#endif
#ifndef INCLUDED_away3d_textures_Texture2DBase
#include <away3d/textures/Texture2DBase.h>
#endif
#ifndef INCLUDED_away3d_textures_TextureProxyBase
#include <away3d/textures/TextureProxyBase.h>
#endif
#ifndef INCLUDED_away3d_tools_utils_TextureUtils
#include <away3d/tools/utils/TextureUtils.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_Texture
#include <openfl/display3D/textures/Texture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8eb7f16227336898_24_new,"away3d.textures.BitmapTexture","new",0x25aa0b17,"away3d.textures.BitmapTexture.new","away3d/textures/BitmapTexture.hx",24,0xcd7a5c19)
HX_LOCAL_STACK_FRAME(_hx_pos_8eb7f16227336898_35_get_bitmapData,"away3d.textures.BitmapTexture","get_bitmapData",0xd6cda0ab,"away3d.textures.BitmapTexture.get_bitmapData","away3d/textures/BitmapTexture.hx",35,0xcd7a5c19)
HX_LOCAL_STACK_FRAME(_hx_pos_8eb7f16227336898_39_set_bitmapData,"away3d.textures.BitmapTexture","set_bitmapData",0xf6ed891f,"away3d.textures.BitmapTexture.set_bitmapData","away3d/textures/BitmapTexture.hx",39,0xcd7a5c19)
HX_LOCAL_STACK_FRAME(_hx_pos_8eb7f16227336898_58_uploadContent,"away3d.textures.BitmapTexture","uploadContent",0x7ef002af,"away3d.textures.BitmapTexture.uploadContent","away3d/textures/BitmapTexture.hx",58,0xcd7a5c19)
HX_LOCAL_STACK_FRAME(_hx_pos_8eb7f16227336898_65_getMipMapHolder,"away3d.textures.BitmapTexture","getMipMapHolder",0xaf92cde1,"away3d.textures.BitmapTexture.getMipMapHolder","away3d/textures/BitmapTexture.hx",65,0xcd7a5c19)
HX_LOCAL_STACK_FRAME(_hx_pos_8eb7f16227336898_92_freeMipMapHolder,"away3d.textures.BitmapTexture","freeMipMapHolder",0x41a0e0a9,"away3d.textures.BitmapTexture.freeMipMapHolder","away3d/textures/BitmapTexture.hx",92,0xcd7a5c19)
HX_LOCAL_STACK_FRAME(_hx_pos_8eb7f16227336898_103_dispose,"away3d.textures.BitmapTexture","dispose",0xdf9be2d6,"away3d.textures.BitmapTexture.dispose","away3d/textures/BitmapTexture.hx",103,0xcd7a5c19)
HX_LOCAL_STACK_FRAME(_hx_pos_8eb7f16227336898_16_boot,"away3d.textures.BitmapTexture","boot",0xc738a99b,"away3d.textures.BitmapTexture.boot","away3d/textures/BitmapTexture.hx",16,0xcd7a5c19)
HX_LOCAL_STACK_FRAME(_hx_pos_8eb7f16227336898_17_boot,"away3d.textures.BitmapTexture","boot",0xc738a99b,"away3d.textures.BitmapTexture.boot","away3d/textures/BitmapTexture.hx",17,0xcd7a5c19)
namespace away3d{
namespace textures{

void BitmapTexture_obj::__construct( ::openfl::display::BitmapData bitmapData,::hx::Null< bool >  __o_generateMipmaps){
            		bool generateMipmaps = __o_generateMipmaps.Default(true);
            	HX_STACKFRAME(&_hx_pos_8eb7f16227336898_24_new)
HXLINE(  25)		super::__construct();
HXLINE(  27)		this->set_bitmapData(bitmapData);
HXLINE(  28)		this->_generateMipmaps = (this->_hasMipmaps = generateMipmaps);
            	}

Dynamic BitmapTexture_obj::__CreateEmpty() { return new BitmapTexture_obj; }

void *BitmapTexture_obj::_hx_vtable = 0;

Dynamic BitmapTexture_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BitmapTexture_obj > _hx_result = new BitmapTexture_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool BitmapTexture_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37f46043) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x077d8e75) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x077d8e75;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x37f46043;
		}
	} else {
		return inClassId==(int)0x6775b71b || inClassId==(int)0x679431e7;
	}
}

 ::openfl::display::BitmapData BitmapTexture_obj::get_bitmapData(){
            	HX_STACKFRAME(&_hx_pos_8eb7f16227336898_35_get_bitmapData)
HXDLIN(  35)		return this->_bitmapData;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapTexture_obj,get_bitmapData,return )

 ::openfl::display::BitmapData BitmapTexture_obj::set_bitmapData( ::openfl::display::BitmapData value){
            	HX_GC_STACKFRAME(&_hx_pos_8eb7f16227336898_39_set_bitmapData)
HXLINE(  40)		if (::hx::IsInstanceEq( value,this->_bitmapData )) {
HXLINE(  41)			return null();
            		}
HXLINE(  43)		if (!(::away3d::tools::utils::TextureUtils_obj::isBitmapDataValid(value))) {
HXLINE(  44)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("Invalid bitmapData: Width and height must be power of 2 and cannot exceed 2048",82,ed,bb,c2),null())));
            		}
HXLINE(  46)		this->invalidateContent();
HXLINE(  47)		this->setSize(value->width,value->height);
HXLINE(  49)		this->_bitmapData = value;
HXLINE(  51)		if (this->_generateMipmaps) {
HXLINE(  52)			this->getMipMapHolder();
            		}
HXLINE(  53)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapTexture_obj,set_bitmapData,return )

void BitmapTexture_obj::uploadContent( ::openfl::display3D::textures::TextureBase texture){
            	HX_STACKFRAME(&_hx_pos_8eb7f16227336898_58_uploadContent)
HXDLIN(  58)		if (this->_generateMipmaps) {
HXLINE(  59)			::away3d::materials::utils::MipmapGenerator_obj::generateMipMaps(this->_bitmapData,texture,this->_mipMapHolder,true,null());
            		}
            		else {
HXLINE(  61)			::hx::TCast<  ::openfl::display3D::textures::Texture >::cast(texture)->uploadFromBitmapData(this->_bitmapData,0,null());
            		}
            	}


void BitmapTexture_obj::getMipMapHolder(){
            	HX_GC_STACKFRAME(&_hx_pos_8eb7f16227336898_65_getMipMapHolder)
HXLINE(  66)		int newW = this->_bitmapData->width;
HXDLIN(  66)		int newH = this->_bitmapData->height;
HXLINE(  71)		if (::hx::IsNotNull( this->_mipMapHolder )) {
HXLINE(  72)			bool _hx_tmp;
HXDLIN(  72)			if ((this->_mipMapHolder->width == newW)) {
HXLINE(  72)				_hx_tmp = (this->_bitmapData->height == newH);
            			}
            			else {
HXLINE(  72)				_hx_tmp = false;
            			}
HXDLIN(  72)			if (_hx_tmp) {
HXLINE(  73)				return;
            			}
HXLINE(  75)			this->freeMipMapHolder();
            		}
HXLINE(  78)		if (::hx::IsNull( ::away3d::textures::BitmapTexture_obj::_mipMaps->__get(newW).StaticCast< ::Array< ::Dynamic> >() )) {
HXLINE(  79)			::away3d::textures::BitmapTexture_obj::_mipMaps[newW] = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  80)			::away3d::textures::BitmapTexture_obj::_mipMapUses[newW] = ::Array_obj< int >::__new(0);
            		}
HXLINE(  82)		if (::hx::IsNull( ::away3d::textures::BitmapTexture_obj::_mipMaps->__get(newW).StaticCast< ::Array< ::Dynamic> >()->__get(newH).StaticCast<  ::openfl::display::BitmapData >() )) {
HXLINE(  83)			this->_mipMapHolder = (::away3d::textures::BitmapTexture_obj::_mipMaps->__get(newW).StaticCast< ::Array< ::Dynamic> >()[newH] =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,newW,newH,true,null()));
HXLINE(  84)			::away3d::textures::BitmapTexture_obj::_mipMapUses->__get(newW).StaticCast< ::Array< int > >()[newH] = 1;
            		}
            		else {
HXLINE(  86)			::away3d::textures::BitmapTexture_obj::_mipMapUses->__get(newW).StaticCast< ::Array< int > >()[newH] = (::away3d::textures::BitmapTexture_obj::_mipMapUses->__get(newW).StaticCast< ::Array< int > >()->__get(newH) + 1);
HXLINE(  87)			this->_mipMapHolder = ::away3d::textures::BitmapTexture_obj::_mipMaps->__get(newW).StaticCast< ::Array< ::Dynamic> >()->__get(newH).StaticCast<  ::openfl::display::BitmapData >();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapTexture_obj,getMipMapHolder,(void))

void BitmapTexture_obj::freeMipMapHolder(){
            	HX_STACKFRAME(&_hx_pos_8eb7f16227336898_92_freeMipMapHolder)
HXLINE(  93)		int holderWidth = this->_mipMapHolder->width;
HXLINE(  94)		int holderHeight = this->_mipMapHolder->height;
HXLINE(  96)		::Array< int > _hx_tmp = ::away3d::textures::BitmapTexture_obj::_mipMapUses->__get(holderWidth).StaticCast< ::Array< int > >();
HXDLIN(  96)		if ((--_hx_tmp[holderHeight] == 0)) {
HXLINE(  97)			::away3d::textures::BitmapTexture_obj::_mipMaps->__get(holderWidth).StaticCast< ::Array< ::Dynamic> >()->__get(holderHeight).StaticCast<  ::openfl::display::BitmapData >()->dispose();
HXLINE(  98)			::away3d::textures::BitmapTexture_obj::_mipMaps->__get(holderWidth).StaticCast< ::Array< ::Dynamic> >()[holderHeight] = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapTexture_obj,freeMipMapHolder,(void))

void BitmapTexture_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_8eb7f16227336898_103_dispose)
HXLINE( 104)		this->super::dispose();
HXLINE( 106)		if (::hx::IsNotNull( this->_mipMapHolder )) {
HXLINE( 107)			this->freeMipMapHolder();
            		}
            	}


::Array< ::Dynamic> BitmapTexture_obj::_mipMaps;

::Array< ::Dynamic> BitmapTexture_obj::_mipMapUses;


::hx::ObjectPtr< BitmapTexture_obj > BitmapTexture_obj::__new( ::openfl::display::BitmapData bitmapData,::hx::Null< bool >  __o_generateMipmaps) {
	::hx::ObjectPtr< BitmapTexture_obj > __this = new BitmapTexture_obj();
	__this->__construct(bitmapData,__o_generateMipmaps);
	return __this;
}

::hx::ObjectPtr< BitmapTexture_obj > BitmapTexture_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display::BitmapData bitmapData,::hx::Null< bool >  __o_generateMipmaps) {
	BitmapTexture_obj *__this = (BitmapTexture_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BitmapTexture_obj), true, "away3d.textures.BitmapTexture"));
	*(void **)__this = BitmapTexture_obj::_hx_vtable;
	__this->__construct(bitmapData,__o_generateMipmaps);
	return __this;
}

BitmapTexture_obj::BitmapTexture_obj()
{
}

void BitmapTexture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapTexture);
	HX_MARK_MEMBER_NAME(_bitmapData,"_bitmapData");
	HX_MARK_MEMBER_NAME(_mipMapHolder,"_mipMapHolder");
	HX_MARK_MEMBER_NAME(_generateMipmaps,"_generateMipmaps");
	 ::away3d::textures::TextureProxyBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BitmapTexture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_bitmapData,"_bitmapData");
	HX_VISIT_MEMBER_NAME(_mipMapHolder,"_mipMapHolder");
	HX_VISIT_MEMBER_NAME(_generateMipmaps,"_generateMipmaps");
	 ::away3d::textures::TextureProxyBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BitmapTexture_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_bitmapData() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_bitmapData") ) { return ::hx::Val( _bitmapData ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_mipMapHolder") ) { return ::hx::Val( _mipMapHolder ); }
		if (HX_FIELD_EQ(inName,"uploadContent") ) { return ::hx::Val( uploadContent_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_bitmapData") ) { return ::hx::Val( get_bitmapData_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_bitmapData") ) { return ::hx::Val( set_bitmapData_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getMipMapHolder") ) { return ::hx::Val( getMipMapHolder_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_generateMipmaps") ) { return ::hx::Val( _generateMipmaps ); }
		if (HX_FIELD_EQ(inName,"freeMipMapHolder") ) { return ::hx::Val( freeMipMapHolder_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool BitmapTexture_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_mipMaps") ) { outValue = ( _mipMaps ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_mipMapUses") ) { outValue = ( _mipMapUses ); return true; }
	}
	return false;
}

::hx::Val BitmapTexture_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_bitmapData(inValue.Cast<  ::openfl::display::BitmapData >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_bitmapData") ) { _bitmapData=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_mipMapHolder") ) { _mipMapHolder=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_generateMipmaps") ) { _generateMipmaps=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BitmapTexture_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_mipMaps") ) { _mipMaps=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_mipMapUses") ) { _mipMapUses=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
	}
	return false;
}

void BitmapTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_bitmapData",d8,82,4a,06));
	outFields->push(HX_("_mipMapHolder",d3,19,b8,27));
	outFields->push(HX_("_generateMipmaps",b7,35,ed,3b));
	outFields->push(HX_("bitmapData",b9,b5,c0,33));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BitmapTexture_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(BitmapTexture_obj,_bitmapData),HX_("_bitmapData",d8,82,4a,06)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(BitmapTexture_obj,_mipMapHolder),HX_("_mipMapHolder",d3,19,b8,27)},
	{::hx::fsBool,(int)offsetof(BitmapTexture_obj,_generateMipmaps),HX_("_generateMipmaps",b7,35,ed,3b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo BitmapTexture_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &BitmapTexture_obj::_mipMaps,HX_("_mipMaps",8c,2f,e5,99)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &BitmapTexture_obj::_mipMapUses,HX_("_mipMapUses",f3,44,4f,3d)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String BitmapTexture_obj_sMemberFields[] = {
	HX_("_bitmapData",d8,82,4a,06),
	HX_("_mipMapHolder",d3,19,b8,27),
	HX_("_generateMipmaps",b7,35,ed,3b),
	HX_("get_bitmapData",02,3e,b6,a9),
	HX_("set_bitmapData",76,26,d6,c9),
	HX_("uploadContent",38,9d,ce,8e),
	HX_("getMipMapHolder",aa,dc,33,68),
	HX_("freeMipMapHolder",c0,c1,ec,15),
	HX_("dispose",9f,80,4c,bb),
	::String(null()) };

static void BitmapTexture_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapTexture_obj::_mipMaps,"_mipMaps");
	HX_MARK_MEMBER_NAME(BitmapTexture_obj::_mipMapUses,"_mipMapUses");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BitmapTexture_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapTexture_obj::_mipMaps,"_mipMaps");
	HX_VISIT_MEMBER_NAME(BitmapTexture_obj::_mipMapUses,"_mipMapUses");
};

#endif

::hx::Class BitmapTexture_obj::__mClass;

static ::String BitmapTexture_obj_sStaticFields[] = {
	HX_("_mipMaps",8c,2f,e5,99),
	HX_("_mipMapUses",f3,44,4f,3d),
	::String(null())
};

void BitmapTexture_obj::__register()
{
	BitmapTexture_obj _hx_dummy;
	BitmapTexture_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.textures.BitmapTexture",a5,33,bb,1c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BitmapTexture_obj::__GetStatic;
	__mClass->mSetStaticField = &BitmapTexture_obj::__SetStatic;
	__mClass->mMarkFunc = BitmapTexture_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(BitmapTexture_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BitmapTexture_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BitmapTexture_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BitmapTexture_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BitmapTexture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BitmapTexture_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void BitmapTexture_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_8eb7f16227336898_16_boot)
HXDLIN(  16)		_mipMaps = ::Array_obj< ::Dynamic>::__new(0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_8eb7f16227336898_17_boot)
HXDLIN(  17)		_mipMapUses = ::Array_obj< ::Dynamic>::__new(0);
            	}
}

} // end namespace away3d
} // end namespace textures
