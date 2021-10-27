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
#ifndef INCLUDED_away3d_core_base_IMaterialOwner
#include <away3d/core/base/IMaterialOwner.h>
#endif
#ifndef INCLUDED_away3d_core_base_IRenderable
#include <away3d/core/base/IRenderable.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
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
#ifndef INCLUDED_away3d_core_render_DefaultRenderer
#include <away3d/core/render/DefaultRenderer.h>
#endif
#ifndef INCLUDED_away3d_core_render_DepthRenderer
#include <away3d/core/render/DepthRenderer.h>
#endif
#ifndef INCLUDED_away3d_core_render_RendererBase
#include <away3d/core/render/RendererBase.h>
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
#ifndef INCLUDED_away3d_lights_DirectionalLight
#include <away3d/lights/DirectionalLight.h>
#endif
#ifndef INCLUDED_away3d_lights_LightBase
#include <away3d/lights/LightBase.h>
#endif
#ifndef INCLUDED_away3d_lights_PointLight
#include <away3d/lights/PointLight.h>
#endif
#ifndef INCLUDED_away3d_lights_shadowmaps_ShadowMapperBase
#include <away3d/lights/shadowmaps/ShadowMapperBase.h>
#endif
#ifndef INCLUDED_away3d_materials_MaterialBase
#include <away3d/materials/MaterialBase.h>
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
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b674725a2580bd1f_27_new,"away3d.core.render.DefaultRenderer","new",0x61790cde,"away3d.core.render.DefaultRenderer.new","away3d/core/render/DefaultRenderer.hx",27,0x1c412433)
HX_LOCAL_STACK_FRAME(_hx_pos_b674725a2580bd1f_52_set_stage3DProxy,"away3d.core.render.DefaultRenderer","set_stage3DProxy",0xe6443fbe,"away3d.core.render.DefaultRenderer.set_stage3DProxy","away3d/core/render/DefaultRenderer.hx",52,0x1c412433)
HX_LOCAL_STACK_FRAME(_hx_pos_b674725a2580bd1f_59_executeRender,"away3d.core.render.DefaultRenderer","executeRender",0x30210569,"away3d.core.render.DefaultRenderer.executeRender","away3d/core/render/DefaultRenderer.hx",59,0x1c412433)
HX_LOCAL_STACK_FRAME(_hx_pos_b674725a2580bd1f_72_updateLights,"away3d.core.render.DefaultRenderer","updateLights",0xd2c01588,"away3d.core.render.DefaultRenderer.updateLights","away3d/core/render/DefaultRenderer.hx",72,0x1c412433)
HX_LOCAL_STACK_FRAME(_hx_pos_b674725a2580bd1f_100_draw,"away3d.core.render.DefaultRenderer","draw",0xe1dfddc6,"away3d.core.render.DefaultRenderer.draw","away3d/core/render/DefaultRenderer.hx",100,0x1c412433)
HX_LOCAL_STACK_FRAME(_hx_pos_b674725a2580bd1f_131_drawSkyBox,"away3d.core.render.DefaultRenderer","drawSkyBox",0x5fe9c210,"away3d.core.render.DefaultRenderer.drawSkyBox","away3d/core/render/DefaultRenderer.hx",131,0x1c412433)
HX_LOCAL_STACK_FRAME(_hx_pos_b674725a2580bd1f_144_updateSkyBoxProjection,"away3d.core.render.DefaultRenderer","updateSkyBoxProjection",0x60726b44,"away3d.core.render.DefaultRenderer.updateSkyBoxProjection","away3d/core/render/DefaultRenderer.hx",144,0x1c412433)
HX_LOCAL_STACK_FRAME(_hx_pos_b674725a2580bd1f_201_drawRenderables,"away3d.core.render.DefaultRenderer","drawRenderables",0x8fdfda5d,"away3d.core.render.DefaultRenderer.drawRenderables","away3d/core/render/DefaultRenderer.hx",201,0x1c412433)
HX_LOCAL_STACK_FRAME(_hx_pos_b674725a2580bd1f_240_dispose,"away3d.core.render.DefaultRenderer","dispose",0xaa3cd41d,"away3d.core.render.DefaultRenderer.dispose","away3d/core/render/DefaultRenderer.hx",240,0x1c412433)
HX_LOCAL_STACK_FRAME(_hx_pos_b674725a2580bd1f_29_boot,"away3d.core.render.DefaultRenderer","boot",0xe08b35f4,"away3d.core.render.DefaultRenderer.boot","away3d/core/render/DefaultRenderer.hx",29,0x1c412433)
HX_LOCAL_STACK_FRAME(_hx_pos_b674725a2580bd1f_30_boot,"away3d.core.render.DefaultRenderer","boot",0xe08b35f4,"away3d.core.render.DefaultRenderer.boot","away3d/core/render/DefaultRenderer.hx",30,0x1c412433)
HX_LOCAL_STACK_FRAME(_hx_pos_b674725a2580bd1f_31_boot,"away3d.core.render.DefaultRenderer","boot",0xe08b35f4,"away3d.core.render.DefaultRenderer.boot","away3d/core/render/DefaultRenderer.hx",31,0x1c412433)
namespace away3d{
namespace core{
namespace render{

void DefaultRenderer_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_b674725a2580bd1f_27_new)
HXLINE(  37)		this->_skyboxTempVector =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  36)		this->_tempSkyboxMatrix =  ::openfl::geom::Matrix3D_obj::__alloc( HX_CTX ,null());
HXLINE(  35)		this->_skyboxProjection =  ::openfl::geom::Matrix3D_obj::__alloc( HX_CTX ,null());
HXLINE(  46)		super::__construct(null());
HXLINE(  47)		this->_depthRenderer =  ::away3d::core::render::DepthRenderer_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  48)		this->_distanceRenderer =  ::away3d::core::render::DepthRenderer_obj::__alloc( HX_CTX ,false,true);
            	}

