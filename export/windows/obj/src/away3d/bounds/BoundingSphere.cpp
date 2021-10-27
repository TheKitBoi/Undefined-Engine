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

HX_DEFINE_STACK_FRAME(_hx_pos_d73e69b63072809a_14_new,"away3d.bounds.BoundingSphere","new",0xc7f1d20d,"away3d.bounds.BoundingSphere.new","away3d/bounds/BoundingSphere.hx",14,0x220e17e3)
HX_LOCAL_STACK_FRAME(_hx_pos_d73e69b63072809a_28_get_radius,"away3d.bounds.BoundingSphere","get_radius",0x03297e0e,"away3d.bounds.BoundingSphere.get_radius","away3d/bounds/BoundingSphere.hx",28,0x220e17e3)
HX_LOCAL_STACK_FRAME(_hx_pos_d73e69b63072809a_43_nullify,"away3d.bounds.BoundingSphere","nullify",0x0e78d202,"away3d.bounds.BoundingSphere.nullify","away3d/bounds/BoundingSphere.hx",43,0x220e17e3)
HX_LOCAL_STACK_FRAME(_hx_pos_d73e69b63072809a_54_isInFrustum,"away3d.bounds.BoundingSphere","isInFrustum",0xa9283760,"away3d.bounds.BoundingSphere.isInFrustum","away3d/bounds/BoundingSphere.hx",54,0x220e17e3)
HX_LOCAL_STACK_FRAME(_hx_pos_d73e69b63072809a_72_fromSphere,"away3d.bounds.BoundingSphere","fromSphere",0x61e5f20a,"away3d.bounds.BoundingSphere.fromSphere","away3d/bounds/BoundingSphere.hx",72,0x220e17e3)
HX_LOCAL_STACK_FRAME(_hx_pos_d73e69b63072809a_95_fromExtremes,"away3d.bounds.BoundingSphere","fromExtremes",0x88a40444,"away3d.bounds.BoundingSphere.fromExtremes","away3d/bounds/BoundingSphere.hx",95,0x220e17e3)
HX_LOCAL_STACK_FRAME(_hx_pos_d73e69b63072809a_116_clone,"away3d.bounds.BoundingSphere","clone",0xb4c69a4a,"away3d.bounds.BoundingSphere.clone","away3d/bounds/BoundingSphere.hx",116,0x220e17e3)
HX_LOCAL_STACK_FRAME(_hx_pos_d73e69b63072809a_123_rayIntersection,"away3d.bounds.BoundingSphere","rayIntersection",0x04594c80,"away3d.bounds.BoundingSphere.rayIntersection","away3d/bounds/BoundingSphere.hx",123,0x220e17e3)
HX_LOCAL_STACK_FRAME(_hx_pos_d73e69b63072809a_157_containsPoint,"away3d.bounds.BoundingSphere","containsPoint",0x40c3759e,"away3d.bounds.BoundingSphere.containsPoint","away3d/bounds/BoundingSphere.hx",157,0x220e17e3)
HX_LOCAL_STACK_FRAME(_hx_pos_d73e69b63072809a_164_updateBoundingRenderable,"away3d.bounds.BoundingSphere","updateBoundingRenderable",0x2676fe10,"away3d.bounds.BoundingSphere.updateBoundingRenderable","away3d/bounds/BoundingSphere.hx",164,0x220e17e3)
HX_LOCAL_STACK_FRAME(_hx_pos_d73e69b63072809a_178_createBoundingRenderable,"away3d.bounds.BoundingSphere","createBoundingRenderable",0x4ee317c3,"away3d.bounds.BoundingSphere.createBoundingRenderable","away3d/bounds/BoundingSphere.hx",178,0x220e17e3)
HX_LOCAL_STACK_FRAME(_hx_pos_d73e69b63072809a_182_classifyToPlane,"away3d.bounds.BoundingSphere","classifyToPlane",0x8b6ca3aa,"away3d.bounds.BoundingSphere.classifyToPlane","away3d/bounds/BoundingSphere.hx",182,0x220e17e3)
HX_LOCAL_STACK_FRAME(_hx_pos_d73e69b63072809a_201_transformFrom,"away3d.bounds.BoundingSphere","transformFrom",0x1ee7e0e3,"away3d.bounds.BoundingSphere.transformFrom","away3d/bounds/BoundingSphere.hx",201,0x220e17e3)
namespace away3d{
namespace bounds{

void BoundingSphere_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d73e69b63072809a_14_new)
HXLINE(  21)		this->_centerZ = ((Float)0);
HXLINE(  20)		this->_centerY = ((Float)0);
HXLINE(  19)		this->_centerX = ((Float)0);
HXLINE(  18)		this->_radius = ((Float)0);
HXLINE(  36)		super::__construct();
            	}

