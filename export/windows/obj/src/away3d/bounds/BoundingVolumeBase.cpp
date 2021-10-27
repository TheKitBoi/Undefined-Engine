#include <hxcpp.h>

#ifndef INCLUDED_away3d_bounds_BoundingVolumeBase
#include <away3d/bounds/BoundingVolumeBase.h>
#endif
#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_Geometry
#include <away3d/core/base/Geometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_IMaterialOwner
#include <away3d/core/base/IMaterialOwner.h>
#endif
#ifndef INCLUDED_away3d_core_base_IRenderable
#include <away3d/core/base/IRenderable.h>
#endif
#ifndef INCLUDED_away3d_core_base_ISubGeometry
#include <away3d/core/base/ISubGeometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
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
#ifndef INCLUDED_away3d_errors_AbstractMethodError
#include <away3d/errors/AbstractMethodError.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_a0891a90f2b6db86_15_new,"away3d.bounds.BoundingVolumeBase","new",0xc20e0c0b,"away3d.bounds.BoundingVolumeBase.new","away3d/bounds/BoundingVolumeBase.hx",15,0x7a5a17a5)
HX_LOCAL_STACK_FRAME(_hx_pos_a0891a90f2b6db86_33_get_max,"away3d.bounds.BoundingVolumeBase","get_max",0x6740c066,"away3d.bounds.BoundingVolumeBase.get_max","away3d/bounds/BoundingVolumeBase.hx",33,0x7a5a17a5)
HX_LOCAL_STACK_FRAME(_hx_pos_a0891a90f2b6db86_41_get_min,"away3d.bounds.BoundingVolumeBase","get_min",0x6740c754,"away3d.bounds.BoundingVolumeBase.get_min","away3d/bounds/BoundingVolumeBase.hx",41,0x7a5a17a5)
HX_LOCAL_STACK_FRAME(_hx_pos_a0891a90f2b6db86_48_get_aabbPoints,"away3d.bounds.BoundingVolumeBase","get_aabbPoints",0xc9974761,"away3d.bounds.BoundingVolumeBase.get_aabbPoints","away3d/bounds/BoundingVolumeBase.hx",48,0x7a5a17a5)
HX_LOCAL_STACK_FRAME(_hx_pos_a0891a90f2b6db86_62_get_boundingRenderable,"away3d.bounds.BoundingVolumeBase","get_boundingRenderable",0xf51090f2,"away3d.bounds.BoundingVolumeBase.get_boundingRenderable","away3d/bounds/BoundingVolumeBase.hx",62,0x7a5a17a5)
HX_LOCAL_STACK_FRAME(_hx_pos_a0891a90f2b6db86_84_nullify,"away3d.bounds.BoundingVolumeBase","nullify",0x5d6ce300,"away3d.bounds.BoundingVolumeBase.nullify","away3d/bounds/BoundingVolumeBase.hx",84,0x7a5a17a5)
HX_LOCAL_STACK_FRAME(_hx_pos_a0891a90f2b6db86_96_disposeRenderable,"away3d.bounds.BoundingVolumeBase","disposeRenderable",0x907a8e5a,"away3d.bounds.BoundingVolumeBase.disposeRenderable","away3d/bounds/BoundingVolumeBase.hx",96,0x7a5a17a5)
HX_LOCAL_STACK_FRAME(_hx_pos_a0891a90f2b6db86_108_fromVertices,"away3d.bounds.BoundingVolumeBase","fromVertices",0xdc911278,"away3d.bounds.BoundingVolumeBase.fromVertices","away3d/bounds/BoundingVolumeBase.hx",108,0x7a5a17a5)
HX_LOCAL_STACK_FRAME(_hx_pos_a0891a90f2b6db86_152_fromGeometry,"away3d.bounds.BoundingVolumeBase","fromGeometry",0x45245531,"away3d.bounds.BoundingVolumeBase.fromGeometry","away3d/bounds/BoundingVolumeBase.hx",152,0x7a5a17a5)
HX_LOCAL_STACK_FRAME(_hx_pos_a0891a90f2b6db86_209_fromSphere,"away3d.bounds.BoundingVolumeBase","fromSphere",0x1ec013cc,"away3d.bounds.BoundingVolumeBase.fromSphere","away3d/bounds/BoundingVolumeBase.hx",209,0x7a5a17a5)
HX_LOCAL_STACK_FRAME(_hx_pos_a0891a90f2b6db86_223_fromExtremes,"away3d.bounds.BoundingVolumeBase","fromExtremes",0xc99b9a86,"away3d.bounds.BoundingVolumeBase.fromExtremes","away3d/bounds/BoundingVolumeBase.hx",223,0x7a5a17a5)
HX_LOCAL_STACK_FRAME(_hx_pos_a0891a90f2b6db86_243_isInFrustum,"away3d.bounds.BoundingVolumeBase","isInFrustum",0x2b2b9f5e,"away3d.bounds.BoundingVolumeBase.isInFrustum","away3d/bounds/BoundingVolumeBase.hx",243,0x7a5a17a5)
HX_LOCAL_STACK_FRAME(_hx_pos_a0891a90f2b6db86_251_overlaps,"away3d.bounds.BoundingVolumeBase","overlaps",0x6e816b81,"away3d.bounds.BoundingVolumeBase.overlaps","away3d/bounds/BoundingVolumeBase.hx",251,0x7a5a17a5)
HX_LOCAL_STACK_FRAME(_hx_pos_a0891a90f2b6db86_274_clone,"away3d.bounds.BoundingVolumeBase","clone",0x99e3cfc8,"away3d.bounds.BoundingVolumeBase.clone","away3d/bounds/BoundingVolumeBase.hx",274,0x7a5a17a5)
HX_LOCAL_STACK_FRAME(_hx_pos_a0891a90f2b6db86_288_rayIntersection,"away3d.bounds.BoundingVolumeBase","rayIntersection",0xc9638b7e,"away3d.bounds.BoundingVolumeBase.rayIntersection","away3d/bounds/BoundingVolumeBase.hx",288,0x7a5a17a5)
HX_LOCAL_STACK_FRAME(_hx_pos_a0891a90f2b6db86_299_containsPoint,"away3d.bounds.BoundingVolumeBase","containsPoint",0xd86f591c,"away3d.bounds.BoundingVolumeBase.containsPoint","away3d/bounds/BoundingVolumeBase.hx",299,0x7a5a17a5)
HX_LOCAL_STACK_FRAME(_hx_pos_a0891a90f2b6db86_303_updateAABBPoints,"away3d.bounds.BoundingVolumeBase","updateAABBPoints",0x86bf09a1,"away3d.bounds.BoundingVolumeBase.updateAABBPoints","away3d/bounds/BoundingVolumeBase.hx",303,0x7a5a17a5)
HX_LOCAL_STACK_FRAME(_hx_pos_a0891a90f2b6db86_335_updateBoundingRenderable,"away3d.bounds.BoundingVolumeBase","updateBoundingRenderable",0x4317ef52,"away3d.bounds.BoundingVolumeBase.updateBoundingRenderable","away3d/bounds/BoundingVolumeBase.hx",335,0x7a5a17a5)
HX_LOCAL_STACK_FRAME(_hx_pos_a0891a90f2b6db86_340_createBoundingRenderable,"away3d.bounds.BoundingVolumeBase","createBoundingRenderable",0x6b840905,"away3d.bounds.BoundingVolumeBase.createBoundingRenderable","away3d/bounds/BoundingVolumeBase.hx",340,0x7a5a17a5)
HX_LOCAL_STACK_FRAME(_hx_pos_a0891a90f2b6db86_346_classifyToPlane,"away3d.bounds.BoundingVolumeBase","classifyToPlane",0x5076e2a8,"away3d.bounds.BoundingVolumeBase.classifyToPlane","away3d/bounds/BoundingVolumeBase.hx",346,0x7a5a17a5)
HX_LOCAL_STACK_FRAME(_hx_pos_a0891a90f2b6db86_352_transformFrom,"away3d.bounds.BoundingVolumeBase","transformFrom",0xb693c461,"away3d.bounds.BoundingVolumeBase.transformFrom","away3d/bounds/BoundingVolumeBase.hx",352,0x7a5a17a5)
namespace away3d{
namespace bounds{

void BoundingVolumeBase_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_a0891a90f2b6db86_15_new)
HXLINE(  25)		this->_aabbPointsDirty = true;
HXLINE(  24)		int length = null();
HXDLIN(  24)		bool fixed = null();
HXDLIN(  24)		::Array< Float > array = null();
HXDLIN(  24)		this->_aabbPoints =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE(  76)		this->_min =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  77)		this->_max =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            	}

