#include <hxcpp.h>

#ifndef INCLUDED_away3d_cameras_Camera3D
#include <away3d/cameras/Camera3D.h>
#endif
#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_managers_RTTBufferManager
#include <away3d/core/managers/RTTBufferManager.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_away3d_core_render_Filter3DRenderer
#include <away3d/core/render/Filter3DRenderer.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_events_Stage3DEvent
#include <away3d/events/Stage3DEvent.h>
#endif
#ifndef INCLUDED_away3d_filters_Filter3DBase
#include <away3d/filters/Filter3DBase.h>
#endif
#ifndef INCLUDED_away3d_filters_tasks_Filter3DTaskBase
#include <away3d/filters/tasks/Filter3DTaskBase.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
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
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Program3D
#include <openfl/display3D/Program3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_Texture
#include <openfl/display3D/textures/Texture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8e17cb496fce7220_16_new,"away3d.core.render.Filter3DRenderer","new",0x02869bf6,"away3d.core.render.Filter3DRenderer.new","away3d/core/render/Filter3DRenderer.hx",16,0x34698d39)
HX_LOCAL_STACK_FRAME(_hx_pos_8e17cb496fce7220_42_onContext3DRecreated,"away3d.core.render.Filter3DRenderer","onContext3DRecreated",0xeb757abe,"away3d.core.render.Filter3DRenderer.onContext3DRecreated","away3d/core/render/Filter3DRenderer.hx",42,0x34698d39)
HX_LOCAL_STACK_FRAME(_hx_pos_8e17cb496fce7220_47_onRTTResize,"away3d.core.render.Filter3DRenderer","onRTTResize",0x44552e7d,"away3d.core.render.Filter3DRenderer.onRTTResize","away3d/core/render/Filter3DRenderer.hx",47,0x34698d39)
HX_LOCAL_STACK_FRAME(_hx_pos_8e17cb496fce7220_52_get_requireDepthRender,"away3d.core.render.Filter3DRenderer","get_requireDepthRender",0xaed448c7,"away3d.core.render.Filter3DRenderer.get_requireDepthRender","away3d/core/render/Filter3DRenderer.hx",52,0x34698d39)
HX_LOCAL_STACK_FRAME(_hx_pos_8e17cb496fce7220_56_getMainInputTexture,"away3d.core.render.Filter3DRenderer","getMainInputTexture",0xe681d816,"away3d.core.render.Filter3DRenderer.getMainInputTexture","away3d/core/render/Filter3DRenderer.hx",56,0x34698d39)
HX_LOCAL_STACK_FRAME(_hx_pos_8e17cb496fce7220_64_get_filters,"away3d.core.render.Filter3DRenderer","get_filters",0x1b2a5368,"away3d.core.render.Filter3DRenderer.get_filters","away3d/core/render/Filter3DRenderer.hx",64,0x34698d39)
HX_LOCAL_STACK_FRAME(_hx_pos_8e17cb496fce7220_68_set_filters,"away3d.core.render.Filter3DRenderer","set_filters",0x25975a74,"away3d.core.render.Filter3DRenderer.set_filters","away3d/core/render/Filter3DRenderer.hx",68,0x34698d39)
HX_LOCAL_STACK_FRAME(_hx_pos_8e17cb496fce7220_85_updateFilterTasks,"away3d.core.render.Filter3DRenderer","updateFilterTasks",0xa7dc4543,"away3d.core.render.Filter3DRenderer.updateFilterTasks","away3d/core/render/Filter3DRenderer.hx",85,0x34698d39)
HX_LOCAL_STACK_FRAME(_hx_pos_8e17cb496fce7220_113_render,"away3d.core.render.Filter3DRenderer","render",0x7fad8180,"away3d.core.render.Filter3DRenderer.render","away3d/core/render/Filter3DRenderer.hx",113,0x34698d39)
HX_LOCAL_STACK_FRAME(_hx_pos_8e17cb496fce7220_167_updateFilterSizes,"away3d.core.render.Filter3DRenderer","updateFilterSizes",0x19c4b047,"away3d.core.render.Filter3DRenderer.updateFilterSizes","away3d/core/render/Filter3DRenderer.hx",167,0x34698d39)
HX_LOCAL_STACK_FRAME(_hx_pos_8e17cb496fce7220_177_dispose,"away3d.core.render.Filter3DRenderer","dispose",0x745bcf35,"away3d.core.render.Filter3DRenderer.dispose","away3d/core/render/Filter3DRenderer.hx",177,0x34698d39)
namespace away3d{
namespace core{
namespace render{

void Filter3DRenderer_obj::__construct( ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_8e17cb496fce7220_16_new)
HXLINE(  30)		this->_filterSizesInvalid = true;
HXLINE(  34)		this->_stage3DProxy = stage3DProxy;
HXLINE(  35)		this->_stage3DProxy->addEventListener(HX_("Context3DRecreated",35,9a,ac,ef),this->onContext3DRecreated_dyn(),null(),null(),null());
HXLINE(  36)		this->_rttManager = ::away3d::core::managers::RTTBufferManager_obj::getInstance(stage3DProxy);
HXLINE(  37)		this->_rttManager->addEventListener(HX_("resize",f4,59,7b,08),this->onRTTResize_dyn(),null(),null(),null());
            	}

Dynamic Filter3DRenderer_obj::__CreateEmpty() { return new Filter3DRenderer_obj; }

void *Filter3DRenderer_obj::_hx_vtable = 0;

Dynamic Filter3DRenderer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Filter3DRenderer_obj > _hx_result = new Filter3DRenderer_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Filter3DRenderer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0dd35d04;
}

void Filter3DRenderer_obj::onContext3DRecreated( ::away3d::events::Stage3DEvent event){
            	HX_STACKFRAME(&_hx_pos_8e17cb496fce7220_42_onContext3DRecreated)
HXDLIN(  42)		this->_filterSizesInvalid = true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Filter3DRenderer_obj,onContext3DRecreated,(void))

void Filter3DRenderer_obj::onRTTResize( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_8e17cb496fce7220_47_onRTTResize)
HXDLIN(  47)		this->_filterSizesInvalid = true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Filter3DRenderer_obj,onRTTResize,(void))

