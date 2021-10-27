#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_core_base_CompactSubGeometry
#include <away3d/core/base/CompactSubGeometry.h>
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
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
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
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_304c859cfd97ae6b_13_new,"away3d.core.base.CompactSubGeometry","new",0xb91d46be,"away3d.core.base.CompactSubGeometry.new","away3d/core/base/CompactSubGeometry.hx",13,0x07a9f931)
HX_LOCAL_STACK_FRAME(_hx_pos_304c859cfd97ae6b_39_get_numVertices,"away3d.core.base.CompactSubGeometry","get_numVertices",0xafde5354,"away3d.core.base.CompactSubGeometry.get_numVertices","away3d/core/base/CompactSubGeometry.hx",39,0x07a9f931)
HX_LOCAL_STACK_FRAME(_hx_pos_304c859cfd97ae6b_51_updateData,"away3d.core.base.CompactSubGeometry","updateData",0x1e8f7235,"away3d.core.base.CompactSubGeometry.updateData","away3d/core/base/CompactSubGeometry.hx",51,0x07a9f931)
HX_LOCAL_STACK_FRAME(_hx_pos_304c859cfd97ae6b_76_activateVertexBuffer,"away3d.core.base.CompactSubGeometry","activateVertexBuffer",0xa91fd7b9,"away3d.core.base.CompactSubGeometry.activateVertexBuffer","away3d/core/base/CompactSubGeometry.hx",76,0x07a9f931)
HX_LOCAL_STACK_FRAME(_hx_pos_304c859cfd97ae6b_92_activateUVBuffer,"away3d.core.base.CompactSubGeometry","activateUVBuffer",0x7f53e7d6,"away3d.core.base.CompactSubGeometry.activateUVBuffer","away3d/core/base/CompactSubGeometry.hx",92,0x07a9f931)
HX_LOCAL_STACK_FRAME(_hx_pos_304c859cfd97ae6b_113_activateSecondaryUVBuffer,"away3d.core.base.CompactSubGeometry","activateSecondaryUVBuffer",0x0f46d560,"away3d.core.base.CompactSubGeometry.activateSecondaryUVBuffer","away3d/core/base/CompactSubGeometry.hx",113,0x07a9f931)
HX_LOCAL_STACK_FRAME(_hx_pos_304c859cfd97ae6b_129_uploadData,"away3d.core.base.CompactSubGeometry","uploadData",0x0221122d,"away3d.core.base.CompactSubGeometry.uploadData","away3d/core/base/CompactSubGeometry.hx",129,0x07a9f931)
HX_LOCAL_STACK_FRAME(_hx_pos_304c859cfd97ae6b_135_activateVertexNormalBuffer,"away3d.core.base.CompactSubGeometry","activateVertexNormalBuffer",0x5cd6a600,"away3d.core.base.CompactSubGeometry.activateVertexNormalBuffer","away3d/core/base/CompactSubGeometry.hx",135,0x07a9f931)
HX_LOCAL_STACK_FRAME(_hx_pos_304c859cfd97ae6b_151_activateVertexTangentBuffer,"away3d.core.base.CompactSubGeometry","activateVertexTangentBuffer",0x7ff8ce0c,"away3d.core.base.CompactSubGeometry.activateVertexTangentBuffer","away3d/core/base/CompactSubGeometry.hx",151,0x07a9f931)
HX_LOCAL_STACK_FRAME(_hx_pos_304c859cfd97ae6b_167_createBuffer,"away3d.core.base.CompactSubGeometry","createBuffer",0x4799cafe,"away3d.core.base.CompactSubGeometry.createBuffer","away3d/core/base/CompactSubGeometry.hx",167,0x07a9f931)
HX_LOCAL_STACK_FRAME(_hx_pos_304c859cfd97ae6b_174_updateActiveBuffer,"away3d.core.base.CompactSubGeometry","updateActiveBuffer",0x90b7aa71,"away3d.core.base.CompactSubGeometry.updateActiveBuffer","away3d/core/base/CompactSubGeometry.hx",174,0x07a9f931)
HX_LOCAL_STACK_FRAME(_hx_pos_304c859cfd97ae6b_182_get_vertexData,"away3d.core.base.CompactSubGeometry","get_vertexData",0x03bdf259,"away3d.core.base.CompactSubGeometry.get_vertexData","away3d/core/base/CompactSubGeometry.hx",182,0x07a9f931)
HX_LOCAL_STACK_FRAME(_hx_pos_304c859cfd97ae6b_193_updateVertexNormals,"away3d.core.base.CompactSubGeometry","updateVertexNormals",0x44bd3bfd,"away3d.core.base.CompactSubGeometry.updateVertexNormals","away3d/core/base/CompactSubGeometry.hx",193,0x07a9f931)
HX_LOCAL_STACK_FRAME(_hx_pos_304c859cfd97ae6b_199_updateVertexTangents,"away3d.core.base.CompactSubGeometry","updateVertexTangents",0xe6aae35d,"away3d.core.base.CompactSubGeometry.updateVertexTangents","away3d/core/base/CompactSubGeometry.hx",199,0x07a9f931)
HX_LOCAL_STACK_FRAME(_hx_pos_304c859cfd97ae6b_207_get_vertexNormalData,"away3d.core.base.CompactSubGeometry","get_vertexNormalData",0x608ffd60,"away3d.core.base.CompactSubGeometry.get_vertexNormalData","away3d/core/base/CompactSubGeometry.hx",207,0x07a9f931)
HX_LOCAL_STACK_FRAME(_hx_pos_304c859cfd97ae6b_215_get_vertexTangentData,"away3d.core.base.CompactSubGeometry","get_vertexTangentData",0xfeac3d40,"away3d.core.base.CompactSubGeometry.get_vertexTangentData","away3d/core/base/CompactSubGeometry.hx",215,0x07a9f931)
HX_LOCAL_STACK_FRAME(_hx_pos_304c859cfd97ae6b_222_get_UVData,"away3d.core.base.CompactSubGeometry","get_UVData",0xc206b256,"away3d.core.base.CompactSubGeometry.get_UVData","away3d/core/base/CompactSubGeometry.hx",222,0x07a9f931)
HX_LOCAL_STACK_FRAME(_hx_pos_304c859cfd97ae6b_231_applyTransformation,"away3d.core.base.CompactSubGeometry","applyTransformation",0x7b3ace35,"away3d.core.base.CompactSubGeometry.applyTransformation","away3d/core/base/CompactSubGeometry.hx",231,0x07a9f931)
HX_LOCAL_STACK_FRAME(_hx_pos_304c859cfd97ae6b_237_scale,"away3d.core.base.CompactSubGeometry","scale",0x0fa91868,"away3d.core.base.CompactSubGeometry.scale","away3d/core/base/CompactSubGeometry.hx",237,0x07a9f931)
HX_LOCAL_STACK_FRAME(_hx_pos_304c859cfd97ae6b_243_clone,"away3d.core.base.CompactSubGeometry","clone",0xdf3d5d3b,"away3d.core.base.CompactSubGeometry.clone","away3d/core/base/CompactSubGeometry.hx",243,0x07a9f931)
HX_LOCAL_STACK_FRAME(_hx_pos_304c859cfd97ae6b_253_scaleUV,"away3d.core.base.CompactSubGeometry","scaleUV",0x1e6e4cc9,"away3d.core.base.CompactSubGeometry.scaleUV","away3d/core/base/CompactSubGeometry.hx",253,0x07a9f931)
HX_LOCAL_STACK_FRAME(_hx_pos_304c859cfd97ae6b_260_get_vertexStride,"away3d.core.base.CompactSubGeometry","get_vertexStride",0xd38d6608,"away3d.core.base.CompactSubGeometry.get_vertexStride","away3d/core/base/CompactSubGeometry.hx",260,0x07a9f931)
HX_LOCAL_STACK_FRAME(_hx_pos_304c859cfd97ae6b_265_get_vertexNormalStride,"away3d.core.base.CompactSubGeometry","get_vertexNormalStride",0x913d80cf,"away3d.core.base.CompactSubGeometry.get_vertexNormalStride","away3d/core/base/CompactSubGeometry.hx",265,0x07a9f931)
HX_LOCAL_STACK_FRAME(_hx_pos_304c859cfd97ae6b_270_get_vertexTangentStride,"away3d.core.base.CompactSubGeometry","get_vertexTangentStride",0x1ed178af,"away3d.core.base.CompactSubGeometry.get_vertexTangentStride","away3d/core/base/CompactSubGeometry.hx",270,0x07a9f931)
HX_LOCAL_STACK_FRAME(_hx_pos_304c859cfd97ae6b_275_get_UVStride,"away3d.core.base.CompactSubGeometry","get_UVStride",0x4583df45,"away3d.core.base.CompactSubGeometry.get_UVStride","away3d/core/base/CompactSubGeometry.hx",275,0x07a9f931)
HX_LOCAL_STACK_FRAME(_hx_pos_304c859cfd97ae6b_280_get_secondaryUVStride,"away3d.core.base.CompactSubGeometry","get_secondaryUVStride",0x7c99a983,"away3d.core.base.CompactSubGeometry.get_secondaryUVStride","away3d/core/base/CompactSubGeometry.hx",280,0x07a9f931)
HX_LOCAL_STACK_FRAME(_hx_pos_304c859cfd97ae6b_285_get_vertexOffset,"away3d.core.base.CompactSubGeometry","get_vertexOffset",0x229cdd82,"away3d.core.base.CompactSubGeometry.get_vertexOffset","away3d/core/base/CompactSubGeometry.hx",285,0x07a9f931)
HX_LOCAL_STACK_FRAME(_hx_pos_304c859cfd97ae6b_290_get_vertexNormalOffset,"away3d.core.base.CompactSubGeometry","get_vertexNormalOffset",0xe04cf849,"away3d.core.base.CompactSubGeometry.get_vertexNormalOffset","away3d/core/base/CompactSubGeometry.hx",290,0x07a9f931)
HX_LOCAL_STACK_FRAME(_hx_pos_304c859cfd97ae6b_295_get_vertexTangentOffset,"away3d.core.base.CompactSubGeometry","get_vertexTangentOffset",0x6de0f029,"away3d.core.base.CompactSubGeometry.get_vertexTangentOffset","away3d/core/base/CompactSubGeometry.hx",295,0x07a9f931)
HX_LOCAL_STACK_FRAME(_hx_pos_304c859cfd97ae6b_300_get_UVOffset,"away3d.core.base.CompactSubGeometry","get_UVOffset",0x949356bf,"away3d.core.base.CompactSubGeometry.get_UVOffset","away3d/core/base/CompactSubGeometry.hx",300,0x07a9f931)
HX_LOCAL_STACK_FRAME(_hx_pos_304c859cfd97ae6b_305_get_secondaryUVOffset,"away3d.core.base.CompactSubGeometry","get_secondaryUVOffset",0xcba920fd,"away3d.core.base.CompactSubGeometry.get_secondaryUVOffset","away3d/core/base/CompactSubGeometry.hx",305,0x07a9f931)
HX_LOCAL_STACK_FRAME(_hx_pos_304c859cfd97ae6b_309_dispose,"away3d.core.base.CompactSubGeometry","dispose",0x74b37dfd,"away3d.core.base.CompactSubGeometry.dispose","away3d/core/base/CompactSubGeometry.hx",309,0x07a9f931)
HX_LOCAL_STACK_FRAME(_hx_pos_304c859cfd97ae6b_316_disposeVertexBuffers,"away3d.core.base.CompactSubGeometry","disposeVertexBuffers",0xca2dfc32,"away3d.core.base.CompactSubGeometry.disposeVertexBuffers","away3d/core/base/CompactSubGeometry.hx",316,0x07a9f931)
HX_LOCAL_STACK_FRAME(_hx_pos_304c859cfd97ae6b_322_invalidateBuffers,"away3d.core.base.CompactSubGeometry","invalidateBuffers",0xcfea4616,"away3d.core.base.CompactSubGeometry.invalidateBuffers","away3d/core/base/CompactSubGeometry.hx",322,0x07a9f931)
HX_LOCAL_STACK_FRAME(_hx_pos_304c859cfd97ae6b_328_cloneWithSeperateBuffers,"away3d.core.base.CompactSubGeometry","cloneWithSeperateBuffers",0xdd80d8eb,"away3d.core.base.CompactSubGeometry.cloneWithSeperateBuffers","away3d/core/base/CompactSubGeometry.hx",328,0x07a9f931)
HX_LOCAL_STACK_FRAME(_hx_pos_304c859cfd97ae6b_344_get_vertexPositionData,"away3d.core.base.CompactSubGeometry","get_vertexPositionData",0xea680ea2,"away3d.core.base.CompactSubGeometry.get_vertexPositionData","away3d/core/base/CompactSubGeometry.hx",344,0x07a9f931)
HX_LOCAL_STACK_FRAME(_hx_pos_304c859cfd97ae6b_362_stripBuffer,"away3d.core.base.CompactSubGeometry","stripBuffer",0x863b3a56,"away3d.core.base.CompactSubGeometry.stripBuffer","away3d/core/base/CompactSubGeometry.hx",362,0x07a9f931)
HX_LOCAL_STACK_FRAME(_hx_pos_304c859cfd97ae6b_377_fromVectors,"away3d.core.base.CompactSubGeometry","fromVectors",0x57b16264,"away3d.core.base.CompactSubGeometry.fromVectors","away3d/core/base/CompactSubGeometry.hx",377,0x07a9f931)
namespace away3d{
namespace core{
namespace base{

void CompactSubGeometry_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_304c859cfd97ae6b_13_new)
HXLINE(  21)		bool fixed = null();
HXDLIN(  21)		::Array< ::Dynamic> array = null();
HXDLIN(  21)		this->_bufferContext =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,8,fixed,array,true);
HXLINE(  20)		bool fixed1 = null();
HXDLIN(  20)		::Array< ::Dynamic> array1 = null();
HXDLIN(  20)		this->_vertexBuffer =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,8,fixed1,array1,true);
HXLINE(  19)		::Array< bool > array2 = null();
HXDLIN(  19)		this->_vertexDataInvalid =  ::openfl::_Vector::BoolVector_obj::__alloc( HX_CTX ,8,true,array2);
HXLINE(  32)		super::__construct();
HXLINE(  33)		this->_autoDeriveVertexNormals = false;
HXLINE(  34)		this->_autoDeriveVertexTangents = false;
            	}

