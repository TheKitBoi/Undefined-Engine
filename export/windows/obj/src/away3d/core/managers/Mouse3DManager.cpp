#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
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
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Mouse3DManager
#include <away3d/core/managers/Mouse3DManager.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_away3d_core_pick_IPicker
#include <away3d/core/pick/IPicker.h>
#endif
#ifndef INCLUDED_away3d_core_pick_PickingCollisionVO
#include <away3d/core/pick/PickingCollisionVO.h>
#endif
#ifndef INCLUDED_away3d_core_pick_PickingType
#include <away3d/core/pick/PickingType.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_events_MouseEvent3D
#include <away3d/events/MouseEvent3D.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
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
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
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
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7db57d83199a017b_22_new,"away3d.core.managers.Mouse3DManager","new",0xfdd02d91,"away3d.core.managers.Mouse3DManager.new","away3d/core/managers/Mouse3DManager.hx",22,0xc03eb23e)
HX_LOCAL_STACK_FRAME(_hx_pos_7db57d83199a017b_73_updateCollider,"away3d.core.managers.Mouse3DManager","updateCollider",0x5b7a90cc,"away3d.core.managers.Mouse3DManager.updateCollider","away3d/core/managers/Mouse3DManager.hx",73,0xc03eb23e)
HX_LOCAL_STACK_FRAME(_hx_pos_7db57d83199a017b_97_fireMouseEvents,"away3d.core.managers.Mouse3DManager","fireMouseEvents",0x34a7f9b9,"away3d.core.managers.Mouse3DManager.fireMouseEvents","away3d/core/managers/Mouse3DManager.hx",97,0xc03eb23e)
HX_LOCAL_STACK_FRAME(_hx_pos_7db57d83199a017b_154_addViewLayer,"away3d.core.managers.Mouse3DManager","addViewLayer",0xfe7a077a,"away3d.core.managers.Mouse3DManager.addViewLayer","away3d/core/managers/Mouse3DManager.hx",154,0xc03eb23e)
HX_LOCAL_STACK_FRAME(_hx_pos_7db57d83199a017b_170_enableMouseListeners,"away3d.core.managers.Mouse3DManager","enableMouseListeners",0x93cd002c,"away3d.core.managers.Mouse3DManager.enableMouseListeners","away3d/core/managers/Mouse3DManager.hx",170,0xc03eb23e)
HX_LOCAL_STACK_FRAME(_hx_pos_7db57d83199a017b_182_disableMouseListeners,"away3d.core.managers.Mouse3DManager","disableMouseListeners",0x8801c413,"away3d.core.managers.Mouse3DManager.disableMouseListeners","away3d/core/managers/Mouse3DManager.hx",182,0xc03eb23e)
HX_LOCAL_STACK_FRAME(_hx_pos_7db57d83199a017b_195_dispose,"away3d.core.managers.Mouse3DManager","dispose",0xa15dca50,"away3d.core.managers.Mouse3DManager.dispose","away3d/core/managers/Mouse3DManager.hx",195,0xc03eb23e)
HX_LOCAL_STACK_FRAME(_hx_pos_7db57d83199a017b_203_queueDispatch,"away3d.core.managers.Mouse3DManager","queueDispatch",0x6996b5dc,"away3d.core.managers.Mouse3DManager.queueDispatch","away3d/core/managers/Mouse3DManager.hx",203,0xc03eb23e)
HX_LOCAL_STACK_FRAME(_hx_pos_7db57d83199a017b_247_reThrowEvent,"away3d.core.managers.Mouse3DManager","reThrowEvent",0x56018b56,"away3d.core.managers.Mouse3DManager.reThrowEvent","away3d/core/managers/Mouse3DManager.hx",247,0xc03eb23e)
HX_LOCAL_STACK_FRAME(_hx_pos_7db57d83199a017b_263_hasKey,"away3d.core.managers.Mouse3DManager","hasKey",0xec77cdd4,"away3d.core.managers.Mouse3DManager.hasKey","away3d/core/managers/Mouse3DManager.hx",263,0xc03eb23e)
HX_LOCAL_STACK_FRAME(_hx_pos_7db57d83199a017b_267_traverseDisplayObjects,"away3d.core.managers.Mouse3DManager","traverseDisplayObjects",0xb09c3d73,"away3d.core.managers.Mouse3DManager.traverseDisplayObjects","away3d/core/managers/Mouse3DManager.hx",267,0xc03eb23e)
HX_LOCAL_STACK_FRAME(_hx_pos_7db57d83199a017b_288_onMouseMove,"away3d.core.managers.Mouse3DManager","onMouseMove",0x03cef4e8,"away3d.core.managers.Mouse3DManager.onMouseMove","away3d/core/managers/Mouse3DManager.hx",288,0xc03eb23e)
HX_LOCAL_STACK_FRAME(_hx_pos_7db57d83199a017b_297_onMouseOut,"away3d.core.managers.Mouse3DManager","onMouseOut",0xb1f5d697,"away3d.core.managers.Mouse3DManager.onMouseOut","away3d/core/managers/Mouse3DManager.hx",297,0xc03eb23e)
HX_LOCAL_STACK_FRAME(_hx_pos_7db57d83199a017b_305_onMouseOver,"away3d.core.managers.Mouse3DManager","onMouseOver",0x0526a32b,"away3d.core.managers.Mouse3DManager.onMouseOver","away3d/core/managers/Mouse3DManager.hx",305,0xc03eb23e)
HX_LOCAL_STACK_FRAME(_hx_pos_7db57d83199a017b_315_onClick,"away3d.core.managers.Mouse3DManager","onClick",0xc4ad645a,"away3d.core.managers.Mouse3DManager.onClick","away3d/core/managers/Mouse3DManager.hx",315,0xc03eb23e)
HX_LOCAL_STACK_FRAME(_hx_pos_7db57d83199a017b_324_onDoubleClick,"away3d.core.managers.Mouse3DManager","onDoubleClick",0xd8654509,"away3d.core.managers.Mouse3DManager.onDoubleClick","away3d/core/managers/Mouse3DManager.hx",324,0xc03eb23e)
HX_LOCAL_STACK_FRAME(_hx_pos_7db57d83199a017b_333_onMouseDown,"away3d.core.managers.Mouse3DManager","onMouseDown",0xfddc0a39,"away3d.core.managers.Mouse3DManager.onMouseDown","away3d/core/managers/Mouse3DManager.hx",333,0xc03eb23e)
HX_LOCAL_STACK_FRAME(_hx_pos_7db57d83199a017b_345_onMouseUp,"away3d.core.managers.Mouse3DManager","onMouseUp",0x1c598472,"away3d.core.managers.Mouse3DManager.onMouseUp","away3d/core/managers/Mouse3DManager.hx",345,0xc03eb23e)
HX_LOCAL_STACK_FRAME(_hx_pos_7db57d83199a017b_355_onMouseWheel,"away3d.core.managers.Mouse3DManager","onMouseWheel",0x0e9bbee4,"away3d.core.managers.Mouse3DManager.onMouseWheel","away3d/core/managers/Mouse3DManager.hx",355,0xc03eb23e)
HX_LOCAL_STACK_FRAME(_hx_pos_7db57d83199a017b_369_get_forceMouseMove,"away3d.core.managers.Mouse3DManager","get_forceMouseMove",0x2977b723,"away3d.core.managers.Mouse3DManager.get_forceMouseMove","away3d/core/managers/Mouse3DManager.hx",369,0xc03eb23e)
HX_LOCAL_STACK_FRAME(_hx_pos_7db57d83199a017b_373_set_forceMouseMove,"away3d.core.managers.Mouse3DManager","set_forceMouseMove",0x0626e997,"away3d.core.managers.Mouse3DManager.set_forceMouseMove","away3d/core/managers/Mouse3DManager.hx",373,0xc03eb23e)
HX_LOCAL_STACK_FRAME(_hx_pos_7db57d83199a017b_380_get_mousePicker,"away3d.core.managers.Mouse3DManager","get_mousePicker",0xc422c9db,"away3d.core.managers.Mouse3DManager.get_mousePicker","away3d/core/managers/Mouse3DManager.hx",380,0xc03eb23e)
HX_LOCAL_STACK_FRAME(_hx_pos_7db57d83199a017b_384_set_mousePicker,"away3d.core.managers.Mouse3DManager","set_mousePicker",0xbfee46e7,"away3d.core.managers.Mouse3DManager.set_mousePicker","away3d/core/managers/Mouse3DManager.hx",384,0xc03eb23e)
HX_LOCAL_STACK_FRAME(_hx_pos_7db57d83199a017b_29_boot,"away3d.core.managers.Mouse3DManager","boot",0x1070b1e1,"away3d.core.managers.Mouse3DManager.boot","away3d/core/managers/Mouse3DManager.hx",29,0xc03eb23e)
HX_LOCAL_STACK_FRAME(_hx_pos_7db57d83199a017b_37_boot,"away3d.core.managers.Mouse3DManager","boot",0x1070b1e1,"away3d.core.managers.Mouse3DManager.boot","away3d/core/managers/Mouse3DManager.hx",37,0xc03eb23e)
HX_LOCAL_STACK_FRAME(_hx_pos_7db57d83199a017b_41_boot,"away3d.core.managers.Mouse3DManager","boot",0x1070b1e1,"away3d.core.managers.Mouse3DManager.boot","away3d/core/managers/Mouse3DManager.hx",41,0xc03eb23e)
HX_LOCAL_STACK_FRAME(_hx_pos_7db57d83199a017b_42_boot,"away3d.core.managers.Mouse3DManager","boot",0x1070b1e1,"away3d.core.managers.Mouse3DManager.boot","away3d/core/managers/Mouse3DManager.hx",42,0xc03eb23e)
HX_LOCAL_STACK_FRAME(_hx_pos_7db57d83199a017b_43_boot,"away3d.core.managers.Mouse3DManager","boot",0x1070b1e1,"away3d.core.managers.Mouse3DManager.boot","away3d/core/managers/Mouse3DManager.hx",43,0xc03eb23e)
HX_LOCAL_STACK_FRAME(_hx_pos_7db57d83199a017b_44_boot,"away3d.core.managers.Mouse3DManager","boot",0x1070b1e1,"away3d.core.managers.Mouse3DManager.boot","away3d/core/managers/Mouse3DManager.hx",44,0xc03eb23e)
HX_LOCAL_STACK_FRAME(_hx_pos_7db57d83199a017b_45_boot,"away3d.core.managers.Mouse3DManager","boot",0x1070b1e1,"away3d.core.managers.Mouse3DManager.boot","away3d/core/managers/Mouse3DManager.hx",45,0xc03eb23e)
HX_LOCAL_STACK_FRAME(_hx_pos_7db57d83199a017b_46_boot,"away3d.core.managers.Mouse3DManager","boot",0x1070b1e1,"away3d.core.managers.Mouse3DManager.boot","away3d/core/managers/Mouse3DManager.hx",46,0xc03eb23e)
HX_LOCAL_STACK_FRAME(_hx_pos_7db57d83199a017b_47_boot,"away3d.core.managers.Mouse3DManager","boot",0x1070b1e1,"away3d.core.managers.Mouse3DManager.boot","away3d/core/managers/Mouse3DManager.hx",47,0xc03eb23e)
HX_LOCAL_STACK_FRAME(_hx_pos_7db57d83199a017b_48_boot,"away3d.core.managers.Mouse3DManager","boot",0x1070b1e1,"away3d.core.managers.Mouse3DManager.boot","away3d/core/managers/Mouse3DManager.hx",48,0xc03eb23e)
HX_LOCAL_STACK_FRAME(_hx_pos_7db57d83199a017b_52_boot,"away3d.core.managers.Mouse3DManager","boot",0x1070b1e1,"away3d.core.managers.Mouse3DManager.boot","away3d/core/managers/Mouse3DManager.hx",52,0xc03eb23e)
HX_LOCAL_STACK_FRAME(_hx_pos_7db57d83199a017b_53_boot,"away3d.core.managers.Mouse3DManager","boot",0x1070b1e1,"away3d.core.managers.Mouse3DManager.boot","away3d/core/managers/Mouse3DManager.hx",53,0xc03eb23e)
namespace away3d{
namespace core{
namespace managers{

void Mouse3DManager_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_7db57d83199a017b_22_new)
HXLINE(  51)		this->_childDepth = 0;
HXLINE(  50)		this->_mousePicker = ::away3d::core::pick::PickingType_obj::RAYCAST_FIRST_ENCOUNTERED;
HXLINE(  39)		this->_mouseMoveEvent =  ::openfl::events::MouseEvent_obj::__alloc( HX_CTX ,HX_("mouseMove",d6,9b,b5,f4),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE(  33)		this->_nullVector =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  32)		this->_updateDirty = true;
HXLINE(  62)		if (::hx::IsNull( ::away3d::core::managers::Mouse3DManager_obj::_view3Ds )) {
HXLINE(  63)			::away3d::core::managers::Mouse3DManager_obj::_view3Ds =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE(  64)			int length = null();
HXDLIN(  64)			bool fixed = null();
HXDLIN(  64)			::Array< ::Dynamic> array = null();
HXDLIN(  64)			::away3d::core::managers::Mouse3DManager_obj::_view3DLookup =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
            		}
            	}

Dynamic Mouse3DManager_obj::__CreateEmpty() { return new Mouse3DManager_obj; }

void *Mouse3DManager_obj::_hx_vtable = 0;

Dynamic Mouse3DManager_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Mouse3DManager_obj > _hx_result = new Mouse3DManager_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Mouse3DManager_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x15147023;
}