Dynamic BoundingVolumeBase_obj::__CreateEmpty() { return new BoundingVolumeBase_obj; }

void *BoundingVolumeBase_obj::_hx_vtable = 0;

Dynamic BoundingVolumeBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BoundingVolumeBase_obj > _hx_result = new BoundingVolumeBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BoundingVolumeBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x09388beb;
}

 ::openfl::geom::Vector3D BoundingVolumeBase_obj::get_max(){
            	HX_STACKFRAME(&_hx_pos_a0891a90f2b6db86_33_get_max)
HXDLIN(  33)		return this->_max;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BoundingVolumeBase_obj,get_max,return )

 ::openfl::geom::Vector3D BoundingVolumeBase_obj::get_min(){
            	HX_STACKFRAME(&_hx_pos_a0891a90f2b6db86_41_get_min)
HXDLIN(  41)		return this->_min;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BoundingVolumeBase_obj,get_min,return )

 ::openfl::_Vector::FloatVector BoundingVolumeBase_obj::get_aabbPoints(){
            	HX_STACKFRAME(&_hx_pos_a0891a90f2b6db86_48_get_aabbPoints)
HXLINE(  49)		if (this->_aabbPointsDirty) {
HXLINE(  50)			this->updateAABBPoints();
            		}
HXLINE(  52)		return this->_aabbPoints;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BoundingVolumeBase_obj,get_aabbPoints,return )

 ::away3d::primitives::WireframePrimitiveBase BoundingVolumeBase_obj::get_boundingRenderable(){
            	HX_STACKFRAME(&_hx_pos_a0891a90f2b6db86_62_get_boundingRenderable)
HXLINE(  63)		if (::hx::IsNull( this->_boundingRenderable )) {
HXLINE(  64)			this->_boundingRenderable = this->createBoundingRenderable();
HXLINE(  65)			this->updateBoundingRenderable();
            		}
HXLINE(  68)		return this->_boundingRenderable;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BoundingVolumeBase_obj,get_boundingRenderable,return )

