#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_away3d_bounds_BoundingSphere
#include <away3d/bounds/BoundingSphere.h>
#endif
#ifndef INCLUDED_away3d_bounds_BoundingVolumeBase
#include <away3d/bounds/BoundingVolumeBase.h>
#endif
#ifndef INCLUDED_away3d_cameras_Camera3D
#include <away3d/cameras/Camera3D.h>
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
#ifndef INCLUDED_away3d_core_math_Matrix3DUtils
#include <away3d/core/math/Matrix3DUtils.h>
#endif
#ifndef INCLUDED_away3d_core_partition_EntityNode
#include <away3d/core/partition/EntityNode.h>
#endif
#ifndef INCLUDED_away3d_core_partition_NodeBase
#include <away3d/core/partition/NodeBase.h>
#endif
#ifndef INCLUDED_away3d_core_partition_PointLightNode
#include <away3d/core/partition/PointLightNode.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_lights_LightBase
#include <away3d/lights/LightBase.h>
#endif
#ifndef INCLUDED_away3d_lights_PointLight
#include <away3d/lights/PointLight.h>
#endif
#ifndef INCLUDED_away3d_lights_shadowmaps_CubeMapShadowMapper
#include <away3d/lights/shadowmaps/CubeMapShadowMapper.h>
#endif
#ifndef INCLUDED_away3d_lights_shadowmaps_ShadowMapperBase
#include <away3d/lights/shadowmaps/ShadowMapperBase.h>
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
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_30df82b0d705ba5d_18_new,"away3d.lights.PointLight","new",0xb2cc70fa,"away3d.lights.PointLight.new","away3d/lights/PointLight.hx",18,0x74930596)
HX_LOCAL_STACK_FRAME(_hx_pos_30df82b0d705ba5d_39_createShadowMapper,"away3d.lights.PointLight","createShadowMapper",0xf0409183,"away3d.lights.PointLight.createShadowMapper","away3d/lights/PointLight.hx",39,0x74930596)
HX_LOCAL_STACK_FRAME(_hx_pos_30df82b0d705ba5d_44_createEntityPartitionNode,"away3d.lights.PointLight","createEntityPartitionNode",0x2d571a67,"away3d.lights.PointLight.createEntityPartitionNode","away3d/lights/PointLight.hx",44,0x74930596)
HX_LOCAL_STACK_FRAME(_hx_pos_30df82b0d705ba5d_52_get_radius,"away3d.lights.PointLight","get_radius",0x9db246c1,"away3d.lights.PointLight.get_radius","away3d/lights/PointLight.hx",52,0x74930596)
HX_LOCAL_STACK_FRAME(_hx_pos_30df82b0d705ba5d_56_set_radius,"away3d.lights.PointLight","set_radius",0xa12fe535,"away3d.lights.PointLight.set_radius","away3d/lights/PointLight.hx",56,0x74930596)
HX_LOCAL_STACK_FRAME(_hx_pos_30df82b0d705ba5d_71_fallOffFactor,"away3d.lights.PointLight","fallOffFactor",0xbf8fbebd,"away3d.lights.PointLight.fallOffFactor","away3d/lights/PointLight.hx",71,0x74930596)
HX_LOCAL_STACK_FRAME(_hx_pos_30df82b0d705ba5d_79_get_fallOff,"away3d.lights.PointLight","get_fallOff",0x085d7865,"away3d.lights.PointLight.get_fallOff","away3d/lights/PointLight.hx",79,0x74930596)
HX_LOCAL_STACK_FRAME(_hx_pos_30df82b0d705ba5d_83_set_fallOff,"away3d.lights.PointLight","set_fallOff",0x12ca7f71,"away3d.lights.PointLight.set_fallOff","away3d/lights/PointLight.hx",83,0x74930596)
HX_LOCAL_STACK_FRAME(_hx_pos_30df82b0d705ba5d_98_updateBounds,"away3d.lights.PointLight","updateBounds",0xdc20a984,"away3d.lights.PointLight.updateBounds","away3d/lights/PointLight.hx",98,0x74930596)
HX_LOCAL_STACK_FRAME(_hx_pos_30df82b0d705ba5d_110_getDefaultBoundingVolume,"away3d.lights.PointLight","getDefaultBoundingVolume",0x1a3915af,"away3d.lights.PointLight.getDefaultBoundingVolume","away3d/lights/PointLight.hx",110,0x74930596)
HX_LOCAL_STACK_FRAME(_hx_pos_30df82b0d705ba5d_117_getObjectProjectionMatrix,"away3d.lights.PointLight","getObjectProjectionMatrix",0xaedfca5f,"away3d.lights.PointLight.getObjectProjectionMatrix","away3d/lights/PointLight.hx",117,0x74930596)
namespace away3d{
namespace lights{

void PointLight_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_30df82b0d705ba5d_18_new)
HXLINE(  25)		this->_fallOff = ((Float)100000);
HXLINE(  24)		this->_radius = ((Float)90000);
HXLINE(  33)		super::__construct();
HXLINE(  34)		this->_fallOffFactor = (( (Float)(1) ) / ((this->_fallOff * this->_fallOff) - (this->_radius * this->_radius)));
            	}