void Mouse3DManager_obj::updateCollider( ::away3d::containers::View3D view){
            	HX_GC_STACKFRAME(&_hx_pos_7db57d83199a017b_73_updateCollider)
HXLINE(  74)		::away3d::core::managers::Mouse3DManager_obj::_previousCollidingView = ::away3d::core::managers::Mouse3DManager_obj::_collidingView;
HXLINE(  76)		if (::hx::IsNotNull( view )) {
HXLINE(  78)			if (view->get_stage3DProxy()->get_bufferClear()) {
HXLINE(  79)				bool fixed = null();
HXDLIN(  79)				::Array< ::Dynamic> array = null();
HXDLIN(  79)				::away3d::core::managers::Mouse3DManager_obj::_collidingViewObjects =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,::away3d::core::managers::Mouse3DManager_obj::_viewCount,fixed,array,true);
            			}
HXLINE(  81)			Float p = view->get_mouseX();
HXDLIN(  81)			 ::openfl::geom::Point p1 = view->localToGlobal( ::openfl::geom::Point_obj::__alloc( HX_CTX ,p,view->get_mouseY()));
HXLINE(  82)			if (!(view->get_shareContext())) {
HXLINE(  83)				bool _hx_tmp;
HXDLIN(  83)				if (::hx::IsInstanceEq( view,this->_activeView )) {
HXLINE(  83)					if (!(this->_forceMouseMove)) {
HXLINE(  83)						_hx_tmp = this->_updateDirty;
            					}
            					else {
HXLINE(  83)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE(  83)					_hx_tmp = false;
            				}
HXDLIN(  83)				if (_hx_tmp) {
HXLINE(  84)					::away3d::core::managers::Mouse3DManager_obj::_collidingObject = ::away3d::core::pick::IPicker_obj::getViewCollision(this->_mousePicker,p1->x,p1->y,view);
            				}
            			}
            			else {
HXLINE(  88)				if (::hx::IsNull( ::away3d::core::managers::Mouse3DManager_obj::_collidingViewObjects )) {
HXLINE(  89)					bool fixed = null();
HXDLIN(  89)					::Array< ::Dynamic> array = null();
HXDLIN(  89)					::away3d::core::managers::Mouse3DManager_obj::_collidingViewObjects =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,::away3d::core::managers::Mouse3DManager_obj::_viewCount,fixed,array,true);
            				}
HXLINE(  90)				::Dynamic this1 = ::away3d::core::managers::Mouse3DManager_obj::_collidingViewObjects;
HXDLIN(  90)				int index = ::away3d::core::managers::Mouse3DManager_obj::_view3Ds->get_int(view);
HXDLIN(  90)				::away3d::core::managers::Mouse3DManager_obj::_collidingObject = ( ( ::openfl::_Vector::ObjectVector)(this1) )->set(index,::away3d::core::pick::IPicker_obj::getViewCollision(this->_mousePicker,p1->x,p1->y,view)).StaticCast<  ::away3d::core::pick::PickingCollisionVO >();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Mouse3DManager_obj,updateCollider,(void))

void Mouse3DManager_obj::fireMouseEvents(){
            	HX_STACKFRAME(&_hx_pos_7db57d83199a017b_97_fireMouseEvents)
HXLINE(  98)		int i = 0;
HXLINE( 100)		 ::away3d::events::MouseEvent3D event;
HXLINE( 101)		 ::away3d::containers::ObjectContainer3D dispatcher;
HXLINE( 104)		if (::hx::IsNotNull( ::away3d::core::managers::Mouse3DManager_obj::_collidingViewObjects )) {
HXLINE( 105)			::away3d::core::managers::Mouse3DManager_obj::_collidingObject = null();
HXLINE( 107)			Float distance = ::Math_obj::POSITIVE_INFINITY;
HXLINE( 108)			 ::away3d::containers::View3D view;
HXLINE( 109)			int v = (::away3d::core::managers::Mouse3DManager_obj::_viewCount - 1);
HXLINE( 110)			while((v >= 0)){
HXLINE( 111)				view = ::away3d::core::managers::Mouse3DManager_obj::_view3DLookup->get(v).StaticCast<  ::away3d::containers::View3D >();
HXLINE( 112)				bool _hx_tmp;
HXDLIN( 112)				if (::hx::IsNotNull( ::away3d::core::managers::Mouse3DManager_obj::_collidingViewObjects->get(v).StaticCast<  ::away3d::core::pick::PickingCollisionVO >() )) {
HXLINE( 112)					if (!(view->get_layeredView())) {
HXLINE( 112)						_hx_tmp = (::away3d::core::managers::Mouse3DManager_obj::_collidingViewObjects->get(v).StaticCast<  ::away3d::core::pick::PickingCollisionVO >()->rayEntryDistance < distance);
            					}
            					else {
HXLINE( 112)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE( 112)					_hx_tmp = false;
            				}
HXDLIN( 112)				if (_hx_tmp) {
HXLINE( 113)					distance = ::away3d::core::managers::Mouse3DManager_obj::_collidingViewObjects->get(v).StaticCast<  ::away3d::core::pick::PickingCollisionVO >()->rayEntryDistance;
HXLINE( 114)					::away3d::core::managers::Mouse3DManager_obj::_collidingObject = ::away3d::core::managers::Mouse3DManager_obj::_collidingViewObjects->get(v).StaticCast<  ::away3d::core::pick::PickingCollisionVO >();
HXLINE( 115)					if (view->get_layeredView()) {
HXLINE( 116)						goto _hx_goto_2;
            					}
            				}
HXLINE( 118)				v = (v - 1);
            			}
            			_hx_goto_2:;
            		}
HXLINE( 123)		if (::hx::IsInstanceNotEq( ::away3d::core::managers::Mouse3DManager_obj::_collidingObject,::away3d::core::managers::Mouse3DManager_obj::_previousCollidingObject )) {
HXLINE( 124)			if (::hx::IsNotNull( ::away3d::core::managers::Mouse3DManager_obj::_previousCollidingObject )) {
HXLINE( 125)				this->queueDispatch(::away3d::core::managers::Mouse3DManager_obj::_mouseOut,this->_mouseMoveEvent,::away3d::core::managers::Mouse3DManager_obj::_previousCollidingObject);
            			}
HXLINE( 126)			if (::hx::IsNotNull( ::away3d::core::managers::Mouse3DManager_obj::_collidingObject )) {
HXLINE( 127)				this->queueDispatch(::away3d::core::managers::Mouse3DManager_obj::_mouseOver,this->_mouseMoveEvent,::away3d::core::managers::Mouse3DManager_obj::_collidingObject);
            			}
            		}
HXLINE( 131)		bool _hx_tmp;
HXDLIN( 131)		if (this->_forceMouseMove) {
HXLINE( 131)			_hx_tmp = ::hx::IsNotNull( ::away3d::core::managers::Mouse3DManager_obj::_collidingObject );
            		}
            		else {
HXLINE( 131)			_hx_tmp = false;
            		}
HXDLIN( 131)		if (_hx_tmp) {
HXLINE( 132)			this->queueDispatch(::away3d::core::managers::Mouse3DManager_obj::_mouseMove,this->_mouseMoveEvent,::away3d::core::managers::Mouse3DManager_obj::_collidingObject);
            		}
HXLINE(  99)		int len = ::away3d::core::managers::Mouse3DManager_obj::_queuedEvents->get_length();
HXLINE( 136)		{
HXLINE( 136)			int _g = 0;
HXDLIN( 136)			int _g1 = len;
HXDLIN( 136)			while((_g < _g1)){
HXLINE( 136)				_g = (_g + 1);
HXDLIN( 136)				int i = (_g - 1);
HXLINE( 138)				event = ::away3d::core::managers::Mouse3DManager_obj::_queuedEvents->get(i).StaticCast<  ::away3d::events::MouseEvent3D >();
HXLINE( 139)				dispatcher = event->object;
HXLINE( 141)				while(true){
HXLINE( 141)					bool _hx_tmp;
HXDLIN( 141)					if (::hx::IsNotNull( dispatcher )) {
HXLINE( 141)						_hx_tmp = !(dispatcher->_ancestorsAllowMouseEnabled);
            					}
            					else {
HXLINE( 141)						_hx_tmp = false;
            					}
HXDLIN( 141)					if (!(_hx_tmp)) {
HXLINE( 141)						goto _hx_goto_4;
            					}
HXLINE( 142)					dispatcher = dispatcher->get_parent();
            				}
            				_hx_goto_4:;
HXLINE( 144)				if (::hx::IsNotNull( dispatcher )) {
HXLINE( 145)					dispatcher->dispatchEvent(event);
            				}
            			}
            		}
HXLINE( 147)		::away3d::core::managers::Mouse3DManager_obj::_queuedEvents->set_length(0);
HXLINE( 149)		this->_updateDirty = false;
HXLINE( 150)		::away3d::core::managers::Mouse3DManager_obj::_previousCollidingObject = ::away3d::core::managers::Mouse3DManager_obj::_collidingObject;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Mouse3DManager_obj,fireMouseEvents,(void))

void Mouse3DManager_obj::addViewLayer( ::away3d::containers::View3D view){
            	HX_STACKFRAME(&_hx_pos_7db57d83199a017b_154_addViewLayer)
HXLINE( 155)		 ::openfl::display::Stage stg = view->stage;
HXLINE( 158)		if (::hx::IsNull( view->get_stage3DProxy()->get_mouse3DManager() )) {
HXLINE( 159)			view->get_stage3DProxy()->set_mouse3DManager(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 161)		if (!(this->hasKey(view))) {
HXLINE( 162)			::away3d::core::managers::Mouse3DManager_obj::_view3Ds->set(view,0);
            		}
HXLINE( 164)		this->_childDepth = 0;
HXLINE( 165)		this->traverseDisplayObjects(stg);
HXLINE( 166)		::away3d::core::managers::Mouse3DManager_obj::_viewCount = this->_childDepth;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Mouse3DManager_obj,addViewLayer,(void))

void Mouse3DManager_obj::enableMouseListeners( ::away3d::containers::View3D view){
            	HX_STACKFRAME(&_hx_pos_7db57d83199a017b_170_enableMouseListeners)
HXLINE( 171)		view->addEventListener(HX_("click",48,7c,5e,48),this->onClick_dyn(),null(),null(),null());
HXLINE( 172)		view->addEventListener(HX_("doubleClick",77,03,76,cd),this->onDoubleClick_dyn(),null(),null(),null());
HXLINE( 173)		view->addEventListener(HX_("mouseDown",27,b1,c2,ee),this->onMouseDown_dyn(),null(),null(),null());
HXLINE( 174)		view->addEventListener(HX_("mouseMove",d6,9b,b5,f4),this->onMouseMove_dyn(),null(),null(),null());
HXLINE( 175)		view->addEventListener(HX_("mouseUp",e0,f3,72,c0),this->onMouseUp_dyn(),null(),null(),null());
HXLINE( 176)		view->addEventListener(HX_("mouseWheel",36,28,87,e7),this->onMouseWheel_dyn(),null(),null(),null());
HXLINE( 177)		view->addEventListener(HX_("mouseOver",19,4a,0d,f6),this->onMouseOver_dyn(),null(),null(),null());
HXLINE( 178)		view->addEventListener(HX_("mouseOut",69,e7,1d,a4),this->onMouseOut_dyn(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Mouse3DManager_obj,enableMouseListeners,(void))

void Mouse3DManager_obj::disableMouseListeners( ::away3d::containers::View3D view){
            	HX_STACKFRAME(&_hx_pos_7db57d83199a017b_182_disableMouseListeners)
HXLINE( 183)		view->removeEventListener(HX_("click",48,7c,5e,48),this->onClick_dyn(),null());
HXLINE( 184)		view->removeEventListener(HX_("doubleClick",77,03,76,cd),this->onDoubleClick_dyn(),null());
HXLINE( 185)		view->removeEventListener(HX_("mouseDown",27,b1,c2,ee),this->onMouseDown_dyn(),null());
HXLINE( 186)		view->removeEventListener(HX_("mouseMove",d6,9b,b5,f4),this->onMouseMove_dyn(),null());
HXLINE( 187)		view->removeEventListener(HX_("mouseUp",e0,f3,72,c0),this->onMouseUp_dyn(),null());
HXLINE( 188)		view->removeEventListener(HX_("mouseWheel",36,28,87,e7),this->onMouseWheel_dyn(),null());
HXLINE( 189)		view->removeEventListener(HX_("mouseOver",19,4a,0d,f6),this->onMouseOver_dyn(),null());
HXLINE( 190)		view->removeEventListener(HX_("mouseOut",69,e7,1d,a4),this->onMouseOut_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Mouse3DManager_obj,disableMouseListeners,(void))

void Mouse3DManager_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_7db57d83199a017b_195_dispose)
HXDLIN( 195)		::away3d::core::pick::IPicker_obj::dispose(this->_mousePicker);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Mouse3DManager_obj,dispose,(void))

void Mouse3DManager_obj::queueDispatch( ::away3d::events::MouseEvent3D event, ::openfl::events::MouseEvent sourceEvent, ::away3d::core::pick::PickingCollisionVO collider){
            	HX_STACKFRAME(&_hx_pos_7db57d83199a017b_203_queueDispatch)
HXLINE( 206)		event->ctrlKey = sourceEvent->ctrlKey;
HXLINE( 207)		event->altKey = sourceEvent->altKey;
HXLINE( 208)		event->shiftKey = sourceEvent->shiftKey;
HXLINE( 209)		event->delta = sourceEvent->delta;
HXLINE( 210)		event->screenX = sourceEvent->localX;
HXLINE( 211)		event->screenY = sourceEvent->localY;
HXLINE( 213)		if (::hx::IsNull( collider )) {
HXLINE( 214)			collider = ::away3d::core::managers::Mouse3DManager_obj::_collidingObject;
            		}
HXLINE( 217)		if (::hx::IsNotNull( collider )) {
HXLINE( 219)			event->object = collider->entity;
HXLINE( 220)			event->renderable = collider->renderable;
HXLINE( 222)			event->uv = collider->uv;
HXLINE( 224)			 ::openfl::geom::Vector3D _hx_tmp;
HXDLIN( 224)			if (::hx::IsNotNull( collider->localPosition )) {
HXLINE( 224)				_hx_tmp = collider->localPosition->clone();
            			}
            			else {
HXLINE( 224)				_hx_tmp = null();
            			}
HXDLIN( 224)			event->localPosition = _hx_tmp;
HXLINE( 226)			 ::openfl::geom::Vector3D _hx_tmp1;
HXDLIN( 226)			if (::hx::IsNotNull( collider->localNormal )) {
HXLINE( 226)				_hx_tmp1 = collider->localNormal->clone();
            			}
            			else {
HXLINE( 226)				_hx_tmp1 = null();
            			}
HXDLIN( 226)			event->localNormal = _hx_tmp1;
HXLINE( 228)			event->index = collider->index;
HXLINE( 230)			event->subGeometryIndex = collider->subGeometryIndex;
            		}
            		else {
HXLINE( 234)			event->uv = null();
HXLINE( 235)			event->object = null();
HXLINE( 236)			event->localPosition = this->_nullVector;
HXLINE( 237)			event->localNormal = this->_nullVector;
HXLINE( 238)			event->index = 0;
HXLINE( 239)			event->subGeometryIndex = 0;
            		}
HXLINE( 243)		::away3d::core::managers::Mouse3DManager_obj::_queuedEvents->push(event);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Mouse3DManager_obj,queueDispatch,(void))

void Mouse3DManager_obj::reThrowEvent( ::openfl::events::MouseEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_7db57d83199a017b_247_reThrowEvent)
HXLINE( 248)		bool _hx_tmp;
HXDLIN( 248)		if (::hx::IsNotNull( this->_activeView )) {
HXLINE( 248)			if (::hx::IsNotNull( this->_activeView )) {
HXLINE( 248)				_hx_tmp = !(this->_activeView->get_shareContext());
            			}
            			else {
HXLINE( 248)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE( 248)			_hx_tmp = true;
            		}
HXDLIN( 248)		if (_hx_tmp) {
HXLINE( 249)			return;
            		}
HXLINE( 251)		 ::Dynamic keys = ::away3d::core::managers::Mouse3DManager_obj::_view3Ds->keys();
HXLINE( 252)		{
HXLINE( 252)			 ::Dynamic v = keys;
HXDLIN( 252)			while(( (bool)(v->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 252)				 ::away3d::containers::View3D v1 = ( ( ::away3d::containers::View3D)(v->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 253)				bool _hx_tmp;
HXDLIN( 253)				if (::hx::IsInstanceNotEq( v1,this->_activeView )) {
HXLINE( 253)					 ::Dynamic _hx_tmp1 = ::away3d::core::managers::Mouse3DManager_obj::_view3Ds->get(v1);
HXDLIN( 253)					_hx_tmp = ::hx::IsEq( _hx_tmp1,(::away3d::core::managers::Mouse3DManager_obj::_view3Ds->get_int(this->_activeView) - 1) );
            				}
            				else {
HXLINE( 253)					_hx_tmp = false;
            				}
HXDLIN( 253)				if (_hx_tmp) {
HXLINE( 254)					if ((event->bubbles == true)) {
HXLINE( 255)						v1->dispatchEvent( ::openfl::events::MouseEvent_obj::__alloc( HX_CTX ,event->type,false,event->cancelable,event->localX,event->localY,event->relatedObject,event->ctrlKey,event->altKey,event->shiftKey,event->buttonDown,event->delta,event->commandKey,event->clickCount));
            					}
            					else {
HXLINE( 256)						v1->dispatchEvent(event);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Mouse3DManager_obj,reThrowEvent,(void))

bool Mouse3DManager_obj::hasKey( ::away3d::containers::View3D view){
            	HX_STACKFRAME(&_hx_pos_7db57d83199a017b_263_hasKey)
HXDLIN( 263)		return ::away3d::core::managers::Mouse3DManager_obj::_view3Ds->exists(view);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Mouse3DManager_obj,hasKey,return )

void Mouse3DManager_obj::traverseDisplayObjects( ::openfl::display::DisplayObjectContainer container){
            	HX_STACKFRAME(&_hx_pos_7db57d83199a017b_267_traverseDisplayObjects)
HXLINE( 268)		int childCount = container->get_numChildren();
HXLINE( 269)		int c = 0;
HXLINE( 270)		 ::openfl::display::DisplayObject child;
HXLINE( 271)		{
HXLINE( 271)			int _g = 0;
HXDLIN( 271)			int _g1 = childCount;
HXDLIN( 271)			while((_g < _g1)){
HXLINE( 271)				_g = (_g + 1);
HXDLIN( 271)				int c = (_g - 1);
HXLINE( 272)				child = container->getChildAt(c);
HXLINE( 273)				bool _hx_tmp;
HXDLIN( 273)				if (::Std_obj::isOfType(child,( ( ::Dynamic)(::hx::ClassOf< ::away3d::containers::View3D >()) ))) {
HXLINE( 273)					_hx_tmp = ::away3d::core::managers::Mouse3DManager_obj::_view3Ds->exists(( ( ::away3d::containers::View3D)(child) ));
            				}
            				else {
HXLINE( 273)					_hx_tmp = false;
            				}
HXDLIN( 273)				if (_hx_tmp) {
HXLINE( 274)					{
HXLINE( 274)						int v = this->_childDepth;
HXDLIN( 274)						::away3d::core::managers::Mouse3DManager_obj::_view3Ds->set(( ( ::away3d::containers::View3D)(child) ),v);
            					}
HXLINE( 275)					::away3d::core::managers::Mouse3DManager_obj::_view3DLookup->set(this->_childDepth,( ( ::away3d::containers::View3D)(child) )).StaticCast<  ::away3d::containers::View3D >();
HXLINE( 276)					this->_childDepth++;
            				}
HXLINE( 278)				if (::Std_obj::isOfType(child,( ( ::Dynamic)(::hx::ClassOf< ::openfl::display::DisplayObjectContainer >()) ))) {
HXLINE( 279)					this->traverseDisplayObjects(::hx::TCast<  ::openfl::display::DisplayObjectContainer >::cast(child));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Mouse3DManager_obj,traverseDisplayObjects,(void))

void Mouse3DManager_obj::onMouseMove( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_7db57d83199a017b_288_onMouseMove)
HXLINE( 289)		if (::hx::IsNotNull( ::away3d::core::managers::Mouse3DManager_obj::_collidingObject )) {
HXLINE( 290)			this->queueDispatch(::away3d::core::managers::Mouse3DManager_obj::_mouseMove,(this->_mouseMoveEvent = event),null());
            		}
            		else {
HXLINE( 292)			this->reThrowEvent(event);
            		}
HXLINE( 293)		this->_updateDirty = true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Mouse3DManager_obj,onMouseMove,(void))

void Mouse3DManager_obj::onMouseOut( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_7db57d83199a017b_297_onMouseOut)
HXLINE( 298)		this->_activeView = null();
HXLINE( 299)		if (::hx::IsNotNull( ::away3d::core::managers::Mouse3DManager_obj::_collidingObject )) {
HXLINE( 300)			this->queueDispatch(::away3d::core::managers::Mouse3DManager_obj::_mouseOut,event,::away3d::core::managers::Mouse3DManager_obj::_collidingObject);
            		}
HXLINE( 301)		this->_updateDirty = true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Mouse3DManager_obj,onMouseOut,(void))

void Mouse3DManager_obj::onMouseOver( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_7db57d83199a017b_305_onMouseOver)
HXLINE( 306)		this->_activeView = ::hx::TCast<  ::away3d::containers::View3D >::cast(event->currentTarget);
HXLINE( 307)		bool _hx_tmp;
HXDLIN( 307)		if (::hx::IsNotNull( ::away3d::core::managers::Mouse3DManager_obj::_collidingObject )) {
HXLINE( 307)			_hx_tmp = ::hx::IsInstanceNotEq( ::away3d::core::managers::Mouse3DManager_obj::_previousCollidingObject,::away3d::core::managers::Mouse3DManager_obj::_collidingObject );
            		}
            		else {
HXLINE( 307)			_hx_tmp = false;
            		}
HXDLIN( 307)		if (_hx_tmp) {
HXLINE( 308)			this->queueDispatch(::away3d::core::managers::Mouse3DManager_obj::_mouseOver,event,::away3d::core::managers::Mouse3DManager_obj::_collidingObject);
            		}
            		else {
HXLINE( 310)			this->reThrowEvent(event);
            		}
HXLINE( 311)		this->_updateDirty = true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Mouse3DManager_obj,onMouseOver,(void))

void Mouse3DManager_obj::onClick( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_7db57d83199a017b_315_onClick)
HXLINE( 316)		if (::hx::IsNotNull( ::away3d::core::managers::Mouse3DManager_obj::_collidingObject )) {
HXLINE( 317)			this->queueDispatch(::away3d::core::managers::Mouse3DManager_obj::_mouseClick,event,null());
            		}
            		else {
HXLINE( 319)			this->reThrowEvent(event);
            		}
HXLINE( 320)		this->_updateDirty = true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Mouse3DManager_obj,onClick,(void))

void Mouse3DManager_obj::onDoubleClick( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_7db57d83199a017b_324_onDoubleClick)
HXLINE( 325)		if (::hx::IsNotNull( ::away3d::core::managers::Mouse3DManager_obj::_collidingObject )) {
HXLINE( 326)			this->queueDispatch(::away3d::core::managers::Mouse3DManager_obj::_mouseDoubleClick,event,null());
            		}
            		else {
HXLINE( 328)			this->reThrowEvent(event);
            		}
HXLINE( 329)		this->_updateDirty = true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Mouse3DManager_obj,onDoubleClick,(void))

void Mouse3DManager_obj::onMouseDown( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_7db57d83199a017b_333_onMouseDown)
HXLINE( 334)		this->_activeView = ::hx::TCast<  ::away3d::containers::View3D >::cast(event->currentTarget);
HXLINE( 335)		this->updateCollider(this->_activeView);
HXLINE( 336)		if (::hx::IsNotNull( ::away3d::core::managers::Mouse3DManager_obj::_collidingObject )) {
HXLINE( 337)			this->queueDispatch(::away3d::core::managers::Mouse3DManager_obj::_mouseDown,event,null());
HXLINE( 338)			::away3d::core::managers::Mouse3DManager_obj::_previousCollidingObject = ::away3d::core::managers::Mouse3DManager_obj::_collidingObject;
            		}
            		else {
HXLINE( 340)			this->reThrowEvent(event);
            		}
HXLINE( 341)		this->_updateDirty = true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Mouse3DManager_obj,onMouseDown,(void))

void Mouse3DManager_obj::onMouseUp( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_7db57d83199a017b_345_onMouseUp)
HXLINE( 346)		if (::hx::IsNotNull( ::away3d::core::managers::Mouse3DManager_obj::_collidingObject )) {
HXLINE( 347)			this->queueDispatch(::away3d::core::managers::Mouse3DManager_obj::_mouseUp,event,null());
HXLINE( 348)			::away3d::core::managers::Mouse3DManager_obj::_previousCollidingObject = ::away3d::core::managers::Mouse3DManager_obj::_collidingObject;
            		}
            		else {
HXLINE( 350)			this->reThrowEvent(event);
            		}
HXLINE( 351)		this->_updateDirty = true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Mouse3DManager_obj,onMouseUp,(void))

void Mouse3DManager_obj::onMouseWheel( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_7db57d83199a017b_355_onMouseWheel)
HXLINE( 356)		if (::hx::IsNotNull( ::away3d::core::managers::Mouse3DManager_obj::_collidingObject )) {
HXLINE( 357)			this->queueDispatch(::away3d::core::managers::Mouse3DManager_obj::_mouseWheel,event,null());
            		}
            		else {
HXLINE( 359)			this->reThrowEvent(event);
            		}
HXLINE( 360)		this->_updateDirty = true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Mouse3DManager_obj,onMouseWheel,(void))

bool Mouse3DManager_obj::get_forceMouseMove(){
            	HX_STACKFRAME(&_hx_pos_7db57d83199a017b_369_get_forceMouseMove)
HXDLIN( 369)		return this->_forceMouseMove;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Mouse3DManager_obj,get_forceMouseMove,return )

bool Mouse3DManager_obj::set_forceMouseMove(bool value){
            	HX_STACKFRAME(&_hx_pos_7db57d83199a017b_373_set_forceMouseMove)
HXLINE( 374)		this->_forceMouseMove = value;
HXLINE( 375)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Mouse3DManager_obj,set_forceMouseMove,return )

::Dynamic Mouse3DManager_obj::get_mousePicker(){
            	HX_STACKFRAME(&_hx_pos_7db57d83199a017b_380_get_mousePicker)
HXDLIN( 380)		return this->_mousePicker;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Mouse3DManager_obj,get_mousePicker,return )

::Dynamic Mouse3DManager_obj::set_mousePicker(::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_7db57d83199a017b_384_set_mousePicker)
HXLINE( 385)		this->_mousePicker = value;
HXLINE( 386)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Mouse3DManager_obj,set_mousePicker,return )

 ::haxe::ds::ObjectMap Mouse3DManager_obj::_view3Ds;

 ::openfl::_Vector::ObjectVector Mouse3DManager_obj::_view3DLookup;

int Mouse3DManager_obj::_viewCount;

 ::away3d::core::pick::PickingCollisionVO Mouse3DManager_obj::_collidingObject;

 ::away3d::core::pick::PickingCollisionVO Mouse3DManager_obj::_previousCollidingObject;

 ::openfl::_Vector::ObjectVector Mouse3DManager_obj::_collidingViewObjects;

 ::openfl::_Vector::ObjectVector Mouse3DManager_obj::_queuedEvents;

 ::away3d::events::MouseEvent3D Mouse3DManager_obj::_mouseUp;

 ::away3d::events::MouseEvent3D Mouse3DManager_obj::_mouseClick;

 ::away3d::events::MouseEvent3D Mouse3DManager_obj::_mouseOut;

 ::away3d::events::MouseEvent3D Mouse3DManager_obj::_mouseDown;

 ::away3d::events::MouseEvent3D Mouse3DManager_obj::_mouseMove;

 ::away3d::events::MouseEvent3D Mouse3DManager_obj::_mouseOver;

 ::away3d::events::MouseEvent3D Mouse3DManager_obj::_mouseWheel;

 ::away3d::events::MouseEvent3D Mouse3DManager_obj::_mouseDoubleClick;

int Mouse3DManager_obj::_previousCollidingView;

int Mouse3DManager_obj::_collidingView;


::hx::ObjectPtr< Mouse3DManager_obj > Mouse3DManager_obj::__new() {
	::hx::ObjectPtr< Mouse3DManager_obj > __this = new Mouse3DManager_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Mouse3DManager_obj > Mouse3DManager_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Mouse3DManager_obj *__this = (Mouse3DManager_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Mouse3DManager_obj), true, "away3d.core.managers.Mouse3DManager"));
	*(void **)__this = Mouse3DManager_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Mouse3DManager_obj::Mouse3DManager_obj()
{
}

void Mouse3DManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Mouse3DManager);
	HX_MARK_MEMBER_NAME(_activeView,"_activeView");
	HX_MARK_MEMBER_NAME(_updateDirty,"_updateDirty");
	HX_MARK_MEMBER_NAME(_nullVector,"_nullVector");
	HX_MARK_MEMBER_NAME(_mouseMoveEvent,"_mouseMoveEvent");
	HX_MARK_MEMBER_NAME(_forceMouseMove,"_forceMouseMove");
	HX_MARK_MEMBER_NAME(_mousePicker,"_mousePicker");
	HX_MARK_MEMBER_NAME(_childDepth,"_childDepth");
	HX_MARK_MEMBER_NAME(_collidingDownObject,"_collidingDownObject");
	HX_MARK_MEMBER_NAME(_collidingUpObject,"_collidingUpObject");
	HX_MARK_END_CLASS();
}

void Mouse3DManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_activeView,"_activeView");
	HX_VISIT_MEMBER_NAME(_updateDirty,"_updateDirty");
	HX_VISIT_MEMBER_NAME(_nullVector,"_nullVector");
	HX_VISIT_MEMBER_NAME(_mouseMoveEvent,"_mouseMoveEvent");
	HX_VISIT_MEMBER_NAME(_forceMouseMove,"_forceMouseMove");
	HX_VISIT_MEMBER_NAME(_mousePicker,"_mousePicker");
	HX_VISIT_MEMBER_NAME(_childDepth,"_childDepth");
	HX_VISIT_MEMBER_NAME(_collidingDownObject,"_collidingDownObject");
	HX_VISIT_MEMBER_NAME(_collidingUpObject,"_collidingUpObject");
}

