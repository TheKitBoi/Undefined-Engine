#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_away3d_cameras_Camera3D
#include <away3d/cameras/Camera3D.h>
#endif
#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_containers_Scene3D
#include <away3d/containers/Scene3D.h>
#endif
#ifndef INCLUDED_away3d_containers_View3D
#include <away3d/containers/View3D.h>
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
#ifndef INCLUDED_away3d_core_base_SubMesh
#include <away3d/core/base/SubMesh.h>
#endif
#ifndef INCLUDED_away3d_core_data_RenderableListItem
#include <away3d/core/data/RenderableListItem.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_away3d_core_math_Matrix3DUtils
#include <away3d/core/math/Matrix3DUtils.h>
#endif
#ifndef INCLUDED_away3d_core_pick_IPicker
#include <away3d/core/pick/IPicker.h>
#endif
#ifndef INCLUDED_away3d_core_pick_PickingCollisionVO
#include <away3d/core/pick/PickingCollisionVO.h>
#endif
#ifndef INCLUDED_away3d_core_pick_ShaderPicker
#include <away3d/core/pick/ShaderPicker.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_EntityCollector
#include <away3d/core/traverse/EntityCollector.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_PartitionTraverser
#include <away3d/core/traverse/PartitionTraverser.h>
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
#ifndef INCLUDED_away3d_materials_MaterialBase
#include <away3d/materials/MaterialBase.h>
#endif
#ifndef INCLUDED_away3d_tools_utils_GeomUtil
#include <away3d/tools/utils/GeomUtil.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Program3D
#include <openfl/display3D/Program3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D__Context3DProgramType_Context3DProgramType_Impl_
#include <openfl/display3D/_Context3DProgramType/Context3DProgramType_Impl_.h>
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
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif
#ifndef INCLUDED_openfl_utils_AGALMiniAssembler
#include <openfl/utils/AGALMiniAssembler.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_983f6e93f6db481a_29_new,"away3d.core.pick.ShaderPicker","new",0xf51a0152,"away3d.core.pick.ShaderPicker.new","away3d/core/pick/ShaderPicker.hx",29,0x153f03dd)
HX_LOCAL_STACK_FRAME(_hx_pos_983f6e93f6db481a_69_get_onlyMouseEnabled,"away3d.core.pick.ShaderPicker","get_onlyMouseEnabled",0x2d299c3f,"away3d.core.pick.ShaderPicker.get_onlyMouseEnabled","away3d/core/pick/ShaderPicker.hx",69,0x153f03dd)
HX_LOCAL_STACK_FRAME(_hx_pos_983f6e93f6db481a_73_set_onlyMouseEnabled,"away3d.core.pick.ShaderPicker","set_onlyMouseEnabled",0xf9e153b3,"away3d.core.pick.ShaderPicker.set_onlyMouseEnabled","away3d/core/pick/ShaderPicker.hx",73,0x153f03dd)
HX_LOCAL_STACK_FRAME(_hx_pos_983f6e93f6db481a_94_getViewCollision,"away3d.core.pick.ShaderPicker","getViewCollision",0xcebeaaa5,"away3d.core.pick.ShaderPicker.getViewCollision","away3d/core/pick/ShaderPicker.hx",94,0x153f03dd)
HX_LOCAL_STACK_FRAME(_hx_pos_983f6e93f6db481a_161_getSceneCollision,"away3d.core.pick.ShaderPicker","getSceneCollision",0x115f092e,"away3d.core.pick.ShaderPicker.getSceneCollision","away3d/core/pick/ShaderPicker.hx",161,0x153f03dd)
HX_LOCAL_STACK_FRAME(_hx_pos_983f6e93f6db481a_168_draw,"away3d.core.pick.ShaderPicker","draw",0x7b14ced2,"away3d.core.pick.ShaderPicker.draw","away3d/core/pick/ShaderPicker.hx",168,0x153f03dd)
HX_LOCAL_STACK_FRAME(_hx_pos_983f6e93f6db481a_192_drawRenderables,"away3d.core.pick.ShaderPicker","drawRenderables",0x2657acd1,"away3d.core.pick.ShaderPicker.drawRenderables","away3d/core/pick/ShaderPicker.hx",192,0x153f03dd)
HX_LOCAL_STACK_FRAME(_hx_pos_983f6e93f6db481a_227_updateRay,"away3d.core.pick.ShaderPicker","updateRay",0xa5b825d3,"away3d.core.pick.ShaderPicker.updateRay","away3d/core/pick/ShaderPicker.hx",227,0x153f03dd)
HX_LOCAL_STACK_FRAME(_hx_pos_983f6e93f6db481a_237_initObjectProgram3D,"away3d.core.pick.ShaderPicker","initObjectProgram3D",0x9c57a538,"away3d.core.pick.ShaderPicker.initObjectProgram3D","away3d/core/pick/ShaderPicker.hx",237,0x153f03dd)
HX_LOCAL_STACK_FRAME(_hx_pos_983f6e93f6db481a_258_initTriangleProgram3D,"away3d.core.pick.ShaderPicker","initTriangleProgram3D",0x4f7d908f,"away3d.core.pick.ShaderPicker.initTriangleProgram3D","away3d/core/pick/ShaderPicker.hx",258,0x153f03dd)
HX_LOCAL_STACK_FRAME(_hx_pos_983f6e93f6db481a_284_getHitDetails,"away3d.core.pick.ShaderPicker","getHitDetails",0xd1de6e57,"away3d.core.pick.ShaderPicker.getHitDetails","away3d/core/pick/ShaderPicker.hx",284,0x153f03dd)
HX_LOCAL_STACK_FRAME(_hx_pos_983f6e93f6db481a_294_getApproximatePosition,"away3d.core.pick.ShaderPicker","getApproximatePosition",0x9d9c7875,"away3d.core.pick.ShaderPicker.getApproximatePosition","away3d/core/pick/ShaderPicker.hx",294,0x153f03dd)
HX_LOCAL_STACK_FRAME(_hx_pos_983f6e93f6db481a_334_getPreciseDetails,"away3d.core.pick.ShaderPicker","getPreciseDetails",0xa62d5b4f,"away3d.core.pick.ShaderPicker.getPreciseDetails","away3d/core/pick/ShaderPicker.hx",334,0x153f03dd)
HX_LOCAL_STACK_FRAME(_hx_pos_983f6e93f6db481a_472_getPrecisePosition,"away3d.core.pick.ShaderPicker","getPrecisePosition",0x4bd2dd7c,"away3d.core.pick.ShaderPicker.getPrecisePosition","away3d/core/pick/ShaderPicker.hx",472,0x153f03dd)
HX_LOCAL_STACK_FRAME(_hx_pos_983f6e93f6db481a_503_dispose,"away3d.core.pick.ShaderPicker","dispose",0x1de31291,"away3d.core.pick.ShaderPicker.dispose","away3d/core/pick/ShaderPicker.hx",503,0x153f03dd)
HX_LOCAL_STACK_FRAME(_hx_pos_983f6e93f6db481a_62_boot,"away3d.core.pick.ShaderPicker","boot",0x79c02700,"away3d.core.pick.ShaderPicker.boot","away3d/core/pick/ShaderPicker.hx",62,0x153f03dd)
namespace away3d{
namespace core{
namespace pick{

void ShaderPicker_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_983f6e93f6db481a_29_new)
HXLINE(  60)		this->_rayDir =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  59)		this->_rayPos =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  57)		this->_localHitNormal =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  53)		this->_hitUV =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  52)		this->_localHitPosition =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  44)		int length = null();
HXDLIN(  44)		bool fixed = null();
HXDLIN(  44)		::Array< ::Dynamic> array = null();
HXDLIN(  44)		this->_interactives =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE(  35)		this->_onlyMouseEnabled = true;
HXLINE(  83)		::Array< Float > array1 = null();
HXDLIN(  83)		this->_id =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,4,true,array1,true);
HXLINE(  84)		::Array< Float > array11 = null();
HXDLIN(  84)		this->_viewportData =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,4,true,array11,true);
HXLINE(  85)		::Array< Float > array2 = null();
HXDLIN(  85)		this->_boundOffsetScale =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,8,true,array2,true);
HXLINE(  86)		this->_boundOffsetScale->set(3,( (Float)(0) ));
HXLINE(  87)		this->_boundOffsetScale->set(7,( (Float)(1) ));
            	}

Dynamic ShaderPicker_obj::__CreateEmpty() { return new ShaderPicker_obj; }

void *ShaderPicker_obj::_hx_vtable = 0;

Dynamic ShaderPicker_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShaderPicker_obj > _hx_result = new ShaderPicker_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ShaderPicker_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1e3ce47a;
}

