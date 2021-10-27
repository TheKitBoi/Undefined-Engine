#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_away3d_bounds_AxisAlignedBoundingBox
#include <away3d/bounds/AxisAlignedBoundingBox.h>
#endif
#ifndef INCLUDED_away3d_bounds_BoundingVolumeBase
#include <away3d/bounds/BoundingVolumeBase.h>
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
#ifndef INCLUDED_away3d_primitives_WireframeCube
#include <away3d/primitives/WireframeCube.h>
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
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_d503347f673d0e32_14_new,"away3d.bounds.AxisAlignedBoundingBox","new",0xbac8d600,"away3d.bounds.AxisAlignedBoundingBox.new","away3d/bounds/AxisAlignedBoundingBox.hx",14,0xa39ff350)
HX_LOCAL_STACK_FRAME(_hx_pos_d503347f673d0e32_39_nullify,"away3d.bounds.AxisAlignedBoundingBox","nullify",0xd6ec4b75,"away3d.bounds.AxisAlignedBoundingBox.nullify","away3d/bounds/AxisAlignedBoundingBox.hx",39,0xa39ff350)
HX_LOCAL_STACK_FRAME(_hx_pos_d503347f673d0e32_49_isInFrustum,"away3d.bounds.AxisAlignedBoundingBox","isInFrustum",0xda60e653,"away3d.bounds.AxisAlignedBoundingBox.isInFrustum","away3d/bounds/AxisAlignedBoundingBox.hx",49,0xa39ff350)
HX_LOCAL_STACK_FRAME(_hx_pos_d503347f673d0e32_67_rayIntersection,"away3d.bounds.AxisAlignedBoundingBox","rayIntersection",0xd4dff0f3,"away3d.bounds.AxisAlignedBoundingBox.rayIntersection","away3d/bounds/AxisAlignedBoundingBox.hx",67,0xa39ff350)
HX_LOCAL_STACK_FRAME(_hx_pos_d503347f673d0e32_165_containsPoint,"away3d.bounds.AxisAlignedBoundingBox","containsPoint",0xb4bc0751,"away3d.bounds.AxisAlignedBoundingBox.containsPoint","away3d/bounds/AxisAlignedBoundingBox.hx",165,0xa39ff350)
HX_LOCAL_STACK_FRAME(_hx_pos_d503347f673d0e32_176_fromExtremes,"away3d.bounds.AxisAlignedBoundingBox","fromExtremes",0x690469f1,"away3d.bounds.AxisAlignedBoundingBox.fromExtremes","away3d/bounds/AxisAlignedBoundingBox.hx",176,0xa39ff350)
HX_LOCAL_STACK_FRAME(_hx_pos_d503347f673d0e32_190_clone,"away3d.bounds.AxisAlignedBoundingBox","clone",0x4e5cc0fd,"away3d.bounds.AxisAlignedBoundingBox.clone","away3d/bounds/AxisAlignedBoundingBox.hx",190,0xa39ff350)
HX_LOCAL_STACK_FRAME(_hx_pos_d503347f673d0e32_198_get_halfExtentsX,"away3d.bounds.AxisAlignedBoundingBox","get_halfExtentsX",0xa43938ab,"away3d.bounds.AxisAlignedBoundingBox.get_halfExtentsX","away3d/bounds/AxisAlignedBoundingBox.hx",198,0xa39ff350)
HX_LOCAL_STACK_FRAME(_hx_pos_d503347f673d0e32_203_get_halfExtentsY,"away3d.bounds.AxisAlignedBoundingBox","get_halfExtentsY",0xa43938ac,"away3d.bounds.AxisAlignedBoundingBox.get_halfExtentsY","away3d/bounds/AxisAlignedBoundingBox.hx",203,0xa39ff350)
HX_LOCAL_STACK_FRAME(_hx_pos_d503347f673d0e32_208_get_halfExtentsZ,"away3d.bounds.AxisAlignedBoundingBox","get_halfExtentsZ",0xa43938ad,"away3d.bounds.AxisAlignedBoundingBox.get_halfExtentsZ","away3d/bounds/AxisAlignedBoundingBox.hx",208,0xa39ff350)
HX_LOCAL_STACK_FRAME(_hx_pos_d503347f673d0e32_218_closestPointToPoint,"away3d.bounds.AxisAlignedBoundingBox","closestPointToPoint",0x58a9abfe,"away3d.bounds.AxisAlignedBoundingBox.closestPointToPoint","away3d/bounds/AxisAlignedBoundingBox.hx",218,0xa39ff350)
HX_LOCAL_STACK_FRAME(_hx_pos_d503347f673d0e32_248_updateBoundingRenderable,"away3d.bounds.AxisAlignedBoundingBox","updateBoundingRenderable",0x2b6fb33d,"away3d.bounds.AxisAlignedBoundingBox.updateBoundingRenderable","away3d/bounds/AxisAlignedBoundingBox.hx",248,0xa39ff350)
HX_LOCAL_STACK_FRAME(_hx_pos_d503347f673d0e32_259_createBoundingRenderable,"away3d.bounds.AxisAlignedBoundingBox","createBoundingRenderable",0x53dbccf0,"away3d.bounds.AxisAlignedBoundingBox.createBoundingRenderable","away3d/bounds/AxisAlignedBoundingBox.hx",259,0xa39ff350)
HX_LOCAL_STACK_FRAME(_hx_pos_d503347f673d0e32_263_classifyToPlane,"away3d.bounds.AxisAlignedBoundingBox","classifyToPlane",0x5bf3481d,"away3d.bounds.AxisAlignedBoundingBox.classifyToPlane","away3d/bounds/AxisAlignedBoundingBox.hx",263,0xa39ff350)
HX_LOCAL_STACK_FRAME(_hx_pos_d503347f673d0e32_282_transformFrom,"away3d.bounds.AxisAlignedBoundingBox","transformFrom",0x92e07296,"away3d.bounds.AxisAlignedBoundingBox.transformFrom","away3d/bounds/AxisAlignedBoundingBox.hx",282,0xa39ff350)
namespace away3d{
namespace bounds{

void AxisAlignedBoundingBox_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d503347f673d0e32_14_new)
HXLINE(  25)		this->_halfExtentsZ = ((Float)0);
HXLINE(  24)		this->_halfExtentsY = ((Float)0);
HXLINE(  23)		this->_halfExtentsX = ((Float)0);
HXLINE(  22)		this->_centerZ = ((Float)0);
HXLINE(  21)		this->_centerY = ((Float)0);
HXLINE(  20)		this->_centerX = ((Float)0);
HXLINE(  32)		super::__construct();
            	}