::hx::Val Mouse3DManager_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"hasKey") ) { return ::hx::Val( hasKey_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		if (HX_FIELD_EQ(inName,"onClick") ) { return ::hx::Val( onClick_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return ::hx::Val( onMouseUp_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onMouseOut") ) { return ::hx::Val( onMouseOut_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mousePicker") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_mousePicker() ); }
		if (HX_FIELD_EQ(inName,"_activeView") ) { return ::hx::Val( _activeView ); }
		if (HX_FIELD_EQ(inName,"_nullVector") ) { return ::hx::Val( _nullVector ); }
		if (HX_FIELD_EQ(inName,"_childDepth") ) { return ::hx::Val( _childDepth ); }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { return ::hx::Val( onMouseMove_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMouseOver") ) { return ::hx::Val( onMouseOver_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return ::hx::Val( onMouseDown_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_updateDirty") ) { return ::hx::Val( _updateDirty ); }
		if (HX_FIELD_EQ(inName,"_mousePicker") ) { return ::hx::Val( _mousePicker ); }
		if (HX_FIELD_EQ(inName,"addViewLayer") ) { return ::hx::Val( addViewLayer_dyn() ); }
		if (HX_FIELD_EQ(inName,"reThrowEvent") ) { return ::hx::Val( reThrowEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return ::hx::Val( onMouseWheel_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"queueDispatch") ) { return ::hx::Val( queueDispatch_dyn() ); }
		if (HX_FIELD_EQ(inName,"onDoubleClick") ) { return ::hx::Val( onDoubleClick_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"forceMouseMove") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_forceMouseMove() ); }
		if (HX_FIELD_EQ(inName,"updateCollider") ) { return ::hx::Val( updateCollider_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_mouseMoveEvent") ) { return ::hx::Val( _mouseMoveEvent ); }
		if (HX_FIELD_EQ(inName,"_forceMouseMove") ) { return ::hx::Val( _forceMouseMove ); }
		if (HX_FIELD_EQ(inName,"fireMouseEvents") ) { return ::hx::Val( fireMouseEvents_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_mousePicker") ) { return ::hx::Val( get_mousePicker_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_mousePicker") ) { return ::hx::Val( set_mousePicker_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_collidingUpObject") ) { return ::hx::Val( _collidingUpObject ); }
		if (HX_FIELD_EQ(inName,"get_forceMouseMove") ) { return ::hx::Val( get_forceMouseMove_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_forceMouseMove") ) { return ::hx::Val( set_forceMouseMove_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_collidingDownObject") ) { return ::hx::Val( _collidingDownObject ); }
		if (HX_FIELD_EQ(inName,"enableMouseListeners") ) { return ::hx::Val( enableMouseListeners_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"disableMouseListeners") ) { return ::hx::Val( disableMouseListeners_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"traverseDisplayObjects") ) { return ::hx::Val( traverseDisplayObjects_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Mouse3DManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_view3Ds") ) { outValue = ( _view3Ds ); return true; }
		if (HX_FIELD_EQ(inName,"_mouseUp") ) { outValue = ( _mouseUp ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_mouseOut") ) { outValue = ( _mouseOut ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_viewCount") ) { outValue = ( _viewCount ); return true; }
		if (HX_FIELD_EQ(inName,"_mouseDown") ) { outValue = ( _mouseDown ); return true; }
		if (HX_FIELD_EQ(inName,"_mouseMove") ) { outValue = ( _mouseMove ); return true; }
		if (HX_FIELD_EQ(inName,"_mouseOver") ) { outValue = ( _mouseOver ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_mouseClick") ) { outValue = ( _mouseClick ); return true; }
		if (HX_FIELD_EQ(inName,"_mouseWheel") ) { outValue = ( _mouseWheel ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_view3DLookup") ) { outValue = ( _view3DLookup ); return true; }
		if (HX_FIELD_EQ(inName,"_queuedEvents") ) { outValue = ( _queuedEvents ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_collidingView") ) { outValue = ( _collidingView ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_collidingObject") ) { outValue = ( _collidingObject ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_mouseDoubleClick") ) { outValue = ( _mouseDoubleClick ); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_collidingViewObjects") ) { outValue = ( _collidingViewObjects ); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_previousCollidingView") ) { outValue = ( _previousCollidingView ); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_previousCollidingObject") ) { outValue = ( _previousCollidingObject ); return true; }
	}
	return false;
}

::hx::Val Mouse3DManager_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"mousePicker") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_mousePicker(inValue.Cast< ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"_activeView") ) { _activeView=inValue.Cast<  ::away3d::containers::View3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_nullVector") ) { _nullVector=inValue.Cast<  ::openfl::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_childDepth") ) { _childDepth=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_updateDirty") ) { _updateDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mousePicker") ) { _mousePicker=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"forceMouseMove") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_forceMouseMove(inValue.Cast< bool >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_mouseMoveEvent") ) { _mouseMoveEvent=inValue.Cast<  ::openfl::events::MouseEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_forceMouseMove") ) { _forceMouseMove=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_collidingUpObject") ) { _collidingUpObject=inValue.Cast<  ::away3d::core::pick::PickingCollisionVO >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_collidingDownObject") ) { _collidingDownObject=inValue.Cast<  ::away3d::core::pick::PickingCollisionVO >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Mouse3DManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_view3Ds") ) { _view3Ds=ioValue.Cast<  ::haxe::ds::ObjectMap >(); return true; }
		if (HX_FIELD_EQ(inName,"_mouseUp") ) { _mouseUp=ioValue.Cast<  ::away3d::events::MouseEvent3D >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_mouseOut") ) { _mouseOut=ioValue.Cast<  ::away3d::events::MouseEvent3D >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_viewCount") ) { _viewCount=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"_mouseDown") ) { _mouseDown=ioValue.Cast<  ::away3d::events::MouseEvent3D >(); return true; }
		if (HX_FIELD_EQ(inName,"_mouseMove") ) { _mouseMove=ioValue.Cast<  ::away3d::events::MouseEvent3D >(); return true; }
		if (HX_FIELD_EQ(inName,"_mouseOver") ) { _mouseOver=ioValue.Cast<  ::away3d::events::MouseEvent3D >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_mouseClick") ) { _mouseClick=ioValue.Cast<  ::away3d::events::MouseEvent3D >(); return true; }
		if (HX_FIELD_EQ(inName,"_mouseWheel") ) { _mouseWheel=ioValue.Cast<  ::away3d::events::MouseEvent3D >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_view3DLookup") ) { _view3DLookup=ioValue.Cast<  ::openfl::_Vector::ObjectVector >(); return true; }
		if (HX_FIELD_EQ(inName,"_queuedEvents") ) { _queuedEvents=ioValue.Cast<  ::openfl::_Vector::ObjectVector >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_collidingView") ) { _collidingView=ioValue.Cast< int >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_collidingObject") ) { _collidingObject=ioValue.Cast<  ::away3d::core::pick::PickingCollisionVO >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_mouseDoubleClick") ) { _mouseDoubleClick=ioValue.Cast<  ::away3d::events::MouseEvent3D >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_collidingViewObjects") ) { _collidingViewObjects=ioValue.Cast<  ::openfl::_Vector::ObjectVector >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_previousCollidingView") ) { _previousCollidingView=ioValue.Cast< int >(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_previousCollidingObject") ) { _previousCollidingObject=ioValue.Cast<  ::away3d::core::pick::PickingCollisionVO >(); return true; }
	}
	return false;
}