bool Filter3DRenderer_obj::get_requireDepthRender(){
            	HX_STACKFRAME(&_hx_pos_8e17cb496fce7220_52_get_requireDepthRender)
HXDLIN(  52)		return this->_requireDepthRender;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Filter3DRenderer_obj,get_requireDepthRender,return )

 ::openfl::display3D::textures::Texture Filter3DRenderer_obj::getMainInputTexture( ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_8e17cb496fce7220_56_getMainInputTexture)
HXLINE(  57)		if (this->_filterTasksInvalid) {
HXLINE(  58)			this->updateFilterTasks(stage3DProxy);
            		}
HXLINE(  59)		return this->_mainInputTexture;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Filter3DRenderer_obj,getMainInputTexture,return )

::Array< ::Dynamic> Filter3DRenderer_obj::get_filters(){
            	HX_STACKFRAME(&_hx_pos_8e17cb496fce7220_64_get_filters)
HXDLIN(  64)		return this->_filters;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Filter3DRenderer_obj,get_filters,return )

::Array< ::Dynamic> Filter3DRenderer_obj::set_filters(::Array< ::Dynamic> value){
            	HX_STACKFRAME(&_hx_pos_8e17cb496fce7220_68_set_filters)
HXLINE(  69)		this->_filters = value;
HXLINE(  70)		this->_filterTasksInvalid = true;
HXLINE(  72)		this->_requireDepthRender = false;
HXLINE(  73)		if (::hx::IsNull( this->_filters )) {
HXLINE(  74)			return null();
            		}
HXLINE(  76)		{
HXLINE(  76)			int _g = 0;
HXDLIN(  76)			int _g1 = this->get_filters()->length;
HXDLIN(  76)			while((_g < _g1)){
HXLINE(  76)				_g = (_g + 1);
HXDLIN(  76)				int i = (_g - 1);
HXLINE(  77)				if (!(this->_requireDepthRender)) {
HXLINE(  78)					this->_requireDepthRender = this->_filters->__get(i).StaticCast<  ::away3d::filters::Filter3DBase >()->get_requireDepthRender();
            				}
            			}
            		}
HXLINE(  80)		this->_filterSizesInvalid = true;
HXLINE(  81)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Filter3DRenderer_obj,set_filters,return )