Dynamic AxisAlignedBoundingBox_obj::__CreateEmpty() { return new AxisAlignedBoundingBox_obj; }

void *AxisAlignedBoundingBox_obj::_hx_vtable = 0;

Dynamic AxisAlignedBoundingBox_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AxisAlignedBoundingBox_obj > _hx_result = new AxisAlignedBoundingBox_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AxisAlignedBoundingBox_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x09388beb) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x09388beb;
	} else {
		return inClassId==(int)0x30600860;
	}
}

void AxisAlignedBoundingBox_obj::nullify(){
            	HX_STACKFRAME(&_hx_pos_d503347f673d0e32_39_nullify)
HXLINE(  40)		this->super::nullify();
HXLINE(  41)		this->_centerX = (this->_centerY = (this->_centerZ = ( (Float)(0) )));
HXLINE(  42)		this->_halfExtentsX = (this->_halfExtentsY = (this->_halfExtentsZ = ( (Float)(0) )));
            	}


bool AxisAlignedBoundingBox_obj::isInFrustum( ::openfl::_Vector::ObjectVector planes,int numPlanes){
            	HX_STACKFRAME(&_hx_pos_d503347f673d0e32_49_isInFrustum)
HXLINE(  50)		{
HXLINE(  50)			int _g = 0;
HXDLIN(  50)			int _g1 = numPlanes;
HXDLIN(  50)			while((_g < _g1)){
HXLINE(  50)				_g = (_g + 1);
HXDLIN(  50)				int i = (_g - 1);
HXLINE(  51)				 ::away3d::core::math::Plane3D plane = planes->get(i).StaticCast<  ::away3d::core::math::Plane3D >();
HXLINE(  52)				Float a = plane->a;
HXLINE(  53)				Float b = plane->b;
HXLINE(  54)				Float c = plane->c;
HXLINE(  55)				Float flippedExtentX;
HXDLIN(  55)				if ((a < 0)) {
HXLINE(  55)					flippedExtentX = -(this->_halfExtentsX);
            				}
            				else {
HXLINE(  55)					flippedExtentX = this->_halfExtentsX;
            				}
HXLINE(  56)				Float flippedExtentY;
HXDLIN(  56)				if ((b < 0)) {
HXLINE(  56)					flippedExtentY = -(this->_halfExtentsY);
            				}
            				else {
HXLINE(  56)					flippedExtentY = this->_halfExtentsY;
            				}
HXLINE(  57)				Float flippedExtentZ;
HXDLIN(  57)				if ((c < 0)) {
HXLINE(  57)					flippedExtentZ = -(this->_halfExtentsZ);
            				}
            				else {
HXLINE(  57)					flippedExtentZ = this->_halfExtentsZ;
            				}
HXLINE(  58)				Float projDist = ((((a * (this->_centerX + flippedExtentX)) + (b * (this->_centerY + flippedExtentY))) + (c * (this->_centerZ + flippedExtentZ))) - plane->d);
HXLINE(  59)				if ((projDist < 0)) {
HXLINE(  60)					return false;
            				}
            			}
            		}
HXLINE(  63)		return true;
            	}