Dynamic CompactSubGeometry_obj::__CreateEmpty() { return new CompactSubGeometry_obj; }

void *CompactSubGeometry_obj::_hx_vtable = 0;

Dynamic CompactSubGeometry_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CompactSubGeometry_obj > _hx_result = new CompactSubGeometry_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CompactSubGeometry_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x294d62fe) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x294d62fe;
	} else {
		return inClassId==(int)0x392651b0;
	}
}

static ::away3d::core::base::ISubGeometry_obj _hx_away3d_core_base_CompactSubGeometry__hx_away3d_core_base_ISubGeometry= {
	( int (::hx::Object::*)())&::away3d::core::base::CompactSubGeometry_obj::get_numVertices,
	( int (::hx::Object::*)())&::away3d::core::base::CompactSubGeometry_obj::get_numTriangles,
	( int (::hx::Object::*)())&::away3d::core::base::CompactSubGeometry_obj::get_vertexStride,
	( int (::hx::Object::*)())&::away3d::core::base::CompactSubGeometry_obj::get_vertexNormalStride,
	( int (::hx::Object::*)())&::away3d::core::base::CompactSubGeometry_obj::get_vertexTangentStride,
	( int (::hx::Object::*)())&::away3d::core::base::CompactSubGeometry_obj::get_UVStride,
	( int (::hx::Object::*)())&::away3d::core::base::CompactSubGeometry_obj::get_secondaryUVStride,
	(  ::openfl::_Vector::FloatVector (::hx::Object::*)())&::away3d::core::base::CompactSubGeometry_obj::get_vertexData,
	(  ::openfl::_Vector::FloatVector (::hx::Object::*)())&::away3d::core::base::CompactSubGeometry_obj::get_vertexNormalData,
	(  ::openfl::_Vector::FloatVector (::hx::Object::*)())&::away3d::core::base::CompactSubGeometry_obj::get_vertexTangentData,
	( int (::hx::Object::*)())&::away3d::core::base::CompactSubGeometry_obj::get_vertexOffset,
	( int (::hx::Object::*)())&::away3d::core::base::CompactSubGeometry_obj::get_vertexNormalOffset,
	( int (::hx::Object::*)())&::away3d::core::base::CompactSubGeometry_obj::get_vertexTangentOffset,
	( int (::hx::Object::*)())&::away3d::core::base::CompactSubGeometry_obj::get_UVOffset,
	( int (::hx::Object::*)())&::away3d::core::base::CompactSubGeometry_obj::get_secondaryUVOffset,
	(  ::openfl::_Vector::IntVector (::hx::Object::*)())&::away3d::core::base::CompactSubGeometry_obj::get_indexData,
	(  ::openfl::_Vector::FloatVector (::hx::Object::*)())&::away3d::core::base::CompactSubGeometry_obj::get_UVData,
	( Float (::hx::Object::*)())&::away3d::core::base::CompactSubGeometry_obj::get_scaleU,
	( Float (::hx::Object::*)())&::away3d::core::base::CompactSubGeometry_obj::get_scaleV,
	(  ::away3d::core::base::Geometry (::hx::Object::*)())&::away3d::core::base::CompactSubGeometry_obj::get_parentGeometry,
	(  ::away3d::core::base::Geometry (::hx::Object::*)( ::away3d::core::base::Geometry))&::away3d::core::base::CompactSubGeometry_obj::set_parentGeometry,
	(  ::openfl::_Vector::FloatVector (::hx::Object::*)())&::away3d::core::base::CompactSubGeometry_obj::get_faceNormals,
	( bool (::hx::Object::*)())&::away3d::core::base::CompactSubGeometry_obj::get_autoDeriveVertexNormals,
	( bool (::hx::Object::*)(bool))&::away3d::core::base::CompactSubGeometry_obj::set_autoDeriveVertexNormals,
	( bool (::hx::Object::*)())&::away3d::core::base::CompactSubGeometry_obj::get_autoDeriveVertexTangents,
	( bool (::hx::Object::*)(bool))&::away3d::core::base::CompactSubGeometry_obj::set_autoDeriveVertexTangents,
	(  ::openfl::_Vector::FloatVector (::hx::Object::*)())&::away3d::core::base::CompactSubGeometry_obj::get_vertexPositionData,
	( void (::hx::Object::*)(int, ::away3d::core::managers::Stage3DProxy))&::away3d::core::base::CompactSubGeometry_obj::activateVertexBuffer,
	( void (::hx::Object::*)(int, ::away3d::core::managers::Stage3DProxy))&::away3d::core::base::CompactSubGeometry_obj::activateUVBuffer,
	( void (::hx::Object::*)(int, ::away3d::core::managers::Stage3DProxy))&::away3d::core::base::CompactSubGeometry_obj::activateSecondaryUVBuffer,
	( void (::hx::Object::*)(int, ::away3d::core::managers::Stage3DProxy))&::away3d::core::base::CompactSubGeometry_obj::activateVertexNormalBuffer,
	( void (::hx::Object::*)(int, ::away3d::core::managers::Stage3DProxy))&::away3d::core::base::CompactSubGeometry_obj::activateVertexTangentBuffer,
	(  ::openfl::display3D::IndexBuffer3D (::hx::Object::*)( ::away3d::core::managers::Stage3DProxy))&::away3d::core::base::CompactSubGeometry_obj::getIndexBuffer,
	( void (::hx::Object::*)( ::openfl::geom::Matrix3D))&::away3d::core::base::CompactSubGeometry_obj::applyTransformation,
	( void (::hx::Object::*)(Float))&::away3d::core::base::CompactSubGeometry_obj::scale,
	( void (::hx::Object::*)())&::away3d::core::base::CompactSubGeometry_obj::dispose,
	( ::Dynamic (::hx::Object::*)())&::away3d::core::base::CompactSubGeometry_obj::clone,
	( void (::hx::Object::*)(::hx::Null< Float > ,::hx::Null< Float > ))&::away3d::core::base::CompactSubGeometry_obj::scaleUV,
	(  ::away3d::core::base::SubGeometry (::hx::Object::*)())&::away3d::core::base::CompactSubGeometry_obj::cloneWithSeperateBuffers,
	( void (::hx::Object::*)( ::openfl::_Vector::FloatVector, ::openfl::_Vector::FloatVector, ::openfl::_Vector::FloatVector, ::openfl::_Vector::FloatVector))&::away3d::core::base::CompactSubGeometry_obj::fromVectors,
};