Dynamic BoundingSphere_obj::__CreateEmpty() { return new BoundingSphere_obj; }

void *BoundingSphere_obj::_hx_vtable = 0;

Dynamic BoundingSphere_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BoundingSphere_obj > _hx_result = new BoundingSphere_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BoundingSphere_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x09388beb) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x09388beb;
	} else {
		return inClassId==(int)0x2120f725;
	}
}

Float BoundingSphere_obj::get_radius(){
            	HX_STACKFRAME(&_hx_pos_d73e69b63072809a_28_get_radius)
HXDLIN(  28)		return this->_radius;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BoundingSphere_obj,get_radius,return )

void BoundingSphere_obj::nullify(){
            	HX_STACKFRAME(&_hx_pos_d73e69b63072809a_43_nullify)
HXLINE(  44)		this->super::nullify();
HXLINE(  45)		this->_centerX = (this->_centerY = (this->_centerZ = ( (Float)(0) )));
HXLINE(  46)		this->_radius = ( (Float)(0) );
            	}


bool BoundingSphere_obj::isInFrustum( ::openfl::_Vector::ObjectVector planes,int numPlanes){
            	HX_STACKFRAME(&_hx_pos_d73e69b63072809a_54_isInFrustum)
HXLINE(  55)		{
HXLINE(  55)			int _g = 0;
HXDLIN(  55)			int _g1 = numPlanes;
HXDLIN(  55)			while((_g < _g1)){
HXLINE(  55)				_g = (_g + 1);
HXDLIN(  55)				int i = (_g - 1);
HXLINE(  56)				 ::away3d::core::math::Plane3D plane = planes->get(i).StaticCast<  ::away3d::core::math::Plane3D >();
HXLINE(  57)				Float flippedExtentX;
HXDLIN(  57)				if ((plane->a < 0)) {
HXLINE(  57)					flippedExtentX = -(this->_radius);
            				}
            				else {
HXLINE(  57)					flippedExtentX = this->_radius;
            				}
HXLINE(  58)				Float flippedExtentY;
HXDLIN(  58)				if ((plane->b < 0)) {
HXLINE(  58)					flippedExtentY = -(this->_radius);
            				}
            				else {
HXLINE(  58)					flippedExtentY = this->_radius;
            				}
HXLINE(  59)				Float flippedExtentZ;
HXDLIN(  59)				if ((plane->c < 0)) {
HXLINE(  59)					flippedExtentZ = -(this->_radius);
            				}
            				else {
HXLINE(  59)					flippedExtentZ = this->_radius;
            				}
HXLINE(  60)				Float projDist = ((((plane->a * (this->_centerX + flippedExtentX)) + (plane->b * (this->_centerY + flippedExtentY))) + (plane->c * (this->_centerZ + flippedExtentZ))) - plane->d);
HXLINE(  61)				if ((projDist < 0)) {
HXLINE(  62)					return false;
            				}
            			}
            		}
HXLINE(  65)		return true;
            	}