static ::away3d::core::pick::IPicker_obj _hx_away3d_core_pick_ShaderPicker__hx_away3d_core_pick_IPicker= {
	( bool (::hx::Object::*)())&::away3d::core::pick::ShaderPicker_obj::get_onlyMouseEnabled,
	( bool (::hx::Object::*)(bool))&::away3d::core::pick::ShaderPicker_obj::set_onlyMouseEnabled,
	(  ::away3d::core::pick::PickingCollisionVO (::hx::Object::*)(Float,Float, ::away3d::containers::View3D))&::away3d::core::pick::ShaderPicker_obj::getViewCollision,
	(  ::away3d::core::pick::PickingCollisionVO (::hx::Object::*)( ::openfl::geom::Vector3D, ::openfl::geom::Vector3D, ::away3d::containers::Scene3D))&::away3d::core::pick::ShaderPicker_obj::getSceneCollision,
	( void (::hx::Object::*)())&::away3d::core::pick::ShaderPicker_obj::dispose,
};

void *ShaderPicker_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xe9ec8ad8: return &_hx_away3d_core_pick_ShaderPicker__hx_away3d_core_pick_IPicker;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

bool ShaderPicker_obj::get_onlyMouseEnabled(){
            	HX_STACKFRAME(&_hx_pos_983f6e93f6db481a_69_get_onlyMouseEnabled)
HXDLIN(  69)		return this->_onlyMouseEnabled;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderPicker_obj,get_onlyMouseEnabled,return )

bool ShaderPicker_obj::set_onlyMouseEnabled(bool value){
            	HX_STACKFRAME(&_hx_pos_983f6e93f6db481a_73_set_onlyMouseEnabled)
HXLINE(  74)		this->_onlyMouseEnabled = value;
HXLINE(  75)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderPicker_obj,set_onlyMouseEnabled,return )

 ::away3d::core::pick::PickingCollisionVO ShaderPicker_obj::getViewCollision(Float x,Float y, ::away3d::containers::View3D view){
            	HX_GC_STACKFRAME(&_hx_pos_983f6e93f6db481a_94_getViewCollision)
HXLINE(  95)		 ::away3d::core::traverse::EntityCollector collector = view->get_entityCollector();
HXLINE(  97)		this->_stage3DProxy = view->get_stage3DProxy();
HXLINE(  99)		if (::hx::IsNull( this->_stage3DProxy )) {
HXLINE( 100)			return null();
            		}
HXLINE( 102)		this->_context = this->_stage3DProxy->_context3D;
HXLINE( 104)		{
HXLINE( 104)			::Dynamic this1 = this->_viewportData;
HXDLIN( 104)			( ( ::openfl::_Vector::FloatVector)(this1) )->set(0,view->get_width());
            		}
HXLINE( 105)		{
HXLINE( 105)			::Dynamic this2 = this->_viewportData;
HXDLIN( 105)			( ( ::openfl::_Vector::FloatVector)(this2) )->set(1,view->get_height());
            		}
HXLINE( 106)		{
HXLINE( 106)			::Dynamic this3 = this->_viewportData;
HXDLIN( 106)			( ( ::openfl::_Vector::FloatVector)(this3) )->set(2,-((this->_projX = (((( (Float)(2) ) * x) / view->get_width()) - ( (Float)(1) )))));
            		}
HXLINE( 107)		{
HXLINE( 107)			::Dynamic this4 = this->_viewportData;
HXDLIN( 107)			( ( ::openfl::_Vector::FloatVector)(this4) )->set(3,(this->_projY = (((( (Float)(2) ) * y) / view->get_height()) - ( (Float)(1) ))));
            		}
HXLINE( 110)		this->_potentialFound = false;
HXLINE( 112)		this->draw(collector,null());
HXLINE( 115)		this->_context->setVertexBufferAt(0,null(),null(),null());
HXLINE( 117)		bool _hx_tmp;
HXDLIN( 117)		if (::hx::IsNotNull( this->_context )) {
HXLINE( 117)			_hx_tmp = !(this->_potentialFound);
            		}
            		else {
HXLINE( 117)			_hx_tmp = true;
            		}
HXDLIN( 117)		if (_hx_tmp) {
HXLINE( 118)			return null();
            		}
HXLINE( 120)		if (::hx::IsNull( this->_bitmapData )) {
HXLINE( 121)			this->_bitmapData =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,1,1,false,0);
            		}
HXLINE( 123)		this->_context->drawToBitmapData(this->_bitmapData,null(),null());
HXLINE( 124)		this->_hitColor = this->_bitmapData->getPixel(0,0);
HXLINE( 126)		if ((this->_hitColor == 0)) {
HXLINE( 127)			this->_context->present();
HXLINE( 128)			return null();
            		}
HXLINE( 131)		this->_hitRenderable = this->_interactives->get((this->_hitColor - 1));
HXLINE( 132)		this->_hitEntity = ::away3d::core::base::IRenderable_obj::get_sourceEntity(this->_hitRenderable);
HXLINE( 133)		bool _hx_tmp1;
HXDLIN( 133)		if (this->_onlyMouseEnabled) {
HXLINE( 133)			if (this->_hitEntity->_ancestorsAllowMouseEnabled) {
HXLINE( 133)				_hx_tmp1 = !(this->_hitEntity->get_mouseEnabled());
            			}
            			else {
HXLINE( 133)				_hx_tmp1 = true;
            			}
            		}
            		else {
HXLINE( 133)			_hx_tmp1 = false;
            		}
HXDLIN( 133)		if (_hx_tmp1) {
HXLINE( 134)			return null();
            		}
HXLINE( 136)		 ::away3d::core::pick::PickingCollisionVO _collisionVO = this->_hitEntity->get_pickingCollisionVO();
HXLINE( 137)		if (::away3d::core::base::IRenderable_obj::get_shaderPickingDetails(this->_hitRenderable)) {
HXLINE( 138)			this->getHitDetails(view->get_camera());
HXLINE( 139)			_collisionVO->localPosition = this->_localHitPosition;
HXLINE( 140)			_collisionVO->localNormal = this->_localHitNormal;
HXLINE( 141)			_collisionVO->uv = this->_hitUV;
HXLINE( 142)			_collisionVO->index = this->_faceIndex;
HXLINE( 143)			_collisionVO->subGeometryIndex = this->_subGeometryIndex;
            		}
            		else {
HXLINE( 146)			_collisionVO->localPosition = null();
HXLINE( 147)			_collisionVO->localNormal = null();
HXLINE( 148)			_collisionVO->uv = null();
HXLINE( 149)			_collisionVO->index = 0;
HXLINE( 150)			_collisionVO->subGeometryIndex = 0;
            		}
HXLINE( 153)		return _collisionVO;
            	}