void *CompactSubGeometry_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x9241dff8: return &_hx_away3d_core_base_CompactSubGeometry__hx_away3d_core_base_ISubGeometry;
	}
	return super::_hx_getInterface(inHash);
}

int CompactSubGeometry_obj::get_numVertices(){
            	HX_STACKFRAME(&_hx_pos_304c859cfd97ae6b_39_get_numVertices)
HXDLIN(  39)		return this->_numVertices;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompactSubGeometry_obj,get_numVertices,return )

void CompactSubGeometry_obj::updateData( ::openfl::_Vector::FloatVector data){
            	HX_GC_STACKFRAME(&_hx_pos_304c859cfd97ae6b_51_updateData)
HXLINE(  52)		if (this->_autoDeriveVertexNormals) {
HXLINE(  53)			this->_vertexNormalsDirty = true;
            		}
HXLINE(  54)		if (this->_autoDeriveVertexTangents) {
HXLINE(  55)			this->_vertexTangentsDirty = true;
            		}
HXLINE(  57)		this->_faceNormalsDirty = true;
HXLINE(  58)		this->_faceTangentsDirty = true;
HXLINE(  59)		this->_isolatedVertexPositionDataDirty = true;
HXLINE(  61)		this->_vertexData = data;
HXLINE(  62)		int numVertices = ::Std_obj::_hx_int((( (Float)(this->_vertexData->get_length()) ) / ( (Float)(13) )));
HXLINE(  63)		if ((numVertices != this->_numVertices)) {
HXLINE(  64)			this->disposeVertexBuffers(this->_vertexBuffer);
            		}
HXLINE(  65)		this->_numVertices = numVertices;
HXLINE(  67)		if ((this->_numVertices == 0)) {
HXLINE(  68)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("Bad data: geometry can't have zero triangles",85,69,ad,90),null())));
            		}
HXLINE(  70)		this->invalidateBuffers(this->_vertexDataInvalid);
HXLINE(  72)		this->invalidateBounds();
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompactSubGeometry_obj,updateData,(void))

void CompactSubGeometry_obj::activateVertexBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_304c859cfd97ae6b_76_activateVertexBuffer)
HXLINE(  77)		int contextIndex = stage3DProxy->_stage3DIndex;
HXLINE(  78)		 ::openfl::display3D::Context3D context = stage3DProxy->_context3D;
HXLINE(  80)		if ((contextIndex != this->_contextIndex)) {
HXLINE(  81)			this->updateActiveBuffer(contextIndex);
            		}
HXLINE(  83)		bool _hx_tmp;
HXDLIN(  83)		if (::hx::IsNotNull( this->_activeBuffer )) {
HXLINE(  83)			_hx_tmp = ::hx::IsInstanceNotEq( this->_activeContext,context );
            		}
            		else {
HXLINE(  83)			_hx_tmp = true;
            		}
HXDLIN(  83)		if (_hx_tmp) {
HXLINE(  84)			this->createBuffer(contextIndex,context,stage3DProxy);
            		}
HXLINE(  85)		if (this->_activeDataInvalid) {
HXLINE(  86)			this->uploadData(contextIndex);
            		}
HXLINE(  88)		context->setVertexBufferAt(index,this->_activeBuffer,0,3);
            	}


HX_DEFINE_DYNAMIC_FUNC2(CompactSubGeometry_obj,activateVertexBuffer,(void))

void CompactSubGeometry_obj::activateUVBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_304c859cfd97ae6b_92_activateUVBuffer)
HXLINE(  93)		int contextIndex = stage3DProxy->_stage3DIndex;
HXLINE(  94)		 ::openfl::display3D::Context3D context = stage3DProxy->_context3D;
HXLINE(  96)		bool _hx_tmp;
HXDLIN(  96)		if (this->_uvsDirty) {
HXLINE(  96)			_hx_tmp = this->_autoGenerateUVs;
            		}
            		else {
HXLINE(  96)			_hx_tmp = false;
            		}
HXDLIN(  96)		if (_hx_tmp) {
HXLINE(  97)			this->_vertexData = this->updateDummyUVs(this->_vertexData);
HXLINE(  98)			this->invalidateBuffers(this->_vertexDataInvalid);
            		}
HXLINE( 101)		if ((contextIndex != this->_contextIndex)) {
HXLINE( 102)			this->updateActiveBuffer(contextIndex);
            		}
HXLINE( 104)		bool _hx_tmp1;
HXDLIN( 104)		if (::hx::IsNotNull( this->_activeBuffer )) {
HXLINE( 104)			_hx_tmp1 = ::hx::IsInstanceNotEq( this->_activeContext,context );
            		}
            		else {
HXLINE( 104)			_hx_tmp1 = true;
            		}
HXDLIN( 104)		if (_hx_tmp1) {
HXLINE( 105)			this->createBuffer(contextIndex,context,stage3DProxy);
            		}
HXLINE( 106)		if (this->_activeDataInvalid) {
HXLINE( 107)			this->uploadData(contextIndex);
            		}
HXLINE( 109)		context->setVertexBufferAt(index,this->_activeBuffer,9,2);
            	}