void BoundingVolumeBase_obj::nullify(){
            	HX_STACKFRAME(&_hx_pos_a0891a90f2b6db86_84_nullify)
HXLINE(  85)		this->_min->x = (this->_min->y = (this->_min->z = ( (Float)(0) )));
HXLINE(  86)		this->_max->x = (this->_max->y = (this->_max->z = ( (Float)(0) )));
HXLINE(  87)		this->_aabbPointsDirty = true;
HXLINE(  88)		if (::hx::IsNotNull( this->_boundingRenderable )) {
HXLINE(  89)			this->updateBoundingRenderable();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BoundingVolumeBase_obj,nullify,(void))

void BoundingVolumeBase_obj::disposeRenderable(){
            	HX_STACKFRAME(&_hx_pos_a0891a90f2b6db86_96_disposeRenderable)
HXLINE(  97)		if (::hx::IsNotNull( this->_boundingRenderable )) {
HXLINE(  98)			this->_boundingRenderable->dispose();
            		}
HXLINE(  99)		this->_boundingRenderable = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BoundingVolumeBase_obj,disposeRenderable,(void))

void BoundingVolumeBase_obj::fromVertices( ::openfl::_Vector::FloatVector vertices){
            	HX_STACKFRAME(&_hx_pos_a0891a90f2b6db86_108_fromVertices)
HXLINE( 109)		int i = 0;
HXLINE( 110)		int len = vertices->get_length();
HXLINE( 114)		if ((len == 0)) {
HXLINE( 115)			this->nullify();
HXLINE( 116)			return;
            		}
HXLINE( 119)		Float v;
HXLINE( 121)		i = (i + 1);
HXLINE( 112)		Float maxX = vertices->get((i - 1));
HXLINE( 111)		Float minX = maxX;
HXLINE( 122)		i = (i + 1);
HXLINE( 112)		Float maxY = vertices->get((i - 1));
HXLINE( 111)		Float minY = maxY;
HXLINE( 123)		i = (i + 1);
HXLINE( 112)		Float maxZ = vertices->get((i - 1));
HXLINE( 111)		Float minZ = maxZ;
HXLINE( 125)		while((i < len)){
HXLINE( 126)			i = (i + 1);
HXDLIN( 126)			v = vertices->get((i - 1));
HXLINE( 127)			if ((v < minX)) {
HXLINE( 128)				minX = v;
            			}
            			else {
HXLINE( 129)				if ((v > maxX)) {
HXLINE( 130)					maxX = v;
            				}
            			}
HXLINE( 131)			i = (i + 1);
HXDLIN( 131)			v = vertices->get((i - 1));
HXLINE( 132)			if ((v < minY)) {
HXLINE( 133)				minY = v;
            			}
            			else {
HXLINE( 134)				if ((v > maxY)) {
HXLINE( 135)					maxY = v;
            				}
            			}
HXLINE( 136)			i = (i + 1);
HXDLIN( 136)			v = vertices->get((i - 1));
HXLINE( 137)			if ((v < minZ)) {
HXLINE( 138)				minZ = v;
            			}
            			else {
HXLINE( 139)				if ((v > maxZ)) {
HXLINE( 140)					maxZ = v;
            				}
            			}
            		}
HXLINE( 143)		this->fromExtremes(minX,minY,minZ,maxX,maxY,maxZ);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BoundingVolumeBase_obj,fromVertices,(void))

void BoundingVolumeBase_obj::fromGeometry( ::away3d::core::base::Geometry geometry){
            	HX_STACKFRAME(&_hx_pos_a0891a90f2b6db86_152_fromGeometry)
HXLINE( 153)		 ::openfl::_Vector::ObjectVector subGeoms = geometry->get_subGeometries();
HXLINE( 154)		int numSubGeoms = subGeoms->get_length();
HXLINE( 155)		Float minX;
HXDLIN( 155)		Float minY;
HXDLIN( 155)		Float minZ;
HXLINE( 156)		Float maxX;
HXDLIN( 156)		Float maxY;
HXDLIN( 156)		Float maxZ;
HXLINE( 158)		if ((numSubGeoms > 0)) {
HXLINE( 159)			::Dynamic subGeom = subGeoms->get(0);
HXLINE( 160)			 ::openfl::_Vector::FloatVector vertices = ::away3d::core::base::ISubGeometry_obj::get_vertexData(subGeom);
HXLINE( 161)			int i = ::away3d::core::base::ISubGeometry_obj::get_vertexOffset(subGeom);
HXLINE( 162)			maxX = vertices->get(i);
HXDLIN( 162)			minX = maxX;
HXLINE( 163)			maxY = vertices->get((i + 1));
HXDLIN( 163)			minY = maxY;
HXLINE( 164)			maxZ = vertices->get((i + 2));
HXDLIN( 164)			minZ = maxZ;
HXLINE( 166)			int j = 0;
HXLINE( 167)			while((j < numSubGeoms)){
HXLINE( 168)				j = (j + 1);
HXDLIN( 168)				subGeom = subGeoms->get((j - 1));
HXLINE( 169)				vertices = ::away3d::core::base::ISubGeometry_obj::get_vertexData(subGeom);
HXLINE( 170)				int vertexDataLen = vertices->get_length();
HXLINE( 171)				i = ::away3d::core::base::ISubGeometry_obj::get_vertexOffset(subGeom);
HXLINE( 172)				int stride = ::away3d::core::base::ISubGeometry_obj::get_vertexStride(subGeom);
HXLINE( 174)				while((i < vertexDataLen)){
HXLINE( 175)					Float v = vertices->get(i);
HXLINE( 176)					if ((v < minX)) {
HXLINE( 177)						minX = v;
            					}
            					else {
HXLINE( 178)						if ((v > maxX)) {
HXLINE( 179)							maxX = v;
            						}
            					}
HXLINE( 180)					v = vertices->get((i + 1));
HXLINE( 181)					if ((v < minY)) {
HXLINE( 182)						minY = v;
            					}
            					else {
HXLINE( 183)						if ((v > maxY)) {
HXLINE( 184)							maxY = v;
            						}
            					}
HXLINE( 185)					v = vertices->get((i + 2));
HXLINE( 186)					if ((v < minZ)) {
HXLINE( 187)						minZ = v;
            					}
            					else {
HXLINE( 188)						if ((v > maxZ)) {
HXLINE( 189)							maxZ = v;
            						}
            					}
HXLINE( 190)					i = (i + stride);
            				}
            			}
HXLINE( 194)			this->fromExtremes(minX,minY,minZ,maxX,maxY,maxZ);
            		}
            		else {
HXLINE( 196)			this->fromExtremes(( (Float)(0) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BoundingVolumeBase_obj,fromGeometry,(void))

void BoundingVolumeBase_obj::fromSphere( ::openfl::geom::Vector3D center,Float radius){
            	HX_STACKFRAME(&_hx_pos_a0891a90f2b6db86_209_fromSphere)
HXDLIN( 209)		this->fromExtremes((center->x - radius),(center->y - radius),(center->z - radius),(center->x + radius),(center->y + radius),(center->z + radius));
            	}


HX_DEFINE_DYNAMIC_FUNC2(BoundingVolumeBase_obj,fromSphere,(void))

void BoundingVolumeBase_obj::fromExtremes(Float minX,Float minY,Float minZ,Float maxX,Float maxY,Float maxZ){
            	HX_STACKFRAME(&_hx_pos_a0891a90f2b6db86_223_fromExtremes)
HXLINE( 224)		this->_min->x = minX;
HXLINE( 225)		this->_min->y = minY;
HXLINE( 226)		this->_min->z = minZ;
HXLINE( 227)		this->_max->x = maxX;
HXLINE( 228)		this->_max->y = maxY;
HXLINE( 229)		this->_max->z = maxZ;
HXLINE( 230)		this->_aabbPointsDirty = true;
HXLINE( 231)		if (::hx::IsNotNull( this->_boundingRenderable )) {
HXLINE( 232)			this->updateBoundingRenderable();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC6(BoundingVolumeBase_obj,fromExtremes,(void))

bool BoundingVolumeBase_obj::isInFrustum( ::openfl::_Vector::ObjectVector planes,int numPlanes){
            	HX_GC_STACKFRAME(&_hx_pos_a0891a90f2b6db86_243_isInFrustum)
HXDLIN( 243)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::away3d::errors::AbstractMethodError_obj::__alloc( HX_CTX ,null(),null())));
HXDLIN( 243)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(BoundingVolumeBase_obj,isInFrustum,return )

bool BoundingVolumeBase_obj::overlaps( ::away3d::bounds::BoundingVolumeBase bounds){
            	HX_STACKFRAME(&_hx_pos_a0891a90f2b6db86_251_overlaps)
HXLINE( 252)		 ::openfl::geom::Vector3D min = bounds->_min;
HXLINE( 253)		 ::openfl::geom::Vector3D max = bounds->_max;
HXLINE( 254)		bool _hx_tmp;
HXDLIN( 254)		bool _hx_tmp1;
HXDLIN( 254)		bool _hx_tmp2;
HXDLIN( 254)		bool _hx_tmp3;
HXDLIN( 254)		if ((this->_max->x > min->x)) {
HXLINE( 254)			_hx_tmp3 = (this->_min->x < max->x);
            		}
            		else {
HXLINE( 254)			_hx_tmp3 = false;
            		}
HXDLIN( 254)		if (_hx_tmp3) {
HXLINE( 254)			_hx_tmp2 = (this->_max->y > min->y);
            		}
            		else {
HXLINE( 254)			_hx_tmp2 = false;
            		}
HXDLIN( 254)		if (_hx_tmp2) {
HXLINE( 254)			_hx_tmp1 = (this->_min->y < max->y);
            		}
            		else {
HXLINE( 254)			_hx_tmp1 = false;
            		}
HXDLIN( 254)		if (_hx_tmp1) {
HXLINE( 254)			_hx_tmp = (this->_max->z > min->z);
            		}
            		else {
HXLINE( 254)			_hx_tmp = false;
            		}
HXDLIN( 254)		if (_hx_tmp) {
HXLINE( 259)			return (this->_min->z < max->z);
            		}
            		else {
HXLINE( 254)			return false;
            		}
HXDLIN( 254)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BoundingVolumeBase_obj,overlaps,return )

 ::away3d::bounds::BoundingVolumeBase BoundingVolumeBase_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_a0891a90f2b6db86_274_clone)
HXDLIN( 274)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::away3d::errors::AbstractMethodError_obj::__alloc( HX_CTX ,null(),null())));
HXDLIN( 274)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BoundingVolumeBase_obj,clone,return )

Float BoundingVolumeBase_obj::rayIntersection( ::openfl::geom::Vector3D position, ::openfl::geom::Vector3D direction, ::openfl::geom::Vector3D targetNormal){
            	HX_STACKFRAME(&_hx_pos_a0891a90f2b6db86_288_rayIntersection)
HXDLIN( 288)		return ( (Float)(-1) );
            	}


HX_DEFINE_DYNAMIC_FUNC3(BoundingVolumeBase_obj,rayIntersection,return )

bool BoundingVolumeBase_obj::containsPoint( ::openfl::geom::Vector3D position){
            	HX_STACKFRAME(&_hx_pos_a0891a90f2b6db86_299_containsPoint)
HXDLIN( 299)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BoundingVolumeBase_obj,containsPoint,return )

void BoundingVolumeBase_obj::updateAABBPoints(){
            	HX_STACKFRAME(&_hx_pos_a0891a90f2b6db86_303_updateAABBPoints)
HXLINE( 304)		Float maxX = this->_max->x;
HXDLIN( 304)		Float maxY = this->_max->y;
HXDLIN( 304)		Float maxZ = this->_max->z;
HXLINE( 305)		Float minX = this->_min->x;
HXDLIN( 305)		Float minY = this->_min->y;
HXDLIN( 305)		Float minZ = this->_min->z;
HXLINE( 306)		this->_aabbPoints->set(0,minX);
HXLINE( 307)		this->_aabbPoints->set(1,minY);
HXLINE( 308)		this->_aabbPoints->set(2,minZ);
HXLINE( 309)		this->_aabbPoints->set(3,maxX);
HXLINE( 310)		this->_aabbPoints->set(4,minY);
HXLINE( 311)		this->_aabbPoints->set(5,minZ);
HXLINE( 312)		this->_aabbPoints->set(6,minX);
HXLINE( 313)		this->_aabbPoints->set(7,maxY);
HXLINE( 314)		this->_aabbPoints->set(8,minZ);
HXLINE( 315)		this->_aabbPoints->set(9,maxX);
HXLINE( 316)		this->_aabbPoints->set(10,maxY);
HXLINE( 317)		this->_aabbPoints->set(11,minZ);
HXLINE( 318)		this->_aabbPoints->set(12,minX);
HXLINE( 319)		this->_aabbPoints->set(13,minY);
HXLINE( 320)		this->_aabbPoints->set(14,maxZ);
HXLINE( 321)		this->_aabbPoints->set(15,maxX);
HXLINE( 322)		this->_aabbPoints->set(16,minY);
HXLINE( 323)		this->_aabbPoints->set(17,maxZ);
HXLINE( 324)		this->_aabbPoints->set(18,minX);
HXLINE( 325)		this->_aabbPoints->set(19,maxY);
HXLINE( 326)		this->_aabbPoints->set(20,maxZ);
HXLINE( 327)		this->_aabbPoints->set(21,maxX);
HXLINE( 328)		this->_aabbPoints->set(22,maxY);
HXLINE( 329)		this->_aabbPoints->set(23,maxZ);
HXLINE( 330)		this->_aabbPointsDirty = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BoundingVolumeBase_obj,updateAABBPoints,(void))

void BoundingVolumeBase_obj::updateBoundingRenderable(){
            	HX_GC_STACKFRAME(&_hx_pos_a0891a90f2b6db86_335_updateBoundingRenderable)
HXDLIN( 335)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::away3d::errors::AbstractMethodError_obj::__alloc( HX_CTX ,null(),null())));
            	}