Dynamic DefaultRenderer_obj::__CreateEmpty() { return new DefaultRenderer_obj; }

void *DefaultRenderer_obj::_hx_vtable = 0;

Dynamic DefaultRenderer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DefaultRenderer_obj > _hx_result = new DefaultRenderer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DefaultRenderer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0639ed90) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0639ed90;
	} else {
		return inClassId==(int)0x73f2cdd0;
	}
}

 ::away3d::core::managers::Stage3DProxy DefaultRenderer_obj::set_stage3DProxy( ::away3d::core::managers::Stage3DProxy value){
            	HX_STACKFRAME(&_hx_pos_b674725a2580bd1f_52_set_stage3DProxy)
HXLINE(  53)		this->super::set_stage3DProxy(value);
HXLINE(  54)		 ::away3d::core::render::DepthRenderer _hx_tmp = this->_distanceRenderer;
HXDLIN(  54)		_hx_tmp->set_stage3DProxy(this->_depthRenderer->set_stage3DProxy(value));
HXLINE(  55)		return value;
            	}


void DefaultRenderer_obj::executeRender( ::away3d::core::traverse::EntityCollector entityCollector, ::openfl::display3D::textures::TextureBase target, ::openfl::geom::Rectangle scissorRect,::hx::Null< int >  __o_surfaceSelector){
            		int surfaceSelector = __o_surfaceSelector.Default(0);
            	HX_STACKFRAME(&_hx_pos_b674725a2580bd1f_59_executeRender)
HXLINE(  60)		this->updateLights(entityCollector);
HXLINE(  63)		if (::hx::IsNotNull( target )) {
HXLINE(  64)			 ::away3d::core::data::RenderableListItem _hx_tmp = entityCollector->get_opaqueRenderableHead();
HXDLIN(  64)			this->drawRenderables(_hx_tmp,entityCollector,::away3d::core::render::DefaultRenderer_obj::RTT_PASSES);
HXLINE(  65)			 ::away3d::core::data::RenderableListItem _hx_tmp1 = entityCollector->get_blendedRenderableHead();
HXDLIN(  65)			this->drawRenderables(_hx_tmp1,entityCollector,::away3d::core::render::DefaultRenderer_obj::RTT_PASSES);
            		}
HXLINE(  68)		this->super::executeRender(entityCollector,target,scissorRect,surfaceSelector);
            	}


