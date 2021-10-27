#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_IMaterialOwner
#include <away3d/core/base/IMaterialOwner.h>
#endif
#ifndef INCLUDED_away3d_core_base_IRenderable
#include <away3d/core/base/IRenderable.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_entities_SegmentSet
#include <away3d/entities/SegmentSet.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_primitives_WireframePrimitiveBase
#include <away3d/primitives/WireframePrimitiveBase.h>
#endif
#ifndef INCLUDED_away3d_primitives_WireframeSphere
#include <away3d/primitives/WireframeSphere.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_111b34d7c8e922f9_24_new,"away3d.primitives.WireframeSphere","new",0xc0c44094,"away3d.primitives.WireframeSphere.new","away3d/primitives/WireframeSphere.hx",24,0xa07b42fc)
HX_LOCAL_STACK_FRAME(_hx_pos_111b34d7c8e922f9_36_buildGeometry,"away3d.primitives.WireframeSphere","buildGeometry",0xf603b134,"away3d.primitives.WireframeSphere.buildGeometry","away3d/primitives/WireframeSphere.hx",36,0xa07b42fc)
namespace away3d{
namespace primitives{

void WireframeSphere_obj::__construct(::hx::Null< Float >  __o_radius,::hx::Null< int >  __o_segmentsW,::hx::Null< int >  __o_segmentsH,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_thickness){
            		Float radius = __o_radius.Default(50);
            		int segmentsW = __o_segmentsW.Default(16);
            		int segmentsH = __o_segmentsH.Default(12);
            		int color = __o_color.Default(16777215);
            		Float thickness = __o_thickness.Default(1);
            	HX_STACKFRAME(&_hx_pos_111b34d7c8e922f9_24_new)
HXLINE(  25)		super::__construct(color,thickness);
HXLINE(  27)		this->_radius = radius;
HXLINE(  28)		this->_segmentsW = segmentsW;
HXLINE(  29)		this->_segmentsH = segmentsH;
            	}

Dynamic WireframeSphere_obj::__CreateEmpty() { return new WireframeSphere_obj; }

void *WireframeSphere_obj::_hx_vtable = 0;

Dynamic WireframeSphere_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< WireframeSphere_obj > _hx_result = new WireframeSphere_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool WireframeSphere_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x13fff02b) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x03f3a2fb) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x03f3a2fb;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x12b32fa7 || inClassId==(int)0x13fff02b;
		}
	} else {
		if (inClassId<=(int)0x37f46043) {
			if (inClassId<=(int)0x2eb7455f) {
				return inClassId==(int)0x1e6a8fa2 || inClassId==(int)0x2eb7455f;
			} else {
				return inClassId==(int)0x37f46043;
			}
		} else {
			return inClassId==(int)0x6b918b26;
		}
	}
}

