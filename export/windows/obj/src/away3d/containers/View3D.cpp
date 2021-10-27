#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_cameras_Camera3D
#include <away3d/cameras/Camera3D.h>
#endif
#ifndef INCLUDED_away3d_cameras_lenses_LensBase
#include <away3d/cameras/lenses/LensBase.h>
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
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Mouse3DManager
#include <away3d/core/managers/Mouse3DManager.h>
#endif
#ifndef INCLUDED_away3d_core_managers_RTTBufferManager
#include <away3d/core/managers/RTTBufferManager.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DManager
#include <away3d/core/managers/Stage3DManager.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Touch3DManager
#include <away3d/core/managers/Touch3DManager.h>
#endif
#ifndef INCLUDED_away3d_core_partition_Partition3D
#include <away3d/core/partition/Partition3D.h>
#endif
#ifndef INCLUDED_away3d_core_pick_IPicker
#include <away3d/core/pick/IPicker.h>
#endif
#ifndef INCLUDED_away3d_core_render_DefaultRenderer
#include <away3d/core/render/DefaultRenderer.h>
#endif
#ifndef INCLUDED_away3d_core_render_DepthRenderer
#include <away3d/core/render/DepthRenderer.h>
#endif
#ifndef INCLUDED_away3d_core_render_Filter3DRenderer
#include <away3d/core/render/Filter3DRenderer.h>
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
#ifndef INCLUDED_away3d_events_Stage3DEvent
#include <away3d/events/Stage3DEvent.h>
#endif
#ifndef INCLUDED_away3d_filters_Filter3DBase
#include <away3d/filters/Filter3DBase.h>
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
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
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
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_Texture
#include <openfl/display3D/textures/Texture.h>
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
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_c7e943222c2938e6_42_new,"away3d.containers.View3D","new",0x79797d55,"away3d.containers.View3D.new","away3d/containers/View3D.hx",42,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_119_get_depthPrepass,"away3d.containers.View3D","get_depthPrepass",0x3a6aca25,"away3d.containers.View3D.get_depthPrepass","away3d/containers/View3D.hx",119,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_123_set_depthPrepass,"away3d.containers.View3D","set_depthPrepass",0x90acb799,"away3d.containers.View3D.set_depthPrepass","away3d/containers/View3D.hx",123,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_201_onScenePartitionChanged,"away3d.containers.View3D","onScenePartitionChanged",0x8c1aab6c,"away3d.containers.View3D.onScenePartitionChanged","away3d/containers/View3D.hx",201,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_226_get_stage3DProxy,"away3d.containers.View3D","get_stage3DProxy",0xcb0da373,"away3d.containers.View3D.get_stage3DProxy","away3d/containers/View3D.hx",226,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_230_set_stage3DProxy,"away3d.containers.View3D","set_stage3DProxy",0x214f90e7,"away3d.containers.View3D.set_stage3DProxy","away3d/containers/View3D.hx",230,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_249_onContext3DRecreated,"away3d.containers.View3D","onContext3DRecreated",0x2c4b1e7f,"away3d.containers.View3D.onContext3DRecreated","away3d/containers/View3D.hx",249,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_260_get_forceMouseMove,"away3d.containers.View3D","get_forceMouseMove",0x917ec3df,"away3d.containers.View3D.get_forceMouseMove","away3d/containers/View3D.hx",260,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_264_set_forceMouseMove,"away3d.containers.View3D","set_forceMouseMove",0x6e2df653,"away3d.containers.View3D.set_forceMouseMove","away3d/containers/View3D.hx",264,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_274_get_background,"away3d.containers.View3D","get_background",0x24e8d962,"away3d.containers.View3D.get_background","away3d/containers/View3D.hx",274,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_278_set_background,"away3d.containers.View3D","set_background",0x4508c1d6,"away3d.containers.View3D.set_background","away3d/containers/View3D.hx",278,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_294_get_layeredView,"away3d.containers.View3D","get_layeredView",0x25f48701,"away3d.containers.View3D.get_layeredView","away3d/containers/View3D.hx",294,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_298_set_layeredView,"away3d.containers.View3D","set_layeredView",0x21c0040d,"away3d.containers.View3D.set_layeredView","away3d/containers/View3D.hx",298,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_304_initHitField,"away3d.containers.View3D","initHitField",0xaeb30502,"away3d.containers.View3D.initHitField","away3d/containers/View3D.hx",304,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_317_get_filters3d,"away3d.containers.View3D","get_filters3d",0xa1341858,"away3d.containers.View3D.get_filters3d","away3d/containers/View3D.hx",317,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_321_set_filters3d,"away3d.containers.View3D","set_filters3d",0xe639fa64,"away3d.containers.View3D.set_filters3d","away3d/containers/View3D.hx",321,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_353_get_renderer,"away3d.containers.View3D","get_renderer",0x31ff05b7,"away3d.containers.View3D.get_renderer","away3d/containers/View3D.hx",353,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_357_set_renderer,"away3d.containers.View3D","set_renderer",0x46f8292b,"away3d.containers.View3D.set_renderer","away3d/containers/View3D.hx",357,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_382_get_backgroundColor,"away3d.containers.View3D","get_backgroundColor",0x8fe7c4a1,"away3d.containers.View3D.get_backgroundColor","away3d/containers/View3D.hx",382,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_386_set_backgroundColor,"away3d.containers.View3D","set_backgroundColor",0xcc84b7ad,"away3d.containers.View3D.set_backgroundColor","away3d/containers/View3D.hx",386,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_398_get_backgroundAlpha,"away3d.containers.View3D","get_backgroundAlpha",0x6721fa9c,"away3d.containers.View3D.get_backgroundAlpha","away3d/containers/View3D.hx",398,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_402_set_backgroundAlpha,"away3d.containers.View3D","set_backgroundAlpha",0xa3beeda8,"away3d.containers.View3D.set_backgroundAlpha","away3d/containers/View3D.hx",402,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_420_get_camera,"away3d.containers.View3D","get_camera",0x6f82c219,"away3d.containers.View3D.get_camera","away3d/containers/View3D.hx",420,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_427_set_camera,"away3d.containers.View3D","set_camera",0x7300608d,"away3d.containers.View3D.set_camera","away3d/containers/View3D.hx",427,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_450_get_scene,"away3d.containers.View3D","get_scene",0x57348858,"away3d.containers.View3D.get_scene","away3d/containers/View3D.hx",450,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_457_set_scene,"away3d.containers.View3D","set_scene",0x3a857464,"away3d.containers.View3D.set_scene","away3d/containers/View3D.hx",457,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_476_get_deltaTime,"away3d.containers.View3D","get_deltaTime",0xb5116131,"away3d.containers.View3D.get_deltaTime","away3d/containers/View3D.hx",476,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_489_get_filters,"away3d.containers.View3D","get_filters",0x48fc2bc7,"away3d.containers.View3D.get_filters","away3d/containers/View3D.hx",489,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_503_set_filters,"away3d.containers.View3D","set_filters",0x536932d3,"away3d.containers.View3D.set_filters","away3d/containers/View3D.hx",503,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_518_get_width,"away3d.containers.View3D","get_width",0xa8c56512,"away3d.containers.View3D.get_width","away3d/containers/View3D.hx",518,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_527_set_width,"away3d.containers.View3D","set_width",0x8c16511e,"away3d.containers.View3D.set_width","away3d/containers/View3D.hx",527,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_569_get_height,"away3d.containers.View3D","get_height",0xba42835b,"away3d.containers.View3D.get_height","away3d/containers/View3D.hx",569,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_578_set_height,"away3d.containers.View3D","set_height",0xbdc021cf,"away3d.containers.View3D.set_height","away3d/containers/View3D.hx",578,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_615_set_x,"away3d.containers.View3D","set_x",0xc9d22f90,"away3d.containers.View3D.set_x","away3d/containers/View3D.hx",615,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_634_set_y,"away3d.containers.View3D","set_y",0xc9d22f91,"away3d.containers.View3D.set_y","away3d/containers/View3D.hx",634,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_653_set_visible,"away3d.containers.View3D","set_visible",0xed47098a,"away3d.containers.View3D.set_visible","away3d/containers/View3D.hx",653,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_668_get_antiAlias,"away3d.containers.View3D","get_antiAlias",0xc8cc6b9a,"away3d.containers.View3D.get_antiAlias","away3d/containers/View3D.hx",668,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_672_set_antiAlias,"away3d.containers.View3D","set_antiAlias",0x0dd24da6,"away3d.containers.View3D.set_antiAlias","away3d/containers/View3D.hx",672,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_686_get_renderedFacesCount,"away3d.containers.View3D","get_renderedFacesCount",0x9296d2c2,"away3d.containers.View3D.get_renderedFacesCount","away3d/containers/View3D.hx",686,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_696_get_shareContext,"away3d.containers.View3D","get_shareContext",0xe3004d44,"away3d.containers.View3D.get_shareContext","away3d/containers/View3D.hx",696,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_700_set_shareContext,"away3d.containers.View3D","set_shareContext",0x39423ab8,"away3d.containers.View3D.set_shareContext","away3d/containers/View3D.hx",700,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_717_updateBackBuffer,"away3d.containers.View3D","updateBackBuffer",0x10aa0fdb,"away3d.containers.View3D.updateBackBuffer","away3d/containers/View3D.hx",717,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_766_render,"away3d.containers.View3D","render",0x63c88581,"away3d.containers.View3D.render","away3d/containers/View3D.hx",766,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_844_updateGlobalPos,"away3d.containers.View3D","updateGlobalPos",0xda6a3d1d,"away3d.containers.View3D.updateGlobalPos","away3d/containers/View3D.hx",844,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_864_updateTime,"away3d.containers.View3D","updateTime",0xcd20c261,"away3d.containers.View3D.updateTime","away3d/containers/View3D.hx",864,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_873_updateViewSizeData,"away3d.containers.View3D","updateViewSizeData",0xd837dd64,"away3d.containers.View3D.updateViewSizeData","away3d/containers/View3D.hx",873,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_896_renderDepthPrepass,"away3d.containers.View3D","renderDepthPrepass",0x5d39ced2,"away3d.containers.View3D.renderDepthPrepass","away3d/containers/View3D.hx",896,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_911_renderSceneDepthToTexture,"away3d.containers.View3D","renderSceneDepthToTexture",0xb58ed888,"away3d.containers.View3D.renderSceneDepthToTexture","away3d/containers/View3D.hx",911,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_920_initDepthTexture,"away3d.containers.View3D","initDepthTexture",0x9010f333,"away3d.containers.View3D.initDepthTexture","away3d/containers/View3D.hx",920,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_933_dispose,"away3d.containers.View3D","dispose",0x27e44c14,"away3d.containers.View3D.dispose","away3d/containers/View3D.hx",933,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_969_project,"away3d.containers.View3D","project",0x6282de4e,"away3d.containers.View3D.project","away3d/containers/View3D.hx",969,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_991_unproject,"away3d.containers.View3D","unproject",0x8ca66c55,"away3d.containers.View3D.unproject","away3d/containers/View3D.hx",991,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_1006_getRay,"away3d.containers.View3D","getRay",0x01c5291f,"away3d.containers.View3D.getRay","away3d/containers/View3D.hx",1006,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_1013_get_mousePicker,"away3d.containers.View3D","get_mousePicker",0x6766af9f,"away3d.containers.View3D.get_mousePicker","away3d/containers/View3D.hx",1013,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_1017_set_mousePicker,"away3d.containers.View3D","set_mousePicker",0x63322cab,"away3d.containers.View3D.set_mousePicker","away3d/containers/View3D.hx",1017,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_1026_get_touchPicker,"away3d.containers.View3D","get_touchPicker",0xd714e0b9,"away3d.containers.View3D.get_touchPicker","away3d/containers/View3D.hx",1026,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_1030_set_touchPicker,"away3d.containers.View3D","set_touchPicker",0xd2e05dc5,"away3d.containers.View3D.set_touchPicker","away3d/containers/View3D.hx",1030,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_1045_get_entityCollector,"away3d.containers.View3D","get_entityCollector",0xf0008bb6,"away3d.containers.View3D.get_entityCollector","away3d/containers/View3D.hx",1045,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_1049_onLensChanged,"away3d.containers.View3D","onLensChanged",0x8bf433ec,"away3d.containers.View3D.onLensChanged","away3d/containers/View3D.hx",1049,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_1058_onAddedToStage,"away3d.containers.View3D","onAddedToStage",0xbf1a3f4d,"away3d.containers.View3D.onAddedToStage","away3d/containers/View3D.hx",1058,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_1095_onAdded,"away3d.containers.View3D","onAdded",0x1f193e96,"away3d.containers.View3D.onAdded","away3d/containers/View3D.hx",1095,0xfdfc221b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e943222c2938e6_1103_onViewportUpdated,"away3d.containers.View3D","onViewportUpdated",0x5416e7cb,"away3d.containers.View3D.onViewportUpdated","away3d/containers/View3D.hx",1103,0xfdfc221b)
namespace away3d{
namespace containers{

void View3D_obj::__construct( ::away3d::containers::Scene3D scene, ::away3d::cameras::Camera3D camera, ::away3d::core::render::RendererBase renderer,::hx::Null< bool >  __o_forceSoftware,::String __o_profile,::hx::Null< int >  __o_contextIndex){
            		bool forceSoftware = __o_forceSoftware.Default(false);
            		::String profile = __o_profile;
            		if (::hx::IsNull(__o_profile)) profile = HX_("baseline",85,dc,27,11);
            		int contextIndex = __o_contextIndex.Default(-1);
            	HX_GC_STACKFRAME(&_hx_pos_c7e943222c2938e6_42_new)
HXLINE( 101)		this->_contextIndex = -1;
HXLINE(  99)		this->_layeredView = false;
HXLINE(  95)		this->_viewportDirty = true;
HXLINE(  94)		this->_scissorRectDirty = true;
HXLINE(  92)		this->_shareContext = false;
HXLINE(  87)		this->_rightClickMenuEnabled = true;
HXLINE(  82)		this->_backBufferInvalid = true;
HXLINE(  75)		this->_depthTextureInvalid = true;
HXLINE(  60)		this->_backgroundAlpha = ((Float)1);
HXLINE(  59)		this->_backgroundColor = 0;
HXLINE(  57)		this->_time = 0;
HXLINE(  50)		this->_globalHeight = ((Float)0);
HXLINE(  49)		this->_globalWidth = ((Float)0);
HXLINE(  48)		this->_globalPos =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  47)		this->_localBRPos =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  46)		this->_localTLPos =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  45)		this->_height = ((Float)0);
HXLINE(  44)		this->_width = ((Float)0);
HXLINE( 164)		super::__construct();
HXLINE( 165)		this->_profile = profile;
HXLINE( 166)		 ::away3d::containers::Scene3D _hx_tmp;
HXDLIN( 166)		if (::hx::IsNotNull( scene )) {
HXLINE( 166)			_hx_tmp = scene;
            		}
            		else {
HXLINE( 166)			_hx_tmp =  ::away3d::containers::Scene3D_obj::__alloc( HX_CTX );
            		}