void Mouse3DManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("forceMouseMove",6b,b4,b1,60));
	outFields->push(HX_("mousePicker",93,2f,55,74));
	outFields->push(HX_("_activeView",6a,c8,03,ca));
	outFields->push(HX_("_updateDirty",4a,67,72,25));
	outFields->push(HX_("_nullVector",c9,af,26,53));
	outFields->push(HX_("_mouseMoveEvent",03,3d,ca,0e));
	outFields->push(HX_("_forceMouseMove",0a,fd,11,aa));
	outFields->push(HX_("_mousePicker",94,dd,5e,da));
	outFields->push(HX_("_childDepth",e6,2e,2f,48));
	outFields->push(HX_("_collidingDownObject",dd,a7,79,59));
	outFields->push(HX_("_collidingUpObject",96,17,95,ee));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Mouse3DManager_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::away3d::containers::View3D */ ,(int)offsetof(Mouse3DManager_obj,_activeView),HX_("_activeView",6a,c8,03,ca)},
	{::hx::fsBool,(int)offsetof(Mouse3DManager_obj,_updateDirty),HX_("_updateDirty",4a,67,72,25)},
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(int)offsetof(Mouse3DManager_obj,_nullVector),HX_("_nullVector",c9,af,26,53)},
	{::hx::fsObject /*  ::openfl::events::MouseEvent */ ,(int)offsetof(Mouse3DManager_obj,_mouseMoveEvent),HX_("_mouseMoveEvent",03,3d,ca,0e)},
	{::hx::fsBool,(int)offsetof(Mouse3DManager_obj,_forceMouseMove),HX_("_forceMouseMove",0a,fd,11,aa)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(Mouse3DManager_obj,_mousePicker),HX_("_mousePicker",94,dd,5e,da)},
	{::hx::fsInt,(int)offsetof(Mouse3DManager_obj,_childDepth),HX_("_childDepth",e6,2e,2f,48)},
	{::hx::fsObject /*  ::away3d::core::pick::PickingCollisionVO */ ,(int)offsetof(Mouse3DManager_obj,_collidingDownObject),HX_("_collidingDownObject",dd,a7,79,59)},
	{::hx::fsObject /*  ::away3d::core::pick::PickingCollisionVO */ ,(int)offsetof(Mouse3DManager_obj,_collidingUpObject),HX_("_collidingUpObject",96,17,95,ee)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Mouse3DManager_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(void *) &Mouse3DManager_obj::_view3Ds,HX_("_view3Ds",de,e2,5d,d6)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(void *) &Mouse3DManager_obj::_view3DLookup,HX_("_view3DLookup",4f,90,88,fe)},
	{::hx::fsInt,(void *) &Mouse3DManager_obj::_viewCount,HX_("_viewCount",eb,2f,9a,e6)},
	{::hx::fsObject /*  ::away3d::core::pick::PickingCollisionVO */ ,(void *) &Mouse3DManager_obj::_collidingObject,HX_("_collidingObject",db,07,45,31)},
	{::hx::fsObject /*  ::away3d::core::pick::PickingCollisionVO */ ,(void *) &Mouse3DManager_obj::_previousCollidingObject,HX_("_previousCollidingObject",64,92,64,3d)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(void *) &Mouse3DManager_obj::_collidingViewObjects,HX_("_collidingViewObjects",53,96,aa,ac)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(void *) &Mouse3DManager_obj::_queuedEvents,HX_("_queuedEvents",0b,70,93,ad)},
	{::hx::fsObject /*  ::away3d::events::MouseEvent3D */ ,(void *) &Mouse3DManager_obj::_mouseUp,HX_("_mouseUp",61,4d,2b,fa)},
	{::hx::fsObject /*  ::away3d::events::MouseEvent3D */ ,(void *) &Mouse3DManager_obj::_mouseClick,HX_("_mouseClick",02,3d,b5,38)},
	{::hx::fsObject /*  ::away3d::events::MouseEvent3D */ ,(void *) &Mouse3DManager_obj::_mouseOut,HX_("_mouseOut",c8,de,b3,eb)},
	{::hx::fsObject /*  ::away3d::events::MouseEvent3D */ ,(void *) &Mouse3DManager_obj::_mouseDown,HX_("_mouseDown",e8,2c,65,4a)},
	{::hx::fsObject /*  ::away3d::events::MouseEvent3D */ ,(void *) &Mouse3DManager_obj::_mouseMove,HX_("_mouseMove",97,17,58,50)},
	{::hx::fsObject /*  ::away3d::events::MouseEvent3D */ ,(void *) &Mouse3DManager_obj::_mouseOver,HX_("_mouseOver",da,c5,af,51)},
	{::hx::fsObject /*  ::away3d::events::MouseEvent3D */ ,(void *) &Mouse3DManager_obj::_mouseWheel,HX_("_mouseWheel",55,f5,10,ba)},
	{::hx::fsObject /*  ::away3d::events::MouseEvent3D */ ,(void *) &Mouse3DManager_obj::_mouseDoubleClick,HX_("_mouseDoubleClick",b1,0b,f5,f1)},
	{::hx::fsInt,(void *) &Mouse3DManager_obj::_previousCollidingView,HX_("_previousCollidingView",ca,a2,2b,72)},
	{::hx::fsInt,(void *) &Mouse3DManager_obj::_collidingView,HX_("_collidingView",81,fc,b8,a4)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Mouse3DManager_obj_sMemberFields[] = {
	HX_("_activeView",6a,c8,03,ca),
	HX_("_updateDirty",4a,67,72,25),
	HX_("_nullVector",c9,af,26,53),
	HX_("_mouseMoveEvent",03,3d,ca,0e),
	HX_("_forceMouseMove",0a,fd,11,aa),
	HX_("_mousePicker",94,dd,5e,da),
	HX_("_childDepth",e6,2e,2f,48),
	HX_("_collidingDownObject",dd,a7,79,59),
	HX_("_collidingUpObject",96,17,95,ee),
	HX_("updateCollider",5d,d2,ff,fe),
	HX_("fireMouseEvents",08,17,bc,a5),
	HX_("addViewLayer",cb,12,a9,af),
	HX_("enableMouseListeners",7d,44,e1,a9),
	HX_("disableMouseListeners",a2,46,a9,c3),
	HX_("dispose",9f,80,4c,bb),
	HX_("queueDispatch",6b,91,91,c1),
	HX_("reThrowEvent",a7,96,30,07),
	HX_("hasKey",65,96,38,bb),
	HX_("traverseDisplayObjects",04,f8,86,a7),
	HX_("onMouseMove",b7,7e,f8,16),
	HX_("onMouseOut",a8,bb,d4,81),
	HX_("onMouseOver",fa,2c,50,18),
	HX_("onClick",a9,1a,9c,de),
	HX_("onDoubleClick",98,20,60,30),
	HX_("onMouseDown",08,94,05,11),
	HX_("onMouseUp",81,ac,1d,98),
	HX_("onMouseWheel",35,ca,ca,bf),
	HX_("get_forceMouseMove",34,95,4b,fc),
	HX_("set_forceMouseMove",a8,c7,fa,d8),
	HX_("get_mousePicker",2a,e7,36,35),
	HX_("set_mousePicker",36,64,02,31),
	::String(null()) };

static void Mouse3DManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mouse3DManager_obj::_view3Ds,"_view3Ds");
	HX_MARK_MEMBER_NAME(Mouse3DManager_obj::_view3DLookup,"_view3DLookup");
	HX_MARK_MEMBER_NAME(Mouse3DManager_obj::_viewCount,"_viewCount");
	HX_MARK_MEMBER_NAME(Mouse3DManager_obj::_collidingObject,"_collidingObject");
	HX_MARK_MEMBER_NAME(Mouse3DManager_obj::_previousCollidingObject,"_previousCollidingObject");
	HX_MARK_MEMBER_NAME(Mouse3DManager_obj::_collidingViewObjects,"_collidingViewObjects");
	HX_MARK_MEMBER_NAME(Mouse3DManager_obj::_queuedEvents,"_queuedEvents");
	HX_MARK_MEMBER_NAME(Mouse3DManager_obj::_mouseUp,"_mouseUp");
	HX_MARK_MEMBER_NAME(Mouse3DManager_obj::_mouseClick,"_mouseClick");
	HX_MARK_MEMBER_NAME(Mouse3DManager_obj::_mouseOut,"_mouseOut");
	HX_MARK_MEMBER_NAME(Mouse3DManager_obj::_mouseDown,"_mouseDown");
	HX_MARK_MEMBER_NAME(Mouse3DManager_obj::_mouseMove,"_mouseMove");
	HX_MARK_MEMBER_NAME(Mouse3DManager_obj::_mouseOver,"_mouseOver");
	HX_MARK_MEMBER_NAME(Mouse3DManager_obj::_mouseWheel,"_mouseWheel");
	HX_MARK_MEMBER_NAME(Mouse3DManager_obj::_mouseDoubleClick,"_mouseDoubleClick");
	HX_MARK_MEMBER_NAME(Mouse3DManager_obj::_previousCollidingView,"_previousCollidingView");
	HX_MARK_MEMBER_NAME(Mouse3DManager_obj::_collidingView,"_collidingView");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Mouse3DManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mouse3DManager_obj::_view3Ds,"_view3Ds");
	HX_VISIT_MEMBER_NAME(Mouse3DManager_obj::_view3DLookup,"_view3DLookup");
	HX_VISIT_MEMBER_NAME(Mouse3DManager_obj::_viewCount,"_viewCount");
	HX_VISIT_MEMBER_NAME(Mouse3DManager_obj::_collidingObject,"_collidingObject");
	HX_VISIT_MEMBER_NAME(Mouse3DManager_obj::_previousCollidingObject,"_previousCollidingObject");
	HX_VISIT_MEMBER_NAME(Mouse3DManager_obj::_collidingViewObjects,"_collidingViewObjects");
	HX_VISIT_MEMBER_NAME(Mouse3DManager_obj::_queuedEvents,"_queuedEvents");
	HX_VISIT_MEMBER_NAME(Mouse3DManager_obj::_mouseUp,"_mouseUp");
	HX_VISIT_MEMBER_NAME(Mouse3DManager_obj::_mouseClick,"_mouseClick");
	HX_VISIT_MEMBER_NAME(Mouse3DManager_obj::_mouseOut,"_mouseOut");
	HX_VISIT_MEMBER_NAME(Mouse3DManager_obj::_mouseDown,"_mouseDown");
	HX_VISIT_MEMBER_NAME(Mouse3DManager_obj::_mouseMove,"_mouseMove");
	HX_VISIT_MEMBER_NAME(Mouse3DManager_obj::_mouseOver,"_mouseOver");
	HX_VISIT_MEMBER_NAME(Mouse3DManager_obj::_mouseWheel,"_mouseWheel");
	HX_VISIT_MEMBER_NAME(Mouse3DManager_obj::_mouseDoubleClick,"_mouseDoubleClick");
	HX_VISIT_MEMBER_NAME(Mouse3DManager_obj::_previousCollidingView,"_previousCollidingView");
	HX_VISIT_MEMBER_NAME(Mouse3DManager_obj::_collidingView,"_collidingView");
};

