#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_managers_Mouse3DManager
#include <away3d/core/managers/Mouse3DManager.h>
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
#ifndef INCLUDED_away3d_debug_Debug
#include <away3d/debug/Debug.h>
#endif
#ifndef INCLUDED_away3d_events_Stage3DEvent
#include <away3d/events/Stage3DEvent.h>
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
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shape
#include <openfl/display/Shape.h>
#endif
#ifndef INCLUDED_openfl_display_Stage3D
#include <openfl/display/Stage3D.h>
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
#ifndef INCLUDED_openfl_display3D__Context3DProfile_Context3DProfile_Impl_
#include <openfl/display3D/_Context3DProfile/Context3DProfile_Impl_.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d691d88198acc28e_31_new,"away3d.core.managers.Stage3DProxy","new",0xeb161d99,"away3d.core.managers.Stage3DProxy.new","away3d/core/managers/Stage3DProxy.hx",31,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_88_notifyViewportUpdated,"away3d.core.managers.Stage3DProxy","notifyViewportUpdated",0xb9025d25,"away3d.core.managers.Stage3DProxy.notifyViewportUpdated","away3d/core/managers/Stage3DProxy.hx",88,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_105_notifyEnterFrame,"away3d.core.managers.Stage3DProxy","notifyEnterFrame",0x9559bb45,"away3d.core.managers.Stage3DProxy.notifyEnterFrame","away3d/core/managers/Stage3DProxy.hx",105,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_116_notifyExitFrame,"away3d.core.managers.Stage3DProxy","notifyExitFrame",0x634d06df,"away3d.core.managers.Stage3DProxy.notifyExitFrame","away3d/core/managers/Stage3DProxy.hx",116,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_167_get_profile,"away3d.core.managers.Stage3DProxy","get_profile",0x8a5b5779,"away3d.core.managers.Stage3DProxy.get_profile","away3d/core/managers/Stage3DProxy.hx",167,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_174_dispose,"away3d.core.managers.Stage3DProxy","dispose",0xdb905e58,"away3d.core.managers.Stage3DProxy.dispose","away3d/core/managers/Stage3DProxy.hx",174,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_191_configureBackBuffer,"away3d.core.managers.Stage3DProxy","configureBackBuffer",0x91474b46,"away3d.core.managers.Stage3DProxy.configureBackBuffer","away3d/core/managers/Stage3DProxy.hx",191,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_217_get_enableDepthAndStencil,"away3d.core.managers.Stage3DProxy","get_enableDepthAndStencil",0xeb1719d5,"away3d.core.managers.Stage3DProxy.get_enableDepthAndStencil","away3d/core/managers/Stage3DProxy.hx",217,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_221_set_enableDepthAndStencil,"away3d.core.managers.Stage3DProxy","set_enableDepthAndStencil",0x576ddde1,"away3d.core.managers.Stage3DProxy.set_enableDepthAndStencil","away3d/core/managers/Stage3DProxy.hx",221,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_229_get_renderTarget,"away3d.core.managers.Stage3DProxy","get_renderTarget",0x798b06f7,"away3d.core.managers.Stage3DProxy.get_renderTarget","away3d/core/managers/Stage3DProxy.hx",229,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_234_get_renderSurfaceSelector,"away3d.core.managers.Stage3DProxy","get_renderSurfaceSelector",0x1e7f1206,"away3d.core.managers.Stage3DProxy.get_renderSurfaceSelector","away3d/core/managers/Stage3DProxy.hx",234,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_238_setRenderTarget,"away3d.core.managers.Stage3DProxy","setRenderTarget",0x885688c2,"away3d.core.managers.Stage3DProxy.setRenderTarget","away3d/core/managers/Stage3DProxy.hx",238,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_255_clear,"away3d.core.managers.Stage3DProxy","clear",0x22363f06,"away3d.core.managers.Stage3DProxy.clear","away3d/core/managers/Stage3DProxy.hx",255,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_277_present,"away3d.core.managers.Stage3DProxy","present",0x5a2018b4,"away3d.core.managers.Stage3DProxy.present","away3d/core/managers/Stage3DProxy.hx",277,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_300_addEventListener,"away3d.core.managers.Stage3DProxy","addEventListener",0x700d2ef4,"away3d.core.managers.Stage3DProxy.addEventListener","away3d/core/managers/Stage3DProxy.hx",300,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_316_removeEventListener,"away3d.core.managers.Stage3DProxy","removeEventListener",0xe2ab9703,"away3d.core.managers.Stage3DProxy.removeEventListener","away3d/core/managers/Stage3DProxy.hx",316,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_326_get_scissorRect,"away3d.core.managers.Stage3DProxy","get_scissorRect",0x959355b0,"away3d.core.managers.Stage3DProxy.get_scissorRect","away3d/core/managers/Stage3DProxy.hx",326,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_330_set_scissorRect,"away3d.core.managers.Stage3DProxy","set_scissorRect",0x915ed2bc,"away3d.core.managers.Stage3DProxy.set_scissorRect","away3d/core/managers/Stage3DProxy.hx",330,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_341_get_stage3DIndex,"away3d.core.managers.Stage3DProxy","get_stage3DIndex",0x879bd553,"away3d.core.managers.Stage3DProxy.get_stage3DIndex","away3d/core/managers/Stage3DProxy.hx",341,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_349_get_stage3D,"away3d.core.managers.Stage3DProxy","get_stage3D",0xc4dc513f,"away3d.core.managers.Stage3DProxy.get_stage3D","away3d/core/managers/Stage3DProxy.hx",349,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_357_get_context3D,"away3d.core.managers.Stage3DProxy","get_context3D",0x216a9eb0,"away3d.core.managers.Stage3DProxy.get_context3D","away3d/core/managers/Stage3DProxy.hx",357,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_365_get_driverInfo,"away3d.core.managers.Stage3DProxy","get_driverInfo",0xf986dc66,"away3d.core.managers.Stage3DProxy.get_driverInfo","away3d/core/managers/Stage3DProxy.hx",365,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_375_get_usesSoftwareRendering,"away3d.core.managers.Stage3DProxy","get_usesSoftwareRendering",0xc2fa9489,"away3d.core.managers.Stage3DProxy.get_usesSoftwareRendering","away3d/core/managers/Stage3DProxy.hx",375,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_383_get_x,"away3d.core.managers.Stage3DProxy","get_x",0x6b3b72c8,"away3d.core.managers.Stage3DProxy.get_x","away3d/core/managers/Stage3DProxy.hx",383,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_387_set_x,"away3d.core.managers.Stage3DProxy","set_x",0x540a68d4,"away3d.core.managers.Stage3DProxy.set_x","away3d/core/managers/Stage3DProxy.hx",387,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_402_get_y,"away3d.core.managers.Stage3DProxy","get_y",0x6b3b72c9,"away3d.core.managers.Stage3DProxy.get_y","away3d/core/managers/Stage3DProxy.hx",402,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_406_set_y,"away3d.core.managers.Stage3DProxy","set_y",0x540a68d5,"away3d.core.managers.Stage3DProxy.set_y","away3d/core/managers/Stage3DProxy.hx",406,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_421_get_width,"away3d.core.managers.Stage3DProxy","get_width",0xad4d9056,"away3d.core.managers.Stage3DProxy.get_width","away3d/core/managers/Stage3DProxy.hx",421,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_425_set_width,"away3d.core.managers.Stage3DProxy","set_width",0x909e7c62,"away3d.core.managers.Stage3DProxy.set_width","away3d/core/managers/Stage3DProxy.hx",425,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_442_get_height,"away3d.core.managers.Stage3DProxy","get_height",0xace03397,"away3d.core.managers.Stage3DProxy.get_height","away3d/core/managers/Stage3DProxy.hx",442,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_446_set_height,"away3d.core.managers.Stage3DProxy","set_height",0xb05dd20b,"away3d.core.managers.Stage3DProxy.set_height","away3d/core/managers/Stage3DProxy.hx",446,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_463_get_antiAlias,"away3d.core.managers.Stage3DProxy","get_antiAlias",0x138588de,"away3d.core.managers.Stage3DProxy.get_antiAlias","away3d/core/managers/Stage3DProxy.hx",463,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_467_set_antiAlias,"away3d.core.managers.Stage3DProxy","set_antiAlias",0x588b6aea,"away3d.core.managers.Stage3DProxy.set_antiAlias","away3d/core/managers/Stage3DProxy.hx",467,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_477_get_viewPort,"away3d.core.managers.Stage3DProxy","get_viewPort",0x2038f036,"away3d.core.managers.Stage3DProxy.get_viewPort","away3d/core/managers/Stage3DProxy.hx",477,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_488_get_color,"away3d.core.managers.Stage3DProxy","get_color",0x2d474bb3,"away3d.core.managers.Stage3DProxy.get_color","away3d/core/managers/Stage3DProxy.hx",488,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_492_set_color,"away3d.core.managers.Stage3DProxy","set_color",0x109837bf,"away3d.core.managers.Stage3DProxy.set_color","away3d/core/managers/Stage3DProxy.hx",492,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_502_get_visible,"away3d.core.managers.Stage3DProxy","get_visible",0x3a3686c2,"away3d.core.managers.Stage3DProxy.get_visible","away3d/core/managers/Stage3DProxy.hx",502,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_506_set_visible,"away3d.core.managers.Stage3DProxy","set_visible",0x44a38dce,"away3d.core.managers.Stage3DProxy.set_visible","away3d/core/managers/Stage3DProxy.hx",506,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_516_get_bufferClear,"away3d.core.managers.Stage3DProxy","get_bufferClear",0x19e67abd,"away3d.core.managers.Stage3DProxy.get_bufferClear","away3d/core/managers/Stage3DProxy.hx",516,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_520_set_bufferClear,"away3d.core.managers.Stage3DProxy","set_bufferClear",0x15b1f7c9,"away3d.core.managers.Stage3DProxy.set_bufferClear","away3d/core/managers/Stage3DProxy.hx",520,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_530_get_mouse3DManager,"away3d.core.managers.Stage3DProxy","get_mouse3DManager",0xf9cbcea7,"away3d.core.managers.Stage3DProxy.get_mouse3DManager","away3d/core/managers/Stage3DProxy.hx",530,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_534_set_mouse3DManager,"away3d.core.managers.Stage3DProxy","set_mouse3DManager",0xd67b011b,"away3d.core.managers.Stage3DProxy.set_mouse3DManager","away3d/core/managers/Stage3DProxy.hx",534,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_541_get_touch3DManager,"away3d.core.managers.Stage3DProxy","get_touch3DManager",0x7f81c9cd,"away3d.core.managers.Stage3DProxy.get_touch3DManager","away3d/core/managers/Stage3DProxy.hx",541,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_545_set_touch3DManager,"away3d.core.managers.Stage3DProxy","set_touch3DManager",0x5c30fc41,"away3d.core.managers.Stage3DProxy.set_touch3DManager","away3d/core/managers/Stage3DProxy.hx",545,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_554_freeContext3D,"away3d.core.managers.Stage3DProxy","freeContext3D",0xc8ec188d,"away3d.core.managers.Stage3DProxy.freeContext3D","away3d/core/managers/Stage3DProxy.hx",554,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_568_onContext3DUpdate,"away3d.core.managers.Stage3DProxy","onContext3DUpdate",0x9a9b3f23,"away3d.core.managers.Stage3DProxy.onContext3DUpdate","away3d/core/managers/Stage3DProxy.hx",568,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_593_requestContext,"away3d.core.managers.Stage3DProxy","requestContext",0x32d531c7,"away3d.core.managers.Stage3DProxy.requestContext","away3d/core/managers/Stage3DProxy.hx",593,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_622_onEnterFrame,"away3d.core.managers.Stage3DProxy","onEnterFrame",0xbe34699b,"away3d.core.managers.Stage3DProxy.onEnterFrame","away3d/core/managers/Stage3DProxy.hx",622,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_640_recoverFromDisposal,"away3d.core.managers.Stage3DProxy","recoverFromDisposal",0x2a84f6f8,"away3d.core.managers.Stage3DProxy.recoverFromDisposal","away3d/core/managers/Stage3DProxy.hx",640,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_652_clearDepthBuffer,"away3d.core.managers.Stage3DProxy","clearDepthBuffer",0x1ad190fd,"away3d.core.managers.Stage3DProxy.clearDepthBuffer","away3d/core/managers/Stage3DProxy.hx",652,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_674_createVertexBuffer,"away3d.core.managers.Stage3DProxy","createVertexBuffer",0xc05d6787,"away3d.core.managers.Stage3DProxy.createVertexBuffer","away3d/core/managers/Stage3DProxy.hx",674,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_686_createIndexBuffer,"away3d.core.managers.Stage3DProxy","createIndexBuffer",0x9d9cdf0f,"away3d.core.managers.Stage3DProxy.createIndexBuffer","away3d/core/managers/Stage3DProxy.hx",686,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_698_drawTriangles,"away3d.core.managers.Stage3DProxy","drawTriangles",0x2772b280,"away3d.core.managers.Stage3DProxy.drawTriangles","away3d/core/managers/Stage3DProxy.hx",698,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_680_disposeVertexBuffer,"away3d.core.managers.Stage3DProxy","disposeVertexBuffer",0xd48c7dfc,"away3d.core.managers.Stage3DProxy.disposeVertexBuffer","away3d/core/managers/Stage3DProxy.hx",680,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_692_disposeIndexBuffer,"away3d.core.managers.Stage3DProxy","disposeIndexBuffer",0x6c570e3a,"away3d.core.managers.Stage3DProxy.disposeIndexBuffer","away3d/core/managers/Stage3DProxy.hx",692,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_704_uploadVertexBufferFromVector,"away3d.core.managers.Stage3DProxy","uploadVertexBufferFromVector",0x36cbfef9,"away3d.core.managers.Stage3DProxy.uploadVertexBufferFromVector","away3d/core/managers/Stage3DProxy.hx",704,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_710_uploadIndexBufferFromVector,"away3d.core.managers.Stage3DProxy","uploadIndexBufferFromVector",0x6224d297,"away3d.core.managers.Stage3DProxy.uploadIndexBufferFromVector","away3d/core/managers/Stage3DProxy.hx",710,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_55_boot,"away3d.core.managers.Stage3DProxy","boot",0xc05cc8d9,"away3d.core.managers.Stage3DProxy.boot","away3d/core/managers/Stage3DProxy.hx",55,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_667_boot,"away3d.core.managers.Stage3DProxy","boot",0xc05cc8d9,"away3d.core.managers.Stage3DProxy.boot","away3d/core/managers/Stage3DProxy.hx",667,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_668_boot,"away3d.core.managers.Stage3DProxy","boot",0xc05cc8d9,"away3d.core.managers.Stage3DProxy.boot","away3d/core/managers/Stage3DProxy.hx",668,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_670_boot,"away3d.core.managers.Stage3DProxy","boot",0xc05cc8d9,"away3d.core.managers.Stage3DProxy.boot","away3d/core/managers/Stage3DProxy.hx",670,0x7750fd76)
HX_LOCAL_STACK_FRAME(_hx_pos_d691d88198acc28e_671_boot,"away3d.core.managers.Stage3DProxy","boot",0xc05cc8d9,"away3d.core.managers.Stage3DProxy.boot","away3d/core/managers/Stage3DProxy.hx",671,0x7750fd76)
namespace away3d{
namespace core{
namespace managers{

void Stage3DProxy_obj::__construct(int stage3DIndex, ::openfl::display::Stage3D stage3D, ::away3d::core::managers::Stage3DManager stage3DManager,::hx::Null< bool >  __o_forceSoftware,::String __o_profile){
            		bool forceSoftware = __o_forceSoftware.Default(false);
            		::String profile = __o_profile;
            		if (::hx::IsNull(__o_profile)) profile = HX_("baseline",85,dc,27,11);
            	HX_GC_STACKFRAME(&_hx_pos_d691d88198acc28e_31_new)
HXLINE(  69)		this->_backBufferEnableDepthAndStencil = true;
HXLINE(  58)		this->_stage3DIndex = -1;
HXLINE( 136)		::away3d::core::managers::Stage3DProxy_obj::vertexBufferCount = (::away3d::core::managers::Stage3DProxy_obj::indexBufferCount = (::away3d::core::managers::Stage3DProxy_obj::drawTriangleCount = 0));
HXLINE( 138)		this->_stage3DIndex = stage3DIndex;
HXLINE( 139)		this->_stage3D = stage3D;
HXLINE( 140)		this->_stage3D->set_x(( (Float)(0) ));
HXLINE( 141)		this->_stage3D->set_y(( (Float)(0) ));
HXLINE( 142)		this->_stage3D->visible = true;
HXLINE( 143)		this->_stage3DManager = stage3DManager;
HXLINE( 144)		this->_viewPort =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 145)		this->_enableDepthAndStencil = true;
HXLINE( 147)		super::__construct(null());
HXLINE( 150)		this->_stage3D->addEventListener(HX_("context3DCreate",7c,bf,59,7b),this->onContext3DUpdate_dyn(),false,1000,false);
HXLINE( 152)		this->forceSoftware = forceSoftware;
HXLINE( 153)		this->_profile = profile;
HXLINE( 155)		if (::hx::IsNotNull( this->_stage3D->context3D )) {
HXLINE( 156)			this->onContext3DUpdate(null());
            		}
            		else {
HXLINE( 159)			this->requestContext(forceSoftware,this->_profile);
            		}
            	}

Dynamic Stage3DProxy_obj::__CreateEmpty() { return new Stage3DProxy_obj; }

void *Stage3DProxy_obj::_hx_vtable = 0;

Dynamic Stage3DProxy_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Stage3DProxy_obj > _hx_result = new Stage3DProxy_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool Stage3DProxy_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08b64c63) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08b64c63;
	} else {
		return inClassId==(int)0x0c89e854;
	}
}

