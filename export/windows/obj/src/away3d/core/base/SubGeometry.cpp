#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_core_base_ISubGeometry
#include <away3d/core/base/ISubGeometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_SubGeometry
#include <away3d/core/base/SubGeometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_SubGeometryBase
#include <away3d/core/base/SubGeometryBase.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_openfl__Vector_BoolVector
#include <openfl/_Vector/BoolVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_5eb48273530d3a23_20_new,"away3d.core.base.SubGeometry","new",0xedf17fc7,"away3d.core.base.SubGeometry.new","away3d/core/base/SubGeometry.hx",20,0xfe9554ea)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb48273530d3a23_68_get_numVertices,"away3d.core.base.SubGeometry","get_numVertices",0x226875dd,"away3d.core.base.SubGeometry.get_numVertices","away3d/core/base/SubGeometry.hx",68,0xfe9554ea)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb48273530d3a23_75_activateVertexBuffer,"away3d.core.base.SubGeometry","activateVertexBuffer",0xab7ee490,"away3d.core.base.SubGeometry.activateVertexBuffer","away3d/core/base/SubGeometry.hx",75,0xfe9554ea)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb48273530d3a23_95_activateUVBuffer,"away3d.core.base.SubGeometry","activateUVBuffer",0x45a7fd2d,"away3d.core.base.SubGeometry.activateUVBuffer","away3d/core/base/SubGeometry.hx",95,0xfe9554ea)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb48273530d3a23_119_activateSecondaryUVBuffer,"away3d.core.base.SubGeometry","activateSecondaryUVBuffer",0x5396dd29,"away3d.core.base.SubGeometry.activateSecondaryUVBuffer","away3d/core/base/SubGeometry.hx",119,0xfe9554ea)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb48273530d3a23_142_activateVertexNormalBuffer,"away3d.core.base.SubGeometry","activateVertexNormalBuffer",0xde8d6e17,"away3d.core.base.SubGeometry.activateVertexNormalBuffer","away3d/core/base/SubGeometry.hx",142,0xfe9554ea)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb48273530d3a23_168_activateVertexTangentBuffer,"away3d.core.base.SubGeometry","activateVertexTangentBuffer",0x7e311a15,"away3d.core.base.SubGeometry.activateVertexTangentBuffer","away3d/core/base/SubGeometry.hx",168,0xfe9554ea)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb48273530d3a23_188_applyTransformation,"away3d.core.base.SubGeometry","applyTransformation",0x7c63693e,"away3d.core.base.SubGeometry.applyTransformation","away3d/core/base/SubGeometry.hx",188,0xfe9554ea)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb48273530d3a23_200_clone,"away3d.core.base.SubGeometry","clone",0x1c58aa84,"away3d.core.base.SubGeometry.clone","away3d/core/base/SubGeometry.hx",200,0xfe9554ea)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb48273530d3a23_218_scale,"away3d.core.base.SubGeometry","scale",0x4cc465b1,"away3d.core.base.SubGeometry.scale","away3d/core/base/SubGeometry.hx",218,0xfe9554ea)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb48273530d3a23_227_scaleUV,"away3d.core.base.SubGeometry","scaleUV",0x52ee3e52,"away3d.core.base.SubGeometry.scaleUV","away3d/core/base/SubGeometry.hx",227,0xfe9554ea)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb48273530d3a23_236_dispose,"away3d.core.base.SubGeometry","dispose",0xa9336f86,"away3d.core.base.SubGeometry.dispose","away3d/core/base/SubGeometry.hx",236,0xfe9554ea)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb48273530d3a23_257_disposeAllVertexBuffers,"away3d.core.base.SubGeometry","disposeAllVertexBuffers",0xbd229234,"away3d.core.base.SubGeometry.disposeAllVertexBuffers","away3d/core/base/SubGeometry.hx",257,0xfe9554ea)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb48273530d3a23_270_get_vertexData,"away3d.core.base.SubGeometry","get_vertexData",0x068d33f0,"away3d.core.base.SubGeometry.get_vertexData","away3d/core/base/SubGeometry.hx",270,0xfe9554ea)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb48273530d3a23_275_get_vertexPositionData,"away3d.core.base.SubGeometry","get_vertexPositionData",0x8c453f39,"away3d.core.base.SubGeometry.get_vertexPositionData","away3d/core/base/SubGeometry.hx",275,0xfe9554ea)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb48273530d3a23_283_updateVertexData,"away3d.core.base.SubGeometry","updateVertexData",0x01092b50,"away3d.core.base.SubGeometry.updateVertexData","away3d/core/base/SubGeometry.hx",283,0xfe9554ea)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb48273530d3a23_306_get_UVData,"away3d.core.base.SubGeometry","get_UVData",0xcde19c6d,"away3d.core.base.SubGeometry.get_UVData","away3d/core/base/SubGeometry.hx",306,0xfe9554ea)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb48273530d3a23_314_get_secondaryUVData,"away3d.core.base.SubGeometry","get_secondaryUVData",0x0e716c1d,"away3d.core.base.SubGeometry.get_secondaryUVData","away3d/core/base/SubGeometry.hx",314,0xfe9554ea)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb48273530d3a23_322_updateUVData,"away3d.core.base.SubGeometry","updateUVData",0xb5e1efad,"away3d.core.base.SubGeometry.updateUVData","away3d/core/base/SubGeometry.hx",322,0xfe9554ea)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb48273530d3a23_332_updateSecondaryUVData,"away3d.core.base.SubGeometry","updateSecondaryUVData",0xbe78b8bd,"away3d.core.base.SubGeometry.updateSecondaryUVData","away3d/core/base/SubGeometry.hx",332,0xfe9554ea)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb48273530d3a23_341_get_vertexNormalData,"away3d.core.base.SubGeometry","get_vertexNormalData",0x62ef0a37,"away3d.core.base.SubGeometry.get_vertexNormalData","away3d/core/base/SubGeometry.hx",341,0xfe9554ea)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb48273530d3a23_353_updateVertexNormalData,"away3d.core.base.SubGeometry","updateVertexNormalData",0xb94ac997,"away3d.core.base.SubGeometry.updateVertexNormalData","away3d/core/base/SubGeometry.hx",353,0xfe9554ea)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb48273530d3a23_366_get_vertexTangentData,"away3d.core.base.SubGeometry","get_vertexTangentData",0x0f786c89,"away3d.core.base.SubGeometry.get_vertexTangentData","away3d/core/base/SubGeometry.hx",366,0xfe9554ea)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb48273530d3a23_378_updateVertexTangentData,"away3d.core.base.SubGeometry","updateVertexTangentData",0x49642129,"away3d.core.base.SubGeometry.updateVertexTangentData","away3d/core/base/SubGeometry.hx",378,0xfe9554ea)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb48273530d3a23_386_fromVectors,"away3d.core.base.SubGeometry","fromVectors",0xab634c6d,"away3d.core.base.SubGeometry.fromVectors","away3d/core/base/SubGeometry.hx",386,0xfe9554ea)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb48273530d3a23_394_updateVertexNormals,"away3d.core.base.SubGeometry","updateVertexNormals",0x45e5d706,"away3d.core.base.SubGeometry.updateVertexNormals","away3d/core/base/SubGeometry.hx",394,0xfe9554ea)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb48273530d3a23_400_updateVertexTangents,"away3d.core.base.SubGeometry","updateVertexTangents",0xe909f034,"away3d.core.base.SubGeometry.updateVertexTangents","away3d/core/base/SubGeometry.hx",400,0xfe9554ea)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb48273530d3a23_408_updateDummyUVs,"away3d.core.base.SubGeometry","updateDummyUVs",0xf374c4ec,"away3d.core.base.SubGeometry.updateDummyUVs","away3d/core/base/SubGeometry.hx",408,0xfe9554ea)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb48273530d3a23_414_disposeForStage3D,"away3d.core.base.SubGeometry","disposeForStage3D",0xaa7bde0c,"away3d.core.base.SubGeometry.disposeForStage3D","away3d/core/base/SubGeometry.hx",414,0xfe9554ea)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb48273530d3a23_444_get_vertexStride,"away3d.core.base.SubGeometry","get_vertexStride",0x99e17b5f,"away3d.core.base.SubGeometry.get_vertexStride","away3d/core/base/SubGeometry.hx",444,0xfe9554ea)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb48273530d3a23_449_get_vertexTangentStride,"away3d.core.base.SubGeometry","get_vertexTangentStride",0x1e7ecc38,"away3d.core.base.SubGeometry.get_vertexTangentStride","away3d/core/base/SubGeometry.hx",449,0xfe9554ea)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb48273530d3a23_454_get_vertexNormalStride,"away3d.core.base.SubGeometry","get_vertexNormalStride",0x331ab166,"away3d.core.base.SubGeometry.get_vertexNormalStride","away3d/core/base/SubGeometry.hx",454,0xfe9554ea)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb48273530d3a23_459_get_UVStride,"away3d.core.base.SubGeometry","get_UVStride",0x2d7ebd1c,"away3d.core.base.SubGeometry.get_UVStride","away3d/core/base/SubGeometry.hx",459,0xfe9554ea)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb48273530d3a23_464_get_secondaryUVStride,"away3d.core.base.SubGeometry","get_secondaryUVStride",0x8d65d8cc,"away3d.core.base.SubGeometry.get_secondaryUVStride","away3d/core/base/SubGeometry.hx",464,0xfe9554ea)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb48273530d3a23_469_get_vertexOffset,"away3d.core.base.SubGeometry","get_vertexOffset",0xe8f0f2d9,"away3d.core.base.SubGeometry.get_vertexOffset","away3d/core/base/SubGeometry.hx",469,0xfe9554ea)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb48273530d3a23_474_get_vertexNormalOffset,"away3d.core.base.SubGeometry","get_vertexNormalOffset",0x822a28e0,"away3d.core.base.SubGeometry.get_vertexNormalOffset","away3d/core/base/SubGeometry.hx",474,0xfe9554ea)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb48273530d3a23_479_get_vertexTangentOffset,"away3d.core.base.SubGeometry","get_vertexTangentOffset",0x6d8e43b2,"away3d.core.base.SubGeometry.get_vertexTangentOffset","away3d/core/base/SubGeometry.hx",479,0xfe9554ea)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb48273530d3a23_484_get_UVOffset,"away3d.core.base.SubGeometry","get_UVOffset",0x7c8e3496,"away3d.core.base.SubGeometry.get_UVOffset","away3d/core/base/SubGeometry.hx",484,0xfe9554ea)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb48273530d3a23_489_get_secondaryUVOffset,"away3d.core.base.SubGeometry","get_secondaryUVOffset",0xdc755046,"away3d.core.base.SubGeometry.get_secondaryUVOffset","away3d/core/base/SubGeometry.hx",489,0xfe9554ea)
HX_LOCAL_STACK_FRAME(_hx_pos_5eb48273530d3a23_494_cloneWithSeperateBuffers,"away3d.core.base.SubGeometry","cloneWithSeperateBuffers",0x957c9d42,"away3d.core.base.SubGeometry.cloneWithSeperateBuffers","away3d/core/base/SubGeometry.hx",494,0xfe9554ea)
namespace away3d{
namespace core{
namespace base{

void SubGeometry_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_5eb48273530d3a23_20_new)
HXLINE(  51)		bool fixed = null();
HXDLIN(  51)		::Array< ::Dynamic> array = null();
HXDLIN(  51)		this->_vertexTangentBufferContext =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,8,fixed,array,true);
HXLINE(  50)		bool fixed1 = null();
HXDLIN(  50)		::Array< ::Dynamic> array1 = null();
HXDLIN(  50)		this->_vertexNormalBufferContext =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,8,fixed1,array1,true);
HXLINE(  49)		bool fixed2 = null();
HXDLIN(  49)		::Array< ::Dynamic> array2 = null();
HXDLIN(  49)		this->_secondaryUvBufferContext =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,8,fixed2,array2,true);
HXLINE(  48)		bool fixed3 = null();
HXDLIN(  48)		::Array< ::Dynamic> array3 = null();
HXDLIN(  48)		this->_uvBufferContext =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,8,fixed3,array3,true);
HXLINE(  47)		bool fixed4 = null();
HXDLIN(  47)		::Array< ::Dynamic> array4 = null();
HXDLIN(  47)		this->_vertexBufferContext =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,8,fixed4,array4,true);
HXLINE(  44)		bool fixed5 = null();
HXDLIN(  44)		::Array< ::Dynamic> array5 = null();
HXDLIN(  44)		this->_vertexTangentBuffer =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,8,fixed5,array5,true);
HXLINE(  43)		bool fixed6 = null();
HXDLIN(  43)		::Array< ::Dynamic> array6 = null();
HXDLIN(  43)		this->_vertexNormalBuffer =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,8,fixed6,array6,true);
HXLINE(  42)		bool fixed7 = null();
HXDLIN(  42)		::Array< ::Dynamic> array7 = null();
HXDLIN(  42)		this->_secondaryUvBuffer =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,8,fixed7,array7,true);
HXLINE(  41)		bool fixed8 = null();
HXDLIN(  41)		::Array< ::Dynamic> array8 = null();
HXDLIN(  41)		this->_uvBuffer =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,8,fixed8,array8,true);
HXLINE(  40)		bool fixed9 = null();
HXDLIN(  40)		::Array< ::Dynamic> array9 = null();
HXDLIN(  40)		this->_vertexBuffer =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,8,fixed9,array9,true);
HXLINE(  37)		::Array< bool > array10 = null();
HXDLIN(  37)		this->_tangentsInvalid =  ::openfl::_Vector::BoolVector_obj::__alloc( HX_CTX ,8,true,array10);
HXLINE(  36)		::Array< bool > array11 = null();
HXDLIN(  36)		this->_normalsInvalid =  ::openfl::_Vector::BoolVector_obj::__alloc( HX_CTX ,8,true,array11);
HXLINE(  35)		::Array< bool > array12 = null();
HXDLIN(  35)		this->_secondaryUvsInvalid =  ::openfl::_Vector::BoolVector_obj::__alloc( HX_CTX ,8,true,array12);
HXLINE(  34)		::Array< bool > array13 = null();
HXDLIN(  34)		this->_uvsInvalid =  ::openfl::_Vector::BoolVector_obj::__alloc( HX_CTX ,8,true,array13);
HXLINE(  33)		::Array< bool > array14 = null();
HXDLIN(  33)		this->_verticesInvalid =  ::openfl::_Vector::BoolVector_obj::__alloc( HX_CTX ,8,true,array14);
HXLINE(  60)		super::__construct();
            	}