HXDLIN( 166)		this->_scene = _hx_tmp;
HXLINE( 167)		this->_scene->addEventListener(HX_("partitionChanged",2a,a8,20,c4),this->onScenePartitionChanged_dyn(),null(),null(),null());
HXLINE( 168)		 ::away3d::cameras::Camera3D _hx_tmp1;
HXDLIN( 168)		if (::hx::IsNotNull( camera )) {
HXLINE( 168)			_hx_tmp1 = camera;
            		}
            		else {
HXLINE( 168)			_hx_tmp1 =  ::away3d::cameras::Camera3D_obj::__alloc( HX_CTX ,null());
            		}
HXDLIN( 168)		this->_camera = _hx_tmp1;
HXLINE( 169)		 ::away3d::core::render::RendererBase _hx_tmp2;
HXDLIN( 169)		if (::hx::IsNotNull( renderer )) {
HXLINE( 169)			_hx_tmp2 = renderer;
            		}
            		else {
HXLINE( 169)			_hx_tmp2 =  ::away3d::core::render::DefaultRenderer_obj::__alloc( HX_CTX );
            		}
HXDLIN( 169)		this->_renderer = _hx_tmp2;
HXLINE( 170)		this->_depthRenderer =  ::away3d::core::render::DepthRenderer_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 171)		this->_forceSoftware = forceSoftware;
HXLINE( 172)		this->_contextIndex = contextIndex;
HXLINE( 175)		this->_entityCollector = this->_renderer->createEntityCollector();
HXLINE( 176)		this->_entityCollector->set_camera(this->_camera);
HXLINE( 178)		this->_scissorRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 180)		this->initHitField();
HXLINE( 182)		this->_mouse3DManager =  ::away3d::core::managers::Mouse3DManager_obj::__alloc( HX_CTX );
HXLINE( 183)		this->_mouse3DManager->enableMouseListeners(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 185)		this->_touch3DManager =  ::away3d::core::managers::Touch3DManager_obj::__alloc( HX_CTX );
HXLINE( 186)		this->_touch3DManager->set_view(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 187)		this->_touch3DManager->enableTouchListeners(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 189)		this->addEventListener(HX_("addedToStage",63,22,55,0c),this->onAddedToStage_dyn(),false,0,true);
HXLINE( 190)		this->addEventListener(HX_("added",c0,d4,43,1c),this->onAdded_dyn(),false,0,true);
HXLINE( 192)		this->_camera->addEventListener(HX_("lensChanged",96,c5,b8,2a),this->onLensChanged_dyn(),null(),null(),null());
HXLINE( 194)		 ::away3d::cameras::Camera3D _hx_tmp3 = this->_camera;
HXDLIN( 194)		_hx_tmp3->set_partition(this->_scene->get_partition());
            	}

Dynamic View3D_obj::__CreateEmpty() { return new View3D_obj; }

void *View3D_obj::_hx_vtable = 0;

Dynamic View3D_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< View3D_obj > _hx_result = new View3D_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool View3D_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1f4df417;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x3cb27607 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

bool View3D_obj::get_depthPrepass(){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_119_get_depthPrepass)
HXDLIN( 119)		return this->_depthPrepass;
            	}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_depthPrepass,return )

bool View3D_obj::set_depthPrepass(bool value){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_123_set_depthPrepass)
HXLINE( 124)		this->_depthPrepass = value;
HXLINE( 125)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,set_depthPrepass,return )

void View3D_obj::onScenePartitionChanged( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_201_onScenePartitionChanged)
HXDLIN( 201)		if (::hx::IsNotNull( this->_camera )) {
HXLINE( 202)			 ::away3d::cameras::Camera3D _hx_tmp = this->_camera;
HXDLIN( 202)			_hx_tmp->set_partition(this->get_scene()->get_partition());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,onScenePartitionChanged,(void))

 ::away3d::core::managers::Stage3DProxy View3D_obj::get_stage3DProxy(){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_226_get_stage3DProxy)
HXDLIN( 226)		return this->_stage3DProxy;
            	}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_stage3DProxy,return )

 ::away3d::core::managers::Stage3DProxy View3D_obj::set_stage3DProxy( ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_230_set_stage3DProxy)
HXLINE( 231)		if (::hx::IsNotNull( this->_stage3DProxy )) {
HXLINE( 232)			this->_stage3DProxy->removeEventListener(HX_("ViewportUpdated",55,9e,a2,01),this->onViewportUpdated_dyn(),null());
HXLINE( 233)			this->_stage3DProxy->removeEventListener(HX_("Context3DRecreated",35,9a,ac,ef),this->onContext3DRecreated_dyn(),null());
            		}
HXLINE( 236)		this->_stage3DProxy = stage3DProxy;
HXLINE( 238)		this->_stage3DProxy->addEventListener(HX_("ViewportUpdated",55,9e,a2,01),this->onViewportUpdated_dyn(),null(),null(),null());
HXLINE( 239)		this->_stage3DProxy->addEventListener(HX_("Context3DRecreated",35,9a,ac,ef),this->onContext3DRecreated_dyn(),null(),null(),null());
HXLINE( 241)		 ::away3d::core::render::RendererBase _hx_tmp = this->_renderer;
HXDLIN( 241)		_hx_tmp->set_stage3DProxy(this->_depthRenderer->set_stage3DProxy(this->_stage3DProxy));
HXLINE( 243)		this->_globalPosDirty = true;
HXLINE( 244)		this->_backBufferInvalid = true;
HXLINE( 245)		return this->_stage3DProxy;
            	}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,set_stage3DProxy,return )

void View3D_obj::onContext3DRecreated( ::away3d::events::Stage3DEvent event){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_249_onContext3DRecreated)
HXDLIN( 249)		this->_depthTextureInvalid = true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,onContext3DRecreated,(void))

bool View3D_obj::get_forceMouseMove(){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_260_get_forceMouseMove)
HXDLIN( 260)		return this->_mouse3DManager->get_forceMouseMove();
            	}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_forceMouseMove,return )

bool View3D_obj::set_forceMouseMove(bool value){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_264_set_forceMouseMove)
HXLINE( 265)		this->_mouse3DManager->set_forceMouseMove(value);
HXLINE( 266)		this->_touch3DManager->set_forceTouchMove(value);
HXLINE( 267)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,set_forceMouseMove,return )

 ::away3d::textures::Texture2DBase View3D_obj::get_background(){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_274_get_background)
HXDLIN( 274)		return this->_background;
            	}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_background,return )

 ::away3d::textures::Texture2DBase View3D_obj::set_background( ::away3d::textures::Texture2DBase value){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_278_set_background)
HXLINE( 279)		this->_background = value;
HXLINE( 280)		this->_renderer->set_background(this->_background);
HXLINE( 281)		return this->_background;
            	}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,set_background,return )

bool View3D_obj::get_layeredView(){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_294_get_layeredView)
HXDLIN( 294)		return this->_layeredView;
            	}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_layeredView,return )

bool View3D_obj::set_layeredView(bool value){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_298_set_layeredView)
HXLINE( 299)		this->_layeredView = value;
HXLINE( 300)		return this->_layeredView;
            	}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,set_layeredView,return )

void View3D_obj::initHitField(){
            	HX_GC_STACKFRAME(&_hx_pos_c7e943222c2938e6_304_initHitField)
HXLINE( 305)		this->_hitField =  ::openfl::display::Sprite_obj::__alloc( HX_CTX );
HXLINE( 306)		this->_hitField->set_alpha(( (Float)(0) ));
HXLINE( 307)		this->_hitField->doubleClickEnabled = true;
HXLINE( 308)		this->_hitField->get_graphics()->beginFill(0,null());
HXLINE( 309)		this->_hitField->get_graphics()->drawRect(( (Float)(0) ),( (Float)(0) ),( (Float)(100) ),( (Float)(100) ));
HXLINE( 310)		this->addChild(this->_hitField);
            	}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,initHitField,(void))

::Array< ::Dynamic> View3D_obj::get_filters3d(){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_317_get_filters3d)
HXDLIN( 317)		if (::hx::IsNotNull( this->_filter3DRenderer )) {
HXDLIN( 317)			return this->_filter3DRenderer->get_filters();
            		}
            		else {
HXDLIN( 317)			return null();
            		}
HXDLIN( 317)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_filters3d,return )

::Array< ::Dynamic> View3D_obj::set_filters3d(::Array< ::Dynamic> value){
            	HX_GC_STACKFRAME(&_hx_pos_c7e943222c2938e6_321_set_filters3d)
HXLINE( 322)		bool _hx_tmp;
HXDLIN( 322)		if (::hx::IsNotNull( value )) {
HXLINE( 322)			_hx_tmp = (value->length == 0);
            		}
            		else {
HXLINE( 322)			_hx_tmp = false;
            		}
HXDLIN( 322)		if (_hx_tmp) {
HXLINE( 323)			value = null();
            		}
HXLINE( 325)		bool _hx_tmp1;
HXDLIN( 325)		if (::hx::IsNotNull( this->_filter3DRenderer )) {
HXLINE( 325)			_hx_tmp1 = ::hx::IsNull( value );
            		}
            		else {
HXLINE( 325)			_hx_tmp1 = false;
            		}
HXDLIN( 325)		if (_hx_tmp1) {
HXLINE( 326)			this->_filter3DRenderer->dispose();
HXLINE( 327)			this->_filter3DRenderer = null();
            		}
            		else {
HXLINE( 328)			bool _hx_tmp;
HXDLIN( 328)			if (::hx::IsNull( this->_filter3DRenderer )) {
HXLINE( 328)				_hx_tmp = ::hx::IsNotNull( value );
            			}
            			else {
HXLINE( 328)				_hx_tmp = false;
            			}
HXDLIN( 328)			if (_hx_tmp) {
HXLINE( 329)				this->_filter3DRenderer =  ::away3d::core::render::Filter3DRenderer_obj::__alloc( HX_CTX ,this->get_stage3DProxy());
HXLINE( 330)				this->_filter3DRenderer->set_filters(value);
            			}
            		}
HXLINE( 333)		if (::hx::IsNotNull( this->_filter3DRenderer )) {
HXLINE( 334)			this->_filter3DRenderer->set_filters(value);
HXLINE( 335)			this->_requireDepthRender = this->_filter3DRenderer->get_requireDepthRender();
            		}
            		else {
HXLINE( 337)			this->_requireDepthRender = false;
HXLINE( 338)			if (::hx::IsNotNull( this->_depthRender )) {
HXLINE( 339)				this->_depthRender->dispose();
HXLINE( 340)				this->_depthRender = null();
            			}
            		}
HXLINE( 343)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,set_filters3d,return )

 ::away3d::core::render::RendererBase View3D_obj::get_renderer(){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_353_get_renderer)
HXDLIN( 353)		return this->_renderer;
            	}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_renderer,return )

 ::away3d::core::render::RendererBase View3D_obj::set_renderer( ::away3d::core::render::RendererBase value){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_357_set_renderer)
HXLINE( 358)		this->_renderer->dispose();
HXLINE( 359)		this->_renderer = value;
HXLINE( 360)		this->_entityCollector = this->_renderer->createEntityCollector();
HXLINE( 361)		this->_entityCollector->set_camera(this->_camera);
HXLINE( 362)		this->_renderer->set_stage3DProxy(this->_stage3DProxy);
HXLINE( 363)		this->_renderer->set_antiAlias(this->_antiAlias);
HXLINE( 364)		int _hx_int = (::hx::UShr(this->_backgroundColor,16) & 255);
HXDLIN( 364)		Float _hx_tmp;
HXDLIN( 364)		if ((_hx_int < 0)) {
HXLINE( 364)			_hx_tmp = (((Float)4294967296.0) + _hx_int);
            		}
            		else {
HXLINE( 364)			_hx_tmp = (_hx_int + ((Float)0.0));
            		}
HXDLIN( 364)		int int1 = 255;
HXDLIN( 364)		Float _hx_tmp1;
HXDLIN( 364)		if ((int1 < 0)) {
HXLINE( 364)			_hx_tmp1 = (((Float)4294967296.0) + int1);
            		}
            		else {
HXLINE( 364)			_hx_tmp1 = (int1 + ((Float)0.0));
            		}
HXDLIN( 364)		this->_renderer->set_backgroundR((_hx_tmp / _hx_tmp1));
HXLINE( 365)		int int2 = (::hx::UShr(this->_backgroundColor,8) & 255);
HXDLIN( 365)		Float _hx_tmp2;
HXDLIN( 365)		if ((int2 < 0)) {
HXLINE( 365)			_hx_tmp2 = (((Float)4294967296.0) + int2);
            		}
            		else {
HXLINE( 365)			_hx_tmp2 = (int2 + ((Float)0.0));
            		}
HXDLIN( 365)		int int3 = 255;
HXDLIN( 365)		Float _hx_tmp3;
HXDLIN( 365)		if ((int3 < 0)) {
HXLINE( 365)			_hx_tmp3 = (((Float)4294967296.0) + int3);
            		}
            		else {
HXLINE( 365)			_hx_tmp3 = (int3 + ((Float)0.0));
            		}