void Stage3DProxy_obj::notifyViewportUpdated(){
            	HX_GC_STACKFRAME(&_hx_pos_d691d88198acc28e_88_notifyViewportUpdated)
HXLINE(  89)		if (this->_viewportDirty) {
HXLINE(  90)			return;
            		}
HXLINE(  92)		this->_viewportDirty = true;
HXLINE(  94)		if (!(this->hasEventListener(HX_("ViewportUpdated",55,9e,a2,01)))) {
HXLINE(  95)			return;
            		}
HXLINE(  99)		this->_viewportUpdated =  ::away3d::events::Stage3DEvent_obj::__alloc( HX_CTX ,HX_("ViewportUpdated",55,9e,a2,01),null(),null());
HXLINE( 101)		this->dispatchEvent(this->_viewportUpdated);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,notifyViewportUpdated,(void))

void Stage3DProxy_obj::notifyEnterFrame(){
            	HX_GC_STACKFRAME(&_hx_pos_d691d88198acc28e_105_notifyEnterFrame)
HXLINE( 106)		if (!(this->hasEventListener(HX_("enterFrame",f5,03,50,02)))) {
HXLINE( 107)			return;
            		}
HXLINE( 109)		if (::hx::IsNull( this->_enterFrame )) {
HXLINE( 110)			this->_enterFrame =  ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("enterFrame",f5,03,50,02),null(),null());
            		}
HXLINE( 112)		this->dispatchEvent(this->_enterFrame);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,notifyEnterFrame,(void))

void Stage3DProxy_obj::notifyExitFrame(){
            	HX_GC_STACKFRAME(&_hx_pos_d691d88198acc28e_116_notifyExitFrame)
HXLINE( 117)		if (!(this->hasEventListener(HX_("exitFrame",2f,64,48,12)))) {
HXLINE( 118)			return;
            		}
HXLINE( 120)		if (::hx::IsNull( this->_exitFrame )) {
HXLINE( 121)			this->_exitFrame =  ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("exitFrame",2f,64,48,12),null(),null());
            		}
HXLINE( 123)		this->dispatchEvent(this->_exitFrame);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,notifyExitFrame,(void))

::String Stage3DProxy_obj::get_profile(){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_167_get_profile)
HXDLIN( 167)		return this->_profile;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,get_profile,return )

void Stage3DProxy_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_174_dispose)
HXLINE( 175)		this->_stage3DManager->removeStage3DProxy(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 176)		this->_stage3D->removeEventListener(HX_("context3DCreate",7c,bf,59,7b),this->onContext3DUpdate_dyn(),null());
HXLINE( 177)		this->freeContext3D();
HXLINE( 178)		this->_stage3D = null();
HXLINE( 179)		this->_stage3DManager = null();
HXLINE( 180)		this->_stage3DIndex = -1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,dispose,(void))