Float AxisAlignedBoundingBox_obj::rayIntersection( ::openfl::geom::Vector3D position, ::openfl::geom::Vector3D direction, ::openfl::geom::Vector3D targetNormal){
            	HX_STACKFRAME(&_hx_pos_d503347f673d0e32_67_rayIntersection)
HXLINE(  68)		if (this->containsPoint(position)) {
HXLINE(  69)			return ( (Float)(0) );
            		}
HXLINE(  71)		Float px = (position->x - this->_centerX);
HXDLIN(  71)		Float py = (position->y - this->_centerY);
HXDLIN(  71)		Float pz = (position->z - this->_centerZ);
HXLINE(  72)		Float vx = direction->x;
HXDLIN(  72)		Float vy = direction->y;
HXDLIN(  72)		Float vz = direction->z;
HXLINE(  73)		Float ix;
HXDLIN(  73)		Float iy;
HXDLIN(  73)		Float iz;
HXLINE(  74)		Float rayEntryDistance = ( (Float)(0) );
HXLINE(  77)		bool intersects = false;
HXLINE(  78)		if ((vx < 0)) {
HXLINE(  79)			rayEntryDistance = ((this->_halfExtentsX - px) / vx);
HXLINE(  80)			if ((rayEntryDistance > 0)) {
HXLINE(  81)				iy = (py + (rayEntryDistance * vy));
HXLINE(  82)				iz = (pz + (rayEntryDistance * vz));
HXLINE(  83)				bool _hx_tmp;
HXDLIN(  83)				bool _hx_tmp1;
HXDLIN(  83)				bool _hx_tmp2;
HXDLIN(  83)				if ((iy > -(this->_halfExtentsY))) {
HXLINE(  83)					_hx_tmp2 = (iy < this->_halfExtentsY);
            				}
            				else {
HXLINE(  83)					_hx_tmp2 = false;
            				}
HXDLIN(  83)				if (_hx_tmp2) {
HXLINE(  83)					_hx_tmp1 = (iz > -(this->_halfExtentsZ));
            				}
            				else {
HXLINE(  83)					_hx_tmp1 = false;
            				}
HXDLIN(  83)				if (_hx_tmp1) {
HXLINE(  83)					_hx_tmp = (iz < this->_halfExtentsZ);
            				}
            				else {
HXLINE(  83)					_hx_tmp = false;
            				}
HXDLIN(  83)				if (_hx_tmp) {
HXLINE(  84)					targetNormal->x = ( (Float)(1) );
HXLINE(  85)					targetNormal->y = ( (Float)(0) );
HXLINE(  86)					targetNormal->z = ( (Float)(0) );
HXLINE(  88)					intersects = true;
            				}
            			}
            		}
HXLINE(  92)		bool _hx_tmp;
HXDLIN(  92)		if (!(intersects)) {
HXLINE(  92)			_hx_tmp = (vx > 0);
            		}
            		else {
HXLINE(  92)			_hx_tmp = false;
            		}
HXDLIN(  92)		if (_hx_tmp) {
HXLINE(  93)			rayEntryDistance = ((-(this->_halfExtentsX) - px) / vx);
HXLINE(  94)			if ((rayEntryDistance > 0)) {
HXLINE(  95)				iy = (py + (rayEntryDistance * vy));
HXLINE(  96)				iz = (pz + (rayEntryDistance * vz));
HXLINE(  97)				bool _hx_tmp;
HXDLIN(  97)				bool _hx_tmp1;
HXDLIN(  97)				bool _hx_tmp2;
HXDLIN(  97)				if ((iy > -(this->_halfExtentsY))) {
HXLINE(  97)					_hx_tmp2 = (iy < this->_halfExtentsY);
            				}
            				else {
HXLINE(  97)					_hx_tmp2 = false;
            				}
HXDLIN(  97)				if (_hx_tmp2) {
HXLINE(  97)					_hx_tmp1 = (iz > -(this->_halfExtentsZ));
            				}
            				else {
HXLINE(  97)					_hx_tmp1 = false;
            				}
HXDLIN(  97)				if (_hx_tmp1) {
HXLINE(  97)					_hx_tmp = (iz < this->_halfExtentsZ);
            				}
            				else {
HXLINE(  97)					_hx_tmp = false;
            				}
HXDLIN(  97)				if (_hx_tmp) {
HXLINE(  98)					targetNormal->x = ( (Float)(-1) );
HXLINE(  99)					targetNormal->y = ( (Float)(0) );
HXLINE( 100)					targetNormal->z = ( (Float)(0) );
HXLINE( 101)					intersects = true;
            				}
            			}
            		}
HXLINE( 105)		bool _hx_tmp1;
HXDLIN( 105)		if (!(intersects)) {
HXLINE( 105)			_hx_tmp1 = (vy < 0);
            		}
            		else {
HXLINE( 105)			_hx_tmp1 = false;
            		}
HXDLIN( 105)		if (_hx_tmp1) {
HXLINE( 106)			rayEntryDistance = ((this->_halfExtentsY - py) / vy);
HXLINE( 107)			if ((rayEntryDistance > 0)) {
HXLINE( 108)				ix = (px + (rayEntryDistance * vx));
HXLINE( 109)				iz = (pz + (rayEntryDistance * vz));
HXLINE( 110)				bool _hx_tmp;
HXDLIN( 110)				bool _hx_tmp1;
HXDLIN( 110)				bool _hx_tmp2;
HXDLIN( 110)				if ((ix > -(this->_halfExtentsX))) {
HXLINE( 110)					_hx_tmp2 = (ix < this->_halfExtentsX);
            				}
            				else {
HXLINE( 110)					_hx_tmp2 = false;
            				}
HXDLIN( 110)				if (_hx_tmp2) {
HXLINE( 110)					_hx_tmp1 = (iz > -(this->_halfExtentsZ));
            				}
            				else {
HXLINE( 110)					_hx_tmp1 = false;
            				}
HXDLIN( 110)				if (_hx_tmp1) {
HXLINE( 110)					_hx_tmp = (iz < this->_halfExtentsZ);
            				}
            				else {
HXLINE( 110)					_hx_tmp = false;
            				}
HXDLIN( 110)				if (_hx_tmp) {
HXLINE( 111)					targetNormal->x = ( (Float)(0) );
HXLINE( 112)					targetNormal->y = ( (Float)(1) );
HXLINE( 113)					targetNormal->z = ( (Float)(0) );
HXLINE( 114)					intersects = true;
            				}
            			}
            		}
HXLINE( 118)		bool _hx_tmp2;
HXDLIN( 118)		if (!(intersects)) {
HXLINE( 118)			_hx_tmp2 = (vy > 0);
            		}
            		else {
HXLINE( 118)			_hx_tmp2 = false;
            		}
HXDLIN( 118)		if (_hx_tmp2) {
HXLINE( 119)			rayEntryDistance = ((-(this->_halfExtentsY) - py) / vy);
HXLINE( 120)			if ((rayEntryDistance > 0)) {
HXLINE( 121)				ix = (px + (rayEntryDistance * vx));
HXLINE( 122)				iz = (pz + (rayEntryDistance * vz));
HXLINE( 123)				bool _hx_tmp;
HXDLIN( 123)				bool _hx_tmp1;
HXDLIN( 123)				bool _hx_tmp2;
HXDLIN( 123)				if ((ix > -(this->_halfExtentsX))) {
HXLINE( 123)					_hx_tmp2 = (ix < this->_halfExtentsX);
            				}
            				else {
HXLINE( 123)					_hx_tmp2 = false;
            				}
HXDLIN( 123)				if (_hx_tmp2) {
HXLINE( 123)					_hx_tmp1 = (iz > -(this->_halfExtentsZ));
            				}
            				else {
HXLINE( 123)					_hx_tmp1 = false;
            				}
HXDLIN( 123)				if (_hx_tmp1) {
HXLINE( 123)					_hx_tmp = (iz < this->_halfExtentsZ);
            				}
            				else {
HXLINE( 123)					_hx_tmp = false;
            				}
HXDLIN( 123)				if (_hx_tmp) {
HXLINE( 124)					targetNormal->x = ( (Float)(0) );
HXLINE( 125)					targetNormal->y = ( (Float)(-1) );
HXLINE( 126)					targetNormal->z = ( (Float)(0) );
HXLINE( 127)					intersects = true;
            				}
            			}
            		}
HXLINE( 131)		bool _hx_tmp3;
HXDLIN( 131)		if (!(intersects)) {
HXLINE( 131)			_hx_tmp3 = (vz < 0);
            		}
            		else {
HXLINE( 131)			_hx_tmp3 = false;
            		}
HXDLIN( 131)		if (_hx_tmp3) {
HXLINE( 132)			rayEntryDistance = ((this->_halfExtentsZ - pz) / vz);
HXLINE( 133)			if ((rayEntryDistance > 0)) {
HXLINE( 134)				ix = (px + (rayEntryDistance * vx));
HXLINE( 135)				iy = (py + (rayEntryDistance * vy));
HXLINE( 136)				bool _hx_tmp;
HXDLIN( 136)				bool _hx_tmp1;
HXDLIN( 136)				bool _hx_tmp2;
HXDLIN( 136)				if ((iy > -(this->_halfExtentsY))) {
HXLINE( 136)					_hx_tmp2 = (iy < this->_halfExtentsY);
            				}
            				else {
HXLINE( 136)					_hx_tmp2 = false;
            				}
HXDLIN( 136)				if (_hx_tmp2) {
HXLINE( 136)					_hx_tmp1 = (ix > -(this->_halfExtentsX));
            				}
            				else {
HXLINE( 136)					_hx_tmp1 = false;
            				}
HXDLIN( 136)				if (_hx_tmp1) {
HXLINE( 136)					_hx_tmp = (ix < this->_halfExtentsX);
            				}
            				else {
HXLINE( 136)					_hx_tmp = false;
            				}
HXDLIN( 136)				if (_hx_tmp) {
HXLINE( 137)					targetNormal->x = ( (Float)(0) );
HXLINE( 138)					targetNormal->y = ( (Float)(0) );
HXLINE( 139)					targetNormal->z = ( (Float)(1) );
HXLINE( 140)					intersects = true;
            				}
            			}
            		}
HXLINE( 144)		bool _hx_tmp4;
HXDLIN( 144)		if (!(intersects)) {
HXLINE( 144)			_hx_tmp4 = (vz > 0);
            		}
            		else {
HXLINE( 144)			_hx_tmp4 = false;
            		}
HXDLIN( 144)		if (_hx_tmp4) {
HXLINE( 145)			rayEntryDistance = ((-(this->_halfExtentsZ) - pz) / vz);
HXLINE( 146)			if ((rayEntryDistance > 0)) {
HXLINE( 147)				ix = (px + (rayEntryDistance * vx));
HXLINE( 148)				iy = (py + (rayEntryDistance * vy));
HXLINE( 149)				bool _hx_tmp;
HXDLIN( 149)				bool _hx_tmp1;
HXDLIN( 149)				bool _hx_tmp2;
HXDLIN( 149)				if ((iy > -(this->_halfExtentsY))) {
HXLINE( 149)					_hx_tmp2 = (iy < this->_halfExtentsY);
            				}
            				else {
HXLINE( 149)					_hx_tmp2 = false;
            				}
HXDLIN( 149)				if (_hx_tmp2) {
HXLINE( 149)					_hx_tmp1 = (ix > -(this->_halfExtentsX));
            				}
            				else {
HXLINE( 149)					_hx_tmp1 = false;
            				}
HXDLIN( 149)				if (_hx_tmp1) {
HXLINE( 149)					_hx_tmp = (ix < this->_halfExtentsX);
            				}
            				else {
HXLINE( 149)					_hx_tmp = false;
            				}
HXDLIN( 149)				if (_hx_tmp) {
HXLINE( 150)					targetNormal->x = ( (Float)(0) );
HXLINE( 151)					targetNormal->y = ( (Float)(0) );
HXLINE( 152)					targetNormal->z = ( (Float)(-1) );
HXLINE( 153)					intersects = true;
            				}
            			}
            		}
HXLINE( 158)		if (intersects) {
HXLINE( 158)			return rayEntryDistance;
            		}
            		else {
HXLINE( 158)			return ( (Float)(-1) );
            		}
HXDLIN( 158)		return ((Float)0.);
            	}


