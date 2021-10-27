#include <hxcpp.h>

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
#ifndef INCLUDED_away3d_core_data_RenderableListItem
#include <away3d/core/data/RenderableListItem.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_away3d_core_render_DepthRenderer
#include <away3d/core/render/DepthRenderer.h>
#endif
#ifndef INCLUDED_away3d_core_render_RendererBase
#include <away3d/core/render/RendererBase.h>
#endif
#ifndef INCLUDED_away3d_core_sort_IEntitySorter
#include <away3d/core/sort/IEntitySorter.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_8a2915c00cd268c4_35_new,"away3d.core.render.DepthRenderer","new",0xb9f2be20,"away3d.core.render.DepthRenderer.new","away3d/core/render/DepthRenderer.hx",35,0x0a8266f1)
HX_LOCAL_STACK_FRAME(_hx_pos_8a2915c00cd268c4_46_get_disableColor,"away3d.core.render.DepthRenderer","get_disableColor",0x214ef524,"away3d.core.render.DepthRenderer.get_disableColor","away3d/core/render/DepthRenderer.hx",46,0x0a8266f1)
HX_LOCAL_STACK_FRAME(_hx_pos_8a2915c00cd268c4_50_set_disableColor,"away3d.core.render.DepthRenderer","set_disableColor",0x7790e298,"away3d.core.render.DepthRenderer.set_disableColor","away3d/core/render/DepthRenderer.hx",50,0x0a8266f1)
HX_LOCAL_STACK_FRAME(_hx_pos_8a2915c00cd268c4_57_set_backgroundR,"away3d.core.render.DepthRenderer","set_backgroundR",0x239d9f07,"away3d.core.render.DepthRenderer.set_backgroundR","away3d/core/render/DepthRenderer.hx",57,0x0a8266f1)
HX_LOCAL_STACK_FRAME(_hx_pos_8a2915c00cd268c4_62_set_backgroundG,"away3d.core.render.DepthRenderer","set_backgroundG",0x239d9efc,"away3d.core.render.DepthRenderer.set_backgroundG","away3d/core/render/DepthRenderer.hx",62,0x0a8266f1)
HX_LOCAL_STACK_FRAME(_hx_pos_8a2915c00cd268c4_67_set_backgroundB,"away3d.core.render.DepthRenderer","set_backgroundB",0x239d9ef7,"away3d.core.render.DepthRenderer.set_backgroundB","away3d/core/render/DepthRenderer.hx",67,0x0a8266f1)
HX_LOCAL_STACK_FRAME(_hx_pos_8a2915c00cd268c4_71_renderCascades,"away3d.core.render.DepthRenderer","renderCascades",0xa74bd175,"away3d.core.render.DepthRenderer.renderCascades","away3d/core/render/DepthRenderer.hx",71,0x0a8266f1)
HX_LOCAL_STACK_FRAME(_hx_pos_8a2915c00cd268c4_102_drawCascadeRenderables,"away3d.core.render.DepthRenderer","drawCascadeRenderables",0x1cb12a13,"away3d.core.render.DepthRenderer.drawCascadeRenderables","away3d/core/render/DepthRenderer.hx",102,0x0a8266f1)
HX_LOCAL_STACK_FRAME(_hx_pos_8a2915c00cd268c4_137_draw,"away3d.core.render.DepthRenderer","draw",0xf3e14644,"away3d.core.render.DepthRenderer.draw","away3d/core/render/DepthRenderer.hx",137,0x0a8266f1)
HX_LOCAL_STACK_FRAME(_hx_pos_8a2915c00cd268c4_163_drawRenderables,"away3d.core.render.DepthRenderer","drawRenderables",0x4c3f669f,"away3d.core.render.DepthRenderer.drawRenderables","away3d/core/render/DepthRenderer.hx",163,0x0a8266f1)
namespace away3d{
namespace core{
namespace render{

void DepthRenderer_obj::__construct(::hx::Null< bool >  __o_renderBlended,::hx::Null< bool >  __o_distanceBased){
            		bool renderBlended = __o_renderBlended.Default(false);
            		bool distanceBased = __o_distanceBased.Default(false);
            	HX_STACKFRAME(&_hx_pos_8a2915c00cd268c4_35_new)
HXLINE(  36)		super::__construct(null());
HXLINE(  37)		this->_renderBlended = renderBlended;
HXLINE(  38)		this->_distanceBased = distanceBased;
HXLINE(  39)		this->_backgroundR = ( (Float)(1) );
HXLINE(  40)		this->_backgroundG = ( (Float)(1) );
HXLINE(  41)		this->_backgroundB = ( (Float)(1) );
            	}

Dynamic DepthRenderer_obj::__CreateEmpty() { return new DepthRenderer_obj; }

void *DepthRenderer_obj::_hx_vtable = 0;

Dynamic DepthRenderer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DepthRenderer_obj > _hx_result = new DepthRenderer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool DepthRenderer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0639ed90) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0639ed90;
	} else {
		return inClassId==(int)0x54c5ba2e;
	}
}