void Stage3DProxy_obj::configureBackBuffer(int backBufferWidth,int backBufferHeight,int antiAlias,bool enableDepthAndStencil){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_191_configureBackBuffer)
HXLINE( 192)		if ((backBufferWidth < 50)) {
HXLINE( 192)			backBufferWidth = 50;
            		}
HXLINE( 193)		if ((backBufferHeight < 50)) {
HXLINE( 193)			backBufferHeight = 50;
            		}
HXLINE( 194)		int oldWidth = this->_backBufferWidth;
HXLINE( 195)		int oldHeight = this->_backBufferHeight;
HXLINE( 197)		this->_backBufferWidth = backBufferWidth;
HXLINE( 198)		this->_backBufferHeight = backBufferHeight;
HXLINE( 199)		this->_viewPort->width = ( (Float)(backBufferWidth) );
HXLINE( 200)		this->_viewPort->height = ( (Float)(backBufferHeight) );
HXLINE( 202)		bool _hx_tmp;
HXDLIN( 202)		if ((oldWidth == this->_backBufferWidth)) {
HXLINE( 202)			_hx_tmp = (oldHeight != this->_backBufferHeight);
            		}
            		else {
HXLINE( 202)			_hx_tmp = true;
            		}
HXDLIN( 202)		if (_hx_tmp) {
HXLINE( 203)			this->notifyViewportUpdated();
            		}
HXLINE( 205)		this->_antiAlias = antiAlias;
HXLINE( 206)		this->_enableDepthAndStencil = enableDepthAndStencil;
HXLINE( 208)		if (::hx::IsNotNull( this->_context3D )) {
HXLINE( 209)			this->_context3D->configureBackBuffer(backBufferWidth,backBufferHeight,antiAlias,enableDepthAndStencil,null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Stage3DProxy_obj,configureBackBuffer,(void))

bool Stage3DProxy_obj::get_enableDepthAndStencil(){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_217_get_enableDepthAndStencil)
HXDLIN( 217)		return this->_enableDepthAndStencil;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,get_enableDepthAndStencil,return )

bool Stage3DProxy_obj::set_enableDepthAndStencil(bool enableDepthAndStencil){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_221_set_enableDepthAndStencil)
HXLINE( 222)		this->_enableDepthAndStencil = enableDepthAndStencil;
HXLINE( 223)		this->_backBufferDirty = true;
HXLINE( 224)		return enableDepthAndStencil;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stage3DProxy_obj,set_enableDepthAndStencil,return )

 ::openfl::display3D::textures::TextureBase Stage3DProxy_obj::get_renderTarget(){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_229_get_renderTarget)
HXDLIN( 229)		return this->_renderTarget;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,get_renderTarget,return )

int Stage3DProxy_obj::get_renderSurfaceSelector(){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_234_get_renderSurfaceSelector)
HXDLIN( 234)		return this->_renderSurfaceSelector;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,get_renderSurfaceSelector,return )

void Stage3DProxy_obj::setRenderTarget( ::openfl::display3D::textures::TextureBase target,::hx::Null< bool >  __o_enableDepthAndStencil,::hx::Null< int >  __o_surfaceSelector){
            		bool enableDepthAndStencil = __o_enableDepthAndStencil.Default(false);
            		int surfaceSelector = __o_surfaceSelector.Default(0);
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_238_setRenderTarget)
HXLINE( 239)		bool _hx_tmp;
HXDLIN( 239)		bool _hx_tmp1;
HXDLIN( 239)		if (::hx::IsInstanceEq( this->_renderTarget,target )) {
HXLINE( 239)			_hx_tmp1 = (surfaceSelector == this->_renderSurfaceSelector);
            		}
            		else {
HXLINE( 239)			_hx_tmp1 = false;
            		}
HXDLIN( 239)		if (_hx_tmp1) {
HXLINE( 239)			_hx_tmp = (this->_enableDepthAndStencil == enableDepthAndStencil);
            		}
            		else {
HXLINE( 239)			_hx_tmp = false;
            		}
HXDLIN( 239)		if (_hx_tmp) {
HXLINE( 240)			return;
            		}
HXLINE( 241)		this->_renderTarget = target;
HXLINE( 242)		this->_renderSurfaceSelector = surfaceSelector;
HXLINE( 243)		this->_enableDepthAndStencil = enableDepthAndStencil;
HXLINE( 245)		if (::hx::IsNotNull( target )) {
HXLINE( 246)			this->_context3D->setRenderToTexture(target,enableDepthAndStencil,this->_antiAlias,surfaceSelector);
            		}
            		else {
HXLINE( 248)			this->_context3D->setRenderToBackBuffer();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Stage3DProxy_obj,setRenderTarget,(void))

void Stage3DProxy_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_255_clear)
HXLINE( 256)		if (::hx::IsNull( this->_context3D )) {
HXLINE( 257)			return;
            		}
HXLINE( 259)		if (this->_backBufferDirty) {
HXLINE( 260)			this->configureBackBuffer(this->_backBufferWidth,this->_backBufferHeight,this->_antiAlias,this->_enableDepthAndStencil);
HXLINE( 261)			this->_backBufferDirty = false;
            		}
HXLINE( 264)		this->_context3D->clear((( (Float)(((this->_color >> 16) & 255)) ) / ((Float)255.0)),(( (Float)(((this->_color >> 8) & 255)) ) / ((Float)255.0)),(( (Float)((this->_color & 255)) ) / ((Float)255.0)),(( (Float)(((this->_color >> 24) & 255)) ) / ((Float)255.0)),null(),null(),null());
HXLINE( 270)		this->_bufferClear = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,clear,(void))

void Stage3DProxy_obj::present(){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_277_present)
HXLINE( 278)		if (::hx::IsNull( this->_context3D )) {
HXLINE( 279)			return;
            		}
HXLINE( 281)		this->_context3D->present();
HXLINE( 283)		this->_activeProgram3D = null();
HXLINE( 285)		if (::hx::IsNotNull( this->_mouse3DManager )) {
HXLINE( 286)			this->_mouse3DManager->fireMouseEvents();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,present,(void))

void Stage3DProxy_obj::addEventListener(::String _tmp_type, ::Dynamic _tmp_listener,::hx::Null< bool >  __o_useCapture,::hx::Null< int >  __o_priority,::hx::Null< bool >  __o_useWeakReference){
            		bool useCapture = __o_useCapture.Default(false);
            		int priority = __o_priority.Default(0);
            		bool useWeakReference = __o_useWeakReference.Default(false);
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_300_addEventListener)
HXLINE( 301)		::String type = _tmp_type;
HXDLIN( 301)		 ::Dynamic listener = _tmp_listener;
HXDLIN( 301)		this->super::addEventListener(type,listener,useCapture,priority,useWeakReference);
HXLINE( 303)		bool _hx_tmp;
HXDLIN( 303)		bool _hx_tmp1;
HXDLIN( 303)		if ((type != HX_("enterFrame",f5,03,50,02))) {
HXLINE( 303)			_hx_tmp1 = (type == HX_("exitFrame",2f,64,48,12));
            		}
            		else {
HXLINE( 303)			_hx_tmp1 = true;
            		}
HXDLIN( 303)		if (_hx_tmp1) {
HXLINE( 303)			_hx_tmp = !(::away3d::core::managers::Stage3DProxy_obj::_frameEventDriver->hasEventListener(HX_("enterFrame",f5,03,50,02)));
            		}
            		else {
HXLINE( 303)			_hx_tmp = false;
            		}
HXDLIN( 303)		if (_hx_tmp) {
HXLINE( 304)			::away3d::core::managers::Stage3DProxy_obj::_frameEventDriver->addEventListener(HX_("enterFrame",f5,03,50,02),this->onEnterFrame_dyn(),useCapture,priority,useWeakReference);
            		}
            	}


void Stage3DProxy_obj::removeEventListener(::String _tmp_type, ::Dynamic _tmp_listener,::hx::Null< bool >  __o_useCapture){
            		bool useCapture = __o_useCapture.Default(false);
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_316_removeEventListener)
HXLINE( 317)		::String type = _tmp_type;
HXDLIN( 317)		 ::Dynamic listener = _tmp_listener;
HXDLIN( 317)		this->super::removeEventListener(type,listener,useCapture);
HXLINE( 320)		bool _hx_tmp;
HXDLIN( 320)		bool _hx_tmp1;
HXDLIN( 320)		if (!(this->hasEventListener(HX_("enterFrame",f5,03,50,02)))) {
HXLINE( 320)			_hx_tmp1 = !(this->hasEventListener(HX_("exitFrame",2f,64,48,12)));
            		}
            		else {
HXLINE( 320)			_hx_tmp1 = false;
            		}
HXDLIN( 320)		if (_hx_tmp1) {
HXLINE( 320)			_hx_tmp = ::away3d::core::managers::Stage3DProxy_obj::_frameEventDriver->hasEventListener(HX_("enterFrame",f5,03,50,02));
            		}
            		else {
HXLINE( 320)			_hx_tmp = false;
            		}
HXDLIN( 320)		if (_hx_tmp) {
HXLINE( 321)			::away3d::core::managers::Stage3DProxy_obj::_frameEventDriver->removeEventListener(HX_("enterFrame",f5,03,50,02),this->onEnterFrame_dyn(),useCapture);
            		}
            	}


 ::openfl::geom::Rectangle Stage3DProxy_obj::get_scissorRect(){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_326_get_scissorRect)
HXDLIN( 326)		return this->_scissorRect;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,get_scissorRect,return )

 ::openfl::geom::Rectangle Stage3DProxy_obj::set_scissorRect( ::openfl::geom::Rectangle value){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_330_set_scissorRect)
HXLINE( 331)		this->_scissorRect = value;
HXLINE( 332)		this->_context3D->setScissorRectangle(this->_scissorRect);
HXLINE( 333)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stage3DProxy_obj,set_scissorRect,return )

int Stage3DProxy_obj::get_stage3DIndex(){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_341_get_stage3DIndex)
HXDLIN( 341)		return this->_stage3DIndex;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,get_stage3DIndex,return )

 ::openfl::display::Stage3D Stage3DProxy_obj::get_stage3D(){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_349_get_stage3D)
HXDLIN( 349)		return this->_stage3D;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,get_stage3D,return )

 ::openfl::display3D::Context3D Stage3DProxy_obj::get_context3D(){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_357_get_context3D)
HXDLIN( 357)		return this->_context3D;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,get_context3D,return )