Dynamic SubGeometry_obj::__CreateEmpty() { return new SubGeometry_obj; }

void *SubGeometry_obj::_hx_vtable = 0;

Dynamic SubGeometry_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SubGeometry_obj > _hx_result = new SubGeometry_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SubGeometry_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x392651b0) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x392651b0;
	} else {
		return inClassId==(int)0x5ccf8ae3;
	}
}

static ::away3d::core::base::ISubGeometry_obj _hx_away3d_core_base_SubGeometry__hx_away3d_core_base_ISubGeometry= {
	( int (::hx::Object::*)())&::away3d::core::base::SubGeometry_obj::get_numVertices,
	( int (::hx::Object::*)())&::away3d::core::base::SubGeometry_obj::get_numTriangles,
	( int (::hx::Object::*)())&::away3d::core::base::SubGeometry_obj::get_vertexStride,
	( int (::hx::Object::*)())&::away3d::core::base::SubGeometry_obj::get_vertexNormalStride,
	( int (::hx::Object::*)())&::away3d::core::base::SubGeometry_obj::get_vertexTangentStride,
	( int (::hx::Object::*)())&::away3d::core::base::SubGeometry_obj::get_UVStride,
	( int (::hx::Object::*)())&::away3d::core::base::SubGeometry_obj::get_secondaryUVStride,
	(  ::openfl::_Vector::FloatVector (::hx::Object::*)())&::away3d::core::base::SubGeometry_obj::get_vertexData,
	(  ::openfl::_Vector::FloatVector (::hx::Object::*)())&::away3d::core::base::SubGeometry_obj::get_vertexNormalData,
	(  ::openfl::_Vector::FloatVector (::hx::Object::*)())&::away3d::core::base::SubGeometry_obj::get_vertexTangentData,
	( int (::hx::Object::*)())&::away3d::core::base::SubGeometry_obj::get_vertexOffset,
	( int (::hx::Object::*)())&::away3d::core::base::SubGeometry_obj::get_vertexNormalOffset,
	( int (::hx::Object::*)())&::away3d::core::base::SubGeometry_obj::get_vertexTangentOffset,
	( int (::hx::Object::*)())&::away3d::core::base::SubGeometry_obj::get_UVOffset,
	( int (::hx::Object::*)())&::away3d::core::base::SubGeometry_obj::get_secondaryUVOffset,
	(  ::openfl::_Vector::IntVector (::hx::Object::*)())&::away3d::core::base::SubGeometry_obj::get_indexData,
	(  ::openfl::_Vector::FloatVector (::hx::Object::*)())&::away3d::core::base::SubGeometry_obj::get_UVData,
	( Float (::hx::Object::*)())&::away3d::core::base::SubGeometry_obj::get_scaleU,
	( Float (::hx::Object::*)())&::away3d::core::base::SubGeometry_obj::get_scaleV,
	(  ::away3d::core::base::Geometry (::hx::Object::*)())&::away3d::core::base::SubGeometry_obj::get_parentGeometry,
	(  ::away3d::core::base::Geometry (::hx::Object::*)( ::away3d::core::base::Geometry))&::away3d::core::base::SubGeometry_obj::set_parentGeometry,
	(  ::openfl::_Vector::FloatVector (::hx::Object::*)())&::away3d::core::base::SubGeometry_obj::get_faceNormals,
	( bool (::hx::Object::*)())&::away3d::core::base::SubGeometry_obj::get_autoDeriveVertexNormals,
	( bool (::hx::Object::*)(bool))&::away3d::core::base::SubGeometry_obj::set_autoDeriveVertexNormals,
	( bool (::hx::Object::*)())&::away3d::core::base::SubGeometry_obj::get_autoDeriveVertexTangents,
	( bool (::hx::Object::*)(bool))&::away3d::core::base::SubGeometry_obj::set_autoDeriveVertexTangents,
	(  ::openfl::_Vector::FloatVector (::hx::Object::*)())&::away3d::core::base::SubGeometry_obj::get_vertexPositionData,
	( void (::hx::Object::*)(int, ::away3d::core::managers::Stage3DProxy))&::away3d::core::base::SubGeometry_obj::activateVertexBuffer,
	( void (::hx::Object::*)(int, ::away3d::core::managers::Stage3DProxy))&::away3d::core::base::SubGeometry_obj::activateUVBuffer,
	( void (::hx::Object::*)(int, ::away3d::core::managers::Stage3DProxy))&::away3d::core::base::SubGeometry_obj::activateSecondaryUVBuffer,
	( void (::hx::Object::*)(int, ::away3d::core::managers::Stage3DProxy))&::away3d::core::base::SubGeometry_obj::activateVertexNormalBuffer,
	( void (::hx::Object::*)(int, ::away3d::core::managers::Stage3DProxy))&::away3d::core::base::SubGeometry_obj::activateVertexTangentBuffer,
	(  ::openfl::display3D::IndexBuffer3D (::hx::Object::*)( ::away3d::core::managers::Stage3DProxy))&::away3d::core::base::SubGeometry_obj::getIndexBuffer,
	( void (::hx::Object::*)( ::openfl::geom::Matrix3D))&::away3d::core::base::SubGeometry_obj::applyTransformation,
	( void (::hx::Object::*)(Float))&::away3d::core::base::SubGeometry_obj::scale,
	( void (::hx::Object::*)())&::away3d::core::base::SubGeometry_obj::dispose,
	( ::Dynamic (::hx::Object::*)())&::away3d::core::base::SubGeometry_obj::clone,
	( void (::hx::Object::*)(::hx::Null< Float > ,::hx::Null< Float > ))&::away3d::core::base::SubGeometry_obj::scaleUV,
	(  ::away3d::core::base::SubGeometry (::hx::Object::*)())&::away3d::core::base::SubGeometry_obj::cloneWithSeperateBuffers,
	( void (::hx::Object::*)( ::openfl::_Vector::FloatVector, ::openfl::_Vector::FloatVector, ::openfl::_Vector::FloatVector, ::openfl::_Vector::FloatVector))&::away3d::core::base::SubGeometry_obj::fromVectors,
};