HXDLIN( 365)		this->_renderer->set_backgroundG((_hx_tmp2 / _hx_tmp3));
HXLINE( 366)		int int4 = (this->_backgroundColor & 255);
HXDLIN( 366)		Float _hx_tmp4;
HXDLIN( 366)		if ((int4 < 0)) {
HXLINE( 366)			_hx_tmp4 = (((Float)4294967296.0) + int4);
            		}
            		else {
HXLINE( 366)			_hx_tmp4 = (int4 + ((Float)0.0));
            		}
HXDLIN( 366)		int int5 = 255;
HXDLIN( 366)		Float _hx_tmp5;
HXDLIN( 366)		if ((int5 < 0)) {
HXLINE( 366)			_hx_tmp5 = (((Float)4294967296.0) + int5);
            		}
            		else {
HXLINE( 366)			_hx_tmp5 = (int5 + ((Float)0.0));
            		}
HXDLIN( 366)		this->_renderer->set_backgroundB((_hx_tmp4 / _hx_tmp5));
HXLINE( 367)		this->_renderer->set_backgroundAlpha(this->_backgroundAlpha);
HXLINE( 368)		this->_renderer->set_viewWidth(this->_globalWidth);
HXLINE( 369)		this->_renderer->set_viewHeight(this->_globalHeight);
HXLINE( 371)		this->_backBufferInvalid = true;
HXLINE( 372)		return this->_renderer;
            	}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,set_renderer,return )

int View3D_obj::get_backgroundColor(){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_382_get_backgroundColor)
HXDLIN( 382)		return this->_backgroundColor;
            	}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_backgroundColor,return )

int View3D_obj::set_backgroundColor(int value){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_386_set_backgroundColor)
HXLINE( 387)		this->_backgroundColor = value;
HXLINE( 388)		int _hx_int = (::hx::UShr(value,16) & 255);
HXDLIN( 388)		Float _hx_tmp;
HXDLIN( 388)		if ((_hx_int < 0)) {
HXLINE( 388)			_hx_tmp = (((Float)4294967296.0) + _hx_int);
            		}
            		else {
HXLINE( 388)			_hx_tmp = (_hx_int + ((Float)0.0));
            		}
HXDLIN( 388)		int int1 = 255;
HXDLIN( 388)		Float _hx_tmp1;
HXDLIN( 388)		if ((int1 < 0)) {
HXLINE( 388)			_hx_tmp1 = (((Float)4294967296.0) + int1);
            		}
            		else {
HXLINE( 388)			_hx_tmp1 = (int1 + ((Float)0.0));
            		}
HXDLIN( 388)		this->_renderer->set_backgroundR((_hx_tmp / _hx_tmp1));
HXLINE( 389)		int int2 = (::hx::UShr(value,8) & 255);
HXDLIN( 389)		Float _hx_tmp2;
HXDLIN( 389)		if ((int2 < 0)) {
HXLINE( 389)			_hx_tmp2 = (((Float)4294967296.0) + int2);
            		}
            		else {
HXLINE( 389)			_hx_tmp2 = (int2 + ((Float)0.0));
            		}
HXDLIN( 389)		int int3 = 255;
HXDLIN( 389)		Float _hx_tmp3;
HXDLIN( 389)		if ((int3 < 0)) {
HXLINE( 389)			_hx_tmp3 = (((Float)4294967296.0) + int3);
            		}
            		else {
HXLINE( 389)			_hx_tmp3 = (int3 + ((Float)0.0));
            		}
HXDLIN( 389)		this->_renderer->set_backgroundG((_hx_tmp2 / _hx_tmp3));
HXLINE( 390)		int int4 = (value & 255);
HXDLIN( 390)		Float _hx_tmp4;
HXDLIN( 390)		if ((int4 < 0)) {
HXLINE( 390)			_hx_tmp4 = (((Float)4294967296.0) + int4);
            		}
            		else {
HXLINE( 390)			_hx_tmp4 = (int4 + ((Float)0.0));
            		}
HXDLIN( 390)		int int5 = 255;
HXDLIN( 390)		Float _hx_tmp5;
HXDLIN( 390)		if ((int5 < 0)) {
HXLINE( 390)			_hx_tmp5 = (((Float)4294967296.0) + int5);
            		}
            		else {
HXLINE( 390)			_hx_tmp5 = (int5 + ((Float)0.0));
            		}
HXDLIN( 390)		this->_renderer->set_backgroundB((_hx_tmp4 / _hx_tmp5));
HXLINE( 391)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,set_backgroundColor,return )

Float View3D_obj::get_backgroundAlpha(){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_398_get_backgroundAlpha)
HXDLIN( 398)		return this->_backgroundAlpha;
            	}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_backgroundAlpha,return )

Float View3D_obj::set_backgroundAlpha(Float value){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_402_set_backgroundAlpha)
HXLINE( 403)		if ((value > 1)) {
HXLINE( 404)			value = ( (Float)(1) );
            		}
            		else {
HXLINE( 405)			if ((value < 0)) {
HXLINE( 406)				value = ( (Float)(0) );
            			}
            		}
HXLINE( 408)		this->_renderer->set_backgroundAlpha(value);
HXLINE( 409)		this->_backgroundAlpha = value;
HXLINE( 410)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,set_backgroundAlpha,return )

 ::away3d::cameras::Camera3D View3D_obj::get_camera(){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_420_get_camera)
HXDLIN( 420)		return this->_camera;
            	}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_camera,return )

 ::away3d::cameras::Camera3D View3D_obj::set_camera( ::away3d::cameras::Camera3D camera){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_427_set_camera)
HXLINE( 428)		this->_camera->removeEventListener(HX_("lensChanged",96,c5,b8,2a),this->onLensChanged_dyn(),null());
HXLINE( 430)		this->_camera = camera;
HXLINE( 431)		this->_entityCollector->set_camera(this->_camera);
HXLINE( 433)		if (::hx::IsNotNull( this->_scene )) {
HXLINE( 434)			 ::away3d::cameras::Camera3D _hx_tmp = this->_camera;
HXDLIN( 434)			_hx_tmp->set_partition(this->_scene->get_partition());
            		}
HXLINE( 436)		this->_camera->addEventListener(HX_("lensChanged",96,c5,b8,2a),this->onLensChanged_dyn(),null(),null(),null());
HXLINE( 438)		this->_scissorRectDirty = true;
HXLINE( 439)		this->_viewportDirty = true;
HXLINE( 440)		return camera;
            	}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,set_camera,return )

 ::away3d::containers::Scene3D View3D_obj::get_scene(){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_450_get_scene)
HXDLIN( 450)		return this->_scene;
            	}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_scene,return )

 ::away3d::containers::Scene3D View3D_obj::set_scene( ::away3d::containers::Scene3D scene){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_457_set_scene)
HXLINE( 458)		this->_scene->removeEventListener(HX_("partitionChanged",2a,a8,20,c4),this->onScenePartitionChanged_dyn(),null());
HXLINE( 459)		this->_scene = scene;
HXLINE( 460)		this->_scene->addEventListener(HX_("partitionChanged",2a,a8,20,c4),this->onScenePartitionChanged_dyn(),null(),null(),null());
HXLINE( 462)		if (::hx::IsNotNull( this->_camera )) {
HXLINE( 463)			 ::away3d::cameras::Camera3D _hx_tmp = this->_camera;
HXDLIN( 463)			_hx_tmp->set_partition(this->_scene->get_partition());
            		}
HXLINE( 465)		return this->_scene;
            	}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,set_scene,return )

int View3D_obj::get_deltaTime(){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_476_get_deltaTime)
HXDLIN( 476)		return this->_deltaTime;
            	}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_deltaTime,return )

::Array< ::Dynamic> View3D_obj::get_filters(){
            	HX_GC_STACKFRAME(&_hx_pos_c7e943222c2938e6_489_get_filters)
HXDLIN( 489)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("filters is not supported in View3D. Use filters3d instead.",2c,cd,76,35),null())));
HXDLIN( 489)		return null();
            	}


::Array< ::Dynamic> View3D_obj::set_filters(::Array< ::Dynamic> value){
            	HX_GC_STACKFRAME(&_hx_pos_c7e943222c2938e6_503_set_filters)
HXDLIN( 503)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("filters is not supported in View3D. Use filters3d instead.",2c,cd,76,35),null())));
HXDLIN( 503)		return null();
            	}


Float View3D_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_518_get_width)
HXDLIN( 518)		return this->_width;
            	}


Float View3D_obj::set_width(Float value){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_527_set_width)
HXLINE( 529)		bool _hx_tmp;
HXDLIN( 529)		bool _hx_tmp1;
HXDLIN( 529)		if (::hx::IsNotNull( this->_stage3DProxy )) {
HXLINE( 529)			_hx_tmp1 = this->_stage3DProxy->get_usesSoftwareRendering();
            		}
            		else {
HXLINE( 529)			_hx_tmp1 = false;
            		}
HXDLIN( 529)		if (_hx_tmp1) {
HXLINE( 529)			_hx_tmp = (value > 2048);
            		}
            		else {
HXLINE( 529)			_hx_tmp = false;
            		}
HXDLIN( 529)		if (_hx_tmp) {
HXLINE( 530)			value = ( (Float)(2048) );
            		}
HXLINE( 532)		if ((this->_width == value)) {
HXLINE( 533)			return value;
            		}
HXLINE( 535)		this->_hitField->set_width(value);
HXLINE( 536)		this->_width = value;
HXLINE( 538)		this->_localBRPos->x = (value + this->_localTLPos->x);
HXLINE( 539)		Float _hx_tmp2;
HXDLIN( 539)		if (::hx::IsNotNull( this->parent )) {
HXLINE( 539)			_hx_tmp2 = (this->parent->localToGlobal(this->_localBRPos)->x - this->_globalPos->x);
            		}
            		else {
HXLINE( 539)			_hx_tmp2 = value;
            		}
HXDLIN( 539)		this->_globalWidth = _hx_tmp2;
HXLINE( 541)		if (::hx::IsNotNull( this->_rttBufferManager )) {
HXLINE( 542)			 ::away3d::core::managers::RTTBufferManager _hx_tmp = this->_rttBufferManager;
HXDLIN( 542)			_hx_tmp->set_viewWidth(::Std_obj::_hx_int(this->_globalWidth));
            		}
HXLINE( 544)		this->_aspectRatio = (this->_globalWidth / this->_globalHeight);
HXLINE( 545)		this->_camera->get_lens()->set_aspectRatio(this->_aspectRatio);
HXLINE( 546)		this->_depthTextureInvalid = true;
HXLINE( 548)		this->_renderer->set_viewWidth(this->_globalWidth);
HXLINE( 550)		this->_scissorRect->width = this->_globalWidth;
HXLINE( 552)		this->_backBufferInvalid = true;
HXLINE( 553)		this->_scissorRectDirty = true;
HXLINE( 555)		return value;
            	}


Float View3D_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_569_get_height)
HXDLIN( 569)		return this->_height;
            	}


Float View3D_obj::set_height(Float value){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_578_set_height)
HXLINE( 580)		bool _hx_tmp;
HXDLIN( 580)		bool _hx_tmp1;
HXDLIN( 580)		if (::hx::IsNotNull( this->_stage3DProxy )) {
HXLINE( 580)			_hx_tmp1 = this->_stage3DProxy->get_usesSoftwareRendering();
            		}
            		else {
HXLINE( 580)			_hx_tmp1 = false;
            		}
HXDLIN( 580)		if (_hx_tmp1) {
HXLINE( 580)			_hx_tmp = (value > 2048);
            		}
            		else {
HXLINE( 580)			_hx_tmp = false;
            		}
HXDLIN( 580)		if (_hx_tmp) {
HXLINE( 581)			value = ( (Float)(2048) );
            		}
HXLINE( 583)		if ((this->_height == value)) {
HXLINE( 584)			return value;
            		}
HXLINE( 586)		this->_hitField->set_height(value);
HXLINE( 587)		this->_height = value;
HXLINE( 589)		this->_localBRPos->y = (value + this->_localTLPos->y);
HXLINE( 590)		Float _hx_tmp2;
HXDLIN( 590)		if (::hx::IsNotNull( this->parent )) {
HXLINE( 590)			_hx_tmp2 = (this->parent->localToGlobal(this->_localBRPos)->y - this->_globalPos->y);
            		}
            		else {
HXLINE( 590)			_hx_tmp2 = value;
            		}
HXDLIN( 590)		this->_globalHeight = _hx_tmp2;
HXLINE( 592)		if (::hx::IsNotNull( this->_rttBufferManager )) {
HXLINE( 593)			 ::away3d::core::managers::RTTBufferManager _hx_tmp = this->_rttBufferManager;
HXDLIN( 593)			_hx_tmp->set_viewHeight(::Std_obj::_hx_int(this->_globalHeight));
            		}
HXLINE( 595)		this->_aspectRatio = (this->_globalWidth / this->_globalHeight);
HXLINE( 596)		this->_camera->get_lens()->set_aspectRatio(this->_aspectRatio);
HXLINE( 597)		this->_depthTextureInvalid = true;
HXLINE( 599)		this->_renderer->set_viewHeight(this->_globalHeight);
HXLINE( 601)		this->_scissorRect->height = this->_globalHeight;
HXLINE( 603)		this->_backBufferInvalid = true;
HXLINE( 604)		this->_scissorRectDirty = true;
HXLINE( 606)		return value;
            	}


Float View3D_obj::set_x(Float value){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_615_set_x)
HXLINE( 616)		if ((this->get_x() == value)) {
HXLINE( 617)			return value;
            		}
HXLINE( 619)		this->super::set_x(value);
HXLINE( 620)		this->_localTLPos->x = value;
HXLINE( 622)		Float _hx_tmp;
HXDLIN( 622)		if (::hx::IsNotNull( this->parent )) {
HXLINE( 622)			_hx_tmp = this->parent->localToGlobal(this->_localTLPos)->x;
            		}
            		else {
HXLINE( 622)			_hx_tmp = value;
            		}