::String Stage3DProxy_obj::get_driverInfo(){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_365_get_driverInfo)
HXDLIN( 365)		if (::hx::IsNotNull( this->_context3D )) {
HXDLIN( 365)			return this->_context3D->driverInfo;
            		}
            		else {
HXDLIN( 365)			return null();
            		}
HXDLIN( 365)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,get_driverInfo,return )

bool Stage3DProxy_obj::get_usesSoftwareRendering(){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_375_get_usesSoftwareRendering)
HXDLIN( 375)		return this->_usesSoftwareRendering;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,get_usesSoftwareRendering,return )

Float Stage3DProxy_obj::get_x(){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_383_get_x)
HXDLIN( 383)		return this->_stage3D->get_x();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,get_x,return )

Float Stage3DProxy_obj::set_x(Float value){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_387_set_x)
HXLINE( 388)		if ((this->_viewPort->x == value)) {
HXLINE( 389)			return value;
            		}
HXLINE( 391)		this->_stage3D->set_x((this->_viewPort->x = value));
HXLINE( 393)		this->notifyViewportUpdated();
HXLINE( 394)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stage3DProxy_obj,set_x,return )

Float Stage3DProxy_obj::get_y(){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_402_get_y)
HXDLIN( 402)		return this->_stage3D->get_y();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,get_y,return )

Float Stage3DProxy_obj::set_y(Float value){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_406_set_y)
HXLINE( 407)		if ((this->_viewPort->y == value)) {
HXLINE( 408)			return value;
            		}
HXLINE( 410)		this->_stage3D->set_y((this->_viewPort->y = value));
HXLINE( 412)		this->notifyViewportUpdated();
HXLINE( 413)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stage3DProxy_obj,set_y,return )

int Stage3DProxy_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_421_get_width)
HXDLIN( 421)		return this->_backBufferWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,get_width,return )

int Stage3DProxy_obj::set_width(int width){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_425_set_width)
HXLINE( 426)		if ((this->_viewPort->width == width)) {
HXLINE( 427)			return width;
            		}
HXLINE( 429)		if ((width < 50)) {
HXLINE( 429)			width = 50;
            		}
HXLINE( 430)		this->_viewPort->width = ( (Float)((this->_backBufferWidth = width)) );
HXLINE( 431)		this->_backBufferDirty = true;
HXLINE( 433)		this->notifyViewportUpdated();
HXLINE( 434)		return width;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stage3DProxy_obj,set_width,return )

int Stage3DProxy_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_442_get_height)
HXDLIN( 442)		return this->_backBufferHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,get_height,return )

int Stage3DProxy_obj::set_height(int height){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_446_set_height)
HXLINE( 447)		if ((this->_viewPort->height == height)) {
HXLINE( 448)			return height;
            		}
HXLINE( 450)		if ((height < 50)) {
HXLINE( 450)			height = 50;
            		}
HXLINE( 451)		this->_viewPort->height = ( (Float)((this->_backBufferHeight = height)) );
HXLINE( 452)		this->_backBufferDirty = true;
HXLINE( 454)		this->notifyViewportUpdated();
HXLINE( 455)		return height;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stage3DProxy_obj,set_height,return )

int Stage3DProxy_obj::get_antiAlias(){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_463_get_antiAlias)
HXDLIN( 463)		return this->_antiAlias;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,get_antiAlias,return )

int Stage3DProxy_obj::set_antiAlias(int antiAlias){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_467_set_antiAlias)
HXLINE( 468)		this->_antiAlias = antiAlias;
HXLINE( 469)		this->_backBufferDirty = true;
HXLINE( 470)		return antiAlias;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stage3DProxy_obj,set_antiAlias,return )

 ::openfl::geom::Rectangle Stage3DProxy_obj::get_viewPort(){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_477_get_viewPort)
HXLINE( 478)		this->_viewportDirty = false;
HXLINE( 480)		return this->_viewPort;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,get_viewPort,return )

int Stage3DProxy_obj::get_color(){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_488_get_color)
HXDLIN( 488)		return this->_color;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,get_color,return )

int Stage3DProxy_obj::set_color(int color){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_492_set_color)
HXLINE( 493)		this->_color = color;
HXLINE( 494)		return color;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stage3DProxy_obj,set_color,return )

bool Stage3DProxy_obj::get_visible(){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_502_get_visible)
HXDLIN( 502)		return this->_stage3D->visible;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,get_visible,return )

bool Stage3DProxy_obj::set_visible(bool value){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_506_set_visible)
HXLINE( 507)		this->_stage3D->visible = value;
HXLINE( 508)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stage3DProxy_obj,set_visible,return )

bool Stage3DProxy_obj::get_bufferClear(){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_516_get_bufferClear)
HXDLIN( 516)		return this->_bufferClear;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,get_bufferClear,return )

bool Stage3DProxy_obj::set_bufferClear(bool newBufferClear){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_520_set_bufferClear)
HXLINE( 521)		this->_bufferClear = newBufferClear;
HXLINE( 522)		return newBufferClear;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stage3DProxy_obj,set_bufferClear,return )

 ::away3d::core::managers::Mouse3DManager Stage3DProxy_obj::get_mouse3DManager(){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_530_get_mouse3DManager)
HXDLIN( 530)		return this->_mouse3DManager;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,get_mouse3DManager,return )

 ::away3d::core::managers::Mouse3DManager Stage3DProxy_obj::set_mouse3DManager( ::away3d::core::managers::Mouse3DManager value){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_534_set_mouse3DManager)
HXLINE( 535)		this->_mouse3DManager = value;
HXLINE( 536)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stage3DProxy_obj,set_mouse3DManager,return )

 ::away3d::core::managers::Touch3DManager Stage3DProxy_obj::get_touch3DManager(){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_541_get_touch3DManager)
HXDLIN( 541)		return this->_touch3DManager;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,get_touch3DManager,return )

 ::away3d::core::managers::Touch3DManager Stage3DProxy_obj::set_touch3DManager( ::away3d::core::managers::Touch3DManager value){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_545_set_touch3DManager)
HXLINE( 546)		this->_touch3DManager = value;
HXLINE( 547)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stage3DProxy_obj,set_touch3DManager,return )

void Stage3DProxy_obj::freeContext3D(){
            	HX_GC_STACKFRAME(&_hx_pos_d691d88198acc28e_554_freeContext3D)
HXLINE( 555)		if (::hx::IsNotNull( this->_context3D )) {
HXLINE( 556)			this->_context3D->dispose(null());
HXLINE( 557)			this->dispatchEvent( ::away3d::events::Stage3DEvent_obj::__alloc( HX_CTX ,HX_("Context3DDisposed",45,43,1b,f2),null(),null()));
            		}
HXLINE( 559)		this->_context3D = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,freeContext3D,(void))

void Stage3DProxy_obj::onContext3DUpdate( ::openfl::events::Event event){
            	HX_GC_STACKFRAME(&_hx_pos_d691d88198acc28e_568_onContext3DUpdate)
HXDLIN( 568)		if (::hx::IsNotNull( this->_stage3D->context3D )) {
HXLINE( 569)			bool hadContext = ::hx::IsNotNull( this->_context3D );
HXLINE( 570)			this->_context3D = this->_stage3D->context3D;
HXLINE( 571)			this->_context3D->set_enableErrorChecking(::away3d::debug::Debug_obj::active);
HXLINE( 573)			this->_usesSoftwareRendering = (this->_context3D->driverInfo.indexOf(HX_("Software",47,f8,fd,74),null()) == 0);
HXLINE( 578)			bool _hx_tmp;
HXDLIN( 578)			if ((this->_backBufferWidth > 0)) {
HXLINE( 578)				_hx_tmp = (this->_backBufferHeight > 0);
            			}
            			else {
HXLINE( 578)				_hx_tmp = false;
            			}
HXDLIN( 578)			if (_hx_tmp) {
HXLINE( 579)				this->_context3D->configureBackBuffer(this->_backBufferWidth,this->_backBufferHeight,this->_antiAlias,this->_enableDepthAndStencil,null(),null());
            			}
HXLINE( 583)			::String _hx_tmp1;
HXDLIN( 583)			if (hadContext) {
HXLINE( 583)				_hx_tmp1 = HX_("Context3DRecreated",35,9a,ac,ef);
            			}
            			else {
HXLINE( 583)				_hx_tmp1 = HX_("Context3DCreated",88,a9,28,8d);
            			}
HXDLIN( 583)			this->dispatchEvent( ::away3d::events::Stage3DEvent_obj::__alloc( HX_CTX ,_hx_tmp1,null(),null()));
            		}
            		else {
HXLINE( 586)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("Rendering context lost!",d8,98,29,3e),null())));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stage3DProxy_obj,onContext3DUpdate,(void))

void Stage3DProxy_obj::requestContext(::hx::Null< bool >  __o_forceSoftware,::String __o_profile){
            		bool forceSoftware = __o_forceSoftware.Default(false);
            		::String profile = __o_profile;
            		if (::hx::IsNull(__o_profile)) profile = HX_("baseline",85,dc,27,11);
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_593_requestContext)
HXLINE( 598)		if (!(this->_usesSoftwareRendering)) {
HXLINE( 599)			this->_usesSoftwareRendering = forceSoftware;
            		}
HXLINE( 600)		this->_profile = profile;
HXLINE( 603)		 ::Dynamic renderMode;
HXDLIN( 603)		if (forceSoftware) {
HXLINE( 603)			renderMode = 1;
            		}
            		else {
HXLINE( 603)			renderMode = 0;
            		}
HXLINE( 604)		if ((profile == HX_("baseline",85,dc,27,11))) {
HXLINE( 605)			this->_stage3D->requestContext3D(renderMode,null());
            		}
            		else {
HXLINE( 607)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 608)				 ::openfl::display::Stage3D _hx_tmp = this->_stage3D;
HXDLIN( 608)				_hx_tmp->requestContext3D(renderMode,::openfl::display3D::_Context3DProfile::Context3DProfile_Impl__obj::fromString(profile));
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 609)					{
HXLINE( 609)						null();
            					}
HXLINE( 610)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("An error occurred creating a context using the given profile. Profiles are not supported for the SDK this was compiled with.",8b,96,2d,67)));
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
HXLINE( 614)		this->_contextRequested = true;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Stage3DProxy_obj,requestContext,(void))

void Stage3DProxy_obj::onEnterFrame( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_622_onEnterFrame)
HXLINE( 623)		if (::hx::IsNull( this->_context3D )) {
HXLINE( 624)			return;
            		}