HX_DEFINE_DYNAMIC_FUNC2(CompactSubGeometry_obj,activateUVBuffer,(void))

void CompactSubGeometry_obj::activateSecondaryUVBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_304c859cfd97ae6b_113_activateSecondaryUVBuffer)
HXLINE( 114)		int contextIndex = stage3DProxy->_stage3DIndex;
HXLINE( 115)		 ::openfl::display3D::Context3D context = stage3DProxy->_context3D;
HXLINE( 117)		if ((contextIndex != this->_contextIndex)) {
HXLINE( 118)			this->updateActiveBuffer(contextIndex);
            		}
HXLINE( 120)		bool _hx_tmp;
HXDLIN( 120)		if (::hx::IsNotNull( this->_activeBuffer )) {
HXLINE( 120)			_hx_tmp = ::hx::IsInstanceNotEq( this->_activeContext,context );
            		}
            		else {
HXLINE( 120)			_hx_tmp = true;
            		}
HXDLIN( 120)		if (_hx_tmp) {
HXLINE( 121)			this->createBuffer(contextIndex,context,stage3DProxy);
            		}
HXLINE( 122)		if (this->_activeDataInvalid) {
HXLINE( 123)			this->uploadData(contextIndex);
            		}
HXLINE( 125)		context->setVertexBufferAt(index,this->_activeBuffer,11,2);
            	}


HX_DEFINE_DYNAMIC_FUNC2(CompactSubGeometry_obj,activateSecondaryUVBuffer,(void))

void CompactSubGeometry_obj::uploadData(int contextIndex){
            	HX_STACKFRAME(&_hx_pos_304c859cfd97ae6b_129_uploadData)
HXLINE( 130)		this->_activeBuffer->uploadFromVector(this->_vertexData,0,this->_numVertices);
HXLINE( 131)		this->_vertexDataInvalid->set(contextIndex,(this->_activeDataInvalid = false));
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompactSubGeometry_obj,uploadData,(void))

void CompactSubGeometry_obj::activateVertexNormalBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_304c859cfd97ae6b_135_activateVertexNormalBuffer)
HXLINE( 136)		int contextIndex = stage3DProxy->_stage3DIndex;
HXLINE( 137)		 ::openfl::display3D::Context3D context = stage3DProxy->_context3D;
HXLINE( 139)		if ((contextIndex != this->_contextIndex)) {
HXLINE( 140)			this->updateActiveBuffer(contextIndex);
            		}
HXLINE( 142)		bool _hx_tmp;
HXDLIN( 142)		if (::hx::IsNotNull( this->_activeBuffer )) {
HXLINE( 142)			_hx_tmp = ::hx::IsInstanceNotEq( this->_activeContext,context );
            		}
            		else {
HXLINE( 142)			_hx_tmp = true;
            		}
HXDLIN( 142)		if (_hx_tmp) {
HXLINE( 143)			this->createBuffer(contextIndex,context,stage3DProxy);
            		}
HXLINE( 144)		if (this->_activeDataInvalid) {
HXLINE( 145)			this->uploadData(contextIndex);
            		}
HXLINE( 147)		context->setVertexBufferAt(index,this->_activeBuffer,3,3);
            	}


HX_DEFINE_DYNAMIC_FUNC2(CompactSubGeometry_obj,activateVertexNormalBuffer,(void))

void CompactSubGeometry_obj::activateVertexTangentBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_304c859cfd97ae6b_151_activateVertexTangentBuffer)
HXLINE( 152)		int contextIndex = stage3DProxy->_stage3DIndex;
HXLINE( 153)		 ::openfl::display3D::Context3D context = stage3DProxy->_context3D;
HXLINE( 155)		if ((contextIndex != this->_contextIndex)) {
HXLINE( 156)			this->updateActiveBuffer(contextIndex);
            		}
HXLINE( 158)		bool _hx_tmp;
HXDLIN( 158)		if (::hx::IsNotNull( this->_activeBuffer )) {
HXLINE( 158)			_hx_tmp = ::hx::IsInstanceNotEq( this->_activeContext,context );
            		}
            		else {
HXLINE( 158)			_hx_tmp = true;
            		}
HXDLIN( 158)		if (_hx_tmp) {
HXLINE( 159)			this->createBuffer(contextIndex,context,stage3DProxy);
            		}
HXLINE( 160)		if (this->_activeDataInvalid) {
HXLINE( 161)			this->uploadData(contextIndex);
            		}
HXLINE( 163)		context->setVertexBufferAt(index,this->_activeBuffer,6,3);
            	}


HX_DEFINE_DYNAMIC_FUNC2(CompactSubGeometry_obj,activateVertexTangentBuffer,(void))

void CompactSubGeometry_obj::createBuffer(int contextIndex, ::openfl::display3D::Context3D context, ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_304c859cfd97ae6b_167_createBuffer)
HXLINE( 168)		{
HXLINE( 168)			::Dynamic this1 = this->_vertexBuffer;
HXDLIN( 168)			( ( ::openfl::_Vector::ObjectVector)(this1) )->set(contextIndex,(this->_activeBuffer = stage3DProxy->createVertexBuffer(this->_numVertices,13))).StaticCast<  ::openfl::display3D::VertexBuffer3D >();
            		}
HXLINE( 169)		this->_bufferContext->set(contextIndex,(this->_activeContext = context)).StaticCast<  ::openfl::display3D::Context3D >();
HXLINE( 170)		this->_vertexDataInvalid->set(contextIndex,(this->_activeDataInvalid = true));
            	}


HX_DEFINE_DYNAMIC_FUNC3(CompactSubGeometry_obj,createBuffer,(void))

void CompactSubGeometry_obj::updateActiveBuffer(int contextIndex){
            	HX_STACKFRAME(&_hx_pos_304c859cfd97ae6b_174_updateActiveBuffer)
HXLINE( 175)		this->_contextIndex = contextIndex;
HXLINE( 176)		this->_activeDataInvalid = this->_vertexDataInvalid->get(contextIndex);
HXLINE( 177)		this->_activeBuffer = this->_vertexBuffer->get(contextIndex).StaticCast<  ::openfl::display3D::VertexBuffer3D >();
HXLINE( 178)		this->_activeContext = this->_bufferContext->get(contextIndex).StaticCast<  ::openfl::display3D::Context3D >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompactSubGeometry_obj,updateActiveBuffer,(void))

 ::openfl::_Vector::FloatVector CompactSubGeometry_obj::get_vertexData(){
            	HX_STACKFRAME(&_hx_pos_304c859cfd97ae6b_182_get_vertexData)
HXLINE( 183)		bool _hx_tmp;
HXDLIN( 183)		if (this->_autoDeriveVertexNormals) {
HXLINE( 183)			_hx_tmp = this->_vertexNormalsDirty;
            		}
            		else {
HXLINE( 183)			_hx_tmp = false;
            		}
HXDLIN( 183)		if (_hx_tmp) {
HXLINE( 184)			this->_vertexData = this->updateVertexNormals(this->_vertexData);
            		}
HXLINE( 185)		bool _hx_tmp1;
HXDLIN( 185)		if (this->_autoDeriveVertexTangents) {
HXLINE( 185)			_hx_tmp1 = this->_vertexTangentsDirty;
            		}
            		else {
HXLINE( 185)			_hx_tmp1 = false;
            		}
HXDLIN( 185)		if (_hx_tmp1) {
HXLINE( 186)			this->_vertexData = this->updateVertexTangents(this->_vertexData);
            		}
HXLINE( 187)		bool _hx_tmp2;
HXDLIN( 187)		if (this->_uvsDirty) {
HXLINE( 187)			_hx_tmp2 = this->_autoGenerateUVs;
            		}
            		else {
HXLINE( 187)			_hx_tmp2 = false;
            		}
HXDLIN( 187)		if (_hx_tmp2) {
HXLINE( 188)			this->_vertexData = this->updateDummyUVs(this->_vertexData);
            		}
HXLINE( 189)		return this->_vertexData;
            	}


 ::openfl::_Vector::FloatVector CompactSubGeometry_obj::updateVertexNormals( ::openfl::_Vector::FloatVector target){
            	HX_STACKFRAME(&_hx_pos_304c859cfd97ae6b_193_updateVertexNormals)
HXLINE( 194)		this->invalidateBuffers(this->_vertexDataInvalid);
HXLINE( 195)		return this->super::updateVertexNormals(target);
            	}


 ::openfl::_Vector::FloatVector CompactSubGeometry_obj::updateVertexTangents( ::openfl::_Vector::FloatVector target){
            	HX_STACKFRAME(&_hx_pos_304c859cfd97ae6b_199_updateVertexTangents)
HXLINE( 200)		if (this->_vertexNormalsDirty) {
HXLINE( 201)			this->_vertexData = this->updateVertexNormals(this->_vertexData);
            		}
HXLINE( 202)		this->invalidateBuffers(this->_vertexDataInvalid);
HXLINE( 203)		return this->super::updateVertexTangents(target);
            	}


 ::openfl::_Vector::FloatVector CompactSubGeometry_obj::get_vertexNormalData(){
            	HX_STACKFRAME(&_hx_pos_304c859cfd97ae6b_207_get_vertexNormalData)
HXLINE( 208)		bool _hx_tmp;
HXDLIN( 208)		if (this->_autoDeriveVertexNormals) {
HXLINE( 208)			_hx_tmp = this->_vertexNormalsDirty;
            		}
            		else {
HXLINE( 208)			_hx_tmp = false;
            		}
HXDLIN( 208)		if (_hx_tmp) {
HXLINE( 209)			this->_vertexData = this->updateVertexNormals(this->_vertexData);
            		}
HXLINE( 211)		return this->_vertexData;
            	}


 ::openfl::_Vector::FloatVector CompactSubGeometry_obj::get_vertexTangentData(){
            	HX_STACKFRAME(&_hx_pos_304c859cfd97ae6b_215_get_vertexTangentData)
HXLINE( 216)		bool _hx_tmp;
HXDLIN( 216)		if (this->_autoDeriveVertexTangents) {
HXLINE( 216)			_hx_tmp = this->_vertexTangentsDirty;
            		}
            		else {
HXLINE( 216)			_hx_tmp = false;
            		}
HXDLIN( 216)		if (_hx_tmp) {
HXLINE( 217)			this->_vertexData = this->updateVertexTangents(this->_vertexData);
            		}
HXLINE( 218)		return this->_vertexData;
            	}


 ::openfl::_Vector::FloatVector CompactSubGeometry_obj::get_UVData(){
            	HX_STACKFRAME(&_hx_pos_304c859cfd97ae6b_222_get_UVData)
HXLINE( 223)		bool _hx_tmp;
HXDLIN( 223)		if (this->_uvsDirty) {
HXLINE( 223)			_hx_tmp = this->_autoGenerateUVs;
            		}
            		else {
HXLINE( 223)			_hx_tmp = false;
            		}
HXDLIN( 223)		if (_hx_tmp) {
HXLINE( 224)			this->_vertexData = this->updateDummyUVs(this->_vertexData);
HXLINE( 225)			this->invalidateBuffers(this->_vertexDataInvalid);
            		}
HXLINE( 227)		return this->_vertexData;
            	}