HXDLIN( 622)		this->_globalPos->x = _hx_tmp;
HXLINE( 623)		this->_globalPosDirty = true;
HXLINE( 625)		return value;
            	}


Float View3D_obj::set_y(Float value){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_634_set_y)
HXLINE( 635)		if ((this->get_y() == value)) {
HXLINE( 636)			return value;
            		}
HXLINE( 638)		this->super::set_y(value);
HXLINE( 639)		this->_localTLPos->y = value;
HXLINE( 641)		Float _hx_tmp;
HXDLIN( 641)		if (::hx::IsNotNull( this->parent )) {
HXLINE( 641)			_hx_tmp = this->parent->localToGlobal(this->_localTLPos)->y;
            		}
            		else {
HXLINE( 641)			_hx_tmp = value;
            		}
HXDLIN( 641)		this->_globalPos->y = _hx_tmp;
HXLINE( 642)		this->_globalPosDirty = true;
HXLINE( 644)		return value;
            	}


bool View3D_obj::set_visible(bool value){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_653_set_visible)
HXLINE( 654)		this->super::set_visible(value);
HXLINE( 656)		bool _hx_tmp;
HXDLIN( 656)		if (::hx::IsNotNull( this->_stage3DProxy )) {
HXLINE( 656)			_hx_tmp = !(this->_shareContext);
            		}
            		else {
HXLINE( 656)			_hx_tmp = false;
            		}
HXDLIN( 656)		if (_hx_tmp) {
HXLINE( 657)			this->_stage3DProxy->set_visible(value);
            		}
HXLINE( 659)		return value;
            	}


int View3D_obj::get_antiAlias(){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_668_get_antiAlias)
HXDLIN( 668)		return this->_antiAlias;
            	}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_antiAlias,return )

int View3D_obj::set_antiAlias(int value){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_672_set_antiAlias)
HXLINE( 673)		this->_antiAlias = value;
HXLINE( 674)		this->_renderer->set_antiAlias(value);
HXLINE( 676)		this->_backBufferInvalid = true;
HXLINE( 677)		return this->_antiAlias;
            	}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,set_antiAlias,return )

int View3D_obj::get_renderedFacesCount(){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_686_get_renderedFacesCount)
HXDLIN( 686)		return this->_entityCollector->get_numTriangles();
            	}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_renderedFacesCount,return )

bool View3D_obj::get_shareContext(){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_696_get_shareContext)
HXDLIN( 696)		return this->_shareContext;
            	}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_shareContext,return )

bool View3D_obj::set_shareContext(bool value){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_700_set_shareContext)
HXLINE( 701)		if ((this->_shareContext == value)) {
HXLINE( 702)			return value;
            		}
HXLINE( 704)		this->_shareContext = value;
HXLINE( 705)		this->_globalPosDirty = true;
HXLINE( 706)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,set_shareContext,return )

void View3D_obj::updateBackBuffer(){
            	HX_GC_STACKFRAME(&_hx_pos_c7e943222c2938e6_717_updateBackBuffer)
HXDLIN( 717)		bool _hx_tmp;
HXDLIN( 717)		if (::hx::IsNotNull( this->_stage3DProxy->get_context3D() )) {
HXDLIN( 717)			_hx_tmp = !(this->_shareContext);
            		}
            		else {
HXDLIN( 717)			_hx_tmp = false;
            		}
HXDLIN( 717)		if (_hx_tmp) {
HXLINE( 718)			bool _hx_tmp;
HXDLIN( 718)			if ((this->_globalWidth > 0)) {
HXLINE( 718)				_hx_tmp = (this->_globalHeight > 0);
            			}
            			else {
HXLINE( 718)				_hx_tmp = false;
            			}
HXDLIN( 718)			if (_hx_tmp) {
HXLINE( 725)				if (this->_stage3DProxy->get_usesSoftwareRendering()) {
HXLINE( 730)					if ((this->_globalWidth > 2048)) {
HXLINE( 731)						this->_globalWidth = ( (Float)(2048) );
            					}
HXLINE( 732)					if ((this->_globalHeight > 2048)) {
HXLINE( 733)						this->_globalHeight = ( (Float)(2048) );
            					}
            				}
HXLINE( 736)				 ::away3d::core::managers::Stage3DProxy _hx_tmp = this->_stage3DProxy;
HXDLIN( 736)				int _hx_tmp1 = ::Std_obj::_hx_int(this->_globalWidth);
HXDLIN( 736)				int _hx_tmp2 = ::Std_obj::_hx_int(this->_globalHeight);
HXDLIN( 736)				_hx_tmp->configureBackBuffer(_hx_tmp1,_hx_tmp2,this->_antiAlias,true);
HXLINE( 737)				this->_backBufferInvalid = false;
            			}
            			else {
HXLINE( 739)				Float stageBR = this->stage->get_x();
HXDLIN( 739)				Float stageBR1 = (stageBR + this->stage->stageWidth);
HXDLIN( 739)				Float stageBR2 = this->stage->get_y();
HXDLIN( 739)				 ::openfl::geom::Point stageBR3 =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,stageBR1,(stageBR2 + this->stage->stageHeight));
HXLINE( 740)				Float _hx_tmp;
HXDLIN( 740)				if (::hx::IsNotNull( this->parent )) {
HXLINE( 740)					_hx_tmp = (this->parent->globalToLocal(stageBR3)->x - this->_localTLPos->x);
            				}
            				else {
HXLINE( 740)					_hx_tmp = ( (Float)(this->stage->stageWidth) );
            				}
HXDLIN( 740)				this->set_width(_hx_tmp);
HXLINE( 741)				Float _hx_tmp1;
HXDLIN( 741)				if (::hx::IsNotNull( this->parent )) {
HXLINE( 741)					_hx_tmp1 = (this->parent->globalToLocal(stageBR3)->y - this->_localTLPos->y);
            				}
            				else {
HXLINE( 741)					_hx_tmp1 = ( (Float)(this->stage->stageHeight) );
            				}
HXDLIN( 741)				this->set_height(_hx_tmp1);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,updateBackBuffer,(void))

void View3D_obj::render(){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_766_render)
HXLINE( 769)		::away3d::core::managers::Stage3DProxy_obj::drawTriangleCount = 0;
HXLINE( 772)		bool _hx_tmp;
HXDLIN( 772)		if (::hx::IsNotNull( this->get_stage3DProxy()->get_context3D() )) {
HXLINE( 772)			_hx_tmp = !(this->get_stage3DProxy()->recoverFromDisposal());
            		}
            		else {
HXLINE( 772)			_hx_tmp = true;
            		}
HXDLIN( 772)		if (_hx_tmp) {
HXLINE( 773)			this->_backBufferInvalid = true;
HXLINE( 774)			return;
            		}
HXLINE( 778)		if (this->_backBufferInvalid) {
HXLINE( 779)			this->updateBackBuffer();
            		}
HXLINE( 781)		bool _hx_tmp1;
HXDLIN( 781)		if (this->_shareContext) {
HXLINE( 781)			_hx_tmp1 = this->_layeredView;
            		}
            		else {
HXLINE( 781)			_hx_tmp1 = false;
            		}
HXDLIN( 781)		if (_hx_tmp1) {
HXLINE( 782)			this->get_stage3DProxy()->clearDepthBuffer();
            		}
HXLINE( 784)		if (!(this->_parentIsStage)) {
HXLINE( 785)			 ::openfl::geom::Point globalPos = this->parent->localToGlobal(this->_localTLPos);
HXLINE( 786)			bool _hx_tmp;
HXDLIN( 786)			if ((this->_globalPos->x == globalPos->x)) {
HXLINE( 786)				_hx_tmp = (this->_globalPos->y != globalPos->y);
            			}
            			else {
HXLINE( 786)				_hx_tmp = true;
            			}
HXDLIN( 786)			if (_hx_tmp) {
HXLINE( 787)				this->_globalPos = globalPos;
HXLINE( 788)				this->_globalPosDirty = true;
            			}
            		}
HXLINE( 792)		if (this->_globalPosDirty) {
HXLINE( 793)			this->updateGlobalPos();
            		}
HXLINE( 795)		this->updateTime();
HXLINE( 797)		this->updateViewSizeData();
HXLINE( 799)		this->_entityCollector->clear();
HXLINE( 802)		this->_scene->traversePartitions(this->_entityCollector);
HXLINE( 805)		this->_mouse3DManager->updateCollider(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 806)		this->_touch3DManager->updateCollider();
HXLINE( 808)		if (this->_requireDepthRender) {
HXLINE( 809)			this->renderSceneDepthToTexture(this->_entityCollector);
            		}
HXLINE( 812)		if (this->_depthPrepass) {
HXLINE( 813)			this->renderDepthPrepass(this->_entityCollector);
            		}
HXLINE( 815)		this->_renderer->set_clearOnRender(!(this->_depthPrepass));
HXLINE( 817)		bool _hx_tmp2;
HXDLIN( 817)		if (::hx::IsNotNull( this->_filter3DRenderer )) {
HXLINE( 817)			_hx_tmp2 = ::hx::IsNotNull( this->_stage3DProxy->get_context3D() );
            		}
            		else {
HXLINE( 817)			_hx_tmp2 = false;
            		}
HXDLIN( 817)		if (_hx_tmp2) {
HXLINE( 818)			 ::away3d::core::render::RendererBase _hx_tmp = this->_renderer;
HXDLIN( 818)			 ::away3d::core::traverse::EntityCollector _hx_tmp1 = this->_entityCollector;
HXDLIN( 818)			 ::openfl::display3D::textures::Texture _hx_tmp2 = this->_filter3DRenderer->getMainInputTexture(this->_stage3DProxy);
HXDLIN( 818)			_hx_tmp->render(_hx_tmp1,_hx_tmp2,this->_rttBufferManager->get_renderToTextureRect(),null());
HXLINE( 819)			 ::away3d::core::render::Filter3DRenderer _hx_tmp3 = this->_filter3DRenderer;
HXDLIN( 819)			 ::away3d::core::managers::Stage3DProxy _hx_tmp4 = this->_stage3DProxy;
HXDLIN( 819)			 ::away3d::cameras::Camera3D _hx_tmp5 = this->get_camera();
HXDLIN( 819)			_hx_tmp3->render(_hx_tmp4,_hx_tmp5,this->_depthRender);
            		}
            		else {
HXLINE( 821)			this->_renderer->set_shareContext(this->_shareContext);
HXLINE( 822)			if (this->_shareContext) {
HXLINE( 823)				this->_renderer->render(this->_entityCollector,null(),this->_scissorRect,null());
            			}
            			else {
HXLINE( 825)				this->_renderer->render(this->_entityCollector,null(),null(),null());
            			}
            		}
HXLINE( 828)		if (!(this->_shareContext)) {
HXLINE( 829)			this->get_stage3DProxy()->present();
HXLINE( 832)			this->_mouse3DManager->fireMouseEvents();
HXLINE( 833)			this->_touch3DManager->fireTouchEvents();
            		}
HXLINE( 837)		this->_entityCollector->cleanUp();
HXLINE( 840)		this->get_stage3DProxy()->set_bufferClear(false);
            	}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,render,(void))

void View3D_obj::updateGlobalPos(){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_844_updateGlobalPos)
HXLINE( 845)		this->_globalPosDirty = false;
HXLINE( 847)		if (::hx::IsNull( this->_stage3DProxy )) {
HXLINE( 848)			return;
            		}
HXLINE( 850)		if (this->_shareContext) {
HXLINE( 851)			Float _hx_tmp = this->_globalPos->x;
HXDLIN( 851)			Float _hx_tmp1 = this->_stage3DProxy->get_x();
HXDLIN( 851)			this->_scissorRect->x = (_hx_tmp - _hx_tmp1);
HXLINE( 852)			Float _hx_tmp2 = this->_globalPos->y;
HXDLIN( 852)			Float _hx_tmp3 = this->_stage3DProxy->get_y();
HXDLIN( 852)			this->_scissorRect->y = (_hx_tmp2 - _hx_tmp3);
            		}
            		else {
HXLINE( 854)			this->_scissorRect->x = ( (Float)(0) );
HXLINE( 855)			this->_scissorRect->y = ( (Float)(0) );
HXLINE( 856)			this->_stage3DProxy->set_x(this->_globalPos->x);
HXLINE( 857)			this->_stage3DProxy->set_y(this->_globalPos->y);
            		}
HXLINE( 860)		this->_scissorRectDirty = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,updateGlobalPos,(void))

void View3D_obj::updateTime(){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_864_updateTime)
HXLINE( 865)		int time = ::openfl::Lib_obj::getTimer();
HXLINE( 866)		if ((this->_time == 0)) {
HXLINE( 867)			this->_time = time;
            		}
HXLINE( 868)		this->_deltaTime = (time - this->_time);
HXLINE( 869)		this->_time = time;
            	}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,updateTime,(void))

void View3D_obj::updateViewSizeData(){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_873_updateViewSizeData)
HXLINE( 874)		this->_camera->get_lens()->set_aspectRatio(this->_aspectRatio);
HXLINE( 876)		if (this->_scissorRectDirty) {
HXLINE( 877)			this->_scissorRectDirty = false;
HXLINE( 878)			this->_camera->get_lens()->updateScissorRect(this->_scissorRect->x,this->_scissorRect->y,this->_scissorRect->width,this->_scissorRect->height);
            		}
HXLINE( 881)		if (this->_viewportDirty) {
HXLINE( 882)			this->_viewportDirty = false;
HXLINE( 883)			 ::away3d::cameras::lenses::LensBase _hx_tmp = this->_camera->get_lens();
HXDLIN( 883)			Float _hx_tmp1 = this->_stage3DProxy->get_viewPort()->x;
HXDLIN( 883)			Float _hx_tmp2 = this->_stage3DProxy->get_viewPort()->y;
HXDLIN( 883)			Float _hx_tmp3 = this->_stage3DProxy->get_viewPort()->width;
HXDLIN( 883)			_hx_tmp->updateViewport(_hx_tmp1,_hx_tmp2,_hx_tmp3,this->_stage3DProxy->get_viewPort()->height);
            		}