void Filter3DRenderer_obj::updateFilterTasks( ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_GC_STACKFRAME(&_hx_pos_8e17cb496fce7220_85_updateFilterTasks)
HXLINE(  88)		if (this->_filterSizesInvalid) {
HXLINE(  89)			this->updateFilterSizes();
            		}
HXLINE(  91)		if (::hx::IsNull( this->_filters )) {
HXLINE(  92)			this->_tasks = null();
HXLINE(  93)			return;
            		}
HXLINE(  96)		int length = null();
HXDLIN(  96)		bool fixed = null();
HXDLIN(  96)		::Array< ::Dynamic> array = null();
HXDLIN(  96)		this->_tasks =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE(  86)		int len = (this->_filters->length - 1);
HXLINE( 100)		 ::away3d::filters::Filter3DBase filter;
HXLINE( 102)		{
HXLINE( 102)			int _g = 0;
HXDLIN( 102)			int _g1 = (len + 1);
HXDLIN( 102)			while((_g < _g1)){
HXLINE( 102)				_g = (_g + 1);
HXDLIN( 102)				int i = (_g - 1);
HXLINE( 104)				filter = this->_filters->__get(i).StaticCast<  ::away3d::filters::Filter3DBase >();
HXLINE( 105)				 ::openfl::display3D::textures::Texture _hx_tmp;
HXDLIN( 105)				if ((i == len)) {
HXLINE( 105)					_hx_tmp = null();
            				}
            				else {
HXLINE( 105)					_hx_tmp = this->_filters->__get((i + 1)).StaticCast<  ::away3d::filters::Filter3DBase >()->getMainInputTexture(stage3DProxy);
            				}
HXDLIN( 105)				filter->setRenderTargets(_hx_tmp,stage3DProxy);
HXLINE( 106)				::Dynamic this1 = this->_tasks;
HXDLIN( 106)				this->_tasks = ( ( ::openfl::_Vector::ObjectVector)(( ( ::openfl::_Vector::ObjectVector)(this1) )->concat(filter->get_tasks())) );
            			}
            		}
HXLINE( 109)		this->_mainInputTexture = this->_filters->__get(0).StaticCast<  ::away3d::filters::Filter3DBase >()->getMainInputTexture(stage3DProxy);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Filter3DRenderer_obj,updateFilterTasks,(void))

