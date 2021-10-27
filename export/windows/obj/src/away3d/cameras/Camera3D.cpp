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
#ifndef INCLUDED_away3d_cameras_lenses_LensBase
#include <away3d/cameras/lenses/LensBase.h>
#endif
#ifndef INCLUDED_away3d_cameras_lenses_PerspectiveLens
#include <away3d/cameras/lenses/PerspectiveLens.h>
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
#ifndef INCLUDED_away3d_core_math_Plane3D
#include <away3d/core/math/Plane3D.h>
#endif
#ifndef INCLUDED_away3d_core_partition_CameraNode
#include <away3d/core/partition/CameraNode.h>
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
#ifndef INCLUDED_away3d_events_CameraEvent
#include <away3d/events/CameraEvent.h>
#endif
#ifndef INCLUDED_away3d_events_LensEvent
#include <away3d/events/LensEvent.h>
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
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_f74e0e36f9e78200_24_new,"away3d.cameras.Camera3D","new",0xde50a5f7,"away3d.cameras.Camera3D.new","away3d/cameras/Camera3D.hx",24,0x4d4c9797)
HX_LOCAL_STACK_FRAME(_hx_pos_f74e0e36f9e78200_63_getDefaultBoundingVolume,"away3d.cameras.Camera3D","getDefaultBoundingVolume",0xd0afe192,"away3d.cameras.Camera3D.getDefaultBoundingVolume","away3d/cameras/Camera3D.hx",63,0x4d4c9797)
HX_LOCAL_STACK_FRAME(_hx_pos_f74e0e36f9e78200_68_get_assetType,"away3d.cameras.Camera3D","get_assetType",0x367d6cf8,"away3d.cameras.Camera3D.get_assetType","away3d/cameras/Camera3D.hx",68,0x4d4c9797)
HX_LOCAL_STACK_FRAME(_hx_pos_f74e0e36f9e78200_72_onLensMatrixChanged,"away3d.cameras.Camera3D","onLensMatrixChanged",0x90a9764d,"away3d.cameras.Camera3D.onLensMatrixChanged","away3d/cameras/Camera3D.hx",72,0x4d4c9797)
HX_LOCAL_STACK_FRAME(_hx_pos_f74e0e36f9e78200_83_get_frustumPlanes,"away3d.cameras.Camera3D","get_frustumPlanes",0x5528dec7,"away3d.cameras.Camera3D.get_frustumPlanes","away3d/cameras/Camera3D.hx",83,0x4d4c9797)
HX_LOCAL_STACK_FRAME(_hx_pos_f74e0e36f9e78200_91_updateFrustum,"away3d.cameras.Camera3D","updateFrustum",0x5f5304b0,"away3d.cameras.Camera3D.updateFrustum","away3d/cameras/Camera3D.hx",91,0x4d4c9797)
HX_LOCAL_STACK_FRAME(_hx_pos_f74e0e36f9e78200_193_invalidateSceneTransform,"away3d.cameras.Camera3D","invalidateSceneTransform",0xf73ec264,"away3d.cameras.Camera3D.invalidateSceneTransform","away3d/cameras/Camera3D.hx",193,0x4d4c9797)
HX_LOCAL_STACK_FRAME(_hx_pos_f74e0e36f9e78200_204_updateBounds,"away3d.cameras.Camera3D","updateBounds",0x4a0e6ce7,"away3d.cameras.Camera3D.updateBounds","away3d/cameras/Camera3D.hx",204,0x4d4c9797)
HX_LOCAL_STACK_FRAME(_hx_pos_f74e0e36f9e78200_215_createEntityPartitionNode,"away3d.cameras.Camera3D","createEntityPartitionNode",0x1ed2b524,"away3d.cameras.Camera3D.createEntityPartitionNode","away3d/cameras/Camera3D.hx",215,0x4d4c9797)
HX_LOCAL_STACK_FRAME(_hx_pos_f74e0e36f9e78200_223_get_lens,"away3d.cameras.Camera3D","get_lens",0x1bad5190,"away3d.cameras.Camera3D.get_lens","away3d/cameras/Camera3D.hx",223,0x4d4c9797)
HX_LOCAL_STACK_FRAME(_hx_pos_f74e0e36f9e78200_227_set_lens,"away3d.cameras.Camera3D","set_lens",0xca0aab04,"away3d.cameras.Camera3D.set_lens","away3d/cameras/Camera3D.hx",227,0x4d4c9797)
HX_LOCAL_STACK_FRAME(_hx_pos_f74e0e36f9e78200_248_get_viewProjection,"away3d.cameras.Camera3D","get_viewProjection",0x53bb7c66,"away3d.cameras.Camera3D.get_viewProjection","away3d/cameras/Camera3D.hx",248,0x4d4c9797)
HX_LOCAL_STACK_FRAME(_hx_pos_f74e0e36f9e78200_269_unproject,"away3d.cameras.Camera3D","unproject",0x57e0ba77,"away3d.cameras.Camera3D.unproject","away3d/cameras/Camera3D.hx",269,0x4d4c9797)
HX_LOCAL_STACK_FRAME(_hx_pos_f74e0e36f9e78200_283_getRay,"away3d.cameras.Camera3D","getRay",0xd8eb91bd,"away3d.cameras.Camera3D.getRay","away3d/cameras/Camera3D.hx",283,0x4d4c9797)
HX_LOCAL_STACK_FRAME(_hx_pos_f74e0e36f9e78200_295_project,"away3d.cameras.Camera3D","project",0xccf7fff0,"away3d.cameras.Camera3D.project","away3d/cameras/Camera3D.hx",295,0x4d4c9797)
namespace away3d{
namespace cameras{

void Camera3D_obj::__construct( ::away3d::cameras::lenses::LensBase lens){
            	HX_GC_STACKFRAME(&_hx_pos_f74e0e36f9e78200_24_new)
HXLINE(  34)		this->_frustumPlanesDirty = true;
HXLINE(  31)		this->_viewProjectionDirty = true;
HXLINE(  30)		this->_viewProjection =  ::openfl::geom::Matrix3D_obj::__alloc( HX_CTX ,null());
HXLINE(  44)		super::__construct();
HXLINE(  47)		this->_lens = lens;
HXLINE(  48)		if (::hx::IsNull( this->_lens )) {
HXLINE(  48)			this->_lens =  ::away3d::cameras::lenses::PerspectiveLens_obj::__alloc( HX_CTX ,null(),null());
            		}
HXLINE(  50)		this->_lens->addEventListener(HX_("matrixChanged",b3,5c,37,91),this->onLensMatrixChanged_dyn(),null(),null(),null());
HXLINE(  53)		::Array< ::Dynamic> array = null();
HXDLIN(  53)		this->_frustumPlanes =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,6,true,array,true);
HXLINE(  55)		{
HXLINE(  56)			{
HXLINE(  56)				::Dynamic this1 = this->_frustumPlanes;
HXDLIN(  56)				( ( ::openfl::_Vector::ObjectVector)(this1) )->set(0, ::away3d::core::math::Plane3D_obj::__alloc( HX_CTX ,null(),null(),null(),null())).StaticCast<  ::away3d::core::math::Plane3D >();
            			}
HXDLIN(  56)			{
HXLINE(  56)				::Dynamic this2 = this->_frustumPlanes;
HXDLIN(  56)				( ( ::openfl::_Vector::ObjectVector)(this2) )->set(1, ::away3d::core::math::Plane3D_obj::__alloc( HX_CTX ,null(),null(),null(),null())).StaticCast<  ::away3d::core::math::Plane3D >();
            			}
HXDLIN(  56)			{
HXLINE(  56)				::Dynamic this3 = this->_frustumPlanes;
HXDLIN(  56)				( ( ::openfl::_Vector::ObjectVector)(this3) )->set(2, ::away3d::core::math::Plane3D_obj::__alloc( HX_CTX ,null(),null(),null(),null())).StaticCast<  ::away3d::core::math::Plane3D >();
            			}
HXDLIN(  56)			{
HXLINE(  56)				::Dynamic this4 = this->_frustumPlanes;
HXDLIN(  56)				( ( ::openfl::_Vector::ObjectVector)(this4) )->set(3, ::away3d::core::math::Plane3D_obj::__alloc( HX_CTX ,null(),null(),null(),null())).StaticCast<  ::away3d::core::math::Plane3D >();
            			}
HXDLIN(  56)			{
HXLINE(  56)				::Dynamic this5 = this->_frustumPlanes;
HXDLIN(  56)				( ( ::openfl::_Vector::ObjectVector)(this5) )->set(4, ::away3d::core::math::Plane3D_obj::__alloc( HX_CTX ,null(),null(),null(),null())).StaticCast<  ::away3d::core::math::Plane3D >();
            			}
HXDLIN(  56)			{
HXLINE(  56)				::Dynamic this6 = this->_frustumPlanes;
HXDLIN(  56)				( ( ::openfl::_Vector::ObjectVector)(this6) )->set(5, ::away3d::core::math::Plane3D_obj::__alloc( HX_CTX ,null(),null(),null(),null())).StaticCast<  ::away3d::core::math::Plane3D >();
            			}
            		}
HXLINE(  58)		this->set_z(( (Float)(-1000) ));
            	}

Dynamic Camera3D_obj::__CreateEmpty() { return new Camera3D_obj; }

void *Camera3D_obj::_hx_vtable = 0;

Dynamic Camera3D_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Camera3D_obj > _hx_result = new Camera3D_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Camera3D_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x13fff02b) {
		if (inClassId<=(int)0x12b32fa7) {
			if (inClassId<=(int)0x0c89e854) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
			} else {
				return inClassId==(int)0x12b32fa7;
			}
		} else {
			return inClassId==(int)0x13fff02b;
		}
	} else {
		if (inClassId<=(int)0x36e41561) {
			return inClassId==(int)0x1e6a8fa2 || inClassId==(int)0x36e41561;
		} else {
			return inClassId==(int)0x37f46043;
		}
	}
}

 ::away3d::bounds::BoundingVolumeBase Camera3D_obj::getDefaultBoundingVolume(){
            	HX_GC_STACKFRAME(&_hx_pos_f74e0e36f9e78200_63_getDefaultBoundingVolume)
HXDLIN(  63)		return  ::away3d::bounds::NullBounds_obj::__alloc( HX_CTX ,null(),null());
            	}


