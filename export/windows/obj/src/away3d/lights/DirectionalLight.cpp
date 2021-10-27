#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_away3d_bounds_BoundingVolumeBase
#include <away3d/bounds/BoundingVolumeBase.h>
#endif
#ifndef INCLUDED_away3d_bounds_NullBounds
#include <away3d/bounds/NullBounds.h>
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
#ifndef INCLUDED_away3d_core_partition_DirectionalLightNode
#include <away3d/core/partition/DirectionalLightNode.h>
#endif
#ifndef INCLUDED_away3d_core_partition_EntityNode
#include <away3d/core/partition/EntityNode.h>
#endif
#ifndef INCLUDED_away3d_core_partition_NodeBase
#include <away3d/core/partition/NodeBase.h>
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
#ifndef INCLUDED_away3d_lights_DirectionalLight
#include <away3d/lights/DirectionalLight.h>
#endif
#ifndef INCLUDED_away3d_lights_LightBase
#include <away3d/lights/LightBase.h>
#endif
#ifndef INCLUDED_away3d_lights_shadowmaps_DirectionalShadowMapper
#include <away3d/lights/shadowmaps/DirectionalShadowMapper.h>
#endif
#ifndef INCLUDED_away3d_lights_shadowmaps_ShadowMapperBase
#include <away3d/lights/shadowmaps/ShadowMapperBase.h>
#endif
#ifndef INCLUDED_away3d_primitives_WireframePrimitiveBase
#include <away3d/primitives/WireframePrimitiveBase.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_df7c67f29a40a680_38_new,"away3d.lights.DirectionalLight","new",0x807de2a0,"away3d.lights.DirectionalLight.new","away3d/lights/DirectionalLight.hx",38,0xf31eb2b0)
HX_LOCAL_STACK_FRAME(_hx_pos_df7c67f29a40a680_46_createEntityPartitionNode,"away3d.lights.DirectionalLight","createEntityPartitionNode",0x1353788d,"away3d.lights.DirectionalLight.createEntityPartitionNode","away3d/lights/DirectionalLight.hx",46,0xf31eb2b0)
HX_LOCAL_STACK_FRAME(_hx_pos_df7c67f29a40a680_53_get_sceneDirection,"away3d.lights.DirectionalLight","get_sceneDirection",0x567835dc,"away3d.lights.DirectionalLight.get_sceneDirection","away3d/lights/DirectionalLight.hx",53,0xf31eb2b0)
HX_LOCAL_STACK_FRAME(_hx_pos_df7c67f29a40a680_64_get_direction,"away3d.lights.DirectionalLight","get_direction",0xc5739856,"away3d.lights.DirectionalLight.get_direction","away3d/lights/DirectionalLight.hx",64,0xf31eb2b0)
HX_LOCAL_STACK_FRAME(_hx_pos_df7c67f29a40a680_68_set_direction,"away3d.lights.DirectionalLight","set_direction",0x0a797a62,"away3d.lights.DirectionalLight.set_direction","away3d/lights/DirectionalLight.hx",68,0xf31eb2b0)
HX_LOCAL_STACK_FRAME(_hx_pos_df7c67f29a40a680_87_getDefaultBoundingVolume,"away3d.lights.DirectionalLight","getDefaultBoundingVolume",0x72803e49,"away3d.lights.DirectionalLight.getDefaultBoundingVolume","away3d/lights/DirectionalLight.hx",87,0xf31eb2b0)
HX_LOCAL_STACK_FRAME(_hx_pos_df7c67f29a40a680_94_updateBounds,"away3d.lights.DirectionalLight","updateBounds",0xdf82d31e,"away3d.lights.DirectionalLight.updateBounds","away3d/lights/DirectionalLight.hx",94,0xf31eb2b0)
HX_LOCAL_STACK_FRAME(_hx_pos_df7c67f29a40a680_101_updateSceneTransform,"away3d.lights.DirectionalLight","updateSceneTransform",0x551c4829,"away3d.lights.DirectionalLight.updateSceneTransform","away3d/lights/DirectionalLight.hx",101,0xf31eb2b0)
HX_LOCAL_STACK_FRAME(_hx_pos_df7c67f29a40a680_109_createShadowMapper,"away3d.lights.DirectionalLight","createShadowMapper",0x9d10ea9d,"away3d.lights.DirectionalLight.createShadowMapper","away3d/lights/DirectionalLight.hx",109,0xf31eb2b0)
HX_LOCAL_STACK_FRAME(_hx_pos_df7c67f29a40a680_116_getObjectProjectionMatrix,"away3d.lights.DirectionalLight","getObjectProjectionMatrix",0x94dc2885,"away3d.lights.DirectionalLight.getObjectProjectionMatrix","away3d/lights/DirectionalLight.hx",116,0xf31eb2b0)
namespace away3d{
namespace lights{

void DirectionalLight_obj::__construct(::hx::Null< Float >  __o_xDir,::hx::Null< Float >  __o_yDir,::hx::Null< Float >  __o_zDir){
            		Float xDir = __o_xDir.Default(0);
            		Float yDir = __o_yDir.Default(-1);
            		Float zDir = __o_zDir.Default(1);
            	HX_GC_STACKFRAME(&_hx_pos_df7c67f29a40a680_38_new)
HXLINE(  39)		super::__construct();
HXLINE(  40)		this->set_direction( ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,xDir,yDir,zDir,null()));
HXLINE(  41)		this->_sceneDirection =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            	}

Dynamic DirectionalLight_obj::__CreateEmpty() { return new DirectionalLight_obj; }

void *DirectionalLight_obj::_hx_vtable = 0;

Dynamic DirectionalLight_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DirectionalLight_obj > _hx_result = new DirectionalLight_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool DirectionalLight_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x13fff02b) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x07eee1ec) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x07eee1ec;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x12b32fa7 || inClassId==(int)0x13fff02b;
		}
	} else {
		if (inClassId<=(int)0x1e6a8fa2) {
			return inClassId==(int)0x1e01c5a7 || inClassId==(int)0x1e6a8fa2;
		} else {
			return inClassId==(int)0x37f46043;
		}
	}
}

 ::away3d::core::partition::EntityNode DirectionalLight_obj::createEntityPartitionNode(){
            	HX_GC_STACKFRAME(&_hx_pos_df7c67f29a40a680_46_createEntityPartitionNode)
HXDLIN(  46)		return  ::away3d::core::partition::DirectionalLightNode_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
            	}


 ::openfl::geom::Vector3D DirectionalLight_obj::get_sceneDirection(){
            	HX_STACKFRAME(&_hx_pos_df7c67f29a40a680_53_get_sceneDirection)
HXLINE(  54)		if (this->_sceneTransformDirty) {
HXLINE(  55)			this->updateSceneTransform();
            		}
HXLINE(  56)		return this->_sceneDirection;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DirectionalLight_obj,get_sceneDirection,return )

 ::openfl::geom::Vector3D DirectionalLight_obj::get_direction(){
            	HX_STACKFRAME(&_hx_pos_df7c67f29a40a680_64_get_direction)
HXDLIN(  64)		return this->_direction;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DirectionalLight_obj,get_direction,return )

 ::openfl::geom::Vector3D DirectionalLight_obj::set_direction( ::openfl::geom::Vector3D value){
            	HX_GC_STACKFRAME(&_hx_pos_df7c67f29a40a680_68_set_direction)
HXLINE(  69)		this->_direction = value;
HXLINE(  71)		if (::hx::IsNull( this->_tmpLookAt )) {
HXLINE(  72)			this->_tmpLookAt =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE(  73)		Float _hx_tmp = this->get_x();
HXDLIN(  73)		this->_tmpLookAt->x = (_hx_tmp + this->_direction->x);
HXLINE(  74)		Float _hx_tmp1 = this->get_y();
HXDLIN(  74)		this->_tmpLookAt->y = (_hx_tmp1 + this->_direction->y);
HXLINE(  75)		Float _hx_tmp2 = this->get_z();
HXDLIN(  75)		this->_tmpLookAt->z = (_hx_tmp2 + this->_direction->z);
HXLINE(  77)		this->lookAt(this->_tmpLookAt,null());
HXLINE(  78)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DirectionalLight_obj,set_direction,return )

 ::away3d::bounds::BoundingVolumeBase DirectionalLight_obj::getDefaultBoundingVolume(){
            	HX_GC_STACKFRAME(&_hx_pos_df7c67f29a40a680_87_getDefaultBoundingVolume)
HXDLIN(  87)		return  ::away3d::bounds::NullBounds_obj::__alloc( HX_CTX ,null(),null());
            	}


void DirectionalLight_obj::updateBounds(){
            	HX_STACKFRAME(&_hx_pos_df7c67f29a40a680_94_updateBounds)
            	}


void DirectionalLight_obj::updateSceneTransform(){
            	HX_STACKFRAME(&_hx_pos_df7c67f29a40a680_101_updateSceneTransform)
HXLINE( 102)		this->super::updateSceneTransform();
HXLINE( 103)		this->get_sceneTransform()->copyColumnTo(2,this->_sceneDirection);
HXLINE( 104)		this->_sceneDirection->normalize();
            	}


 ::away3d::lights::shadowmaps::ShadowMapperBase DirectionalLight_obj::createShadowMapper(){
            	HX_GC_STACKFRAME(&_hx_pos_df7c67f29a40a680_109_createShadowMapper)
HXDLIN( 109)		return  ::away3d::lights::shadowmaps::DirectionalShadowMapper_obj::__alloc( HX_CTX );
            	}


 ::openfl::geom::Matrix3D DirectionalLight_obj::getObjectProjectionMatrix(::Dynamic renderable, ::away3d::cameras::Camera3D camera, ::openfl::geom::Matrix3D target){
            	HX_GC_STACKFRAME(&_hx_pos_df7c67f29a40a680_116_getObjectProjectionMatrix)
HXLINE( 117)		 ::openfl::_Vector::FloatVector raw = ::away3d::core::math::Matrix3DUtils_obj::RAW_DATA_CONTAINER;
HXLINE( 118)		 ::away3d::bounds::BoundingVolumeBase bounds = ::away3d::core::base::IRenderable_obj::get_sourceEntity(renderable)->get_bounds();
HXLINE( 119)		 ::openfl::geom::Matrix3D m =  ::openfl::geom::Matrix3D_obj::__alloc( HX_CTX ,null());
HXLINE( 121)		m->copyFrom(::away3d::core::base::IRenderable_obj::getRenderSceneTransform(renderable,camera));
HXLINE( 122)		m->append(this->get_inverseSceneTransform());
HXLINE( 124)		if (::hx::IsNull( this->_projAABBPoints )) {
HXLINE( 125)			int length = null();
HXDLIN( 125)			bool fixed = null();
HXDLIN( 125)			::Array< Float > array = null();
HXDLIN( 125)			this->_projAABBPoints =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
            		}
HXLINE( 126)		 ::openfl::_Vector::FloatVector _hx_tmp = bounds->get_aabbPoints();
HXDLIN( 126)		m->transformVectors(_hx_tmp,this->_projAABBPoints);
HXLINE( 128)		Float xMin = ::Math_obj::POSITIVE_INFINITY;
HXDLIN( 128)		Float xMax = ::Math_obj::NEGATIVE_INFINITY;
HXDLIN( 128)		Float yMin = ::Math_obj::POSITIVE_INFINITY;
HXLINE( 129)		Float yMax = ::Math_obj::NEGATIVE_INFINITY;
HXDLIN( 129)		Float zMin = ::Math_obj::POSITIVE_INFINITY;
HXDLIN( 129)		Float zMax = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 130)		Float d;
HXLINE( 132)		int i = 0;
HXLINE( 133)		while((i < 24)){
HXLINE( 134)			i = (i + 1);
HXDLIN( 134)			d = this->_projAABBPoints->get((i - 1));
HXLINE( 135)			if ((d < xMin)) {
HXLINE( 136)				xMin = d;
            			}
HXLINE( 137)			if ((d > xMax)) {
HXLINE( 138)				xMax = d;
            			}
HXLINE( 139)			i = (i + 1);
HXDLIN( 139)			d = this->_projAABBPoints->get((i - 1));
HXLINE( 140)			if ((d < yMin)) {
HXLINE( 141)				yMin = d;
            			}
HXLINE( 142)			if ((d > yMax)) {
HXLINE( 143)				yMax = d;
            			}
HXLINE( 144)			i = (i + 1);
HXDLIN( 144)			d = this->_projAABBPoints->get((i - 1));
HXLINE( 145)			if ((d < zMin)) {
HXLINE( 146)				zMin = d;
            			}
HXLINE( 147)			if ((d > zMax)) {
HXLINE( 148)				zMax = d;
            			}
            		}
HXLINE( 151)		Float invXRange = (( (Float)(1) ) / (xMax - xMin));
HXLINE( 152)		Float invYRange = (( (Float)(1) ) / (yMax - yMin));
HXLINE( 153)		Float invZRange = (( (Float)(1) ) / (zMax - zMin));
HXLINE( 154)		raw->set(0,(( (Float)(2) ) * invXRange));
HXLINE( 155)		raw->set(5,(( (Float)(2) ) * invYRange));
HXLINE( 156)		raw->set(10,invZRange);
HXLINE( 157)		raw->set(12,(-((xMax + xMin)) * invXRange));
HXLINE( 158)		raw->set(13,(-((yMax + yMin)) * invYRange));
HXLINE( 159)		raw->set(14,(-(zMin) * invZRange));
HXLINE( 160)		raw->set(1,raw->set(2,raw->set(3,raw->set(4,raw->set(6,raw->set(7,raw->set(8,raw->set(9,raw->set(11,( (Float)(0) ))))))))));
HXLINE( 161)		raw->set(15,( (Float)(1) ));
HXLINE( 163)		if (::hx::IsNull( target )) {
HXLINE( 164)			target =  ::openfl::geom::Matrix3D_obj::__alloc( HX_CTX ,null());
            		}
HXLINE( 165)		target->copyRawDataFrom(raw,null(),null());
HXLINE( 166)		target->prepend(m);
HXLINE( 168)		return target;
            	}