Dynamic PointLight_obj::__CreateEmpty() { return new PointLight_obj; }

void *PointLight_obj::_hx_vtable = 0;

Dynamic PointLight_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PointLight_obj > _hx_result = new PointLight_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PointLight_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1e01c5a7) {
		if (inClassId<=(int)0x12b32fa7) {
			if (inClassId<=(int)0x0c89e854) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
			} else {
				return inClassId==(int)0x12b32fa7;
			}
		} else {
			return inClassId==(int)0x13fff02b || inClassId==(int)0x1e01c5a7;
		}
	} else {
		if (inClassId<=(int)0x37f46043) {
			return inClassId==(int)0x1e6a8fa2 || inClassId==(int)0x37f46043;
		} else {
			return inClassId==(int)0x498598c6;
		}
	}
}

 ::away3d::lights::shadowmaps::ShadowMapperBase PointLight_obj::createShadowMapper(){
            	HX_GC_STACKFRAME(&_hx_pos_30df82b0d705ba5d_39_createShadowMapper)
HXDLIN(  39)		return  ::away3d::lights::shadowmaps::CubeMapShadowMapper_obj::__alloc( HX_CTX );
            	}


 ::away3d::core::partition::EntityNode PointLight_obj::createEntityPartitionNode(){
            	HX_GC_STACKFRAME(&_hx_pos_30df82b0d705ba5d_44_createEntityPartitionNode)
HXDLIN(  44)		return  ::away3d::core::partition::PointLightNode_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
            	}


Float PointLight_obj::get_radius(){
            	HX_STACKFRAME(&_hx_pos_30df82b0d705ba5d_52_get_radius)
HXDLIN(  52)		return this->_radius;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PointLight_obj,get_radius,return )

Float PointLight_obj::set_radius(Float value){
            	HX_STACKFRAME(&_hx_pos_30df82b0d705ba5d_56_set_radius)
HXLINE(  57)		this->_radius = value;
HXLINE(  58)		if ((this->_radius < 0)) {
HXLINE(  59)			this->_radius = ( (Float)(0) );
            		}
            		else {
HXLINE(  60)			if ((this->_radius > this->_fallOff)) {
HXLINE(  61)				this->_fallOff = this->_radius;
HXLINE(  62)				this->invalidateBounds();
            			}
            		}
HXLINE(  65)		this->_fallOffFactor = (( (Float)(1) ) / ((this->_fallOff * this->_fallOff) - (this->_radius * this->_radius)));
HXLINE(  66)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PointLight_obj,set_radius,return )

Float PointLight_obj::fallOffFactor(){
            	HX_STACKFRAME(&_hx_pos_30df82b0d705ba5d_71_fallOffFactor)
HXDLIN(  71)		return this->_fallOffFactor;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PointLight_obj,fallOffFactor,return )

Float PointLight_obj::get_fallOff(){
            	HX_STACKFRAME(&_hx_pos_30df82b0d705ba5d_79_get_fallOff)
HXDLIN(  79)		return this->_fallOff;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PointLight_obj,get_fallOff,return )

