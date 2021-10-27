#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_materials_utils_MipmapGenerator
#include <away3d/materials/utils/MipmapGenerator.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_CubeTexture
#include <openfl/display3D/textures/CubeTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_Texture
#include <openfl/display3D/textures/Texture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_465b9acd067d9b02_26_generateMipMaps,"away3d.materials.utils.MipmapGenerator","generateMipMaps",0x08346d85,"away3d.materials.utils.MipmapGenerator.generateMipMaps","away3d/materials/utils/MipmapGenerator.hx",26,0xbb1157c4)
HX_LOCAL_STACK_FRAME(_hx_pos_465b9acd067d9b02_15_boot,"away3d.materials.utils.MipmapGenerator","boot",0x0e7fb9a3,"away3d.materials.utils.MipmapGenerator.boot","away3d/materials/utils/MipmapGenerator.hx",15,0xbb1157c4)
HX_LOCAL_STACK_FRAME(_hx_pos_465b9acd067d9b02_16_boot,"away3d.materials.utils.MipmapGenerator","boot",0x0e7fb9a3,"away3d.materials.utils.MipmapGenerator.boot","away3d/materials/utils/MipmapGenerator.hx",16,0xbb1157c4)
namespace away3d{
namespace materials{
namespace utils{

void MipmapGenerator_obj::__construct() { }

Dynamic MipmapGenerator_obj::__CreateEmpty() { return new MipmapGenerator_obj; }

void *MipmapGenerator_obj::_hx_vtable = 0;

Dynamic MipmapGenerator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MipmapGenerator_obj > _hx_result = new MipmapGenerator_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MipmapGenerator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x73c60a47;
}

 ::openfl::geom::Matrix MipmapGenerator_obj::_matrix;

 ::openfl::geom::Rectangle MipmapGenerator_obj::_rect;

void MipmapGenerator_obj::generateMipMaps( ::openfl::display::BitmapData source, ::openfl::display3D::textures::TextureBase target, ::openfl::display::BitmapData mipmap,::hx::Null< bool >  __o_alpha,::hx::Null< int >  __o_side){
            		bool alpha = __o_alpha.Default(false);
            		int side = __o_side.Default(-1);
            	HX_GC_STACKFRAME(&_hx_pos_465b9acd067d9b02_26_generateMipMaps)
HXLINE(  27)		int w = source->width;
HXDLIN(  27)		int h = source->height;
HXLINE(  29)		int i = 0;
HXLINE(  30)		bool regen = ::hx::IsNotNull( mipmap );
HXLINE(  31)		if (::hx::IsNull( mipmap )) {
HXLINE(  31)			mipmap =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,w,h,alpha,null());
            		}
HXLINE(  33)		int _hx_int = w;
HXDLIN(  33)		Float _hx_tmp;
HXDLIN(  33)		if ((_hx_int < 0)) {
HXLINE(  33)			_hx_tmp = (((Float)4294967296.0) + _hx_int);
            		}
            		else {
HXLINE(  33)			_hx_tmp = (_hx_int + ((Float)0.0));
            		}
HXDLIN(  33)		::away3d::materials::utils::MipmapGenerator_obj::_rect->width = _hx_tmp;
HXLINE(  34)		int int1 = h;
HXDLIN(  34)		Float _hx_tmp1;
HXDLIN(  34)		if ((int1 < 0)) {
HXLINE(  34)			_hx_tmp1 = (((Float)4294967296.0) + int1);
            		}
            		else {
HXLINE(  34)			_hx_tmp1 = (int1 + ((Float)0.0));
            		}
HXDLIN(  34)		::away3d::materials::utils::MipmapGenerator_obj::_rect->height = _hx_tmp1;
HXLINE(  36)		while(true){
HXLINE(  36)			bool _hx_tmp;
HXDLIN(  36)			bool aNeg = (w < 0);
HXDLIN(  36)			bool bNeg = (1 < 0);
HXDLIN(  36)			bool _hx_tmp1;
HXDLIN(  36)			if ((aNeg != bNeg)) {
HXLINE(  36)				_hx_tmp1 = aNeg;
            			}
            			else {
HXLINE(  36)				_hx_tmp1 = (w >= 1);
            			}
HXDLIN(  36)			if (!(_hx_tmp1)) {
HXLINE(  36)				bool aNeg = (h < 0);
HXDLIN(  36)				bool bNeg = (1 < 0);
HXDLIN(  36)				if ((aNeg != bNeg)) {
HXLINE(  36)					_hx_tmp = aNeg;
            				}
            				else {
HXLINE(  36)					_hx_tmp = (h >= 1);
            				}
            			}
            			else {
HXLINE(  36)				_hx_tmp = true;
            			}
HXDLIN(  36)			if (!(_hx_tmp)) {
HXLINE(  36)				goto _hx_goto_0;
            			}
HXLINE(  37)			if (alpha) {
HXLINE(  38)				mipmap->fillRect(::away3d::materials::utils::MipmapGenerator_obj::_rect,0);
            			}
HXLINE(  40)			::away3d::materials::utils::MipmapGenerator_obj::_matrix->a = (::away3d::materials::utils::MipmapGenerator_obj::_rect->width / ( (Float)(source->width) ));
HXLINE(  41)			::away3d::materials::utils::MipmapGenerator_obj::_matrix->d = (::away3d::materials::utils::MipmapGenerator_obj::_rect->height / ( (Float)(source->height) ));
HXLINE(  43)			mipmap->draw(source,::away3d::materials::utils::MipmapGenerator_obj::_matrix,null(),null(),null(),true);
HXLINE(  45)			if (::Std_obj::isOfType(target,( ( ::Dynamic)(::hx::ClassOf< ::openfl::display3D::textures::Texture >()) ))) {
HXLINE(  46)				i = (i + 1);
HXDLIN(  46)				::hx::TCast<  ::openfl::display3D::textures::Texture >::cast(target)->uploadFromBitmapData(mipmap,(i - 1),null());
            			}
            			else {
HXLINE(  48)				i = (i + 1);
HXDLIN(  48)				::hx::TCast<  ::openfl::display3D::textures::CubeTexture >::cast(target)->uploadFromBitmapData(mipmap,side,(i - 1),null());
            			}
HXLINE(  50)			w = ::hx::UShr(w,1);
HXLINE(  51)			h = ::hx::UShr(h,1);
HXLINE(  53)			Float _hx_tmp2;
HXDLIN(  53)			bool aNeg1 = (w < 0);
HXDLIN(  53)			bool bNeg1 = (1 < 0);
HXDLIN(  53)			bool _hx_tmp3;
HXDLIN(  53)			if ((aNeg1 != bNeg1)) {
HXLINE(  53)				_hx_tmp3 = aNeg1;
            			}
            			else {
HXLINE(  53)				_hx_tmp3 = (w > 1);
            			}
HXDLIN(  53)			if (_hx_tmp3) {
HXLINE(  53)				int _hx_int = w;
HXDLIN(  53)				if ((_hx_int < 0)) {
HXLINE(  53)					_hx_tmp2 = (((Float)4294967296.0) + _hx_int);
            				}
            				else {
HXLINE(  53)					_hx_tmp2 = (_hx_int + ((Float)0.0));
            				}
            			}
            			else {
HXLINE(  53)				_hx_tmp2 = ( (Float)(1) );
            			}
HXDLIN(  53)			::away3d::materials::utils::MipmapGenerator_obj::_rect->width = _hx_tmp2;
HXLINE(  54)			Float _hx_tmp4;
HXDLIN(  54)			bool aNeg2 = (h < 0);
HXDLIN(  54)			bool bNeg2 = (1 < 0);
HXDLIN(  54)			bool _hx_tmp5;
HXDLIN(  54)			if ((aNeg2 != bNeg2)) {
HXLINE(  54)				_hx_tmp5 = aNeg2;
            			}
            			else {
HXLINE(  54)				_hx_tmp5 = (h > 1);
            			}
HXDLIN(  54)			if (_hx_tmp5) {
HXLINE(  54)				int _hx_int = h;
HXDLIN(  54)				if ((_hx_int < 0)) {
HXLINE(  54)					_hx_tmp4 = (((Float)4294967296.0) + _hx_int);
            				}
            				else {
HXLINE(  54)					_hx_tmp4 = (_hx_int + ((Float)0.0));
            				}
            			}
            			else {
HXLINE(  54)				_hx_tmp4 = ( (Float)(1) );
            			}
HXDLIN(  54)			::away3d::materials::utils::MipmapGenerator_obj::_rect->height = _hx_tmp4;
            		}
            		_hx_goto_0:;
HXLINE(  57)		if (!(regen)) {
HXLINE(  58)			mipmap->dispose();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(MipmapGenerator_obj,generateMipMaps,(void))


MipmapGenerator_obj::MipmapGenerator_obj()
{
}

bool MipmapGenerator_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_rect") ) { outValue = ( _rect ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matrix") ) { outValue = ( _matrix ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"generateMipMaps") ) { outValue = generateMipMaps_dyn(); return true; }
	}
	return false;
}