HXLINE( 886)		bool _hx_tmp;
HXDLIN( 886)		if (::hx::IsNull( this->_filter3DRenderer )) {
HXLINE( 886)			_hx_tmp = this->_renderer->get_renderToTexture();
            		}
            		else {
HXLINE( 886)			_hx_tmp = true;
            		}
HXDLIN( 886)		if (_hx_tmp) {
HXLINE( 887)			 ::away3d::core::render::RendererBase _hx_tmp = this->_renderer;
HXDLIN( 887)			_hx_tmp->set_textureRatioX(this->_rttBufferManager->get_textureRatioX());
HXLINE( 888)			 ::away3d::core::render::RendererBase _hx_tmp1 = this->_renderer;
HXDLIN( 888)			_hx_tmp1->set_textureRatioY(this->_rttBufferManager->get_textureRatioY());
            		}
            		else {
HXLINE( 890)			this->_renderer->set_textureRatioX(( (Float)(1) ));
HXLINE( 891)			this->_renderer->set_textureRatioY(( (Float)(1) ));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,updateViewSizeData,(void))

void View3D_obj::renderDepthPrepass( ::away3d::core::traverse::EntityCollector entityCollector){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_896_renderDepthPrepass)
HXLINE( 897)		this->_depthRenderer->set_disableColor(true);
HXLINE( 898)		bool _hx_tmp;
HXDLIN( 898)		if (::hx::IsNull( this->_filter3DRenderer )) {
HXLINE( 898)			_hx_tmp = this->_renderer->get_renderToTexture();
            		}
            		else {
HXLINE( 898)			_hx_tmp = true;
            		}
HXDLIN( 898)		if (_hx_tmp) {
HXLINE( 899)			 ::away3d::core::render::DepthRenderer _hx_tmp = this->_depthRenderer;
HXDLIN( 899)			_hx_tmp->set_textureRatioX(this->_rttBufferManager->get_textureRatioX());
HXLINE( 900)			 ::away3d::core::render::DepthRenderer _hx_tmp1 = this->_depthRenderer;
HXDLIN( 900)			_hx_tmp1->set_textureRatioY(this->_rttBufferManager->get_textureRatioY());
HXLINE( 901)			 ::away3d::core::render::DepthRenderer _hx_tmp2 = this->_depthRenderer;
HXDLIN( 901)			 ::openfl::display3D::textures::Texture _hx_tmp3 = this->_filter3DRenderer->getMainInputTexture(this->_stage3DProxy);
HXDLIN( 901)			_hx_tmp2->render(entityCollector,_hx_tmp3,this->_rttBufferManager->get_renderToTextureRect(),null());
            		}
            		else {
HXLINE( 903)			this->_depthRenderer->set_textureRatioX(( (Float)(1) ));
HXLINE( 904)			this->_depthRenderer->set_textureRatioY(( (Float)(1) ));
HXLINE( 905)			this->_depthRenderer->render(entityCollector,null(),null(),null());
            		}
HXLINE( 907)		this->_depthRenderer->set_disableColor(false);
            	}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,renderDepthPrepass,(void))

void View3D_obj::renderSceneDepthToTexture( ::away3d::core::traverse::EntityCollector entityCollector){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_911_renderSceneDepthToTexture)
HXLINE( 912)		bool _hx_tmp;
HXDLIN( 912)		if (!(this->_depthTextureInvalid)) {
HXLINE( 912)			_hx_tmp = ::hx::IsNull( this->_depthRender );
            		}
            		else {
HXLINE( 912)			_hx_tmp = true;
            		}
HXDLIN( 912)		if (_hx_tmp) {
HXLINE( 913)			this->initDepthTexture(this->_stage3DProxy->get_context3D());
            		}
HXLINE( 914)		 ::away3d::core::render::DepthRenderer _hx_tmp1 = this->_depthRenderer;
HXDLIN( 914)		_hx_tmp1->set_textureRatioX(this->_rttBufferManager->get_textureRatioX());
HXLINE( 915)		 ::away3d::core::render::DepthRenderer _hx_tmp2 = this->_depthRenderer;
HXDLIN( 915)		_hx_tmp2->set_textureRatioY(this->_rttBufferManager->get_textureRatioY());
HXLINE( 916)		this->_depthRenderer->render(entityCollector,this->_depthRender,null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,renderSceneDepthToTexture,(void))

void View3D_obj::initDepthTexture( ::openfl::display3D::Context3D context){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_920_initDepthTexture)
HXLINE( 921)		this->_depthTextureInvalid = false;
HXLINE( 923)		if (::hx::IsNotNull( this->_depthRender )) {
HXLINE( 924)			this->_depthRender->dispose();
            		}
HXLINE( 926)		int _hx_tmp = this->_rttBufferManager->get_textureWidth();
HXDLIN( 926)		this->_depthRender = context->createTexture(_hx_tmp,this->_rttBufferManager->get_textureHeight(),1,true,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,initDepthTexture,(void))

void View3D_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_933_dispose)
HXLINE( 934)		this->_stage3DProxy->removeEventListener(HX_("ViewportUpdated",55,9e,a2,01),this->onViewportUpdated_dyn(),null());
HXLINE( 935)		this->_stage3DProxy->removeEventListener(HX_("Context3DRecreated",35,9a,ac,ef),this->onContext3DRecreated_dyn(),null());
HXLINE( 936)		if (!(this->get_shareContext())) {
HXLINE( 937)			this->_stage3DProxy->dispose();
            		}
HXLINE( 938)		this->_renderer->dispose();
HXLINE( 940)		if (::hx::IsNotNull( this->_depthRender )) {
HXLINE( 941)			this->_depthRender->dispose();
            		}
HXLINE( 943)		if (::hx::IsNotNull( this->_rttBufferManager )) {
HXLINE( 944)			this->_rttBufferManager->dispose();
            		}
HXLINE( 946)		this->_mouse3DManager->disableMouseListeners(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 947)		this->_mouse3DManager->dispose();
HXLINE( 949)		this->_touch3DManager->disableTouchListeners(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 950)		this->_touch3DManager->dispose();
HXLINE( 952)		this->_rttBufferManager = null();
HXLINE( 953)		this->_depthRender = null();
HXLINE( 954)		this->_mouse3DManager = null();
HXLINE( 955)		this->_touch3DManager = null();
HXLINE( 956)		this->_depthRenderer = null();
HXLINE( 957)		this->_stage3DProxy = null();
HXLINE( 958)		this->_renderer = null();
HXLINE( 959)		this->_entityCollector = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,dispose,(void))

 ::openfl::geom::Vector3D View3D_obj::project( ::openfl::geom::Vector3D point3d){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_969_project)
HXLINE( 970)		 ::openfl::geom::Vector3D v = this->_camera->project(point3d,null());
HXLINE( 972)		v->x = (((v->x + ((Float)1.0)) * this->_globalWidth) / ((Float)2.0));
HXLINE( 973)		v->y = (((v->y + ((Float)1.0)) * this->_globalHeight) / ((Float)2.0));
HXLINE( 975)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,project,return )

 ::openfl::geom::Vector3D View3D_obj::unproject(Float sX,Float sY,Float sZ, ::openfl::geom::Vector3D v){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_991_unproject)
HXDLIN( 991)		 ::away3d::cameras::Camera3D _hx_tmp = this->_camera;
HXDLIN( 991)		Float _hx_tmp1 = (((sX - this->_globalPos->x) * ( (Float)(2) )) - this->_globalWidth);
HXDLIN( 991)		Float _hx_tmp2 = (_hx_tmp1 / ( (Float)(this->_stage3DProxy->get_width()) ));
HXDLIN( 991)		Float _hx_tmp3 = (((sY - this->_globalPos->y) * ( (Float)(2) )) - this->_globalHeight);
HXDLIN( 991)		return _hx_tmp->unproject(_hx_tmp2,(_hx_tmp3 / ( (Float)(this->_stage3DProxy->get_height()) )),sZ,v);
            	}


HX_DEFINE_DYNAMIC_FUNC4(View3D_obj,unproject,return )

 ::openfl::geom::Vector3D View3D_obj::getRay(Float sX,Float sY,Float sZ){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_1006_getRay)
HXDLIN(1006)		return this->_camera->getRay(((((sX - this->_globalPos->x) * ( (Float)(2) )) - this->_globalWidth) / this->_globalWidth),((((sY - this->_globalPos->y) * ( (Float)(2) )) - this->_globalHeight) / this->_globalHeight),sZ,null());
            	}


HX_DEFINE_DYNAMIC_FUNC3(View3D_obj,getRay,return )

::Dynamic View3D_obj::get_mousePicker(){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_1013_get_mousePicker)
HXDLIN(1013)		return this->_mouse3DManager->get_mousePicker();
            	}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_mousePicker,return )

::Dynamic View3D_obj::set_mousePicker(::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_1017_set_mousePicker)
HXLINE(1018)		this->_mouse3DManager->set_mousePicker(value);
HXLINE(1019)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,set_mousePicker,return )

::Dynamic View3D_obj::get_touchPicker(){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_1026_get_touchPicker)
HXDLIN(1026)		return this->_touch3DManager->get_touchPicker();
            	}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_touchPicker,return )

::Dynamic View3D_obj::set_touchPicker(::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_1030_set_touchPicker)
HXLINE(1031)		this->_touch3DManager->set_touchPicker(value);
HXLINE(1032)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,set_touchPicker,return )

 ::away3d::core::traverse::EntityCollector View3D_obj::get_entityCollector(){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_1045_get_entityCollector)
HXDLIN(1045)		return this->_entityCollector;
            	}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_entityCollector,return )

void View3D_obj::onLensChanged( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_1049_onLensChanged)
HXLINE(1050)		this->_scissorRectDirty = true;
HXLINE(1051)		this->_viewportDirty = true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,onLensChanged,(void))

void View3D_obj::onAddedToStage( ::openfl::events::Event event){
            	HX_GC_STACKFRAME(&_hx_pos_c7e943222c2938e6_1058_onAddedToStage)
HXLINE(1059)		if (this->_addedToStage) {
HXLINE(1060)			return;
            		}
HXLINE(1062)		this->_addedToStage = true;
HXLINE(1064)		if (::hx::IsNull( this->_stage3DProxy )) {
HXLINE(1065)			if ((this->_contextIndex == -1)) {
HXLINE(1066)				this->_stage3DProxy = ::away3d::core::managers::Stage3DManager_obj::getInstance(this->stage)->getFreeStage3DProxy(this->_forceSoftware,this->_profile);
            			}
            			else {
HXLINE(1068)				this->_stage3DProxy = ::away3d::core::managers::Stage3DManager_obj::getInstance(this->stage)->getStage3DProxy(this->_contextIndex,this->_forceSoftware,this->_profile);
            			}
HXLINE(1069)			this->_stage3DProxy->addEventListener(HX_("ViewportUpdated",55,9e,a2,01),this->onViewportUpdated_dyn(),null(),null(),null());
HXLINE(1070)			this->_stage3DProxy->addEventListener(HX_("Context3DRecreated",35,9a,ac,ef),this->onContext3DRecreated_dyn(),null(),null(),null());
            		}
HXLINE(1073)		this->_globalPosDirty = true;
HXLINE(1075)		this->_rttBufferManager = ::away3d::core::managers::RTTBufferManager_obj::getInstance(this->_stage3DProxy);
HXLINE(1077)		 ::away3d::core::render::RendererBase _hx_tmp = this->_renderer;
HXDLIN(1077)		_hx_tmp->set_stage3DProxy(this->_depthRenderer->set_stage3DProxy(this->_stage3DProxy));
HXLINE(1080)		Float stageBR = this->stage->get_x();
HXDLIN(1080)		Float stageBR1 = (stageBR + this->stage->stageWidth);
HXDLIN(1080)		Float stageBR2 = this->stage->get_y();
HXDLIN(1080)		 ::openfl::geom::Point stageBR3 =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,stageBR1,(stageBR2 + this->stage->stageHeight));
HXLINE(1081)		if ((this->_globalWidth == 0)) {
HXLINE(1082)			Float _hx_tmp;
HXDLIN(1082)			if (::hx::IsNotNull( this->parent )) {
HXLINE(1082)				_hx_tmp = (this->parent->globalToLocal(stageBR3)->x - this->_localTLPos->x);
            			}
            			else {
HXLINE(1082)				_hx_tmp = ( (Float)(this->stage->stageWidth) );
            			}
HXDLIN(1082)			this->set_width(_hx_tmp);
            		}
            		else {
HXLINE(1084)			 ::away3d::core::managers::RTTBufferManager _hx_tmp = this->_rttBufferManager;
HXDLIN(1084)			_hx_tmp->set_viewWidth(::Std_obj::_hx_int(this->_globalWidth));
            		}
HXLINE(1085)		if ((this->_globalHeight == 0)) {
HXLINE(1086)			Float _hx_tmp;
HXDLIN(1086)			if (::hx::IsNotNull( this->parent )) {
HXLINE(1086)				_hx_tmp = (this->parent->globalToLocal(stageBR3)->y - this->_localTLPos->y);
            			}
            			else {
HXLINE(1086)				_hx_tmp = ( (Float)(this->stage->stageHeight) );
            			}
HXDLIN(1086)			this->set_height(_hx_tmp);
            		}
            		else {
HXLINE(1088)			 ::away3d::core::managers::RTTBufferManager _hx_tmp = this->_rttBufferManager;
HXDLIN(1088)			_hx_tmp->set_viewHeight(::Std_obj::_hx_int(this->_globalHeight));
            		}
HXLINE(1090)		if (this->_shareContext) {
HXLINE(1091)			this->_mouse3DManager->addViewLayer(::hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,onAddedToStage,(void))

void View3D_obj::onAdded( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_1095_onAdded)
HXLINE(1096)		this->_parentIsStage = ::hx::IsInstanceEq( this->parent,this->stage );
HXLINE(1098)		this->_globalPos = this->parent->localToGlobal(this->_localTLPos);
HXLINE(1099)		this->_globalPosDirty = true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,onAdded,(void))