bool AxisAlignedBoundingBox_obj::containsPoint( ::openfl::geom::Vector3D position){
            	HX_STACKFRAME(&_hx_pos_d503347f673d0e32_165_containsPoint)
HXLINE( 166)		Float px = (position->x - this->_centerX);
HXDLIN( 166)		Float py = (position->y - this->_centerY);
HXDLIN( 166)		Float pz = (position->z - this->_centerZ);
HXLINE( 167)		bool _hx_tmp;
HXDLIN( 167)		bool _hx_tmp1;
HXDLIN( 167)		bool _hx_tmp2;
HXDLIN( 167)		bool _hx_tmp3;
HXDLIN( 167)		if ((px <= this->_halfExtentsX)) {
HXLINE( 167)			_hx_tmp3 = (px >= -(this->_halfExtentsX));
            		}
            		else {
HXLINE( 167)			_hx_tmp3 = false;
            		}
HXDLIN( 167)		if (_hx_tmp3) {
HXLINE( 167)			_hx_tmp2 = (py <= this->_halfExtentsY);
            		}
            		else {
HXLINE( 167)			_hx_tmp2 = false;
            		}
HXDLIN( 167)		if (_hx_tmp2) {
HXLINE( 167)			_hx_tmp1 = (py >= -(this->_halfExtentsY));
            		}
            		else {
HXLINE( 167)			_hx_tmp1 = false;
            		}
HXDLIN( 167)		if (_hx_tmp1) {
HXLINE( 167)			_hx_tmp = (pz <= this->_halfExtentsZ);
            		}
            		else {
HXLINE( 167)			_hx_tmp = false;
            		}
HXDLIN( 167)		if (_hx_tmp) {
HXLINE( 169)			return (pz >= -(this->_halfExtentsZ));
            		}
            		else {
HXLINE( 167)			return false;
            		}
HXDLIN( 167)		return false;
            	}