HXLINE( 627)		this->clear();
HXLINE( 630)		this->notifyEnterFrame();
HXLINE( 633)		this->present();
HXLINE( 636)		this->notifyExitFrame();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stage3DProxy_obj,onEnterFrame,(void))

bool Stage3DProxy_obj::recoverFromDisposal(){
            	HX_GC_STACKFRAME(&_hx_pos_d691d88198acc28e_640_recoverFromDisposal)
HXLINE( 641)		if (::hx::IsNull( this->_context3D )) {
HXLINE( 642)			return false;
            		}
HXLINE( 643)		if ((this->_context3D->driverInfo == HX_("Disposed",05,c7,55,01))) {
HXLINE( 644)			this->_context3D = null();
HXLINE( 645)			this->dispatchEvent( ::away3d::events::Stage3DEvent_obj::__alloc( HX_CTX ,HX_("Context3DDisposed",45,43,1b,f2),null(),null()));
HXLINE( 646)			return false;
            		}
HXLINE( 648)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,recoverFromDisposal,return )

void Stage3DProxy_obj::clearDepthBuffer(){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_652_clearDepthBuffer)
HXLINE( 653)		if (::hx::IsNull( this->_context3D )) {
HXLINE( 654)			return;
            		}
HXLINE( 655)		this->_context3D->clear(0,0,0,1,1,0,2);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,clearDepthBuffer,(void))

 ::openfl::display3D::VertexBuffer3D Stage3DProxy_obj::createVertexBuffer(int numVertices,int data32PerVertex){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_674_createVertexBuffer)
HXLINE( 675)		::away3d::core::managers::Stage3DProxy_obj::vertexBufferCount++;
HXLINE( 676)		return this->_context3D->createVertexBuffer(numVertices,data32PerVertex,null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(Stage3DProxy_obj,createVertexBuffer,return )

 ::openfl::display3D::IndexBuffer3D Stage3DProxy_obj::createIndexBuffer(int numIndices){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_686_createIndexBuffer)
HXLINE( 687)		::away3d::core::managers::Stage3DProxy_obj::indexBufferCount++;
HXLINE( 688)		return this->_context3D->createIndexBuffer(numIndices,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stage3DProxy_obj,createIndexBuffer,return )

void Stage3DProxy_obj::drawTriangles( ::openfl::display3D::IndexBuffer3D indexBuffer,::hx::Null< int >  __o_firstIndex,::hx::Null< int >  __o_numTriangles){
            		int firstIndex = __o_firstIndex.Default(0);
            		int numTriangles = __o_numTriangles.Default(-1);
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_698_drawTriangles)
HXLINE( 699)		::away3d::core::managers::Stage3DProxy_obj::drawTriangleCount++;
HXLINE( 700)		this->_context3D->drawTriangles(indexBuffer,firstIndex,numTriangles);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Stage3DProxy_obj,drawTriangles,(void))

 ::openfl::display::Shape Stage3DProxy_obj::_frameEventDriver;

int Stage3DProxy_obj::vertexBufferCount;

int Stage3DProxy_obj::indexBufferCount;

int Stage3DProxy_obj::drawTriangleCount;

int Stage3DProxy_obj::_vbUploadCount;

int Stage3DProxy_obj::_ibUploadCount;

int Stage3DProxy_obj::_bmpUploadCount;

int Stage3DProxy_obj::_atfUploadCount;

void Stage3DProxy_obj::disposeVertexBuffer( ::openfl::display3D::VertexBuffer3D vb){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_680_disposeVertexBuffer)
HXLINE( 681)		vb->dispose();
HXLINE( 682)		::away3d::core::managers::Stage3DProxy_obj::vertexBufferCount--;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stage3DProxy_obj,disposeVertexBuffer,(void))

void Stage3DProxy_obj::disposeIndexBuffer( ::openfl::display3D::IndexBuffer3D ib){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_692_disposeIndexBuffer)
HXLINE( 693)		ib->dispose();
HXLINE( 694)		::away3d::core::managers::Stage3DProxy_obj::indexBufferCount--;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stage3DProxy_obj,disposeIndexBuffer,(void))

void Stage3DProxy_obj::uploadVertexBufferFromVector( ::openfl::display3D::VertexBuffer3D vb, ::openfl::_Vector::FloatVector data,int startVertex,int numVertices){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_704_uploadVertexBufferFromVector)
HXLINE( 705)		vb->uploadFromVector(data,startVertex,numVertices);
HXLINE( 706)		::away3d::core::managers::Stage3DProxy_obj::_vbUploadCount++;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Stage3DProxy_obj,uploadVertexBufferFromVector,(void))

void Stage3DProxy_obj::uploadIndexBufferFromVector( ::openfl::display3D::IndexBuffer3D ib, ::openfl::_Vector::IntVector data,int startOffset,int count){
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_710_uploadIndexBufferFromVector)
HXLINE( 711)		ib->uploadFromVector(data,startOffset,count);
HXLINE( 712)		::away3d::core::managers::Stage3DProxy_obj::_ibUploadCount++;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Stage3DProxy_obj,uploadIndexBufferFromVector,(void))


::hx::ObjectPtr< Stage3DProxy_obj > Stage3DProxy_obj::__new(int stage3DIndex, ::openfl::display::Stage3D stage3D, ::away3d::core::managers::Stage3DManager stage3DManager,::hx::Null< bool >  __o_forceSoftware,::String __o_profile) {
	::hx::ObjectPtr< Stage3DProxy_obj > __this = new Stage3DProxy_obj();
	__this->__construct(stage3DIndex,stage3D,stage3DManager,__o_forceSoftware,__o_profile);
	return __this;
}

::hx::ObjectPtr< Stage3DProxy_obj > Stage3DProxy_obj::__alloc(::hx::Ctx *_hx_ctx,int stage3DIndex, ::openfl::display::Stage3D stage3D, ::away3d::core::managers::Stage3DManager stage3DManager,::hx::Null< bool >  __o_forceSoftware,::String __o_profile) {
	Stage3DProxy_obj *__this = (Stage3DProxy_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Stage3DProxy_obj), true, "away3d.core.managers.Stage3DProxy"));
	*(void **)__this = Stage3DProxy_obj::_hx_vtable;
	__this->__construct(stage3DIndex,stage3D,stage3DManager,__o_forceSoftware,__o_profile);
	return __this;
}

Stage3DProxy_obj::Stage3DProxy_obj()
{
}