void CompactSubGeometry_obj::applyTransformation( ::openfl::geom::Matrix3D transform){
            	HX_STACKFRAME(&_hx_pos_304c859cfd97ae6b_231_applyTransformation)
HXLINE( 232)		this->super::applyTransformation(transform);
HXLINE( 233)		this->invalidateBuffers(this->_vertexDataInvalid);
            	}


void CompactSubGeometry_obj::scale(Float scale){
            	HX_STACKFRAME(&_hx_pos_304c859cfd97ae6b_237_scale)
HXLINE( 238)		this->super::scale(scale);
HXLINE( 239)		this->invalidateBuffers(this->_vertexDataInvalid);
            	}


::Dynamic CompactSubGeometry_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_304c859cfd97ae6b_243_clone)
HXLINE( 244)		 ::away3d::core::base::CompactSubGeometry clone =  ::away3d::core::base::CompactSubGeometry_obj::__alloc( HX_CTX );
HXLINE( 245)		clone->_autoDeriveVertexNormals = this->_autoDeriveVertexNormals;
HXLINE( 246)		clone->_autoDeriveVertexTangents = this->_autoDeriveVertexTangents;
HXLINE( 247)		 ::openfl::_Vector::FloatVector vec = null();
HXDLIN( 247)		clone->updateData(( ( ::openfl::_Vector::FloatVector)(this->_vertexData->concat(vec)) ));
HXLINE( 248)		 ::openfl::_Vector::IntVector vec1 = null();
HXDLIN( 248)		clone->updateIndexData(( ( ::openfl::_Vector::IntVector)(this->_indices->concat(vec1)) ));
HXLINE( 249)		return clone;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompactSubGeometry_obj,clone,return )

void CompactSubGeometry_obj::scaleUV(::hx::Null< Float >  __o_scaleU,::hx::Null< Float >  __o_scaleV){
            		Float scaleU = __o_scaleU.Default(1);
            		Float scaleV = __o_scaleV.Default(1);
            	HX_STACKFRAME(&_hx_pos_304c859cfd97ae6b_253_scaleUV)
HXLINE( 254)		this->super::scaleUV(scaleU,scaleV);
HXLINE( 255)		this->invalidateBuffers(this->_vertexDataInvalid);
            	}


int CompactSubGeometry_obj::get_vertexStride(){
            	HX_STACKFRAME(&_hx_pos_304c859cfd97ae6b_260_get_vertexStride)
HXDLIN( 260)		return 13;
            	}


int CompactSubGeometry_obj::get_vertexNormalStride(){
            	HX_STACKFRAME(&_hx_pos_304c859cfd97ae6b_265_get_vertexNormalStride)
HXDLIN( 265)		return 13;
            	}


int CompactSubGeometry_obj::get_vertexTangentStride(){
            	HX_STACKFRAME(&_hx_pos_304c859cfd97ae6b_270_get_vertexTangentStride)
HXDLIN( 270)		return 13;
            	}


int CompactSubGeometry_obj::get_UVStride(){
            	HX_STACKFRAME(&_hx_pos_304c859cfd97ae6b_275_get_UVStride)
HXDLIN( 275)		return 13;
            	}


int CompactSubGeometry_obj::get_secondaryUVStride(){
            	HX_STACKFRAME(&_hx_pos_304c859cfd97ae6b_280_get_secondaryUVStride)
HXDLIN( 280)		return 13;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompactSubGeometry_obj,get_secondaryUVStride,return )

int CompactSubGeometry_obj::get_vertexOffset(){
            	HX_STACKFRAME(&_hx_pos_304c859cfd97ae6b_285_get_vertexOffset)
HXDLIN( 285)		return 0;
            	}


int CompactSubGeometry_obj::get_vertexNormalOffset(){
            	HX_STACKFRAME(&_hx_pos_304c859cfd97ae6b_290_get_vertexNormalOffset)
HXDLIN( 290)		return 3;
            	}


int CompactSubGeometry_obj::get_vertexTangentOffset(){
            	HX_STACKFRAME(&_hx_pos_304c859cfd97ae6b_295_get_vertexTangentOffset)
HXDLIN( 295)		return 6;
            	}


int CompactSubGeometry_obj::get_UVOffset(){
            	HX_STACKFRAME(&_hx_pos_304c859cfd97ae6b_300_get_UVOffset)
HXDLIN( 300)		return 9;
            	}


int CompactSubGeometry_obj::get_secondaryUVOffset(){
            	HX_STACKFRAME(&_hx_pos_304c859cfd97ae6b_305_get_secondaryUVOffset)
HXDLIN( 305)		return 11;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompactSubGeometry_obj,get_secondaryUVOffset,return )

void CompactSubGeometry_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_304c859cfd97ae6b_309_dispose)
HXLINE( 310)		this->super::dispose();
HXLINE( 311)		this->disposeVertexBuffers(this->_vertexBuffer);
HXLINE( 312)		this->_vertexBuffer = null();
            	}


void CompactSubGeometry_obj::disposeVertexBuffers( ::openfl::_Vector::ObjectVector buffers){
            	HX_STACKFRAME(&_hx_pos_304c859cfd97ae6b_316_disposeVertexBuffers)
HXLINE( 317)		this->super::disposeVertexBuffers(buffers);
HXLINE( 318)		this->_activeBuffer = null();
            	}