HX_DEFINE_DYNAMIC_FUNC3(ShaderPicker_obj,getViewCollision,return )

 ::away3d::core::pick::PickingCollisionVO ShaderPicker_obj::getSceneCollision( ::openfl::geom::Vector3D position, ::openfl::geom::Vector3D direction, ::away3d::containers::Scene3D scene){
            	HX_STACKFRAME(&_hx_pos_983f6e93f6db481a_161_getSceneCollision)
HXDLIN( 161)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(ShaderPicker_obj,getSceneCollision,return )

void ShaderPicker_obj::draw( ::away3d::core::traverse::EntityCollector entityCollector, ::openfl::display3D::textures::TextureBase target){
            	HX_STACKFRAME(&_hx_pos_983f6e93f6db481a_168_draw)
HXLINE( 169)		 ::away3d::cameras::Camera3D camera = entityCollector->get_camera();
HXLINE( 171)		this->_context->clear(0,0,0,1,null(),null(),null());
HXLINE( 172)		this->_stage3DProxy->set_scissorRect(::away3d::core::pick::ShaderPicker_obj::MOUSE_SCISSOR_RECT);
HXLINE( 174)		this->_interactives->set_length((this->_interactiveId = 0));
HXLINE( 176)		if (::hx::IsNull( this->_objectProgram3D )) {
HXLINE( 177)			this->initObjectProgram3D();
            		}
HXLINE( 178)		this->_context->setBlendFactors(2,9);
HXLINE( 179)		this->_context->setDepthTest(true,4);
HXLINE( 180)		this->_context->setProgram(this->_objectProgram3D);
HXLINE( 181)		this->_context->setProgramConstantsFromVector(1,4,this->_viewportData,1);
HXLINE( 182)		this->drawRenderables(entityCollector->get_opaqueRenderableHead(),camera);
HXLINE( 183)		this->drawRenderables(entityCollector->get_blendedRenderableHead(),camera);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShaderPicker_obj,draw,(void))

void ShaderPicker_obj::drawRenderables( ::away3d::core::data::RenderableListItem item, ::away3d::cameras::Camera3D camera){
            	HX_STACKFRAME(&_hx_pos_983f6e93f6db481a_192_drawRenderables)
HXLINE( 193)		 ::openfl::geom::Matrix3D matrix = ::away3d::core::math::Matrix3DUtils_obj::CALCULATION_MATRIX;
HXLINE( 194)		::Dynamic renderable;
HXLINE( 195)		 ::openfl::geom::Matrix3D viewProjection = camera->get_viewProjection();
HXLINE( 197)		while(::hx::IsNotNull( item )){
HXLINE( 198)			renderable = item->renderable;
HXLINE( 201)			bool _hx_tmp;
HXDLIN( 201)			if (::hx::IsNotNull( ::away3d::core::base::IRenderable_obj::get_sourceEntity(renderable)->get_scene() )) {
HXLINE( 201)				if (!(::away3d::core::base::IRenderable_obj::get_mouseEnabled(renderable))) {
HXLINE( 201)					_hx_tmp = this->_onlyMouseEnabled;
            				}
            				else {
HXLINE( 201)					_hx_tmp = false;
            				}
            			}
            			else {
HXLINE( 201)				_hx_tmp = true;
            			}
HXDLIN( 201)			if (_hx_tmp) {
HXLINE( 202)				item = item->next;
HXLINE( 203)				continue;
            			}
HXLINE( 206)			this->_potentialFound = true;
HXLINE( 208)			 ::openfl::display3D::Context3D _hx_tmp1 = this->_context;
HXDLIN( 208)			 ::Dynamic _hx_tmp2;
HXDLIN( 208)			bool _hx_tmp3;
HXDLIN( 208)			if (::hx::IsNotNull( ::away3d::core::base::IMaterialOwner_obj::get_material(renderable) )) {
HXLINE( 208)				_hx_tmp3 = ::away3d::core::base::IMaterialOwner_obj::get_material(renderable)->get_bothSides();
            			}
            			else {
HXLINE( 208)				_hx_tmp3 = false;
            			}
HXDLIN( 208)			if (_hx_tmp3) {
HXLINE( 208)				_hx_tmp2 = 3;
            			}
            			else {
HXLINE( 208)				_hx_tmp2 = 0;
            			}
HXDLIN( 208)			_hx_tmp1->setCulling(_hx_tmp2);
HXLINE( 210)			this->_interactives->set(this->_interactiveId++,renderable);
HXLINE( 212)			this->_id->set(1,(( (Float)((this->_interactiveId >> 8)) ) / ( (Float)(255) )));
HXLINE( 213)			this->_id->set(2,(( (Float)((this->_interactiveId & 255)) ) / ( (Float)(255) )));
HXLINE( 215)			matrix->copyFrom(::away3d::core::base::IRenderable_obj::getRenderSceneTransform(renderable,camera));
HXLINE( 216)			matrix->append(viewProjection);
HXLINE( 217)			this->_context->setProgramConstantsFromMatrix(1,0,matrix,true);
HXLINE( 218)			this->_context->setProgramConstantsFromVector(0,0,this->_id,1);
HXLINE( 219)			::away3d::core::base::IRenderable_obj::activateVertexBuffer(renderable,0,this->_stage3DProxy);
HXLINE( 220)			 ::away3d::core::managers::Stage3DProxy _hx_tmp4 = this->_stage3DProxy;
HXDLIN( 220)			 ::openfl::display3D::IndexBuffer3D _hx_tmp5 = ::away3d::core::base::IRenderable_obj::getIndexBuffer(renderable,this->_stage3DProxy);
HXDLIN( 220)			_hx_tmp4->drawTriangles(_hx_tmp5,0,::away3d::core::base::IRenderable_obj::get_numTriangles(renderable));
HXLINE( 222)			item = item->next;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShaderPicker_obj,drawRenderables,(void))

void ShaderPicker_obj::updateRay( ::away3d::cameras::Camera3D camera){
            	HX_STACKFRAME(&_hx_pos_983f6e93f6db481a_227_updateRay)
HXLINE( 228)		this->_rayPos = camera->get_scenePosition();
HXLINE( 229)		this->_rayDir = camera->getRay(this->_projX,this->_projY,( (Float)(1) ),null());
HXLINE( 230)		this->_rayDir->normalize();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderPicker_obj,updateRay,(void))

void ShaderPicker_obj::initObjectProgram3D(){
            	HX_GC_STACKFRAME(&_hx_pos_983f6e93f6db481a_237_initObjectProgram3D)
HXLINE( 241)		this->_objectProgram3D = this->_context->createProgram(null());
HXLINE( 238)		::String vertexCode = ((((HX_("m44 vt0, va0, vc0\t\t\t\n",de,7f,84,02) + HX_("mul vt1.xy, vt0.w, vc4.zw\t\n",c8,ac,fa,24)) + HX_("add vt0.xy, vt0.xy, vt1.xy\t\n",fe,8d,ea,26)) + HX_("mul vt0.xy, vt0.xy, vc4.xy\t\n",07,cc,f5,a2)) + HX_("mov op, vt0\t\n",52,75,be,50));
HXLINE( 239)		::String fragmentCode = HX_("mov oc, fc0",7f,9b,cb,a8);
HXLINE( 250)		 ::openfl::display3D::Program3D _hx_tmp = this->_objectProgram3D;
HXDLIN( 250)		 ::openfl::utils::AGALMiniAssembler _hx_tmp1 =  ::openfl::utils::AGALMiniAssembler_obj::__alloc( HX_CTX ,null());
HXDLIN( 250)		 ::openfl::utils::ByteArrayData _hx_tmp2 = _hx_tmp1->assemble(::openfl::display3D::_Context3DProgramType::Context3DProgramType_Impl__obj::toString(1),vertexCode,null(),null());
HXLINE( 251)		 ::openfl::utils::AGALMiniAssembler _hx_tmp3 =  ::openfl::utils::AGALMiniAssembler_obj::__alloc( HX_CTX ,null());
HXLINE( 250)		_hx_tmp->upload(_hx_tmp2,_hx_tmp3->assemble(::openfl::display3D::_Context3DProgramType::Context3DProgramType_Impl__obj::toString(0),fragmentCode,null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderPicker_obj,initObjectProgram3D,(void))

void ShaderPicker_obj::initTriangleProgram3D(){
            	HX_GC_STACKFRAME(&_hx_pos_983f6e93f6db481a_258_initTriangleProgram3D)
HXLINE( 262)		this->_triangleProgram3D = this->_context->createProgram(null());
HXLINE( 259)		::String vertexCode = (((((((HX_("add vt0, va0, vc5 \t\t\t\n",8b,20,c2,be) + HX_("mul vt0, vt0, vc6 \t\t\t\n",b4,0f,85,b9)) + HX_("mov v0, vt0\t\t\t\t\n",92,fe,2a,5a)) + HX_("m44 vt0, va0, vc0\t\t\t\n",de,7f,84,02)) + HX_("mul vt1.xy, vt0.w, vc4.zw\t\n",c8,ac,fa,24)) + HX_("add vt0.xy, vt0.xy, vt1.xy\t\n",fe,8d,ea,26)) + HX_("mul vt0.xy, vt0.xy, vc4.xy\t\n",07,cc,f5,a2)) + HX_("mov op, vt0\t\n",52,75,be,50));
HXLINE( 260)		::String fragmentCode = HX_("mov oc, v0",4e,91,c7,65);
HXLINE( 275)		 ::openfl::display3D::Program3D _hx_tmp = this->_triangleProgram3D;
HXDLIN( 275)		 ::openfl::utils::AGALMiniAssembler _hx_tmp1 =  ::openfl::utils::AGALMiniAssembler_obj::__alloc( HX_CTX ,null());
HXDLIN( 275)		 ::openfl::utils::ByteArrayData _hx_tmp2 = _hx_tmp1->assemble(::openfl::display3D::_Context3DProgramType::Context3DProgramType_Impl__obj::toString(1),vertexCode,null(),null());
HXLINE( 276)		 ::openfl::utils::AGALMiniAssembler _hx_tmp3 =  ::openfl::utils::AGALMiniAssembler_obj::__alloc( HX_CTX ,null());
HXLINE( 275)		_hx_tmp->upload(_hx_tmp2,_hx_tmp3->assemble(::openfl::display3D::_Context3DProgramType::Context3DProgramType_Impl__obj::toString(0),fragmentCode,null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderPicker_obj,initTriangleProgram3D,(void))

void ShaderPicker_obj::getHitDetails( ::away3d::cameras::Camera3D camera){
            	HX_STACKFRAME(&_hx_pos_983f6e93f6db481a_284_getHitDetails)
HXLINE( 285)		this->getApproximatePosition(camera);
HXLINE( 286)		this->getPreciseDetails(camera);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderPicker_obj,getHitDetails,(void))

void ShaderPicker_obj::getApproximatePosition( ::away3d::cameras::Camera3D camera){
            	HX_STACKFRAME(&_hx_pos_983f6e93f6db481a_294_getApproximatePosition)
HXLINE( 295)		 ::away3d::entities::Entity entity = ::away3d::core::base::IRenderable_obj::get_sourceEntity(this->_hitRenderable);
HXLINE( 297)		Float scX;
HXDLIN( 297)		Float scY;
HXDLIN( 297)		Float scZ;
HXLINE( 298)		Float offsX;
HXDLIN( 298)		Float offsY;
HXDLIN( 298)		Float offsZ;
HXLINE( 299)		 ::openfl::geom::Matrix3D localViewProjection = ::away3d::core::math::Matrix3DUtils_obj::CALCULATION_MATRIX;
HXLINE( 300)		localViewProjection->copyFrom(::away3d::core::base::IRenderable_obj::getRenderSceneTransform(this->_hitRenderable,camera));
HXLINE( 301)		localViewProjection->append(camera->get_viewProjection());
HXLINE( 302)		if (::hx::IsNull( this->_triangleProgram3D )) {
HXLINE( 303)			this->initTriangleProgram3D();
            		}
HXLINE( 305)		{
HXLINE( 305)			::Dynamic this1 = this->_boundOffsetScale;
HXDLIN( 305)			Float scX1 = entity->get_maxX();
HXDLIN( 305)			scX = (scX1 - entity->get_minX());
HXDLIN( 305)			( ( ::openfl::_Vector::FloatVector)(this1) )->set(4,(( (Float)(1) ) / scX));
            		}
HXLINE( 306)		{
HXLINE( 306)			::Dynamic this2 = this->_boundOffsetScale;
HXDLIN( 306)			Float scY1 = entity->get_maxY();
HXDLIN( 306)			scY = (scY1 - entity->get_minY());
HXDLIN( 306)			( ( ::openfl::_Vector::FloatVector)(this2) )->set(5,(( (Float)(1) ) / scY));
            		}
HXLINE( 307)		{
HXLINE( 307)			::Dynamic this3 = this->_boundOffsetScale;
HXDLIN( 307)			Float scZ1 = entity->get_maxZ();
HXDLIN( 307)			scZ = (scZ1 - entity->get_minZ());
HXDLIN( 307)			( ( ::openfl::_Vector::FloatVector)(this3) )->set(6,(( (Float)(1) ) / scZ));
            		}
HXLINE( 308)		{
HXLINE( 308)			::Dynamic this4 = this->_boundOffsetScale;
HXDLIN( 308)			offsX = -(entity->get_minX());
HXDLIN( 308)			( ( ::openfl::_Vector::FloatVector)(this4) )->set(0,offsX);
            		}
HXLINE( 309)		{
HXLINE( 309)			::Dynamic this5 = this->_boundOffsetScale;
HXDLIN( 309)			offsY = -(entity->get_minY());
HXDLIN( 309)			( ( ::openfl::_Vector::FloatVector)(this5) )->set(1,offsY);
            		}
HXLINE( 310)		{
HXLINE( 310)			::Dynamic this6 = this->_boundOffsetScale;
HXDLIN( 310)			offsZ = -(entity->get_minZ());
HXDLIN( 310)			( ( ::openfl::_Vector::FloatVector)(this6) )->set(2,offsZ);
            		}
HXLINE( 312)		this->_context->setProgram(this->_triangleProgram3D);
HXLINE( 313)		this->_context->clear(0,0,0,0,1,0,2);
HXLINE( 314)		this->_context->setScissorRectangle(::away3d::core::pick::ShaderPicker_obj::MOUSE_SCISSOR_RECT);
HXLINE( 315)		this->_context->setProgramConstantsFromMatrix(1,0,localViewProjection,true);
HXLINE( 316)		this->_context->setProgramConstantsFromVector(1,5,this->_boundOffsetScale,2);
HXLINE( 317)		::away3d::core::base::IRenderable_obj::activateVertexBuffer(this->_hitRenderable,0,this->_stage3DProxy);
HXLINE( 318)		 ::away3d::core::managers::Stage3DProxy _hx_tmp = this->_stage3DProxy;
HXDLIN( 318)		 ::openfl::display3D::IndexBuffer3D _hx_tmp1 = ::away3d::core::base::IRenderable_obj::getIndexBuffer(this->_hitRenderable,this->_stage3DProxy);
HXDLIN( 318)		_hx_tmp->drawTriangles(_hx_tmp1,0,::away3d::core::base::IRenderable_obj::get_numTriangles(this->_hitRenderable));
HXLINE( 319)		this->_context->drawToBitmapData(this->_bitmapData,null(),null());
HXLINE( 296)		int col = this->_bitmapData->getPixel(0,0);
HXLINE( 323)		this->_localHitPosition->x = (((( (Float)(((col >> 16) & 255)) ) * scX) / ( (Float)(255) )) - offsX);
HXLINE( 324)		this->_localHitPosition->y = (((( (Float)(((col >> 8) & 255)) ) * scY) / ( (Float)(255) )) - offsY);
HXLINE( 325)		this->_localHitPosition->z = (((( (Float)((col & 255)) ) * scZ) / ( (Float)(255) )) - offsZ);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderPicker_obj,getApproximatePosition,(void))

void ShaderPicker_obj::getPreciseDetails( ::away3d::cameras::Camera3D camera){
            	HX_STACKFRAME(&_hx_pos_983f6e93f6db481a_334_getPreciseDetails)
HXLINE( 336)		::Dynamic subGeom = ::hx::TCast<  ::away3d::core::base::SubMesh >::cast(this->_hitRenderable)->get_subGeometry();
HXLINE( 337)		 ::openfl::_Vector::IntVector indices = ::away3d::core::base::ISubGeometry_obj::get_indexData(subGeom);
HXLINE( 338)		 ::openfl::_Vector::FloatVector vertices = ::away3d::core::base::ISubGeometry_obj::get_vertexData(subGeom);
HXLINE( 339)		int len = indices->get_length();
HXLINE( 340)		Float x1;
HXDLIN( 340)		Float y1;
HXDLIN( 340)		Float z1;
HXLINE( 341)		Float x2;
HXDLIN( 341)		Float y2;
HXDLIN( 341)		Float z2;
HXLINE( 342)		Float x3;
HXDLIN( 342)		Float y3;
HXDLIN( 342)		Float z3;
HXLINE( 343)		int i = 0;
HXDLIN( 343)		int j = 1;
HXDLIN( 343)		int k = 2;
HXLINE( 344)		int t1;
HXDLIN( 344)		int t2;
HXDLIN( 344)		int t3;
HXLINE( 345)		Float v0x;
HXDLIN( 345)		Float v0y;
HXDLIN( 345)		Float v0z;
HXLINE( 346)		Float v1x;
HXDLIN( 346)		Float v1y;
HXDLIN( 346)		Float v1z;
HXLINE( 347)		Float v2x;
HXDLIN( 347)		Float v2y;
HXDLIN( 347)		Float v2z;
HXLINE( 348)		Float dot00;
HXDLIN( 348)		Float dot01;
HXDLIN( 348)		Float dot02;
HXDLIN( 348)		Float dot11;
HXDLIN( 348)		Float dot12;
HXLINE( 349)		Float s;
HXDLIN( 349)		Float t;
HXDLIN( 349)		Float invDenom;
HXLINE( 350)		 ::openfl::_Vector::FloatVector uvs = ::away3d::core::base::ISubGeometry_obj::get_UVData(subGeom);
HXLINE( 351)		 ::openfl::_Vector::FloatVector normals = ::away3d::core::base::ISubGeometry_obj::get_faceNormals(subGeom);
HXLINE( 352)		Float x = this->_localHitPosition->x;
HXDLIN( 352)		Float y = this->_localHitPosition->y;
HXDLIN( 352)		Float z = this->_localHitPosition->z;
HXLINE( 353)		Float u;
HXDLIN( 353)		Float v;
HXLINE( 354)		int ui1;
HXDLIN( 354)		int ui2;
HXDLIN( 354)		int ui3;
HXLINE( 355)		Float s0x;
HXDLIN( 355)		Float s0y;
HXDLIN( 355)		Float s0z;
HXLINE( 356)		Float s1x;
HXDLIN( 356)		Float s1y;
HXDLIN( 356)		Float s1z;
HXLINE( 357)		Float nl;
HXLINE( 358)		int stride = ::away3d::core::base::ISubGeometry_obj::get_vertexStride(subGeom);
HXLINE( 359)		int vertexOffset = ::away3d::core::base::ISubGeometry_obj::get_vertexOffset(subGeom);
HXLINE( 361)		this->updateRay(camera);
HXLINE( 363)		while((i < len)){
HXLINE( 364)			t1 = (vertexOffset + (indices->get(i) * stride));
HXLINE( 365)			t2 = (vertexOffset + (indices->get(j) * stride));
HXLINE( 366)			t3 = (vertexOffset + (indices->get(k) * stride));
HXLINE( 367)			x1 = vertices->get(t1);
HXLINE( 368)			y1 = vertices->get((t1 + 1));
HXLINE( 369)			z1 = vertices->get((t1 + 2));
HXLINE( 370)			x2 = vertices->get(t2);
HXLINE( 371)			y2 = vertices->get((t2 + 1));
HXLINE( 372)			z2 = vertices->get((t2 + 2));
HXLINE( 373)			x3 = vertices->get(t3);
HXLINE( 374)			y3 = vertices->get((t3 + 1));
HXLINE( 375)			z3 = vertices->get((t3 + 2));
HXLINE( 378)			bool _hx_tmp;
HXDLIN( 378)			bool _hx_tmp1;
HXDLIN( 378)			bool _hx_tmp2;
HXDLIN( 378)			bool _hx_tmp3;
HXDLIN( 378)			bool _hx_tmp4;
HXDLIN( 378)			bool _hx_tmp5;
HXDLIN( 378)			bool _hx_tmp6;
HXDLIN( 378)			if ((x < x1)) {
HXLINE( 378)				_hx_tmp6 = (x < x2);
            			}
            			else {
HXLINE( 378)				_hx_tmp6 = false;
            			}
HXDLIN( 378)			if (_hx_tmp6) {
HXLINE( 378)				_hx_tmp5 = (x < x3);
            			}
            			else {
HXLINE( 378)				_hx_tmp5 = false;
            			}
HXDLIN( 378)			if (!(_hx_tmp5)) {
HXLINE( 379)				bool _hx_tmp;
HXDLIN( 379)				if ((y < y1)) {
HXLINE( 379)					_hx_tmp = (y < y2);
            				}
            				else {
HXLINE( 379)					_hx_tmp = false;
            				}
HXDLIN( 379)				if (_hx_tmp) {
HXLINE( 378)					_hx_tmp4 = (y < y3);
            				}
            				else {
HXLINE( 378)					_hx_tmp4 = false;
            				}
            			}
            			else {
HXLINE( 378)				_hx_tmp4 = true;
            			}
HXDLIN( 378)			if (!(_hx_tmp4)) {
HXLINE( 380)				bool _hx_tmp;
HXDLIN( 380)				if ((z < z1)) {
HXLINE( 380)					_hx_tmp = (z < z2);
            				}
            				else {
HXLINE( 380)					_hx_tmp = false;
            				}
HXDLIN( 380)				if (_hx_tmp) {
HXLINE( 378)					_hx_tmp3 = (z < z3);
            				}
            				else {
HXLINE( 378)					_hx_tmp3 = false;
            				}
            			}
            			else {
HXLINE( 378)				_hx_tmp3 = true;
            			}
HXDLIN( 378)			if (!(_hx_tmp3)) {
HXLINE( 381)				bool _hx_tmp;
HXDLIN( 381)				if ((x > x1)) {
HXLINE( 381)					_hx_tmp = (x > x2);
            				}
            				else {
HXLINE( 381)					_hx_tmp = false;
            				}
HXDLIN( 381)				if (_hx_tmp) {
HXLINE( 378)					_hx_tmp2 = (x > x3);
            				}
            				else {
HXLINE( 378)					_hx_tmp2 = false;
            				}
            			}
            			else {
HXLINE( 378)				_hx_tmp2 = true;
            			}
HXDLIN( 378)			if (!(_hx_tmp2)) {
HXLINE( 382)				bool _hx_tmp;
HXDLIN( 382)				if ((y > y1)) {
HXLINE( 382)					_hx_tmp = (y > y2);
            				}
            				else {
HXLINE( 382)					_hx_tmp = false;
            				}
HXDLIN( 382)				if (_hx_tmp) {
HXLINE( 378)					_hx_tmp1 = (y > y3);
            				}
            				else {
HXLINE( 378)					_hx_tmp1 = false;
            				}
            			}
            			else {
HXLINE( 378)				_hx_tmp1 = true;
            			}
HXDLIN( 378)			if (!(_hx_tmp1)) {
HXLINE( 383)				bool _hx_tmp1;
HXDLIN( 383)				if ((z > z1)) {
HXLINE( 383)					_hx_tmp1 = (z > z2);
            				}
            				else {
HXLINE( 383)					_hx_tmp1 = false;
            				}
HXDLIN( 383)				if (_hx_tmp1) {
HXLINE( 378)					_hx_tmp = (z > z3);
            				}
            				else {
HXLINE( 378)					_hx_tmp = false;
            				}
            			}
            			else {
HXLINE( 378)				_hx_tmp = true;
            			}
HXDLIN( 378)			if (!(_hx_tmp)) {
HXLINE( 386)				v0x = (x3 - x1);
HXLINE( 387)				v0y = (y3 - y1);
HXLINE( 388)				v0z = (z3 - z1);
HXLINE( 389)				v1x = (x2 - x1);
HXLINE( 390)				v1y = (y2 - y1);
HXLINE( 391)				v1z = (z2 - z1);
HXLINE( 392)				v2x = (x - x1);
HXLINE( 393)				v2y = (y - y1);
HXLINE( 394)				v2z = (z - z1);
HXLINE( 395)				dot00 = (((v0x * v0x) + (v0y * v0y)) + (v0z * v0z));
HXLINE( 396)				dot01 = (((v0x * v1x) + (v0y * v1y)) + (v0z * v1z));
HXLINE( 397)				dot02 = (((v0x * v2x) + (v0y * v2y)) + (v0z * v2z));
HXLINE( 398)				dot11 = (((v1x * v1x) + (v1y * v1y)) + (v1z * v1z));
HXLINE( 399)				dot12 = (((v1x * v2x) + (v1y * v2y)) + (v1z * v2z));
HXLINE( 400)				invDenom = (( (Float)(1) ) / ((dot00 * dot11) - (dot01 * dot01)));
HXLINE( 401)				s = (((dot11 * dot02) - (dot01 * dot12)) * invDenom);
HXLINE( 402)				t = (((dot00 * dot12) - (dot01 * dot02)) * invDenom);
HXLINE( 405)				bool _hx_tmp;
HXDLIN( 405)				bool _hx_tmp1;
HXDLIN( 405)				if ((s >= 0)) {
HXLINE( 405)					_hx_tmp1 = (t >= 0);
            				}
            				else {
HXLINE( 405)					_hx_tmp1 = false;
            				}
HXDLIN( 405)				if (_hx_tmp1) {
HXLINE( 405)					_hx_tmp = ((s + t) <= 1);
            				}
            				else {
HXLINE( 405)					_hx_tmp = false;
            				}
HXDLIN( 405)				if (_hx_tmp) {
HXLINE( 408)					 ::openfl::geom::Matrix3D _hx_tmp = ::away3d::core::base::IRenderable_obj::get_inverseSceneTransform(this->_hitRenderable);
HXDLIN( 408)					Float _hx_tmp1 = normals->get(i);
HXDLIN( 408)					Float _hx_tmp2 = normals->get((i + 1));
HXDLIN( 408)					this->getPrecisePosition(_hx_tmp,_hx_tmp1,_hx_tmp2,normals->get((i + 2)),x1,y1,z1);
HXLINE( 410)					v2x = (this->_localHitPosition->x - x1);
HXLINE( 411)					v2y = (this->_localHitPosition->y - y1);
HXLINE( 412)					v2z = (this->_localHitPosition->z - z1);
HXLINE( 414)					s0x = (x2 - x1);
HXLINE( 415)					s0y = (y2 - y1);
HXLINE( 416)					s0z = (z2 - z1);
HXLINE( 417)					s1x = (x3 - x1);
HXLINE( 418)					s1y = (y3 - y1);
HXLINE( 419)					s1z = (z3 - z1);
HXLINE( 420)					this->_localHitNormal->x = ((s0y * s1z) - (s0z * s1y));
HXLINE( 421)					this->_localHitNormal->y = ((s0z * s1x) - (s0x * s1z));
HXLINE( 422)					this->_localHitNormal->z = ((s0x * s1y) - (s0y * s1x));
HXLINE( 423)					nl = (( (Float)(1) ) / ::Math_obj::sqrt((((this->_localHitNormal->x * this->_localHitNormal->x) + (this->_localHitNormal->y * this->_localHitNormal->y)) + (this->_localHitNormal->z * this->_localHitNormal->z))));
HXLINE( 428)					 ::openfl::geom::Vector3D fh = this->_localHitNormal;
HXDLIN( 428)					fh->x = (fh->x * nl);
HXLINE( 429)					 ::openfl::geom::Vector3D fh1 = this->_localHitNormal;
HXDLIN( 429)					fh1->y = (fh1->y * nl);
HXLINE( 430)					 ::openfl::geom::Vector3D fh2 = this->_localHitNormal;
HXDLIN( 430)					fh2->z = (fh2->z * nl);
HXLINE( 432)					dot02 = (((v0x * v2x) + (v0y * v2y)) + (v0z * v2z));
HXLINE( 433)					dot12 = (((v1x * v2x) + (v1y * v2y)) + (v1z * v2z));
HXLINE( 434)					s = (((dot11 * dot02) - (dot01 * dot12)) * invDenom);
HXLINE( 435)					t = (((dot00 * dot12) - (dot01 * dot02)) * invDenom);
HXLINE( 437)					ui1 = (indices->get(i) << 1);
HXLINE( 438)					ui2 = (indices->get(j) << 1);
HXLINE( 439)					ui3 = (indices->get(k) << 1);
HXLINE( 441)					u = uvs->get(ui1);
HXLINE( 442)					v = uvs->get((ui1 + 1));
HXLINE( 443)					Float _hx_tmp3 = (u + (t * (uvs->get(ui2) - u)));
HXDLIN( 443)					Float _hx_tmp4 = (s * (uvs->get(ui3) - u));
HXDLIN( 443)					this->_hitUV->x = (_hx_tmp3 + _hx_tmp4);
HXLINE( 444)					Float _hx_tmp5 = (v + (t * (uvs->get((ui2 + 1)) - v)));
HXDLIN( 444)					Float _hx_tmp6 = (s * (uvs->get((ui3 + 1)) - v));
HXDLIN( 444)					this->_hitUV->y = (_hx_tmp5 + _hx_tmp6);
HXLINE( 446)					this->_faceIndex = i;
HXLINE( 447)					this->_subGeometryIndex = ::away3d::tools::utils::GeomUtil_obj::getMeshSubMeshIndex(::hx::TCast<  ::away3d::core::base::SubMesh >::cast(this->_hitRenderable));
HXLINE( 449)					return;
            				}
            			}
HXLINE( 453)			i = (i + 3);
HXLINE( 454)			j = (j + 3);
HXLINE( 455)			k = (k + 3);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderPicker_obj,getPreciseDetails,(void))

void ShaderPicker_obj::getPrecisePosition( ::openfl::geom::Matrix3D invSceneTransform,Float nx,Float ny,Float nz,Float px,Float py,Float pz){
            	HX_STACKFRAME(&_hx_pos_983f6e93f6db481a_472_getPrecisePosition)
HXLINE( 477)		 ::openfl::_Vector::FloatVector raw = ::away3d::core::math::Matrix3DUtils_obj::RAW_DATA_CONTAINER;
HXLINE( 478)		Float cx = this->_rayPos->x;
HXDLIN( 478)		Float cy = this->_rayPos->y;
HXDLIN( 478)		Float cz = this->_rayPos->z;
HXLINE( 475)		Float ox = this->_rayDir->x;
HXDLIN( 475)		Float oy = this->_rayDir->y;
HXDLIN( 475)		Float oz = this->_rayDir->z;
HXLINE( 486)		invSceneTransform->copyRawDataTo(raw,null(),null());
HXLINE( 487)		Float rx = (raw->get(0) * ox);
HXDLIN( 487)		Float rx1 = (rx + (raw->get(4) * oy));
HXLINE( 474)		Float rx2 = (rx1 + (raw->get(8) * oz));
HXLINE( 488)		Float ry = (raw->get(1) * ox);
HXDLIN( 488)		Float ry1 = (ry + (raw->get(5) * oy));
HXLINE( 474)		Float ry2 = (ry1 + (raw->get(9) * oz));
HXLINE( 489)		Float rz = (raw->get(2) * ox);
HXDLIN( 489)		Float rz1 = (rz + (raw->get(6) * oy));
HXLINE( 474)		Float rz2 = (rz1 + (raw->get(10) * oz));
HXLINE( 491)		Float ox1 = (raw->get(0) * cx);
HXDLIN( 491)		Float ox2 = (ox1 + (raw->get(4) * cy));
HXDLIN( 491)		Float ox3 = (ox2 + (raw->get(8) * cz));
HXDLIN( 491)		ox = (ox3 + raw->get(12));
HXLINE( 492)		Float oy1 = (raw->get(1) * cx);
HXDLIN( 492)		Float oy2 = (oy1 + (raw->get(5) * cy));
HXDLIN( 492)		Float oy3 = (oy2 + (raw->get(9) * cz));
HXDLIN( 492)		oy = (oy3 + raw->get(13));
HXLINE( 493)		Float oz1 = (raw->get(2) * cx);
HXDLIN( 493)		Float oz2 = (oz1 + (raw->get(6) * cy));
HXDLIN( 493)		Float oz3 = (oz2 + (raw->get(10) * cz));
HXDLIN( 493)		oz = (oz3 + raw->get(14));
HXLINE( 476)		Float t = (((((px - ox) * nx) + ((py - oy) * ny)) + ((pz - oz) * nz)) / (((rx2 * nx) + (ry2 * ny)) + (rz2 * nz)));
HXLINE( 497)		this->_localHitPosition->x = (ox + (rx2 * t));
HXLINE( 498)		this->_localHitPosition->y = (oy + (ry2 * t));
HXLINE( 499)		this->_localHitPosition->z = (oz + (rz2 * t));
            	}


HX_DEFINE_DYNAMIC_FUNC7(ShaderPicker_obj,getPrecisePosition,(void))

void ShaderPicker_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_983f6e93f6db481a_503_dispose)
HXLINE( 504)		this->_bitmapData->dispose();
HXLINE( 505)		if (::hx::IsNotNull( this->_triangleProgram3D )) {
HXLINE( 506)			this->_triangleProgram3D->dispose();
            		}
HXLINE( 507)		if (::hx::IsNotNull( this->_objectProgram3D )) {
HXLINE( 508)			this->_objectProgram3D->dispose();
            		}
HXLINE( 509)		this->_triangleProgram3D = null();
HXLINE( 510)		this->_objectProgram3D = null();
HXLINE( 511)		this->_bitmapData = null();
HXLINE( 512)		this->_hitRenderable = null();
HXLINE( 513)		this->_hitEntity = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderPicker_obj,dispose,(void))

 ::openfl::geom::Rectangle ShaderPicker_obj::MOUSE_SCISSOR_RECT;


::hx::ObjectPtr< ShaderPicker_obj > ShaderPicker_obj::__new() {
	::hx::ObjectPtr< ShaderPicker_obj > __this = new ShaderPicker_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ShaderPicker_obj > ShaderPicker_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ShaderPicker_obj *__this = (ShaderPicker_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShaderPicker_obj), true, "away3d.core.pick.ShaderPicker"));
	*(void **)__this = ShaderPicker_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ShaderPicker_obj::ShaderPicker_obj()
{
}

void ShaderPicker_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShaderPicker);
	HX_MARK_MEMBER_NAME(_stage3DProxy,"_stage3DProxy");
	HX_MARK_MEMBER_NAME(_context,"_context");
	HX_MARK_MEMBER_NAME(_onlyMouseEnabled,"_onlyMouseEnabled");
	HX_MARK_MEMBER_NAME(_objectProgram3D,"_objectProgram3D");
	HX_MARK_MEMBER_NAME(_triangleProgram3D,"_triangleProgram3D");
	HX_MARK_MEMBER_NAME(_bitmapData,"_bitmapData");
	HX_MARK_MEMBER_NAME(_viewportData,"_viewportData");
	HX_MARK_MEMBER_NAME(_boundOffsetScale,"_boundOffsetScale");
	HX_MARK_MEMBER_NAME(_id,"_id");
	HX_MARK_MEMBER_NAME(_interactives,"_interactives");
	HX_MARK_MEMBER_NAME(_interactiveId,"_interactiveId");
	HX_MARK_MEMBER_NAME(_hitColor,"_hitColor");
	HX_MARK_MEMBER_NAME(_projX,"_projX");
	HX_MARK_MEMBER_NAME(_projY,"_projY");
	HX_MARK_MEMBER_NAME(_hitRenderable,"_hitRenderable");
	HX_MARK_MEMBER_NAME(_hitEntity,"_hitEntity");
	HX_MARK_MEMBER_NAME(_localHitPosition,"_localHitPosition");
	HX_MARK_MEMBER_NAME(_hitUV,"_hitUV");
	HX_MARK_MEMBER_NAME(_faceIndex,"_faceIndex");
	HX_MARK_MEMBER_NAME(_subGeometryIndex,"_subGeometryIndex");
	HX_MARK_MEMBER_NAME(_localHitNormal,"_localHitNormal");
	HX_MARK_MEMBER_NAME(_rayPos,"_rayPos");
	HX_MARK_MEMBER_NAME(_rayDir,"_rayDir");
	HX_MARK_MEMBER_NAME(_potentialFound,"_potentialFound");
	HX_MARK_END_CLASS();
}

void ShaderPicker_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_stage3DProxy,"_stage3DProxy");
	HX_VISIT_MEMBER_NAME(_context,"_context");
	HX_VISIT_MEMBER_NAME(_onlyMouseEnabled,"_onlyMouseEnabled");
	HX_VISIT_MEMBER_NAME(_objectProgram3D,"_objectProgram3D");
	HX_VISIT_MEMBER_NAME(_triangleProgram3D,"_triangleProgram3D");
	HX_VISIT_MEMBER_NAME(_bitmapData,"_bitmapData");
	HX_VISIT_MEMBER_NAME(_viewportData,"_viewportData");
	HX_VISIT_MEMBER_NAME(_boundOffsetScale,"_boundOffsetScale");
	HX_VISIT_MEMBER_NAME(_id,"_id");
	HX_VISIT_MEMBER_NAME(_interactives,"_interactives");
	HX_VISIT_MEMBER_NAME(_interactiveId,"_interactiveId");
	HX_VISIT_MEMBER_NAME(_hitColor,"_hitColor");
	HX_VISIT_MEMBER_NAME(_projX,"_projX");
	HX_VISIT_MEMBER_NAME(_projY,"_projY");
	HX_VISIT_MEMBER_NAME(_hitRenderable,"_hitRenderable");
	HX_VISIT_MEMBER_NAME(_hitEntity,"_hitEntity");
	HX_VISIT_MEMBER_NAME(_localHitPosition,"_localHitPosition");
	HX_VISIT_MEMBER_NAME(_hitUV,"_hitUV");
	HX_VISIT_MEMBER_NAME(_faceIndex,"_faceIndex");
	HX_VISIT_MEMBER_NAME(_subGeometryIndex,"_subGeometryIndex");
	HX_VISIT_MEMBER_NAME(_localHitNormal,"_localHitNormal");
	HX_VISIT_MEMBER_NAME(_rayPos,"_rayPos");
	HX_VISIT_MEMBER_NAME(_rayDir,"_rayDir");
	HX_VISIT_MEMBER_NAME(_potentialFound,"_potentialFound");
}