void View3D_obj::onViewportUpdated( ::away3d::events::Stage3DEvent event){
            	HX_STACKFRAME(&_hx_pos_c7e943222c2938e6_1103_onViewportUpdated)
HXLINE(1104)		if (this->_shareContext) {
HXLINE(1105)			Float _hx_tmp = this->_globalPos->x;
HXDLIN(1105)			Float _hx_tmp1 = this->_stage3DProxy->get_x();
HXDLIN(1105)			this->_scissorRect->x = (_hx_tmp - _hx_tmp1);
HXLINE(1106)			Float _hx_tmp2 = this->_globalPos->y;
HXDLIN(1106)			Float _hx_tmp3 = this->_stage3DProxy->get_y();
HXDLIN(1106)			this->_scissorRect->y = (_hx_tmp2 - _hx_tmp3);
HXLINE(1107)			this->_scissorRect->width = this->_globalWidth;
HXLINE(1108)			this->_scissorRect->height = this->_globalHeight;
HXLINE(1109)			this->_scissorRectDirty = true;
            		}
HXLINE(1112)		this->_viewportDirty = true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,onViewportUpdated,(void))


::hx::ObjectPtr< View3D_obj > View3D_obj::__new( ::away3d::containers::Scene3D scene, ::away3d::cameras::Camera3D camera, ::away3d::core::render::RendererBase renderer,::hx::Null< bool >  __o_forceSoftware,::String __o_profile,::hx::Null< int >  __o_contextIndex) {
	::hx::ObjectPtr< View3D_obj > __this = new View3D_obj();
	__this->__construct(scene,camera,renderer,__o_forceSoftware,__o_profile,__o_contextIndex);
	return __this;
}

::hx::ObjectPtr< View3D_obj > View3D_obj::__alloc(::hx::Ctx *_hx_ctx, ::away3d::containers::Scene3D scene, ::away3d::cameras::Camera3D camera, ::away3d::core::render::RendererBase renderer,::hx::Null< bool >  __o_forceSoftware,::String __o_profile,::hx::Null< int >  __o_contextIndex) {
	View3D_obj *__this = (View3D_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(View3D_obj), true, "away3d.containers.View3D"));
	*(void **)__this = View3D_obj::_hx_vtable;
	__this->__construct(scene,camera,renderer,__o_forceSoftware,__o_profile,__o_contextIndex);
	return __this;
}

View3D_obj::View3D_obj()
{
}