void AxisAlignedBoundingBox_obj::fromExtremes(Float minX,Float minY,Float minZ,Float maxX,Float maxY,Float maxZ){
            	HX_STACKFRAME(&_hx_pos_d503347f673d0e32_176_fromExtremes)
HXLINE( 177)		this->_centerX = ((maxX + minX) * ((Float).5));
HXLINE( 178)		this->_centerY = ((maxY + minY) * ((Float).5));
HXLINE( 179)		this->_centerZ = ((maxZ + minZ) * ((Float).5));
HXLINE( 180)		this->_halfExtentsX = ((maxX - minX) * ((Float).5));
HXLINE( 181)		this->_halfExtentsY = ((maxY - minY) * ((Float).5));
HXLINE( 182)		this->_halfExtentsZ = ((maxZ - minZ) * ((Float).5));
HXLINE( 183)		this->super::fromExtremes(minX,minY,minZ,maxX,maxY,maxZ);
            	}


 ::away3d::bounds::BoundingVolumeBase AxisAlignedBoundingBox_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_d503347f673d0e32_190_clone)
HXLINE( 191)		 ::away3d::bounds::AxisAlignedBoundingBox clone =  ::away3d::bounds::AxisAlignedBoundingBox_obj::__alloc( HX_CTX );
HXLINE( 192)		clone->fromExtremes(this->_min->x,this->_min->y,this->_min->z,this->_max->x,this->_max->y,this->_max->z);
HXLINE( 193)		return clone;
            	}


Float AxisAlignedBoundingBox_obj::get_halfExtentsX(){
            	HX_STACKFRAME(&_hx_pos_d503347f673d0e32_198_get_halfExtentsX)
HXDLIN( 198)		return this->_halfExtentsX;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AxisAlignedBoundingBox_obj,get_halfExtentsX,return )

Float AxisAlignedBoundingBox_obj::get_halfExtentsY(){
            	HX_STACKFRAME(&_hx_pos_d503347f673d0e32_203_get_halfExtentsY)
HXDLIN( 203)		return this->_halfExtentsY;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AxisAlignedBoundingBox_obj,get_halfExtentsY,return )