void BoundingSphere_obj::fromSphere( ::openfl::geom::Vector3D center,Float radius){
            	HX_STACKFRAME(&_hx_pos_d73e69b63072809a_72_fromSphere)
HXLINE(  73)		this->_centerX = center->x;
HXLINE(  74)		this->_centerY = center->y;
HXLINE(  75)		this->_centerZ = center->z;
HXLINE(  76)		this->_radius = radius;
HXLINE(  77)		this->_max->x = (this->_centerX + radius);
HXLINE(  78)		this->_max->y = (this->_centerY + radius);
HXLINE(  79)		this->_max->z = (this->_centerZ + radius);
HXLINE(  80)		this->_min->x = (this->_centerX - radius);
HXLINE(  81)		this->_min->y = (this->_centerY - radius);
HXLINE(  82)		this->_min->z = (this->_centerZ - radius);
HXLINE(  83)		this->_aabbPointsDirty = true;
HXLINE(  84)		if (::hx::IsNotNull( this->_boundingRenderable )) {
HXLINE(  85)			this->updateBoundingRenderable();
            		}
            	}


void BoundingSphere_obj::fromExtremes(Float minX,Float minY,Float minZ,Float maxX,Float maxY,Float maxZ){
            	HX_STACKFRAME(&_hx_pos_d73e69b63072809a_95_fromExtremes)
HXLINE(  96)		this->_centerX = ((maxX + minX) * ((Float).5));
HXLINE(  97)		this->_centerY = ((maxY + minY) * ((Float).5));
HXLINE(  98)		this->_centerZ = ((maxZ + minZ) * ((Float).5));
HXLINE( 100)		Float d = (maxX - minX);
HXLINE( 101)		Float y = (maxY - minY);
HXLINE( 102)		Float z = (maxZ - minZ);
HXLINE( 103)		if ((y > d)) {
HXLINE( 104)			d = y;
            		}
HXLINE( 105)		if ((z > d)) {
HXLINE( 106)			d = z;
            		}
HXLINE( 108)		this->_radius = (d * ::Math_obj::sqrt(((Float).5)));
HXLINE( 109)		this->super::fromExtremes(minX,minY,minZ,maxX,maxY,maxZ);
            	}


 ::away3d::bounds::BoundingVolumeBase BoundingSphere_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_d73e69b63072809a_116_clone)
HXLINE( 117)		 ::away3d::bounds::BoundingSphere clone =  ::away3d::bounds::BoundingSphere_obj::__alloc( HX_CTX );
HXLINE( 118)		clone->fromSphere( ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,this->_centerX,this->_centerY,this->_centerZ,null()),this->_radius);
HXLINE( 119)		return clone;
            	}


Float BoundingSphere_obj::rayIntersection( ::openfl::geom::Vector3D position, ::openfl::geom::Vector3D direction, ::openfl::geom::Vector3D targetNormal){
            	HX_STACKFRAME(&_hx_pos_d73e69b63072809a_123_rayIntersection)
HXLINE( 124)		if (this->containsPoint(position)) {
HXLINE( 125)			return ( (Float)(0) );
            		}
HXLINE( 127)		Float px = (position->x - this->_centerX);
HXDLIN( 127)		Float py = (position->y - this->_centerY);
HXDLIN( 127)		Float pz = (position->z - this->_centerZ);
HXLINE( 128)		Float vx = direction->x;
HXDLIN( 128)		Float vy = direction->y;
HXDLIN( 128)		Float vz = direction->z;
HXLINE( 129)		Float rayEntryDistance;
HXLINE( 131)		Float a = (((vx * vx) + (vy * vy)) + (vz * vz));
HXLINE( 132)		Float b = (( (Float)(2) ) * (((px * vx) + (py * vy)) + (pz * vz)));
HXLINE( 133)		Float c = ((((px * px) + (py * py)) + (pz * pz)) - (this->_radius * this->_radius));
HXLINE( 134)		Float det = ((b * b) - ((( (Float)(4) ) * a) * c));
HXLINE( 136)		if ((det >= 0)) {
HXLINE( 137)			Float sqrtDet = ::Math_obj::sqrt(det);
HXLINE( 138)			rayEntryDistance = ((-(b) - sqrtDet) / (( (Float)(2) ) * a));
HXLINE( 139)			if ((rayEntryDistance >= 0)) {
HXLINE( 140)				targetNormal->x = (px + (rayEntryDistance * vx));
HXLINE( 141)				targetNormal->y = (py + (rayEntryDistance * vy));
HXLINE( 142)				targetNormal->z = (pz + (rayEntryDistance * vz));
HXLINE( 143)				targetNormal->normalize();
HXLINE( 145)				return rayEntryDistance;
            			}
            		}
HXLINE( 150)		return ( (Float)(-1) );
            	}