void View3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(View3D);
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_localTLPos,"_localTLPos");
	HX_MARK_MEMBER_NAME(_localBRPos,"_localBRPos");
	HX_MARK_MEMBER_NAME(_globalPos,"_globalPos");
	HX_MARK_MEMBER_NAME(_globalWidth,"_globalWidth");
	HX_MARK_MEMBER_NAME(_globalHeight,"_globalHeight");
	HX_MARK_MEMBER_NAME(_globalPosDirty,"_globalPosDirty");
	HX_MARK_MEMBER_NAME(_scene,"_scene");
	HX_MARK_MEMBER_NAME(_camera,"_camera");
	HX_MARK_MEMBER_NAME(_entityCollector,"_entityCollector");
	HX_MARK_MEMBER_NAME(_aspectRatio,"_aspectRatio");
	HX_MARK_MEMBER_NAME(_time,"_time");
	HX_MARK_MEMBER_NAME(_deltaTime,"_deltaTime");
	HX_MARK_MEMBER_NAME(_backgroundColor,"_backgroundColor");
	HX_MARK_MEMBER_NAME(_backgroundAlpha,"_backgroundAlpha");
	HX_MARK_MEMBER_NAME(_mouse3DManager,"_mouse3DManager");
	HX_MARK_MEMBER_NAME(_touch3DManager,"_touch3DManager");
	HX_MARK_MEMBER_NAME(_renderer,"_renderer");
	HX_MARK_MEMBER_NAME(_depthRenderer,"_depthRenderer");
	HX_MARK_MEMBER_NAME(_addedToStage,"_addedToStage");
	HX_MARK_MEMBER_NAME(_forceSoftware,"_forceSoftware");
	HX_MARK_MEMBER_NAME(_filter3DRenderer,"_filter3DRenderer");
	HX_MARK_MEMBER_NAME(_requireDepthRender,"_requireDepthRender");
	HX_MARK_MEMBER_NAME(_depthRender,"_depthRender");
	HX_MARK_MEMBER_NAME(_depthTextureInvalid,"_depthTextureInvalid");
	HX_MARK_MEMBER_NAME(_hitField,"_hitField");
	HX_MARK_MEMBER_NAME(_parentIsStage,"_parentIsStage");
	HX_MARK_MEMBER_NAME(_background,"_background");
	HX_MARK_MEMBER_NAME(_stage3DProxy,"_stage3DProxy");
	HX_MARK_MEMBER_NAME(_backBufferInvalid,"_backBufferInvalid");
	HX_MARK_MEMBER_NAME(_antiAlias,"_antiAlias");
	HX_MARK_MEMBER_NAME(_rttBufferManager,"_rttBufferManager");
	HX_MARK_MEMBER_NAME(_rightClickMenuEnabled,"_rightClickMenuEnabled");
	HX_MARK_MEMBER_NAME(_sourceURL,"_sourceURL");
	HX_MARK_MEMBER_NAME(_shareContext,"_shareContext");
	HX_MARK_MEMBER_NAME(_scissorRect,"_scissorRect");
	HX_MARK_MEMBER_NAME(_scissorRectDirty,"_scissorRectDirty");
	HX_MARK_MEMBER_NAME(_viewportDirty,"_viewportDirty");
	HX_MARK_MEMBER_NAME(_depthPrepass,"_depthPrepass");
	HX_MARK_MEMBER_NAME(_profile,"_profile");
	HX_MARK_MEMBER_NAME(_layeredView,"_layeredView");
	HX_MARK_MEMBER_NAME(_contextIndex,"_contextIndex");
	HX_MARK_MEMBER_NAME(deltaTime,"deltaTime");
	HX_MARK_MEMBER_NAME(renderedFacesCount,"renderedFacesCount");
	HX_MARK_MEMBER_NAME(entityCollector,"entityCollector");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void View3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_localTLPos,"_localTLPos");
	HX_VISIT_MEMBER_NAME(_localBRPos,"_localBRPos");
	HX_VISIT_MEMBER_NAME(_globalPos,"_globalPos");
	HX_VISIT_MEMBER_NAME(_globalWidth,"_globalWidth");
	HX_VISIT_MEMBER_NAME(_globalHeight,"_globalHeight");
	HX_VISIT_MEMBER_NAME(_globalPosDirty,"_globalPosDirty");
	HX_VISIT_MEMBER_NAME(_scene,"_scene");
	HX_VISIT_MEMBER_NAME(_camera,"_camera");
	HX_VISIT_MEMBER_NAME(_entityCollector,"_entityCollector");
	HX_VISIT_MEMBER_NAME(_aspectRatio,"_aspectRatio");
	HX_VISIT_MEMBER_NAME(_time,"_time");
	HX_VISIT_MEMBER_NAME(_deltaTime,"_deltaTime");
	HX_VISIT_MEMBER_NAME(_backgroundColor,"_backgroundColor");
	HX_VISIT_MEMBER_NAME(_backgroundAlpha,"_backgroundAlpha");
	HX_VISIT_MEMBER_NAME(_mouse3DManager,"_mouse3DManager");
	HX_VISIT_MEMBER_NAME(_touch3DManager,"_touch3DManager");
	HX_VISIT_MEMBER_NAME(_renderer,"_renderer");
	HX_VISIT_MEMBER_NAME(_depthRenderer,"_depthRenderer");
	HX_VISIT_MEMBER_NAME(_addedToStage,"_addedToStage");
	HX_VISIT_MEMBER_NAME(_forceSoftware,"_forceSoftware");
	HX_VISIT_MEMBER_NAME(_filter3DRenderer,"_filter3DRenderer");
	HX_VISIT_MEMBER_NAME(_requireDepthRender,"_requireDepthRender");
	HX_VISIT_MEMBER_NAME(_depthRender,"_depthRender");
	HX_VISIT_MEMBER_NAME(_depthTextureInvalid,"_depthTextureInvalid");
	HX_VISIT_MEMBER_NAME(_hitField,"_hitField");
	HX_VISIT_MEMBER_NAME(_parentIsStage,"_parentIsStage");
	HX_VISIT_MEMBER_NAME(_background,"_background");
	HX_VISIT_MEMBER_NAME(_stage3DProxy,"_stage3DProxy");
	HX_VISIT_MEMBER_NAME(_backBufferInvalid,"_backBufferInvalid");
	HX_VISIT_MEMBER_NAME(_antiAlias,"_antiAlias");
	HX_VISIT_MEMBER_NAME(_rttBufferManager,"_rttBufferManager");
	HX_VISIT_MEMBER_NAME(_rightClickMenuEnabled,"_rightClickMenuEnabled");
	HX_VISIT_MEMBER_NAME(_sourceURL,"_sourceURL");
	HX_VISIT_MEMBER_NAME(_shareContext,"_shareContext");
	HX_VISIT_MEMBER_NAME(_scissorRect,"_scissorRect");
	HX_VISIT_MEMBER_NAME(_scissorRectDirty,"_scissorRectDirty");
	HX_VISIT_MEMBER_NAME(_viewportDirty,"_viewportDirty");
	HX_VISIT_MEMBER_NAME(_depthPrepass,"_depthPrepass");
	HX_VISIT_MEMBER_NAME(_profile,"_profile");
	HX_VISIT_MEMBER_NAME(_layeredView,"_layeredView");
	HX_VISIT_MEMBER_NAME(_contextIndex,"_contextIndex");
	HX_VISIT_MEMBER_NAME(deltaTime,"deltaTime");
	HX_VISIT_MEMBER_NAME(renderedFacesCount,"renderedFacesCount");
	HX_VISIT_MEMBER_NAME(entityCollector,"entityCollector");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val View3D_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_time") ) { return ::hx::Val( _time ); }
		if (HX_FIELD_EQ(inName,"scene") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scene() ); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return ::hx::Val( set_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return ::hx::Val( set_y_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { return ::hx::Val( _width ); }
		if (HX_FIELD_EQ(inName,"_scene") ) { return ::hx::Val( _scene ); }
		if (HX_FIELD_EQ(inName,"camera") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_camera() ); }
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		if (HX_FIELD_EQ(inName,"getRay") ) { return ::hx::Val( getRay_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { return ::hx::Val( _height ); }
		if (HX_FIELD_EQ(inName,"_camera") ) { return ::hx::Val( _camera ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		if (HX_FIELD_EQ(inName,"project") ) { return ::hx::Val( project_dyn() ); }
		if (HX_FIELD_EQ(inName,"onAdded") ) { return ::hx::Val( onAdded_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_profile") ) { return ::hx::Val( _profile ); }
		if (HX_FIELD_EQ(inName,"renderer") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_renderer() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_renderer") ) { return ::hx::Val( _renderer ); }
		if (HX_FIELD_EQ(inName,"_hitField") ) { return ::hx::Val( _hitField ); }
		if (HX_FIELD_EQ(inName,"filters3d") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_filters3d() ); }
		if (HX_FIELD_EQ(inName,"get_scene") ) { return ::hx::Val( get_scene_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scene") ) { return ::hx::Val( set_scene_dyn() ); }
		if (HX_FIELD_EQ(inName,"deltaTime") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_deltaTime() : deltaTime ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"antiAlias") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_antiAlias() ); }
		if (HX_FIELD_EQ(inName,"unproject") ) { return ::hx::Val( unproject_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_globalPos") ) { return ::hx::Val( _globalPos ); }
		if (HX_FIELD_EQ(inName,"_deltaTime") ) { return ::hx::Val( _deltaTime ); }
		if (HX_FIELD_EQ(inName,"_antiAlias") ) { return ::hx::Val( _antiAlias ); }
		if (HX_FIELD_EQ(inName,"_sourceURL") ) { return ::hx::Val( _sourceURL ); }
		if (HX_FIELD_EQ(inName,"background") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_background() ); }
		if (HX_FIELD_EQ(inName,"get_camera") ) { return ::hx::Val( get_camera_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_camera") ) { return ::hx::Val( set_camera_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateTime") ) { return ::hx::Val( updateTime_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_localTLPos") ) { return ::hx::Val( _localTLPos ); }
		if (HX_FIELD_EQ(inName,"_localBRPos") ) { return ::hx::Val( _localBRPos ); }
		if (HX_FIELD_EQ(inName,"_background") ) { return ::hx::Val( _background ); }
		if (HX_FIELD_EQ(inName,"layeredView") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_layeredView() ); }
		if (HX_FIELD_EQ(inName,"get_filters") ) { return ::hx::Val( get_filters_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_filters") ) { return ::hx::Val( set_filters_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return ::hx::Val( set_visible_dyn() ); }
		if (HX_FIELD_EQ(inName,"mousePicker") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_mousePicker() ); }
		if (HX_FIELD_EQ(inName,"touchPicker") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_touchPicker() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_globalWidth") ) { return ::hx::Val( _globalWidth ); }
		if (HX_FIELD_EQ(inName,"_aspectRatio") ) { return ::hx::Val( _aspectRatio ); }
		if (HX_FIELD_EQ(inName,"_depthRender") ) { return ::hx::Val( _depthRender ); }
		if (HX_FIELD_EQ(inName,"_scissorRect") ) { return ::hx::Val( _scissorRect ); }
		if (HX_FIELD_EQ(inName,"_layeredView") ) { return ::hx::Val( _layeredView ); }
		if (HX_FIELD_EQ(inName,"depthPrepass") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_depthPrepass() ); }
		if (HX_FIELD_EQ(inName,"stage3DProxy") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_stage3DProxy() ); }
		if (HX_FIELD_EQ(inName,"initHitField") ) { return ::hx::Val( initHitField_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_renderer") ) { return ::hx::Val( get_renderer_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_renderer") ) { return ::hx::Val( set_renderer_dyn() ); }
		if (HX_FIELD_EQ(inName,"shareContext") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_shareContext() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_globalHeight") ) { return ::hx::Val( _globalHeight ); }
		if (HX_FIELD_EQ(inName,"_addedToStage") ) { return ::hx::Val( _addedToStage ); }
		if (HX_FIELD_EQ(inName,"_stage3DProxy") ) { return ::hx::Val( _stage3DProxy ); }
		if (HX_FIELD_EQ(inName,"_shareContext") ) { return ::hx::Val( _shareContext ); }
		if (HX_FIELD_EQ(inName,"_depthPrepass") ) { return ::hx::Val( _depthPrepass ); }
		if (HX_FIELD_EQ(inName,"_contextIndex") ) { return ::hx::Val( _contextIndex ); }
		if (HX_FIELD_EQ(inName,"get_filters3d") ) { return ::hx::Val( get_filters3d_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_filters3d") ) { return ::hx::Val( set_filters3d_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_deltaTime") ) { return ::hx::Val( get_deltaTime_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_antiAlias") ) { return ::hx::Val( get_antiAlias_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_antiAlias") ) { return ::hx::Val( set_antiAlias_dyn() ); }
		if (HX_FIELD_EQ(inName,"onLensChanged") ) { return ::hx::Val( onLensChanged_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_depthRenderer") ) { return ::hx::Val( _depthRenderer ); }
		if (HX_FIELD_EQ(inName,"_forceSoftware") ) { return ::hx::Val( _forceSoftware ); }
		if (HX_FIELD_EQ(inName,"_parentIsStage") ) { return ::hx::Val( _parentIsStage ); }
		if (HX_FIELD_EQ(inName,"_viewportDirty") ) { return ::hx::Val( _viewportDirty ); }
		if (HX_FIELD_EQ(inName,"forceMouseMove") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_forceMouseMove() ); }
		if (HX_FIELD_EQ(inName,"get_background") ) { return ::hx::Val( get_background_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_background") ) { return ::hx::Val( set_background_dyn() ); }
		if (HX_FIELD_EQ(inName,"onAddedToStage") ) { return ::hx::Val( onAddedToStage_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_globalPosDirty") ) { return ::hx::Val( _globalPosDirty ); }
		if (HX_FIELD_EQ(inName,"_mouse3DManager") ) { return ::hx::Val( _mouse3DManager ); }
		if (HX_FIELD_EQ(inName,"_touch3DManager") ) { return ::hx::Val( _touch3DManager ); }
		if (HX_FIELD_EQ(inName,"get_layeredView") ) { return ::hx::Val( get_layeredView_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_layeredView") ) { return ::hx::Val( set_layeredView_dyn() ); }
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_backgroundColor() ); }
		if (HX_FIELD_EQ(inName,"backgroundAlpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_backgroundAlpha() ); }
		if (HX_FIELD_EQ(inName,"updateGlobalPos") ) { return ::hx::Val( updateGlobalPos_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_mousePicker") ) { return ::hx::Val( get_mousePicker_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_mousePicker") ) { return ::hx::Val( set_mousePicker_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_touchPicker") ) { return ::hx::Val( get_touchPicker_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_touchPicker") ) { return ::hx::Val( set_touchPicker_dyn() ); }
		if (HX_FIELD_EQ(inName,"entityCollector") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_entityCollector() : entityCollector ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_entityCollector") ) { return ::hx::Val( _entityCollector ); }
		if (HX_FIELD_EQ(inName,"_backgroundColor") ) { return ::hx::Val( _backgroundColor ); }
		if (HX_FIELD_EQ(inName,"_backgroundAlpha") ) { return ::hx::Val( _backgroundAlpha ); }
		if (HX_FIELD_EQ(inName,"get_depthPrepass") ) { return ::hx::Val( get_depthPrepass_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_depthPrepass") ) { return ::hx::Val( set_depthPrepass_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_stage3DProxy") ) { return ::hx::Val( get_stage3DProxy_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_stage3DProxy") ) { return ::hx::Val( set_stage3DProxy_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_shareContext") ) { return ::hx::Val( get_shareContext_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_shareContext") ) { return ::hx::Val( set_shareContext_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateBackBuffer") ) { return ::hx::Val( updateBackBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"initDepthTexture") ) { return ::hx::Val( initDepthTexture_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_filter3DRenderer") ) { return ::hx::Val( _filter3DRenderer ); }
		if (HX_FIELD_EQ(inName,"_rttBufferManager") ) { return ::hx::Val( _rttBufferManager ); }
		if (HX_FIELD_EQ(inName,"_scissorRectDirty") ) { return ::hx::Val( _scissorRectDirty ); }
		if (HX_FIELD_EQ(inName,"onViewportUpdated") ) { return ::hx::Val( onViewportUpdated_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_backBufferInvalid") ) { return ::hx::Val( _backBufferInvalid ); }
		if (HX_FIELD_EQ(inName,"get_forceMouseMove") ) { return ::hx::Val( get_forceMouseMove_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_forceMouseMove") ) { return ::hx::Val( set_forceMouseMove_dyn() ); }
		if (HX_FIELD_EQ(inName,"renderedFacesCount") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_renderedFacesCount() : renderedFacesCount ); }
		if (HX_FIELD_EQ(inName,"updateViewSizeData") ) { return ::hx::Val( updateViewSizeData_dyn() ); }
		if (HX_FIELD_EQ(inName,"renderDepthPrepass") ) { return ::hx::Val( renderDepthPrepass_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_requireDepthRender") ) { return ::hx::Val( _requireDepthRender ); }
		if (HX_FIELD_EQ(inName,"get_backgroundColor") ) { return ::hx::Val( get_backgroundColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_backgroundColor") ) { return ::hx::Val( set_backgroundColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_backgroundAlpha") ) { return ::hx::Val( get_backgroundAlpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_backgroundAlpha") ) { return ::hx::Val( set_backgroundAlpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_entityCollector") ) { return ::hx::Val( get_entityCollector_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_depthTextureInvalid") ) { return ::hx::Val( _depthTextureInvalid ); }
		if (HX_FIELD_EQ(inName,"onContext3DRecreated") ) { return ::hx::Val( onContext3DRecreated_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_rightClickMenuEnabled") ) { return ::hx::Val( _rightClickMenuEnabled ); }
		if (HX_FIELD_EQ(inName,"get_renderedFacesCount") ) { return ::hx::Val( get_renderedFacesCount_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"onScenePartitionChanged") ) { return ::hx::Val( onScenePartitionChanged_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"renderSceneDepthToTexture") ) { return ::hx::Val( renderSceneDepthToTexture_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val View3D_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_time") ) { _time=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scene") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scene(inValue.Cast<  ::away3d::containers::Scene3D >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scene") ) { _scene=inValue.Cast<  ::away3d::containers::Scene3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camera") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_camera(inValue.Cast<  ::away3d::cameras::Camera3D >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_camera") ) { _camera=inValue.Cast<  ::away3d::cameras::Camera3D >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_profile") ) { _profile=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderer") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_renderer(inValue.Cast<  ::away3d::core::render::RendererBase >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_renderer") ) { _renderer=inValue.Cast<  ::away3d::core::render::RendererBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_hitField") ) { _hitField=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filters3d") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_filters3d(inValue.Cast< ::Array< ::Dynamic> >()) ); }
		if (HX_FIELD_EQ(inName,"deltaTime") ) { deltaTime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"antiAlias") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_antiAlias(inValue.Cast< int >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_globalPos") ) { _globalPos=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_deltaTime") ) { _deltaTime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_antiAlias") ) { _antiAlias=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sourceURL") ) { _sourceURL=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"background") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_background(inValue.Cast<  ::away3d::textures::Texture2DBase >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_localTLPos") ) { _localTLPos=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_localBRPos") ) { _localBRPos=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_background") ) { _background=inValue.Cast<  ::away3d::textures::Texture2DBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layeredView") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_layeredView(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"mousePicker") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_mousePicker(inValue.Cast< ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"touchPicker") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_touchPicker(inValue.Cast< ::Dynamic >()) ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_globalWidth") ) { _globalWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_aspectRatio") ) { _aspectRatio=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_depthRender") ) { _depthRender=inValue.Cast<  ::openfl::display3D::textures::Texture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scissorRect") ) { _scissorRect=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_layeredView") ) { _layeredView=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"depthPrepass") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_depthPrepass(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"stage3DProxy") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_stage3DProxy(inValue.Cast<  ::away3d::core::managers::Stage3DProxy >()) ); }
		if (HX_FIELD_EQ(inName,"shareContext") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_shareContext(inValue.Cast< bool >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_globalHeight") ) { _globalHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_addedToStage") ) { _addedToStage=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_stage3DProxy") ) { _stage3DProxy=inValue.Cast<  ::away3d::core::managers::Stage3DProxy >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_shareContext") ) { _shareContext=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_depthPrepass") ) { _depthPrepass=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_contextIndex") ) { _contextIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_depthRenderer") ) { _depthRenderer=inValue.Cast<  ::away3d::core::render::DepthRenderer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_forceSoftware") ) { _forceSoftware=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_parentIsStage") ) { _parentIsStage=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_viewportDirty") ) { _viewportDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"forceMouseMove") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_forceMouseMove(inValue.Cast< bool >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_globalPosDirty") ) { _globalPosDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mouse3DManager") ) { _mouse3DManager=inValue.Cast<  ::away3d::core::managers::Mouse3DManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_touch3DManager") ) { _touch3DManager=inValue.Cast<  ::away3d::core::managers::Touch3DManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_backgroundColor(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"backgroundAlpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_backgroundAlpha(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"entityCollector") ) { entityCollector=inValue.Cast<  ::away3d::core::traverse::EntityCollector >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_entityCollector") ) { _entityCollector=inValue.Cast<  ::away3d::core::traverse::EntityCollector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_backgroundColor") ) { _backgroundColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_backgroundAlpha") ) { _backgroundAlpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_filter3DRenderer") ) { _filter3DRenderer=inValue.Cast<  ::away3d::core::render::Filter3DRenderer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rttBufferManager") ) { _rttBufferManager=inValue.Cast<  ::away3d::core::managers::RTTBufferManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scissorRectDirty") ) { _scissorRectDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_backBufferInvalid") ) { _backBufferInvalid=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderedFacesCount") ) { renderedFacesCount=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_requireDepthRender") ) { _requireDepthRender=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_depthTextureInvalid") ) { _depthTextureInvalid=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_rightClickMenuEnabled") ) { _rightClickMenuEnabled=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void View3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_width",47,fd,49,c6));
	outFields->push(HX_("_height",86,19,c3,70));
	outFields->push(HX_("_localTLPos",d0,06,72,07));
	outFields->push(HX_("_localBRPos",78,dd,32,ae));
	outFields->push(HX_("_globalPos",b2,1f,52,b4));
	outFields->push(HX_("_globalWidth",a4,bb,aa,08));
	outFields->push(HX_("_globalHeight",89,ec,08,43));
	outFields->push(HX_("_globalPosDirty",00,7b,21,0b));
	outFields->push(HX_("_scene",8d,20,b9,74));
	outFields->push(HX_("_camera",44,58,03,26));
	outFields->push(HX_("_entityCollector",2b,58,3f,58));
	outFields->push(HX_("_aspectRatio",14,8e,cd,63));
	outFields->push(HX_("_time",ec,e7,0d,00));
	outFields->push(HX_("_deltaTime",e6,b7,fe,50));
	outFields->push(HX_("_backgroundColor",16,91,26,f8));
	outFields->push(HX_("_backgroundAlpha",11,c7,60,cf));
	outFields->push(HX_("_mouse3DManager",96,bb,fc,51));
	outFields->push(HX_("_touch3DManager",bc,b6,b2,d7));
	outFields->push(HX_("_renderer",a2,bc,71,fa));
	outFields->push(HX_("_depthRenderer",a7,9d,b6,2f));
	outFields->push(HX_("_addedToStage",42,b5,c3,ee));
	outFields->push(HX_("_forceSoftware",73,fd,18,f9));
	outFields->push(HX_("_filter3DRenderer",2b,2b,4d,04));
	outFields->push(HX_("_requireDepthRender",73,c9,89,02));
	outFields->push(HX_("_depthRender",ba,a2,3c,ed));
	outFields->push(HX_("_depthTextureInvalid",c0,16,f8,53));
	outFields->push(HX_("_hitField",c6,e8,88,87));
	outFields->push(HX_("_parentIsStage",ab,7a,f7,68));
	outFields->push(HX_("_background",0d,61,a7,f8));
	outFields->push(HX_("_stage3DProxy",de,ab,3d,f1));
	outFields->push(HX_("_backBufferInvalid",f1,73,22,22));
	outFields->push(HX_("_antiAlias",4f,c2,b9,64));
	outFields->push(HX_("_rttBufferManager",da,55,ab,95));
	outFields->push(HX_("_rightClickMenuEnabled",77,d2,df,4a));
	outFields->push(HX_("_sourceURL",15,4d,a1,c4));
	outFields->push(HX_("_shareContext",af,55,30,09));
	outFields->push(HX_("_scissorRect",61,8d,5d,c7));
	outFields->push(HX_("_scissorRectDirty",f1,12,ff,ee));
	outFields->push(HX_("_viewportDirty",0d,b2,5d,00));
	outFields->push(HX_("_depthPrepass",90,d2,9a,60));
	outFields->push(HX_("_profile",aa,a2,01,2d));
	outFields->push(HX_("_layeredView",f6,b4,ec,98));
	outFields->push(HX_("_contextIndex",82,25,e8,26));
	outFields->push(HX_("depthPrepass",b1,3f,2c,7e));
	outFields->push(HX_("stage3DProxy",ff,18,cf,0e));
	outFields->push(HX_("forceMouseMove",6b,b4,b1,60));
	outFields->push(HX_("background",ee,93,1d,26));
	outFields->push(HX_("layeredView",f5,06,e3,32));
	outFields->push(HX_("filters3d",4c,f3,7e,e1));
	outFields->push(HX_("renderer",43,c5,db,b2));
	outFields->push(HX_("backgroundColor",95,4e,47,0d));
	outFields->push(HX_("backgroundAlpha",90,84,81,e4));
	outFields->push(HX_("camera",a5,46,8c,b7));
	outFields->push(HX_("scene",4c,d9,d1,78));
	outFields->push(HX_("deltaTime",25,3c,5c,f5));
	outFields->push(HX_("antiAlias",8e,46,17,09));
	outFields->push(HX_("renderedFacesCount",4e,f9,1a,aa));
	outFields->push(HX_("shareContext",d0,c2,c1,26));
	outFields->push(HX_("mousePicker",93,2f,55,74));
	outFields->push(HX_("touchPicker",ad,60,03,e4));
	outFields->push(HX_("entityCollector",aa,15,60,6d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo View3D_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(View3D_obj,_width),HX_("_width",47,fd,49,c6)},
	{::hx::fsFloat,(int)offsetof(View3D_obj,_height),HX_("_height",86,19,c3,70)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(View3D_obj,_localTLPos),HX_("_localTLPos",d0,06,72,07)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(View3D_obj,_localBRPos),HX_("_localBRPos",78,dd,32,ae)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(View3D_obj,_globalPos),HX_("_globalPos",b2,1f,52,b4)},
	{::hx::fsFloat,(int)offsetof(View3D_obj,_globalWidth),HX_("_globalWidth",a4,bb,aa,08)},
	{::hx::fsFloat,(int)offsetof(View3D_obj,_globalHeight),HX_("_globalHeight",89,ec,08,43)},
	{::hx::fsBool,(int)offsetof(View3D_obj,_globalPosDirty),HX_("_globalPosDirty",00,7b,21,0b)},
	{::hx::fsObject /*  ::away3d::containers::Scene3D */ ,(int)offsetof(View3D_obj,_scene),HX_("_scene",8d,20,b9,74)},
	{::hx::fsObject /*  ::away3d::cameras::Camera3D */ ,(int)offsetof(View3D_obj,_camera),HX_("_camera",44,58,03,26)},
	{::hx::fsObject /*  ::away3d::core::traverse::EntityCollector */ ,(int)offsetof(View3D_obj,_entityCollector),HX_("_entityCollector",2b,58,3f,58)},
	{::hx::fsFloat,(int)offsetof(View3D_obj,_aspectRatio),HX_("_aspectRatio",14,8e,cd,63)},
	{::hx::fsInt,(int)offsetof(View3D_obj,_time),HX_("_time",ec,e7,0d,00)},
	{::hx::fsInt,(int)offsetof(View3D_obj,_deltaTime),HX_("_deltaTime",e6,b7,fe,50)},
	{::hx::fsInt,(int)offsetof(View3D_obj,_backgroundColor),HX_("_backgroundColor",16,91,26,f8)},
	{::hx::fsFloat,(int)offsetof(View3D_obj,_backgroundAlpha),HX_("_backgroundAlpha",11,c7,60,cf)},
	{::hx::fsObject /*  ::away3d::core::managers::Mouse3DManager */ ,(int)offsetof(View3D_obj,_mouse3DManager),HX_("_mouse3DManager",96,bb,fc,51)},
	{::hx::fsObject /*  ::away3d::core::managers::Touch3DManager */ ,(int)offsetof(View3D_obj,_touch3DManager),HX_("_touch3DManager",bc,b6,b2,d7)},
	{::hx::fsObject /*  ::away3d::core::render::RendererBase */ ,(int)offsetof(View3D_obj,_renderer),HX_("_renderer",a2,bc,71,fa)},
	{::hx::fsObject /*  ::away3d::core::render::DepthRenderer */ ,(int)offsetof(View3D_obj,_depthRenderer),HX_("_depthRenderer",a7,9d,b6,2f)},
	{::hx::fsBool,(int)offsetof(View3D_obj,_addedToStage),HX_("_addedToStage",42,b5,c3,ee)},
	{::hx::fsBool,(int)offsetof(View3D_obj,_forceSoftware),HX_("_forceSoftware",73,fd,18,f9)},
	{::hx::fsObject /*  ::away3d::core::render::Filter3DRenderer */ ,(int)offsetof(View3D_obj,_filter3DRenderer),HX_("_filter3DRenderer",2b,2b,4d,04)},
	{::hx::fsBool,(int)offsetof(View3D_obj,_requireDepthRender),HX_("_requireDepthRender",73,c9,89,02)},
	{::hx::fsObject /*  ::openfl::display3D::textures::Texture */ ,(int)offsetof(View3D_obj,_depthRender),HX_("_depthRender",ba,a2,3c,ed)},
	{::hx::fsBool,(int)offsetof(View3D_obj,_depthTextureInvalid),HX_("_depthTextureInvalid",c0,16,f8,53)},
	{::hx::fsObject /*  ::openfl::display::Sprite */ ,(int)offsetof(View3D_obj,_hitField),HX_("_hitField",c6,e8,88,87)},
	{::hx::fsBool,(int)offsetof(View3D_obj,_parentIsStage),HX_("_parentIsStage",ab,7a,f7,68)},
	{::hx::fsObject /*  ::away3d::textures::Texture2DBase */ ,(int)offsetof(View3D_obj,_background),HX_("_background",0d,61,a7,f8)},
	{::hx::fsObject /*  ::away3d::core::managers::Stage3DProxy */ ,(int)offsetof(View3D_obj,_stage3DProxy),HX_("_stage3DProxy",de,ab,3d,f1)},
	{::hx::fsBool,(int)offsetof(View3D_obj,_backBufferInvalid),HX_("_backBufferInvalid",f1,73,22,22)},
	{::hx::fsInt,(int)offsetof(View3D_obj,_antiAlias),HX_("_antiAlias",4f,c2,b9,64)},
	{::hx::fsObject /*  ::away3d::core::managers::RTTBufferManager */ ,(int)offsetof(View3D_obj,_rttBufferManager),HX_("_rttBufferManager",da,55,ab,95)},
	{::hx::fsBool,(int)offsetof(View3D_obj,_rightClickMenuEnabled),HX_("_rightClickMenuEnabled",77,d2,df,4a)},
	{::hx::fsString,(int)offsetof(View3D_obj,_sourceURL),HX_("_sourceURL",15,4d,a1,c4)},
	{::hx::fsBool,(int)offsetof(View3D_obj,_shareContext),HX_("_shareContext",af,55,30,09)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(View3D_obj,_scissorRect),HX_("_scissorRect",61,8d,5d,c7)},
	{::hx::fsBool,(int)offsetof(View3D_obj,_scissorRectDirty),HX_("_scissorRectDirty",f1,12,ff,ee)},
	{::hx::fsBool,(int)offsetof(View3D_obj,_viewportDirty),HX_("_viewportDirty",0d,b2,5d,00)},
	{::hx::fsBool,(int)offsetof(View3D_obj,_depthPrepass),HX_("_depthPrepass",90,d2,9a,60)},
	{::hx::fsString,(int)offsetof(View3D_obj,_profile),HX_("_profile",aa,a2,01,2d)},
	{::hx::fsBool,(int)offsetof(View3D_obj,_layeredView),HX_("_layeredView",f6,b4,ec,98)},
	{::hx::fsInt,(int)offsetof(View3D_obj,_contextIndex),HX_("_contextIndex",82,25,e8,26)},
	{::hx::fsInt,(int)offsetof(View3D_obj,deltaTime),HX_("deltaTime",25,3c,5c,f5)},
	{::hx::fsInt,(int)offsetof(View3D_obj,renderedFacesCount),HX_("renderedFacesCount",4e,f9,1a,aa)},
	{::hx::fsObject /*  ::away3d::core::traverse::EntityCollector */ ,(int)offsetof(View3D_obj,entityCollector),HX_("entityCollector",aa,15,60,6d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *View3D_obj_sStaticStorageInfo = 0;
#endif

static ::String View3D_obj_sMemberFields[] = {
	HX_("_width",47,fd,49,c6),
	HX_("_height",86,19,c3,70),
	HX_("_localTLPos",d0,06,72,07),
	HX_("_localBRPos",78,dd,32,ae),
	HX_("_globalPos",b2,1f,52,b4),
	HX_("_globalWidth",a4,bb,aa,08),
	HX_("_globalHeight",89,ec,08,43),
	HX_("_globalPosDirty",00,7b,21,0b),
	HX_("_scene",8d,20,b9,74),
	HX_("_camera",44,58,03,26),
	HX_("_entityCollector",2b,58,3f,58),
	HX_("_aspectRatio",14,8e,cd,63),
	HX_("_time",ec,e7,0d,00),
	HX_("_deltaTime",e6,b7,fe,50),
	HX_("_backgroundColor",16,91,26,f8),
	HX_("_backgroundAlpha",11,c7,60,cf),
	HX_("_mouse3DManager",96,bb,fc,51),
	HX_("_touch3DManager",bc,b6,b2,d7),
	HX_("_renderer",a2,bc,71,fa),
	HX_("_depthRenderer",a7,9d,b6,2f),
	HX_("_addedToStage",42,b5,c3,ee),
	HX_("_forceSoftware",73,fd,18,f9),
	HX_("_filter3DRenderer",2b,2b,4d,04),
	HX_("_requireDepthRender",73,c9,89,02),
	HX_("_depthRender",ba,a2,3c,ed),
	HX_("_depthTextureInvalid",c0,16,f8,53),
	HX_("_hitField",c6,e8,88,87),
	HX_("_parentIsStage",ab,7a,f7,68),
	HX_("_background",0d,61,a7,f8),
	HX_("_stage3DProxy",de,ab,3d,f1),
	HX_("_backBufferInvalid",f1,73,22,22),
	HX_("_antiAlias",4f,c2,b9,64),
	HX_("_rttBufferManager",da,55,ab,95),
	HX_("_rightClickMenuEnabled",77,d2,df,4a),
	HX_("_sourceURL",15,4d,a1,c4),
	HX_("_shareContext",af,55,30,09),
	HX_("_scissorRect",61,8d,5d,c7),
	HX_("_scissorRectDirty",f1,12,ff,ee),
	HX_("_viewportDirty",0d,b2,5d,00),
	HX_("_depthPrepass",90,d2,9a,60),
	HX_("_profile",aa,a2,01,2d),
	HX_("_layeredView",f6,b4,ec,98),
	HX_("_contextIndex",82,25,e8,26),
	HX_("get_depthPrepass",3a,2c,cb,82),
	HX_("set_depthPrepass",ae,19,0d,d9),
	HX_("onScenePartitionChanged",f7,e5,8d,10),
	HX_("get_stage3DProxy",88,05,6e,13),
	HX_("set_stage3DProxy",fc,f2,af,69),
	HX_("onContext3DRecreated",14,af,ee,80),
	HX_("get_forceMouseMove",34,95,4b,fc),
	HX_("set_forceMouseMove",a8,c7,fa,d8),
	HX_("get_background",37,1c,13,9c),
	HX_("set_background",ab,04,33,bc),
	HX_("get_layeredView",8c,be,c4,f3),
	HX_("set_layeredView",98,3b,90,ef),
	HX_("initHitField",97,78,a9,e4),
	HX_("get_filters3d",23,c7,e2,a2),
	HX_("set_filters3d",2f,a9,e8,e7),
	HX_("get_renderer",4c,79,f5,67),
	HX_("set_renderer",c0,9c,ee,7c),
	HX_("get_backgroundColor",ac,1d,52,98),
	HX_("set_backgroundColor",b8,10,ef,d4),
	HX_("get_backgroundAlpha",a7,53,8c,6f),
	HX_("set_backgroundAlpha",b3,46,29,ac),
	HX_("get_camera",6e,b6,13,a8),
	HX_("set_camera",e2,54,91,ab),
	HX_("get_scene",a3,35,7b,bc),
	HX_("set_scene",af,21,cc,9f),
	HX_("deltaTime",25,3c,5c,f5),
	HX_("get_deltaTime",fc,0f,c0,b6),
	HX_("get_filters",d2,01,41,8f),
	HX_("set_filters",de,08,ae,99),
	HX_("get_width",5d,12,0c,0e),
	HX_("set_width",69,fe,5c,f1),
	HX_("get_height",b0,77,d3,f2),
	HX_("set_height",24,16,51,f6),
	HX_("set_x",5b,9b,2f,7a),
	HX_("set_y",5c,9b,2f,7a),
	HX_("set_visible",95,df,8b,33),
	HX_("get_antiAlias",65,1a,7b,ca),
	HX_("set_antiAlias",71,fc,80,0f),
	HX_("renderedFacesCount",4e,f9,1a,aa),
	HX_("get_renderedFacesCount",97,72,af,03),
	HX_("get_shareContext",59,af,60,2b),
	HX_("set_shareContext",cd,9c,a2,81),
	HX_("updateBackBuffer",f0,71,0a,59),
	HX_("render",56,6b,29,05),
	HX_("updateGlobalPos",a8,74,3a,a8),
	HX_("updateTime",b6,b6,b1,05),
	HX_("updateViewSizeData",b9,ae,04,43),
	HX_("renderDepthPrepass",27,a0,06,c8),
	HX_("renderSceneDepthToTexture",d3,0b,2e,a9),
	HX_("initDepthTexture",48,55,71,d8),
	HX_("dispose",9f,80,4c,bb),
	HX_("project",d9,12,eb,f5),
	HX_("unproject",a0,19,ed,f1),
	HX_("getRay",f4,0e,26,a3),
	HX_("get_mousePicker",2a,e7,36,35),
	HX_("set_mousePicker",36,64,02,31),
	HX_("get_touchPicker",44,18,e5,a4),
	HX_("set_touchPicker",50,95,b0,a0),
	HX_("entityCollector",aa,15,60,6d),
	HX_("get_entityCollector",c1,e4,6a,f8),
	HX_("onLensChanged",b7,e2,a2,8d),
	HX_("onAddedToStage",22,82,44,36),
	HX_("onAdded",21,73,81,b2),
	HX_("onViewportUpdated",16,58,0c,60),
	::String(null()) };

::hx::Class View3D_obj::__mClass;

void View3D_obj::__register()
{
	View3D_obj _hx_dummy;
	View3D_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.containers.View3D",e3,2e,99,f7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(View3D_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< View3D_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = View3D_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = View3D_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace containers