void *SubGeometry_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x9241dff8: return &_hx_away3d_core_base_SubGeometry__hx_away3d_core_base_ISubGeometry;
	}
	return super::_hx_getInterface(inHash);
}

int SubGeometry_obj::get_numVertices(){
            	HX_STACKFRAME(&_hx_pos_5eb48273530d3a23_68_get_numVertices)
HXDLIN(  68)		return this->_numVertices;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubGeometry_obj,get_numVertices,return )

void SubGeometry_obj::activateVertexBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_5eb48273530d3a23_75_activateVertexBuffer)
HXLINE(  76)		int contextIndex = stage3DProxy->_stage3DIndex;
HXLINE(  77)		 ::openfl::display3D::Context3D context = stage3DProxy->_context3D;
HXLINE(  78)		bool _hx_tmp;
HXDLIN(  78)		if (::hx::IsNotNull( this->_vertexBuffer->get(contextIndex).StaticCast<  ::openfl::display3D::VertexBuffer3D >() )) {
HXLINE(  78)			_hx_tmp = ::hx::IsInstanceNotEq( this->_vertexBufferContext->get(contextIndex).StaticCast<  ::openfl::display3D::Context3D >(),context );
            		}
            		else {
HXLINE(  78)			_hx_tmp = true;
            		}
HXDLIN(  78)		if (_hx_tmp) {
HXLINE(  79)			{
HXLINE(  79)				::Dynamic this1 = this->_vertexBuffer;
HXDLIN(  79)				( ( ::openfl::_Vector::ObjectVector)(this1) )->set(contextIndex,stage3DProxy->createVertexBuffer(this->_numVertices,3)).StaticCast<  ::openfl::display3D::VertexBuffer3D >();
            			}
HXLINE(  80)			this->_vertexBufferContext->set(contextIndex,context).StaticCast<  ::openfl::display3D::Context3D >();
HXLINE(  81)			this->_verticesInvalid->set(contextIndex,true);
            		}
HXLINE(  83)		if (this->_verticesInvalid->get(contextIndex)) {
HXLINE(  84)			 ::openfl::display3D::VertexBuffer3D _hx_tmp = this->_vertexBuffer->get(contextIndex).StaticCast<  ::openfl::display3D::VertexBuffer3D >();
HXDLIN(  84)			_hx_tmp->uploadFromVector(this->_vertexData,0,this->_numVertices);
HXLINE(  85)			this->_verticesInvalid->set(contextIndex,false);
            		}
HXLINE(  88)		context->setVertexBufferAt(index,this->_vertexBuffer->get(contextIndex).StaticCast<  ::openfl::display3D::VertexBuffer3D >(),0,3);
            	}


HX_DEFINE_DYNAMIC_FUNC2(SubGeometry_obj,activateVertexBuffer,(void))

void SubGeometry_obj::activateUVBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_5eb48273530d3a23_95_activateUVBuffer)
HXLINE(  96)		int contextIndex = stage3DProxy->_stage3DIndex;
HXLINE(  97)		 ::openfl::display3D::Context3D context = stage3DProxy->_context3D;
HXLINE(  99)		bool _hx_tmp;
HXDLIN(  99)		if (this->_autoGenerateUVs) {
HXLINE(  99)			_hx_tmp = this->_uvsDirty;
            		}
            		else {
HXLINE(  99)			_hx_tmp = false;
            		}
HXDLIN(  99)		if (_hx_tmp) {
HXLINE( 100)			this->_uvs = this->updateDummyUVs(this->_uvs);
            		}
HXLINE( 102)		bool _hx_tmp1;
HXDLIN( 102)		if (::hx::IsNotNull( this->_uvBuffer->get(contextIndex).StaticCast<  ::openfl::display3D::VertexBuffer3D >() )) {
HXLINE( 102)			_hx_tmp1 = ::hx::IsInstanceNotEq( this->_uvBufferContext->get(contextIndex).StaticCast<  ::openfl::display3D::Context3D >(),context );
            		}
            		else {
HXLINE( 102)			_hx_tmp1 = true;
            		}
HXDLIN( 102)		if (_hx_tmp1) {
HXLINE( 103)			{
HXLINE( 103)				::Dynamic this1 = this->_uvBuffer;
HXDLIN( 103)				( ( ::openfl::_Vector::ObjectVector)(this1) )->set(contextIndex,stage3DProxy->createVertexBuffer(this->_numVertices,2)).StaticCast<  ::openfl::display3D::VertexBuffer3D >();
            			}
HXLINE( 104)			this->_uvBufferContext->set(contextIndex,context).StaticCast<  ::openfl::display3D::Context3D >();
HXLINE( 105)			this->_uvsInvalid->set(contextIndex,true);
            		}
HXLINE( 107)		if (this->_uvsInvalid->get(contextIndex)) {
HXLINE( 108)			 ::openfl::display3D::VertexBuffer3D _hx_tmp = this->_uvBuffer->get(contextIndex).StaticCast<  ::openfl::display3D::VertexBuffer3D >();
HXDLIN( 108)			_hx_tmp->uploadFromVector(this->_uvs,0,this->_numVertices);
HXLINE( 109)			this->_uvsInvalid->set(contextIndex,false);
            		}
HXLINE( 112)		context->setVertexBufferAt(index,this->_uvBuffer->get(contextIndex).StaticCast<  ::openfl::display3D::VertexBuffer3D >(),0,2);
            	}


HX_DEFINE_DYNAMIC_FUNC2(SubGeometry_obj,activateUVBuffer,(void))

void SubGeometry_obj::activateSecondaryUVBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_5eb48273530d3a23_119_activateSecondaryUVBuffer)
HXLINE( 120)		int contextIndex = stage3DProxy->_stage3DIndex;
HXLINE( 121)		 ::openfl::display3D::Context3D context = stage3DProxy->_context3D;
HXLINE( 123)		bool _hx_tmp;
HXDLIN( 123)		if (::hx::IsNotNull( this->_secondaryUvBuffer->get(contextIndex).StaticCast<  ::openfl::display3D::VertexBuffer3D >() )) {
HXLINE( 123)			_hx_tmp = ::hx::IsInstanceNotEq( this->_secondaryUvBufferContext->get(contextIndex).StaticCast<  ::openfl::display3D::Context3D >(),context );
            		}
            		else {
HXLINE( 123)			_hx_tmp = true;
            		}
HXDLIN( 123)		if (_hx_tmp) {
HXLINE( 124)			{
HXLINE( 124)				::Dynamic this1 = this->_secondaryUvBuffer;
HXDLIN( 124)				( ( ::openfl::_Vector::ObjectVector)(this1) )->set(contextIndex,stage3DProxy->createVertexBuffer(this->_numVertices,2)).StaticCast<  ::openfl::display3D::VertexBuffer3D >();
            			}
HXLINE( 125)			this->_secondaryUvBufferContext->set(contextIndex,context).StaticCast<  ::openfl::display3D::Context3D >();
HXLINE( 126)			this->_secondaryUvsInvalid->set(contextIndex,true);
            		}
HXLINE( 128)		if (this->_secondaryUvsInvalid->get(contextIndex)) {
HXLINE( 129)			 ::openfl::display3D::VertexBuffer3D _hx_tmp = this->_secondaryUvBuffer->get(contextIndex).StaticCast<  ::openfl::display3D::VertexBuffer3D >();
HXDLIN( 129)			_hx_tmp->uploadFromVector(this->_secondaryUvs,0,this->_numVertices);
HXLINE( 130)			this->_secondaryUvsInvalid->set(contextIndex,false);
            		}