bool BoundingSphere_obj::containsPoint( ::openfl::geom::Vector3D position){
            	HX_STACKFRAME(&_hx_pos_d73e69b63072809a_157_containsPoint)
HXLINE( 158)		Float px = (position->x - this->_centerX);
HXDLIN( 158)		Float py = (position->y - this->_centerY);
HXDLIN( 158)		Float pz = (position->z - this->_centerZ);
HXLINE( 159)		Float distance = ::Math_obj::sqrt((((px * px) + (py * py)) + (pz * pz)));
HXLINE( 160)		return (distance <= this->_radius);
            	}


void BoundingSphere_obj::updateBoundingRenderable(){
            	HX_STACKFRAME(&_hx_pos_d73e69b63072809a_164_updateBoundingRenderable)
HXLINE( 165)		Float sc = this->_radius;
HXLINE( 166)		if ((sc == 0)) {
HXLINE( 167)			sc = ((Float)0.001);
            		}
HXLINE( 168)		this->_boundingRenderable->set_scaleX(sc);
HXLINE( 169)		this->_boundingRenderable->set_scaleY(sc);
HXLINE( 170)		this->_boundingRenderable->set_scaleZ(sc);
HXLINE( 171)		this->_boundingRenderable->set_x(this->_centerX);
HXLINE( 172)		this->_boundingRenderable->set_y(this->_centerY);
HXLINE( 173)		this->_boundingRenderable->set_z(this->_centerZ);
            	}


 ::away3d::primitives::WireframePrimitiveBase BoundingSphere_obj::createBoundingRenderable(){
            	HX_GC_STACKFRAME(&_hx_pos_d73e69b63072809a_178_createBoundingRenderable)
HXDLIN( 178)		return  ::away3d::primitives::WireframeSphere_obj::__alloc( HX_CTX ,1,16,12,16777215,((Float)0.5));
            	}


int BoundingSphere_obj::classifyToPlane( ::away3d::core::math::Plane3D plane){
            	HX_STACKFRAME(&_hx_pos_d73e69b63072809a_182_classifyToPlane)
HXLINE( 183)		Float a = plane->a;
HXLINE( 184)		Float b = plane->b;
HXLINE( 185)		Float c = plane->c;
HXLINE( 186)		Float dd = ((((a * this->_centerX) + (b * this->_centerY)) + (c * this->_centerZ)) - plane->d);
HXLINE( 187)		if ((a < 0)) {
HXLINE( 188)			a = -(a);
            		}
HXLINE( 189)		if ((b < 0)) {
HXLINE( 190)			b = -(b);
            		}
HXLINE( 191)		if ((c < 0)) {
HXLINE( 192)			c = -(c);
            		}
HXLINE( 193)		Float rr = (((a + b) + c) * this->_radius);
HXLINE( 195)		if ((dd > rr)) {
HXLINE( 195)			return 1;
            		}
            		else {
HXLINE( 196)			if ((dd < -(rr))) {
HXLINE( 196)				return 0;
            			}
            			else {
HXLINE( 197)				return 2;
            			}
            		}
HXLINE( 195)		return 0;
            	}