void Filter3DRenderer_obj::render( ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera3D, ::openfl::display3D::textures::Texture depthTexture){
            	HX_STACKFRAME(&_hx_pos_8e17cb496fce7220_113_render)
HXLINE( 115)		int i;
HXLINE( 116)		 ::away3d::filters::tasks::Filter3DTaskBase task;
HXLINE( 117)		 ::openfl::display3D::Context3D context = stage3DProxy->get_context3D();
HXLINE( 118)		 ::openfl::display3D::IndexBuffer3D indexBuffer = this->_rttManager->get_indexBuffer();
HXLINE( 119)		 ::openfl::display3D::VertexBuffer3D vertexBuffer = this->_rttManager->get_renderToTextureVertexBuffer();
HXLINE( 121)		if (::hx::IsNull( this->_filters )) {
HXLINE( 122)			return;
            		}
HXLINE( 123)		if (this->_filterSizesInvalid) {
HXLINE( 124)			this->updateFilterSizes();
            		}
HXLINE( 125)		if (this->_filterTasksInvalid) {
HXLINE( 126)			this->updateFilterTasks(stage3DProxy);
            		}
HXLINE( 114)		int len = this->_filters->length;
HXLINE( 129)		{
HXLINE( 129)			int _g = 0;
HXDLIN( 129)			int _g1 = len;
HXDLIN( 129)			while((_g < _g1)){
HXLINE( 129)				_g = (_g + 1);
HXDLIN( 129)				int i = (_g - 1);
HXLINE( 130)				this->_filters->__get(i).StaticCast<  ::away3d::filters::Filter3DBase >()->update(stage3DProxy,camera3D);
            			}
            		}
HXLINE( 132)		len = this->_tasks->get_length();
HXLINE( 134)		if ((len > 1)) {
HXLINE( 135)			context->setVertexBufferAt(0,vertexBuffer,0,2);
HXLINE( 136)			context->setVertexBufferAt(1,vertexBuffer,2,2);
            		}
HXLINE( 139)		{
HXLINE( 139)			int _g2 = 0;
HXDLIN( 139)			int _g3 = len;
HXDLIN( 139)			while((_g2 < _g3)){
HXLINE( 139)				_g2 = (_g2 + 1);
HXDLIN( 139)				int i = (_g2 - 1);
HXLINE( 140)				task = this->_tasks->get(i).StaticCast<  ::away3d::filters::tasks::Filter3DTaskBase >();
HXLINE( 141)				stage3DProxy->setRenderTarget(task->get_target(),null(),null());
HXLINE( 143)				if (::hx::IsNull( task->get_target() )) {
HXLINE( 144)					stage3DProxy->set_scissorRect(null());
HXLINE( 145)					vertexBuffer = this->_rttManager->get_renderToScreenVertexBuffer();
HXLINE( 146)					context->setVertexBufferAt(0,vertexBuffer,0,2);
HXLINE( 147)					context->setVertexBufferAt(1,vertexBuffer,2,2);
            				}
HXLINE( 149)				context->setTextureAt(0,task->getMainInputTexture(stage3DProxy));
HXLINE( 150)				context->setProgram(task->getProgram3D(stage3DProxy));
HXLINE( 151)				context->clear(((Float)0.0),((Float)0.0),((Float)0.0),((Float)0.0),null(),null(),null());
HXLINE( 153)				task->activate(stage3DProxy,camera3D,depthTexture);
HXLINE( 155)				context->setBlendFactors(2,9);
HXLINE( 156)				stage3DProxy->drawTriangles(indexBuffer,0,2);
HXLINE( 158)				task->deactivate(stage3DProxy);
            			}
            		}
HXLINE( 161)		context->setTextureAt(0,null());
HXLINE( 162)		context->setVertexBufferAt(0,null(),null(),null());
HXLINE( 163)		context->setVertexBufferAt(1,null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC3(Filter3DRenderer_obj,render,(void))

void Filter3DRenderer_obj::updateFilterSizes(){
            	HX_STACKFRAME(&_hx_pos_8e17cb496fce7220_167_updateFilterSizes)
HXLINE( 168)		{
HXLINE( 168)			int _g = 0;
HXDLIN( 168)			int _g1 = this->_filters->length;
HXDLIN( 168)			while((_g < _g1)){
HXLINE( 168)				_g = (_g + 1);
HXDLIN( 168)				int i = (_g - 1);
HXLINE( 169)				 ::away3d::filters::Filter3DBase _hx_tmp = this->_filters->__get(i).StaticCast<  ::away3d::filters::Filter3DBase >();
HXDLIN( 169)				_hx_tmp->set_textureWidth(this->_rttManager->get_textureWidth());
HXLINE( 170)				 ::away3d::filters::Filter3DBase _hx_tmp1 = this->_filters->__get(i).StaticCast<  ::away3d::filters::Filter3DBase >();
HXDLIN( 170)				_hx_tmp1->set_textureHeight(this->_rttManager->get_textureHeight());
            			}
            		}
HXLINE( 173)		this->_filterSizesInvalid = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Filter3DRenderer_obj,updateFilterSizes,(void))

void Filter3DRenderer_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_8e17cb496fce7220_177_dispose)
HXLINE( 178)		this->_rttManager->removeEventListener(HX_("resize",f4,59,7b,08),this->onRTTResize_dyn(),null());
HXLINE( 179)		this->_rttManager = null();
HXLINE( 180)		this->_stage3DProxy->removeEventListener(HX_("Context3DRecreated",35,9a,ac,ef),this->onContext3DRecreated_dyn(),null());
HXLINE( 181)		this->_stage3DProxy = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Filter3DRenderer_obj,dispose,(void))