Float AxisAlignedBoundingBox_obj::get_halfExtentsZ(){
            	HX_STACKFRAME(&_hx_pos_d503347f673d0e32_208_get_halfExtentsZ)
HXDLIN( 208)		return this->_halfExtentsZ;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AxisAlignedBoundingBox_obj,get_halfExtentsZ,return )

 ::openfl::geom::Vector3D AxisAlignedBoundingBox_obj::closestPointToPoint( ::openfl::geom::Vector3D point, ::openfl::geom::Vector3D target){
            	HX_GC_STACKFRAME(&_hx_pos_d503347f673d0e32_218_closestPointToPoint)
HXLINE( 220)		if (::hx::IsNull( target )) {
HXLINE( 221)			target =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE( 219)		Float p = point->x;
HXLINE( 224)		if ((p < this->_min->x)) {
HXLINE( 225)			p = this->_min->x;
            		}
HXLINE( 226)		if ((p > this->_max->x)) {
HXLINE( 227)			p = this->_max->x;
            		}
HXLINE( 228)		target->x = p;
HXLINE( 230)		p = point->y;
HXLINE( 231)		if ((p < this->_min->y)) {
HXLINE( 232)			p = this->_min->y;
            		}
HXLINE( 233)		if ((p > this->_max->y)) {
HXLINE( 234)			p = this->_max->y;
            		}
HXLINE( 235)		target->y = p;
HXLINE( 237)		p = point->z;
HXLINE( 238)		if ((p < this->_min->z)) {
HXLINE( 239)			p = this->_min->z;
            		}
HXLINE( 240)		if ((p > this->_max->z)) {
HXLINE( 241)			p = this->_max->z;
            		}
HXLINE( 242)		target->z = p;
HXLINE( 244)		return target;
            	}


HX_DEFINE_DYNAMIC_FUNC2(AxisAlignedBoundingBox_obj,closestPointToPoint,return )

void AxisAlignedBoundingBox_obj::updateBoundingRenderable(){
            	HX_STACKFRAME(&_hx_pos_d503347f673d0e32_248_updateBoundingRenderable)
HXLINE( 249)		this->_boundingRenderable->set_scaleX(::Math_obj::max((this->_halfExtentsX * ( (Float)(2) )),((Float)0.001)));
HXLINE( 250)		this->_boundingRenderable->set_scaleY(::Math_obj::max((this->_halfExtentsY * ( (Float)(2) )),((Float)0.001)));
HXLINE( 251)		this->_boundingRenderable->set_scaleZ(::Math_obj::max((this->_halfExtentsZ * ( (Float)(2) )),((Float)0.001)));
HXLINE( 252)		this->_boundingRenderable->set_x(this->_centerX);
HXLINE( 253)		this->_boundingRenderable->set_y(this->_centerY);
HXLINE( 254)		this->_boundingRenderable->set_z(this->_centerZ);
            	}


 ::away3d::primitives::WireframePrimitiveBase AxisAlignedBoundingBox_obj::createBoundingRenderable(){
            	HX_GC_STACKFRAME(&_hx_pos_d503347f673d0e32_259_createBoundingRenderable)
HXDLIN( 259)		return  ::away3d::primitives::WireframeCube_obj::__alloc( HX_CTX ,1,1,1,16777215,((Float)0.5));
            	}


int AxisAlignedBoundingBox_obj::classifyToPlane( ::away3d::core::math::Plane3D plane){
            	HX_STACKFRAME(&_hx_pos_d503347f673d0e32_263_classifyToPlane)
HXLINE( 264)		Float a = plane->a;
HXLINE( 265)		Float b = plane->b;
HXLINE( 266)		Float c = plane->c;
HXLINE( 267)		Float centerDistance = ((((a * this->_centerX) + (b * this->_centerY)) + (c * this->_centerZ)) - plane->d);
HXLINE( 268)		if ((a < 0)) {
HXLINE( 269)			a = -(a);
            		}
HXLINE( 270)		if ((b < 0)) {
HXLINE( 271)			b = -(b);
            		}
HXLINE( 272)		if ((c < 0)) {
HXLINE( 273)			c = -(c);
            		}
HXLINE( 274)		Float boundOffset = (((a * this->_halfExtentsX) + (b * this->_halfExtentsY)) + (c * this->_halfExtentsZ));
HXLINE( 276)		if ((centerDistance > boundOffset)) {
HXLINE( 276)			return 1;
            		}
            		else {
HXLINE( 277)			if ((centerDistance < -(boundOffset))) {
HXLINE( 277)				return 0;
            			}
            			else {
HXLINE( 278)				return 2;
            			}
            		}
HXLINE( 276)		return 0;
            	}


void AxisAlignedBoundingBox_obj::transformFrom( ::away3d::bounds::BoundingVolumeBase bounds, ::openfl::geom::Matrix3D matrix){
            	HX_STACKFRAME(&_hx_pos_d503347f673d0e32_282_transformFrom)
HXLINE( 283)		 ::away3d::bounds::AxisAlignedBoundingBox aabb = ::hx::TCast<  ::away3d::bounds::AxisAlignedBoundingBox >::cast(bounds);
HXLINE( 284)		Float cx = aabb->_centerX;
HXLINE( 285)		Float cy = aabb->_centerY;
HXLINE( 286)		Float cz = aabb->_centerZ;
HXLINE( 287)		 ::openfl::_Vector::FloatVector raw = ::away3d::core::math::Matrix3DUtils_obj::RAW_DATA_CONTAINER;
HXLINE( 288)		matrix->copyRawDataTo(raw,null(),null());
HXLINE( 289)		Float m11 = raw->get(0);
HXDLIN( 289)		Float m12 = raw->get(4);
HXDLIN( 289)		Float m13 = raw->get(8);
HXDLIN( 289)		Float m14 = raw->get(12);
HXLINE( 290)		Float m21 = raw->get(1);
HXDLIN( 290)		Float m22 = raw->get(5);
HXDLIN( 290)		Float m23 = raw->get(9);
HXDLIN( 290)		Float m24 = raw->get(13);
HXLINE( 291)		Float m31 = raw->get(2);
HXDLIN( 291)		Float m32 = raw->get(6);
HXDLIN( 291)		Float m33 = raw->get(10);
HXDLIN( 291)		Float m34 = raw->get(14);
HXLINE( 293)		this->_centerX = ((((cx * m11) + (cy * m12)) + (cz * m13)) + m14);
HXLINE( 294)		this->_centerY = ((((cx * m21) + (cy * m22)) + (cz * m23)) + m24);
HXLINE( 295)		this->_centerZ = ((((cx * m31) + (cy * m32)) + (cz * m33)) + m34);
HXLINE( 297)		if ((m11 < 0)) {
HXLINE( 298)			m11 = -(m11);
            		}
HXLINE( 299)		if ((m12 < 0)) {
HXLINE( 300)			m12 = -(m12);
            		}
HXLINE( 301)		if ((m13 < 0)) {
HXLINE( 302)			m13 = -(m13);
            		}
HXLINE( 303)		if ((m21 < 0)) {
HXLINE( 304)			m21 = -(m21);
            		}
HXLINE( 305)		if ((m22 < 0)) {
HXLINE( 306)			m22 = -(m22);
            		}
HXLINE( 307)		if ((m23 < 0)) {
HXLINE( 308)			m23 = -(m23);
            		}
HXLINE( 309)		if ((m31 < 0)) {
HXLINE( 310)			m31 = -(m31);
            		}
HXLINE( 311)		if ((m32 < 0)) {
HXLINE( 312)			m32 = -(m32);
            		}
HXLINE( 313)		if ((m33 < 0)) {
HXLINE( 314)			m33 = -(m33);
            		}
HXLINE( 315)		Float hx = aabb->_halfExtentsX;
HXLINE( 316)		Float hy = aabb->_halfExtentsY;
HXLINE( 317)		Float hz = aabb->_halfExtentsZ;
HXLINE( 318)		this->_halfExtentsX = (((hx * m11) + (hy * m12)) + (hz * m13));
HXLINE( 319)		this->_halfExtentsY = (((hx * m21) + (hy * m22)) + (hz * m23));
HXLINE( 320)		this->_halfExtentsZ = (((hx * m31) + (hy * m32)) + (hz * m33));
HXLINE( 322)		this->_min->x = (this->_centerX - this->_halfExtentsX);
HXLINE( 323)		this->_min->y = (this->_centerY - this->_halfExtentsY);
HXLINE( 324)		this->_min->z = (this->_centerZ - this->_halfExtentsZ);
HXLINE( 325)		this->_max->x = (this->_centerX + this->_halfExtentsX);
HXLINE( 326)		this->_max->y = (this->_centerY + this->_halfExtentsY);
HXLINE( 327)		this->_max->z = (this->_centerZ + this->_halfExtentsZ);
HXLINE( 329)		this->_aabbPointsDirty = true;
            	}



::hx::ObjectPtr< AxisAlignedBoundingBox_obj > AxisAlignedBoundingBox_obj::__new() {
	::hx::ObjectPtr< AxisAlignedBoundingBox_obj > __this = new AxisAlignedBoundingBox_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< AxisAlignedBoundingBox_obj > AxisAlignedBoundingBox_obj::__alloc(::hx::Ctx *_hx_ctx) {
	AxisAlignedBoundingBox_obj *__this = (AxisAlignedBoundingBox_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AxisAlignedBoundingBox_obj), true, "away3d.bounds.AxisAlignedBoundingBox"));
	*(void **)__this = AxisAlignedBoundingBox_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AxisAlignedBoundingBox_obj::AxisAlignedBoundingBox_obj()
{
}

::hx::Val AxisAlignedBoundingBox_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"nullify") ) { return ::hx::Val( nullify_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_centerX") ) { return ::hx::Val( _centerX ); }
		if (HX_FIELD_EQ(inName,"_centerY") ) { return ::hx::Val( _centerY ); }
		if (HX_FIELD_EQ(inName,"_centerZ") ) { return ::hx::Val( _centerZ ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isInFrustum") ) { return ::hx::Val( isInFrustum_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"halfExtentsX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_halfExtentsX() ); }
		if (HX_FIELD_EQ(inName,"halfExtentsY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_halfExtentsY() ); }
		if (HX_FIELD_EQ(inName,"halfExtentsZ") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_halfExtentsZ() ); }
		if (HX_FIELD_EQ(inName,"fromExtremes") ) { return ::hx::Val( fromExtremes_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_halfExtentsX") ) { return ::hx::Val( _halfExtentsX ); }
		if (HX_FIELD_EQ(inName,"_halfExtentsY") ) { return ::hx::Val( _halfExtentsY ); }
		if (HX_FIELD_EQ(inName,"_halfExtentsZ") ) { return ::hx::Val( _halfExtentsZ ); }
		if (HX_FIELD_EQ(inName,"containsPoint") ) { return ::hx::Val( containsPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"transformFrom") ) { return ::hx::Val( transformFrom_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"rayIntersection") ) { return ::hx::Val( rayIntersection_dyn() ); }
		if (HX_FIELD_EQ(inName,"classifyToPlane") ) { return ::hx::Val( classifyToPlane_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_halfExtentsX") ) { return ::hx::Val( get_halfExtentsX_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_halfExtentsY") ) { return ::hx::Val( get_halfExtentsY_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_halfExtentsZ") ) { return ::hx::Val( get_halfExtentsZ_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"closestPointToPoint") ) { return ::hx::Val( closestPointToPoint_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"updateBoundingRenderable") ) { return ::hx::Val( updateBoundingRenderable_dyn() ); }
		if (HX_FIELD_EQ(inName,"createBoundingRenderable") ) { return ::hx::Val( createBoundingRenderable_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AxisAlignedBoundingBox_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_centerX") ) { _centerX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_centerY") ) { _centerY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_centerZ") ) { _centerZ=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_halfExtentsX") ) { _halfExtentsX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_halfExtentsY") ) { _halfExtentsY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_halfExtentsZ") ) { _halfExtentsZ=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AxisAlignedBoundingBox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("halfExtentsX",c2,55,3a,70));
	outFields->push(HX_("halfExtentsY",c3,55,3a,70));
	outFields->push(HX_("halfExtentsZ",c4,55,3a,70));
	outFields->push(HX_("_centerX",64,4e,9e,53));
	outFields->push(HX_("_centerY",65,4e,9e,53));
	outFields->push(HX_("_centerZ",66,4e,9e,53));
	outFields->push(HX_("_halfExtentsX",a1,e8,a8,52));
	outFields->push(HX_("_halfExtentsY",a2,e8,a8,52));
	outFields->push(HX_("_halfExtentsZ",a3,e8,a8,52));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AxisAlignedBoundingBox_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(AxisAlignedBoundingBox_obj,_centerX),HX_("_centerX",64,4e,9e,53)},
	{::hx::fsFloat,(int)offsetof(AxisAlignedBoundingBox_obj,_centerY),HX_("_centerY",65,4e,9e,53)},
	{::hx::fsFloat,(int)offsetof(AxisAlignedBoundingBox_obj,_centerZ),HX_("_centerZ",66,4e,9e,53)},
	{::hx::fsFloat,(int)offsetof(AxisAlignedBoundingBox_obj,_halfExtentsX),HX_("_halfExtentsX",a1,e8,a8,52)},
	{::hx::fsFloat,(int)offsetof(AxisAlignedBoundingBox_obj,_halfExtentsY),HX_("_halfExtentsY",a2,e8,a8,52)},
	{::hx::fsFloat,(int)offsetof(AxisAlignedBoundingBox_obj,_halfExtentsZ),HX_("_halfExtentsZ",a3,e8,a8,52)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AxisAlignedBoundingBox_obj_sStaticStorageInfo = 0;
#endif

static ::String AxisAlignedBoundingBox_obj_sMemberFields[] = {
	HX_("_centerX",64,4e,9e,53),
	HX_("_centerY",65,4e,9e,53),
	HX_("_centerZ",66,4e,9e,53),
	HX_("_halfExtentsX",a1,e8,a8,52),
	HX_("_halfExtentsY",a2,e8,a8,52),
	HX_("_halfExtentsZ",a3,e8,a8,52),
	HX_("nullify",d5,f5,f3,1c),
	HX_("isInFrustum",b3,40,fd,94),
	HX_("rayIntersection",53,fb,28,64),
	HX_("containsPoint",b1,b9,eb,92),
	HX_("fromExtremes",91,23,37,f7),
	HX_("clone",5d,13,63,48),
	HX_("get_halfExtentsX",4b,42,d9,74),
	HX_("get_halfExtentsY",4c,42,d9,74),
	HX_("get_halfExtentsZ",4d,42,d9,74),
	HX_("closestPointToPoint",5e,66,b7,08),
	HX_("updateBoundingRenderable",dd,5c,a2,ef),
	HX_("createBoundingRenderable",90,76,0e,18),
	HX_("classifyToPlane",7d,52,3c,eb),
	HX_("transformFrom",f6,24,10,71),
	::String(null()) };

::hx::Class AxisAlignedBoundingBox_obj::__mClass;

void AxisAlignedBoundingBox_obj::__register()
{
	AxisAlignedBoundingBox_obj _hx_dummy;
	AxisAlignedBoundingBox_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.bounds.AxisAlignedBoundingBox",0e,16,ae,cc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AxisAlignedBoundingBox_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AxisAlignedBoundingBox_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AxisAlignedBoundingBox_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AxisAlignedBoundingBox_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace bounds