void CompactSubGeometry_obj::invalidateBuffers( ::openfl::_Vector::BoolVector invalid){
            	HX_STACKFRAME(&_hx_pos_304c859cfd97ae6b_322_invalidateBuffers)
HXLINE( 323)		this->super::invalidateBuffers(invalid);
HXLINE( 324)		this->_activeDataInvalid = true;
            	}


 ::away3d::core::base::SubGeometry CompactSubGeometry_obj::cloneWithSeperateBuffers(){
            	HX_GC_STACKFRAME(&_hx_pos_304c859cfd97ae6b_328_cloneWithSeperateBuffers)
HXLINE( 329)		 ::away3d::core::base::SubGeometry clone =  ::away3d::core::base::SubGeometry_obj::__alloc( HX_CTX );
HXLINE( 330)		 ::openfl::_Vector::FloatVector _hx_tmp;
HXDLIN( 330)		if (::hx::IsNotNull( this->_isolatedVertexPositionData )) {
HXLINE( 330)			_hx_tmp = this->_isolatedVertexPositionData;
            		}
            		else {
HXLINE( 330)			_hx_tmp = (this->_isolatedVertexPositionData = this->stripBuffer(0,3));
            		}
HXDLIN( 330)		clone->updateVertexData(_hx_tmp);
HXLINE( 331)		clone->set_autoDeriveVertexNormals(this->_autoDeriveVertexNormals);
HXLINE( 332)		clone->set_autoDeriveVertexTangents(this->_autoDeriveVertexTangents);
HXLINE( 333)		if (!(this->_autoDeriveVertexNormals)) {
HXLINE( 334)			clone->updateVertexNormalData(this->stripBuffer(3,3));
            		}
HXLINE( 335)		if (!(this->_autoDeriveVertexTangents)) {
HXLINE( 336)			clone->updateVertexTangentData(this->stripBuffer(6,3));
            		}
HXLINE( 337)		clone->updateUVData(this->stripBuffer(9,2));
HXLINE( 338)		clone->updateSecondaryUVData(this->stripBuffer(11,2));
HXLINE( 339)		 ::openfl::_Vector::IntVector vec = null();
HXDLIN( 339)		clone->updateIndexData(( ( ::openfl::_Vector::IntVector)(this->get_indexData()->concat(vec)) ));
HXLINE( 340)		return clone;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompactSubGeometry_obj,cloneWithSeperateBuffers,return )

 ::openfl::_Vector::FloatVector CompactSubGeometry_obj::get_vertexPositionData(){
            	HX_STACKFRAME(&_hx_pos_304c859cfd97ae6b_344_get_vertexPositionData)
HXLINE( 345)		bool _hx_tmp;
HXDLIN( 345)		if (!(this->_isolatedVertexPositionDataDirty)) {
HXLINE( 345)			_hx_tmp = ::hx::IsNull( this->_isolatedVertexPositionData );
            		}
            		else {
HXLINE( 345)			_hx_tmp = true;
            		}
HXDLIN( 345)		if (_hx_tmp) {
HXLINE( 346)			this->_isolatedVertexPositionData = this->stripBuffer(0,3);
HXLINE( 347)			this->_isolatedVertexPositionDataDirty = false;
            		}
HXLINE( 349)		return this->_isolatedVertexPositionData;
            	}


 ::openfl::_Vector::FloatVector CompactSubGeometry_obj::stripBuffer(int offset,int numEntries){
            	HX_GC_STACKFRAME(&_hx_pos_304c859cfd97ae6b_362_stripBuffer)
HXLINE( 363)		bool fixed = null();
HXDLIN( 363)		::Array< Float > array = null();
HXDLIN( 363)		 ::openfl::_Vector::FloatVector data =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,(this->_numVertices * numEntries),fixed,array,true);
HXLINE( 364)		int i = 0;
HXDLIN( 364)		int j = offset;
HXLINE( 365)		int skip = (13 - numEntries);
HXLINE( 367)		{
HXLINE( 367)			int _g = 0;
HXDLIN( 367)			int _g1 = this->_numVertices;
HXDLIN( 367)			while((_g < _g1)){
HXLINE( 367)				_g = (_g + 1);
HXDLIN( 367)				int v = (_g - 1);
HXLINE( 368)				{
HXLINE( 368)					int _g1 = 0;
HXDLIN( 368)					int _g2 = numEntries;
HXDLIN( 368)					while((_g1 < _g2)){
HXLINE( 368)						_g1 = (_g1 + 1);
HXDLIN( 368)						int k = (_g1 - 1);
HXLINE( 369)						{
HXLINE( 369)							i = (i + 1);
HXDLIN( 369)							j = (j + 1);
HXDLIN( 369)							data->set((i - 1),this->_vertexData->get((j - 1)));
            						}
            					}
            				}
HXLINE( 370)				j = (j + skip);
            			}
            		}
HXLINE( 373)		return data;
            	}


HX_DEFINE_DYNAMIC_FUNC2(CompactSubGeometry_obj,stripBuffer,return )

void CompactSubGeometry_obj::fromVectors( ::openfl::_Vector::FloatVector verts, ::openfl::_Vector::FloatVector uvs, ::openfl::_Vector::FloatVector normals, ::openfl::_Vector::FloatVector tangents){
            	HX_GC_STACKFRAME(&_hx_pos_304c859cfd97ae6b_377_fromVectors)
HXLINE( 378)		int vertLen = ::Std_obj::_hx_int(((( (Float)(verts->get_length()) ) / ( (Float)(3) )) * ( (Float)(13) )));
HXLINE( 380)		int index = 0;
HXLINE( 381)		int v = 0;
HXLINE( 382)		int n = 0;
HXLINE( 383)		int t = 0;
HXLINE( 384)		int u = 0;
HXLINE( 386)		::Array< Float > array = null();
HXDLIN( 386)		 ::openfl::_Vector::FloatVector data =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,vertLen,true,array,true);
HXLINE( 388)		while((index < vertLen)){
HXLINE( 389)			{
HXLINE( 389)				index = (index + 1);
HXDLIN( 389)				v = (v + 1);
HXDLIN( 389)				data->set((index - 1),verts->get((v - 1)));
            			}
HXLINE( 390)			{
HXLINE( 390)				index = (index + 1);
HXDLIN( 390)				v = (v + 1);
HXDLIN( 390)				data->set((index - 1),verts->get((v - 1)));
            			}
HXLINE( 391)			{
HXLINE( 391)				index = (index + 1);
HXDLIN( 391)				v = (v + 1);
HXDLIN( 391)				data->set((index - 1),verts->get((v - 1)));
            			}
HXLINE( 393)			bool _hx_tmp;
HXDLIN( 393)			if (::hx::IsNotNull( normals )) {
HXLINE( 393)				_hx_tmp = (normals->get_length() > 0);
            			}
            			else {
HXLINE( 393)				_hx_tmp = false;
            			}
HXDLIN( 393)			if (_hx_tmp) {
HXLINE( 394)				{
HXLINE( 394)					index = (index + 1);
HXDLIN( 394)					n = (n + 1);
HXDLIN( 394)					data->set((index - 1),normals->get((n - 1)));
            				}
HXLINE( 395)				{
HXLINE( 395)					index = (index + 1);
HXDLIN( 395)					n = (n + 1);
HXDLIN( 395)					data->set((index - 1),normals->get((n - 1)));
            				}
HXLINE( 396)				{
HXLINE( 396)					index = (index + 1);
HXDLIN( 396)					n = (n + 1);
HXDLIN( 396)					data->set((index - 1),normals->get((n - 1)));
            				}
            			}
            			else {
HXLINE( 398)				{
HXLINE( 398)					index = (index + 1);
HXDLIN( 398)					data->set((index - 1),( (Float)(0) ));
            				}
HXLINE( 399)				{
HXLINE( 399)					index = (index + 1);
HXDLIN( 399)					data->set((index - 1),( (Float)(0) ));
            				}
HXLINE( 400)				{
HXLINE( 400)					index = (index + 1);
HXDLIN( 400)					data->set((index - 1),( (Float)(0) ));
            				}
            			}
HXLINE( 403)			bool _hx_tmp1;
HXDLIN( 403)			if (::hx::IsNotNull( tangents )) {
HXLINE( 403)				_hx_tmp1 = (tangents->get_length() > 0);
            			}
            			else {
HXLINE( 403)				_hx_tmp1 = false;
            			}
HXDLIN( 403)			if (_hx_tmp1) {
HXLINE( 404)				{
HXLINE( 404)					index = (index + 1);
HXDLIN( 404)					t = (t + 1);
HXDLIN( 404)					data->set((index - 1),tangents->get((t - 1)));
            				}
HXLINE( 405)				{
HXLINE( 405)					index = (index + 1);
HXDLIN( 405)					t = (t + 1);
HXDLIN( 405)					data->set((index - 1),tangents->get((t - 1)));
            				}
HXLINE( 406)				{
HXLINE( 406)					index = (index + 1);
HXDLIN( 406)					t = (t + 1);
HXDLIN( 406)					data->set((index - 1),tangents->get((t - 1)));
            				}
            			}
            			else {
HXLINE( 408)				{
HXLINE( 408)					index = (index + 1);
HXDLIN( 408)					data->set((index - 1),( (Float)(0) ));
            				}
HXLINE( 409)				{
HXLINE( 409)					index = (index + 1);
HXDLIN( 409)					data->set((index - 1),( (Float)(0) ));
            				}
HXLINE( 410)				{
HXLINE( 410)					index = (index + 1);
HXDLIN( 410)					data->set((index - 1),( (Float)(0) ));
            				}
            			}
HXLINE( 413)			bool _hx_tmp2;
HXDLIN( 413)			if (::hx::IsNotNull( uvs )) {
HXLINE( 413)				_hx_tmp2 = (uvs->get_length() > 0);
            			}
            			else {
HXLINE( 413)				_hx_tmp2 = false;
            			}
HXDLIN( 413)			if (_hx_tmp2) {
HXLINE( 414)				{
HXLINE( 414)					index = (index + 1);
HXDLIN( 414)					data->set((index - 1),uvs->get(u));
            				}
HXLINE( 415)				{
HXLINE( 415)					index = (index + 1);
HXDLIN( 415)					data->set((index - 1),uvs->get((u + 1)));
            				}
HXLINE( 417)				{
HXLINE( 417)					index = (index + 1);
HXDLIN( 417)					u = (u + 1);
HXDLIN( 417)					data->set((index - 1),uvs->get((u - 1)));
            				}
HXLINE( 418)				{
HXLINE( 418)					index = (index + 1);
HXDLIN( 418)					u = (u + 1);
HXDLIN( 418)					data->set((index - 1),uvs->get((u - 1)));
            				}
            			}
            			else {
HXLINE( 420)				{
HXLINE( 420)					index = (index + 1);
HXDLIN( 420)					data->set((index - 1),( (Float)(0) ));
            				}
HXLINE( 421)				{
HXLINE( 421)					index = (index + 1);
HXDLIN( 421)					data->set((index - 1),( (Float)(0) ));
            				}
HXLINE( 422)				{
HXLINE( 422)					index = (index + 1);
HXDLIN( 422)					data->set((index - 1),( (Float)(0) ));
            				}
HXLINE( 423)				{
HXLINE( 423)					index = (index + 1);
HXDLIN( 423)					data->set((index - 1),( (Float)(0) ));
            				}
            			}
            		}