::hx::ObjectPtr< Filter3DRenderer_obj > Filter3DRenderer_obj::__new( ::away3d::core::managers::Stage3DProxy stage3DProxy) {
	::hx::ObjectPtr< Filter3DRenderer_obj > __this = new Filter3DRenderer_obj();
	__this->__construct(stage3DProxy);
	return __this;
}

::hx::ObjectPtr< Filter3DRenderer_obj > Filter3DRenderer_obj::__alloc(::hx::Ctx *_hx_ctx, ::away3d::core::managers::Stage3DProxy stage3DProxy) {
	Filter3DRenderer_obj *__this = (Filter3DRenderer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Filter3DRenderer_obj), true, "away3d.core.render.Filter3DRenderer"));
	*(void **)__this = Filter3DRenderer_obj::_hx_vtable;
	__this->__construct(stage3DProxy);
	return __this;
}

Filter3DRenderer_obj::Filter3DRenderer_obj()
{
}

void Filter3DRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Filter3DRenderer);
	HX_MARK_MEMBER_NAME(_filters,"_filters");
	HX_MARK_MEMBER_NAME(_tasks,"_tasks");
	HX_MARK_MEMBER_NAME(_filterTasksInvalid,"_filterTasksInvalid");
	HX_MARK_MEMBER_NAME(_mainInputTexture,"_mainInputTexture");
	HX_MARK_MEMBER_NAME(_requireDepthRender,"_requireDepthRender");
	HX_MARK_MEMBER_NAME(_rttManager,"_rttManager");
	HX_MARK_MEMBER_NAME(_stage3DProxy,"_stage3DProxy");
	HX_MARK_MEMBER_NAME(_filterSizesInvalid,"_filterSizesInvalid");
	HX_MARK_END_CLASS();
}

void Filter3DRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_filters,"_filters");
	HX_VISIT_MEMBER_NAME(_tasks,"_tasks");
	HX_VISIT_MEMBER_NAME(_filterTasksInvalid,"_filterTasksInvalid");
	HX_VISIT_MEMBER_NAME(_mainInputTexture,"_mainInputTexture");
	HX_VISIT_MEMBER_NAME(_requireDepthRender,"_requireDepthRender");
	HX_VISIT_MEMBER_NAME(_rttManager,"_rttManager");
	HX_VISIT_MEMBER_NAME(_stage3DProxy,"_stage3DProxy");
	HX_VISIT_MEMBER_NAME(_filterSizesInvalid,"_filterSizesInvalid");
}