void WireframeSphere_obj::buildGeometry(){
            	HX_GC_STACKFRAME(&_hx_pos_111b34d7c8e922f9_36_buildGeometry)
HXLINE(  37)		int length = null();
HXDLIN(  37)		bool fixed = null();
HXDLIN(  37)		::Array< Float > array = null();
HXDLIN(  37)		 ::openfl::_Vector::FloatVector vertices =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE(  38)		 ::openfl::geom::Vector3D v0 =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  39)		 ::openfl::geom::Vector3D v1 =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  40)		int numVerts = 0;
HXLINE(  41)		int index = 0;
HXLINE(  43)		Float horangle;
HXDLIN(  43)		Float z;
HXDLIN(  43)		Float ringradius;
HXLINE(  44)		Float verangle;
HXDLIN(  44)		Float x;
HXDLIN(  44)		Float y;
HXLINE(  46)		{
HXLINE(  46)			int _g = 0;
HXDLIN(  46)			int _g1 = (this->_segmentsH + 1);
HXDLIN(  46)			while((_g < _g1)){
HXLINE(  46)				_g = (_g + 1);
HXDLIN(  46)				int j = (_g - 1);
HXLINE(  47)				horangle = ((::Math_obj::PI * ( (Float)(j) )) / ( (Float)(this->_segmentsH) ));
HXLINE(  48)				z = (-(this->_radius) * ::Math_obj::cos(horangle));
HXLINE(  49)				ringradius = (this->_radius * ::Math_obj::sin(horangle));
HXLINE(  51)				{
HXLINE(  51)					int _g1 = 0;
HXDLIN(  51)					int _g2 = (this->_segmentsW + 1);
HXDLIN(  51)					while((_g1 < _g2)){
HXLINE(  51)						_g1 = (_g1 + 1);
HXDLIN(  51)						int i = (_g1 - 1);
HXLINE(  52)						verangle = (((( (Float)(2) ) * ::Math_obj::PI) * ( (Float)(i) )) / ( (Float)(this->_segmentsW) ));
HXLINE(  53)						x = (ringradius * ::Math_obj::cos(verangle));
HXLINE(  54)						y = (ringradius * ::Math_obj::sin(verangle));
HXLINE(  55)						{
HXLINE(  55)							numVerts = (numVerts + 1);
HXDLIN(  55)							vertices->set((numVerts - 1),x);
            						}
HXLINE(  56)						{
HXLINE(  56)							numVerts = (numVerts + 1);
HXDLIN(  56)							vertices->set((numVerts - 1),-(z));
            						}
HXLINE(  57)						{
HXLINE(  57)							numVerts = (numVerts + 1);
HXDLIN(  57)							vertices->set((numVerts - 1),y);
            						}
            					}
            				}
            			}
            		}
HXLINE(  61)		int a;
HXDLIN(  61)		int b;
HXDLIN(  61)		int c;
HXDLIN(  61)		int d;
HXLINE(  63)		{
HXLINE(  63)			int _g2 = 1;
HXDLIN(  63)			int _g3 = (this->_segmentsH + 1);
HXDLIN(  63)			while((_g2 < _g3)){
HXLINE(  63)				_g2 = (_g2 + 1);
HXDLIN(  63)				int j = (_g2 - 1);
HXLINE(  64)				{
HXLINE(  64)					int _g = 1;
HXDLIN(  64)					int _g1 = (this->_segmentsH + 1);
HXDLIN(  64)					while((_g < _g1)){
HXLINE(  64)						_g = (_g + 1);
HXDLIN(  64)						int i = (_g - 1);
HXLINE(  65)						a = ((((this->_segmentsW + 1) * j) + i) * 3);
HXLINE(  66)						b = (((((this->_segmentsW + 1) * j) + i) - 1) * 3);
HXLINE(  67)						c = (((((this->_segmentsW + 1) * (j - 1)) + i) - 1) * 3);
HXLINE(  68)						d = ((((this->_segmentsW + 1) * (j - 1)) + i) * 3);
HXLINE(  70)						if ((j == this->_segmentsH)) {
HXLINE(  71)							v0->x = vertices->get(c);
HXLINE(  72)							v0->y = vertices->get((c + 1));
HXLINE(  73)							v0->z = vertices->get((c + 2));
HXLINE(  74)							v1->x = vertices->get(d);
HXLINE(  75)							v1->y = vertices->get((d + 1));
HXLINE(  76)							v1->z = vertices->get((d + 2));
HXLINE(  77)							index = (index + 1);
HXDLIN(  77)							this->updateOrAddSegment((index - 1),v0,v1);
HXLINE(  78)							v0->x = vertices->get(a);
HXLINE(  79)							v0->y = vertices->get((a + 1));
HXLINE(  80)							v0->z = vertices->get((a + 2));
HXLINE(  81)							index = (index + 1);
HXDLIN(  81)							this->updateOrAddSegment((index - 1),v0,v1);
            						}
            						else {
HXLINE(  82)							if ((j == 1)) {
HXLINE(  83)								v1->x = vertices->get(b);
HXLINE(  84)								v1->y = vertices->get((b + 1));
HXLINE(  85)								v1->z = vertices->get((b + 2));
HXLINE(  86)								v0->x = vertices->get(c);
HXLINE(  87)								v0->y = vertices->get((c + 1));
HXLINE(  88)								v0->z = vertices->get((c + 2));
HXLINE(  89)								index = (index + 1);
HXDLIN(  89)								this->updateOrAddSegment((index - 1),v0,v1);
            							}
            							else {
HXLINE(  91)								v1->x = vertices->get(b);
HXLINE(  92)								v1->y = vertices->get((b + 1));
HXLINE(  93)								v1->z = vertices->get((b + 2));
HXLINE(  94)								v0->x = vertices->get(c);
HXLINE(  95)								v0->y = vertices->get((c + 1));
HXLINE(  96)								v0->z = vertices->get((c + 2));
HXLINE(  97)								index = (index + 1);
HXDLIN(  97)								this->updateOrAddSegment((index - 1),v0,v1);
HXLINE(  98)								v1->x = vertices->get(d);
HXLINE(  99)								v1->y = vertices->get((d + 1));
HXLINE( 100)								v1->z = vertices->get((d + 2));
HXLINE( 101)								index = (index + 1);
HXDLIN( 101)								this->updateOrAddSegment((index - 1),v0,v1);
            							}
            						}
            					}
            				}
            			}
            		}
            	}