HXLINE( 133)		context->setVertexBufferAt(index,this->_secondaryUvBuffer->get(contextIndex).StaticCast<  ::openfl::display3D::VertexBuffer3D >(),0,2);
            	}


HX_DEFINE_DYNAMIC_FUNC2(SubGeometry_obj,activateSecondaryUVBuffer,(void))

void SubGeometry_obj::activateVertexNormalBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_5eb48273530d3a23_142_activateVertexNormalBuffer)
HXLINE( 143)		int contextIndex = stage3DProxy->_stage3DIndex;
HXLINE( 144)		 ::openfl::display3D::Context3D context = stage3DProxy->_context3D;
HXLINE( 146)		bool _hx_tmp;
HXDLIN( 146)		if (this->_autoDeriveVertexNormals) {
HXLINE( 146)			_hx_tmp = this->_vertexNormalsDirty;
            		}
            		else {
HXLINE( 146)			_hx_tmp = false;
            		}
HXDLIN( 146)		if (_hx_tmp) {
HXLINE( 147)			this->_vertexNormals = this->updateVertexNormals(this->_vertexNormals);
            		}
HXLINE( 149)		bool _hx_tmp1;
HXDLIN( 149)		if (::hx::IsNotNull( this->_vertexNormalBuffer->get(contextIndex).StaticCast<  ::openfl::display3D::VertexBuffer3D >() )) {
HXLINE( 149)			_hx_tmp1 = ::hx::IsInstanceNotEq( this->_vertexNormalBufferContext->get(contextIndex).StaticCast<  ::openfl::display3D::Context3D >(),context );
            		}
            		else {
HXLINE( 149)			_hx_tmp1 = true;
            		}
HXDLIN( 149)		if (_hx_tmp1) {
HXLINE( 150)			{
HXLINE( 150)				::Dynamic this1 = this->_vertexNormalBuffer;
HXDLIN( 150)				( ( ::openfl::_Vector::ObjectVector)(this1) )->set(contextIndex,stage3DProxy->createVertexBuffer(this->_numVertices,3)).StaticCast<  ::openfl::display3D::VertexBuffer3D >();
            			}
HXLINE( 151)			this->_vertexNormalBufferContext->set(contextIndex,context).StaticCast<  ::openfl::display3D::Context3D >();
HXLINE( 152)			this->_normalsInvalid->set(contextIndex,true);
            		}
HXLINE( 154)		if (this->_normalsInvalid->get(contextIndex)) {
HXLINE( 155)			 ::openfl::display3D::VertexBuffer3D _hx_tmp = this->_vertexNormalBuffer->get(contextIndex).StaticCast<  ::openfl::display3D::VertexBuffer3D >();
HXDLIN( 155)			_hx_tmp->uploadFromVector(this->_vertexNormals,0,this->_numVertices);
HXLINE( 156)			this->_normalsInvalid->set(contextIndex,false);
            		}
HXLINE( 159)		context->setVertexBufferAt(index,this->_vertexNormalBuffer->get(contextIndex).StaticCast<  ::openfl::display3D::VertexBuffer3D >(),0,3);
            	}


HX_DEFINE_DYNAMIC_FUNC2(SubGeometry_obj,activateVertexNormalBuffer,(void))

void SubGeometry_obj::activateVertexTangentBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_5eb48273530d3a23_168_activateVertexTangentBuffer)
HXLINE( 169)		int contextIndex = stage3DProxy->_stage3DIndex;
HXLINE( 170)		 ::openfl::display3D::Context3D context = stage3DProxy->_context3D;
HXLINE( 172)		if (this->_vertexTangentsDirty) {
HXLINE( 173)			this->_vertexTangents = this->updateVertexTangents(this->_vertexTangents);
            		}
HXLINE( 175)		bool _hx_tmp;
HXDLIN( 175)		if (::hx::IsNotNull( this->_vertexTangentBuffer->get(contextIndex).StaticCast<  ::openfl::display3D::VertexBuffer3D >() )) {
HXLINE( 175)			_hx_tmp = ::hx::IsInstanceNotEq( this->_vertexTangentBufferContext->get(contextIndex).StaticCast<  ::openfl::display3D::Context3D >(),context );
            		}
            		else {
HXLINE( 175)			_hx_tmp = true;
            		}
HXDLIN( 175)		if (_hx_tmp) {
HXLINE( 176)			{
HXLINE( 176)				::Dynamic this1 = this->_vertexTangentBuffer;
HXDLIN( 176)				( ( ::openfl::_Vector::ObjectVector)(this1) )->set(contextIndex,stage3DProxy->createVertexBuffer(this->_numVertices,3)).StaticCast<  ::openfl::display3D::VertexBuffer3D >();
            			}
HXLINE( 177)			this->_vertexTangentBufferContext->set(contextIndex,context).StaticCast<  ::openfl::display3D::Context3D >();
HXLINE( 178)			this->_tangentsInvalid->set(contextIndex,true);
            		}
HXLINE( 180)		if (this->_tangentsInvalid->get(contextIndex)) {
HXLINE( 181)			 ::openfl::display3D::VertexBuffer3D _hx_tmp = this->_vertexTangentBuffer->get(contextIndex).StaticCast<  ::openfl::display3D::VertexBuffer3D >();
HXDLIN( 181)			_hx_tmp->uploadFromVector(this->_vertexTangents,0,this->_numVertices);
HXLINE( 182)			this->_tangentsInvalid->set(contextIndex,false);
            		}
HXLINE( 184)		context->setVertexBufferAt(index,this->_vertexTangentBuffer->get(contextIndex).StaticCast<  ::openfl::display3D::VertexBuffer3D >(),0,3);
            	}


HX_DEFINE_DYNAMIC_FUNC2(SubGeometry_obj,activateVertexTangentBuffer,(void))

void SubGeometry_obj::applyTransformation( ::openfl::geom::Matrix3D transform){
            	HX_STACKFRAME(&_hx_pos_5eb48273530d3a23_188_applyTransformation)
HXLINE( 189)		this->super::applyTransformation(transform);
HXLINE( 190)		this->invalidateBuffers(this->_verticesInvalid);
HXLINE( 191)		this->invalidateBuffers(this->_normalsInvalid);
HXLINE( 192)		this->invalidateBuffers(this->_tangentsInvalid);
            	}


::Dynamic SubGeometry_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_5eb48273530d3a23_200_clone)
HXLINE( 201)		 ::away3d::core::base::SubGeometry clone =  ::away3d::core::base::SubGeometry_obj::__alloc( HX_CTX );
HXLINE( 202)		 ::openfl::_Vector::FloatVector vec = null();
HXDLIN( 202)		clone->updateVertexData(( ( ::openfl::_Vector::FloatVector)(this->_vertexData->concat(vec)) ));
HXLINE( 203)		 ::openfl::_Vector::FloatVector vec1 = null();
HXDLIN( 203)		clone->updateUVData(( ( ::openfl::_Vector::FloatVector)(this->_uvs->concat(vec1)) ));
HXLINE( 204)		 ::openfl::_Vector::IntVector vec2 = null();
HXDLIN( 204)		clone->updateIndexData(( ( ::openfl::_Vector::IntVector)(this->_indices->concat(vec2)) ));
HXLINE( 205)		if (::hx::IsNotNull( this->_secondaryUvs )) {
HXLINE( 206)			 ::openfl::_Vector::FloatVector vec = null();
HXDLIN( 206)			clone->updateSecondaryUVData(( ( ::openfl::_Vector::FloatVector)(this->_secondaryUvs->concat(vec)) ));
            		}
HXLINE( 207)		if (!(this->_autoDeriveVertexNormals)) {
HXLINE( 208)			 ::openfl::_Vector::FloatVector vec = null();
HXDLIN( 208)			clone->updateVertexNormalData(( ( ::openfl::_Vector::FloatVector)(this->_vertexNormals->concat(vec)) ));
            		}
HXLINE( 209)		if (!(this->_autoDeriveVertexTangents)) {
HXLINE( 210)			 ::openfl::_Vector::FloatVector vec = null();
HXDLIN( 210)			clone->updateVertexTangentData(( ( ::openfl::_Vector::FloatVector)(this->_vertexTangents->concat(vec)) ));
            		}
HXLINE( 211)		return clone;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubGeometry_obj,clone,return )

void SubGeometry_obj::scale(Float scale){
            	HX_STACKFRAME(&_hx_pos_5eb48273530d3a23_218_scale)
HXLINE( 219)		this->super::scale(scale);
HXLINE( 220)		this->invalidateBuffers(this->_verticesInvalid);
            	}


void SubGeometry_obj::scaleUV(::hx::Null< Float >  __o_scaleU,::hx::Null< Float >  __o_scaleV){
            		Float scaleU = __o_scaleU.Default(1);
            		Float scaleV = __o_scaleV.Default(1);
            	HX_STACKFRAME(&_hx_pos_5eb48273530d3a23_227_scaleUV)
HXLINE( 228)		this->super::scaleUV(scaleU,scaleV);
HXLINE( 229)		this->invalidateBuffers(this->_uvsInvalid);
            	}