#endif

::hx::Class Mouse3DManager_obj::__mClass;

static ::String Mouse3DManager_obj_sStaticFields[] = {
	HX_("_view3Ds",de,e2,5d,d6),
	HX_("_view3DLookup",4f,90,88,fe),
	HX_("_viewCount",eb,2f,9a,e6),
	HX_("_collidingObject",db,07,45,31),
	HX_("_previousCollidingObject",64,92,64,3d),
	HX_("_collidingViewObjects",53,96,aa,ac),
	HX_("_queuedEvents",0b,70,93,ad),
	HX_("_mouseUp",61,4d,2b,fa),
	HX_("_mouseClick",02,3d,b5,38),
	HX_("_mouseOut",c8,de,b3,eb),
	HX_("_mouseDown",e8,2c,65,4a),
	HX_("_mouseMove",97,17,58,50),
	HX_("_mouseOver",da,c5,af,51),
	HX_("_mouseWheel",55,f5,10,ba),
	HX_("_mouseDoubleClick",b1,0b,f5,f1),
	HX_("_previousCollidingView",ca,a2,2b,72),
	HX_("_collidingView",81,fc,b8,a4),
	::String(null())
};

void Mouse3DManager_obj::__register()
{
	Mouse3DManager_obj _hx_dummy;
	Mouse3DManager_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.managers.Mouse3DManager",1f,11,cc,5f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Mouse3DManager_obj::__GetStatic;
	__mClass->mSetStaticField = &Mouse3DManager_obj::__SetStatic;
	__mClass->mMarkFunc = Mouse3DManager_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Mouse3DManager_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Mouse3DManager_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Mouse3DManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Mouse3DManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Mouse3DManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Mouse3DManager_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Mouse3DManager_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_7db57d83199a017b_29_boot)