HXLINE( 427)		bool _hx_tmp;
HXDLIN( 427)		if (::hx::IsNotNull( normals )) {
HXLINE( 427)			_hx_tmp = (normals->get_length() > 0);
            		}
            		else {
HXLINE( 427)			_hx_tmp = false;
            		}
HXDLIN( 427)		this->set_autoDeriveVertexNormals(!(_hx_tmp));
HXLINE( 428)		bool _hx_tmp1;
HXDLIN( 428)		if (::hx::IsNotNull( tangents )) {
HXLINE( 428)			_hx_tmp1 = (tangents->get_length() > 0);
            		}
            		else {
HXLINE( 428)			_hx_tmp1 = false;
            		}
HXDLIN( 428)		this->set_autoDeriveVertexTangents(!(_hx_tmp1));
HXLINE( 429)		bool _hx_tmp2;
HXDLIN( 429)		if (::hx::IsNotNull( uvs )) {
HXLINE( 429)			_hx_tmp2 = (uvs->get_length() > 0);
            		}
            		else {
HXLINE( 429)			_hx_tmp2 = false;
            		}
HXDLIN( 429)		this->set_autoGenerateDummyUVs(!(_hx_tmp2));
HXLINE( 430)		this->updateData(data);
            	}


HX_DEFINE_DYNAMIC_FUNC4(CompactSubGeometry_obj,fromVectors,(void))


::hx::ObjectPtr< CompactSubGeometry_obj > CompactSubGeometry_obj::__new() {
	::hx::ObjectPtr< CompactSubGeometry_obj > __this = new CompactSubGeometry_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< CompactSubGeometry_obj > CompactSubGeometry_obj::__alloc(::hx::Ctx *_hx_ctx) {
	CompactSubGeometry_obj *__this = (CompactSubGeometry_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CompactSubGeometry_obj), true, "away3d.core.base.CompactSubGeometry"));
	*(void **)__this = CompactSubGeometry_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

CompactSubGeometry_obj::CompactSubGeometry_obj()
{
}

