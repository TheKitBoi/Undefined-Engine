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
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_away3d_core_render_BackgroundImageRenderer
#include <away3d/core/render/BackgroundImageRenderer.h>
#endif
#ifndef INCLUDED_away3d_core_render_RendererBase
#include <away3d/core/render/RendererBase.h>
#endif
#ifndef INCLUDED_away3d_core_sort_IEntitySorter
#include <away3d/core/sort/IEntitySorter.h>
#endif
#ifndef INCLUDED_away3d_core_sort_RenderableMergeSort
#include <away3d/core/sort/RenderableMergeSort.h>
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
#ifndef INCLUDED_away3d_errors_AbstractMethodError
#include <away3d/errors/AbstractMethodError.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_textures_Texture2DBase
#include <away3d/textures/Texture2DBase.h>
#endif
#ifndef INCLUDED_away3d_textures_TextureProxyBase
#include <away3d/textures/TextureProxyBase.h>
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
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
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
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_50ae55f9eb627e61_24_new,"away3d.core.render.RendererBase","new",0xab4f4e1e,"away3d.core.render.RendererBase.new","away3d/core/render/RendererBase.hx",24,0x39042c91)
HX_LOCAL_STACK_FRAME(_hx_pos_50ae55f9eb627e61_85_createEntityCollector,"away3d.core.render.RendererBase","createEntityCollector",0xa6dbb74c,"away3d.core.render.RendererBase.createEntityCollector","away3d/core/render/RendererBase.hx",85,0x39042c91)
HX_LOCAL_STACK_FRAME(_hx_pos_50ae55f9eb627e61_90_get_viewWidth,"away3d.core.render.RendererBase","get_viewWidth",0x5e885076,"away3d.core.render.RendererBase.get_viewWidth","away3d/core/render/RendererBase.hx",90,0x39042c91)
HX_LOCAL_STACK_FRAME(_hx_pos_50ae55f9eb627e61_94_set_viewWidth,"away3d.core.render.RendererBase","set_viewWidth",0xa38e3282,"away3d.core.render.RendererBase.set_viewWidth","away3d/core/render/RendererBase.hx",94,0x39042c91)
HX_LOCAL_STACK_FRAME(_hx_pos_50ae55f9eb627e61_101_get_viewHeight,"away3d.core.render.RendererBase","get_viewHeight",0x0f0d8f77,"away3d.core.render.RendererBase.get_viewHeight","away3d/core/render/RendererBase.hx",101,0x39042c91)
HX_LOCAL_STACK_FRAME(_hx_pos_50ae55f9eb627e61_105_set_viewHeight,"away3d.core.render.RendererBase","set_viewHeight",0x2f2d77eb,"away3d.core.render.RendererBase.set_viewHeight","away3d/core/render/RendererBase.hx",105,0x39042c91)
HX_LOCAL_STACK_FRAME(_hx_pos_50ae55f9eb627e61_112_get_renderToTexture,"away3d.core.render.RendererBase","get_renderToTexture",0x11a3833f,"away3d.core.render.RendererBase.get_renderToTexture","away3d/core/render/RendererBase.hx",112,0x39042c91)
HX_LOCAL_STACK_FRAME(_hx_pos_50ae55f9eb627e61_117_get_renderableSorter,"away3d.core.render.RendererBase","get_renderableSorter",0x198068e6,"away3d.core.render.RendererBase.get_renderableSorter","away3d/core/render/RendererBase.hx",117,0x39042c91)
HX_LOCAL_STACK_FRAME(_hx_pos_50ae55f9eb627e61_121_set_renderableSorter,"away3d.core.render.RendererBase","set_renderableSorter",0xe638205a,"away3d.core.render.RendererBase.set_renderableSorter","away3d/core/render/RendererBase.hx",121,0x39042c91)
HX_LOCAL_STACK_FRAME(_hx_pos_50ae55f9eb627e61_128_get_clearOnRender,"away3d.core.render.RendererBase","get_clearOnRender",0x5aa03e17,"away3d.core.render.RendererBase.get_clearOnRender","away3d/core/render/RendererBase.hx",128,0x39042c91)
HX_LOCAL_STACK_FRAME(_hx_pos_50ae55f9eb627e61_132_set_clearOnRender,"away3d.core.render.RendererBase","set_clearOnRender",0x7e0e1623,"away3d.core.render.RendererBase.set_clearOnRender","away3d/core/render/RendererBase.hx",132,0x39042c91)
HX_LOCAL_STACK_FRAME(_hx_pos_50ae55f9eb627e61_144_get_backgroundR,"away3d.core.render.RendererBase","get_backgroundR",0x6e45b6f9,"away3d.core.render.RendererBase.get_backgroundR","away3d/core/render/RendererBase.hx",144,0x39042c91)
HX_LOCAL_STACK_FRAME(_hx_pos_50ae55f9eb627e61_148_set_backgroundR,"away3d.core.render.RendererBase","set_backgroundR",0x6a113405,"away3d.core.render.RendererBase.set_backgroundR","away3d/core/render/RendererBase.hx",148,0x39042c91)
HX_LOCAL_STACK_FRAME(_hx_pos_50ae55f9eb627e61_160_get_backgroundG,"away3d.core.render.RendererBase","get_backgroundG",0x6e45b6ee,"away3d.core.render.RendererBase.get_backgroundG","away3d/core/render/RendererBase.hx",160,0x39042c91)
HX_LOCAL_STACK_FRAME(_hx_pos_50ae55f9eb627e61_164_set_backgroundG,"away3d.core.render.RendererBase","set_backgroundG",0x6a1133fa,"away3d.core.render.RendererBase.set_backgroundG","away3d/core/render/RendererBase.hx",164,0x39042c91)
HX_LOCAL_STACK_FRAME(_hx_pos_50ae55f9eb627e61_176_get_backgroundB,"away3d.core.render.RendererBase","get_backgroundB",0x6e45b6e9,"away3d.core.render.RendererBase.get_backgroundB","away3d/core/render/RendererBase.hx",176,0x39042c91)
HX_LOCAL_STACK_FRAME(_hx_pos_50ae55f9eb627e61_180_set_backgroundB,"away3d.core.render.RendererBase","set_backgroundB",0x6a1133f5,"away3d.core.render.RendererBase.set_backgroundB","away3d/core/render/RendererBase.hx",180,0x39042c91)
HX_LOCAL_STACK_FRAME(_hx_pos_50ae55f9eb627e61_192_get_stage3DProxy,"away3d.core.render.RendererBase","get_stage3DProxy",0x05ec490a,"away3d.core.render.RendererBase.get_stage3DProxy","away3d/core/render/RendererBase.hx",192,0x39042c91)
HX_LOCAL_STACK_FRAME(_hx_pos_50ae55f9eb627e61_196_set_stage3DProxy,"away3d.core.render.RendererBase","set_stage3DProxy",0x5c2e367e,"away3d.core.render.RendererBase.set_stage3DProxy","away3d/core/render/RendererBase.hx",196,0x39042c91)
HX_LOCAL_STACK_FRAME(_hx_pos_50ae55f9eb627e61_230_get_shareContext,"away3d.core.render.RendererBase","get_shareContext",0x1ddef2db,"away3d.core.render.RendererBase.get_shareContext","away3d/core/render/RendererBase.hx",230,0x39042c91)
HX_LOCAL_STACK_FRAME(_hx_pos_50ae55f9eb627e61_234_set_shareContext,"away3d.core.render.RendererBase","set_shareContext",0x7420e04f,"away3d.core.render.RendererBase.set_shareContext","away3d/core/render/RendererBase.hx",234,0x39042c91)
HX_LOCAL_STACK_FRAME(_hx_pos_50ae55f9eb627e61_245_dispose,"away3d.core.render.RendererBase","dispose",0x7c6cb55d,"away3d.core.render.RendererBase.dispose","away3d/core/render/RendererBase.hx",245,0x39042c91)
HX_LOCAL_STACK_FRAME(_hx_pos_50ae55f9eb627e61_261_render,"away3d.core.render.RendererBase","render",0x46509858,"away3d.core.render.RendererBase.render","away3d/core/render/RendererBase.hx",261,0x39042c91)
HX_LOCAL_STACK_FRAME(_hx_pos_50ae55f9eb627e61_285_executeRender,"away3d.core.render.RendererBase","executeRender",0x124d56a9,"away3d.core.render.RendererBase.executeRender","away3d/core/render/RendererBase.hx",285,0x39042c91)
HX_LOCAL_STACK_FRAME(_hx_pos_50ae55f9eb627e61_322_queueSnapshot,"away3d.core.render.RendererBase","queueSnapshot",0x570f3233,"away3d.core.render.RendererBase.queueSnapshot","away3d/core/render/RendererBase.hx",322,0x39042c91)
HX_LOCAL_STACK_FRAME(_hx_pos_50ae55f9eb627e61_329_executeRenderToTexturePass,"away3d.core.render.RendererBase","executeRenderToTexturePass",0xca2e2528,"away3d.core.render.RendererBase.executeRenderToTexturePass","away3d/core/render/RendererBase.hx",329,0x39042c91)
HX_LOCAL_STACK_FRAME(_hx_pos_50ae55f9eb627e61_338_draw,"away3d.core.render.RendererBase","draw",0x3382b486,"away3d.core.render.RendererBase.draw","away3d/core/render/RendererBase.hx",338,0x39042c91)
HX_LOCAL_STACK_FRAME(_hx_pos_50ae55f9eb627e61_346_onContextUpdate,"away3d.core.render.RendererBase","onContextUpdate",0x9a1db777,"away3d.core.render.RendererBase.onContextUpdate","away3d/core/render/RendererBase.hx",346,0x39042c91)
HX_LOCAL_STACK_FRAME(_hx_pos_50ae55f9eb627e61_351_get_backgroundAlpha,"away3d.core.render.RendererBase","get_backgroundAlpha",0x3f07ad65,"away3d.core.render.RendererBase.get_backgroundAlpha","away3d/core/render/RendererBase.hx",351,0x39042c91)
HX_LOCAL_STACK_FRAME(_hx_pos_50ae55f9eb627e61_355_set_backgroundAlpha,"away3d.core.render.RendererBase","set_backgroundAlpha",0x7ba4a071,"away3d.core.render.RendererBase.set_backgroundAlpha","away3d/core/render/RendererBase.hx",355,0x39042c91)
HX_LOCAL_STACK_FRAME(_hx_pos_50ae55f9eb627e61_362_get_background,"away3d.core.render.RendererBase","get_background",0xf1921b39,"away3d.core.render.RendererBase.get_background","away3d/core/render/RendererBase.hx",362,0x39042c91)
HX_LOCAL_STACK_FRAME(_hx_pos_50ae55f9eb627e61_366_set_background,"away3d.core.render.RendererBase","set_background",0x11b203ad,"away3d.core.render.RendererBase.set_background","away3d/core/render/RendererBase.hx",366,0x39042c91)
HX_LOCAL_STACK_FRAME(_hx_pos_50ae55f9eb627e61_385_get_backgroundImageRenderer,"away3d.core.render.RendererBase","get_backgroundImageRenderer",0x75fed8c5,"away3d.core.render.RendererBase.get_backgroundImageRenderer","away3d/core/render/RendererBase.hx",385,0x39042c91)
HX_LOCAL_STACK_FRAME(_hx_pos_50ae55f9eb627e61_390_get_antiAlias,"away3d.core.render.RendererBase","get_antiAlias",0x5ca871a3,"away3d.core.render.RendererBase.get_antiAlias","away3d/core/render/RendererBase.hx",390,0x39042c91)
HX_LOCAL_STACK_FRAME(_hx_pos_50ae55f9eb627e61_394_set_antiAlias,"away3d.core.render.RendererBase","set_antiAlias",0xa1ae53af,"away3d.core.render.RendererBase.set_antiAlias","away3d/core/render/RendererBase.hx",394,0x39042c91)
HX_LOCAL_STACK_FRAME(_hx_pos_50ae55f9eb627e61_401_get_textureRatioX,"away3d.core.render.RendererBase","get_textureRatioX",0x910ee1bd,"away3d.core.render.RendererBase.get_textureRatioX","away3d/core/render/RendererBase.hx",401,0x39042c91)
HX_LOCAL_STACK_FRAME(_hx_pos_50ae55f9eb627e61_405_set_textureRatioX,"away3d.core.render.RendererBase","set_textureRatioX",0xb47cb9c9,"away3d.core.render.RendererBase.set_textureRatioX","away3d/core/render/RendererBase.hx",405,0x39042c91)
HX_LOCAL_STACK_FRAME(_hx_pos_50ae55f9eb627e61_412_get_textureRatioY,"away3d.core.render.RendererBase","get_textureRatioY",0x910ee1be,"away3d.core.render.RendererBase.get_textureRatioY","away3d/core/render/RendererBase.hx",412,0x39042c91)
HX_LOCAL_STACK_FRAME(_hx_pos_50ae55f9eb627e61_415_set_textureRatioY,"away3d.core.render.RendererBase","set_textureRatioY",0xb47cb9ca,"away3d.core.render.RendererBase.set_textureRatioY","away3d/core/render/RendererBase.hx",415,0x39042c91)
namespace away3d{
namespace core{
namespace render{

void RendererBase_obj::__construct(::hx::Null< bool >  __o_renderToTexture){
            		bool renderToTexture = __o_renderToTexture.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_50ae55f9eb627e61_24_new)
HXLINE(  72)		this->_rttViewProjectionMatrix =  ::openfl::geom::Matrix3D_obj::__alloc( HX_CTX ,null());
HXLINE(  71)		this->_clearOnRender = true;
HXLINE(  66)		this->_textureRatioY = ((Float)1);
HXLINE(  65)		this->_textureRatioX = ((Float)1);
HXLINE(  50)		this->_shareContext = false;
HXLINE(  49)		this->_backgroundAlpha = ((Float)1);
HXLINE(  48)		this->_backgroundB = ((Float)0);
HXLINE(  47)		this->_backgroundG = ((Float)0);
HXLINE(  46)		this->_backgroundR = ((Float)0);
HXLINE(  79)		this->_renderableSorter =  ::away3d::core::sort::RenderableMergeSort_obj::__alloc( HX_CTX );
HXLINE(  80)		this->_renderToTexture = renderToTexture;
            	}

Dynamic RendererBase_obj::__CreateEmpty() { return new RendererBase_obj; }

void *RendererBase_obj::_hx_vtable = 0;

Dynamic RendererBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RendererBase_obj > _hx_result = new RendererBase_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool RendererBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0639ed90;
}