::hx::ObjectPtr< WireframeSphere_obj > WireframeSphere_obj::__new(::hx::Null< Float >  __o_radius,::hx::Null< int >  __o_segmentsW,::hx::Null< int >  __o_segmentsH,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_thickness) {
	::hx::ObjectPtr< WireframeSphere_obj > __this = new WireframeSphere_obj();
	__this->__construct(__o_radius,__o_segmentsW,__o_segmentsH,__o_color,__o_thickness);
	return __this;
}

::hx::ObjectPtr< WireframeSphere_obj > WireframeSphere_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_radius,::hx::Null< int >  __o_segmentsW,::hx::Null< int >  __o_segmentsH,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_thickness) {
	WireframeSphere_obj *__this = (WireframeSphere_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(WireframeSphere_obj), true, "away3d.primitives.WireframeSphere"));
	*(void **)__this = WireframeSphere_obj::_hx_vtable;
	__this->__construct(__o_radius,__o_segmentsW,__o_segmentsH,__o_color,__o_thickness);
	return __this;
}

WireframeSphere_obj::WireframeSphere_obj()
{
}

::hx::Val WireframeSphere_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_radius") ) { return ::hx::Val( _radius ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_segmentsW") ) { return ::hx::Val( _segmentsW ); }
		if (HX_FIELD_EQ(inName,"_segmentsH") ) { return ::hx::Val( _segmentsH ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"buildGeometry") ) { return ::hx::Val( buildGeometry_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val WireframeSphere_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_radius") ) { _radius=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_segmentsW") ) { _segmentsW=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_segmentsH") ) { _segmentsH=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WireframeSphere_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_segmentsW",b8,42,8b,6f));
	outFields->push(HX_("_segmentsH",a9,42,8b,6f));
	outFields->push(HX_("_radius",f1,e1,6d,1f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo WireframeSphere_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(WireframeSphere_obj,_segmentsW),HX_("_segmentsW",b8,42,8b,6f)},
	{::hx::fsInt,(int)offsetof(WireframeSphere_obj,_segmentsH),HX_("_segmentsH",a9,42,8b,6f)},
	{::hx::fsFloat,(int)offsetof(WireframeSphere_obj,_radius),HX_("_radius",f1,e1,6d,1f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *WireframeSphere_obj_sStaticStorageInfo = 0;
#endif

static ::String WireframeSphere_obj_sMemberFields[] = {
	HX_("_segmentsW",b8,42,8b,6f),
	HX_("_segmentsH",a9,42,8b,6f),
	HX_("_radius",f1,e1,6d,1f),
	HX_("buildGeometry",00,78,79,cd),
	::String(null()) };

::hx::Class WireframeSphere_obj::__mClass;

void WireframeSphere_obj::__register()
{
	WireframeSphere_obj _hx_dummy;
	WireframeSphere_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.primitives.WireframeSphere",a2,a6,53,31);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(WireframeSphere_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< WireframeSphere_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WireframeSphere_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WireframeSphere_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace primitives