void SubGeometry_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_5eb48273530d3a23_236_dispose)
HXLINE( 237)		this->super::dispose();
HXLINE( 238)		this->disposeAllVertexBuffers();
HXLINE( 239)		this->_vertexBuffer = null();
HXLINE( 240)		this->_vertexNormalBuffer = null();
HXLINE( 241)		this->_uvBuffer = null();
HXLINE( 242)		this->_secondaryUvBuffer = null();
HXLINE( 243)		this->_vertexTangentBuffer = null();
HXLINE( 244)		this->_indexBuffer = null();
HXLINE( 245)		this->_uvs = null();
HXLINE( 246)		this->_secondaryUvs = null();
HXLINE( 247)		this->_vertexNormals = null();
HXLINE( 248)		this->_vertexTangents = null();
HXLINE( 249)		this->_vertexBufferContext = null();
HXLINE( 250)		this->_uvBufferContext = null();
HXLINE( 251)		this->_secondaryUvBufferContext = null();
HXLINE( 252)		this->_vertexNormalBufferContext = null();
HXLINE( 253)		this->_vertexTangentBufferContext = null();
            	}


void SubGeometry_obj::disposeAllVertexBuffers(){
            	HX_STACKFRAME(&_hx_pos_5eb48273530d3a23_257_disposeAllVertexBuffers)
HXLINE( 258)		this->disposeVertexBuffers(this->_vertexBuffer);
HXLINE( 259)		this->disposeVertexBuffers(this->_vertexNormalBuffer);
HXLINE( 260)		this->disposeVertexBuffers(this->_uvBuffer);
HXLINE( 261)		this->disposeVertexBuffers(this->_secondaryUvBuffer);
HXLINE( 262)		this->disposeVertexBuffers(this->_vertexTangentBuffer);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubGeometry_obj,disposeAllVertexBuffers,(void))

 ::openfl::_Vector::FloatVector SubGeometry_obj::get_vertexData(){
            	HX_STACKFRAME(&_hx_pos_5eb48273530d3a23_270_get_vertexData)
HXDLIN( 270)		return this->_vertexData;
            	}


 ::openfl::_Vector::FloatVector SubGeometry_obj::get_vertexPositionData(){
            	HX_STACKFRAME(&_hx_pos_5eb48273530d3a23_275_get_vertexPositionData)
HXDLIN( 275)		return this->_vertexData;
            	}


void SubGeometry_obj::updateVertexData( ::openfl::_Vector::FloatVector vertices){
            	HX_STACKFRAME(&_hx_pos_5eb48273530d3a23_283_updateVertexData)
HXLINE( 284)		if (this->_autoDeriveVertexNormals) {
HXLINE( 285)			this->_vertexNormalsDirty = true;
            		}
HXLINE( 286)		if (this->_autoDeriveVertexTangents) {
HXLINE( 287)			this->_vertexTangentsDirty = true;
            		}
HXLINE( 289)		this->_faceNormalsDirty = true;
HXLINE( 291)		this->_vertexData = vertices;
HXLINE( 292)		int numVertices = ::Std_obj::_hx_int((( (Float)(vertices->get_length()) ) / ( (Float)(3) )));
HXLINE( 293)		if ((numVertices != this->_numVertices)) {
HXLINE( 294)			this->disposeAllVertexBuffers();
            		}
HXLINE( 295)		this->_numVertices = numVertices;
HXLINE( 297)		this->invalidateBuffers(this->_verticesInvalid);
HXLINE( 299)		this->invalidateBounds();
            	}


HX_DEFINE_DYNAMIC_FUNC1(SubGeometry_obj,updateVertexData,(void))

 ::openfl::_Vector::FloatVector SubGeometry_obj::get_UVData(){
            	HX_STACKFRAME(&_hx_pos_5eb48273530d3a23_306_get_UVData)
HXLINE( 307)		bool _hx_tmp;
HXDLIN( 307)		if (this->_uvsDirty) {
HXLINE( 307)			_hx_tmp = this->_autoGenerateUVs;
            		}
            		else {
HXLINE( 307)			_hx_tmp = false;
            		}
HXDLIN( 307)		if (_hx_tmp) {
HXLINE( 308)			this->_uvs = this->updateDummyUVs(this->_uvs);
            		}
HXLINE( 309)		return this->_uvs;
            	}


 ::openfl::_Vector::FloatVector SubGeometry_obj::get_secondaryUVData(){
            	HX_STACKFRAME(&_hx_pos_5eb48273530d3a23_314_get_secondaryUVData)
HXDLIN( 314)		return this->_secondaryUvs;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubGeometry_obj,get_secondaryUVData,return )

void SubGeometry_obj::updateUVData( ::openfl::_Vector::FloatVector uvs){
            	HX_STACKFRAME(&_hx_pos_5eb48273530d3a23_322_updateUVData)
HXLINE( 324)		if (this->_autoDeriveVertexTangents) {
HXLINE( 325)			this->_vertexTangentsDirty = true;
            		}
HXLINE( 326)		this->_faceTangentsDirty = true;
HXLINE( 327)		this->_uvs = uvs;
HXLINE( 328)		this->invalidateBuffers(this->_uvsInvalid);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SubGeometry_obj,updateUVData,(void))

void SubGeometry_obj::updateSecondaryUVData( ::openfl::_Vector::FloatVector uvs){
            	HX_STACKFRAME(&_hx_pos_5eb48273530d3a23_332_updateSecondaryUVData)
HXLINE( 333)		this->_secondaryUvs = uvs;
HXLINE( 334)		this->invalidateBuffers(this->_secondaryUvsInvalid);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SubGeometry_obj,updateSecondaryUVData,(void))

 ::openfl::_Vector::FloatVector SubGeometry_obj::get_vertexNormalData(){
            	HX_STACKFRAME(&_hx_pos_5eb48273530d3a23_341_get_vertexNormalData)
HXLINE( 342)		bool _hx_tmp;
HXDLIN( 342)		if (this->_autoDeriveVertexNormals) {
HXLINE( 342)			_hx_tmp = this->_vertexNormalsDirty;
            		}
            		else {
HXLINE( 342)			_hx_tmp = false;
            		}
HXDLIN( 342)		if (_hx_tmp) {
HXLINE( 343)			this->_vertexNormals = this->updateVertexNormals(this->_vertexNormals);
            		}
HXLINE( 344)		return this->_vertexNormals;
            	}


void SubGeometry_obj::updateVertexNormalData( ::openfl::_Vector::FloatVector vertexNormals){
            	HX_STACKFRAME(&_hx_pos_5eb48273530d3a23_353_updateVertexNormalData)
HXLINE( 354)		this->_vertexNormalsDirty = false;
HXLINE( 355)		this->_autoDeriveVertexNormals = ::hx::IsNull( vertexNormals );
HXLINE( 356)		this->_vertexNormals = vertexNormals;
HXLINE( 357)		this->invalidateBuffers(this->_normalsInvalid);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SubGeometry_obj,updateVertexNormalData,(void))

 ::openfl::_Vector::FloatVector SubGeometry_obj::get_vertexTangentData(){
            	HX_STACKFRAME(&_hx_pos_5eb48273530d3a23_366_get_vertexTangentData)
HXLINE( 367)		bool _hx_tmp;
HXDLIN( 367)		if (this->_autoDeriveVertexTangents) {
HXLINE( 367)			_hx_tmp = this->_vertexTangentsDirty;
            		}
            		else {
HXLINE( 367)			_hx_tmp = false;
            		}
HXDLIN( 367)		if (_hx_tmp) {
HXLINE( 368)			this->_vertexTangents = this->updateVertexTangents(this->_vertexTangents);
            		}
HXLINE( 369)		return this->_vertexTangents;
            	}


void SubGeometry_obj::updateVertexTangentData( ::openfl::_Vector::FloatVector vertexTangents){
            	HX_STACKFRAME(&_hx_pos_5eb48273530d3a23_378_updateVertexTangentData)
HXLINE( 379)		this->_vertexTangentsDirty = false;
HXLINE( 380)		this->_autoDeriveVertexTangents = ::hx::IsNull( vertexTangents );
HXLINE( 381)		this->_vertexTangents = vertexTangents;
HXLINE( 382)		this->invalidateBuffers(this->_tangentsInvalid);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SubGeometry_obj,updateVertexTangentData,(void))

void SubGeometry_obj::fromVectors( ::openfl::_Vector::FloatVector vertices, ::openfl::_Vector::FloatVector uvs, ::openfl::_Vector::FloatVector normals, ::openfl::_Vector::FloatVector tangents){
            	HX_STACKFRAME(&_hx_pos_5eb48273530d3a23_386_fromVectors)
HXLINE( 387)		this->updateVertexData(vertices);
HXLINE( 388)		this->updateUVData(uvs);
HXLINE( 389)		this->updateVertexNormalData(normals);
HXLINE( 390)		this->updateVertexTangentData(tangents);
            	}


HX_DEFINE_DYNAMIC_FUNC4(SubGeometry_obj,fromVectors,(void))

 ::openfl::_Vector::FloatVector SubGeometry_obj::updateVertexNormals( ::openfl::_Vector::FloatVector target){
            	HX_STACKFRAME(&_hx_pos_5eb48273530d3a23_394_updateVertexNormals)
HXLINE( 395)		this->invalidateBuffers(this->_normalsInvalid);
HXLINE( 396)		return this->super::updateVertexNormals(target);
            	}


 ::openfl::_Vector::FloatVector SubGeometry_obj::updateVertexTangents( ::openfl::_Vector::FloatVector target){
            	HX_STACKFRAME(&_hx_pos_5eb48273530d3a23_400_updateVertexTangents)
HXLINE( 401)		if (this->_vertexNormalsDirty) {
HXLINE( 402)			this->_vertexNormals = this->updateVertexNormals(this->_vertexNormals);
            		}
HXLINE( 403)		this->invalidateBuffers(this->_tangentsInvalid);
HXLINE( 404)		return this->super::updateVertexTangents(target);
            	}


 ::openfl::_Vector::FloatVector SubGeometry_obj::updateDummyUVs( ::openfl::_Vector::FloatVector target){
            	HX_STACKFRAME(&_hx_pos_5eb48273530d3a23_408_updateDummyUVs)
HXLINE( 409)		this->invalidateBuffers(this->_uvsInvalid);
HXLINE( 410)		return this->super::updateDummyUVs(target);
            	}