::hx::Val ShaderPicker_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_id") ) { return ::hx::Val( _id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_projX") ) { return ::hx::Val( _projX ); }
		if (HX_FIELD_EQ(inName,"_projY") ) { return ::hx::Val( _projY ); }
		if (HX_FIELD_EQ(inName,"_hitUV") ) { return ::hx::Val( _hitUV ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_rayPos") ) { return ::hx::Val( _rayPos ); }
		if (HX_FIELD_EQ(inName,"_rayDir") ) { return ::hx::Val( _rayDir ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_context") ) { return ::hx::Val( _context ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_hitColor") ) { return ::hx::Val( _hitColor ); }
		if (HX_FIELD_EQ(inName,"updateRay") ) { return ::hx::Val( updateRay_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_hitEntity") ) { return ::hx::Val( _hitEntity ); }
		if (HX_FIELD_EQ(inName,"_faceIndex") ) { return ::hx::Val( _faceIndex ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_bitmapData") ) { return ::hx::Val( _bitmapData ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_stage3DProxy") ) { return ::hx::Val( _stage3DProxy ); }
		if (HX_FIELD_EQ(inName,"_viewportData") ) { return ::hx::Val( _viewportData ); }
		if (HX_FIELD_EQ(inName,"_interactives") ) { return ::hx::Val( _interactives ); }
		if (HX_FIELD_EQ(inName,"getHitDetails") ) { return ::hx::Val( getHitDetails_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_interactiveId") ) { return ::hx::Val( _interactiveId ); }
		if (HX_FIELD_EQ(inName,"_hitRenderable") ) { return ::hx::Val( _hitRenderable ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_localHitNormal") ) { return ::hx::Val( _localHitNormal ); }
		if (HX_FIELD_EQ(inName,"_potentialFound") ) { return ::hx::Val( _potentialFound ); }
		if (HX_FIELD_EQ(inName,"drawRenderables") ) { return ::hx::Val( drawRenderables_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onlyMouseEnabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_onlyMouseEnabled() ); }
		if (HX_FIELD_EQ(inName,"_objectProgram3D") ) { return ::hx::Val( _objectProgram3D ); }
		if (HX_FIELD_EQ(inName,"getViewCollision") ) { return ::hx::Val( getViewCollision_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_onlyMouseEnabled") ) { return ::hx::Val( _onlyMouseEnabled ); }
		if (HX_FIELD_EQ(inName,"_boundOffsetScale") ) { return ::hx::Val( _boundOffsetScale ); }
		if (HX_FIELD_EQ(inName,"_localHitPosition") ) { return ::hx::Val( _localHitPosition ); }
		if (HX_FIELD_EQ(inName,"_subGeometryIndex") ) { return ::hx::Val( _subGeometryIndex ); }
		if (HX_FIELD_EQ(inName,"getSceneCollision") ) { return ::hx::Val( getSceneCollision_dyn() ); }
		if (HX_FIELD_EQ(inName,"getPreciseDetails") ) { return ::hx::Val( getPreciseDetails_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_triangleProgram3D") ) { return ::hx::Val( _triangleProgram3D ); }
		if (HX_FIELD_EQ(inName,"getPrecisePosition") ) { return ::hx::Val( getPrecisePosition_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"initObjectProgram3D") ) { return ::hx::Val( initObjectProgram3D_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_onlyMouseEnabled") ) { return ::hx::Val( get_onlyMouseEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_onlyMouseEnabled") ) { return ::hx::Val( set_onlyMouseEnabled_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"initTriangleProgram3D") ) { return ::hx::Val( initTriangleProgram3D_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getApproximatePosition") ) { return ::hx::Val( getApproximatePosition_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ShaderPicker_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"MOUSE_SCISSOR_RECT") ) { outValue = ( MOUSE_SCISSOR_RECT ); return true; }
	}
	return false;
}

::hx::Val ShaderPicker_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_id") ) { _id=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_projX") ) { _projX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_projY") ) { _projY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_hitUV") ) { _hitUV=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_rayPos") ) { _rayPos=inValue.Cast<  ::openfl::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rayDir") ) { _rayDir=inValue.Cast<  ::openfl::geom::Vector3D >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_context") ) { _context=inValue.Cast<  ::openfl::display3D::Context3D >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_hitColor") ) { _hitColor=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_hitEntity") ) { _hitEntity=inValue.Cast<  ::away3d::entities::Entity >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_faceIndex") ) { _faceIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_bitmapData") ) { _bitmapData=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_stage3DProxy") ) { _stage3DProxy=inValue.Cast<  ::away3d::core::managers::Stage3DProxy >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_viewportData") ) { _viewportData=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_interactives") ) { _interactives=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_interactiveId") ) { _interactiveId=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_hitRenderable") ) { _hitRenderable=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_localHitNormal") ) { _localHitNormal=inValue.Cast<  ::openfl::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_potentialFound") ) { _potentialFound=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onlyMouseEnabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_onlyMouseEnabled(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"_objectProgram3D") ) { _objectProgram3D=inValue.Cast<  ::openfl::display3D::Program3D >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_onlyMouseEnabled") ) { _onlyMouseEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_boundOffsetScale") ) { _boundOffsetScale=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_localHitPosition") ) { _localHitPosition=inValue.Cast<  ::openfl::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_subGeometryIndex") ) { _subGeometryIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_triangleProgram3D") ) { _triangleProgram3D=inValue.Cast<  ::openfl::display3D::Program3D >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ShaderPicker_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"MOUSE_SCISSOR_RECT") ) { MOUSE_SCISSOR_RECT=ioValue.Cast<  ::openfl::geom::Rectangle >(); return true; }
	}
	return false;
}