Float PointLight_obj::set_fallOff(Float value){
            	HX_STACKFRAME(&_hx_pos_30df82b0d705ba5d_83_set_fallOff)
HXLINE(  84)		this->_fallOff = value;
HXLINE(  85)		if ((this->_fallOff < 0)) {
HXLINE(  86)			this->_fallOff = ( (Float)(0) );
            		}
HXLINE(  87)		if ((this->_fallOff < this->_radius)) {
HXLINE(  88)			this->_radius = this->_fallOff;
            		}
HXLINE(  89)		this->_fallOffFactor = (( (Float)(1) ) / ((this->_fallOff * this->_fallOff) - (this->_radius * this->_radius)));
HXLINE(  90)		this->invalidateBounds();
HXLINE(  91)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PointLight_obj,set_fallOff,return )

void PointLight_obj::updateBounds(){
            	HX_GC_STACKFRAME(&_hx_pos_30df82b0d705ba5d_98_updateBounds)
HXLINE( 101)		 ::away3d::bounds::BoundingVolumeBase _hx_tmp = this->_bounds;
HXDLIN( 101)		_hx_tmp->fromSphere( ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null()),this->_fallOff);
HXLINE( 102)		this->_boundsInvalid = false;
            	}


 ::away3d::bounds::BoundingVolumeBase PointLight_obj::getDefaultBoundingVolume(){
            	HX_GC_STACKFRAME(&_hx_pos_30df82b0d705ba5d_110_getDefaultBoundingVolume)
HXDLIN( 110)		return  ::away3d::bounds::BoundingSphere_obj::__alloc( HX_CTX );
            	}


 ::openfl::geom::Matrix3D PointLight_obj::getObjectProjectionMatrix(::Dynamic renderable, ::away3d::cameras::Camera3D camera, ::openfl::geom::Matrix3D target){
            	HX_GC_STACKFRAME(&_hx_pos_30df82b0d705ba5d_117_getObjectProjectionMatrix)
HXLINE( 118)		 ::openfl::_Vector::FloatVector raw = ::away3d::core::math::Matrix3DUtils_obj::RAW_DATA_CONTAINER;
HXLINE( 119)		 ::away3d::bounds::BoundingVolumeBase bounds = ::away3d::core::base::IRenderable_obj::get_sourceEntity(renderable)->get_bounds();
HXLINE( 120)		 ::openfl::geom::Matrix3D m =  ::openfl::geom::Matrix3D_obj::__alloc( HX_CTX ,null());
HXLINE( 123)		m->copyFrom(::away3d::core::base::IRenderable_obj::getRenderSceneTransform(renderable,camera));
HXLINE( 124)		m->append(this->_parent->get_inverseSceneTransform());
HXLINE( 125)		this->lookAt(m->get_position(),null());
HXLINE( 127)		m->copyFrom(::away3d::core::base::IRenderable_obj::getRenderSceneTransform(renderable,camera));
HXLINE( 128)		m->append(this->get_inverseSceneTransform());
HXLINE( 129)		m->copyColumnTo(3,this->_pos);
HXLINE( 131)		 ::openfl::geom::Vector3D v1 = m->deltaTransformVector(bounds->get_min());
HXLINE( 132)		 ::openfl::geom::Vector3D v2 = m->deltaTransformVector(bounds->get_max());
HXLINE( 133)		Float z = this->_pos->z;
HXLINE( 134)		Float d1 = (((v1->x * v1->x) + (v1->y * v1->y)) + (v1->z * v1->z));
HXLINE( 135)		Float d2 = (((v2->x * v2->x) + (v2->y * v2->y)) + (v2->z * v2->z));
HXLINE( 136)		Float d;
HXDLIN( 136)		if ((d1 > d2)) {
HXLINE( 136)			d = d1;
            		}
            		else {
HXLINE( 136)			d = d2;
            		}
HXDLIN( 136)		Float d3 = ::Math_obj::sqrt(d);
HXLINE( 137)		Float zMin = (z - d3);
HXDLIN( 137)		Float zMax = (z + d3);
HXLINE( 142)		raw->set(5,raw->set(0,(zMin / d3)));
HXLINE( 143)		raw->set(10,(zMax / (zMax - zMin)));
HXLINE( 144)		raw->set(11,( (Float)(1) ));
HXLINE( 145)		raw->set(1,raw->set(2,raw->set(3,raw->set(4,raw->set(6,raw->set(7,raw->set(8,raw->set(9,raw->set(12,raw->set(13,raw->set(15,( (Float)(0) ))))))))))));
HXLINE( 148)		raw->set(14,(-(zMin) * raw->get(10)));
HXLINE( 150)		if (::hx::IsNull( target )) {
HXLINE( 151)			target =  ::openfl::geom::Matrix3D_obj::__alloc( HX_CTX ,null());
            		}
HXLINE( 152)		target->copyRawDataFrom(raw,null(),null());
HXLINE( 153)		target->prepend(m);
HXLINE( 155)		return target;
            	}