 ::away3d::core::traverse::EntityCollector RendererBase_obj::createEntityCollector(){
            	HX_GC_STACKFRAME(&_hx_pos_50ae55f9eb627e61_85_createEntityCollector)
HXDLIN(  85)		return  ::away3d::core::traverse::EntityCollector_obj::__alloc( HX_CTX );
            	}


HX_DEFINE_DYNAMIC_FUNC0(RendererBase_obj,createEntityCollector,return )

Float RendererBase_obj::get_viewWidth(){
            	HX_STACKFRAME(&_hx_pos_50ae55f9eb627e61_90_get_viewWidth)
HXDLIN(  90)		return this->_viewWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RendererBase_obj,get_viewWidth,return )

Float RendererBase_obj::set_viewWidth(Float value){
            	HX_STACKFRAME(&_hx_pos_50ae55f9eb627e61_94_set_viewWidth)
HXLINE(  95)		this->_viewWidth = value;
HXLINE(  96)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(RendererBase_obj,set_viewWidth,return )

Float RendererBase_obj::get_viewHeight(){
            	HX_STACKFRAME(&_hx_pos_50ae55f9eb627e61_101_get_viewHeight)
HXDLIN( 101)		return this->_viewHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RendererBase_obj,get_viewHeight,return )

Float RendererBase_obj::set_viewHeight(Float value){
            	HX_STACKFRAME(&_hx_pos_50ae55f9eb627e61_105_set_viewHeight)
HXLINE( 106)		this->_viewHeight = value;
HXLINE( 107)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(RendererBase_obj,set_viewHeight,return )

bool RendererBase_obj::get_renderToTexture(){
            	HX_STACKFRAME(&_hx_pos_50ae55f9eb627e61_112_get_renderToTexture)
HXDLIN( 112)		return this->_renderToTexture;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RendererBase_obj,get_renderToTexture,return )

::Dynamic RendererBase_obj::get_renderableSorter(){
            	HX_STACKFRAME(&_hx_pos_50ae55f9eb627e61_117_get_renderableSorter)
HXDLIN( 117)		return this->_renderableSorter;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RendererBase_obj,get_renderableSorter,return )

::Dynamic RendererBase_obj::set_renderableSorter(::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_50ae55f9eb627e61_121_set_renderableSorter)
HXLINE( 122)		this->_renderableSorter = value;
HXLINE( 123)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(RendererBase_obj,set_renderableSorter,return )

bool RendererBase_obj::get_clearOnRender(){
            	HX_STACKFRAME(&_hx_pos_50ae55f9eb627e61_128_get_clearOnRender)
HXDLIN( 128)		return this->_clearOnRender;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RendererBase_obj,get_clearOnRender,return )

bool RendererBase_obj::set_clearOnRender(bool value){
            	HX_STACKFRAME(&_hx_pos_50ae55f9eb627e61_132_set_clearOnRender)
HXLINE( 133)		this->_clearOnRender = value;
HXLINE( 134)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(RendererBase_obj,set_clearOnRender,return )

Float RendererBase_obj::get_backgroundR(){
            	HX_STACKFRAME(&_hx_pos_50ae55f9eb627e61_144_get_backgroundR)
HXDLIN( 144)		return this->_backgroundR;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RendererBase_obj,get_backgroundR,return )

Float RendererBase_obj::set_backgroundR(Float value){
            	HX_STACKFRAME(&_hx_pos_50ae55f9eb627e61_148_set_backgroundR)
HXLINE( 149)		this->_backgroundR = value;
HXLINE( 150)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(RendererBase_obj,set_backgroundR,return )

Float RendererBase_obj::get_backgroundG(){
            	HX_STACKFRAME(&_hx_pos_50ae55f9eb627e61_160_get_backgroundG)
HXDLIN( 160)		return this->_backgroundG;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RendererBase_obj,get_backgroundG,return )

Float RendererBase_obj::set_backgroundG(Float value){
            	HX_STACKFRAME(&_hx_pos_50ae55f9eb627e61_164_set_backgroundG)
HXLINE( 165)		this->_backgroundG = value;
HXLINE( 166)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(RendererBase_obj,set_backgroundG,return )

Float RendererBase_obj::get_backgroundB(){
            	HX_STACKFRAME(&_hx_pos_50ae55f9eb627e61_176_get_backgroundB)
HXDLIN( 176)		return this->_backgroundB;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RendererBase_obj,get_backgroundB,return )

Float RendererBase_obj::set_backgroundB(Float value){
            	HX_STACKFRAME(&_hx_pos_50ae55f9eb627e61_180_set_backgroundB)
HXLINE( 181)		this->_backgroundB = value;
HXLINE( 182)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(RendererBase_obj,set_backgroundB,return )

 ::away3d::core::managers::Stage3DProxy RendererBase_obj::get_stage3DProxy(){
            	HX_STACKFRAME(&_hx_pos_50ae55f9eb627e61_192_get_stage3DProxy)
HXDLIN( 192)		return this->_stage3DProxy;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RendererBase_obj,get_stage3DProxy,return )

 ::away3d::core::managers::Stage3DProxy RendererBase_obj::set_stage3DProxy( ::away3d::core::managers::Stage3DProxy value){
            	HX_STACKFRAME(&_hx_pos_50ae55f9eb627e61_196_set_stage3DProxy)
HXLINE( 197)		if (::hx::IsInstanceEq( value,this->_stage3DProxy )) {
HXLINE( 198)			return value;
            		}
HXLINE( 200)		if (::hx::IsNull( value )) {
HXLINE( 201)			if (::hx::IsNotNull( this->_stage3DProxy )) {
HXLINE( 202)				this->_stage3DProxy->removeEventListener(HX_("Context3DCreated",88,a9,28,8d),this->onContextUpdate_dyn(),null());
HXLINE( 203)				this->_stage3DProxy->removeEventListener(HX_("Context3DRecreated",35,9a,ac,ef),this->onContextUpdate_dyn(),null());
            			}
HXLINE( 205)			this->_stage3DProxy = null();
HXLINE( 206)			this->_context = null();
HXLINE( 207)			return null();
            		}
HXLINE( 210)		this->_stage3DProxy = value;
HXLINE( 211)		this->_stage3DProxy->addEventListener(HX_("Context3DCreated",88,a9,28,8d),this->onContextUpdate_dyn(),null(),null(),null());
HXLINE( 212)		this->_stage3DProxy->addEventListener(HX_("Context3DRecreated",35,9a,ac,ef),this->onContextUpdate_dyn(),null(),null(),null());
HXLINE( 213)		if (::hx::IsNotNull( this->_backgroundImageRenderer )) {
HXLINE( 214)			this->_backgroundImageRenderer->set_stage3DProxy(value);
            		}
HXLINE( 216)		if (::hx::IsNotNull( value->get_context3D() )) {
HXLINE( 217)			this->_context = value->get_context3D();
            		}
HXLINE( 219)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(RendererBase_obj,set_stage3DProxy,return )

bool RendererBase_obj::get_shareContext(){
            	HX_STACKFRAME(&_hx_pos_50ae55f9eb627e61_230_get_shareContext)
HXDLIN( 230)		return this->_shareContext;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RendererBase_obj,get_shareContext,return )

bool RendererBase_obj::set_shareContext(bool value){
            	HX_STACKFRAME(&_hx_pos_50ae55f9eb627e61_234_set_shareContext)
HXLINE( 235)		this->_shareContext = value;
HXLINE( 236)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(RendererBase_obj,set_shareContext,return )

void RendererBase_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_50ae55f9eb627e61_245_dispose)
HXLINE( 246)		this->set_stage3DProxy(null());
HXLINE( 247)		if (::hx::IsNotNull( this->_backgroundImageRenderer )) {
HXLINE( 248)			this->_backgroundImageRenderer->dispose();
HXLINE( 249)			this->_backgroundImageRenderer = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(RendererBase_obj,dispose,(void))

void RendererBase_obj::render( ::away3d::core::traverse::EntityCollector entityCollector, ::openfl::display3D::textures::TextureBase target, ::openfl::geom::Rectangle scissorRect,::hx::Null< int >  __o_surfaceSelector){
            		int surfaceSelector = __o_surfaceSelector.Default(0);
            	HX_STACKFRAME(&_hx_pos_50ae55f9eb627e61_261_render)
HXLINE( 262)		bool _hx_tmp;
HXDLIN( 262)		if (::hx::IsNotNull( this->_stage3DProxy )) {
HXLINE( 262)			_hx_tmp = ::hx::IsNull( this->_context );
            		}
            		else {
HXLINE( 262)			_hx_tmp = true;
            		}
HXDLIN( 262)		if (_hx_tmp) {
HXLINE( 263)			return;
            		}
HXLINE( 265)		 ::openfl::geom::Matrix3D _hx_tmp1 = this->_rttViewProjectionMatrix;
HXDLIN( 265)		_hx_tmp1->copyFrom(entityCollector->get_camera()->get_viewProjection());
HXLINE( 266)		this->_rttViewProjectionMatrix->appendScale(this->_textureRatioX,this->_textureRatioY,( (Float)(1) ));
HXLINE( 268)		this->executeRender(entityCollector,target,scissorRect,surfaceSelector);
HXLINE( 271)		{
HXLINE( 271)			{
HXLINE( 272)				this->_context->setVertexBufferAt(0,null(),null(),null());
HXLINE( 273)				this->_context->setTextureAt(0,null());
            			}
HXLINE( 271)			{
HXLINE( 272)				this->_context->setVertexBufferAt(1,null(),null(),null());
HXLINE( 273)				this->_context->setTextureAt(1,null());
            			}
HXLINE( 271)			{
HXLINE( 272)				this->_context->setVertexBufferAt(2,null(),null(),null());
HXLINE( 273)				this->_context->setTextureAt(2,null());
            			}
HXLINE( 271)			{
HXLINE( 272)				this->_context->setVertexBufferAt(3,null(),null(),null());
HXLINE( 273)				this->_context->setTextureAt(3,null());
            			}
HXLINE( 271)			{
HXLINE( 272)				this->_context->setVertexBufferAt(4,null(),null(),null());
HXLINE( 273)				this->_context->setTextureAt(4,null());
            			}
HXLINE( 271)			{
HXLINE( 272)				this->_context->setVertexBufferAt(5,null(),null(),null());
HXLINE( 273)				this->_context->setTextureAt(5,null());
            			}
HXLINE( 271)			{
HXLINE( 272)				this->_context->setVertexBufferAt(6,null(),null(),null());
HXLINE( 273)				this->_context->setTextureAt(6,null());
            			}
HXLINE( 271)			{
HXLINE( 272)				this->_context->setVertexBufferAt(7,null(),null(),null());
HXLINE( 273)				this->_context->setTextureAt(7,null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(RendererBase_obj,render,(void))

void RendererBase_obj::executeRender( ::away3d::core::traverse::EntityCollector entityCollector, ::openfl::display3D::textures::TextureBase target, ::openfl::geom::Rectangle scissorRect,::hx::Null< int >  __o_surfaceSelector){
            		int surfaceSelector = __o_surfaceSelector.Default(0);
            	HX_STACKFRAME(&_hx_pos_50ae55f9eb627e61_285_executeRender)
HXLINE( 286)		this->_renderTarget = target;
HXLINE( 287)		this->_renderTargetSurface = surfaceSelector;
HXLINE( 289)		if (::hx::IsNotNull( this->_renderableSorter )) {
HXLINE( 290)			::away3d::core::sort::IEntitySorter_obj::sort(this->_renderableSorter,entityCollector);
            		}
HXLINE( 292)		if (this->_renderToTexture) {
HXLINE( 293)			this->executeRenderToTexturePass(entityCollector);
            		}
HXLINE( 295)		this->_stage3DProxy->setRenderTarget(target,true,surfaceSelector);
HXLINE( 297)		bool _hx_tmp;
HXDLIN( 297)		bool _hx_tmp1;
HXDLIN( 297)		if (::hx::IsNull( target )) {
HXLINE( 297)			_hx_tmp1 = !(this->_shareContext);
            		}
            		else {
HXLINE( 297)			_hx_tmp1 = true;
            		}
HXDLIN( 297)		if (_hx_tmp1) {
HXLINE( 297)			_hx_tmp = this->_clearOnRender;
            		}
            		else {
HXLINE( 297)			_hx_tmp = false;
            		}
HXDLIN( 297)		if (_hx_tmp) {
HXLINE( 298)			this->_context->clear(this->_backgroundR,this->_backgroundG,this->_backgroundB,this->_backgroundAlpha,1,0,null());
            		}
HXLINE( 299)		this->_context->setDepthTest(false,0);
HXLINE( 300)		this->_stage3DProxy->set_scissorRect(scissorRect);
HXLINE( 301)		if (::hx::IsNotNull( this->_backgroundImageRenderer )) {
HXLINE( 302)			this->_backgroundImageRenderer->render();
            		}
HXLINE( 304)		this->draw(entityCollector,target);
HXLINE( 307)		this->_context->setDepthTest(false,5);
HXLINE( 309)		if (!(this->_shareContext)) {
HXLINE( 310)			bool _hx_tmp;
HXDLIN( 310)			if (this->_snapshotRequired) {
HXLINE( 310)				_hx_tmp = ::hx::IsNotNull( this->_snapshotBitmapData );
            			}
            			else {
HXLINE( 310)				_hx_tmp = false;
            			}
HXDLIN( 310)			if (_hx_tmp) {
HXLINE( 311)				this->_context->drawToBitmapData(this->_snapshotBitmapData,null(),null());
HXLINE( 312)				this->_snapshotRequired = false;
            			}
            		}
HXLINE( 315)		this->_stage3DProxy->set_scissorRect(null());
            	}


HX_DEFINE_DYNAMIC_FUNC4(RendererBase_obj,executeRender,(void))

void RendererBase_obj::queueSnapshot( ::openfl::display::BitmapData bmd){
            	HX_STACKFRAME(&_hx_pos_50ae55f9eb627e61_322_queueSnapshot)
HXLINE( 323)		this->_snapshotRequired = true;
HXLINE( 324)		this->_snapshotBitmapData = bmd;
            	}


HX_DEFINE_DYNAMIC_FUNC1(RendererBase_obj,queueSnapshot,(void))

void RendererBase_obj::executeRenderToTexturePass( ::away3d::core::traverse::EntityCollector entityCollector){
            	HX_GC_STACKFRAME(&_hx_pos_50ae55f9eb627e61_329_executeRenderToTexturePass)
HXDLIN( 329)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::away3d::errors::AbstractMethodError_obj::__alloc( HX_CTX ,null(),null())));
            	}


HX_DEFINE_DYNAMIC_FUNC1(RendererBase_obj,executeRenderToTexturePass,(void))

void RendererBase_obj::draw( ::away3d::core::traverse::EntityCollector entityCollector, ::openfl::display3D::textures::TextureBase target){
            	HX_GC_STACKFRAME(&_hx_pos_50ae55f9eb627e61_338_draw)
HXDLIN( 338)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::away3d::errors::AbstractMethodError_obj::__alloc( HX_CTX ,null(),null())));
            	}


HX_DEFINE_DYNAMIC_FUNC2(RendererBase_obj,draw,(void))

void RendererBase_obj::onContextUpdate( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_50ae55f9eb627e61_346_onContextUpdate)
HXDLIN( 346)		this->_context = this->_stage3DProxy->get_context3D();
            	}


HX_DEFINE_DYNAMIC_FUNC1(RendererBase_obj,onContextUpdate,(void))

Float RendererBase_obj::get_backgroundAlpha(){
            	HX_STACKFRAME(&_hx_pos_50ae55f9eb627e61_351_get_backgroundAlpha)
HXDLIN( 351)		return this->_backgroundAlpha;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RendererBase_obj,get_backgroundAlpha,return )

Float RendererBase_obj::set_backgroundAlpha(Float value){
            	HX_STACKFRAME(&_hx_pos_50ae55f9eb627e61_355_set_backgroundAlpha)
HXLINE( 356)		this->_backgroundAlpha = value;
HXLINE( 357)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(RendererBase_obj,set_backgroundAlpha,return )

 ::away3d::textures::Texture2DBase RendererBase_obj::get_background(){
            	HX_STACKFRAME(&_hx_pos_50ae55f9eb627e61_362_get_background)
HXDLIN( 362)		return this->_background;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RendererBase_obj,get_background,return )

 ::away3d::textures::Texture2DBase RendererBase_obj::set_background( ::away3d::textures::Texture2DBase value){
            	HX_GC_STACKFRAME(&_hx_pos_50ae55f9eb627e61_366_set_background)
HXLINE( 367)		bool _hx_tmp;
HXDLIN( 367)		if (::hx::IsNotNull( this->_backgroundImageRenderer )) {
HXLINE( 367)			_hx_tmp = ::hx::IsNull( value );
            		}
            		else {
HXLINE( 367)			_hx_tmp = false;
            		}
HXDLIN( 367)		if (_hx_tmp) {
HXLINE( 368)			this->_backgroundImageRenderer->dispose();
HXLINE( 369)			this->_backgroundImageRenderer = null();
            		}
HXLINE( 372)		bool _hx_tmp1;
HXDLIN( 372)		if (::hx::IsNull( this->_backgroundImageRenderer )) {
HXLINE( 372)			_hx_tmp1 = ::hx::IsNotNull( value );
            		}
            		else {
HXLINE( 372)			_hx_tmp1 = false;
            		}
HXDLIN( 372)		if (_hx_tmp1) {
HXLINE( 373)			this->_backgroundImageRenderer =  ::away3d::core::render::BackgroundImageRenderer_obj::__alloc( HX_CTX ,this->_stage3DProxy);
            		}
HXLINE( 375)		this->_background = value;
HXLINE( 377)		if (::hx::IsNotNull( this->_backgroundImageRenderer )) {
HXLINE( 378)			this->_backgroundImageRenderer->set_texture(value);
            		}
HXLINE( 380)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(RendererBase_obj,set_background,return )

 ::away3d::core::render::BackgroundImageRenderer RendererBase_obj::get_backgroundImageRenderer(){
            	HX_STACKFRAME(&_hx_pos_50ae55f9eb627e61_385_get_backgroundImageRenderer)
HXDLIN( 385)		return this->_backgroundImageRenderer;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RendererBase_obj,get_backgroundImageRenderer,return )

int RendererBase_obj::get_antiAlias(){
            	HX_STACKFRAME(&_hx_pos_50ae55f9eb627e61_390_get_antiAlias)
HXDLIN( 390)		return this->_antiAlias;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RendererBase_obj,get_antiAlias,return )

int RendererBase_obj::set_antiAlias(int antiAlias){
            	HX_STACKFRAME(&_hx_pos_50ae55f9eb627e61_394_set_antiAlias)
HXLINE( 395)		this->_antiAlias = antiAlias;
HXLINE( 396)		return antiAlias;
            	}


HX_DEFINE_DYNAMIC_FUNC1(RendererBase_obj,set_antiAlias,return )

Float RendererBase_obj::get_textureRatioX(){
            	HX_STACKFRAME(&_hx_pos_50ae55f9eb627e61_401_get_textureRatioX)
HXDLIN( 401)		return this->_textureRatioX;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RendererBase_obj,get_textureRatioX,return )

Float RendererBase_obj::set_textureRatioX(Float value){
            	HX_STACKFRAME(&_hx_pos_50ae55f9eb627e61_405_set_textureRatioX)
HXLINE( 406)		this->_textureRatioX = value;
HXLINE( 407)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(RendererBase_obj,set_textureRatioX,return )

Float RendererBase_obj::get_textureRatioY(){
            	HX_STACKFRAME(&_hx_pos_50ae55f9eb627e61_412_get_textureRatioY)
HXDLIN( 412)		return this->_textureRatioY;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RendererBase_obj,get_textureRatioY,return )

Float RendererBase_obj::set_textureRatioY(Float value){
            	HX_STACKFRAME(&_hx_pos_50ae55f9eb627e61_415_set_textureRatioY)
HXLINE( 416)		this->_textureRatioY = value;
HXLINE( 417)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(RendererBase_obj,set_textureRatioY,return )


::hx::ObjectPtr< RendererBase_obj > RendererBase_obj::__new(::hx::Null< bool >  __o_renderToTexture) {
	::hx::ObjectPtr< RendererBase_obj > __this = new RendererBase_obj();
	__this->__construct(__o_renderToTexture);
	return __this;
}

::hx::ObjectPtr< RendererBase_obj > RendererBase_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_renderToTexture) {
	RendererBase_obj *__this = (RendererBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RendererBase_obj), true, "away3d.core.render.RendererBase"));
	*(void **)__this = RendererBase_obj::_hx_vtable;
	__this->__construct(__o_renderToTexture);
	return __this;
}

RendererBase_obj::RendererBase_obj()
{
}

void RendererBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RendererBase);
	HX_MARK_MEMBER_NAME(_context,"_context");
	HX_MARK_MEMBER_NAME(_stage3DProxy,"_stage3DProxy");
	HX_MARK_MEMBER_NAME(_backgroundR,"_backgroundR");
	HX_MARK_MEMBER_NAME(_backgroundG,"_backgroundG");
	HX_MARK_MEMBER_NAME(_backgroundB,"_backgroundB");
	HX_MARK_MEMBER_NAME(_backgroundAlpha,"_backgroundAlpha");
	HX_MARK_MEMBER_NAME(_shareContext,"_shareContext");
	HX_MARK_MEMBER_NAME(_renderTarget,"_renderTarget");
	HX_MARK_MEMBER_NAME(_renderTargetSurface,"_renderTargetSurface");
	HX_MARK_MEMBER_NAME(_viewWidth,"_viewWidth");
	HX_MARK_MEMBER_NAME(_viewHeight,"_viewHeight");
	HX_MARK_MEMBER_NAME(_renderableSorter,"_renderableSorter");
	HX_MARK_MEMBER_NAME(_backgroundImageRenderer,"_backgroundImageRenderer");
	HX_MARK_MEMBER_NAME(_background,"_background");
	HX_MARK_MEMBER_NAME(_renderToTexture,"_renderToTexture");
	HX_MARK_MEMBER_NAME(_antiAlias,"_antiAlias");
	HX_MARK_MEMBER_NAME(_textureRatioX,"_textureRatioX");
	HX_MARK_MEMBER_NAME(_textureRatioY,"_textureRatioY");
	HX_MARK_MEMBER_NAME(_snapshotBitmapData,"_snapshotBitmapData");
	HX_MARK_MEMBER_NAME(_snapshotRequired,"_snapshotRequired");
	HX_MARK_MEMBER_NAME(_clearOnRender,"_clearOnRender");
	HX_MARK_MEMBER_NAME(_rttViewProjectionMatrix,"_rttViewProjectionMatrix");
	HX_MARK_END_CLASS();
}

void RendererBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_context,"_context");
	HX_VISIT_MEMBER_NAME(_stage3DProxy,"_stage3DProxy");
	HX_VISIT_MEMBER_NAME(_backgroundR,"_backgroundR");
	HX_VISIT_MEMBER_NAME(_backgroundG,"_backgroundG");
	HX_VISIT_MEMBER_NAME(_backgroundB,"_backgroundB");
	HX_VISIT_MEMBER_NAME(_backgroundAlpha,"_backgroundAlpha");
	HX_VISIT_MEMBER_NAME(_shareContext,"_shareContext");
	HX_VISIT_MEMBER_NAME(_renderTarget,"_renderTarget");
	HX_VISIT_MEMBER_NAME(_renderTargetSurface,"_renderTargetSurface");
	HX_VISIT_MEMBER_NAME(_viewWidth,"_viewWidth");
	HX_VISIT_MEMBER_NAME(_viewHeight,"_viewHeight");
	HX_VISIT_MEMBER_NAME(_renderableSorter,"_renderableSorter");
	HX_VISIT_MEMBER_NAME(_backgroundImageRenderer,"_backgroundImageRenderer");
	HX_VISIT_MEMBER_NAME(_background,"_background");
	HX_VISIT_MEMBER_NAME(_renderToTexture,"_renderToTexture");
	HX_VISIT_MEMBER_NAME(_antiAlias,"_antiAlias");
	HX_VISIT_MEMBER_NAME(_textureRatioX,"_textureRatioX");
	HX_VISIT_MEMBER_NAME(_textureRatioY,"_textureRatioY");
	HX_VISIT_MEMBER_NAME(_snapshotBitmapData,"_snapshotBitmapData");
	HX_VISIT_MEMBER_NAME(_snapshotRequired,"_snapshotRequired");
	HX_VISIT_MEMBER_NAME(_clearOnRender,"_clearOnRender");
	HX_VISIT_MEMBER_NAME(_rttViewProjectionMatrix,"_rttViewProjectionMatrix");
}

::hx::Val RendererBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_context") ) { return ::hx::Val( _context ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"viewWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_viewWidth() ); }
		if (HX_FIELD_EQ(inName,"antiAlias") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_antiAlias() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"viewHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_viewHeight() ); }
		if (HX_FIELD_EQ(inName,"background") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_background() ); }
		if (HX_FIELD_EQ(inName,"_viewWidth") ) { return ::hx::Val( _viewWidth ); }
		if (HX_FIELD_EQ(inName,"_antiAlias") ) { return ::hx::Val( _antiAlias ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"backgroundR") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_backgroundR() ); }
		if (HX_FIELD_EQ(inName,"backgroundG") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_backgroundG() ); }
		if (HX_FIELD_EQ(inName,"backgroundB") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_backgroundB() ); }
		if (HX_FIELD_EQ(inName,"_viewHeight") ) { return ::hx::Val( _viewHeight ); }
		if (HX_FIELD_EQ(inName,"_background") ) { return ::hx::Val( _background ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"stage3DProxy") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_stage3DProxy() ); }
		if (HX_FIELD_EQ(inName,"shareContext") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_shareContext() ); }
		if (HX_FIELD_EQ(inName,"_backgroundR") ) { return ::hx::Val( _backgroundR ); }
		if (HX_FIELD_EQ(inName,"_backgroundG") ) { return ::hx::Val( _backgroundG ); }
		if (HX_FIELD_EQ(inName,"_backgroundB") ) { return ::hx::Val( _backgroundB ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"clearOnRender") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_clearOnRender() ); }
		if (HX_FIELD_EQ(inName,"textureRatioX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_textureRatioX() ); }
		if (HX_FIELD_EQ(inName,"textureRatioY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_textureRatioY() ); }
		if (HX_FIELD_EQ(inName,"_stage3DProxy") ) { return ::hx::Val( _stage3DProxy ); }
		if (HX_FIELD_EQ(inName,"_shareContext") ) { return ::hx::Val( _shareContext ); }
		if (HX_FIELD_EQ(inName,"_renderTarget") ) { return ::hx::Val( _renderTarget ); }
		if (HX_FIELD_EQ(inName,"get_viewWidth") ) { return ::hx::Val( get_viewWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_viewWidth") ) { return ::hx::Val( set_viewWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"executeRender") ) { return ::hx::Val( executeRender_dyn() ); }
		if (HX_FIELD_EQ(inName,"queueSnapshot") ) { return ::hx::Val( queueSnapshot_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_antiAlias") ) { return ::hx::Val( get_antiAlias_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_antiAlias") ) { return ::hx::Val( set_antiAlias_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_textureRatioX") ) { return ::hx::Val( _textureRatioX ); }
		if (HX_FIELD_EQ(inName,"_textureRatioY") ) { return ::hx::Val( _textureRatioY ); }
		if (HX_FIELD_EQ(inName,"_clearOnRender") ) { return ::hx::Val( _clearOnRender ); }
		if (HX_FIELD_EQ(inName,"get_viewHeight") ) { return ::hx::Val( get_viewHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_viewHeight") ) { return ::hx::Val( set_viewHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_background") ) { return ::hx::Val( get_background_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_background") ) { return ::hx::Val( set_background_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"renderToTexture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_renderToTexture() ); }
		if (HX_FIELD_EQ(inName,"backgroundAlpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_backgroundAlpha() ); }
		if (HX_FIELD_EQ(inName,"get_backgroundR") ) { return ::hx::Val( get_backgroundR_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_backgroundR") ) { return ::hx::Val( set_backgroundR_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_backgroundG") ) { return ::hx::Val( get_backgroundG_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_backgroundG") ) { return ::hx::Val( set_backgroundG_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_backgroundB") ) { return ::hx::Val( get_backgroundB_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_backgroundB") ) { return ::hx::Val( set_backgroundB_dyn() ); }
		if (HX_FIELD_EQ(inName,"onContextUpdate") ) { return ::hx::Val( onContextUpdate_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"renderableSorter") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_renderableSorter() ); }
		if (HX_FIELD_EQ(inName,"_backgroundAlpha") ) { return ::hx::Val( _backgroundAlpha ); }
		if (HX_FIELD_EQ(inName,"_renderToTexture") ) { return ::hx::Val( _renderToTexture ); }
		if (HX_FIELD_EQ(inName,"get_stage3DProxy") ) { return ::hx::Val( get_stage3DProxy_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_stage3DProxy") ) { return ::hx::Val( set_stage3DProxy_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_shareContext") ) { return ::hx::Val( get_shareContext_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_shareContext") ) { return ::hx::Val( set_shareContext_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_renderableSorter") ) { return ::hx::Val( _renderableSorter ); }
		if (HX_FIELD_EQ(inName,"_snapshotRequired") ) { return ::hx::Val( _snapshotRequired ); }
		if (HX_FIELD_EQ(inName,"get_clearOnRender") ) { return ::hx::Val( get_clearOnRender_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_clearOnRender") ) { return ::hx::Val( set_clearOnRender_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_textureRatioX") ) { return ::hx::Val( get_textureRatioX_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_textureRatioX") ) { return ::hx::Val( set_textureRatioX_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_textureRatioY") ) { return ::hx::Val( get_textureRatioY_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_textureRatioY") ) { return ::hx::Val( set_textureRatioY_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_snapshotBitmapData") ) { return ::hx::Val( _snapshotBitmapData ); }
		if (HX_FIELD_EQ(inName,"get_renderToTexture") ) { return ::hx::Val( get_renderToTexture_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_backgroundAlpha") ) { return ::hx::Val( get_backgroundAlpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_backgroundAlpha") ) { return ::hx::Val( set_backgroundAlpha_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_renderTargetSurface") ) { return ::hx::Val( _renderTargetSurface ); }
		if (HX_FIELD_EQ(inName,"get_renderableSorter") ) { return ::hx::Val( get_renderableSorter_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_renderableSorter") ) { return ::hx::Val( set_renderableSorter_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createEntityCollector") ) { return ::hx::Val( createEntityCollector_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"backgroundImageRenderer") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_backgroundImageRenderer() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_backgroundImageRenderer") ) { return ::hx::Val( _backgroundImageRenderer ); }
		if (HX_FIELD_EQ(inName,"_rttViewProjectionMatrix") ) { return ::hx::Val( _rttViewProjectionMatrix ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"executeRenderToTexturePass") ) { return ::hx::Val( executeRenderToTexturePass_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"get_backgroundImageRenderer") ) { return ::hx::Val( get_backgroundImageRenderer_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val RendererBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_context") ) { _context=inValue.Cast<  ::openfl::display3D::Context3D >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"viewWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_viewWidth(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"antiAlias") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_antiAlias(inValue.Cast< int >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"viewHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_viewHeight(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"background") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_background(inValue.Cast<  ::away3d::textures::Texture2DBase >()) ); }
		if (HX_FIELD_EQ(inName,"_viewWidth") ) { _viewWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_antiAlias") ) { _antiAlias=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"backgroundR") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_backgroundR(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"backgroundG") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_backgroundG(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"backgroundB") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_backgroundB(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"_viewHeight") ) { _viewHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_background") ) { _background=inValue.Cast<  ::away3d::textures::Texture2DBase >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"stage3DProxy") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_stage3DProxy(inValue.Cast<  ::away3d::core::managers::Stage3DProxy >()) ); }
		if (HX_FIELD_EQ(inName,"shareContext") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_shareContext(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"_backgroundR") ) { _backgroundR=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_backgroundG") ) { _backgroundG=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_backgroundB") ) { _backgroundB=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"clearOnRender") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_clearOnRender(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"textureRatioX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_textureRatioX(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"textureRatioY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_textureRatioY(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"_stage3DProxy") ) { _stage3DProxy=inValue.Cast<  ::away3d::core::managers::Stage3DProxy >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_shareContext") ) { _shareContext=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_renderTarget") ) { _renderTarget=inValue.Cast<  ::openfl::display3D::textures::TextureBase >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_textureRatioX") ) { _textureRatioX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_textureRatioY") ) { _textureRatioY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_clearOnRender") ) { _clearOnRender=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundAlpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_backgroundAlpha(inValue.Cast< Float >()) ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"renderableSorter") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_renderableSorter(inValue.Cast< ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"_backgroundAlpha") ) { _backgroundAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_renderToTexture") ) { _renderToTexture=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_renderableSorter") ) { _renderableSorter=inValue.Cast< ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_snapshotRequired") ) { _snapshotRequired=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_snapshotBitmapData") ) { _snapshotBitmapData=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_renderTargetSurface") ) { _renderTargetSurface=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_backgroundImageRenderer") ) { _backgroundImageRenderer=inValue.Cast<  ::away3d::core::render::BackgroundImageRenderer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rttViewProjectionMatrix") ) { _rttViewProjectionMatrix=inValue.Cast<  ::openfl::geom::Matrix3D >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RendererBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("viewWidth",61,25,f7,0a));
	outFields->push(HX_("viewHeight",2c,08,99,43));
	outFields->push(HX_("renderToTexture",6a,5a,1d,b7));
	outFields->push(HX_("renderableSorter",5b,d7,a2,3e));
	outFields->push(HX_("clearOnRender",82,64,33,18));
	outFields->push(HX_("backgroundR",a4,dc,c3,33));
	outFields->push(HX_("backgroundG",99,dc,c3,33));
	outFields->push(HX_("backgroundB",94,dc,c3,33));
	outFields->push(HX_("stage3DProxy",ff,18,cf,0e));
	outFields->push(HX_("shareContext",d0,c2,c1,26));
	outFields->push(HX_("backgroundAlpha",90,84,81,e4));
	outFields->push(HX_("background",ee,93,1d,26));
	outFields->push(HX_("backgroundImageRenderer",f0,52,34,ea));
	outFields->push(HX_("antiAlias",8e,46,17,09));
	outFields->push(HX_("textureRatioX",28,08,a2,4e));
	outFields->push(HX_("textureRatioY",29,08,a2,4e));
	outFields->push(HX_("_context",70,ef,2f,53));
	outFields->push(HX_("_stage3DProxy",de,ab,3d,f1));
	outFields->push(HX_("_backgroundR",a5,8a,cd,99));
	outFields->push(HX_("_backgroundG",9a,8a,cd,99));
	outFields->push(HX_("_backgroundB",95,8a,cd,99));
	outFields->push(HX_("_backgroundAlpha",11,c7,60,cf));
	outFields->push(HX_("_shareContext",af,55,30,09));
	outFields->push(HX_("_renderTarget",26,8a,b1,d8));
	outFields->push(HX_("_renderTargetSurface",a7,34,0b,e9));
	outFields->push(HX_("_viewWidth",22,a1,99,66));
	outFields->push(HX_("_viewHeight",4b,d5,22,16));
	outFields->push(HX_("_renderableSorter",ba,c5,1d,d7));
	outFields->push(HX_("_backgroundImageRenderer",71,7e,cb,d4));
	outFields->push(HX_("_background",0d,61,a7,f8));
	outFields->push(HX_("_renderToTexture",eb,9c,fc,a1));
	outFields->push(HX_("_antiAlias",4f,c2,b9,64));
	outFields->push(HX_("_textureRatioX",69,f8,f3,8c));
	outFields->push(HX_("_textureRatioY",6a,f8,f3,8c));
	outFields->push(HX_("_snapshotBitmapData",3c,d3,22,ea));
	outFields->push(HX_("_snapshotRequired",22,38,3b,c4));
	outFields->push(HX_("_clearOnRender",c3,54,85,56));
	outFields->push(HX_("_rttViewProjectionMatrix",c8,93,ff,f9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo RendererBase_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display3D::Context3D */ ,(int)offsetof(RendererBase_obj,_context),HX_("_context",70,ef,2f,53)},
	{::hx::fsObject /*  ::away3d::core::managers::Stage3DProxy */ ,(int)offsetof(RendererBase_obj,_stage3DProxy),HX_("_stage3DProxy",de,ab,3d,f1)},
	{::hx::fsFloat,(int)offsetof(RendererBase_obj,_backgroundR),HX_("_backgroundR",a5,8a,cd,99)},
	{::hx::fsFloat,(int)offsetof(RendererBase_obj,_backgroundG),HX_("_backgroundG",9a,8a,cd,99)},
	{::hx::fsFloat,(int)offsetof(RendererBase_obj,_backgroundB),HX_("_backgroundB",95,8a,cd,99)},
	{::hx::fsFloat,(int)offsetof(RendererBase_obj,_backgroundAlpha),HX_("_backgroundAlpha",11,c7,60,cf)},
	{::hx::fsBool,(int)offsetof(RendererBase_obj,_shareContext),HX_("_shareContext",af,55,30,09)},
	{::hx::fsObject /*  ::openfl::display3D::textures::TextureBase */ ,(int)offsetof(RendererBase_obj,_renderTarget),HX_("_renderTarget",26,8a,b1,d8)},
	{::hx::fsInt,(int)offsetof(RendererBase_obj,_renderTargetSurface),HX_("_renderTargetSurface",a7,34,0b,e9)},
	{::hx::fsFloat,(int)offsetof(RendererBase_obj,_viewWidth),HX_("_viewWidth",22,a1,99,66)},
	{::hx::fsFloat,(int)offsetof(RendererBase_obj,_viewHeight),HX_("_viewHeight",4b,d5,22,16)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(RendererBase_obj,_renderableSorter),HX_("_renderableSorter",ba,c5,1d,d7)},
	{::hx::fsObject /*  ::away3d::core::render::BackgroundImageRenderer */ ,(int)offsetof(RendererBase_obj,_backgroundImageRenderer),HX_("_backgroundImageRenderer",71,7e,cb,d4)},
	{::hx::fsObject /*  ::away3d::textures::Texture2DBase */ ,(int)offsetof(RendererBase_obj,_background),HX_("_background",0d,61,a7,f8)},
	{::hx::fsBool,(int)offsetof(RendererBase_obj,_renderToTexture),HX_("_renderToTexture",eb,9c,fc,a1)},
	{::hx::fsInt,(int)offsetof(RendererBase_obj,_antiAlias),HX_("_antiAlias",4f,c2,b9,64)},
	{::hx::fsFloat,(int)offsetof(RendererBase_obj,_textureRatioX),HX_("_textureRatioX",69,f8,f3,8c)},
	{::hx::fsFloat,(int)offsetof(RendererBase_obj,_textureRatioY),HX_("_textureRatioY",6a,f8,f3,8c)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(RendererBase_obj,_snapshotBitmapData),HX_("_snapshotBitmapData",3c,d3,22,ea)},
	{::hx::fsBool,(int)offsetof(RendererBase_obj,_snapshotRequired),HX_("_snapshotRequired",22,38,3b,c4)},
	{::hx::fsBool,(int)offsetof(RendererBase_obj,_clearOnRender),HX_("_clearOnRender",c3,54,85,56)},
	{::hx::fsObject /*  ::openfl::geom::Matrix3D */ ,(int)offsetof(RendererBase_obj,_rttViewProjectionMatrix),HX_("_rttViewProjectionMatrix",c8,93,ff,f9)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *RendererBase_obj_sStaticStorageInfo = 0;
#endif

static ::String RendererBase_obj_sMemberFields[] = {
	HX_("_context",70,ef,2f,53),
	HX_("_stage3DProxy",de,ab,3d,f1),
	HX_("_backgroundR",a5,8a,cd,99),
	HX_("_backgroundG",9a,8a,cd,99),
	HX_("_backgroundB",95,8a,cd,99),
	HX_("_backgroundAlpha",11,c7,60,cf),
	HX_("_shareContext",af,55,30,09),
	HX_("_renderTarget",26,8a,b1,d8),
	HX_("_renderTargetSurface",a7,34,0b,e9),
	HX_("_viewWidth",22,a1,99,66),
	HX_("_viewHeight",4b,d5,22,16),
	HX_("_renderableSorter",ba,c5,1d,d7),
	HX_("_backgroundImageRenderer",71,7e,cb,d4),
	HX_("_background",0d,61,a7,f8),
	HX_("_renderToTexture",eb,9c,fc,a1),
	HX_("_antiAlias",4f,c2,b9,64),
	HX_("_textureRatioX",69,f8,f3,8c),
	HX_("_textureRatioY",6a,f8,f3,8c),
	HX_("_snapshotBitmapData",3c,d3,22,ea),
	HX_("_snapshotRequired",22,38,3b,c4),
	HX_("_clearOnRender",c3,54,85,56),
	HX_("_rttViewProjectionMatrix",c8,93,ff,f9),
	HX_("createEntityCollector",0e,f2,87,7e),
	HX_("get_viewWidth",38,f9,5a,cc),
	HX_("set_viewWidth",44,db,60,11),
	HX_("get_viewHeight",75,90,8e,b9),
	HX_("set_viewHeight",e9,78,ae,d9),
	HX_("get_renderToTexture",81,29,28,42),
	HX_("get_renderableSorter",64,3c,0d,5d),
	HX_("set_renderableSorter",d8,f3,c4,29),
	HX_("get_clearOnRender",d9,6f,a3,1e),
	HX_("set_clearOnRender",e5,47,11,42),
	HX_("get_backgroundR",3b,94,a5,f4),
	HX_("set_backgroundR",47,11,71,f0),
	HX_("get_backgroundG",30,94,a5,f4),
	HX_("set_backgroundG",3c,11,71,f0),
	HX_("get_backgroundB",2b,94,a5,f4),
	HX_("set_backgroundB",37,11,71,f0),
	HX_("get_stage3DProxy",88,05,6e,13),
	HX_("set_stage3DProxy",fc,f2,af,69),
	HX_("get_shareContext",59,af,60,2b),
	HX_("set_shareContext",cd,9c,a2,81),
	HX_("dispose",9f,80,4c,bb),
	HX_("render",56,6b,29,05),
	HX_("executeRender",6b,ff,1f,80),
	HX_("queueSnapshot",f5,da,e1,c4),
	HX_("executeRenderToTexturePass",26,ab,2b,e7),
	HX_("draw",04,2c,70,42),
	HX_("onContextUpdate",b9,94,7d,20),
	HX_("get_backgroundAlpha",a7,53,8c,6f),
	HX_("set_backgroundAlpha",b3,46,29,ac),
	HX_("get_background",37,1c,13,9c),
	HX_("set_background",ab,04,33,bc),
	HX_("get_backgroundImageRenderer",07,91,d6,b6),
	HX_("get_antiAlias",65,1a,7b,ca),
	HX_("set_antiAlias",71,fc,80,0f),
	HX_("get_textureRatioX",7f,13,12,55),
	HX_("set_textureRatioX",8b,eb,7f,78),
	HX_("get_textureRatioY",80,13,12,55),
	HX_("set_textureRatioY",8c,eb,7f,78),
	::String(null()) };

::hx::Class RendererBase_obj::__mClass;

void RendererBase_obj::__register()
{
	RendererBase_obj _hx_dummy;
	RendererBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.render.RendererBase",2c,a7,12,5b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RendererBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RendererBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RendererBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RendererBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace core
} // end namespace render