void BoundingSphere_obj::transformFrom( ::away3d::bounds::BoundingVolumeBase bounds, ::openfl::geom::Matrix3D matrix){
            	HX_STACKFRAME(&_hx_pos_d73e69b63072809a_201_transformFrom)
HXLINE( 202)		 ::away3d::bounds::BoundingSphere sphere = ::hx::TCast<  ::away3d::bounds::BoundingSphere >::cast(bounds);
HXLINE( 203)		Float cx = sphere->_centerX;
HXLINE( 204)		Float cy = sphere->_centerY;
HXLINE( 205)		Float cz = sphere->_centerZ;
HXLINE( 206)		 ::openfl::_Vector::FloatVector raw = ::away3d::core::math::Matrix3DUtils_obj::RAW_DATA_CONTAINER;
HXLINE( 207)		matrix->copyRawDataTo(raw,null(),null());
HXLINE( 208)		Float m11 = raw->get(0);
HXDLIN( 208)		Float m12 = raw->get(4);
HXDLIN( 208)		Float m13 = raw->get(8);
HXDLIN( 208)		Float m14 = raw->get(12);
HXLINE( 209)		Float m21 = raw->get(1);
HXDLIN( 209)		Float m22 = raw->get(5);
HXDLIN( 209)		Float m23 = raw->get(9);
HXDLIN( 209)		Float m24 = raw->get(13);
HXLINE( 210)		Float m31 = raw->get(2);
HXDLIN( 210)		Float m32 = raw->get(6);
HXDLIN( 210)		Float m33 = raw->get(10);
HXDLIN( 210)		Float m34 = raw->get(14);
HXLINE( 212)		this->_centerX = ((((cx * m11) + (cy * m12)) + (cz * m13)) + m14);
HXLINE( 213)		this->_centerY = ((((cx * m21) + (cy * m22)) + (cz * m23)) + m24);
HXLINE( 214)		this->_centerZ = ((((cx * m31) + (cy * m32)) + (cz * m33)) + m34);
HXLINE( 216)		if ((m11 < 0)) {
HXLINE( 217)			m11 = -(m11);
            		}
HXLINE( 218)		if ((m12 < 0)) {
HXLINE( 219)			m12 = -(m12);
            		}
HXLINE( 220)		if ((m13 < 0)) {
HXLINE( 221)			m13 = -(m13);
            		}
HXLINE( 222)		if ((m21 < 0)) {
HXLINE( 223)			m21 = -(m21);
            		}
HXLINE( 224)		if ((m22 < 0)) {
HXLINE( 225)			m22 = -(m22);
            		}
HXLINE( 226)		if ((m23 < 0)) {
HXLINE( 227)			m23 = -(m23);
            		}
HXLINE( 228)		if ((m31 < 0)) {
HXLINE( 229)			m31 = -(m31);
            		}
HXLINE( 230)		if ((m32 < 0)) {
HXLINE( 231)			m32 = -(m32);
            		}
HXLINE( 232)		if ((m33 < 0)) {
HXLINE( 233)			m33 = -(m33);
            		}
HXLINE( 234)		Float r = sphere->_radius;
HXLINE( 235)		Float rx = ((m11 + m12) + m13);
HXLINE( 236)		Float ry = ((m21 + m22) + m23);
HXLINE( 237)		Float rz = ((m31 + m32) + m33);
HXLINE( 238)		this->_radius = (r * ::Math_obj::sqrt((((rx * rx) + (ry * ry)) + (rz * rz))));
HXLINE( 240)		this->_min->x = (this->_centerX - this->_radius);
HXLINE( 241)		this->_min->y = (this->_centerY - this->_radius);
HXLINE( 242)		this->_min->z = (this->_centerZ - this->_radius);
HXLINE( 244)		this->_max->x = (this->_centerX + this->_radius);
HXLINE( 245)		this->_max->y = (this->_centerY + this->_radius);
HXLINE( 246)		this->_max->z = (this->_centerZ + this->_radius);
            	}



::hx::ObjectPtr< BoundingSphere_obj > BoundingSphere_obj::__new() {
	::hx::ObjectPtr< BoundingSphere_obj > __this = new BoundingSphere_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< BoundingSphere_obj > BoundingSphere_obj::__alloc(::hx::Ctx *_hx_ctx) {
	BoundingSphere_obj *__this = (BoundingSphere_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BoundingSphere_obj), true, "away3d.bounds.BoundingSphere"));
	*(void **)__this = BoundingSphere_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BoundingSphere_obj::BoundingSphere_obj()
{
}