::hx::Val Filter3DRenderer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_tasks") ) { return ::hx::Val( _tasks ); }
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_filters() ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_filters") ) { return ::hx::Val( _filters ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_rttManager") ) { return ::hx::Val( _rttManager ); }
		if (HX_FIELD_EQ(inName,"onRTTResize") ) { return ::hx::Val( onRTTResize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_filters") ) { return ::hx::Val( get_filters_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_filters") ) { return ::hx::Val( set_filters_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_stage3DProxy") ) { return ::hx::Val( _stage3DProxy ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_mainInputTexture") ) { return ::hx::Val( _mainInputTexture ); }
		if (HX_FIELD_EQ(inName,"updateFilterTasks") ) { return ::hx::Val( updateFilterTasks_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateFilterSizes") ) { return ::hx::Val( updateFilterSizes_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"requireDepthRender") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_requireDepthRender() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_filterTasksInvalid") ) { return ::hx::Val( _filterTasksInvalid ); }
		if (HX_FIELD_EQ(inName,"_requireDepthRender") ) { return ::hx::Val( _requireDepthRender ); }
		if (HX_FIELD_EQ(inName,"_filterSizesInvalid") ) { return ::hx::Val( _filterSizesInvalid ); }
		if (HX_FIELD_EQ(inName,"getMainInputTexture") ) { return ::hx::Val( getMainInputTexture_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"onContext3DRecreated") ) { return ::hx::Val( onContext3DRecreated_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_requireDepthRender") ) { return ::hx::Val( get_requireDepthRender_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Filter3DRenderer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_tasks") ) { _tasks=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_filters(inValue.Cast< ::Array< ::Dynamic> >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_filters") ) { _filters=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_rttManager") ) { _rttManager=inValue.Cast<  ::away3d::core::managers::RTTBufferManager >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_stage3DProxy") ) { _stage3DProxy=inValue.Cast<  ::away3d::core::managers::Stage3DProxy >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_mainInputTexture") ) { _mainInputTexture=inValue.Cast<  ::openfl::display3D::textures::Texture >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_filterTasksInvalid") ) { _filterTasksInvalid=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_requireDepthRender") ) { _requireDepthRender=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_filterSizesInvalid") ) { _filterSizesInvalid=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Filter3DRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("requireDepthRender",54,45,af,22));
	outFields->push(HX_("filters",bb,a1,46,09));
	outFields->push(HX_("_filters",3c,fb,fe,42));
	outFields->push(HX_("_tasks",cf,e4,d7,06));
	outFields->push(HX_("_filterTasksInvalid",00,f7,cf,ff));
	outFields->push(HX_("_mainInputTexture",29,86,40,ac));
	outFields->push(HX_("_requireDepthRender",73,c9,89,02));
	outFields->push(HX_("_rttManager",3a,33,05,d5));
	outFields->push(HX_("_stage3DProxy",de,ab,3d,f1));
	outFields->push(HX_("_filterSizesInvalid",7c,b4,64,15));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Filter3DRenderer_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Filter3DRenderer_obj,_filters),HX_("_filters",3c,fb,fe,42)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(Filter3DRenderer_obj,_tasks),HX_("_tasks",cf,e4,d7,06)},
	{::hx::fsBool,(int)offsetof(Filter3DRenderer_obj,_filterTasksInvalid),HX_("_filterTasksInvalid",00,f7,cf,ff)},
	{::hx::fsObject /*  ::openfl::display3D::textures::Texture */ ,(int)offsetof(Filter3DRenderer_obj,_mainInputTexture),HX_("_mainInputTexture",29,86,40,ac)},
	{::hx::fsBool,(int)offsetof(Filter3DRenderer_obj,_requireDepthRender),HX_("_requireDepthRender",73,c9,89,02)},
	{::hx::fsObject /*  ::away3d::core::managers::RTTBufferManager */ ,(int)offsetof(Filter3DRenderer_obj,_rttManager),HX_("_rttManager",3a,33,05,d5)},
	{::hx::fsObject /*  ::away3d::core::managers::Stage3DProxy */ ,(int)offsetof(Filter3DRenderer_obj,_stage3DProxy),HX_("_stage3DProxy",de,ab,3d,f1)},
	{::hx::fsBool,(int)offsetof(Filter3DRenderer_obj,_filterSizesInvalid),HX_("_filterSizesInvalid",7c,b4,64,15)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Filter3DRenderer_obj_sStaticStorageInfo = 0;
#endif

static ::String Filter3DRenderer_obj_sMemberFields[] = {
	HX_("_filters",3c,fb,fe,42),
	HX_("_tasks",cf,e4,d7,06),
	HX_("_filterTasksInvalid",00,f7,cf,ff),
	HX_("_mainInputTexture",29,86,40,ac),
	HX_("_requireDepthRender",73,c9,89,02),
	HX_("_rttManager",3a,33,05,d5),
	HX_("_stage3DProxy",de,ab,3d,f1),
	HX_("_filterSizesInvalid",7c,b4,64,15),
	HX_("onContext3DRecreated",14,af,ee,80),
	HX_("onRTTResize",e7,dc,6b,b8),
	HX_("get_requireDepthRender",9d,be,43,7c),
	HX_("getMainInputTexture",80,00,ec,cd),
	HX_("get_filters",d2,01,41,8f),
	HX_("set_filters",de,08,ae,99),
	HX_("updateFilterTasks",2d,9f,0c,1f),
	HX_("render",56,6b,29,05),
	HX_("updateFilterSizes",31,0a,f5,90),
	HX_("dispose",9f,80,4c,bb),
	::String(null()) };

::hx::Class Filter3DRenderer_obj::__mClass;

void Filter3DRenderer_obj::__register()
{
	Filter3DRenderer_obj _hx_dummy;
	Filter3DRenderer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.render.Filter3DRenderer",04,29,68,d4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Filter3DRenderer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Filter3DRenderer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Filter3DRenderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Filter3DRenderer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace core
} // end namespace render