void Stage3DProxy_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stage3DProxy);
	HX_MARK_MEMBER_NAME(_context3D,"_context3D");
	HX_MARK_MEMBER_NAME(_stage3DIndex,"_stage3DIndex");
	HX_MARK_MEMBER_NAME(_usesSoftwareRendering,"_usesSoftwareRendering");
	HX_MARK_MEMBER_NAME(_profile,"_profile");
	HX_MARK_MEMBER_NAME(_stage3D,"_stage3D");
	HX_MARK_MEMBER_NAME(_activeProgram3D,"_activeProgram3D");
	HX_MARK_MEMBER_NAME(_stage3DManager,"_stage3DManager");
	HX_MARK_MEMBER_NAME(_backBufferWidth,"_backBufferWidth");
	HX_MARK_MEMBER_NAME(_backBufferHeight,"_backBufferHeight");
	HX_MARK_MEMBER_NAME(_antiAlias,"_antiAlias");
	HX_MARK_MEMBER_NAME(_enableDepthAndStencil,"_enableDepthAndStencil");
	HX_MARK_MEMBER_NAME(_backBufferEnableDepthAndStencil,"_backBufferEnableDepthAndStencil");
	HX_MARK_MEMBER_NAME(_contextRequested,"_contextRequested");
	HX_MARK_MEMBER_NAME(_renderTarget,"_renderTarget");
	HX_MARK_MEMBER_NAME(_renderSurfaceSelector,"_renderSurfaceSelector");
	HX_MARK_MEMBER_NAME(_scissorRect,"_scissorRect");
	HX_MARK_MEMBER_NAME(_color,"_color");
	HX_MARK_MEMBER_NAME(_backBufferDirty,"_backBufferDirty");
	HX_MARK_MEMBER_NAME(_viewPort,"_viewPort");
	HX_MARK_MEMBER_NAME(_enterFrame,"_enterFrame");
	HX_MARK_MEMBER_NAME(_exitFrame,"_exitFrame");
	HX_MARK_MEMBER_NAME(_viewportUpdated,"_viewportUpdated");
	HX_MARK_MEMBER_NAME(_viewportDirty,"_viewportDirty");
	HX_MARK_MEMBER_NAME(_bufferClear,"_bufferClear");
	HX_MARK_MEMBER_NAME(_mouse3DManager,"_mouse3DManager");
	HX_MARK_MEMBER_NAME(_touch3DManager,"_touch3DManager");
	HX_MARK_MEMBER_NAME(forceSoftware,"forceSoftware");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Stage3DProxy_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_context3D,"_context3D");
	HX_VISIT_MEMBER_NAME(_stage3DIndex,"_stage3DIndex");
	HX_VISIT_MEMBER_NAME(_usesSoftwareRendering,"_usesSoftwareRendering");
	HX_VISIT_MEMBER_NAME(_profile,"_profile");
	HX_VISIT_MEMBER_NAME(_stage3D,"_stage3D");
	HX_VISIT_MEMBER_NAME(_activeProgram3D,"_activeProgram3D");
	HX_VISIT_MEMBER_NAME(_stage3DManager,"_stage3DManager");
	HX_VISIT_MEMBER_NAME(_backBufferWidth,"_backBufferWidth");
	HX_VISIT_MEMBER_NAME(_backBufferHeight,"_backBufferHeight");
	HX_VISIT_MEMBER_NAME(_antiAlias,"_antiAlias");
	HX_VISIT_MEMBER_NAME(_enableDepthAndStencil,"_enableDepthAndStencil");
	HX_VISIT_MEMBER_NAME(_backBufferEnableDepthAndStencil,"_backBufferEnableDepthAndStencil");
	HX_VISIT_MEMBER_NAME(_contextRequested,"_contextRequested");
	HX_VISIT_MEMBER_NAME(_renderTarget,"_renderTarget");
	HX_VISIT_MEMBER_NAME(_renderSurfaceSelector,"_renderSurfaceSelector");
	HX_VISIT_MEMBER_NAME(_scissorRect,"_scissorRect");
	HX_VISIT_MEMBER_NAME(_color,"_color");
	HX_VISIT_MEMBER_NAME(_backBufferDirty,"_backBufferDirty");
	HX_VISIT_MEMBER_NAME(_viewPort,"_viewPort");
	HX_VISIT_MEMBER_NAME(_enterFrame,"_enterFrame");
	HX_VISIT_MEMBER_NAME(_exitFrame,"_exitFrame");
	HX_VISIT_MEMBER_NAME(_viewportUpdated,"_viewportUpdated");
	HX_VISIT_MEMBER_NAME(_viewportDirty,"_viewportDirty");
	HX_VISIT_MEMBER_NAME(_bufferClear,"_bufferClear");
	HX_VISIT_MEMBER_NAME(_mouse3DManager,"_mouse3DManager");
	HX_VISIT_MEMBER_NAME(_touch3DManager,"_touch3DManager");
	HX_VISIT_MEMBER_NAME(forceSoftware,"forceSoftware");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Stage3DProxy_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_x() ); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_y() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_width() ); }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_color() ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return ::hx::Val( get_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return ::hx::Val( set_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return ::hx::Val( get_y_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return ::hx::Val( set_y_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_height() ); }
		if (HX_FIELD_EQ(inName,"_color") ) { return ::hx::Val( _color ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"profile") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_profile() ); }
		if (HX_FIELD_EQ(inName,"stage3D") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_stage3D() ); }
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_visible() ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		if (HX_FIELD_EQ(inName,"present") ) { return ::hx::Val( present_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"viewPort") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_viewPort() ); }
		if (HX_FIELD_EQ(inName,"_profile") ) { return ::hx::Val( _profile ); }
		if (HX_FIELD_EQ(inName,"_stage3D") ) { return ::hx::Val( _stage3D ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"context3D") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_context3D() ); }
		if (HX_FIELD_EQ(inName,"antiAlias") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_antiAlias() ); }
		if (HX_FIELD_EQ(inName,"_viewPort") ) { return ::hx::Val( _viewPort ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return ::hx::Val( get_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return ::hx::Val( set_color_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"driverInfo") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_driverInfo() ); }
		if (HX_FIELD_EQ(inName,"_context3D") ) { return ::hx::Val( _context3D ); }
		if (HX_FIELD_EQ(inName,"_antiAlias") ) { return ::hx::Val( _antiAlias ); }
		if (HX_FIELD_EQ(inName,"_exitFrame") ) { return ::hx::Val( _exitFrame ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scissorRect") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scissorRect() ); }
		if (HX_FIELD_EQ(inName,"bufferClear") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_bufferClear() ); }
		if (HX_FIELD_EQ(inName,"_enterFrame") ) { return ::hx::Val( _enterFrame ); }
		if (HX_FIELD_EQ(inName,"get_profile") ) { return ::hx::Val( get_profile_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_stage3D") ) { return ::hx::Val( get_stage3D_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_visible") ) { return ::hx::Val( get_visible_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return ::hx::Val( set_visible_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"renderTarget") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_renderTarget() ); }
		if (HX_FIELD_EQ(inName,"stage3DIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_stage3DIndex() ); }
		if (HX_FIELD_EQ(inName,"_scissorRect") ) { return ::hx::Val( _scissorRect ); }
		if (HX_FIELD_EQ(inName,"_bufferClear") ) { return ::hx::Val( _bufferClear ); }
		if (HX_FIELD_EQ(inName,"get_viewPort") ) { return ::hx::Val( get_viewPort_dyn() ); }
		if (HX_FIELD_EQ(inName,"onEnterFrame") ) { return ::hx::Val( onEnterFrame_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_stage3DIndex") ) { return ::hx::Val( _stage3DIndex ); }
		if (HX_FIELD_EQ(inName,"_renderTarget") ) { return ::hx::Val( _renderTarget ); }
		if (HX_FIELD_EQ(inName,"forceSoftware") ) { return ::hx::Val( forceSoftware ); }
		if (HX_FIELD_EQ(inName,"get_context3D") ) { return ::hx::Val( get_context3D_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_antiAlias") ) { return ::hx::Val( get_antiAlias_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_antiAlias") ) { return ::hx::Val( set_antiAlias_dyn() ); }
		if (HX_FIELD_EQ(inName,"freeContext3D") ) { return ::hx::Val( freeContext3D_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawTriangles") ) { return ::hx::Val( drawTriangles_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"mouse3DManager") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_mouse3DManager() ); }
		if (HX_FIELD_EQ(inName,"touch3DManager") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_touch3DManager() ); }
		if (HX_FIELD_EQ(inName,"_viewportDirty") ) { return ::hx::Val( _viewportDirty ); }
		if (HX_FIELD_EQ(inName,"get_driverInfo") ) { return ::hx::Val( get_driverInfo_dyn() ); }
		if (HX_FIELD_EQ(inName,"requestContext") ) { return ::hx::Val( requestContext_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_stage3DManager") ) { return ::hx::Val( _stage3DManager ); }
		if (HX_FIELD_EQ(inName,"_mouse3DManager") ) { return ::hx::Val( _mouse3DManager ); }
		if (HX_FIELD_EQ(inName,"_touch3DManager") ) { return ::hx::Val( _touch3DManager ); }
		if (HX_FIELD_EQ(inName,"notifyExitFrame") ) { return ::hx::Val( notifyExitFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"setRenderTarget") ) { return ::hx::Val( setRenderTarget_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_scissorRect") ) { return ::hx::Val( get_scissorRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scissorRect") ) { return ::hx::Val( set_scissorRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_bufferClear") ) { return ::hx::Val( get_bufferClear_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_bufferClear") ) { return ::hx::Val( set_bufferClear_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_activeProgram3D") ) { return ::hx::Val( _activeProgram3D ); }
		if (HX_FIELD_EQ(inName,"_backBufferWidth") ) { return ::hx::Val( _backBufferWidth ); }
		if (HX_FIELD_EQ(inName,"_backBufferDirty") ) { return ::hx::Val( _backBufferDirty ); }
		if (HX_FIELD_EQ(inName,"_viewportUpdated") ) { return ::hx::Val( _viewportUpdated ); }
		if (HX_FIELD_EQ(inName,"notifyEnterFrame") ) { return ::hx::Val( notifyEnterFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_renderTarget") ) { return ::hx::Val( get_renderTarget_dyn() ); }
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return ::hx::Val( addEventListener_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_stage3DIndex") ) { return ::hx::Val( get_stage3DIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearDepthBuffer") ) { return ::hx::Val( clearDepthBuffer_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_backBufferHeight") ) { return ::hx::Val( _backBufferHeight ); }
		if (HX_FIELD_EQ(inName,"_contextRequested") ) { return ::hx::Val( _contextRequested ); }
		if (HX_FIELD_EQ(inName,"onContext3DUpdate") ) { return ::hx::Val( onContext3DUpdate_dyn() ); }
		if (HX_FIELD_EQ(inName,"createIndexBuffer") ) { return ::hx::Val( createIndexBuffer_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_mouse3DManager") ) { return ::hx::Val( get_mouse3DManager_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_mouse3DManager") ) { return ::hx::Val( set_mouse3DManager_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_touch3DManager") ) { return ::hx::Val( get_touch3DManager_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_touch3DManager") ) { return ::hx::Val( set_touch3DManager_dyn() ); }
		if (HX_FIELD_EQ(inName,"createVertexBuffer") ) { return ::hx::Val( createVertexBuffer_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"configureBackBuffer") ) { return ::hx::Val( configureBackBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { return ::hx::Val( removeEventListener_dyn() ); }
		if (HX_FIELD_EQ(inName,"recoverFromDisposal") ) { return ::hx::Val( recoverFromDisposal_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"enableDepthAndStencil") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_enableDepthAndStencil() ); }
		if (HX_FIELD_EQ(inName,"renderSurfaceSelector") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_renderSurfaceSelector() ); }
		if (HX_FIELD_EQ(inName,"usesSoftwareRendering") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_usesSoftwareRendering() ); }
		if (HX_FIELD_EQ(inName,"notifyViewportUpdated") ) { return ::hx::Val( notifyViewportUpdated_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_usesSoftwareRendering") ) { return ::hx::Val( _usesSoftwareRendering ); }
		if (HX_FIELD_EQ(inName,"_enableDepthAndStencil") ) { return ::hx::Val( _enableDepthAndStencil ); }
		if (HX_FIELD_EQ(inName,"_renderSurfaceSelector") ) { return ::hx::Val( _renderSurfaceSelector ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"get_enableDepthAndStencil") ) { return ::hx::Val( get_enableDepthAndStencil_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_enableDepthAndStencil") ) { return ::hx::Val( set_enableDepthAndStencil_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_renderSurfaceSelector") ) { return ::hx::Val( get_renderSurfaceSelector_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_usesSoftwareRendering") ) { return ::hx::Val( get_usesSoftwareRendering_dyn() ); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"_backBufferEnableDepthAndStencil") ) { return ::hx::Val( _backBufferEnableDepthAndStencil ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Stage3DProxy_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"_vbUploadCount") ) { outValue = ( _vbUploadCount ); return true; }
		if (HX_FIELD_EQ(inName,"_ibUploadCount") ) { outValue = ( _ibUploadCount ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_bmpUploadCount") ) { outValue = ( _bmpUploadCount ); return true; }
		if (HX_FIELD_EQ(inName,"_atfUploadCount") ) { outValue = ( _atfUploadCount ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"indexBufferCount") ) { outValue = ( indexBufferCount ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_frameEventDriver") ) { outValue = ( _frameEventDriver ); return true; }
		if (HX_FIELD_EQ(inName,"vertexBufferCount") ) { outValue = ( vertexBufferCount ); return true; }
		if (HX_FIELD_EQ(inName,"drawTriangleCount") ) { outValue = ( drawTriangleCount ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"disposeIndexBuffer") ) { outValue = disposeIndexBuffer_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"disposeVertexBuffer") ) { outValue = disposeVertexBuffer_dyn(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"uploadIndexBufferFromVector") ) { outValue = uploadIndexBufferFromVector_dyn(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"uploadVertexBufferFromVector") ) { outValue = uploadVertexBufferFromVector_dyn(); return true; }
	}
	return false;
}

::hx::Val Stage3DProxy_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_x(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_y(inValue.Cast< Float >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_width(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_color(inValue.Cast< int >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_height(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"_color") ) { _color=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_visible(inValue.Cast< bool >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_profile") ) { _profile=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_stage3D") ) { _stage3D=inValue.Cast<  ::openfl::display::Stage3D >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"antiAlias") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_antiAlias(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"_viewPort") ) { _viewPort=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_context3D") ) { _context3D=inValue.Cast<  ::openfl::display3D::Context3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_antiAlias") ) { _antiAlias=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_exitFrame") ) { _exitFrame=inValue.Cast<  ::openfl::events::Event >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scissorRect") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scissorRect(inValue.Cast<  ::openfl::geom::Rectangle >()) ); }
		if (HX_FIELD_EQ(inName,"bufferClear") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_bufferClear(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"_enterFrame") ) { _enterFrame=inValue.Cast<  ::openfl::events::Event >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_scissorRect") ) { _scissorRect=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bufferClear") ) { _bufferClear=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_stage3DIndex") ) { _stage3DIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_renderTarget") ) { _renderTarget=inValue.Cast<  ::openfl::display3D::textures::TextureBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"forceSoftware") ) { forceSoftware=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"mouse3DManager") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_mouse3DManager(inValue.Cast<  ::away3d::core::managers::Mouse3DManager >()) ); }
		if (HX_FIELD_EQ(inName,"touch3DManager") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_touch3DManager(inValue.Cast<  ::away3d::core::managers::Touch3DManager >()) ); }
		if (HX_FIELD_EQ(inName,"_viewportDirty") ) { _viewportDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_stage3DManager") ) { _stage3DManager=inValue.Cast<  ::away3d::core::managers::Stage3DManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mouse3DManager") ) { _mouse3DManager=inValue.Cast<  ::away3d::core::managers::Mouse3DManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_touch3DManager") ) { _touch3DManager=inValue.Cast<  ::away3d::core::managers::Touch3DManager >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_activeProgram3D") ) { _activeProgram3D=inValue.Cast<  ::openfl::display3D::Program3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_backBufferWidth") ) { _backBufferWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_backBufferDirty") ) { _backBufferDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_viewportUpdated") ) { _viewportUpdated=inValue.Cast<  ::away3d::events::Stage3DEvent >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_backBufferHeight") ) { _backBufferHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_contextRequested") ) { _contextRequested=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"enableDepthAndStencil") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_enableDepthAndStencil(inValue.Cast< bool >()) ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_usesSoftwareRendering") ) { _usesSoftwareRendering=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_enableDepthAndStencil") ) { _enableDepthAndStencil=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_renderSurfaceSelector") ) { _renderSurfaceSelector=inValue.Cast< int >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"_backBufferEnableDepthAndStencil") ) { _backBufferEnableDepthAndStencil=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Stage3DProxy_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"_vbUploadCount") ) { _vbUploadCount=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"_ibUploadCount") ) { _ibUploadCount=ioValue.Cast< int >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_bmpUploadCount") ) { _bmpUploadCount=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"_atfUploadCount") ) { _atfUploadCount=ioValue.Cast< int >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"indexBufferCount") ) { indexBufferCount=ioValue.Cast< int >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_frameEventDriver") ) { _frameEventDriver=ioValue.Cast<  ::openfl::display::Shape >(); return true; }
		if (HX_FIELD_EQ(inName,"vertexBufferCount") ) { vertexBufferCount=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"drawTriangleCount") ) { drawTriangleCount=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Stage3DProxy_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("profile",29,49,49,f3));
	outFields->push(HX_("enableDepthAndStencil",85,9f,26,87));
	outFields->push(HX_("renderTarget",47,f7,42,f6));
	outFields->push(HX_("renderSurfaceSelector",b6,97,8e,ba));
	outFields->push(HX_("scissorRect",60,df,53,61));
	outFields->push(HX_("stage3DIndex",a3,c5,53,04));
	outFields->push(HX_("stage3D",ef,42,ca,2d));
	outFields->push(HX_("context3D",60,5c,fc,16));
	outFields->push(HX_("driverInfo",b6,18,7b,e3));
	outFields->push(HX_("usesSoftwareRendering",39,1a,0a,5f));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("antiAlias",8e,46,17,09));
	outFields->push(HX_("viewPort",86,78,7e,87));
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("visible",72,78,24,a3));
	outFields->push(HX_("bufferClear",6d,04,a7,e5));
	outFields->push(HX_("mouse3DManager",f7,72,9c,08));
	outFields->push(HX_("touch3DManager",1d,6e,52,8e));
	outFields->push(HX_("_context3D",21,d8,9e,72));
	outFields->push(HX_("_stage3DIndex",82,58,c2,e6));
	outFields->push(HX_("_usesSoftwareRendering",7a,b3,17,b8));
	outFields->push(HX_("_profile",aa,a2,01,2d));
	outFields->push(HX_("_stage3D",70,9c,82,67));
	outFields->push(HX_("_activeProgram3D",10,98,78,fc));
	outFields->push(HX_("_stage3DManager",dd,8b,6d,11));
	outFields->push(HX_("_backBufferWidth",80,3c,33,77));
	outFields->push(HX_("_backBufferHeight",2d,2c,f1,8b));
	outFields->push(HX_("_antiAlias",4f,c2,b9,64));
	outFields->push(HX_("_enableDepthAndStencil",c6,38,34,e0));
	outFields->push(HX_("_backBufferEnableDepthAndStencil",ff,39,15,dc));
	outFields->push(HX_("_contextRequested",de,6b,38,ae));
	outFields->push(HX_("_renderTarget",26,8a,b1,d8));
	outFields->push(HX_("_renderSurfaceSelector",f7,30,9c,13));
	outFields->push(HX_("_scissorRect",61,8d,5d,c7));
	outFields->push(HX_("_color",a4,b8,43,46));
	outFields->push(HX_("_backBufferDirty",8c,d6,a0,86));
	outFields->push(HX_("_viewPort",e5,6f,14,cf));
	outFields->push(HX_("_enterFrame",14,d1,d9,d4));
	outFields->push(HX_("_exitFrame",f0,df,ea,6d));
	outFields->push(HX_("_viewportUpdated",f6,d8,f5,8b));
	outFields->push(HX_("_viewportDirty",0d,b2,5d,00));
	outFields->push(HX_("_bufferClear",6e,b2,b0,4b));
	outFields->push(HX_("_mouse3DManager",96,bb,fc,51));
	outFields->push(HX_("_touch3DManager",bc,b6,b2,d7));
	outFields->push(HX_("forceSoftware",32,0d,c7,ba));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Stage3DProxy_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display3D::Context3D */ ,(int)offsetof(Stage3DProxy_obj,_context3D),HX_("_context3D",21,d8,9e,72)},
	{::hx::fsInt,(int)offsetof(Stage3DProxy_obj,_stage3DIndex),HX_("_stage3DIndex",82,58,c2,e6)},
	{::hx::fsBool,(int)offsetof(Stage3DProxy_obj,_usesSoftwareRendering),HX_("_usesSoftwareRendering",7a,b3,17,b8)},
	{::hx::fsString,(int)offsetof(Stage3DProxy_obj,_profile),HX_("_profile",aa,a2,01,2d)},
	{::hx::fsObject /*  ::openfl::display::Stage3D */ ,(int)offsetof(Stage3DProxy_obj,_stage3D),HX_("_stage3D",70,9c,82,67)},
	{::hx::fsObject /*  ::openfl::display3D::Program3D */ ,(int)offsetof(Stage3DProxy_obj,_activeProgram3D),HX_("_activeProgram3D",10,98,78,fc)},
	{::hx::fsObject /*  ::away3d::core::managers::Stage3DManager */ ,(int)offsetof(Stage3DProxy_obj,_stage3DManager),HX_("_stage3DManager",dd,8b,6d,11)},
	{::hx::fsInt,(int)offsetof(Stage3DProxy_obj,_backBufferWidth),HX_("_backBufferWidth",80,3c,33,77)},
	{::hx::fsInt,(int)offsetof(Stage3DProxy_obj,_backBufferHeight),HX_("_backBufferHeight",2d,2c,f1,8b)},
	{::hx::fsInt,(int)offsetof(Stage3DProxy_obj,_antiAlias),HX_("_antiAlias",4f,c2,b9,64)},
	{::hx::fsBool,(int)offsetof(Stage3DProxy_obj,_enableDepthAndStencil),HX_("_enableDepthAndStencil",c6,38,34,e0)},
	{::hx::fsBool,(int)offsetof(Stage3DProxy_obj,_backBufferEnableDepthAndStencil),HX_("_backBufferEnableDepthAndStencil",ff,39,15,dc)},
	{::hx::fsBool,(int)offsetof(Stage3DProxy_obj,_contextRequested),HX_("_contextRequested",de,6b,38,ae)},
	{::hx::fsObject /*  ::openfl::display3D::textures::TextureBase */ ,(int)offsetof(Stage3DProxy_obj,_renderTarget),HX_("_renderTarget",26,8a,b1,d8)},
	{::hx::fsInt,(int)offsetof(Stage3DProxy_obj,_renderSurfaceSelector),HX_("_renderSurfaceSelector",f7,30,9c,13)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(Stage3DProxy_obj,_scissorRect),HX_("_scissorRect",61,8d,5d,c7)},
	{::hx::fsInt,(int)offsetof(Stage3DProxy_obj,_color),HX_("_color",a4,b8,43,46)},
	{::hx::fsBool,(int)offsetof(Stage3DProxy_obj,_backBufferDirty),HX_("_backBufferDirty",8c,d6,a0,86)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(Stage3DProxy_obj,_viewPort),HX_("_viewPort",e5,6f,14,cf)},
	{::hx::fsObject /*  ::openfl::events::Event */ ,(int)offsetof(Stage3DProxy_obj,_enterFrame),HX_("_enterFrame",14,d1,d9,d4)},
	{::hx::fsObject /*  ::openfl::events::Event */ ,(int)offsetof(Stage3DProxy_obj,_exitFrame),HX_("_exitFrame",f0,df,ea,6d)},
	{::hx::fsObject /*  ::away3d::events::Stage3DEvent */ ,(int)offsetof(Stage3DProxy_obj,_viewportUpdated),HX_("_viewportUpdated",f6,d8,f5,8b)},
	{::hx::fsBool,(int)offsetof(Stage3DProxy_obj,_viewportDirty),HX_("_viewportDirty",0d,b2,5d,00)},
	{::hx::fsBool,(int)offsetof(Stage3DProxy_obj,_bufferClear),HX_("_bufferClear",6e,b2,b0,4b)},
	{::hx::fsObject /*  ::away3d::core::managers::Mouse3DManager */ ,(int)offsetof(Stage3DProxy_obj,_mouse3DManager),HX_("_mouse3DManager",96,bb,fc,51)},
	{::hx::fsObject /*  ::away3d::core::managers::Touch3DManager */ ,(int)offsetof(Stage3DProxy_obj,_touch3DManager),HX_("_touch3DManager",bc,b6,b2,d7)},
	{::hx::fsBool,(int)offsetof(Stage3DProxy_obj,forceSoftware),HX_("forceSoftware",32,0d,c7,ba)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Stage3DProxy_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::Shape */ ,(void *) &Stage3DProxy_obj::_frameEventDriver,HX_("_frameEventDriver",14,1f,80,d1)},
	{::hx::fsInt,(void *) &Stage3DProxy_obj::vertexBufferCount,HX_("vertexBufferCount",ab,46,88,a3)},
	{::hx::fsInt,(void *) &Stage3DProxy_obj::indexBufferCount,HX_("indexBufferCount",bd,69,22,e5)},
	{::hx::fsInt,(void *) &Stage3DProxy_obj::drawTriangleCount,HX_("drawTriangleCount",43,52,24,20)},
	{::hx::fsInt,(void *) &Stage3DProxy_obj::_vbUploadCount,HX_("_vbUploadCount",83,5f,5c,e0)},
	{::hx::fsInt,(void *) &Stage3DProxy_obj::_ibUploadCount,HX_("_ibUploadCount",f6,ff,95,55)},
	{::hx::fsInt,(void *) &Stage3DProxy_obj::_bmpUploadCount,HX_("_bmpUploadCount",68,37,78,96)},
	{::hx::fsInt,(void *) &Stage3DProxy_obj::_atfUploadCount,HX_("_atfUploadCount",5a,0a,94,2a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Stage3DProxy_obj_sMemberFields[] = {
	HX_("_context3D",21,d8,9e,72),
	HX_("_stage3DIndex",82,58,c2,e6),
	HX_("_usesSoftwareRendering",7a,b3,17,b8),
	HX_("_profile",aa,a2,01,2d),
	HX_("_stage3D",70,9c,82,67),
	HX_("_activeProgram3D",10,98,78,fc),
	HX_("_stage3DManager",dd,8b,6d,11),
	HX_("_backBufferWidth",80,3c,33,77),
	HX_("_backBufferHeight",2d,2c,f1,8b),
	HX_("_antiAlias",4f,c2,b9,64),
	HX_("_enableDepthAndStencil",c6,38,34,e0),
	HX_("_backBufferEnableDepthAndStencil",ff,39,15,dc),
	HX_("_contextRequested",de,6b,38,ae),
	HX_("_renderTarget",26,8a,b1,d8),
	HX_("_renderSurfaceSelector",f7,30,9c,13),
	HX_("_scissorRect",61,8d,5d,c7),
	HX_("_color",a4,b8,43,46),
	HX_("_backBufferDirty",8c,d6,a0,86),
	HX_("_viewPort",e5,6f,14,cf),
	HX_("_enterFrame",14,d1,d9,d4),
	HX_("_exitFrame",f0,df,ea,6d),
	HX_("_viewportUpdated",f6,d8,f5,8b),
	HX_("_viewportDirty",0d,b2,5d,00),
	HX_("_bufferClear",6e,b2,b0,4b),
	HX_("_mouse3DManager",96,bb,fc,51),
	HX_("_touch3DManager",bc,b6,b2,d7),
	HX_("notifyViewportUpdated",ac,4d,bf,e6),
	HX_("notifyEnterFrame",1e,98,b0,16),
	HX_("notifyExitFrame",26,48,ef,ef),
	HX_("forceSoftware",32,0d,c7,ba),
	HX_("get_profile",40,a9,43,79),
	HX_("dispose",9f,80,4c,bb),
	HX_("configureBackBuffer",0d,3c,11,04),
	HX_("get_enableDepthAndStencil",dc,59,24,8d),
	HX_("set_enableDepthAndStencil",e8,1d,7b,f9),
	HX_("get_renderTarget",d0,e3,e1,fa),
	HX_("get_renderSurfaceSelector",0d,52,8c,c0),
	HX_("setRenderTarget",09,ca,f8,14),
	HX_("clear",8d,71,5b,48),
	HX_("present",fb,3a,dc,39),
	HX_("addEventListener",cd,0b,64,f1),
	HX_("removeEventListener",ca,87,75,55),
	HX_("get_scissorRect",f7,96,35,22),
	HX_("set_scissorRect",03,14,01,1e),
	HX_("get_stage3DIndex",2c,b2,f2,08),
	HX_("get_stage3D",06,a3,c4,b3),
	HX_("get_context3D",37,30,60,d8),
	HX_("get_driverInfo",ff,a0,70,59),
	HX_("get_usesSoftwareRendering",90,d4,07,65),
	HX_("get_x",4f,a5,60,91),
	HX_("set_x",5b,9b,2f,7a),
	HX_("get_y",50,a5,60,91),
	HX_("set_y",5c,9b,2f,7a),
	HX_("get_width",5d,12,0c,0e),
	HX_("set_width",69,fe,5c,f1),
	HX_("get_height",b0,77,d3,f2),
	HX_("set_height",24,16,51,f6),
	HX_("get_antiAlias",65,1a,7b,ca),
	HX_("set_antiAlias",71,fc,80,0f),
	HX_("get_viewPort",8f,2c,98,3c),
	HX_("get_color",ba,cd,05,8e),
	HX_("set_color",c6,b9,56,71),
	HX_("get_visible",89,d8,1e,29),
	HX_("set_visible",95,df,8b,33),
	HX_("get_bufferClear",04,bc,88,a6),
	HX_("set_bufferClear",10,39,54,a2),
	HX_("get_mouse3DManager",c0,53,36,a4),
	HX_("set_mouse3DManager",34,86,e5,80),
	HX_("get_touch3DManager",e6,4e,ec,29),
	HX_("set_touch3DManager",5a,81,9b,06),
	HX_("freeContext3D",14,aa,e1,7f),
	HX_("onContext3DUpdate",2a,a0,45,45),
	HX_("requestContext",60,f6,be,92),
	HX_("onEnterFrame",f4,a5,93,da),
	HX_("recoverFromDisposal",bf,e7,4e,9d),
	HX_("clearDepthBuffer",d6,6d,28,9c),
	HX_("createVertexBuffer",a0,ec,c7,6a),
	HX_("createIndexBuffer",16,40,47,48),
	HX_("drawTriangles",07,44,68,de),
	::String(null()) };

static void Stage3DProxy_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stage3DProxy_obj::_frameEventDriver,"_frameEventDriver");
	HX_MARK_MEMBER_NAME(Stage3DProxy_obj::vertexBufferCount,"vertexBufferCount");
	HX_MARK_MEMBER_NAME(Stage3DProxy_obj::indexBufferCount,"indexBufferCount");
	HX_MARK_MEMBER_NAME(Stage3DProxy_obj::drawTriangleCount,"drawTriangleCount");
	HX_MARK_MEMBER_NAME(Stage3DProxy_obj::_vbUploadCount,"_vbUploadCount");
	HX_MARK_MEMBER_NAME(Stage3DProxy_obj::_ibUploadCount,"_ibUploadCount");
	HX_MARK_MEMBER_NAME(Stage3DProxy_obj::_bmpUploadCount,"_bmpUploadCount");
	HX_MARK_MEMBER_NAME(Stage3DProxy_obj::_atfUploadCount,"_atfUploadCount");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Stage3DProxy_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stage3DProxy_obj::_frameEventDriver,"_frameEventDriver");
	HX_VISIT_MEMBER_NAME(Stage3DProxy_obj::vertexBufferCount,"vertexBufferCount");
	HX_VISIT_MEMBER_NAME(Stage3DProxy_obj::indexBufferCount,"indexBufferCount");
	HX_VISIT_MEMBER_NAME(Stage3DProxy_obj::drawTriangleCount,"drawTriangleCount");
	HX_VISIT_MEMBER_NAME(Stage3DProxy_obj::_vbUploadCount,"_vbUploadCount");
	HX_VISIT_MEMBER_NAME(Stage3DProxy_obj::_ibUploadCount,"_ibUploadCount");
	HX_VISIT_MEMBER_NAME(Stage3DProxy_obj::_bmpUploadCount,"_bmpUploadCount");
	HX_VISIT_MEMBER_NAME(Stage3DProxy_obj::_atfUploadCount,"_atfUploadCount");
};