void ShaderPicker_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("onlyMouseEnabled",68,98,03,a3));
	outFields->push(HX_("_stage3DProxy",de,ab,3d,f1));
	outFields->push(HX_("_context",70,ef,2f,53));
	outFields->push(HX_("_onlyMouseEnabled",c7,86,7e,3b));
	outFields->push(HX_("_objectProgram3D",f7,73,e6,52));
	outFields->push(HX_("_triangleProgram3D",0e,cd,6c,e2));
	outFields->push(HX_("_bitmapData",d8,82,4a,06));
	outFields->push(HX_("_viewportData",8f,8c,c5,91));
	outFields->push(HX_("_boundOffsetScale",b8,b4,3a,08));
	outFields->push(HX_("_id",fa,71,48,00));
	outFields->push(HX_("_interactives",30,7b,2b,74));
	outFields->push(HX_("_interactiveId",9e,2a,e0,31));
	outFields->push(HX_("_hitColor",6f,c5,51,d1));
	outFields->push(HX_("_projX",5c,29,77,c4));
	outFields->push(HX_("_projY",5d,29,77,c4));
	outFields->push(HX_("_hitRenderable",64,bc,1b,da));
	outFields->push(HX_("_hitEntity",97,49,d0,94));
	outFields->push(HX_("_localHitPosition",d0,dc,c8,04));
	outFields->push(HX_("_hitUV",b5,52,53,23));
	outFields->push(HX_("_faceIndex",f6,f8,09,dc));
	outFields->push(HX_("_subGeometryIndex",bf,a7,9f,14));
	outFields->push(HX_("_localHitNormal",8e,86,fc,0f));
	outFields->push(HX_("_rayPos",69,5f,3c,2d));
	outFields->push(HX_("_rayDir",22,3f,33,2d));
	outFields->push(HX_("_potentialFound",23,78,2e,89));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ShaderPicker_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::away3d::core::managers::Stage3DProxy */ ,(int)offsetof(ShaderPicker_obj,_stage3DProxy),HX_("_stage3DProxy",de,ab,3d,f1)},
	{::hx::fsObject /*  ::openfl::display3D::Context3D */ ,(int)offsetof(ShaderPicker_obj,_context),HX_("_context",70,ef,2f,53)},
	{::hx::fsBool,(int)offsetof(ShaderPicker_obj,_onlyMouseEnabled),HX_("_onlyMouseEnabled",c7,86,7e,3b)},
	{::hx::fsObject /*  ::openfl::display3D::Program3D */ ,(int)offsetof(ShaderPicker_obj,_objectProgram3D),HX_("_objectProgram3D",f7,73,e6,52)},
	{::hx::fsObject /*  ::openfl::display3D::Program3D */ ,(int)offsetof(ShaderPicker_obj,_triangleProgram3D),HX_("_triangleProgram3D",0e,cd,6c,e2)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(ShaderPicker_obj,_bitmapData),HX_("_bitmapData",d8,82,4a,06)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(ShaderPicker_obj,_viewportData),HX_("_viewportData",8f,8c,c5,91)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(ShaderPicker_obj,_boundOffsetScale),HX_("_boundOffsetScale",b8,b4,3a,08)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(ShaderPicker_obj,_id),HX_("_id",fa,71,48,00)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(ShaderPicker_obj,_interactives),HX_("_interactives",30,7b,2b,74)},
	{::hx::fsInt,(int)offsetof(ShaderPicker_obj,_interactiveId),HX_("_interactiveId",9e,2a,e0,31)},
	{::hx::fsInt,(int)offsetof(ShaderPicker_obj,_hitColor),HX_("_hitColor",6f,c5,51,d1)},
	{::hx::fsFloat,(int)offsetof(ShaderPicker_obj,_projX),HX_("_projX",5c,29,77,c4)},
	{::hx::fsFloat,(int)offsetof(ShaderPicker_obj,_projY),HX_("_projY",5d,29,77,c4)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(ShaderPicker_obj,_hitRenderable),HX_("_hitRenderable",64,bc,1b,da)},
	{::hx::fsObject /*  ::away3d::entities::Entity */ ,(int)offsetof(ShaderPicker_obj,_hitEntity),HX_("_hitEntity",97,49,d0,94)},
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(int)offsetof(ShaderPicker_obj,_localHitPosition),HX_("_localHitPosition",d0,dc,c8,04)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(ShaderPicker_obj,_hitUV),HX_("_hitUV",b5,52,53,23)},
	{::hx::fsInt,(int)offsetof(ShaderPicker_obj,_faceIndex),HX_("_faceIndex",f6,f8,09,dc)},
	{::hx::fsInt,(int)offsetof(ShaderPicker_obj,_subGeometryIndex),HX_("_subGeometryIndex",bf,a7,9f,14)},
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(int)offsetof(ShaderPicker_obj,_localHitNormal),HX_("_localHitNormal",8e,86,fc,0f)},
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(int)offsetof(ShaderPicker_obj,_rayPos),HX_("_rayPos",69,5f,3c,2d)},
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(int)offsetof(ShaderPicker_obj,_rayDir),HX_("_rayDir",22,3f,33,2d)},
	{::hx::fsBool,(int)offsetof(ShaderPicker_obj,_potentialFound),HX_("_potentialFound",23,78,2e,89)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ShaderPicker_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(void *) &ShaderPicker_obj::MOUSE_SCISSOR_RECT,HX_("MOUSE_SCISSOR_RECT",41,69,04,15)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ShaderPicker_obj_sMemberFields[] = {
	HX_("_stage3DProxy",de,ab,3d,f1),
	HX_("_context",70,ef,2f,53),
	HX_("_onlyMouseEnabled",c7,86,7e,3b),
	HX_("_objectProgram3D",f7,73,e6,52),
	HX_("_triangleProgram3D",0e,cd,6c,e2),
	HX_("_bitmapData",d8,82,4a,06),
	HX_("_viewportData",8f,8c,c5,91),
	HX_("_boundOffsetScale",b8,b4,3a,08),
	HX_("_id",fa,71,48,00),
	HX_("_interactives",30,7b,2b,74),
	HX_("_interactiveId",9e,2a,e0,31),
	HX_("_hitColor",6f,c5,51,d1),
	HX_("_projX",5c,29,77,c4),
	HX_("_projY",5d,29,77,c4),
	HX_("_hitRenderable",64,bc,1b,da),
	HX_("_hitEntity",97,49,d0,94),
	HX_("_localHitPosition",d0,dc,c8,04),
	HX_("_hitUV",b5,52,53,23),
	HX_("_faceIndex",f6,f8,09,dc),
	HX_("_subGeometryIndex",bf,a7,9f,14),
	HX_("_localHitNormal",8e,86,fc,0f),
	HX_("_rayPos",69,5f,3c,2d),
	HX_("_rayDir",22,3f,33,2d),
	HX_("_potentialFound",23,78,2e,89),
	HX_("get_onlyMouseEnabled",71,fd,6d,c1),
	HX_("set_onlyMouseEnabled",e5,b4,25,8e),
	HX_("getViewCollision",d7,0a,ca,3f),
	HX_("getSceneCollision",bc,d4,47,8a),
	HX_("draw",04,2c,70,42),
	HX_("drawRenderables",df,d8,12,19),
	HX_("updateRay",61,b3,e3,82),
	HX_("initObjectProgram3D",46,f0,b4,b9),
	HX_("initTriangleProgram3D",1d,3b,0e,77),
	HX_("getHitDetails",e5,da,3a,63),
	HX_("getApproximatePosition",27,0a,a1,14),
	HX_("getPreciseDetails",dd,26,16,1f),
	HX_("getPrecisePosition",2e,2e,9c,9e),
	HX_("dispose",9f,80,4c,bb),
	::String(null()) };

static void ShaderPicker_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShaderPicker_obj::MOUSE_SCISSOR_RECT,"MOUSE_SCISSOR_RECT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ShaderPicker_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShaderPicker_obj::MOUSE_SCISSOR_RECT,"MOUSE_SCISSOR_RECT");
};

#endif

::hx::Class ShaderPicker_obj::__mClass;

static ::String ShaderPicker_obj_sStaticFields[] = {
	HX_("MOUSE_SCISSOR_RECT",41,69,04,15),
	::String(null())
};

void ShaderPicker_obj::__register()
{
	ShaderPicker_obj _hx_dummy;
	ShaderPicker_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.pick.ShaderPicker",60,b0,ce,8a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ShaderPicker_obj::__GetStatic;
	__mClass->mSetStaticField = &ShaderPicker_obj::__SetStatic;
	__mClass->mMarkFunc = ShaderPicker_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ShaderPicker_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ShaderPicker_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ShaderPicker_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ShaderPicker_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShaderPicker_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShaderPicker_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ShaderPicker_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_983f6e93f6db481a_62_boot)
HXDLIN(  62)		MOUSE_SCISSOR_RECT =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,1,1);
            	}
}

} // end namespace away3d
} // end namespace core
} // end namespace pick