::hx::Val BoundingSphere_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"radius") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_radius() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_radius") ) { return ::hx::Val( _radius ); }
		if (HX_FIELD_EQ(inName,"nullify") ) { return ::hx::Val( nullify_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_centerX") ) { return ::hx::Val( _centerX ); }
		if (HX_FIELD_EQ(inName,"_centerY") ) { return ::hx::Val( _centerY ); }
		if (HX_FIELD_EQ(inName,"_centerZ") ) { return ::hx::Val( _centerZ ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_radius") ) { return ::hx::Val( get_radius_dyn() ); }
		if (HX_FIELD_EQ(inName,"fromSphere") ) { return ::hx::Val( fromSphere_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isInFrustum") ) { return ::hx::Val( isInFrustum_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fromExtremes") ) { return ::hx::Val( fromExtremes_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"containsPoint") ) { return ::hx::Val( containsPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"transformFrom") ) { return ::hx::Val( transformFrom_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"rayIntersection") ) { return ::hx::Val( rayIntersection_dyn() ); }
		if (HX_FIELD_EQ(inName,"classifyToPlane") ) { return ::hx::Val( classifyToPlane_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"updateBoundingRenderable") ) { return ::hx::Val( updateBoundingRenderable_dyn() ); }
		if (HX_FIELD_EQ(inName,"createBoundingRenderable") ) { return ::hx::Val( createBoundingRenderable_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BoundingSphere_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_radius") ) { _radius=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_centerX") ) { _centerX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_centerY") ) { _centerY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_centerZ") ) { _centerZ=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BoundingSphere_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("radius",52,d0,f6,b0));
	outFields->push(HX_("_radius",f1,e1,6d,1f));
	outFields->push(HX_("_centerX",64,4e,9e,53));
	outFields->push(HX_("_centerY",65,4e,9e,53));
	outFields->push(HX_("_centerZ",66,4e,9e,53));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BoundingSphere_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(BoundingSphere_obj,_radius),HX_("_radius",f1,e1,6d,1f)},
	{::hx::fsFloat,(int)offsetof(BoundingSphere_obj,_centerX),HX_("_centerX",64,4e,9e,53)},
	{::hx::fsFloat,(int)offsetof(BoundingSphere_obj,_centerY),HX_("_centerY",65,4e,9e,53)},
	{::hx::fsFloat,(int)offsetof(BoundingSphere_obj,_centerZ),HX_("_centerZ",66,4e,9e,53)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BoundingSphere_obj_sStaticStorageInfo = 0;
#endif

static ::String BoundingSphere_obj_sMemberFields[] = {
	HX_("_radius",f1,e1,6d,1f),
	HX_("_centerX",64,4e,9e,53),
	HX_("_centerY",65,4e,9e,53),
	HX_("_centerZ",66,4e,9e,53),
	HX_("get_radius",1b,40,7e,a1),
	HX_("nullify",d5,f5,f3,1c),
	HX_("isInFrustum",b3,40,fd,94),
	HX_("fromSphere",17,b4,3a,00),
	HX_("fromExtremes",91,23,37,f7),
	HX_("clone",5d,13,63,48),
	HX_("rayIntersection",53,fb,28,64),
	HX_("containsPoint",b1,b9,eb,92),
	HX_("updateBoundingRenderable",dd,5c,a2,ef),
	HX_("createBoundingRenderable",90,76,0e,18),
	HX_("classifyToPlane",7d,52,3c,eb),
	HX_("transformFrom",f6,24,10,71),
	::String(null()) };

::hx::Class BoundingSphere_obj::__mClass;

void BoundingSphere_obj::__register()
{
	BoundingSphere_obj _hx_dummy;
	BoundingSphere_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.bounds.BoundingSphere",9b,c7,aa,8f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BoundingSphere_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BoundingSphere_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BoundingSphere_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BoundingSphere_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace bounds