::hx::ObjectPtr< DirectionalLight_obj > DirectionalLight_obj::__new(::hx::Null< Float >  __o_xDir,::hx::Null< Float >  __o_yDir,::hx::Null< Float >  __o_zDir) {
	::hx::ObjectPtr< DirectionalLight_obj > __this = new DirectionalLight_obj();
	__this->__construct(__o_xDir,__o_yDir,__o_zDir);
	return __this;
}

::hx::ObjectPtr< DirectionalLight_obj > DirectionalLight_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_xDir,::hx::Null< Float >  __o_yDir,::hx::Null< Float >  __o_zDir) {
	DirectionalLight_obj *__this = (DirectionalLight_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DirectionalLight_obj), true, "away3d.lights.DirectionalLight"));
	*(void **)__this = DirectionalLight_obj::_hx_vtable;
	__this->__construct(__o_xDir,__o_yDir,__o_zDir);
	return __this;
}

DirectionalLight_obj::DirectionalLight_obj()
{
}

void DirectionalLight_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DirectionalLight);
	HX_MARK_MEMBER_NAME(_direction,"_direction");
	HX_MARK_MEMBER_NAME(_tmpLookAt,"_tmpLookAt");
	HX_MARK_MEMBER_NAME(_sceneDirection,"_sceneDirection");
	HX_MARK_MEMBER_NAME(_projAABBPoints,"_projAABBPoints");
	 ::away3d::lights::LightBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DirectionalLight_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_direction,"_direction");
	HX_VISIT_MEMBER_NAME(_tmpLookAt,"_tmpLookAt");
	HX_VISIT_MEMBER_NAME(_sceneDirection,"_sceneDirection");
	HX_VISIT_MEMBER_NAME(_projAABBPoints,"_projAABBPoints");
	 ::away3d::lights::LightBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DirectionalLight_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_direction() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_direction") ) { return ::hx::Val( _direction ); }
		if (HX_FIELD_EQ(inName,"_tmpLookAt") ) { return ::hx::Val( _tmpLookAt ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateBounds") ) { return ::hx::Val( updateBounds_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_direction") ) { return ::hx::Val( get_direction_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_direction") ) { return ::hx::Val( set_direction_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"sceneDirection") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_sceneDirection() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_sceneDirection") ) { return ::hx::Val( _sceneDirection ); }
		if (HX_FIELD_EQ(inName,"_projAABBPoints") ) { return ::hx::Val( _projAABBPoints ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_sceneDirection") ) { return ::hx::Val( get_sceneDirection_dyn() ); }
		if (HX_FIELD_EQ(inName,"createShadowMapper") ) { return ::hx::Val( createShadowMapper_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateSceneTransform") ) { return ::hx::Val( updateSceneTransform_dyn() ); }
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

::hx::Val DirectionalLight_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_direction(inValue.Cast<  ::openfl::geom::Vector3D >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_direction") ) { _direction=inValue.Cast<  ::openfl::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tmpLookAt") ) { _tmpLookAt=inValue.Cast<  ::openfl::geom::Vector3D >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_sceneDirection") ) { _sceneDirection=inValue.Cast<  ::openfl::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_projAABBPoints") ) { _projAABBPoints=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DirectionalLight_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sceneDirection",53,df,d9,4c));
	outFields->push(HX_("direction",3f,62,40,10));
	outFields->push(HX_("_direction",00,de,e2,6b));
	outFields->push(HX_("_tmpLookAt",2a,85,2e,13));
	outFields->push(HX_("_sceneDirection",f2,27,3a,96));
	outFields->push(HX_("_projAABBPoints",5f,3f,86,68));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DirectionalLight_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(int)offsetof(DirectionalLight_obj,_direction),HX_("_direction",00,de,e2,6b)},
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(int)offsetof(DirectionalLight_obj,_tmpLookAt),HX_("_tmpLookAt",2a,85,2e,13)},
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(int)offsetof(DirectionalLight_obj,_sceneDirection),HX_("_sceneDirection",f2,27,3a,96)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(DirectionalLight_obj,_projAABBPoints),HX_("_projAABBPoints",5f,3f,86,68)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DirectionalLight_obj_sStaticStorageInfo = 0;
#endif

static ::String DirectionalLight_obj_sMemberFields[] = {
	HX_("_direction",00,de,e2,6b),
	HX_("_tmpLookAt",2a,85,2e,13),
	HX_("_sceneDirection",f2,27,3a,96),
	HX_("_projAABBPoints",5f,3f,86,68),
	HX_("createEntityPartitionNode",4d,b6,d9,04),
	HX_("get_sceneDirection",1c,c0,73,e8),
	HX_("get_direction",16,36,a4,d1),
	HX_("set_direction",22,18,aa,16),
	HX_("getDefaultBoundingVolume",89,f8,1c,2a),
	HX_("updateBounds",5e,2d,e1,65),
	HX_("updateSceneTransform",69,e2,be,04),
	HX_("createShadowMapper",dd,74,0c,2f),
	HX_("getObjectProjectionMatrix",45,66,62,86),
	::String(null()) };

::hx::Class DirectionalLight_obj::__mClass;

void DirectionalLight_obj::__register()
{
	DirectionalLight_obj _hx_dummy;
	DirectionalLight_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.lights.DirectionalLight",ae,52,78,ba);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DirectionalLight_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DirectionalLight_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DirectionalLight_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DirectionalLight_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace lights