::hx::ObjectPtr< PointLight_obj > PointLight_obj::__new() {
	::hx::ObjectPtr< PointLight_obj > __this = new PointLight_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< PointLight_obj > PointLight_obj::__alloc(::hx::Ctx *_hx_ctx) {
	PointLight_obj *__this = (PointLight_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PointLight_obj), true, "away3d.lights.PointLight"));
	*(void **)__this = PointLight_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PointLight_obj::PointLight_obj()
{
}

::hx::Val PointLight_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"radius") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_radius() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fallOff") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_fallOff() ); }
		if (HX_FIELD_EQ(inName,"_radius") ) { return ::hx::Val( _radius ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_fallOff") ) { return ::hx::Val( _fallOff ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_radius") ) { return ::hx::Val( get_radius_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_radius") ) { return ::hx::Val( set_radius_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_fallOff") ) { return ::hx::Val( get_fallOff_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_fallOff") ) { return ::hx::Val( set_fallOff_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateBounds") ) { return ::hx::Val( updateBounds_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fallOffFactor") ) { return ::hx::Val( fallOffFactor_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_fallOffFactor") ) { return ::hx::Val( _fallOffFactor ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createShadowMapper") ) { return ::hx::Val( createShadowMapper_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getDefaultBoundingVolume") ) { return ::hx::Val( getDefaultBoundingVolume_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"createEntityPartitionNode") ) { return ::hx::Val( createEntityPartitionNode_dyn() ); }
		if (HX_FIELD_EQ(inName,"getObjectProjectionMatrix") ) { return ::hx::Val( getObjectProjectionMatrix_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PointLight_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"radius") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_radius(inValue.Cast< Float >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fallOff") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_fallOff(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"_radius") ) { _radius=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_fallOff") ) { _fallOff=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_fallOffFactor") ) { _fallOffFactor=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PointLight_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("radius",52,d0,f6,b0));
	outFields->push(HX_("fallOff",b4,4d,11,d1));
	outFields->push(HX_("_radius",f1,e1,6d,1f));
	outFields->push(HX_("_fallOff",35,a7,c9,0a));
	outFields->push(HX_("_fallOffFactor",e4,89,94,fc));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PointLight_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(PointLight_obj,_radius),HX_("_radius",f1,e1,6d,1f)},
	{::hx::fsFloat,(int)offsetof(PointLight_obj,_fallOff),HX_("_fallOff",35,a7,c9,0a)},
	{::hx::fsFloat,(int)offsetof(PointLight_obj,_fallOffFactor),HX_("_fallOffFactor",e4,89,94,fc)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PointLight_obj_sStaticStorageInfo = 0;
#endif

static ::String PointLight_obj_sMemberFields[] = {
	HX_("_radius",f1,e1,6d,1f),
	HX_("_fallOff",35,a7,c9,0a),
	HX_("_fallOffFactor",e4,89,94,fc),
	HX_("createShadowMapper",dd,74,0c,2f),
	HX_("createEntityPartitionNode",4d,b6,d9,04),
	HX_("get_radius",1b,40,7e,a1),
	HX_("set_radius",8f,de,fb,a4),
	HX_("fallOffFactor",a3,99,42,be),
	HX_("get_fallOff",cb,ad,0b,57),
	HX_("set_fallOff",d7,b4,78,61),
	HX_("updateBounds",5e,2d,e1,65),
	HX_("getDefaultBoundingVolume",89,f8,1c,2a),
	HX_("getObjectProjectionMatrix",45,66,62,86),
	::String(null()) };

::hx::Class PointLight_obj::__mClass;

void PointLight_obj::__register()
{
	PointLight_obj _hx_dummy;
	PointLight_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.lights.PointLight",08,2c,56,74);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PointLight_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PointLight_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PointLight_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PointLight_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace lights