HX_DEFINE_DYNAMIC_FUNC0(BoundingVolumeBase_obj,updateBoundingRenderable,(void))

 ::away3d::primitives::WireframePrimitiveBase BoundingVolumeBase_obj::createBoundingRenderable(){
            	HX_GC_STACKFRAME(&_hx_pos_a0891a90f2b6db86_340_createBoundingRenderable)
HXDLIN( 340)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::away3d::errors::AbstractMethodError_obj::__alloc( HX_CTX ,null(),null())));
HXDLIN( 340)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BoundingVolumeBase_obj,createBoundingRenderable,return )

int BoundingVolumeBase_obj::classifyToPlane( ::away3d::core::math::Plane3D plane){
            	HX_GC_STACKFRAME(&_hx_pos_a0891a90f2b6db86_346_classifyToPlane)
HXDLIN( 346)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::away3d::errors::AbstractMethodError_obj::__alloc( HX_CTX ,null(),null())));
HXDLIN( 346)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BoundingVolumeBase_obj,classifyToPlane,return )

void BoundingVolumeBase_obj::transformFrom( ::away3d::bounds::BoundingVolumeBase bounds, ::openfl::geom::Matrix3D matrix){
            	HX_GC_STACKFRAME(&_hx_pos_a0891a90f2b6db86_352_transformFrom)
HXDLIN( 352)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::away3d::errors::AbstractMethodError_obj::__alloc( HX_CTX ,null(),null())));
            	}