void SubGeometry_obj::disposeForStage3D( ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_5eb48273530d3a23_414_disposeForStage3D)
HXLINE( 415)		int index = stage3DProxy->_stage3DIndex;
HXLINE( 416)		if (::hx::IsNotNull( this->_vertexBuffer->get(index).StaticCast<  ::openfl::display3D::VertexBuffer3D >() )) {
HXLINE( 417)			::away3d::core::managers::Stage3DProxy_obj::disposeVertexBuffer(this->_vertexBuffer->get(index).StaticCast<  ::openfl::display3D::VertexBuffer3D >());
HXLINE( 418)			{
HXLINE( 418)				 ::openfl::display3D::VertexBuffer3D value = null();
HXDLIN( 418)				this->_vertexBuffer->set(index,value).StaticCast<  ::openfl::display3D::VertexBuffer3D >();
            			}
            		}
HXLINE( 420)		if (::hx::IsNotNull( this->_uvBuffer->get(index).StaticCast<  ::openfl::display3D::VertexBuffer3D >() )) {
HXLINE( 421)			::away3d::core::managers::Stage3DProxy_obj::disposeVertexBuffer(this->_uvBuffer->get(index).StaticCast<  ::openfl::display3D::VertexBuffer3D >());
HXLINE( 422)			{
HXLINE( 422)				 ::openfl::display3D::VertexBuffer3D value = null();
HXDLIN( 422)				this->_uvBuffer->set(index,value).StaticCast<  ::openfl::display3D::VertexBuffer3D >();
            			}
            		}
HXLINE( 424)		if (::hx::IsNotNull( this->_secondaryUvBuffer->get(index).StaticCast<  ::openfl::display3D::VertexBuffer3D >() )) {
HXLINE( 425)			::away3d::core::managers::Stage3DProxy_obj::disposeVertexBuffer(this->_secondaryUvBuffer->get(index).StaticCast<  ::openfl::display3D::VertexBuffer3D >());
HXLINE( 426)			{
HXLINE( 426)				 ::openfl::display3D::VertexBuffer3D value = null();
HXDLIN( 426)				this->_secondaryUvBuffer->set(index,value).StaticCast<  ::openfl::display3D::VertexBuffer3D >();
            			}
            		}
HXLINE( 428)		if (::hx::IsNotNull( this->_vertexNormalBuffer->get(index).StaticCast<  ::openfl::display3D::VertexBuffer3D >() )) {
HXLINE( 429)			::away3d::core::managers::Stage3DProxy_obj::disposeVertexBuffer(this->_vertexNormalBuffer->get(index).StaticCast<  ::openfl::display3D::VertexBuffer3D >());
HXLINE( 430)			{
HXLINE( 430)				 ::openfl::display3D::VertexBuffer3D value = null();
HXDLIN( 430)				this->_vertexNormalBuffer->set(index,value).StaticCast<  ::openfl::display3D::VertexBuffer3D >();
            			}
            		}
HXLINE( 432)		if (::hx::IsNotNull( this->_vertexTangentBuffer->get(index).StaticCast<  ::openfl::display3D::VertexBuffer3D >() )) {
HXLINE( 433)			::away3d::core::managers::Stage3DProxy_obj::disposeVertexBuffer(this->_vertexTangentBuffer->get(index).StaticCast<  ::openfl::display3D::VertexBuffer3D >());
HXLINE( 434)			{
HXLINE( 434)				 ::openfl::display3D::VertexBuffer3D value = null();
HXDLIN( 434)				this->_vertexTangentBuffer->set(index,value).StaticCast<  ::openfl::display3D::VertexBuffer3D >();
            			}
            		}