::String Camera3D_obj::get_assetType(){
            	HX_STACKFRAME(&_hx_pos_f74e0e36f9e78200_68_get_assetType)
HXDLIN(  68)		return HX_("camera",a5,46,8c,b7);
            	}


void Camera3D_obj::onLensMatrixChanged( ::away3d::events::LensEvent event){
            	HX_STACKFRAME(&_hx_pos_f74e0e36f9e78200_72_onLensMatrixChanged)
HXLINE(  73)		this->_viewProjectionDirty = true;
HXLINE(  74)		this->_frustumPlanesDirty = true;
HXLINE(  76)		this->dispatchEvent(event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Camera3D_obj,onLensMatrixChanged,(void))

 ::openfl::_Vector::ObjectVector Camera3D_obj::get_frustumPlanes(){
            	HX_STACKFRAME(&_hx_pos_f74e0e36f9e78200_83_get_frustumPlanes)
HXLINE(  84)		if (this->_frustumPlanesDirty) {
HXLINE(  85)			this->updateFrustum();
            		}
HXLINE(  87)		return this->_frustumPlanes;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Camera3D_obj,get_frustumPlanes,return )

void Camera3D_obj::updateFrustum(){
            	HX_STACKFRAME(&_hx_pos_f74e0e36f9e78200_91_updateFrustum)
HXLINE(  99)		 ::openfl::_Vector::FloatVector raw = ::away3d::core::math::Matrix3DUtils_obj::RAW_DATA_CONTAINER;
HXLINE( 101)		this->get_viewProjection()->copyRawDataTo(raw,null(),null());
HXLINE(  94)		Float c11 = raw->get(0);
HXDLIN(  94)		Float c12 = raw->get(4);
HXDLIN(  94)		Float c13 = raw->get(8);
HXDLIN(  94)		Float c14 = raw->get(12);
HXLINE(  95)		Float c21 = raw->get(1);
HXDLIN(  95)		Float c22 = raw->get(5);
HXDLIN(  95)		Float c23 = raw->get(9);
HXDLIN(  95)		Float c24 = raw->get(13);
HXLINE(  96)		Float c31 = raw->get(2);
HXDLIN(  96)		Float c32 = raw->get(6);
HXDLIN(  96)		Float c33 = raw->get(10);
HXDLIN(  96)		Float c34 = raw->get(14);
HXLINE(  97)		Float c41 = raw->get(3);
HXDLIN(  97)		Float c42 = raw->get(7);
HXDLIN(  97)		Float c43 = raw->get(11);
HXDLIN(  97)		Float c44 = raw->get(15);
HXLINE(  98)		 ::away3d::core::math::Plane3D p = this->_frustumPlanes->get(0).StaticCast<  ::away3d::core::math::Plane3D >();
HXLINE(  92)		Float a = (c41 + c11);
HXDLIN(  92)		Float b = (c42 + c12);
HXDLIN(  92)		Float c = (c43 + c13);
HXLINE( 100)		Float invLen = (( (Float)(1) ) / ::Math_obj::sqrt((((a * a) + (b * b)) + (c * c))));
HXLINE( 126)		p->a = (a * invLen);
HXLINE( 127)		p->b = (b * invLen);
HXLINE( 128)		p->c = (c * invLen);
HXLINE( 129)		p->d = (-((c44 + c14)) * invLen);
HXLINE( 132)		p = this->_frustumPlanes->get(1).StaticCast<  ::away3d::core::math::Plane3D >();
HXLINE( 133)		a = (c41 - c11);
HXLINE( 134)		b = (c42 - c12);
HXLINE( 135)		c = (c43 - c13);
HXLINE( 136)		invLen = (( (Float)(1) ) / ::Math_obj::sqrt((((a * a) + (b * b)) + (c * c))));
HXLINE( 137)		p->a = (a * invLen);
HXLINE( 138)		p->b = (b * invLen);
HXLINE( 139)		p->c = (c * invLen);
HXLINE( 140)		p->d = ((c14 - c44) * invLen);
HXLINE( 143)		p = this->_frustumPlanes->get(2).StaticCast<  ::away3d::core::math::Plane3D >();
HXLINE( 144)		a = (c41 + c21);
HXLINE( 145)		b = (c42 + c22);
HXLINE( 146)		c = (c43 + c23);
HXLINE( 147)		invLen = (( (Float)(1) ) / ::Math_obj::sqrt((((a * a) + (b * b)) + (c * c))));
HXLINE( 148)		p->a = (a * invLen);
HXLINE( 149)		p->b = (b * invLen);
HXLINE( 150)		p->c = (c * invLen);
HXLINE( 151)		p->d = (-((c44 + c24)) * invLen);
HXLINE( 154)		p = this->_frustumPlanes->get(3).StaticCast<  ::away3d::core::math::Plane3D >();
HXLINE( 155)		a = (c41 - c21);
HXLINE( 156)		b = (c42 - c22);
HXLINE( 157)		c = (c43 - c23);
HXLINE( 158)		invLen = (( (Float)(1) ) / ::Math_obj::sqrt((((a * a) + (b * b)) + (c * c))));
HXLINE( 159)		p->a = (a * invLen);
HXLINE( 160)		p->b = (b * invLen);
HXLINE( 161)		p->c = (c * invLen);
HXLINE( 162)		p->d = ((c24 - c44) * invLen);
HXLINE( 165)		p = this->_frustumPlanes->get(4).StaticCast<  ::away3d::core::math::Plane3D >();
HXLINE( 166)		a = c31;
HXLINE( 167)		b = c32;
HXLINE( 168)		c = c33;
HXLINE( 169)		invLen = (( (Float)(1) ) / ::Math_obj::sqrt((((a * a) + (b * b)) + (c * c))));
HXLINE( 170)		p->a = (a * invLen);
HXLINE( 171)		p->b = (b * invLen);
HXLINE( 172)		p->c = (c * invLen);
HXLINE( 173)		p->d = (-(c34) * invLen);
HXLINE( 176)		p = this->_frustumPlanes->get(5).StaticCast<  ::away3d::core::math::Plane3D >();
HXLINE( 177)		a = (c41 - c31);
HXLINE( 178)		b = (c42 - c32);
HXLINE( 179)		c = (c43 - c33);
HXLINE( 180)		invLen = (( (Float)(1) ) / ::Math_obj::sqrt((((a * a) + (b * b)) + (c * c))));
HXLINE( 181)		p->a = (a * invLen);
HXLINE( 182)		p->b = (b * invLen);
HXLINE( 183)		p->c = (c * invLen);
HXLINE( 184)		p->d = ((c34 - c44) * invLen);
HXLINE( 186)		this->_frustumPlanesDirty = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Camera3D_obj,updateFrustum,(void))

void Camera3D_obj::invalidateSceneTransform(){
            	HX_STACKFRAME(&_hx_pos_f74e0e36f9e78200_193_invalidateSceneTransform)
HXLINE( 194)		this->super::invalidateSceneTransform();
HXLINE( 196)		this->_viewProjectionDirty = true;
HXLINE( 197)		this->_frustumPlanesDirty = true;
            	}


void Camera3D_obj::updateBounds(){
            	HX_STACKFRAME(&_hx_pos_f74e0e36f9e78200_204_updateBounds)
HXLINE( 205)		this->_bounds->nullify();
HXLINE( 207)		this->_boundsInvalid = false;
            	}


 ::away3d::core::partition::EntityNode Camera3D_obj::createEntityPartitionNode(){
            	HX_GC_STACKFRAME(&_hx_pos_f74e0e36f9e78200_215_createEntityPartitionNode)
HXDLIN( 215)		return  ::away3d::core::partition::CameraNode_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
            	}


 ::away3d::cameras::lenses::LensBase Camera3D_obj::get_lens(){
            	HX_STACKFRAME(&_hx_pos_f74e0e36f9e78200_223_get_lens)
HXDLIN( 223)		return this->_lens;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Camera3D_obj,get_lens,return )

 ::away3d::cameras::lenses::LensBase Camera3D_obj::set_lens( ::away3d::cameras::lenses::LensBase value){
            	HX_GC_STACKFRAME(&_hx_pos_f74e0e36f9e78200_227_set_lens)
HXLINE( 228)		if (::hx::IsInstanceEq( this->_lens,value )) {
HXLINE( 229)			return value;
            		}
HXLINE( 231)		if (::hx::IsNull( value )) {
HXLINE( 232)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("Lens cannot be null!",58,81,44,bb),null())));
            		}