HX_DEFINE_DYNAMIC_FUNC2(BoundingVolumeBase_obj,transformFrom,(void))


::hx::ObjectPtr< BoundingVolumeBase_obj > BoundingVolumeBase_obj::__new() {
	::hx::ObjectPtr< BoundingVolumeBase_obj > __this = new BoundingVolumeBase_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< BoundingVolumeBase_obj > BoundingVolumeBase_obj::__alloc(::hx::Ctx *_hx_ctx) {
	BoundingVolumeBase_obj *__this = (BoundingVolumeBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BoundingVolumeBase_obj), true, "away3d.bounds.BoundingVolumeBase"));
	*(void **)__this = BoundingVolumeBase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BoundingVolumeBase_obj::BoundingVolumeBase_obj()
{
}

void BoundingVolumeBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BoundingVolumeBase);
	HX_MARK_MEMBER_NAME(_min,"_min");
	HX_MARK_MEMBER_NAME(_max,"_max");
	HX_MARK_MEMBER_NAME(_aabbPoints,"_aabbPoints");
	HX_MARK_MEMBER_NAME(_aabbPointsDirty,"_aabbPointsDirty");
	HX_MARK_MEMBER_NAME(_boundingRenderable,"_boundingRenderable");
	HX_MARK_END_CLASS();
}

void BoundingVolumeBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_min,"_min");
	HX_VISIT_MEMBER_NAME(_max,"_max");
	HX_VISIT_MEMBER_NAME(_aabbPoints,"_aabbPoints");
	HX_VISIT_MEMBER_NAME(_aabbPointsDirty,"_aabbPointsDirty");
	HX_VISIT_MEMBER_NAME(_boundingRenderable,"_boundingRenderable");
}

::hx::Val BoundingVolumeBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"max") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_max() ); }
		if (HX_FIELD_EQ(inName,"min") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_min() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_min") ) { return ::hx::Val( _min ); }
		if (HX_FIELD_EQ(inName,"_max") ) { return ::hx::Val( _max ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_max") ) { return ::hx::Val( get_max_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_min") ) { return ::hx::Val( get_min_dyn() ); }
		if (HX_FIELD_EQ(inName,"nullify") ) { return ::hx::Val( nullify_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"overlaps") ) { return ::hx::Val( overlaps_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"aabbPoints") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_aabbPoints() ); }
		if (HX_FIELD_EQ(inName,"fromSphere") ) { return ::hx::Val( fromSphere_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_aabbPoints") ) { return ::hx::Val( _aabbPoints ); }
		if (HX_FIELD_EQ(inName,"isInFrustum") ) { return ::hx::Val( isInFrustum_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fromVertices") ) { return ::hx::Val( fromVertices_dyn() ); }
		if (HX_FIELD_EQ(inName,"fromGeometry") ) { return ::hx::Val( fromGeometry_dyn() ); }
		if (HX_FIELD_EQ(inName,"fromExtremes") ) { return ::hx::Val( fromExtremes_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"containsPoint") ) { return ::hx::Val( containsPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"transformFrom") ) { return ::hx::Val( transformFrom_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_aabbPoints") ) { return ::hx::Val( get_aabbPoints_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"rayIntersection") ) { return ::hx::Val( rayIntersection_dyn() ); }
		if (HX_FIELD_EQ(inName,"classifyToPlane") ) { return ::hx::Val( classifyToPlane_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_aabbPointsDirty") ) { return ::hx::Val( _aabbPointsDirty ); }
		if (HX_FIELD_EQ(inName,"updateAABBPoints") ) { return ::hx::Val( updateAABBPoints_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"disposeRenderable") ) { return ::hx::Val( disposeRenderable_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"boundingRenderable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_boundingRenderable() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_boundingRenderable") ) { return ::hx::Val( _boundingRenderable ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_boundingRenderable") ) { return ::hx::Val( get_boundingRenderable_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"updateBoundingRenderable") ) { return ::hx::Val( updateBoundingRenderable_dyn() ); }
		if (HX_FIELD_EQ(inName,"createBoundingRenderable") ) { return ::hx::Val( createBoundingRenderable_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BoundingVolumeBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_min") ) { _min=inValue.Cast<  ::openfl::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_max") ) { _max=inValue.Cast<  ::openfl::geom::Vector3D >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_aabbPoints") ) { _aabbPoints=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_aabbPointsDirty") ) { _aabbPointsDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_boundingRenderable") ) { _boundingRenderable=inValue.Cast<  ::away3d::primitives::WireframePrimitiveBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BoundingVolumeBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("max",a4,0a,53,00));
	outFields->push(HX_("min",92,11,53,00));
	outFields->push(HX_("aabbPoints",e3,e0,f9,c5));
	outFields->push(HX_("boundingRenderable",74,7c,cb,89));
	outFields->push(HX_("_min",93,56,1e,3f));
	outFields->push(HX_("_max",a5,4f,1e,3f));
	outFields->push(HX_("_aabbPoints",02,ae,83,98));
	outFields->push(HX_("_aabbPointsDirty",b0,0a,1a,ff));
	outFields->push(HX_("_boundingRenderable",93,00,a6,69));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BoundingVolumeBase_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(int)offsetof(BoundingVolumeBase_obj,_min),HX_("_min",93,56,1e,3f)},
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(int)offsetof(BoundingVolumeBase_obj,_max),HX_("_max",a5,4f,1e,3f)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(BoundingVolumeBase_obj,_aabbPoints),HX_("_aabbPoints",02,ae,83,98)},
	{::hx::fsBool,(int)offsetof(BoundingVolumeBase_obj,_aabbPointsDirty),HX_("_aabbPointsDirty",b0,0a,1a,ff)},
	{::hx::fsObject /*  ::away3d::primitives::WireframePrimitiveBase */ ,(int)offsetof(BoundingVolumeBase_obj,_boundingRenderable),HX_("_boundingRenderable",93,00,a6,69)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BoundingVolumeBase_obj_sStaticStorageInfo = 0;
#endif

static ::String BoundingVolumeBase_obj_sMemberFields[] = {
	HX_("_min",93,56,1e,3f),
	HX_("_max",a5,4f,1e,3f),
	HX_("_aabbPoints",02,ae,83,98),
	HX_("_aabbPointsDirty",b0,0a,1a,ff),
	HX_("_boundingRenderable",93,00,a6,69),
	HX_("get_max",3b,d3,c7,26),
	HX_("get_min",29,da,c7,26),
	HX_("get_aabbPoints",2c,69,ef,3b),
	HX_("get_boundingRenderable",bd,f5,5f,e3),
	HX_("nullify",d5,f5,f3,1c),
	HX_("disposeRenderable",6f,5d,5b,7b),
	HX_("fromVertices",83,9b,2c,0a),
	HX_("fromGeometry",3c,de,bf,72),
	HX_("fromSphere",17,b4,3a,00),
	HX_("fromExtremes",91,23,37,f7),
	HX_("isInFrustum",b3,40,fd,94),
	HX_("overlaps",0c,d3,2a,45),
	HX_("clone",5d,13,63,48),
	HX_("rayIntersection",53,fb,28,64),
	HX_("containsPoint",b1,b9,eb,92),
	HX_("updateAABBPoints",2c,74,bb,58),
	HX_("updateBoundingRenderable",dd,5c,a2,ef),
	HX_("createBoundingRenderable",90,76,0e,18),
	HX_("classifyToPlane",7d,52,3c,eb),
	HX_("transformFrom",f6,24,10,71),
	::String(null()) };

::hx::Class BoundingVolumeBase_obj::__mClass;

void BoundingVolumeBase_obj::__register()
{
	BoundingVolumeBase_obj _hx_dummy;
	BoundingVolumeBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.bounds.BoundingVolumeBase",99,aa,66,c1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BoundingVolumeBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BoundingVolumeBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BoundingVolumeBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BoundingVolumeBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace bounds