#endif

::hx::Class Stage3DProxy_obj::__mClass;

static ::String Stage3DProxy_obj_sStaticFields[] = {
	HX_("_frameEventDriver",14,1f,80,d1),
	HX_("vertexBufferCount",ab,46,88,a3),
	HX_("indexBufferCount",bd,69,22,e5),
	HX_("drawTriangleCount",43,52,24,20),
	HX_("_vbUploadCount",83,5f,5c,e0),
	HX_("_ibUploadCount",f6,ff,95,55),
	HX_("_bmpUploadCount",68,37,78,96),
	HX_("_atfUploadCount",5a,0a,94,2a),
	HX_("disposeVertexBuffer",c3,6e,56,47),
	HX_("disposeIndexBuffer",53,93,c1,16),
	HX_("uploadVertexBufferFromVector",52,3d,27,ed),
	HX_("uploadIndexBufferFromVector",5e,62,07,92),
	::String(null())
};

void Stage3DProxy_obj::__register()
{
	Stage3DProxy_obj _hx_dummy;
	Stage3DProxy_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.managers.Stage3DProxy",27,5d,47,e4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Stage3DProxy_obj::__GetStatic;
	__mClass->mSetStaticField = &Stage3DProxy_obj::__SetStatic;
	__mClass->mMarkFunc = Stage3DProxy_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Stage3DProxy_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Stage3DProxy_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Stage3DProxy_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Stage3DProxy_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Stage3DProxy_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Stage3DProxy_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Stage3DProxy_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_d691d88198acc28e_55_boot)
HXDLIN(  55)		_frameEventDriver =  ::openfl::display::Shape_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_667_boot)
HXDLIN( 667)		_vbUploadCount = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_668_boot)
HXDLIN( 668)		_ibUploadCount = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_670_boot)
HXDLIN( 670)		_bmpUploadCount = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_d691d88198acc28e_671_boot)
HXDLIN( 671)		_atfUploadCount = 0;
            	}
}

} // end namespace away3d
} // end namespace core
} // end namespace managers