HXLINE( 234)		this->_lens->removeEventListener(HX_("matrixChanged",b3,5c,37,91),this->onLensMatrixChanged_dyn(),null());
HXLINE( 236)		this->_lens = value;
HXLINE( 238)		this->_lens->addEventListener(HX_("matrixChanged",b3,5c,37,91),this->onLensMatrixChanged_dyn(),null(),null(),null());
HXLINE( 240)		this->dispatchEvent( ::away3d::events::CameraEvent_obj::__alloc( HX_CTX ,HX_("lensChanged",96,c5,b8,2a),::hx::ObjectPtr<OBJ_>(this),null(),null()));
HXLINE( 241)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Camera3D_obj,set_lens,return )

 ::openfl::geom::Matrix3D Camera3D_obj::get_viewProjection(){
            	HX_STACKFRAME(&_hx_pos_f74e0e36f9e78200_248_get_viewProjection)
HXLINE( 249)		if (this->_viewProjectionDirty) {
HXLINE( 250)			 ::openfl::geom::Matrix3D _hx_tmp = this->_viewProjection;
HXDLIN( 250)			_hx_tmp->copyFrom(this->get_inverseSceneTransform());
HXLINE( 251)			 ::openfl::geom::Matrix3D _hx_tmp1 = this->_viewProjection;
HXDLIN( 251)			_hx_tmp1->append(this->_lens->get_matrix());
HXLINE( 252)			this->_viewProjectionDirty = false;
            		}
HXLINE( 255)		return this->_viewProjection;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Camera3D_obj,get_viewProjection,return )

 ::openfl::geom::Vector3D Camera3D_obj::unproject(Float nX,Float nY,Float sZ, ::openfl::geom::Vector3D v){
            	HX_STACKFRAME(&_hx_pos_f74e0e36f9e78200_269_unproject)
HXDLIN( 269)		 ::openfl::geom::Matrix3D _hx_tmp = this->get_sceneTransform();
HXDLIN( 269)		return ::away3d::core::math::Matrix3DUtils_obj::transformVector(_hx_tmp,this->get_lens()->unproject(nX,nY,sZ,v),v);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Camera3D_obj,unproject,return )

 ::openfl::geom::Vector3D Camera3D_obj::getRay(Float nX,Float nY,Float sZ, ::openfl::geom::Vector3D v){
            	HX_STACKFRAME(&_hx_pos_f74e0e36f9e78200_283_getRay)
HXDLIN( 283)		 ::openfl::geom::Matrix3D _hx_tmp = this->get_sceneTransform();
HXDLIN( 283)		return ::away3d::core::math::Matrix3DUtils_obj::deltaTransformVector(_hx_tmp,this->get_lens()->unproject(nX,nY,sZ,v),v);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Camera3D_obj,getRay,return )

 ::openfl::geom::Vector3D Camera3D_obj::project( ::openfl::geom::Vector3D point3d, ::openfl::geom::Vector3D v){
            	HX_STACKFRAME(&_hx_pos_f74e0e36f9e78200_295_project)
HXDLIN( 295)		 ::away3d::cameras::lenses::LensBase _hx_tmp = this->get_lens();
HXDLIN( 295)		return _hx_tmp->project(::away3d::core::math::Matrix3DUtils_obj::transformVector(this->get_inverseSceneTransform(),point3d,v),v);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Camera3D_obj,project,return )