HXLINE( 436)		if (::hx::IsNotNull( this->_indexBuffer->get(index).StaticCast<  ::openfl::display3D::IndexBuffer3D >() )) {
HXLINE( 437)			::away3d::core::managers::Stage3DProxy_obj::disposeIndexBuffer(this->_indexBuffer->get(index).StaticCast<  ::openfl::display3D::IndexBuffer3D >());
HXLINE( 438)			{
HXLINE( 438)				 ::openfl::display3D::IndexBuffer3D value = null();
HXDLIN( 438)				this->_indexBuffer->set(index,value).StaticCast<  ::openfl::display3D::IndexBuffer3D >();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SubGeometry_obj,disposeForStage3D,(void))

int SubGeometry_obj::get_vertexStride(){
            	HX_STACKFRAME(&_hx_pos_5eb48273530d3a23_444_get_vertexStride)
HXDLIN( 444)		return 3;
            	}


int SubGeometry_obj::get_vertexTangentStride(){
            	HX_STACKFRAME(&_hx_pos_5eb48273530d3a23_449_get_vertexTangentStride)
HXDLIN( 449)		return 3;
            	}


int SubGeometry_obj::get_vertexNormalStride(){
            	HX_STACKFRAME(&_hx_pos_5eb48273530d3a23_454_get_vertexNormalStride)
HXDLIN( 454)		return 3;
            	}


int SubGeometry_obj::get_UVStride(){
            	HX_STACKFRAME(&_hx_pos_5eb48273530d3a23_459_get_UVStride)
HXDLIN( 459)		return 2;
            	}


int SubGeometry_obj::get_secondaryUVStride(){
            	HX_STACKFRAME(&_hx_pos_5eb48273530d3a23_464_get_secondaryUVStride)
HXDLIN( 464)		return 2;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubGeometry_obj,get_secondaryUVStride,return )

int SubGeometry_obj::get_vertexOffset(){
            	HX_STACKFRAME(&_hx_pos_5eb48273530d3a23_469_get_vertexOffset)
HXDLIN( 469)		return 0;
            	}


int SubGeometry_obj::get_vertexNormalOffset(){
            	HX_STACKFRAME(&_hx_pos_5eb48273530d3a23_474_get_vertexNormalOffset)
HXDLIN( 474)		return 0;
            	}


int SubGeometry_obj::get_vertexTangentOffset(){
            	HX_STACKFRAME(&_hx_pos_5eb48273530d3a23_479_get_vertexTangentOffset)
HXDLIN( 479)		return 0;
            	}


int SubGeometry_obj::get_UVOffset(){
            	HX_STACKFRAME(&_hx_pos_5eb48273530d3a23_484_get_UVOffset)
HXDLIN( 484)		return 0;
            	}


int SubGeometry_obj::get_secondaryUVOffset(){
            	HX_STACKFRAME(&_hx_pos_5eb48273530d3a23_489_get_secondaryUVOffset)
HXDLIN( 489)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubGeometry_obj,get_secondaryUVOffset,return )

 ::away3d::core::base::SubGeometry SubGeometry_obj::cloneWithSeperateBuffers(){
            	HX_STACKFRAME(&_hx_pos_5eb48273530d3a23_494_cloneWithSeperateBuffers)
HXDLIN( 494)		return ::hx::TCast<  ::away3d::core::base::SubGeometry >::cast(this->clone());
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubGeometry_obj,cloneWithSeperateBuffers,return )


::hx::ObjectPtr< SubGeometry_obj > SubGeometry_obj::__new() {
	::hx::ObjectPtr< SubGeometry_obj > __this = new SubGeometry_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< SubGeometry_obj > SubGeometry_obj::__alloc(::hx::Ctx *_hx_ctx) {
	SubGeometry_obj *__this = (SubGeometry_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SubGeometry_obj), true, "away3d.core.base.SubGeometry"));
	*(void **)__this = SubGeometry_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SubGeometry_obj::SubGeometry_obj()
{
}

void SubGeometry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SubGeometry);
	HX_MARK_MEMBER_NAME(_uvs,"_uvs");
	HX_MARK_MEMBER_NAME(_secondaryUvs,"_secondaryUvs");
	HX_MARK_MEMBER_NAME(_vertexNormals,"_vertexNormals");
	HX_MARK_MEMBER_NAME(_vertexTangents,"_vertexTangents");
	HX_MARK_MEMBER_NAME(_verticesInvalid,"_verticesInvalid");
	HX_MARK_MEMBER_NAME(_uvsInvalid,"_uvsInvalid");
	HX_MARK_MEMBER_NAME(_secondaryUvsInvalid,"_secondaryUvsInvalid");
	HX_MARK_MEMBER_NAME(_normalsInvalid,"_normalsInvalid");
	HX_MARK_MEMBER_NAME(_tangentsInvalid,"_tangentsInvalid");
	HX_MARK_MEMBER_NAME(_vertexBuffer,"_vertexBuffer");
	HX_MARK_MEMBER_NAME(_uvBuffer,"_uvBuffer");
	HX_MARK_MEMBER_NAME(_secondaryUvBuffer,"_secondaryUvBuffer");
	HX_MARK_MEMBER_NAME(_vertexNormalBuffer,"_vertexNormalBuffer");
	HX_MARK_MEMBER_NAME(_vertexTangentBuffer,"_vertexTangentBuffer");
	HX_MARK_MEMBER_NAME(_vertexBufferContext,"_vertexBufferContext");
	HX_MARK_MEMBER_NAME(_uvBufferContext,"_uvBufferContext");
	HX_MARK_MEMBER_NAME(_secondaryUvBufferContext,"_secondaryUvBufferContext");
	HX_MARK_MEMBER_NAME(_vertexNormalBufferContext,"_vertexNormalBufferContext");
	HX_MARK_MEMBER_NAME(_vertexTangentBufferContext,"_vertexTangentBufferContext");
	HX_MARK_MEMBER_NAME(_numVertices,"_numVertices");
	 ::away3d::core::base::SubGeometryBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SubGeometry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_uvs,"_uvs");
	HX_VISIT_MEMBER_NAME(_secondaryUvs,"_secondaryUvs");
	HX_VISIT_MEMBER_NAME(_vertexNormals,"_vertexNormals");
	HX_VISIT_MEMBER_NAME(_vertexTangents,"_vertexTangents");
	HX_VISIT_MEMBER_NAME(_verticesInvalid,"_verticesInvalid");
	HX_VISIT_MEMBER_NAME(_uvsInvalid,"_uvsInvalid");
	HX_VISIT_MEMBER_NAME(_secondaryUvsInvalid,"_secondaryUvsInvalid");
	HX_VISIT_MEMBER_NAME(_normalsInvalid,"_normalsInvalid");
	HX_VISIT_MEMBER_NAME(_tangentsInvalid,"_tangentsInvalid");
	HX_VISIT_MEMBER_NAME(_vertexBuffer,"_vertexBuffer");
	HX_VISIT_MEMBER_NAME(_uvBuffer,"_uvBuffer");
	HX_VISIT_MEMBER_NAME(_secondaryUvBuffer,"_secondaryUvBuffer");
	HX_VISIT_MEMBER_NAME(_vertexNormalBuffer,"_vertexNormalBuffer");
	HX_VISIT_MEMBER_NAME(_vertexTangentBuffer,"_vertexTangentBuffer");
	HX_VISIT_MEMBER_NAME(_vertexBufferContext,"_vertexBufferContext");
	HX_VISIT_MEMBER_NAME(_uvBufferContext,"_uvBufferContext");
	HX_VISIT_MEMBER_NAME(_secondaryUvBufferContext,"_secondaryUvBufferContext");
	HX_VISIT_MEMBER_NAME(_vertexNormalBufferContext,"_vertexNormalBufferContext");
	HX_VISIT_MEMBER_NAME(_vertexTangentBufferContext,"_vertexTangentBufferContext");
	HX_VISIT_MEMBER_NAME(_numVertices,"_numVertices");
	 ::away3d::core::base::SubGeometryBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val SubGeometry_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_uvs") ) { return ::hx::Val( _uvs ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		if (HX_FIELD_EQ(inName,"scale") ) { return ::hx::Val( scale_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scaleUV") ) { return ::hx::Val( scaleUV_dyn() ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_uvBuffer") ) { return ::hx::Val( _uvBuffer ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_UVData") ) { return ::hx::Val( get_UVData_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numVertices") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numVertices() ); }
		if (HX_FIELD_EQ(inName,"_uvsInvalid") ) { return ::hx::Val( _uvsInvalid ); }
		if (HX_FIELD_EQ(inName,"fromVectors") ) { return ::hx::Val( fromVectors_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_numVertices") ) { return ::hx::Val( _numVertices ); }
		if (HX_FIELD_EQ(inName,"updateUVData") ) { return ::hx::Val( updateUVData_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_UVStride") ) { return ::hx::Val( get_UVStride_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_UVOffset") ) { return ::hx::Val( get_UVOffset_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_secondaryUvs") ) { return ::hx::Val( _secondaryUvs ); }
		if (HX_FIELD_EQ(inName,"_vertexBuffer") ) { return ::hx::Val( _vertexBuffer ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_vertexNormals") ) { return ::hx::Val( _vertexNormals ); }
		if (HX_FIELD_EQ(inName,"get_vertexData") ) { return ::hx::Val( get_vertexData_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateDummyUVs") ) { return ::hx::Val( updateDummyUVs_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"secondaryUVData") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_secondaryUVData() ); }
		if (HX_FIELD_EQ(inName,"_vertexTangents") ) { return ::hx::Val( _vertexTangents ); }
		if (HX_FIELD_EQ(inName,"_normalsInvalid") ) { return ::hx::Val( _normalsInvalid ); }
		if (HX_FIELD_EQ(inName,"get_numVertices") ) { return ::hx::Val( get_numVertices_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_verticesInvalid") ) { return ::hx::Val( _verticesInvalid ); }
		if (HX_FIELD_EQ(inName,"_tangentsInvalid") ) { return ::hx::Val( _tangentsInvalid ); }
		if (HX_FIELD_EQ(inName,"_uvBufferContext") ) { return ::hx::Val( _uvBufferContext ); }
		if (HX_FIELD_EQ(inName,"activateUVBuffer") ) { return ::hx::Val( activateUVBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateVertexData") ) { return ::hx::Val( updateVertexData_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_vertexStride") ) { return ::hx::Val( get_vertexStride_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_vertexOffset") ) { return ::hx::Val( get_vertexOffset_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"secondaryUVStride") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_secondaryUVStride() ); }
		if (HX_FIELD_EQ(inName,"secondaryUVOffset") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_secondaryUVOffset() ); }
		if (HX_FIELD_EQ(inName,"disposeForStage3D") ) { return ::hx::Val( disposeForStage3D_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_secondaryUvBuffer") ) { return ::hx::Val( _secondaryUvBuffer ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_vertexNormalBuffer") ) { return ::hx::Val( _vertexNormalBuffer ); }
		if (HX_FIELD_EQ(inName,"applyTransformation") ) { return ::hx::Val( applyTransformation_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_secondaryUVData") ) { return ::hx::Val( get_secondaryUVData_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateVertexNormals") ) { return ::hx::Val( updateVertexNormals_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_secondaryUvsInvalid") ) { return ::hx::Val( _secondaryUvsInvalid ); }
		if (HX_FIELD_EQ(inName,"_vertexTangentBuffer") ) { return ::hx::Val( _vertexTangentBuffer ); }
		if (HX_FIELD_EQ(inName,"_vertexBufferContext") ) { return ::hx::Val( _vertexBufferContext ); }
		if (HX_FIELD_EQ(inName,"activateVertexBuffer") ) { return ::hx::Val( activateVertexBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_vertexNormalData") ) { return ::hx::Val( get_vertexNormalData_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateVertexTangents") ) { return ::hx::Val( updateVertexTangents_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"updateSecondaryUVData") ) { return ::hx::Val( updateSecondaryUVData_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_vertexTangentData") ) { return ::hx::Val( get_vertexTangentData_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_secondaryUVStride") ) { return ::hx::Val( get_secondaryUVStride_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_secondaryUVOffset") ) { return ::hx::Val( get_secondaryUVOffset_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_vertexPositionData") ) { return ::hx::Val( get_vertexPositionData_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateVertexNormalData") ) { return ::hx::Val( updateVertexNormalData_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_vertexNormalStride") ) { return ::hx::Val( get_vertexNormalStride_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_vertexNormalOffset") ) { return ::hx::Val( get_vertexNormalOffset_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"disposeAllVertexBuffers") ) { return ::hx::Val( disposeAllVertexBuffers_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateVertexTangentData") ) { return ::hx::Val( updateVertexTangentData_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_vertexTangentStride") ) { return ::hx::Val( get_vertexTangentStride_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_vertexTangentOffset") ) { return ::hx::Val( get_vertexTangentOffset_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"cloneWithSeperateBuffers") ) { return ::hx::Val( cloneWithSeperateBuffers_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_secondaryUvBufferContext") ) { return ::hx::Val( _secondaryUvBufferContext ); }
		if (HX_FIELD_EQ(inName,"activateSecondaryUVBuffer") ) { return ::hx::Val( activateSecondaryUVBuffer_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_vertexNormalBufferContext") ) { return ::hx::Val( _vertexNormalBufferContext ); }
		if (HX_FIELD_EQ(inName,"activateVertexNormalBuffer") ) { return ::hx::Val( activateVertexNormalBuffer_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_vertexTangentBufferContext") ) { return ::hx::Val( _vertexTangentBufferContext ); }
		if (HX_FIELD_EQ(inName,"activateVertexTangentBuffer") ) { return ::hx::Val( activateVertexTangentBuffer_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SubGeometry_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_uvs") ) { _uvs=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_uvBuffer") ) { _uvBuffer=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_uvsInvalid") ) { _uvsInvalid=inValue.Cast<  ::openfl::_Vector::BoolVector >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_numVertices") ) { _numVertices=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_secondaryUvs") ) { _secondaryUvs=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vertexBuffer") ) { _vertexBuffer=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_vertexNormals") ) { _vertexNormals=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_vertexTangents") ) { _vertexTangents=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_normalsInvalid") ) { _normalsInvalid=inValue.Cast<  ::openfl::_Vector::BoolVector >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_verticesInvalid") ) { _verticesInvalid=inValue.Cast<  ::openfl::_Vector::BoolVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tangentsInvalid") ) { _tangentsInvalid=inValue.Cast<  ::openfl::_Vector::BoolVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_uvBufferContext") ) { _uvBufferContext=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_secondaryUvBuffer") ) { _secondaryUvBuffer=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_vertexNormalBuffer") ) { _vertexNormalBuffer=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_secondaryUvsInvalid") ) { _secondaryUvsInvalid=inValue.Cast<  ::openfl::_Vector::BoolVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vertexTangentBuffer") ) { _vertexTangentBuffer=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vertexBufferContext") ) { _vertexBufferContext=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_secondaryUvBufferContext") ) { _secondaryUvBufferContext=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_vertexNormalBufferContext") ) { _vertexNormalBufferContext=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_vertexTangentBufferContext") ) { _vertexTangentBufferContext=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SubGeometry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("numVertices",5f,10,2c,56));
	outFields->push(HX_("secondaryUVData",9f,6f,21,6f));
	outFields->push(HX_("secondaryUVStride",ce,40,bf,7c));
	outFields->push(HX_("secondaryUVOffset",48,b8,ce,cb));
	outFields->push(HX_("_uvs",f3,73,24,3f));
	outFields->push(HX_("_secondaryUvs",bd,4a,3d,a5));
	outFields->push(HX_("_vertexNormals",a9,a1,6b,dc));
	outFields->push(HX_("_vertexTangents",31,74,95,07));
	outFields->push(HX_("_verticesInvalid",7f,66,39,6b));
	outFields->push(HX_("_uvsInvalid",44,43,1b,aa));
	outFields->push(HX_("_secondaryUvsInvalid",ba,39,37,04));
	outFields->push(HX_("_normalsInvalid",8a,00,95,e8));
	outFields->push(HX_("_tangentsInvalid",0a,f3,b0,64));
	outFields->push(HX_("_vertexBuffer",63,42,18,53));
	outFields->push(HX_("_uvBuffer",a0,0d,b2,9b));
	outFields->push(HX_("_secondaryUvBuffer",96,5a,e8,41));
	outFields->push(HX_("_vertexNormalBuffer",2a,6c,3b,51));
	outFields->push(HX_("_vertexTangentBuffer",a2,6c,c1,63));
	outFields->push(HX_("_vertexBufferContext",cc,dd,9e,c6));
	outFields->push(HX_("_uvBufferContext",2f,a4,a9,54));
	outFields->push(HX_("_secondaryUvBufferContext",f9,81,8e,71));
	outFields->push(HX_("_vertexNormalBufferContext",e5,8a,59,ad));
	outFields->push(HX_("_vertexTangentBufferContext",6d,09,39,67));
	outFields->push(HX_("_numVertices",60,be,35,bc));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SubGeometry_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(SubGeometry_obj,_uvs),HX_("_uvs",f3,73,24,3f)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(SubGeometry_obj,_secondaryUvs),HX_("_secondaryUvs",bd,4a,3d,a5)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(SubGeometry_obj,_vertexNormals),HX_("_vertexNormals",a9,a1,6b,dc)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(SubGeometry_obj,_vertexTangents),HX_("_vertexTangents",31,74,95,07)},
	{::hx::fsObject /*  ::openfl::_Vector::BoolVector */ ,(int)offsetof(SubGeometry_obj,_verticesInvalid),HX_("_verticesInvalid",7f,66,39,6b)},
	{::hx::fsObject /*  ::openfl::_Vector::BoolVector */ ,(int)offsetof(SubGeometry_obj,_uvsInvalid),HX_("_uvsInvalid",44,43,1b,aa)},
	{::hx::fsObject /*  ::openfl::_Vector::BoolVector */ ,(int)offsetof(SubGeometry_obj,_secondaryUvsInvalid),HX_("_secondaryUvsInvalid",ba,39,37,04)},
	{::hx::fsObject /*  ::openfl::_Vector::BoolVector */ ,(int)offsetof(SubGeometry_obj,_normalsInvalid),HX_("_normalsInvalid",8a,00,95,e8)},
	{::hx::fsObject /*  ::openfl::_Vector::BoolVector */ ,(int)offsetof(SubGeometry_obj,_tangentsInvalid),HX_("_tangentsInvalid",0a,f3,b0,64)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(SubGeometry_obj,_vertexBuffer),HX_("_vertexBuffer",63,42,18,53)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(SubGeometry_obj,_uvBuffer),HX_("_uvBuffer",a0,0d,b2,9b)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(SubGeometry_obj,_secondaryUvBuffer),HX_("_secondaryUvBuffer",96,5a,e8,41)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(SubGeometry_obj,_vertexNormalBuffer),HX_("_vertexNormalBuffer",2a,6c,3b,51)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(SubGeometry_obj,_vertexTangentBuffer),HX_("_vertexTangentBuffer",a2,6c,c1,63)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(SubGeometry_obj,_vertexBufferContext),HX_("_vertexBufferContext",cc,dd,9e,c6)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(SubGeometry_obj,_uvBufferContext),HX_("_uvBufferContext",2f,a4,a9,54)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(SubGeometry_obj,_secondaryUvBufferContext),HX_("_secondaryUvBufferContext",f9,81,8e,71)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(SubGeometry_obj,_vertexNormalBufferContext),HX_("_vertexNormalBufferContext",e5,8a,59,ad)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(SubGeometry_obj,_vertexTangentBufferContext),HX_("_vertexTangentBufferContext",6d,09,39,67)},
	{::hx::fsInt,(int)offsetof(SubGeometry_obj,_numVertices),HX_("_numVertices",60,be,35,bc)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SubGeometry_obj_sStaticStorageInfo = 0;
#endif

static ::String SubGeometry_obj_sMemberFields[] = {
	HX_("_uvs",f3,73,24,3f),
	HX_("_secondaryUvs",bd,4a,3d,a5),
	HX_("_vertexNormals",a9,a1,6b,dc),
	HX_("_vertexTangents",31,74,95,07),
	HX_("_verticesInvalid",7f,66,39,6b),
	HX_("_uvsInvalid",44,43,1b,aa),
	HX_("_secondaryUvsInvalid",ba,39,37,04),
	HX_("_normalsInvalid",8a,00,95,e8),
	HX_("_tangentsInvalid",0a,f3,b0,64),
	HX_("_vertexBuffer",63,42,18,53),
	HX_("_uvBuffer",a0,0d,b2,9b),
	HX_("_secondaryUvBuffer",96,5a,e8,41),
	HX_("_vertexNormalBuffer",2a,6c,3b,51),
	HX_("_vertexTangentBuffer",a2,6c,c1,63),
	HX_("_vertexBufferContext",cc,dd,9e,c6),
	HX_("_uvBufferContext",2f,a4,a9,54),
	HX_("_secondaryUvBufferContext",f9,81,8e,71),
	HX_("_vertexNormalBufferContext",e5,8a,59,ad),
	HX_("_vertexTangentBufferContext",6d,09,39,67),
	HX_("_numVertices",60,be,35,bc),
	HX_("get_numVertices",f6,c7,0d,17),
	HX_("activateVertexBuffer",d7,57,3c,03),
	HX_("activateUVBuffer",f4,80,aa,61),
	HX_("activateSecondaryUVBuffer",82,28,8f,3c),
	HX_("activateVertexNormalBuffer",9e,10,d7,ce),
	HX_("activateVertexTangentBuffer",ae,ad,55,ce),
	HX_("applyTransformation",d7,3b,1e,68),
	HX_("clone",5d,13,63,48),
	HX_("scale",8a,ce,ce,78),
	HX_("scaleUV",6b,4f,07,65),
	HX_("dispose",9f,80,4c,bb),
	HX_("disposeAllVertexBuffers",4d,25,fd,4b),
	HX_("get_vertexData",f7,67,15,49),
	HX_("get_vertexPositionData",40,52,bb,64),
	HX_("updateVertexData",17,af,0b,1d),
	HX_("get_UVData",f4,80,8f,9e),
	HX_("get_secondaryUVData",b6,3e,2c,fa),
	HX_("updateUVData",f4,43,37,79),
	HX_("updateSecondaryUVData",96,23,80,2c),
	HX_("get_vertexNormalData",7e,7d,ac,ba),
	HX_("updateVertexNormalData",9e,dc,c0,91),
	HX_("get_vertexTangentData",62,d7,7f,7d),
	HX_("updateVertexTangentData",42,b4,3e,d8),
	HX_("fromVectors",06,5e,dd,72),
	HX_("updateVertexNormals",9f,a9,a0,31),
	HX_("updateVertexTangents",7b,63,c7,40),
	HX_("updateDummyUVs",f3,f8,fc,35),
	HX_("disposeForStage3D",65,a8,ac,10),
	HX_("get_vertexStride",26,ff,e3,b5),
	HX_("get_vertexTangentStride",51,5f,59,ad),
	HX_("get_vertexNormalStride",6d,c4,90,0b),
	HX_("get_UVStride",63,11,d4,f0),
	HX_("get_secondaryUVStride",a5,43,6d,fb),
	HX_("get_vertexOffset",a0,76,f3,04),
	HX_("get_vertexNormalOffset",e7,3b,a0,5a),
	HX_("get_vertexTangentOffset",cb,d6,68,fc),
	HX_("get_UVOffset",dd,88,e3,3f),
	HX_("get_secondaryUVOffset",1f,bb,7c,4a),
	HX_("cloneWithSeperateBuffers",09,c0,e2,05),
	::String(null()) };

::hx::Class SubGeometry_obj::__mClass;

void SubGeometry_obj::__register()
{
	SubGeometry_obj _hx_dummy;
	SubGeometry_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.base.SubGeometry",55,90,9e,03);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SubGeometry_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SubGeometry_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SubGeometry_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SubGeometry_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace core
} // end namespace base