void CompactSubGeometry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CompactSubGeometry);
	HX_MARK_MEMBER_NAME(_vertexDataInvalid,"_vertexDataInvalid");
	HX_MARK_MEMBER_NAME(_vertexBuffer,"_vertexBuffer");
	HX_MARK_MEMBER_NAME(_bufferContext,"_bufferContext");
	HX_MARK_MEMBER_NAME(_numVertices,"_numVertices");
	HX_MARK_MEMBER_NAME(_contextIndex,"_contextIndex");
	HX_MARK_MEMBER_NAME(_activeBuffer,"_activeBuffer");
	HX_MARK_MEMBER_NAME(_activeContext,"_activeContext");
	HX_MARK_MEMBER_NAME(_activeDataInvalid,"_activeDataInvalid");
	HX_MARK_MEMBER_NAME(_isolatedVertexPositionData,"_isolatedVertexPositionData");
	HX_MARK_MEMBER_NAME(_isolatedVertexPositionDataDirty,"_isolatedVertexPositionDataDirty");
	 ::away3d::core::base::SubGeometryBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CompactSubGeometry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_vertexDataInvalid,"_vertexDataInvalid");
	HX_VISIT_MEMBER_NAME(_vertexBuffer,"_vertexBuffer");
	HX_VISIT_MEMBER_NAME(_bufferContext,"_bufferContext");
	HX_VISIT_MEMBER_NAME(_numVertices,"_numVertices");
	HX_VISIT_MEMBER_NAME(_contextIndex,"_contextIndex");
	HX_VISIT_MEMBER_NAME(_activeBuffer,"_activeBuffer");
	HX_VISIT_MEMBER_NAME(_activeContext,"_activeContext");
	HX_VISIT_MEMBER_NAME(_activeDataInvalid,"_activeDataInvalid");
	HX_VISIT_MEMBER_NAME(_isolatedVertexPositionData,"_isolatedVertexPositionData");
	HX_VISIT_MEMBER_NAME(_isolatedVertexPositionDataDirty,"_isolatedVertexPositionDataDirty");
	 ::away3d::core::base::SubGeometryBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CompactSubGeometry_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return ::hx::Val( scale_dyn() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scaleUV") ) { return ::hx::Val( scaleUV_dyn() ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateData") ) { return ::hx::Val( updateData_dyn() ); }
		if (HX_FIELD_EQ(inName,"uploadData") ) { return ::hx::Val( uploadData_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_UVData") ) { return ::hx::Val( get_UVData_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numVertices") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numVertices() ); }
		if (HX_FIELD_EQ(inName,"stripBuffer") ) { return ::hx::Val( stripBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"fromVectors") ) { return ::hx::Val( fromVectors_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_numVertices") ) { return ::hx::Val( _numVertices ); }
		if (HX_FIELD_EQ(inName,"createBuffer") ) { return ::hx::Val( createBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_UVStride") ) { return ::hx::Val( get_UVStride_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_UVOffset") ) { return ::hx::Val( get_UVOffset_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_vertexBuffer") ) { return ::hx::Val( _vertexBuffer ); }
		if (HX_FIELD_EQ(inName,"_contextIndex") ) { return ::hx::Val( _contextIndex ); }
		if (HX_FIELD_EQ(inName,"_activeBuffer") ) { return ::hx::Val( _activeBuffer ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_bufferContext") ) { return ::hx::Val( _bufferContext ); }
		if (HX_FIELD_EQ(inName,"_activeContext") ) { return ::hx::Val( _activeContext ); }
		if (HX_FIELD_EQ(inName,"get_vertexData") ) { return ::hx::Val( get_vertexData_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numVertices") ) { return ::hx::Val( get_numVertices_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"activateUVBuffer") ) { return ::hx::Val( activateUVBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_vertexStride") ) { return ::hx::Val( get_vertexStride_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_vertexOffset") ) { return ::hx::Val( get_vertexOffset_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"secondaryUVStride") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_secondaryUVStride() ); }
		if (HX_FIELD_EQ(inName,"secondaryUVOffset") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_secondaryUVOffset() ); }
		if (HX_FIELD_EQ(inName,"invalidateBuffers") ) { return ::hx::Val( invalidateBuffers_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_vertexDataInvalid") ) { return ::hx::Val( _vertexDataInvalid ); }
		if (HX_FIELD_EQ(inName,"_activeDataInvalid") ) { return ::hx::Val( _activeDataInvalid ); }
		if (HX_FIELD_EQ(inName,"updateActiveBuffer") ) { return ::hx::Val( updateActiveBuffer_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateVertexNormals") ) { return ::hx::Val( updateVertexNormals_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyTransformation") ) { return ::hx::Val( applyTransformation_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"activateVertexBuffer") ) { return ::hx::Val( activateVertexBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateVertexTangents") ) { return ::hx::Val( updateVertexTangents_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_vertexNormalData") ) { return ::hx::Val( get_vertexNormalData_dyn() ); }
		if (HX_FIELD_EQ(inName,"disposeVertexBuffers") ) { return ::hx::Val( disposeVertexBuffers_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_vertexTangentData") ) { return ::hx::Val( get_vertexTangentData_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_secondaryUVStride") ) { return ::hx::Val( get_secondaryUVStride_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_secondaryUVOffset") ) { return ::hx::Val( get_secondaryUVOffset_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_vertexNormalStride") ) { return ::hx::Val( get_vertexNormalStride_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_vertexNormalOffset") ) { return ::hx::Val( get_vertexNormalOffset_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_vertexPositionData") ) { return ::hx::Val( get_vertexPositionData_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_vertexTangentStride") ) { return ::hx::Val( get_vertexTangentStride_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_vertexTangentOffset") ) { return ::hx::Val( get_vertexTangentOffset_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"cloneWithSeperateBuffers") ) { return ::hx::Val( cloneWithSeperateBuffers_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"activateSecondaryUVBuffer") ) { return ::hx::Val( activateSecondaryUVBuffer_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"activateVertexNormalBuffer") ) { return ::hx::Val( activateVertexNormalBuffer_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_isolatedVertexPositionData") ) { return ::hx::Val( _isolatedVertexPositionData ); }
		if (HX_FIELD_EQ(inName,"activateVertexTangentBuffer") ) { return ::hx::Val( activateVertexTangentBuffer_dyn() ); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"_isolatedVertexPositionDataDirty") ) { return ::hx::Val( _isolatedVertexPositionDataDirty ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CompactSubGeometry_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"_numVertices") ) { _numVertices=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_vertexBuffer") ) { _vertexBuffer=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_contextIndex") ) { _contextIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_activeBuffer") ) { _activeBuffer=inValue.Cast<  ::openfl::display3D::VertexBuffer3D >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_bufferContext") ) { _bufferContext=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_activeContext") ) { _activeContext=inValue.Cast<  ::openfl::display3D::Context3D >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_vertexDataInvalid") ) { _vertexDataInvalid=inValue.Cast<  ::openfl::_Vector::BoolVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_activeDataInvalid") ) { _activeDataInvalid=inValue.Cast< bool >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_isolatedVertexPositionData") ) { _isolatedVertexPositionData=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"_isolatedVertexPositionDataDirty") ) { _isolatedVertexPositionDataDirty=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CompactSubGeometry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("numVertices",5f,10,2c,56));
	outFields->push(HX_("secondaryUVStride",ce,40,bf,7c));
	outFields->push(HX_("secondaryUVOffset",48,b8,ce,cb));
	outFields->push(HX_("_vertexDataInvalid",aa,39,22,0c));
	outFields->push(HX_("_vertexBuffer",63,42,18,53));
	outFields->push(HX_("_bufferContext",10,91,47,8d));
	outFields->push(HX_("_numVertices",60,be,35,bc));
	outFields->push(HX_("_contextIndex",82,25,e8,26));
	outFields->push(HX_("_activeBuffer",45,9e,1e,13));
	outFields->push(HX_("_activeContext",0a,d1,92,0f));
	outFields->push(HX_("_activeDataInvalid",88,8a,d9,4c));
	outFields->push(HX_("_isolatedVertexPositionData",8f,dd,6f,66));
	outFields->push(HX_("_isolatedVertexPositionDataDirty",03,5c,f5,5f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CompactSubGeometry_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::_Vector::BoolVector */ ,(int)offsetof(CompactSubGeometry_obj,_vertexDataInvalid),HX_("_vertexDataInvalid",aa,39,22,0c)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(CompactSubGeometry_obj,_vertexBuffer),HX_("_vertexBuffer",63,42,18,53)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(CompactSubGeometry_obj,_bufferContext),HX_("_bufferContext",10,91,47,8d)},
	{::hx::fsInt,(int)offsetof(CompactSubGeometry_obj,_numVertices),HX_("_numVertices",60,be,35,bc)},
	{::hx::fsInt,(int)offsetof(CompactSubGeometry_obj,_contextIndex),HX_("_contextIndex",82,25,e8,26)},
	{::hx::fsObject /*  ::openfl::display3D::VertexBuffer3D */ ,(int)offsetof(CompactSubGeometry_obj,_activeBuffer),HX_("_activeBuffer",45,9e,1e,13)},
	{::hx::fsObject /*  ::openfl::display3D::Context3D */ ,(int)offsetof(CompactSubGeometry_obj,_activeContext),HX_("_activeContext",0a,d1,92,0f)},
	{::hx::fsBool,(int)offsetof(CompactSubGeometry_obj,_activeDataInvalid),HX_("_activeDataInvalid",88,8a,d9,4c)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(CompactSubGeometry_obj,_isolatedVertexPositionData),HX_("_isolatedVertexPositionData",8f,dd,6f,66)},
	{::hx::fsBool,(int)offsetof(CompactSubGeometry_obj,_isolatedVertexPositionDataDirty),HX_("_isolatedVertexPositionDataDirty",03,5c,f5,5f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CompactSubGeometry_obj_sStaticStorageInfo = 0;
#endif

static ::String CompactSubGeometry_obj_sMemberFields[] = {
	HX_("_vertexDataInvalid",aa,39,22,0c),
	HX_("_vertexBuffer",63,42,18,53),
	HX_("_bufferContext",10,91,47,8d),
	HX_("_numVertices",60,be,35,bc),
	HX_("_contextIndex",82,25,e8,26),
	HX_("_activeBuffer",45,9e,1e,13),
	HX_("_activeContext",0a,d1,92,0f),
	HX_("_activeDataInvalid",88,8a,d9,4c),
	HX_("_isolatedVertexPositionData",8f,dd,6f,66),
	HX_("_isolatedVertexPositionDataDirty",03,5c,f5,5f),
	HX_("get_numVertices",f6,c7,0d,17),
	HX_("updateData",d3,40,18,fb),
	HX_("activateVertexBuffer",d7,57,3c,03),
	HX_("activateUVBuffer",f4,80,aa,61),
	HX_("activateSecondaryUVBuffer",82,28,8f,3c),
	HX_("uploadData",cb,e0,a9,de),
	HX_("activateVertexNormalBuffer",9e,10,d7,ce),
	HX_("activateVertexTangentBuffer",ae,ad,55,ce),
	HX_("createBuffer",1c,fd,e9,f2),
	HX_("updateActiveBuffer",0f,47,bd,a8),
	HX_("get_vertexData",f7,67,15,49),
	HX_("updateVertexNormals",9f,a9,a0,31),
	HX_("updateVertexTangents",7b,63,c7,40),
	HX_("get_vertexNormalData",7e,7d,ac,ba),
	HX_("get_vertexTangentData",62,d7,7f,7d),
	HX_("get_UVData",f4,80,8f,9e),
	HX_("applyTransformation",d7,3b,1e,68),
	HX_("scale",8a,ce,ce,78),
	HX_("clone",5d,13,63,48),
	HX_("scaleUV",6b,4f,07,65),
	HX_("get_vertexStride",26,ff,e3,b5),
	HX_("get_vertexNormalStride",6d,c4,90,0b),
	HX_("get_vertexTangentStride",51,5f,59,ad),
	HX_("get_UVStride",63,11,d4,f0),
	HX_("get_secondaryUVStride",a5,43,6d,fb),
	HX_("get_vertexOffset",a0,76,f3,04),
	HX_("get_vertexNormalOffset",e7,3b,a0,5a),
	HX_("get_vertexTangentOffset",cb,d6,68,fc),
	HX_("get_UVOffset",dd,88,e3,3f),
	HX_("get_secondaryUVOffset",1f,bb,7c,4a),
	HX_("dispose",9f,80,4c,bb),
	HX_("disposeVertexBuffers",50,7c,4a,24),
	HX_("invalidateBuffers",38,a7,59,f9),
	HX_("cloneWithSeperateBuffers",09,c0,e2,05),
	HX_("get_vertexPositionData",40,52,bb,64),
	HX_("stripBuffer",f8,35,67,a1),
	HX_("fromVectors",06,5e,dd,72),
	::String(null()) };

::hx::Class CompactSubGeometry_obj::__mClass;

void CompactSubGeometry_obj::__register()
{
	CompactSubGeometry_obj _hx_dummy;
	CompactSubGeometry_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.base.CompactSubGeometry",cc,cf,0f,ff);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CompactSubGeometry_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CompactSubGeometry_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CompactSubGeometry_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CompactSubGeometry_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace core
} // end namespace base