void DefaultRenderer_obj::updateLights( ::away3d::core::traverse::EntityCollector entityCollector){
            	HX_STACKFRAME(&_hx_pos_b674725a2580bd1f_72_updateLights)
HXLINE(  73)		 ::openfl::_Vector::ObjectVector dirLights = entityCollector->get_directionalLights();
HXLINE(  74)		 ::openfl::_Vector::ObjectVector pointLights = entityCollector->get_pointLights();
HXLINE(  75)		int i;
HXLINE(  76)		 ::away3d::lights::LightBase light;
HXLINE(  77)		 ::away3d::lights::shadowmaps::ShadowMapperBase shadowMapper;
HXLINE(  75)		int len = dirLights->get_length();
HXLINE(  80)		{
HXLINE(  80)			int _g = 0;
HXDLIN(  80)			int _g1 = len;
HXDLIN(  80)			while((_g < _g1)){
HXLINE(  80)				_g = (_g + 1);
HXDLIN(  80)				int i = (_g - 1);
HXLINE(  81)				light = dirLights->get(i).StaticCast<  ::away3d::lights::DirectionalLight >();
HXLINE(  82)				shadowMapper = light->get_shadowMapper();
HXLINE(  83)				bool _hx_tmp;
HXDLIN(  83)				if (light->get_castsShadows()) {
HXLINE(  83)					if (!(shadowMapper->get_autoUpdateShadows())) {
HXLINE(  83)						_hx_tmp = shadowMapper->_shadowsInvalid;
            					}
            					else {
HXLINE(  83)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE(  83)					_hx_tmp = false;
            				}
HXDLIN(  83)				if (_hx_tmp) {
HXLINE(  84)					shadowMapper->renderDepthMap(this->_stage3DProxy,entityCollector,this->_depthRenderer);
            				}
            			}
            		}
HXLINE(  87)		len = pointLights->get_length();
HXLINE(  88)		{
HXLINE(  88)			int _g2 = 0;
HXDLIN(  88)			int _g3 = len;
HXDLIN(  88)			while((_g2 < _g3)){
HXLINE(  88)				_g2 = (_g2 + 1);
HXDLIN(  88)				int i = (_g2 - 1);
HXLINE(  89)				light = pointLights->get(i).StaticCast<  ::away3d::lights::PointLight >();
HXLINE(  90)				shadowMapper = light->get_shadowMapper();
HXLINE(  91)				bool _hx_tmp;
HXDLIN(  91)				if (light->get_castsShadows()) {
HXLINE(  91)					if (!(shadowMapper->get_autoUpdateShadows())) {
HXLINE(  91)						_hx_tmp = shadowMapper->_shadowsInvalid;
            					}
            					else {
HXLINE(  91)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE(  91)					_hx_tmp = false;
            				}
HXDLIN(  91)				if (_hx_tmp) {
HXLINE(  92)					shadowMapper->renderDepthMap(this->_stage3DProxy,entityCollector,this->_distanceRenderer);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultRenderer_obj,updateLights,(void))

void DefaultRenderer_obj::draw( ::away3d::core::traverse::EntityCollector entityCollector, ::openfl::display3D::textures::TextureBase target){
            	HX_STACKFRAME(&_hx_pos_b674725a2580bd1f_100_draw)
HXLINE( 101)		this->_context->setBlendFactors(2,9);
HXLINE( 103)		if (::hx::IsNotNull( entityCollector->get_skyBox() )) {
HXLINE( 104)			if (::hx::IsNotNull( this->_activeMaterial )) {
HXLINE( 105)				this->_activeMaterial->deactivate(this->_stage3DProxy);
            			}
HXLINE( 106)			this->_activeMaterial = null();
HXLINE( 108)			this->_context->setDepthTest(false,0);
HXLINE( 109)			this->drawSkyBox(entityCollector);
            		}
HXLINE( 112)		this->_context->setDepthTest(true,5);
HXLINE( 114)		int which;
HXDLIN( 114)		if (::hx::IsNotNull( target )) {
HXLINE( 114)			which = ::away3d::core::render::DefaultRenderer_obj::SCREEN_PASSES;
            		}
            		else {
HXLINE( 114)			which = ::away3d::core::render::DefaultRenderer_obj::ALL_PASSES;
            		}
HXLINE( 115)		this->drawRenderables(entityCollector->get_opaqueRenderableHead(),entityCollector,which);
HXLINE( 116)		this->drawRenderables(entityCollector->get_blendedRenderableHead(),entityCollector,which);
HXLINE( 118)		this->_context->setDepthTest(false,5);
HXLINE( 120)		if (::hx::IsNotNull( this->_activeMaterial )) {
HXLINE( 121)			this->_activeMaterial->deactivate(this->_stage3DProxy);
            		}
HXLINE( 123)		this->_activeMaterial = null();
            	}


void DefaultRenderer_obj::drawSkyBox( ::away3d::core::traverse::EntityCollector entityCollector){
            	HX_STACKFRAME(&_hx_pos_b674725a2580bd1f_131_drawSkyBox)
HXLINE( 132)		::Dynamic skyBox = entityCollector->get_skyBox();
HXLINE( 133)		 ::away3d::materials::MaterialBase material = ::away3d::core::base::IMaterialOwner_obj::get_material(skyBox);
HXLINE( 134)		 ::away3d::cameras::Camera3D camera = entityCollector->get_camera();
HXLINE( 136)		this->updateSkyBoxProjection(camera);
HXLINE( 138)		material->activatePass(0,this->_stage3DProxy,camera);
HXLINE( 139)		material->renderPass(0,skyBox,this->_stage3DProxy,entityCollector,this->_skyboxProjection);
HXLINE( 140)		material->deactivatePass(0,this->_stage3DProxy);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultRenderer_obj,drawSkyBox,(void))

void DefaultRenderer_obj::updateSkyBoxProjection( ::away3d::cameras::Camera3D camera){
            	HX_STACKFRAME(&_hx_pos_b674725a2580bd1f_144_updateSkyBoxProjection)
HXLINE( 145)		this->_skyboxProjection->copyFrom(this->_rttViewProjectionMatrix);
HXLINE( 146)		this->_skyboxProjection->copyRowTo(2,this->_skyboxTempVector);
HXLINE( 147)		 ::openfl::geom::Vector3D camPos = camera->get_scenePosition();
HXLINE( 148)		Float cx = this->_skyboxTempVector->x;
HXLINE( 149)		Float cy = this->_skyboxTempVector->y;
HXLINE( 150)		Float cz = this->_skyboxTempVector->z;
HXLINE( 151)		Float length = ::Math_obj::sqrt((((cx * cx) + (cy * cy)) + (cz * cz)));
HXLINE( 153)		this->_skyboxTempVector->x = ( (Float)(0) );
HXLINE( 154)		this->_skyboxTempVector->y = ( (Float)(0) );
HXLINE( 155)		this->_skyboxTempVector->z = ( (Float)(0) );
HXLINE( 156)		this->_skyboxTempVector->w = ( (Float)(1) );
HXLINE( 157)		 ::openfl::geom::Matrix3D _hx_tmp = this->_tempSkyboxMatrix;
HXDLIN( 157)		_hx_tmp->copyFrom(camera->get_sceneTransform());
HXLINE( 158)		this->_tempSkyboxMatrix->copyColumnFrom(3,this->_skyboxTempVector);
HXLINE( 160)		this->_skyboxTempVector->x = ( (Float)(0) );
HXLINE( 161)		this->_skyboxTempVector->y = ( (Float)(0) );
HXLINE( 162)		this->_skyboxTempVector->z = ( (Float)(1) );
HXLINE( 163)		this->_skyboxTempVector->w = ( (Float)(0) );
HXLINE( 165)		::away3d::core::math::Matrix3DUtils_obj::transformVector(this->_tempSkyboxMatrix,this->_skyboxTempVector,this->_skyboxTempVector);
HXLINE( 166)		this->_skyboxTempVector->normalize();
HXLINE( 168)		Float angle = ::Math_obj::acos((((this->_skyboxTempVector->x * (cx / length)) + (this->_skyboxTempVector->y * (cy / length))) + (this->_skyboxTempVector->z * (cz / length))));
HXLINE( 169)		if ((::Math_obj::abs(angle) > ((Float)0.000001))) {
HXLINE( 170)			return;
            		}
HXLINE( 173)		Float cw = -(((((cx * camPos->x) + (cy * camPos->y)) + (cz * camPos->z)) + length));
HXLINE( 174)		Float signX;
HXDLIN( 174)		if ((cx >= 0)) {
HXLINE( 174)			signX = ( (Float)(1) );
            		}
            		else {
HXLINE( 174)			signX = ( (Float)(-1) );
            		}
HXLINE( 175)		Float signY;
HXDLIN( 175)		if ((cy >= 0)) {
HXLINE( 175)			signY = ( (Float)(1) );
            		}
            		else {
HXLINE( 175)			signY = ( (Float)(-1) );
            		}
HXLINE( 177)		 ::openfl::geom::Vector3D p = this->_skyboxTempVector;
HXLINE( 178)		p->x = signX;
HXLINE( 179)		p->y = signY;
HXLINE( 180)		p->z = ( (Float)(1) );
HXLINE( 181)		p->w = ( (Float)(1) );
HXLINE( 182)		this->_tempSkyboxMatrix->copyFrom(this->_skyboxProjection);
HXLINE( 183)		this->_tempSkyboxMatrix->invert();
HXLINE( 184)		 ::openfl::geom::Vector3D q = ::away3d::core::math::Matrix3DUtils_obj::transformVector(this->_tempSkyboxMatrix,p,::away3d::core::math::Matrix3DUtils_obj::CALCULATION_VECTOR3D);
HXLINE( 185)		this->_skyboxProjection->copyRowTo(3,p);
HXLINE( 186)		Float a = (((((q->x * p->x) + (q->y * p->y)) + (q->z * p->z)) + (q->w * p->w)) / ((((cx * q->x) + (cy * q->y)) + (cz * q->z)) + (cw * q->w)));
HXLINE( 187)		this->_skyboxTempVector->x = (cx * a);
HXLINE( 188)		this->_skyboxTempVector->y = (cy * a);
HXLINE( 189)		this->_skyboxTempVector->z = (cz * a);
HXLINE( 190)		this->_skyboxTempVector->w = (cw * a);
HXLINE( 192)		this->_skyboxProjection->copyRowFrom(2,this->_skyboxTempVector);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultRenderer_obj,updateSkyBoxProjection,(void))

void DefaultRenderer_obj::drawRenderables( ::away3d::core::data::RenderableListItem item, ::away3d::core::traverse::EntityCollector entityCollector,int which){
            	HX_STACKFRAME(&_hx_pos_b674725a2580bd1f_201_drawRenderables)
HXLINE( 202)		int numPasses;
HXLINE( 203)		int j;
HXLINE( 204)		 ::away3d::cameras::Camera3D camera = entityCollector->get_camera();
HXLINE( 205)		 ::away3d::core::data::RenderableListItem item2;
HXLINE( 207)		while(::hx::IsNotNull( item )){
HXLINE( 208)			this->_activeMaterial = ::away3d::core::base::IMaterialOwner_obj::get_material(item->renderable);
HXLINE( 209)			this->_activeMaterial->updateMaterial(this->_context);
HXLINE( 211)			numPasses = this->_activeMaterial->get_numPasses();
HXLINE( 212)			j = 0;
HXLINE( 214)			while(true){
HXLINE( 215)				item2 = item;
HXLINE( 217)				int rttMask;
HXDLIN( 217)				if (this->_activeMaterial->passRendersToTexture(j)) {
HXLINE( 217)					rttMask = 1;
            				}
            				else {
HXLINE( 217)					rttMask = 2;
            				}
HXLINE( 219)				if (((rttMask & which) != 0)) {
HXLINE( 220)					this->_activeMaterial->activatePass(j,this->_stage3DProxy,camera);
HXLINE( 221)					while(true){
HXLINE( 222)						this->_activeMaterial->renderPass(j,item2->renderable,this->_stage3DProxy,entityCollector,this->_rttViewProjectionMatrix);
HXLINE( 223)						item2 = item2->next;
HXLINE( 224)						bool _hx_tmp;
HXDLIN( 224)						if (::hx::IsNotNull( item2 )) {
HXLINE( 224)							 ::away3d::materials::MaterialBase _hx_tmp1 = ::away3d::core::base::IMaterialOwner_obj::get_material(item2->renderable);
HXDLIN( 224)							_hx_tmp = ::hx::IsInstanceEq( _hx_tmp1,this->_activeMaterial );
            						}
            						else {
HXLINE( 224)							_hx_tmp = false;
            						}
HXLINE( 221)						if (!(_hx_tmp)) {
HXLINE( 221)							goto _hx_goto_11;
            						}
            					}
            					_hx_goto_11:;
HXLINE( 225)					this->_activeMaterial->deactivatePass(j,this->_stage3DProxy);
            				}
            				else {
HXLINE( 227)					while(true){
HXLINE( 228)						item2 = item2->next;
HXLINE( 229)						bool _hx_tmp;
HXDLIN( 229)						if (::hx::IsNotNull( item2 )) {
HXLINE( 229)							 ::away3d::materials::MaterialBase _hx_tmp1 = ::away3d::core::base::IMaterialOwner_obj::get_material(item2->renderable);
HXDLIN( 229)							_hx_tmp = ::hx::IsInstanceEq( _hx_tmp1,this->_activeMaterial );
            						}
            						else {
HXLINE( 229)							_hx_tmp = false;
            						}
HXLINE( 227)						if (!(_hx_tmp)) {
HXLINE( 227)							goto _hx_goto_12;
            						}
            					}
            					_hx_goto_12:;
            				}
HXLINE( 232)				j = (j + 1);
HXLINE( 214)				if (!((j < numPasses))) {
HXLINE( 214)					goto _hx_goto_10;
            				}
            			}
            			_hx_goto_10:;
HXLINE( 234)			item = item2;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(DefaultRenderer_obj,drawRenderables,(void))

void DefaultRenderer_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_b674725a2580bd1f_240_dispose)
HXLINE( 241)		this->super::dispose();
HXLINE( 242)		this->_depthRenderer->dispose();
HXLINE( 243)		this->_distanceRenderer->dispose();
HXLINE( 244)		this->_depthRenderer = null();
HXLINE( 245)		this->_distanceRenderer = null();
            	}


int DefaultRenderer_obj::RTT_PASSES;

int DefaultRenderer_obj::SCREEN_PASSES;

int DefaultRenderer_obj::ALL_PASSES;


::hx::ObjectPtr< DefaultRenderer_obj > DefaultRenderer_obj::__new() {
	::hx::ObjectPtr< DefaultRenderer_obj > __this = new DefaultRenderer_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DefaultRenderer_obj > DefaultRenderer_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DefaultRenderer_obj *__this = (DefaultRenderer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DefaultRenderer_obj), true, "away3d.core.render.DefaultRenderer"));
	*(void **)__this = DefaultRenderer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DefaultRenderer_obj::DefaultRenderer_obj()
{
}

void DefaultRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DefaultRenderer);
	HX_MARK_MEMBER_NAME(_activeMaterial,"_activeMaterial");
	HX_MARK_MEMBER_NAME(_distanceRenderer,"_distanceRenderer");
	HX_MARK_MEMBER_NAME(_depthRenderer,"_depthRenderer");
	HX_MARK_MEMBER_NAME(_skyboxProjection,"_skyboxProjection");
	HX_MARK_MEMBER_NAME(_tempSkyboxMatrix,"_tempSkyboxMatrix");
	HX_MARK_MEMBER_NAME(_skyboxTempVector,"_skyboxTempVector");
	 ::away3d::core::render::RendererBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DefaultRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_activeMaterial,"_activeMaterial");
	HX_VISIT_MEMBER_NAME(_distanceRenderer,"_distanceRenderer");
	HX_VISIT_MEMBER_NAME(_depthRenderer,"_depthRenderer");
	HX_VISIT_MEMBER_NAME(_skyboxProjection,"_skyboxProjection");
	HX_VISIT_MEMBER_NAME(_tempSkyboxMatrix,"_tempSkyboxMatrix");
	HX_VISIT_MEMBER_NAME(_skyboxTempVector,"_skyboxTempVector");
	 ::away3d::core::render::RendererBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DefaultRenderer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"drawSkyBox") ) { return ::hx::Val( drawSkyBox_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateLights") ) { return ::hx::Val( updateLights_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"executeRender") ) { return ::hx::Val( executeRender_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_depthRenderer") ) { return ::hx::Val( _depthRenderer ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_activeMaterial") ) { return ::hx::Val( _activeMaterial ); }
		if (HX_FIELD_EQ(inName,"drawRenderables") ) { return ::hx::Val( drawRenderables_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_stage3DProxy") ) { return ::hx::Val( set_stage3DProxy_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_distanceRenderer") ) { return ::hx::Val( _distanceRenderer ); }
		if (HX_FIELD_EQ(inName,"_skyboxProjection") ) { return ::hx::Val( _skyboxProjection ); }
		if (HX_FIELD_EQ(inName,"_tempSkyboxMatrix") ) { return ::hx::Val( _tempSkyboxMatrix ); }
		if (HX_FIELD_EQ(inName,"_skyboxTempVector") ) { return ::hx::Val( _skyboxTempVector ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"updateSkyBoxProjection") ) { return ::hx::Val( updateSkyBoxProjection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool DefaultRenderer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"RTT_PASSES") ) { outValue = ( RTT_PASSES ); return true; }
		if (HX_FIELD_EQ(inName,"ALL_PASSES") ) { outValue = ( ALL_PASSES ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SCREEN_PASSES") ) { outValue = ( SCREEN_PASSES ); return true; }
	}
	return false;
}

::hx::Val DefaultRenderer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"_depthRenderer") ) { _depthRenderer=inValue.Cast<  ::away3d::core::render::DepthRenderer >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_activeMaterial") ) { _activeMaterial=inValue.Cast<  ::away3d::materials::MaterialBase >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_distanceRenderer") ) { _distanceRenderer=inValue.Cast<  ::away3d::core::render::DepthRenderer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_skyboxProjection") ) { _skyboxProjection=inValue.Cast<  ::openfl::geom::Matrix3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tempSkyboxMatrix") ) { _tempSkyboxMatrix=inValue.Cast<  ::openfl::geom::Matrix3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_skyboxTempVector") ) { _skyboxTempVector=inValue.Cast<  ::openfl::geom::Vector3D >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DefaultRenderer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"RTT_PASSES") ) { RTT_PASSES=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"ALL_PASSES") ) { ALL_PASSES=ioValue.Cast< int >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SCREEN_PASSES") ) { SCREEN_PASSES=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void DefaultRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_activeMaterial",2c,d9,5d,52));
	outFields->push(HX_("_distanceRenderer",f7,bf,47,fd));
	outFields->push(HX_("_depthRenderer",a7,9d,b6,2f));
	outFields->push(HX_("_skyboxProjection",58,fb,64,b5));
	outFields->push(HX_("_tempSkyboxMatrix",3e,09,87,16));
	outFields->push(HX_("_skyboxTempVector",c0,e1,a6,a3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DefaultRenderer_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::away3d::materials::MaterialBase */ ,(int)offsetof(DefaultRenderer_obj,_activeMaterial),HX_("_activeMaterial",2c,d9,5d,52)},
	{::hx::fsObject /*  ::away3d::core::render::DepthRenderer */ ,(int)offsetof(DefaultRenderer_obj,_distanceRenderer),HX_("_distanceRenderer",f7,bf,47,fd)},
	{::hx::fsObject /*  ::away3d::core::render::DepthRenderer */ ,(int)offsetof(DefaultRenderer_obj,_depthRenderer),HX_("_depthRenderer",a7,9d,b6,2f)},
	{::hx::fsObject /*  ::openfl::geom::Matrix3D */ ,(int)offsetof(DefaultRenderer_obj,_skyboxProjection),HX_("_skyboxProjection",58,fb,64,b5)},
	{::hx::fsObject /*  ::openfl::geom::Matrix3D */ ,(int)offsetof(DefaultRenderer_obj,_tempSkyboxMatrix),HX_("_tempSkyboxMatrix",3e,09,87,16)},
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(int)offsetof(DefaultRenderer_obj,_skyboxTempVector),HX_("_skyboxTempVector",c0,e1,a6,a3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo DefaultRenderer_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &DefaultRenderer_obj::RTT_PASSES,HX_("RTT_PASSES",0c,dd,c9,a2)},
	{::hx::fsInt,(void *) &DefaultRenderer_obj::SCREEN_PASSES,HX_("SCREEN_PASSES",32,af,6e,45)},
	{::hx::fsInt,(void *) &DefaultRenderer_obj::ALL_PASSES,HX_("ALL_PASSES",3d,0e,b9,7c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String DefaultRenderer_obj_sMemberFields[] = {
	HX_("_activeMaterial",2c,d9,5d,52),
	HX_("_distanceRenderer",f7,bf,47,fd),
	HX_("_depthRenderer",a7,9d,b6,2f),
	HX_("_skyboxProjection",58,fb,64,b5),
	HX_("_tempSkyboxMatrix",3e,09,87,16),
	HX_("_skyboxTempVector",c0,e1,a6,a3),
	HX_("set_stage3DProxy",fc,f2,af,69),
	HX_("executeRender",6b,ff,1f,80),
	HX_("updateLights",c6,d1,c5,e7),
	HX_("draw",04,2c,70,42),
	HX_("drawSkyBox",ce,52,db,28),
	HX_("updateSkyBoxProjection",02,21,59,5a),
	HX_("drawRenderables",df,d8,12,19),
	HX_("dispose",9f,80,4c,bb),
	::String(null()) };

static void DefaultRenderer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DefaultRenderer_obj::RTT_PASSES,"RTT_PASSES");
	HX_MARK_MEMBER_NAME(DefaultRenderer_obj::SCREEN_PASSES,"SCREEN_PASSES");
	HX_MARK_MEMBER_NAME(DefaultRenderer_obj::ALL_PASSES,"ALL_PASSES");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DefaultRenderer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DefaultRenderer_obj::RTT_PASSES,"RTT_PASSES");
	HX_VISIT_MEMBER_NAME(DefaultRenderer_obj::SCREEN_PASSES,"SCREEN_PASSES");
	HX_VISIT_MEMBER_NAME(DefaultRenderer_obj::ALL_PASSES,"ALL_PASSES");
};

#endif

::hx::Class DefaultRenderer_obj::__mClass;

static ::String DefaultRenderer_obj_sStaticFields[] = {
	HX_("RTT_PASSES",0c,dd,c9,a2),
	HX_("SCREEN_PASSES",32,af,6e,45),
	HX_("ALL_PASSES",3d,0e,b9,7c),
	::String(null())
};

void DefaultRenderer_obj::__register()
{
	DefaultRenderer_obj _hx_dummy;
	DefaultRenderer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.render.DefaultRenderer",ec,05,46,c4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DefaultRenderer_obj::__GetStatic;
	__mClass->mSetStaticField = &DefaultRenderer_obj::__SetStatic;
	__mClass->mMarkFunc = DefaultRenderer_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DefaultRenderer_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DefaultRenderer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DefaultRenderer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DefaultRenderer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DefaultRenderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DefaultRenderer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DefaultRenderer_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b674725a2580bd1f_29_boot)
HXDLIN(  29)		RTT_PASSES = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b674725a2580bd1f_30_boot)
HXDLIN(  30)		SCREEN_PASSES = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b674725a2580bd1f_31_boot)
HXDLIN(  31)		ALL_PASSES = 3;
            	}
}

} // end namespace away3d
} // end namespace core
} // end namespace render