bool DepthRenderer_obj::get_disableColor(){
            	HX_STACKFRAME(&_hx_pos_8a2915c00cd268c4_46_get_disableColor)
HXDLIN(  46)		return this->_disableColor;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DepthRenderer_obj,get_disableColor,return )

bool DepthRenderer_obj::set_disableColor(bool value){
            	HX_STACKFRAME(&_hx_pos_8a2915c00cd268c4_50_set_disableColor)
HXLINE(  51)		this->_disableColor = value;
HXLINE(  52)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DepthRenderer_obj,set_disableColor,return )

Float DepthRenderer_obj::set_backgroundR(Float value){
            	HX_STACKFRAME(&_hx_pos_8a2915c00cd268c4_57_set_backgroundR)
HXDLIN(  57)		return value;
            	}


Float DepthRenderer_obj::set_backgroundG(Float value){
            	HX_STACKFRAME(&_hx_pos_8a2915c00cd268c4_62_set_backgroundG)
HXDLIN(  62)		return value;
            	}


Float DepthRenderer_obj::set_backgroundB(Float value){
            	HX_STACKFRAME(&_hx_pos_8a2915c00cd268c4_67_set_backgroundB)
HXDLIN(  67)		return value;
            	}


void DepthRenderer_obj::renderCascades( ::away3d::core::traverse::EntityCollector entityCollector, ::openfl::display3D::textures::TextureBase target,int numCascades, ::openfl::_Vector::ObjectVector scissorRects, ::openfl::_Vector::ObjectVector cameras){
            	HX_STACKFRAME(&_hx_pos_8a2915c00cd268c4_71_renderCascades)
HXLINE(  72)		this->_renderTarget = target;
HXLINE(  73)		this->_renderTargetSurface = 0;
HXLINE(  74)		::away3d::core::sort::IEntitySorter_obj::sort(this->_renderableSorter,entityCollector);
HXLINE(  75)		this->_stage3DProxy->setRenderTarget(target,true,0);
HXLINE(  76)		this->_context->clear(1,1,1,1,1,0,null());
HXLINE(  77)		this->_context->setBlendFactors(2,9);
HXLINE(  78)		this->_context->setDepthTest(true,4);
HXLINE(  80)		 ::away3d::core::data::RenderableListItem head = entityCollector->get_opaqueRenderableHead();
HXLINE(  81)		bool first = true;
HXLINE(  82)		int i = (numCascades - 1);
HXLINE(  83)		while((i >= 0)){
HXLINE(  84)			 ::away3d::core::managers::Stage3DProxy _hx_tmp = this->_stage3DProxy;
HXDLIN(  84)			_hx_tmp->set_scissorRect(scissorRects->get(i).StaticCast<  ::openfl::geom::Rectangle >());
HXLINE(  85)			 ::away3d::cameras::Camera3D _hx_tmp1 = cameras->get(i).StaticCast<  ::away3d::cameras::Camera3D >();
HXDLIN(  85)			 ::openfl::_Vector::ObjectVector _hx_tmp2;
HXDLIN(  85)			if (first) {
HXLINE(  85)				_hx_tmp2 = null();
            			}
            			else {
HXLINE(  85)				_hx_tmp2 = cameras->get(i).StaticCast<  ::away3d::cameras::Camera3D >()->get_frustumPlanes();
            			}
HXDLIN(  85)			this->drawCascadeRenderables(head,_hx_tmp1,_hx_tmp2);
HXLINE(  86)			first = false;
HXLINE(  87)			i = (i - 1);
            		}
HXLINE(  90)		if (::hx::IsNotNull( this->_activeMaterial )) {
HXLINE(  91)			this->_activeMaterial->deactivateForDepth(this->_stage3DProxy);
            		}
HXLINE(  93)		this->_activeMaterial = null();
HXLINE(  96)		this->_context->setDepthTest(false,5);
HXLINE(  98)		this->_stage3DProxy->set_scissorRect(null());
            	}