bool MipmapGenerator_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=ioValue.Cast<  ::openfl::geom::Rectangle >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=ioValue.Cast<  ::openfl::geom::Matrix >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *MipmapGenerator_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo MipmapGenerator_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(void *) &MipmapGenerator_obj::_matrix,HX_("_matrix",e0,47,3f,2a)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(void *) &MipmapGenerator_obj::_rect,HX_("_rect",03,69,b8,fe)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void MipmapGenerator_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MipmapGenerator_obj::_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(MipmapGenerator_obj::_rect,"_rect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MipmapGenerator_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MipmapGenerator_obj::_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(MipmapGenerator_obj::_rect,"_rect");
};

#endif

::hx::Class MipmapGenerator_obj::__mClass;

static ::String MipmapGenerator_obj_sStaticFields[] = {
	HX_("_matrix",e0,47,3f,2a),
	HX_("_rect",03,69,b8,fe),
	HX_("generateMipMaps",56,1f,e7,3b),
	::String(null())
};

void MipmapGenerator_obj::__register()
{
	MipmapGenerator_obj _hx_dummy;
	MipmapGenerator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.materials.utils.MipmapGenerator",9d,20,de,1b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MipmapGenerator_obj::__GetStatic;
	__mClass->mSetStaticField = &MipmapGenerator_obj::__SetStatic;
	__mClass->mMarkFunc = MipmapGenerator_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MipmapGenerator_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< MipmapGenerator_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MipmapGenerator_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MipmapGenerator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MipmapGenerator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MipmapGenerator_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_465b9acd067d9b02_15_boot)
HXDLIN(  15)		_matrix =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_465b9acd067d9b02_16_boot)
HXDLIN(  16)		_rect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            	}
}

} // end namespace away3d
} // end namespace materials
} // end namespace utils