::hx::ObjectPtr< Camera3D_obj > Camera3D_obj::__new( ::away3d::cameras::lenses::LensBase lens) {
	::hx::ObjectPtr< Camera3D_obj > __this = new Camera3D_obj();
	__this->__construct(lens);
	return __this;
}

::hx::ObjectPtr< Camera3D_obj > Camera3D_obj::__alloc(::hx::Ctx *_hx_ctx, ::away3d::cameras::lenses::LensBase lens) {
	Camera3D_obj *__this = (Camera3D_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Camera3D_obj), true, "away3d.cameras.Camera3D"));
	*(void **)__this = Camera3D_obj::_hx_vtable;
	__this->__construct(lens);
	return __this;
}

Camera3D_obj::Camera3D_obj()
{
}

void Camera3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Camera3D);
	HX_MARK_MEMBER_NAME(_viewProjection,"_viewProjection");
	HX_MARK_MEMBER_NAME(_viewProjectionDirty,"_viewProjectionDirty");
	HX_MARK_MEMBER_NAME(_lens,"_lens");
	HX_MARK_MEMBER_NAME(_frustumPlanes,"_frustumPlanes");
	HX_MARK_MEMBER_NAME(_frustumPlanesDirty,"_frustumPlanesDirty");
	 ::away3d::entities::Entity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Camera3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_viewProjection,"_viewProjection");
	HX_VISIT_MEMBER_NAME(_viewProjectionDirty,"_viewProjectionDirty");
	HX_VISIT_MEMBER_NAME(_lens,"_lens");
	HX_VISIT_MEMBER_NAME(_frustumPlanes,"_frustumPlanes");
	HX_VISIT_MEMBER_NAME(_frustumPlanesDirty,"_frustumPlanesDirty");
	 ::away3d::entities::Entity_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Camera3D_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lens") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_lens() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_lens") ) { return ::hx::Val( _lens ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getRay") ) { return ::hx::Val( getRay_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"project") ) { return ::hx::Val( project_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_lens") ) { return ::hx::Val( get_lens_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_lens") ) { return ::hx::Val( set_lens_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"unproject") ) { return ::hx::Val( unproject_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateBounds") ) { return ::hx::Val( updateBounds_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"frustumPlanes") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_frustumPlanes() ); }
		if (HX_FIELD_EQ(inName,"get_assetType") ) { return ::hx::Val( get_assetType_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateFrustum") ) { return ::hx::Val( updateFrustum_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"viewProjection") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_viewProjection() ); }
		if (HX_FIELD_EQ(inName,"_frustumPlanes") ) { return ::hx::Val( _frustumPlanes ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_viewProjection") ) { return ::hx::Val( _viewProjection ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_frustumPlanes") ) { return ::hx::Val( get_frustumPlanes_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_viewProjection") ) { return ::hx::Val( get_viewProjection_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_frustumPlanesDirty") ) { return ::hx::Val( _frustumPlanesDirty ); }
		if (HX_FIELD_EQ(inName,"onLensMatrixChanged") ) { return ::hx::Val( onLensMatrixChanged_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_viewProjectionDirty") ) { return ::hx::Val( _viewProjectionDirty ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getDefaultBoundingVolume") ) { return ::hx::Val( getDefaultBoundingVolume_dyn() ); }
		if (HX_FIELD_EQ(inName,"invalidateSceneTransform") ) { return ::hx::Val( invalidateSceneTransform_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"createEntityPartitionNode") ) { return ::hx::Val( createEntityPartitionNode_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Camera3D_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lens") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_lens(inValue.Cast<  ::away3d::cameras::lenses::LensBase >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_lens") ) { _lens=inValue.Cast<  ::away3d::cameras::lenses::LensBase >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_frustumPlanes") ) { _frustumPlanes=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_viewProjection") ) { _viewProjection=inValue.Cast<  ::openfl::geom::Matrix3D >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_frustumPlanesDirty") ) { _frustumPlanesDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_viewProjectionDirty") ) { _viewProjectionDirty=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Camera3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("frustumPlanes",99,03,66,33));
	outFields->push(HX_("lens",fe,0e,b0,47));
	outFields->push(HX_("viewProjection",54,8f,fe,ea));
	outFields->push(HX_("_viewProjection",f3,d7,5e,34));
	outFields->push(HX_("_viewProjectionDirty",1f,37,2c,87));
	outFields->push(HX_("_lens",dd,2a,c1,fa));
	outFields->push(HX_("_frustumPlanes",da,f3,b7,71));
	outFields->push(HX_("_frustumPlanesDirty",d8,95,61,46));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Camera3D_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::geom::Matrix3D */ ,(int)offsetof(Camera3D_obj,_viewProjection),HX_("_viewProjection",f3,d7,5e,34)},
	{::hx::fsBool,(int)offsetof(Camera3D_obj,_viewProjectionDirty),HX_("_viewProjectionDirty",1f,37,2c,87)},
	{::hx::fsObject /*  ::away3d::cameras::lenses::LensBase */ ,(int)offsetof(Camera3D_obj,_lens),HX_("_lens",dd,2a,c1,fa)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(Camera3D_obj,_frustumPlanes),HX_("_frustumPlanes",da,f3,b7,71)},
	{::hx::fsBool,(int)offsetof(Camera3D_obj,_frustumPlanesDirty),HX_("_frustumPlanesDirty",d8,95,61,46)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Camera3D_obj_sStaticStorageInfo = 0;
#endif

static ::String Camera3D_obj_sMemberFields[] = {
	HX_("_viewProjection",f3,d7,5e,34),
	HX_("_viewProjectionDirty",1f,37,2c,87),
	HX_("_lens",dd,2a,c1,fa),
	HX_("_frustumPlanes",da,f3,b7,71),
	HX_("_frustumPlanesDirty",d8,95,61,46),
	HX_("getDefaultBoundingVolume",89,f8,1c,2a),
	HX_("get_assetType",a1,14,13,73),
	HX_("onLensMatrixChanged",b6,c2,21,df),
	HX_("get_frustumPlanes",f0,0e,d6,39),
	HX_("updateFrustum",59,ac,e8,9b),
	HX_("invalidateSceneTransform",5b,d9,ab,50),
	HX_("updateBounds",5e,2d,e1,65),
	HX_("createEntityPartitionNode",4d,b6,d9,04),
	HX_("get_lens",87,ca,6a,c7),
	HX_("set_lens",fb,23,c8,75),
	HX_("get_viewProjection",1d,70,98,86),
	HX_("unproject",a0,19,ed,f1),
	HX_("getRay",f4,0e,26,a3),
	HX_("project",d9,12,eb,f5),
	::String(null()) };

::hx::Class Camera3D_obj::__mClass;

void Camera3D_obj::__register()
{
	Camera3D_obj _hx_dummy;
	Camera3D_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.cameras.Camera3D",85,de,82,4d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Camera3D_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Camera3D_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Camera3D_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Camera3D_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace cameras