HX_DEFINE_DYNAMIC_FUNC5(DepthRenderer_obj,renderCascades,(void))

void DepthRenderer_obj::drawCascadeRenderables( ::away3d::core::data::RenderableListItem item, ::away3d::cameras::Camera3D camera, ::openfl::_Vector::ObjectVector cullPlanes){
            	HX_STACKFRAME(&_hx_pos_8a2915c00cd268c4_102_drawCascadeRenderables)
HXLINE( 103)		 ::away3d::materials::MaterialBase material;
HXLINE( 105)		while(::hx::IsNotNull( item )){
HXLINE( 106)			if (item->cascaded) {
HXLINE( 107)				item = item->next;
HXLINE( 108)				continue;
            			}
HXLINE( 111)			::Dynamic renderable = item->renderable;
HXLINE( 112)			 ::away3d::entities::Entity entity = ::away3d::core::base::IRenderable_obj::get_sourceEntity(renderable);
HXLINE( 116)			bool _hx_tmp;
HXDLIN( 116)			if (::hx::IsNotNull( cullPlanes )) {
HXLINE( 116)				_hx_tmp = entity->get_worldBounds()->isInFrustum(cullPlanes,4);
            			}
            			else {
HXLINE( 116)				_hx_tmp = true;
            			}
HXDLIN( 116)			if (_hx_tmp) {
HXLINE( 117)				material = ::away3d::core::base::IMaterialOwner_obj::get_material(renderable);
HXLINE( 118)				if (::hx::IsInstanceNotEq( this->_activeMaterial,material )) {
HXLINE( 119)					if (::hx::IsNotNull( this->_activeMaterial )) {
HXLINE( 120)						this->_activeMaterial->deactivateForDepth(this->_stage3DProxy);
            					}
HXLINE( 121)					this->_activeMaterial = material;
HXLINE( 122)					this->_activeMaterial->activateForDepth(this->_stage3DProxy,camera,false);
            				}
HXLINE( 125)				 ::away3d::materials::MaterialBase _hx_tmp = this->_activeMaterial;
HXDLIN( 125)				 ::away3d::core::managers::Stage3DProxy _hx_tmp1 = this->_stage3DProxy;
HXDLIN( 125)				_hx_tmp->renderDepth(renderable,_hx_tmp1,camera,camera->get_viewProjection());
            			}
            			else {
HXLINE( 127)				item->cascaded = true;
            			}
HXLINE( 129)			item = item->next;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(DepthRenderer_obj,drawCascadeRenderables,(void))

void DepthRenderer_obj::draw( ::away3d::core::traverse::EntityCollector entityCollector, ::openfl::display3D::textures::TextureBase target){
            	HX_STACKFRAME(&_hx_pos_8a2915c00cd268c4_137_draw)
HXLINE( 138)		this->_context->setBlendFactors(2,9);
HXLINE( 139)		this->_context->setDepthTest(true,4);
HXLINE( 140)		this->drawRenderables(entityCollector->get_opaqueRenderableHead(),entityCollector);
HXLINE( 142)		if (this->_disableColor) {
HXLINE( 143)			this->_context->setColorMask(false,false,false,false);
            		}
HXLINE( 145)		if (this->_renderBlended) {
HXLINE( 146)			this->drawRenderables(entityCollector->get_blendedRenderableHead(),entityCollector);
            		}
HXLINE( 148)		if (::hx::IsNotNull( this->_activeMaterial )) {
HXLINE( 149)			this->_activeMaterial->deactivateForDepth(this->_stage3DProxy);
            		}
HXLINE( 151)		if (this->_disableColor) {
HXLINE( 152)			this->_context->setColorMask(true,true,true,true);
            		}
HXLINE( 154)		this->_activeMaterial = null();
            	}


void DepthRenderer_obj::drawRenderables( ::away3d::core::data::RenderableListItem item, ::away3d::core::traverse::EntityCollector entityCollector){
            	HX_STACKFRAME(&_hx_pos_8a2915c00cd268c4_163_drawRenderables)
HXLINE( 164)		 ::away3d::cameras::Camera3D camera = entityCollector->get_camera();
HXLINE( 165)		 ::away3d::core::data::RenderableListItem item2;
HXLINE( 167)		while(::hx::IsNotNull( item )){
HXLINE( 168)			this->_activeMaterial = ::away3d::core::base::IMaterialOwner_obj::get_material(item->renderable);
HXLINE( 171)			bool _hx_tmp;
HXDLIN( 171)			if (this->_disableColor) {
HXLINE( 171)				_hx_tmp = this->_activeMaterial->hasDepthAlphaThreshold();
            			}
            			else {
HXLINE( 171)				_hx_tmp = false;
            			}
HXDLIN( 171)			if (_hx_tmp) {
HXLINE( 172)				item2 = item;
HXLINE( 174)				while(true){
HXLINE( 175)					item2 = item2->next;
HXLINE( 176)					bool _hx_tmp;
HXDLIN( 176)					if (::hx::IsNotNull( item2 )) {
HXLINE( 176)						 ::away3d::materials::MaterialBase _hx_tmp1 = ::away3d::core::base::IMaterialOwner_obj::get_material(item2->renderable);
HXDLIN( 176)						_hx_tmp = ::hx::IsInstanceEq( _hx_tmp1,this->_activeMaterial );
            					}
            					else {
HXLINE( 176)						_hx_tmp = false;
            					}
HXLINE( 174)					if (!(_hx_tmp)) {
HXLINE( 174)						goto _hx_goto_12;
            					}
            				}
            				_hx_goto_12:;
            			}
            			else {
HXLINE( 178)				this->_activeMaterial->activateForDepth(this->_stage3DProxy,camera,this->_distanceBased);
HXLINE( 179)				item2 = item;
HXLINE( 180)				while(true){
HXLINE( 181)					this->_activeMaterial->renderDepth(item2->renderable,this->_stage3DProxy,camera,this->_rttViewProjectionMatrix);
HXLINE( 182)					item2 = item2->next;
HXLINE( 183)					bool _hx_tmp;
HXDLIN( 183)					if (::hx::IsNotNull( item2 )) {
HXLINE( 183)						 ::away3d::materials::MaterialBase _hx_tmp1 = ::away3d::core::base::IMaterialOwner_obj::get_material(item2->renderable);
HXDLIN( 183)						_hx_tmp = ::hx::IsInstanceEq( _hx_tmp1,this->_activeMaterial );
            					}
            					else {
HXLINE( 183)						_hx_tmp = false;
            					}
HXLINE( 180)					if (!(_hx_tmp)) {
HXLINE( 180)						goto _hx_goto_13;
            					}
            				}
            				_hx_goto_13:;
HXLINE( 184)				this->_activeMaterial->deactivateForDepth(this->_stage3DProxy);
            			}
HXLINE( 186)			item = item2;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(DepthRenderer_obj,drawRenderables,(void))


::hx::ObjectPtr< DepthRenderer_obj > DepthRenderer_obj::__new(::hx::Null< bool >  __o_renderBlended,::hx::Null< bool >  __o_distanceBased) {
	::hx::ObjectPtr< DepthRenderer_obj > __this = new DepthRenderer_obj();
	__this->__construct(__o_renderBlended,__o_distanceBased);
	return __this;
}

::hx::ObjectPtr< DepthRenderer_obj > DepthRenderer_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_renderBlended,::hx::Null< bool >  __o_distanceBased) {
	DepthRenderer_obj *__this = (DepthRenderer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DepthRenderer_obj), true, "away3d.core.render.DepthRenderer"));
	*(void **)__this = DepthRenderer_obj::_hx_vtable;
	__this->__construct(__o_renderBlended,__o_distanceBased);
	return __this;
}

DepthRenderer_obj::DepthRenderer_obj()
{
}

void DepthRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DepthRenderer);
	HX_MARK_MEMBER_NAME(_activeMaterial,"_activeMaterial");
	HX_MARK_MEMBER_NAME(_renderBlended,"_renderBlended");
	HX_MARK_MEMBER_NAME(_distanceBased,"_distanceBased");
	HX_MARK_MEMBER_NAME(_disableColor,"_disableColor");
	 ::away3d::core::render::RendererBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DepthRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_activeMaterial,"_activeMaterial");
	HX_VISIT_MEMBER_NAME(_renderBlended,"_renderBlended");
	HX_VISIT_MEMBER_NAME(_distanceBased,"_distanceBased");
	HX_VISIT_MEMBER_NAME(_disableColor,"_disableColor");
	 ::away3d::core::render::RendererBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DepthRenderer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"disableColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_disableColor() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_disableColor") ) { return ::hx::Val( _disableColor ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_renderBlended") ) { return ::hx::Val( _renderBlended ); }
		if (HX_FIELD_EQ(inName,"_distanceBased") ) { return ::hx::Val( _distanceBased ); }
		if (HX_FIELD_EQ(inName,"renderCascades") ) { return ::hx::Val( renderCascades_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_activeMaterial") ) { return ::hx::Val( _activeMaterial ); }
		if (HX_FIELD_EQ(inName,"set_backgroundR") ) { return ::hx::Val( set_backgroundR_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_backgroundG") ) { return ::hx::Val( set_backgroundG_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_backgroundB") ) { return ::hx::Val( set_backgroundB_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawRenderables") ) { return ::hx::Val( drawRenderables_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_disableColor") ) { return ::hx::Val( get_disableColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_disableColor") ) { return ::hx::Val( set_disableColor_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"drawCascadeRenderables") ) { return ::hx::Val( drawCascadeRenderables_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DepthRenderer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"disableColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_disableColor(inValue.Cast< bool >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_disableColor") ) { _disableColor=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_renderBlended") ) { _renderBlended=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_distanceBased") ) { _distanceBased=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_activeMaterial") ) { _activeMaterial=inValue.Cast<  ::away3d::materials::MaterialBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DepthRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("disableColor",5b,8e,e0,88));
	outFields->push(HX_("_activeMaterial",2c,d9,5d,52));
	outFields->push(HX_("_renderBlended",7b,1a,7c,c4));
	outFields->push(HX_("_distanceBased",ff,33,95,b3));
	outFields->push(HX_("_disableColor",3a,21,4f,6b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DepthRenderer_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::away3d::materials::MaterialBase */ ,(int)offsetof(DepthRenderer_obj,_activeMaterial),HX_("_activeMaterial",2c,d9,5d,52)},
	{::hx::fsBool,(int)offsetof(DepthRenderer_obj,_renderBlended),HX_("_renderBlended",7b,1a,7c,c4)},
	{::hx::fsBool,(int)offsetof(DepthRenderer_obj,_distanceBased),HX_("_distanceBased",ff,33,95,b3)},
	{::hx::fsBool,(int)offsetof(DepthRenderer_obj,_disableColor),HX_("_disableColor",3a,21,4f,6b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DepthRenderer_obj_sStaticStorageInfo = 0;
#endif

static ::String DepthRenderer_obj_sMemberFields[] = {
	HX_("_activeMaterial",2c,d9,5d,52),
	HX_("_renderBlended",7b,1a,7c,c4),
	HX_("_distanceBased",ff,33,95,b3),
	HX_("_disableColor",3a,21,4f,6b),
	HX_("get_disableColor",e4,7a,7f,8d),
	HX_("set_disableColor",58,68,c1,e3),
	HX_("set_backgroundR",47,11,71,f0),
	HX_("set_backgroundG",3c,11,71,f0),
	HX_("set_backgroundB",37,11,71,f0),
	HX_("renderCascades",35,67,1b,90),
	HX_("drawCascadeRenderables",d3,7f,ac,a3),
	HX_("draw",04,2c,70,42),
	HX_("drawRenderables",df,d8,12,19),
	::String(null()) };

::hx::Class DepthRenderer_obj::__mClass;

void DepthRenderer_obj::__register()
{
	DepthRenderer_obj _hx_dummy;
	DepthRenderer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.render.DepthRenderer",2e,6e,79,da);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DepthRenderer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DepthRenderer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DepthRenderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DepthRenderer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace core
} // end namespace render