HXDLIN(  29)		_viewCount = 0;
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::openfl::_Vector::ObjectVector _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_7db57d83199a017b_37_boot)
HXDLIN(  37)			int length = null();
HXDLIN(  37)			bool fixed = null();
HXDLIN(  37)			::Array< ::Dynamic> array = null();
HXDLIN(  37)			return  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_7db57d83199a017b_37_boot)
HXDLIN(  37)		_queuedEvents = ( ( ::openfl::_Vector::ObjectVector)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_7db57d83199a017b_41_boot)
HXDLIN(  41)		_mouseUp =  ::away3d::events::MouseEvent3D_obj::__alloc( HX_CTX ,HX_("mouseUp3d",b1,d8,ff,f9));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_7db57d83199a017b_42_boot)
HXDLIN(  42)		_mouseClick =  ::away3d::events::MouseEvent3D_obj::__alloc( HX_CTX ,HX_("click3d",19,4b,2c,fa));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_7db57d83199a017b_43_boot)
HXDLIN(  43)		_mouseOut =  ::away3d::events::MouseEvent3D_obj::__alloc( HX_CTX ,HX_("mouseOut3d",7a,80,f5,54));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_7db57d83199a017b_44_boot)
HXDLIN(  44)		_mouseDown =  ::away3d::events::MouseEvent3D_obj::__alloc( HX_CTX ,HX_("mouseDown3d",b8,b5,ae,29));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_7db57d83199a017b_45_boot)
HXDLIN(  45)		_mouseMove =  ::away3d::events::MouseEvent3D_obj::__alloc( HX_CTX ,HX_("mouseMove3d",27,ea,34,c2));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_7db57d83199a017b_46_boot)
HXDLIN(  46)		_mouseOver =  ::away3d::events::MouseEvent3D_obj::__alloc( HX_CTX ,HX_("mouseOver3d",2a,ef,86,8b));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_7db57d83199a017b_47_boot)
HXDLIN(  47)		_mouseWheel =  ::away3d::events::MouseEvent3D_obj::__alloc( HX_CTX ,HX_("mouseWheel3d",87,4e,ca,35));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_7db57d83199a017b_48_boot)
HXDLIN(  48)		_mouseDoubleClick =  ::away3d::events::MouseEvent3D_obj::__alloc( HX_CTX ,HX_("doubleClick3d",08,3c,97,99));
            	}
{
            	HX_STACKFRAME(&_hx_pos_7db57d83199a017b_52_boot)
HXDLIN(  52)		_previousCollidingView = -1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7db57d83199a017b_53_boot)
HXDLIN(  53)		_collidingView = -1;
            	}
}

} // end namespace away3d
} // end namespace core
} // end namespace managers
