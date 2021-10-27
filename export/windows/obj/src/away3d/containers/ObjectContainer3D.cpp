#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_containers_Scene3D
#include <away3d/containers/Scene3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_partition_Partition3D
#include <away3d/core/partition/Partition3D.h>
#endif
#ifndef INCLUDED_away3d_events_Object3DEvent
#include <away3d/events/Object3DEvent.h>
#endif
#ifndef INCLUDED_away3d_events_Scene3DEvent
#include <away3d/events/Scene3DEvent.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
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
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
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
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_22_new,"away3d.containers.ObjectContainer3D","new",0x90cf4838,"away3d.containers.ObjectContainer3D.new","away3d/containers/ObjectContainer3D.hx",22,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_79_get_ignoreTransform,"away3d.containers.ObjectContainer3D","get_ignoreTransform",0xe75818e9,"away3d.containers.ObjectContainer3D.get_ignoreTransform","away3d/containers/ObjectContainer3D.hx",79,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_83_set_ignoreTransform,"away3d.containers.ObjectContainer3D","set_ignoreTransform",0x23f50bf5,"away3d.containers.ObjectContainer3D.set_ignoreTransform","away3d/containers/ObjectContainer3D.hx",83,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_102_get_implicitPartition,"away3d.containers.ObjectContainer3D","get_implicitPartition",0x3b99b4b4,"away3d.containers.ObjectContainer3D.get_implicitPartition","away3d/containers/ObjectContainer3D.hx",102,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_106_set_implicitPartition,"away3d.containers.ObjectContainer3D","set_implicitPartition",0x8fa282c0,"away3d.containers.ObjectContainer3D.set_implicitPartition","away3d/containers/ObjectContainer3D.hx",106,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_130_get_isVisible,"away3d.containers.ObjectContainer3D","get_isVisible",0xa0477f57,"away3d.containers.ObjectContainer3D.get_isVisible","away3d/containers/ObjectContainer3D.hx",130,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_135_setParent,"away3d.containers.ObjectContainer3D","setParent",0x7c306444,"away3d.containers.ObjectContainer3D.setParent","away3d/containers/ObjectContainer3D.hx",135,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_150_notifySceneTransformChange,"away3d.containers.ObjectContainer3D","notifySceneTransformChange",0xa73bd4a1,"away3d.containers.ObjectContainer3D.notifySceneTransformChange","away3d/containers/ObjectContainer3D.hx",150,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_172_notifySceneChange,"away3d.containers.ObjectContainer3D","notifySceneChange",0x1f0e716b,"away3d.containers.ObjectContainer3D.notifySceneChange","away3d/containers/ObjectContainer3D.hx",172,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_191_updateMouseChildren,"away3d.containers.ObjectContainer3D","updateMouseChildren",0xddc4b893,"away3d.containers.ObjectContainer3D.updateMouseChildren","away3d/containers/ObjectContainer3D.hx",191,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_209_get_mouseEnabled,"away3d.containers.ObjectContainer3D","get_mouseEnabled",0xb719c28d,"away3d.containers.ObjectContainer3D.get_mouseEnabled","away3d/containers/ObjectContainer3D.hx",209,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_213_set_mouseEnabled,"away3d.containers.ObjectContainer3D","set_mouseEnabled",0x0d5bb001,"away3d.containers.ObjectContainer3D.set_mouseEnabled","away3d/containers/ObjectContainer3D.hx",213,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_223_invalidateTransform,"away3d.containers.ObjectContainer3D","invalidateTransform",0x1f4b1449,"away3d.containers.ObjectContainer3D.invalidateTransform","away3d/containers/ObjectContainer3D.hx",223,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_233_invalidateSceneTransform,"away3d.containers.ObjectContainer3D","invalidateSceneTransform",0x82f1c283,"away3d.containers.ObjectContainer3D.invalidateSceneTransform","away3d/containers/ObjectContainer3D.hx",233,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_243_updateSceneTransform,"away3d.containers.ObjectContainer3D","updateSceneTransform",0x323f1791,"away3d.containers.ObjectContainer3D.updateSceneTransform","away3d/containers/ObjectContainer3D.hx",243,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_258_get_mouseChildren,"away3d.containers.ObjectContainer3D","get_mouseChildren",0x0327a5b3,"away3d.containers.ObjectContainer3D.get_mouseChildren","away3d/containers/ObjectContainer3D.hx",258,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_262_set_mouseChildren,"away3d.containers.ObjectContainer3D","set_mouseChildren",0x26957dbf,"away3d.containers.ObjectContainer3D.set_mouseChildren","away3d/containers/ObjectContainer3D.hx",262,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_273_get_visible,"away3d.containers.ObjectContainer3D","get_visible",0x6019e861,"away3d.containers.ObjectContainer3D.get_visible","away3d/containers/ObjectContainer3D.hx",273,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_277_set_visible,"away3d.containers.ObjectContainer3D","set_visible",0x6a86ef6d,"away3d.containers.ObjectContainer3D.set_visible","away3d/containers/ObjectContainer3D.hx",277,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_290_get_assetType,"away3d.containers.ObjectContainer3D","get_assetType",0xaad3ca79,"away3d.containers.ObjectContainer3D.get_assetType","away3d/containers/ObjectContainer3D.hx",290,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_297_get_scenePosition,"away3d.containers.ObjectContainer3D","get_scenePosition",0x1be6ef44,"away3d.containers.ObjectContainer3D.get_scenePosition","away3d/containers/ObjectContainer3D.hx",297,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_310_get_minX,"away3d.containers.ObjectContainer3D","get_minX",0x6ec22337,"away3d.containers.ObjectContainer3D.get_minX","away3d/containers/ObjectContainer3D.hx",310,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_330_get_minY,"away3d.containers.ObjectContainer3D","get_minY",0x6ec22338,"away3d.containers.ObjectContainer3D.get_minY","away3d/containers/ObjectContainer3D.hx",330,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_350_get_minZ,"away3d.containers.ObjectContainer3D","get_minZ",0x6ec22339,"away3d.containers.ObjectContainer3D.get_minZ","away3d/containers/ObjectContainer3D.hx",350,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_370_get_maxX,"away3d.containers.ObjectContainer3D","get_maxX",0x6ebc19e5,"away3d.containers.ObjectContainer3D.get_maxX","away3d/containers/ObjectContainer3D.hx",370,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_391_get_maxY,"away3d.containers.ObjectContainer3D","get_maxY",0x6ebc19e6,"away3d.containers.ObjectContainer3D.get_maxY","away3d/containers/ObjectContainer3D.hx",391,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_411_get_maxZ,"away3d.containers.ObjectContainer3D","get_maxZ",0x6ebc19e7,"away3d.containers.ObjectContainer3D.get_maxZ","away3d/containers/ObjectContainer3D.hx",411,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_433_get_partition,"away3d.containers.ObjectContainer3D","get_partition",0x96e42b99,"away3d.containers.ObjectContainer3D.get_partition","away3d/containers/ObjectContainer3D.hx",433,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_437_set_partition,"away3d.containers.ObjectContainer3D","set_partition",0xdbea0da5,"away3d.containers.ObjectContainer3D.set_partition","away3d/containers/ObjectContainer3D.hx",437,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_447_get_sceneTransform,"away3d.containers.ObjectContainer3D","get_sceneTransform",0xc36ba671,"away3d.containers.ObjectContainer3D.get_sceneTransform","away3d/containers/ObjectContainer3D.hx",447,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_459_get_scene,"away3d.containers.ObjectContainer3D","get_scene",0xeb861f7b,"away3d.containers.ObjectContainer3D.get_scene","away3d/containers/ObjectContainer3D.hx",459,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_463_set_scene,"away3d.containers.ObjectContainer3D","set_scene",0xced70b87,"away3d.containers.ObjectContainer3D.set_scene","away3d/containers/ObjectContainer3D.hx",463,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_498_get_inverseSceneTransform,"away3d.containers.ObjectContainer3D","get_inverseSceneTransform",0x83e2727f,"away3d.containers.ObjectContainer3D.get_inverseSceneTransform","away3d/containers/ObjectContainer3D.hx",498,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_513_get_parent,"away3d.containers.ObjectContainer3D","get_parent",0xd887281b,"away3d.containers.ObjectContainer3D.get_parent","away3d/containers/ObjectContainer3D.hx",513,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_526_contains,"away3d.containers.ObjectContainer3D","contains",0xd3267347,"away3d.containers.ObjectContainer3D.contains","away3d/containers/ObjectContainer3D.hx",526,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_536_addChild,"away3d.containers.ObjectContainer3D","addChild",0x65c1e8e3,"away3d.containers.ObjectContainer3D.addChild","away3d/containers/ObjectContainer3D.hx",536,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_564_addChildren,"away3d.containers.ObjectContainer3D","addChildren",0xd8c16058,"away3d.containers.ObjectContainer3D.addChildren","away3d/containers/ObjectContainer3D.hx",564,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_575_removeChild,"away3d.containers.ObjectContainer3D","removeChild",0x7ae89690,"away3d.containers.ObjectContainer3D.removeChild","away3d/containers/ObjectContainer3D.hx",575,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_593_removeChildAt,"away3d.containers.ObjectContainer3D","removeChildAt",0x772793a3,"away3d.containers.ObjectContainer3D.removeChildAt","away3d/containers/ObjectContainer3D.hx",593,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_600_removeChildInternal,"away3d.containers.ObjectContainer3D","removeChildInternal",0xc061c9ed,"away3d.containers.ObjectContainer3D.removeChildInternal","away3d/containers/ObjectContainer3D.hx",600,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_618_getChildAt,"away3d.containers.ObjectContainer3D","getChildAt",0xb08fbae1,"away3d.containers.ObjectContainer3D.getChildAt","away3d/containers/ObjectContainer3D.hx",618,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_626_get_numChildren,"away3d.containers.ObjectContainer3D","get_numChildren",0x4f1dfd14,"away3d.containers.ObjectContainer3D.get_numChildren","away3d/containers/ObjectContainer3D.hx",626,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_633_lookAt,"away3d.containers.ObjectContainer3D","lookAt",0x4744745a,"away3d.containers.ObjectContainer3D.lookAt","away3d/containers/ObjectContainer3D.hx",633,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_640_translateLocal,"away3d.containers.ObjectContainer3D","translateLocal",0x71878e65,"away3d.containers.ObjectContainer3D.translateLocal","away3d/containers/ObjectContainer3D.hx",640,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_651_dispose,"away3d.containers.ObjectContainer3D","dispose",0xb2dcc477,"away3d.containers.ObjectContainer3D.dispose","away3d/containers/ObjectContainer3D.hx",651,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_659_disposeWithChildren,"away3d.containers.ObjectContainer3D","disposeWithChildren",0xaaa2287c,"away3d.containers.ObjectContainer3D.disposeWithChildren","away3d/containers/ObjectContainer3D.hx",659,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_672_clone,"away3d.containers.ObjectContainer3D","clone",0x888e3135,"away3d.containers.ObjectContainer3D.clone","away3d/containers/ObjectContainer3D.hx",672,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_689_rotate,"away3d.containers.ObjectContainer3D","rotate",0xb0af4583,"away3d.containers.ObjectContainer3D.rotate","away3d/containers/ObjectContainer3D.hx",689,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_699_dispatchEvent,"away3d.containers.ObjectContainer3D","dispatchEvent",0xfe257cd8,"away3d.containers.ObjectContainer3D.dispatchEvent","away3d/containers/ObjectContainer3D.hx",699,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_715_updateImplicitVisibility,"away3d.containers.ObjectContainer3D","updateImplicitVisibility",0xdcb68ce8,"away3d.containers.ObjectContainer3D.updateImplicitVisibility","away3d/containers/ObjectContainer3D.hx",715,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_725_addEventListener,"away3d.containers.ObjectContainer3D","addEventListener",0x44088cf5,"away3d.containers.ObjectContainer3D.addEventListener","away3d/containers/ObjectContainer3D.hx",725,0x160aa3d8)
HX_LOCAL_STACK_FRAME(_hx_pos_5aeee1cc1a26596e_736_removeEventListener,"away3d.containers.ObjectContainer3D","removeEventListener",0xa0482fa2,"away3d.containers.ObjectContainer3D.removeEventListener","away3d/containers/ObjectContainer3D.hx",736,0x160aa3d8)
namespace away3d{
namespace containers{

void ObjectContainer3D_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_22_new)
HXLINE(  72)		this->_ignoreTransform = false;
HXLINE(  67)		this->_implicitVisibility = true;
HXLINE(  66)		this->_explicitVisibility = true;
HXLINE(  65)		this->_scenePositionDirty = true;
HXLINE(  64)		this->_scenePosition =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  63)		this->_inverseSceneTransformDirty = true;
HXLINE(  62)		this->_inverseSceneTransform =  ::openfl::geom::Matrix3D_obj::__alloc( HX_CTX ,null());
HXLINE(  60)		this->_mouseChildren = true;
HXLINE(  59)		int length = null();
HXDLIN(  59)		bool fixed = null();
HXDLIN(  59)		::Array< ::Dynamic> array = null();
HXDLIN(  59)		this->_children =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE(  52)		this->_sceneTransformDirty = true;
HXLINE(  51)		this->_sceneTransform =  ::openfl::geom::Matrix3D_obj::__alloc( HX_CTX ,null());
HXLINE( 521)		super::__construct();
            	}

Dynamic ObjectContainer3D_obj::__CreateEmpty() { return new ObjectContainer3D_obj; }

void *ObjectContainer3D_obj::_hx_vtable = 0;

Dynamic ObjectContainer3D_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ObjectContainer3D_obj > _hx_result = new ObjectContainer3D_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ObjectContainer3D_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x13fff02b) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x13fff02b;
		}
	} else {
		return inClassId==(int)0x1e6a8fa2 || inClassId==(int)0x37f46043;
	}
}

static ::openfl::events::IEventDispatcher_obj _hx_away3d_containers_ObjectContainer3D__hx_openfl_events_IEventDispatcher= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::away3d::containers::ObjectContainer3D_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::away3d::containers::ObjectContainer3D_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::away3d::containers::ObjectContainer3D_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::away3d::containers::ObjectContainer3D_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::away3d::containers::ObjectContainer3D_obj::willTrigger,
};

static ::away3d::library::assets::IAsset_obj _hx_away3d_containers_ObjectContainer3D__hx_away3d_library_assets_IAsset= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::away3d::containers::ObjectContainer3D_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::away3d::containers::ObjectContainer3D_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::away3d::containers::ObjectContainer3D_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::away3d::containers::ObjectContainer3D_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::away3d::containers::ObjectContainer3D_obj::willTrigger,
	( ::String (::hx::Object::*)())&::away3d::containers::ObjectContainer3D_obj::get_name,
	( ::String (::hx::Object::*)(::String))&::away3d::containers::ObjectContainer3D_obj::set_name,
	( ::String (::hx::Object::*)())&::away3d::containers::ObjectContainer3D_obj::get_id,
	( ::String (::hx::Object::*)(::String))&::away3d::containers::ObjectContainer3D_obj::set_id,
	( ::String (::hx::Object::*)())&::away3d::containers::ObjectContainer3D_obj::get_assetNamespace,
	( ::String (::hx::Object::*)())&::away3d::containers::ObjectContainer3D_obj::get_assetType,
	( ::cpp::VirtualArray (::hx::Object::*)())&::away3d::containers::ObjectContainer3D_obj::get_assetFullPath,
	( bool (::hx::Object::*)(::String,::String))&::away3d::containers::ObjectContainer3D_obj::assetPathEquals,
	( void (::hx::Object::*)(::String,::String, ::Dynamic))&::away3d::containers::ObjectContainer3D_obj::resetAssetPath,
	( void (::hx::Object::*)())&::away3d::containers::ObjectContainer3D_obj::dispose,
};

void *ObjectContainer3D_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x87530281: return &_hx_away3d_containers_ObjectContainer3D__hx_openfl_events_IEventDispatcher;
		case (int)0xa8241686: return &_hx_away3d_containers_ObjectContainer3D__hx_away3d_library_assets_IAsset;
	}
	return super::_hx_getInterface(inHash);
}

bool ObjectContainer3D_obj::get_ignoreTransform(){
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_79_get_ignoreTransform)
HXDLIN(  79)		return this->_ignoreTransform;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,get_ignoreTransform,return )

bool ObjectContainer3D_obj::set_ignoreTransform(bool value){
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_83_set_ignoreTransform)
HXLINE(  84)		this->_ignoreTransform = value;
HXLINE(  85)		this->_sceneTransformDirty = !(value);
HXLINE(  86)		this->_inverseSceneTransformDirty = !(value);
HXLINE(  87)		this->_scenePositionDirty = !(value);
HXLINE(  89)		if (!(value)) {
HXLINE(  90)			this->_sceneTransform->identity();
HXLINE(  91)			this->_scenePosition->setTo(( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
            		}
HXLINE(  93)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectContainer3D_obj,set_ignoreTransform,return )

 ::away3d::core::partition::Partition3D ObjectContainer3D_obj::get_implicitPartition(){
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_102_get_implicitPartition)
HXDLIN( 102)		return this->_implicitPartition;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,get_implicitPartition,return )

 ::away3d::core::partition::Partition3D ObjectContainer3D_obj::set_implicitPartition( ::away3d::core::partition::Partition3D value){
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_106_set_implicitPartition)
HXLINE( 107)		if (::hx::IsInstanceEq( value,this->_implicitPartition )) {
HXLINE( 108)			return value;
            		}
HXLINE( 110)		int i = 0;
HXLINE( 111)		int len = this->_children->get_length();
HXLINE( 112)		 ::away3d::containers::ObjectContainer3D child;
HXLINE( 114)		this->_implicitPartition = value;
HXLINE( 116)		while((i < len)){
HXLINE( 117)			i = (i + 1);
HXDLIN( 117)			child = this->_children->get((i - 1)).StaticCast<  ::away3d::containers::ObjectContainer3D >();
HXLINE( 120)			if (::hx::IsNull( child->_explicitPartition )) {
HXLINE( 121)				child->set_implicitPartition(value);
            			}
            		}
HXLINE( 124)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectContainer3D_obj,set_implicitPartition,return )

bool ObjectContainer3D_obj::get_isVisible(){
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_130_get_isVisible)
HXDLIN( 130)		if (this->_implicitVisibility) {
HXDLIN( 130)			return this->_explicitVisibility;
            		}
            		else {
HXDLIN( 130)			return false;
            		}
HXDLIN( 130)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,get_isVisible,return )

void ObjectContainer3D_obj::setParent( ::away3d::containers::ObjectContainer3D value){
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_135_setParent)
HXLINE( 136)		this->_parent = value;
HXLINE( 138)		this->updateMouseChildren();
HXLINE( 140)		if (::hx::IsNull( value )) {
HXLINE( 141)			this->set_scene(null());
HXLINE( 142)			return;
            		}
HXLINE( 145)		this->notifySceneTransformChange();
HXLINE( 146)		this->notifySceneChange();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectContainer3D_obj,setParent,(void))

void ObjectContainer3D_obj::notifySceneTransformChange(){
            	HX_GC_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_150_notifySceneTransformChange)
HXLINE( 151)		bool _hx_tmp;
HXDLIN( 151)		if (!(this->_sceneTransformDirty)) {
HXLINE( 151)			_hx_tmp = this->_ignoreTransform;
            		}
            		else {
HXLINE( 151)			_hx_tmp = true;
            		}
HXDLIN( 151)		if (_hx_tmp) {
HXLINE( 152)			return;
            		}
HXLINE( 154)		this->invalidateSceneTransform();
HXLINE( 156)		int i = 0;
HXLINE( 157)		int len = this->_children->get_length();
HXLINE( 160)		while((i < len)){
HXLINE( 161)			i = (i + 1);
HXDLIN( 161)			this->_children->get((i - 1)).StaticCast<  ::away3d::containers::ObjectContainer3D >()->notifySceneTransformChange();
            		}
HXLINE( 164)		if (this->_listenToSceneTransformChanged) {
HXLINE( 165)			if (::hx::IsNull( this->_sceneTransformChanged )) {
HXLINE( 166)				this->_sceneTransformChanged =  ::away3d::events::Object3DEvent_obj::__alloc( HX_CTX ,HX_("scenetransformChanged",34,a2,78,f4),::hx::ObjectPtr<OBJ_>(this));
            			}
HXLINE( 167)			this->dispatchEvent(this->_sceneTransformChanged);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,notifySceneTransformChange,(void))

void ObjectContainer3D_obj::notifySceneChange(){
            	HX_GC_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_172_notifySceneChange)
HXLINE( 173)		this->notifySceneTransformChange();
HXLINE( 175)		int i = 0;
HXLINE( 176)		int len = this->_children->get_length();
HXLINE( 179)		while((i < len)){
HXLINE( 180)			i = (i + 1);
HXDLIN( 180)			this->_children->get((i - 1)).StaticCast<  ::away3d::containers::ObjectContainer3D >()->notifySceneChange();
            		}
HXLINE( 182)		if (this->_listenToSceneChanged) {
HXLINE( 183)			if (::hx::IsNull( this->_scenechanged )) {
HXLINE( 184)				this->_scenechanged =  ::away3d::events::Object3DEvent_obj::__alloc( HX_CTX ,HX_("sceneChanged",08,01,23,0b),::hx::ObjectPtr<OBJ_>(this));
            			}
HXLINE( 186)			this->dispatchEvent(this->_scenechanged);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,notifySceneChange,(void))

void ObjectContainer3D_obj::updateMouseChildren(){
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_191_updateMouseChildren)
HXLINE( 192)		bool _hx_tmp;
HXDLIN( 192)		if (::hx::IsNotNull( this->_parent )) {
HXLINE( 192)			_hx_tmp = !(this->_parent->_isRoot);
            		}
            		else {
HXLINE( 192)			_hx_tmp = false;
            		}
HXDLIN( 192)		if (_hx_tmp) {
HXLINE( 194)			bool _hx_tmp;
HXDLIN( 194)			if (this->get_parent()->_ancestorsAllowMouseEnabled) {
HXLINE( 194)				_hx_tmp = this->_parent->get_mouseChildren();
            			}
            			else {
HXLINE( 194)				_hx_tmp = false;
            			}
HXDLIN( 194)			this->_ancestorsAllowMouseEnabled = _hx_tmp;
            		}
            		else {
HXLINE( 196)			this->_ancestorsAllowMouseEnabled = this->get_mouseChildren();
            		}
HXLINE( 199)		int len = this->_children->get_length();
HXLINE( 200)		{
HXLINE( 200)			int _g = 0;
HXDLIN( 200)			int _g1 = len;
HXDLIN( 200)			while((_g < _g1)){
HXLINE( 200)				_g = (_g + 1);
HXDLIN( 200)				int i = (_g - 1);
HXLINE( 201)				this->_children->get(i).StaticCast<  ::away3d::containers::ObjectContainer3D >()->updateMouseChildren();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,updateMouseChildren,(void))

bool ObjectContainer3D_obj::get_mouseEnabled(){
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_209_get_mouseEnabled)
HXDLIN( 209)		return this->_mouseEnabled;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,get_mouseEnabled,return )

bool ObjectContainer3D_obj::set_mouseEnabled(bool value){
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_213_set_mouseEnabled)
HXLINE( 214)		this->_mouseEnabled = value;
HXLINE( 215)		this->updateMouseChildren();
HXLINE( 216)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectContainer3D_obj,set_mouseEnabled,return )

void ObjectContainer3D_obj::invalidateTransform(){
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_223_invalidateTransform)
HXLINE( 224)		this->super::invalidateTransform();
HXLINE( 226)		this->notifySceneTransformChange();
            	}


void ObjectContainer3D_obj::invalidateSceneTransform(){
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_233_invalidateSceneTransform)
HXLINE( 234)		this->_sceneTransformDirty = !(this->_ignoreTransform);
HXLINE( 235)		this->_inverseSceneTransformDirty = !(this->_ignoreTransform);
HXLINE( 236)		this->_scenePositionDirty = !(this->_ignoreTransform);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,invalidateSceneTransform,(void))

void ObjectContainer3D_obj::updateSceneTransform(){
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_243_updateSceneTransform)
HXLINE( 244)		bool _hx_tmp;
HXDLIN( 244)		if (::hx::IsNotNull( this->_parent )) {
HXLINE( 244)			_hx_tmp = !(this->_parent->_isRoot);
            		}
            		else {
HXLINE( 244)			_hx_tmp = false;
            		}
HXDLIN( 244)		if (_hx_tmp) {
HXLINE( 245)			 ::openfl::geom::Matrix3D _hx_tmp = this->_sceneTransform;
HXDLIN( 245)			_hx_tmp->copyFrom(this->_parent->get_sceneTransform());
HXLINE( 246)			 ::openfl::geom::Matrix3D _hx_tmp1 = this->_sceneTransform;
HXDLIN( 246)			_hx_tmp1->prepend(this->get_transform());
            		}
            		else {
HXLINE( 248)			 ::openfl::geom::Matrix3D _hx_tmp = this->_sceneTransform;
HXDLIN( 248)			_hx_tmp->copyFrom(this->get_transform());
            		}
HXLINE( 250)		this->_sceneTransformDirty = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,updateSceneTransform,(void))

bool ObjectContainer3D_obj::get_mouseChildren(){
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_258_get_mouseChildren)
HXDLIN( 258)		return this->_mouseChildren;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,get_mouseChildren,return )

bool ObjectContainer3D_obj::set_mouseChildren(bool value){
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_262_set_mouseChildren)
HXLINE( 263)		this->_mouseChildren = value;
HXLINE( 264)		this->updateMouseChildren();
HXLINE( 265)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectContainer3D_obj,set_mouseChildren,return )

bool ObjectContainer3D_obj::get_visible(){
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_273_get_visible)
HXDLIN( 273)		return this->_explicitVisibility;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,get_visible,return )

bool ObjectContainer3D_obj::set_visible(bool value){
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_277_set_visible)
HXLINE( 278)		int len = this->_children->get_length();
HXLINE( 280)		this->_explicitVisibility = value;
HXLINE( 282)		{
HXLINE( 282)			int _g = 0;
HXDLIN( 282)			int _g1 = len;
HXDLIN( 282)			while((_g < _g1)){
HXLINE( 282)				_g = (_g + 1);
HXDLIN( 282)				int i = (_g - 1);
HXLINE( 283)				this->_children->get(i).StaticCast<  ::away3d::containers::ObjectContainer3D >()->updateImplicitVisibility();
            			}
            		}
HXLINE( 285)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectContainer3D_obj,set_visible,return )

::String ObjectContainer3D_obj::get_assetType(){
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_290_get_assetType)
HXDLIN( 290)		return HX_("container",41,75,73,bf);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,get_assetType,return )

 ::openfl::geom::Vector3D ObjectContainer3D_obj::get_scenePosition(){
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_297_get_scenePosition)
HXLINE( 298)		if (this->_scenePositionDirty) {
HXLINE( 299)			this->get_sceneTransform()->copyColumnTo(3,this->_scenePosition);
HXLINE( 300)			this->_scenePositionDirty = false;
            		}
HXLINE( 303)		return this->_scenePosition;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,get_scenePosition,return )

Float ObjectContainer3D_obj::get_minX(){
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_310_get_minX)
HXLINE( 311)		int i = 0;
HXLINE( 312)		int len = this->_children->get_length();
HXLINE( 313)		Float min = ::Math_obj::POSITIVE_INFINITY;
HXLINE( 314)		Float m;
HXLINE( 316)		while((i < len)){
HXLINE( 317)			i = (i + 1);
HXDLIN( 317)			 ::away3d::containers::ObjectContainer3D child = this->_children->get((i - 1)).StaticCast<  ::away3d::containers::ObjectContainer3D >();
HXLINE( 318)			Float m1 = child->get_minX();
HXDLIN( 318)			m = (m1 + child->get_x());
HXLINE( 319)			if ((m < min)) {
HXLINE( 320)				min = m;
            			}
            		}
HXLINE( 323)		return min;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,get_minX,return )

Float ObjectContainer3D_obj::get_minY(){
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_330_get_minY)
HXLINE( 331)		int i = 0;
HXLINE( 332)		int len = this->_children->get_length();
HXLINE( 333)		Float min = ::Math_obj::POSITIVE_INFINITY;
HXLINE( 334)		Float m;
HXLINE( 336)		while((i < len)){
HXLINE( 337)			i = (i + 1);
HXDLIN( 337)			 ::away3d::containers::ObjectContainer3D child = this->_children->get((i - 1)).StaticCast<  ::away3d::containers::ObjectContainer3D >();
HXLINE( 338)			Float m1 = child->get_minY();
HXDLIN( 338)			m = (m1 + child->get_y());
HXLINE( 339)			if ((m < min)) {
HXLINE( 340)				min = m;
            			}
            		}
HXLINE( 343)		return min;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,get_minY,return )

Float ObjectContainer3D_obj::get_minZ(){
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_350_get_minZ)
HXLINE( 351)		int i = 0;
HXLINE( 352)		int len = this->_children->get_length();
HXLINE( 353)		Float min = ::Math_obj::POSITIVE_INFINITY;
HXLINE( 354)		Float m;
HXLINE( 356)		while((i < len)){
HXLINE( 357)			i = (i + 1);
HXDLIN( 357)			 ::away3d::containers::ObjectContainer3D child = this->_children->get((i - 1)).StaticCast<  ::away3d::containers::ObjectContainer3D >();
HXLINE( 358)			Float m1 = child->get_minZ();
HXDLIN( 358)			m = (m1 + child->get_z());
HXLINE( 359)			if ((m < min)) {
HXLINE( 360)				min = m;
            			}
            		}
HXLINE( 363)		return min;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,get_minZ,return )

Float ObjectContainer3D_obj::get_maxX(){
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_370_get_maxX)
HXLINE( 372)		int i = 0;
HXLINE( 373)		int len = this->_children->get_length();
HXLINE( 374)		Float max = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 375)		Float m;
HXLINE( 377)		while((i < len)){
HXLINE( 378)			i = (i + 1);
HXDLIN( 378)			 ::away3d::containers::ObjectContainer3D child = this->_children->get((i - 1)).StaticCast<  ::away3d::containers::ObjectContainer3D >();
HXLINE( 379)			Float m1 = child->get_maxX();
HXDLIN( 379)			m = (m1 + child->get_x());
HXLINE( 380)			if ((m > max)) {
HXLINE( 381)				max = m;
            			}
            		}
HXLINE( 384)		return max;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,get_maxX,return )

Float ObjectContainer3D_obj::get_maxY(){
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_391_get_maxY)
HXLINE( 392)		int i = 0;
HXLINE( 393)		int len = this->_children->get_length();
HXLINE( 394)		Float max = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 395)		Float m;
HXLINE( 397)		while((i < len)){
HXLINE( 398)			i = (i + 1);
HXDLIN( 398)			 ::away3d::containers::ObjectContainer3D child = this->_children->get((i - 1)).StaticCast<  ::away3d::containers::ObjectContainer3D >();
HXLINE( 399)			Float m1 = child->get_maxY();
HXDLIN( 399)			m = (m1 + child->get_y());
HXLINE( 400)			if ((m > max)) {
HXLINE( 401)				max = m;
            			}
            		}
HXLINE( 404)		return max;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,get_maxY,return )

Float ObjectContainer3D_obj::get_maxZ(){
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_411_get_maxZ)
HXLINE( 412)		int i = 0;
HXLINE( 413)		int len = this->_children->get_length();
HXLINE( 414)		Float max = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 415)		Float m;
HXLINE( 417)		while((i < len)){
HXLINE( 418)			i = (i + 1);
HXDLIN( 418)			 ::away3d::containers::ObjectContainer3D child = this->_children->get((i - 1)).StaticCast<  ::away3d::containers::ObjectContainer3D >();
HXLINE( 419)			Float m1 = child->get_maxZ();
HXDLIN( 419)			m = (m1 + child->get_z());
HXLINE( 420)			if ((m > max)) {
HXLINE( 421)				max = m;
            			}
            		}
HXLINE( 424)		return max;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,get_maxZ,return )

 ::away3d::core::partition::Partition3D ObjectContainer3D_obj::get_partition(){
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_433_get_partition)
HXDLIN( 433)		return this->_explicitPartition;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,get_partition,return )

 ::away3d::core::partition::Partition3D ObjectContainer3D_obj::set_partition( ::away3d::core::partition::Partition3D value){
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_437_set_partition)
HXLINE( 438)		this->_explicitPartition = value;
HXLINE( 439)		 ::away3d::core::partition::Partition3D _hx_tmp;
HXDLIN( 439)		if (::hx::IsNotNull( value )) {
HXLINE( 439)			_hx_tmp = value;
            		}
            		else {
HXLINE( 439)			if (::hx::IsNotNull( this->_parent )) {
HXLINE( 439)				_hx_tmp = this->_parent->get_implicitPartition();
            			}
            			else {
HXLINE( 439)				_hx_tmp = null();
            			}
            		}
HXDLIN( 439)		this->set_implicitPartition(_hx_tmp);
HXLINE( 440)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectContainer3D_obj,set_partition,return )

 ::openfl::geom::Matrix3D ObjectContainer3D_obj::get_sceneTransform(){
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_447_get_sceneTransform)
HXLINE( 448)		if (this->_sceneTransformDirty) {
HXLINE( 449)			this->updateSceneTransform();
            		}
HXLINE( 451)		return this->_sceneTransform;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,get_sceneTransform,return )

 ::away3d::containers::Scene3D ObjectContainer3D_obj::get_scene(){
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_459_get_scene)
HXDLIN( 459)		return this->_scene;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,get_scene,return )

 ::away3d::containers::Scene3D ObjectContainer3D_obj::set_scene( ::away3d::containers::Scene3D value){
            	HX_GC_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_463_set_scene)
HXLINE( 464)		int i = 0;
HXLINE( 465)		int len = this->_children->get_length();
HXLINE( 467)		while((i < len)){
HXLINE( 468)			i = (i + 1);
HXDLIN( 468)			this->_children->get((i - 1)).StaticCast<  ::away3d::containers::ObjectContainer3D >()->set_scene(value);
            		}
HXLINE( 470)		if (::hx::IsInstanceEq( this->_scene,value )) {
HXLINE( 471)			return value;
            		}
HXLINE( 474)		if (::hx::IsNull( value )) {
HXLINE( 475)			this->_oldScene = this->_scene;
            		}
HXLINE( 477)		bool _hx_tmp;
HXDLIN( 477)		bool _hx_tmp1;
HXDLIN( 477)		if (::hx::IsNotNull( this->_explicitPartition )) {
HXLINE( 477)			_hx_tmp1 = ::hx::IsNotNull( this->_oldScene );
            		}
            		else {
HXLINE( 477)			_hx_tmp1 = false;
            		}
HXDLIN( 477)		if (_hx_tmp1) {
HXLINE( 477)			_hx_tmp = ::hx::IsInstanceNotEq( this->_oldScene,this->_scene );
            		}
            		else {
HXLINE( 477)			_hx_tmp = false;
            		}
HXDLIN( 477)		if (_hx_tmp) {
HXLINE( 478)			this->set_partition(null());
            		}
HXLINE( 480)		if (::hx::IsNotNull( value )) {
HXLINE( 481)			this->_oldScene = null();
            		}
HXLINE( 484)		this->_scene = value;
HXLINE( 486)		if (::hx::IsNotNull( this->_scene )) {
HXLINE( 487)			 ::away3d::containers::Scene3D _hx_tmp = this->_scene;
HXDLIN( 487)			_hx_tmp->dispatchEvent( ::away3d::events::Scene3DEvent_obj::__alloc( HX_CTX ,HX_("addedToScene",f1,90,1b,01),::hx::ObjectPtr<OBJ_>(this)));
            		}
            		else {
HXLINE( 488)			if (::hx::IsNotNull( this->_oldScene )) {
HXLINE( 489)				 ::away3d::containers::Scene3D _hx_tmp = this->_oldScene;
HXDLIN( 489)				_hx_tmp->dispatchEvent( ::away3d::events::Scene3DEvent_obj::__alloc( HX_CTX ,HX_("removedFromScene",c2,8f,3c,af),::hx::ObjectPtr<OBJ_>(this)));
            			}
            		}
HXLINE( 491)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectContainer3D_obj,set_scene,return )

 ::openfl::geom::Matrix3D ObjectContainer3D_obj::get_inverseSceneTransform(){
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_498_get_inverseSceneTransform)
HXLINE( 499)		if (this->_inverseSceneTransformDirty) {
HXLINE( 500)			 ::openfl::geom::Matrix3D _hx_tmp = this->_inverseSceneTransform;
HXDLIN( 500)			_hx_tmp->copyFrom(this->get_sceneTransform());
HXLINE( 501)			this->_inverseSceneTransform->invert();
HXLINE( 502)			this->_inverseSceneTransformDirty = false;
            		}
HXLINE( 505)		return this->_inverseSceneTransform;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,get_inverseSceneTransform,return )

 ::away3d::containers::ObjectContainer3D ObjectContainer3D_obj::get_parent(){
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_513_get_parent)
HXDLIN( 513)		return this->_parent;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,get_parent,return )

bool ObjectContainer3D_obj::contains( ::away3d::containers::ObjectContainer3D child){
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_526_contains)
HXDLIN( 526)		return (this->_children->indexOf(child,0) >= 0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectContainer3D_obj,contains,return )

 ::away3d::containers::ObjectContainer3D ObjectContainer3D_obj::addChild( ::away3d::containers::ObjectContainer3D child){
            	HX_GC_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_536_addChild)
HXLINE( 537)		if (::hx::IsNull( child )) {
HXLINE( 538)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("Parameter child cannot be null.",0c,dc,e3,da),null())));
            		}
HXLINE( 540)		if (::hx::IsNotNull( child->_parent )) {
HXLINE( 541)			child->_parent->removeChild(child);
            		}
HXLINE( 543)		if (::hx::IsNull( child->_explicitPartition )) {
HXLINE( 544)			child->set_implicitPartition(this->_implicitPartition);
            		}
HXLINE( 546)		child->setParent(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 547)		child->set_scene(this->_scene);
HXLINE( 548)		child->notifySceneTransformChange();
HXLINE( 549)		child->updateMouseChildren();
HXLINE( 550)		child->updateImplicitVisibility();
HXLINE( 552)		this->_children->push(child);
HXLINE( 554)		return child;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectContainer3D_obj,addChild,return )

void ObjectContainer3D_obj::addChildren( ::openfl::_Vector::ObjectVector childarray){
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_564_addChildren)
HXDLIN( 564)		 ::Dynamic child = childarray->iterator();
HXDLIN( 564)		while(( (bool)(child->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN( 564)			 ::away3d::containers::ObjectContainer3D child1 = ( ( ::away3d::containers::ObjectContainer3D)(child->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 565)			this->addChild(child1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectContainer3D_obj,addChildren,(void))

void ObjectContainer3D_obj::removeChild( ::away3d::containers::ObjectContainer3D child){
            	HX_GC_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_575_removeChild)
HXLINE( 576)		if (::hx::IsNull( child )) {
HXLINE( 577)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("Parameter child cannot be null",e2,c9,4c,68),null())));
            		}
HXLINE( 579)		int childIndex = this->_children->indexOf(child,0);
HXLINE( 581)		if ((childIndex == -1)) {
HXLINE( 582)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("Parameter is not a child of the caller",74,9c,47,0d),null())));
            		}
HXLINE( 584)		this->removeChildInternal(childIndex,child);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectContainer3D_obj,removeChild,(void))

void ObjectContainer3D_obj::removeChildAt(int index){
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_593_removeChildAt)
HXLINE( 594)		 ::away3d::containers::ObjectContainer3D child = this->_children->get(index).StaticCast<  ::away3d::containers::ObjectContainer3D >();
HXLINE( 596)		this->removeChildInternal(index,child);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectContainer3D_obj,removeChildAt,(void))

void ObjectContainer3D_obj::removeChildInternal(int childIndex, ::away3d::containers::ObjectContainer3D child){
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_600_removeChildInternal)
HXLINE( 602)		this->_children->splice(childIndex,1);
HXLINE( 605)		child->setParent(null());
HXLINE( 607)		if (::hx::IsNull( child->_explicitPartition )) {
HXLINE( 608)			child->set_implicitPartition(null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ObjectContainer3D_obj,removeChildInternal,(void))

 ::away3d::containers::ObjectContainer3D ObjectContainer3D_obj::getChildAt(int index){
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_618_getChildAt)
HXDLIN( 618)		return this->_children->get(index).StaticCast<  ::away3d::containers::ObjectContainer3D >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectContainer3D_obj,getChildAt,return )

int ObjectContainer3D_obj::get_numChildren(){
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_626_get_numChildren)
HXDLIN( 626)		return this->_children->get_length();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,get_numChildren,return )

void ObjectContainer3D_obj::lookAt( ::openfl::geom::Vector3D target, ::openfl::geom::Vector3D upAxis){
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_633_lookAt)
HXLINE( 634)		this->super::lookAt(target,upAxis);
HXLINE( 636)		this->notifySceneTransformChange();
            	}


void ObjectContainer3D_obj::translateLocal( ::openfl::geom::Vector3D axis,Float distance){
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_640_translateLocal)
HXLINE( 641)		this->super::translateLocal(axis,distance);
HXLINE( 643)		this->notifySceneTransformChange();
            	}


void ObjectContainer3D_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_651_dispose)
HXDLIN( 651)		if (::hx::IsNotNull( this->get_parent() )) {
HXLINE( 652)			this->get_parent()->removeChild(::hx::ObjectPtr<OBJ_>(this));
            		}
            	}


void ObjectContainer3D_obj::disposeWithChildren(){
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_659_disposeWithChildren)
HXLINE( 660)		this->dispose();
HXLINE( 662)		while((this->get_numChildren() > 0)){
HXLINE( 663)			this->getChildAt(0)->dispose();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,disposeWithChildren,(void))

 ::away3d::core::base::Object3D ObjectContainer3D_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_672_clone)
HXLINE( 673)		 ::away3d::containers::ObjectContainer3D clone =  ::away3d::containers::ObjectContainer3D_obj::__alloc( HX_CTX );
HXLINE( 674)		clone->set_pivotPoint(this->get_pivotPoint());
HXLINE( 675)		clone->set_transform(this->get_transform());
HXLINE( 676)		clone->set_partition(this->get_partition());
HXLINE( 677)		clone->set_name(this->get_name());
HXLINE( 679)		int len = this->_children->get_length();
HXLINE( 681)		{
HXLINE( 681)			int _g = 0;
HXDLIN( 681)			int _g1 = len;
HXDLIN( 681)			while((_g < _g1)){
HXLINE( 681)				_g = (_g + 1);
HXDLIN( 681)				int i = (_g - 1);
HXLINE( 682)				clone->addChild(::hx::TCast<  ::away3d::containers::ObjectContainer3D >::cast(this->_children->get(i).StaticCast<  ::away3d::containers::ObjectContainer3D >()->clone()));
            			}
            		}
HXLINE( 685)		return clone;
            	}


void ObjectContainer3D_obj::rotate( ::openfl::geom::Vector3D axis,Float angle){
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_689_rotate)
HXLINE( 690)		this->super::rotate(axis,angle);
HXLINE( 692)		this->notifySceneTransformChange();
            	}


bool ObjectContainer3D_obj::dispatchEvent( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_699_dispatchEvent)
HXLINE( 701)		bool ret = this->super::dispatchEvent(event);
HXLINE( 703)		if (event->bubbles) {
HXLINE( 704)			if (::hx::IsNotNull( this->_parent )) {
HXLINE( 705)				this->_parent->dispatchEvent(event);
            			}
            			else {
HXLINE( 707)				if (::hx::IsNotNull( this->_scene )) {
HXLINE( 708)					this->_scene->dispatchEvent(event);
            				}
            			}
            		}
HXLINE( 711)		return ret;
            	}


void ObjectContainer3D_obj::updateImplicitVisibility(){
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_715_updateImplicitVisibility)
HXLINE( 716)		int len = this->_children->get_length();
HXLINE( 718)		bool _hx_tmp;
HXDLIN( 718)		if (this->_parent->_explicitVisibility) {
HXLINE( 718)			_hx_tmp = this->_parent->_implicitVisibility;
            		}
            		else {
HXLINE( 718)			_hx_tmp = false;
            		}
HXDLIN( 718)		this->_implicitVisibility = _hx_tmp;
HXLINE( 720)		{
HXLINE( 720)			int _g = 0;
HXDLIN( 720)			int _g1 = len;
HXDLIN( 720)			while((_g < _g1)){
HXLINE( 720)				_g = (_g + 1);
HXDLIN( 720)				int i = (_g - 1);
HXLINE( 721)				this->_children->get(i).StaticCast<  ::away3d::containers::ObjectContainer3D >()->updateImplicitVisibility();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,updateImplicitVisibility,(void))

void ObjectContainer3D_obj::addEventListener(::String _tmp_type, ::Dynamic _tmp_listener,::hx::Null< bool >  __o_useCapture,::hx::Null< int >  __o_priority,::hx::Null< bool >  __o_useWeakReference){
            		bool useCapture = __o_useCapture.Default(false);
            		int priority = __o_priority.Default(0);
            		bool useWeakReference = __o_useWeakReference.Default(false);
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_725_addEventListener)
HXLINE( 726)		::String type = _tmp_type;
HXDLIN( 726)		 ::Dynamic listener = _tmp_listener;
HXDLIN( 726)		this->super::addEventListener(type,listener,useCapture,priority,useWeakReference);
HXLINE( 727)		::String _hx_switch_0 = type;
            		if (  (_hx_switch_0==HX_("sceneChanged",08,01,23,0b)) ){
HXLINE( 731)			this->_listenToSceneChanged = true;
HXDLIN( 731)			goto _hx_goto_66;
            		}
            		if (  (_hx_switch_0==HX_("scenetransformChanged",34,a2,78,f4)) ){
HXLINE( 729)			this->_listenToSceneTransformChanged = true;
HXDLIN( 729)			goto _hx_goto_66;
            		}
            		_hx_goto_66:;
            	}


void ObjectContainer3D_obj::removeEventListener(::String _tmp_type, ::Dynamic _tmp_listener,::hx::Null< bool >  __o_useCapture){
            		bool useCapture = __o_useCapture.Default(false);
            	HX_STACKFRAME(&_hx_pos_5aeee1cc1a26596e_736_removeEventListener)
HXLINE( 737)		::String type = _tmp_type;
HXDLIN( 737)		 ::Dynamic listener = _tmp_listener;
HXDLIN( 737)		this->super::removeEventListener(type,listener,useCapture);
HXLINE( 739)		if (this->hasEventListener(type)) {
HXLINE( 740)			return;
            		}
HXLINE( 742)		::String _hx_switch_0 = type;
            		if (  (_hx_switch_0==HX_("sceneChanged",08,01,23,0b)) ){
HXLINE( 746)			this->_listenToSceneChanged = false;
HXDLIN( 746)			goto _hx_goto_68;
            		}
            		if (  (_hx_switch_0==HX_("scenetransformChanged",34,a2,78,f4)) ){
HXLINE( 744)			this->_listenToSceneTransformChanged = false;
HXDLIN( 744)			goto _hx_goto_68;
            		}
            		_hx_goto_68:;
            	}



::hx::ObjectPtr< ObjectContainer3D_obj > ObjectContainer3D_obj::__new() {
	::hx::ObjectPtr< ObjectContainer3D_obj > __this = new ObjectContainer3D_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ObjectContainer3D_obj > ObjectContainer3D_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ObjectContainer3D_obj *__this = (ObjectContainer3D_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ObjectContainer3D_obj), true, "away3d.containers.ObjectContainer3D"));
	*(void **)__this = ObjectContainer3D_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ObjectContainer3D_obj::ObjectContainer3D_obj()
{
}

void ObjectContainer3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectContainer3D);
	HX_MARK_MEMBER_NAME(_ancestorsAllowMouseEnabled,"_ancestorsAllowMouseEnabled");
	HX_MARK_MEMBER_NAME(_isRoot,"_isRoot");
	HX_MARK_MEMBER_NAME(_scene,"_scene");
	HX_MARK_MEMBER_NAME(_parent,"_parent");
	HX_MARK_MEMBER_NAME(_sceneTransform,"_sceneTransform");
	HX_MARK_MEMBER_NAME(_sceneTransformDirty,"_sceneTransformDirty");
	HX_MARK_MEMBER_NAME(_explicitPartition,"_explicitPartition");
	HX_MARK_MEMBER_NAME(_implicitPartition,"_implicitPartition");
	HX_MARK_MEMBER_NAME(_mouseEnabled,"_mouseEnabled");
	HX_MARK_MEMBER_NAME(_sceneTransformChanged,"_sceneTransformChanged");
	HX_MARK_MEMBER_NAME(_scenechanged,"_scenechanged");
	HX_MARK_MEMBER_NAME(_children,"_children");
	HX_MARK_MEMBER_NAME(_mouseChildren,"_mouseChildren");
	HX_MARK_MEMBER_NAME(_oldScene,"_oldScene");
	HX_MARK_MEMBER_NAME(_inverseSceneTransform,"_inverseSceneTransform");
	HX_MARK_MEMBER_NAME(_inverseSceneTransformDirty,"_inverseSceneTransformDirty");
	HX_MARK_MEMBER_NAME(_scenePosition,"_scenePosition");
	HX_MARK_MEMBER_NAME(_scenePositionDirty,"_scenePositionDirty");
	HX_MARK_MEMBER_NAME(_explicitVisibility,"_explicitVisibility");
	HX_MARK_MEMBER_NAME(_implicitVisibility,"_implicitVisibility");
	HX_MARK_MEMBER_NAME(_listenToSceneTransformChanged,"_listenToSceneTransformChanged");
	HX_MARK_MEMBER_NAME(_listenToSceneChanged,"_listenToSceneChanged");
	HX_MARK_MEMBER_NAME(_ignoreTransform,"_ignoreTransform");
	 ::away3d::core::base::Object3D_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ObjectContainer3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_ancestorsAllowMouseEnabled,"_ancestorsAllowMouseEnabled");
	HX_VISIT_MEMBER_NAME(_isRoot,"_isRoot");
	HX_VISIT_MEMBER_NAME(_scene,"_scene");
	HX_VISIT_MEMBER_NAME(_parent,"_parent");
	HX_VISIT_MEMBER_NAME(_sceneTransform,"_sceneTransform");
	HX_VISIT_MEMBER_NAME(_sceneTransformDirty,"_sceneTransformDirty");
	HX_VISIT_MEMBER_NAME(_explicitPartition,"_explicitPartition");
	HX_VISIT_MEMBER_NAME(_implicitPartition,"_implicitPartition");
	HX_VISIT_MEMBER_NAME(_mouseEnabled,"_mouseEnabled");
	HX_VISIT_MEMBER_NAME(_sceneTransformChanged,"_sceneTransformChanged");
	HX_VISIT_MEMBER_NAME(_scenechanged,"_scenechanged");
	HX_VISIT_MEMBER_NAME(_children,"_children");
	HX_VISIT_MEMBER_NAME(_mouseChildren,"_mouseChildren");
	HX_VISIT_MEMBER_NAME(_oldScene,"_oldScene");
	HX_VISIT_MEMBER_NAME(_inverseSceneTransform,"_inverseSceneTransform");
	HX_VISIT_MEMBER_NAME(_inverseSceneTransformDirty,"_inverseSceneTransformDirty");
	HX_VISIT_MEMBER_NAME(_scenePosition,"_scenePosition");
	HX_VISIT_MEMBER_NAME(_scenePositionDirty,"_scenePositionDirty");
	HX_VISIT_MEMBER_NAME(_explicitVisibility,"_explicitVisibility");
	HX_VISIT_MEMBER_NAME(_implicitVisibility,"_implicitVisibility");
	HX_VISIT_MEMBER_NAME(_listenToSceneTransformChanged,"_listenToSceneTransformChanged");
	HX_VISIT_MEMBER_NAME(_listenToSceneChanged,"_listenToSceneChanged");
	HX_VISIT_MEMBER_NAME(_ignoreTransform,"_ignoreTransform");
	 ::away3d::core::base::Object3D_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ObjectContainer3D_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"minX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_minX() ); }
		if (HX_FIELD_EQ(inName,"minY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_minY() ); }
		if (HX_FIELD_EQ(inName,"minZ") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_minZ() ); }
		if (HX_FIELD_EQ(inName,"maxX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_maxX() ); }
		if (HX_FIELD_EQ(inName,"maxY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_maxY() ); }
		if (HX_FIELD_EQ(inName,"maxZ") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_maxZ() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scene") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scene() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_parent() ); }
		if (HX_FIELD_EQ(inName,"_scene") ) { return ::hx::Val( _scene ); }
		if (HX_FIELD_EQ(inName,"lookAt") ) { return ::hx::Val( lookAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return ::hx::Val( rotate_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_visible() ); }
		if (HX_FIELD_EQ(inName,"_isRoot") ) { return ::hx::Val( _isRoot ); }
		if (HX_FIELD_EQ(inName,"_parent") ) { return ::hx::Val( _parent ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_minX") ) { return ::hx::Val( get_minX_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_minY") ) { return ::hx::Val( get_minY_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_minZ") ) { return ::hx::Val( get_minZ_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_maxX") ) { return ::hx::Val( get_maxX_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_maxY") ) { return ::hx::Val( get_maxY_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_maxZ") ) { return ::hx::Val( get_maxZ_dyn() ); }
		if (HX_FIELD_EQ(inName,"contains") ) { return ::hx::Val( contains_dyn() ); }
		if (HX_FIELD_EQ(inName,"addChild") ) { return ::hx::Val( addChild_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isVisible") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_isVisible() ); }
		if (HX_FIELD_EQ(inName,"assetType") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_assetType() ); }
		if (HX_FIELD_EQ(inName,"partition") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_partition() ); }
		if (HX_FIELD_EQ(inName,"_children") ) { return ::hx::Val( _children ); }
		if (HX_FIELD_EQ(inName,"_oldScene") ) { return ::hx::Val( _oldScene ); }
		if (HX_FIELD_EQ(inName,"setParent") ) { return ::hx::Val( setParent_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_scene") ) { return ::hx::Val( get_scene_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scene") ) { return ::hx::Val( set_scene_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_parent") ) { return ::hx::Val( get_parent_dyn() ); }
		if (HX_FIELD_EQ(inName,"getChildAt") ) { return ::hx::Val( getChildAt_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numChildren") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numChildren() ); }
		if (HX_FIELD_EQ(inName,"get_visible") ) { return ::hx::Val( get_visible_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return ::hx::Val( set_visible_dyn() ); }
		if (HX_FIELD_EQ(inName,"addChildren") ) { return ::hx::Val( addChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeChild") ) { return ::hx::Val( removeChild_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mouseEnabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_mouseEnabled() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_mouseChildren() ); }
		if (HX_FIELD_EQ(inName,"scenePosition") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scenePosition() ); }
		if (HX_FIELD_EQ(inName,"_mouseEnabled") ) { return ::hx::Val( _mouseEnabled ); }
		if (HX_FIELD_EQ(inName,"_scenechanged") ) { return ::hx::Val( _scenechanged ); }
		if (HX_FIELD_EQ(inName,"get_isVisible") ) { return ::hx::Val( get_isVisible_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_assetType") ) { return ::hx::Val( get_assetType_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_partition") ) { return ::hx::Val( get_partition_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_partition") ) { return ::hx::Val( set_partition_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeChildAt") ) { return ::hx::Val( removeChildAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"dispatchEvent") ) { return ::hx::Val( dispatchEvent_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"sceneTransform") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_sceneTransform() ); }
		if (HX_FIELD_EQ(inName,"_mouseChildren") ) { return ::hx::Val( _mouseChildren ); }
		if (HX_FIELD_EQ(inName,"_scenePosition") ) { return ::hx::Val( _scenePosition ); }
		if (HX_FIELD_EQ(inName,"translateLocal") ) { return ::hx::Val( translateLocal_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ignoreTransform") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_ignoreTransform() ); }
		if (HX_FIELD_EQ(inName,"_sceneTransform") ) { return ::hx::Val( _sceneTransform ); }
		if (HX_FIELD_EQ(inName,"get_numChildren") ) { return ::hx::Val( get_numChildren_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_ignoreTransform") ) { return ::hx::Val( _ignoreTransform ); }
		if (HX_FIELD_EQ(inName,"get_mouseEnabled") ) { return ::hx::Val( get_mouseEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_mouseEnabled") ) { return ::hx::Val( set_mouseEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return ::hx::Val( addEventListener_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"implicitPartition") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_implicitPartition() ); }
		if (HX_FIELD_EQ(inName,"notifySceneChange") ) { return ::hx::Val( notifySceneChange_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_mouseChildren") ) { return ::hx::Val( get_mouseChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_mouseChildren") ) { return ::hx::Val( set_mouseChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_scenePosition") ) { return ::hx::Val( get_scenePosition_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_explicitPartition") ) { return ::hx::Val( _explicitPartition ); }
		if (HX_FIELD_EQ(inName,"_implicitPartition") ) { return ::hx::Val( _implicitPartition ); }
		if (HX_FIELD_EQ(inName,"get_sceneTransform") ) { return ::hx::Val( get_sceneTransform_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_scenePositionDirty") ) { return ::hx::Val( _scenePositionDirty ); }
		if (HX_FIELD_EQ(inName,"_explicitVisibility") ) { return ::hx::Val( _explicitVisibility ); }
		if (HX_FIELD_EQ(inName,"_implicitVisibility") ) { return ::hx::Val( _implicitVisibility ); }
		if (HX_FIELD_EQ(inName,"get_ignoreTransform") ) { return ::hx::Val( get_ignoreTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_ignoreTransform") ) { return ::hx::Val( set_ignoreTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateMouseChildren") ) { return ::hx::Val( updateMouseChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"invalidateTransform") ) { return ::hx::Val( invalidateTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeChildInternal") ) { return ::hx::Val( removeChildInternal_dyn() ); }
		if (HX_FIELD_EQ(inName,"disposeWithChildren") ) { return ::hx::Val( disposeWithChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { return ::hx::Val( removeEventListener_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_sceneTransformDirty") ) { return ::hx::Val( _sceneTransformDirty ); }
		if (HX_FIELD_EQ(inName,"updateSceneTransform") ) { return ::hx::Val( updateSceneTransform_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"inverseSceneTransform") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_inverseSceneTransform() ); }
		if (HX_FIELD_EQ(inName,"_listenToSceneChanged") ) { return ::hx::Val( _listenToSceneChanged ); }
		if (HX_FIELD_EQ(inName,"get_implicitPartition") ) { return ::hx::Val( get_implicitPartition_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_implicitPartition") ) { return ::hx::Val( set_implicitPartition_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_sceneTransformChanged") ) { return ::hx::Val( _sceneTransformChanged ); }
		if (HX_FIELD_EQ(inName,"_inverseSceneTransform") ) { return ::hx::Val( _inverseSceneTransform ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"invalidateSceneTransform") ) { return ::hx::Val( invalidateSceneTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateImplicitVisibility") ) { return ::hx::Val( updateImplicitVisibility_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"get_inverseSceneTransform") ) { return ::hx::Val( get_inverseSceneTransform_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"notifySceneTransformChange") ) { return ::hx::Val( notifySceneTransformChange_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_ancestorsAllowMouseEnabled") ) { return ::hx::Val( _ancestorsAllowMouseEnabled ); }
		if (HX_FIELD_EQ(inName,"_inverseSceneTransformDirty") ) { return ::hx::Val( _inverseSceneTransformDirty ); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"_listenToSceneTransformChanged") ) { return ::hx::Val( _listenToSceneTransformChanged ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ObjectContainer3D_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scene") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scene(inValue.Cast<  ::away3d::containers::Scene3D >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_scene") ) { _scene=inValue.Cast<  ::away3d::containers::Scene3D >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_visible(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"_isRoot") ) { _isRoot=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_parent") ) { _parent=inValue.Cast<  ::away3d::containers::ObjectContainer3D >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"partition") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_partition(inValue.Cast<  ::away3d::core::partition::Partition3D >()) ); }
		if (HX_FIELD_EQ(inName,"_children") ) { _children=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_oldScene") ) { _oldScene=inValue.Cast<  ::away3d::containers::Scene3D >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mouseEnabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_mouseEnabled(inValue.Cast< bool >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_mouseChildren(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"_mouseEnabled") ) { _mouseEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scenechanged") ) { _scenechanged=inValue.Cast<  ::away3d::events::Object3DEvent >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_mouseChildren") ) { _mouseChildren=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scenePosition") ) { _scenePosition=inValue.Cast<  ::openfl::geom::Vector3D >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ignoreTransform") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_ignoreTransform(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"_sceneTransform") ) { _sceneTransform=inValue.Cast<  ::openfl::geom::Matrix3D >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_ignoreTransform") ) { _ignoreTransform=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"implicitPartition") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_implicitPartition(inValue.Cast<  ::away3d::core::partition::Partition3D >()) ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_explicitPartition") ) { _explicitPartition=inValue.Cast<  ::away3d::core::partition::Partition3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_implicitPartition") ) { _implicitPartition=inValue.Cast<  ::away3d::core::partition::Partition3D >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_scenePositionDirty") ) { _scenePositionDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_explicitVisibility") ) { _explicitVisibility=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_implicitVisibility") ) { _implicitVisibility=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_sceneTransformDirty") ) { _sceneTransformDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_listenToSceneChanged") ) { _listenToSceneChanged=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_sceneTransformChanged") ) { _sceneTransformChanged=inValue.Cast<  ::away3d::events::Object3DEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inverseSceneTransform") ) { _inverseSceneTransform=inValue.Cast<  ::openfl::geom::Matrix3D >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_ancestorsAllowMouseEnabled") ) { _ancestorsAllowMouseEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inverseSceneTransformDirty") ) { _inverseSceneTransformDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"_listenToSceneTransformChanged") ) { _listenToSceneTransformChanged=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ObjectContainer3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("ignoreTransform",fa,a1,7a,11));
	outFields->push(HX_("implicitPartition",05,64,3d,1a));
	outFields->push(HX_("isVisible",a8,f5,22,a7));
	outFields->push(HX_("mouseEnabled",dc,54,d6,5f));
	outFields->push(HX_("mouseChildren",84,18,6b,ff));
	outFields->push(HX_("visible",72,78,24,a3));
	outFields->push(HX_("assetType",ca,40,af,b1));
	outFields->push(HX_("scenePosition",15,62,2a,18));
	outFields->push(HX_("minX",86,4e,5c,48));
	outFields->push(HX_("minY",87,4e,5c,48));
	outFields->push(HX_("minZ",88,4e,5c,48));
	outFields->push(HX_("maxX",34,45,56,48));
	outFields->push(HX_("maxY",35,45,56,48));
	outFields->push(HX_("maxZ",36,45,56,48));
	outFields->push(HX_("partition",ea,a1,bf,9d));
	outFields->push(HX_("sceneTransform",80,aa,2c,82));
	outFields->push(HX_("scene",4c,d9,d1,78));
	outFields->push(HX_("inverseSceneTransform",50,9e,fe,b2));
	outFields->push(HX_("parent",2a,05,7e,ed));
	outFields->push(HX_("numChildren",a5,69,80,5c));
	outFields->push(HX_("_ancestorsAllowMouseEnabled",44,cd,f7,72));
	outFields->push(HX_("_isRoot",cb,c4,8c,d7));
	outFields->push(HX_("_scene",8d,20,b9,74));
	outFields->push(HX_("_parent",c9,16,f5,5b));
	outFields->push(HX_("_sceneTransform",1f,f3,8c,cb));
	outFields->push(HX_("_sceneTransformDirty",73,1c,b0,63));
	outFields->push(HX_("_explicitPartition",17,85,95,70));
	outFields->push(HX_("_implicitPartition",c6,08,53,ed));
	outFields->push(HX_("_mouseEnabled",bb,e7,44,42));
	outFields->push(HX_("_sceneTransformChanged",95,17,81,67));
	outFields->push(HX_("_scenechanged",07,6c,40,20));
	outFields->push(HX_("_children",9e,10,00,b8));
	outFields->push(HX_("_mouseChildren",c5,08,bd,3d));
	outFields->push(HX_("_oldScene",84,ea,32,a7));
	outFields->push(HX_("_inverseSceneTransform",91,37,0c,0c));
	outFields->push(HX_("_inverseSceneTransformDirty",c1,7a,09,d0));
	outFields->push(HX_("_scenePosition",56,52,7c,56));
	outFields->push(HX_("_scenePositionDirty",dc,35,49,bb));
	outFields->push(HX_("_explicitVisibility",05,92,5e,7b));
	outFields->push(HX_("_implicitVisibility",76,47,74,24));
	outFields->push(HX_("_listenToSceneTransformChanged",93,6f,de,4f));
	outFields->push(HX_("_listenToSceneChanged",a9,33,77,d9));
	outFields->push(HX_("_ignoreTransform",7b,e4,59,fc));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ObjectContainer3D_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(ObjectContainer3D_obj,_ancestorsAllowMouseEnabled),HX_("_ancestorsAllowMouseEnabled",44,cd,f7,72)},
	{::hx::fsBool,(int)offsetof(ObjectContainer3D_obj,_isRoot),HX_("_isRoot",cb,c4,8c,d7)},
	{::hx::fsObject /*  ::away3d::containers::Scene3D */ ,(int)offsetof(ObjectContainer3D_obj,_scene),HX_("_scene",8d,20,b9,74)},
	{::hx::fsObject /*  ::away3d::containers::ObjectContainer3D */ ,(int)offsetof(ObjectContainer3D_obj,_parent),HX_("_parent",c9,16,f5,5b)},
	{::hx::fsObject /*  ::openfl::geom::Matrix3D */ ,(int)offsetof(ObjectContainer3D_obj,_sceneTransform),HX_("_sceneTransform",1f,f3,8c,cb)},
	{::hx::fsBool,(int)offsetof(ObjectContainer3D_obj,_sceneTransformDirty),HX_("_sceneTransformDirty",73,1c,b0,63)},
	{::hx::fsObject /*  ::away3d::core::partition::Partition3D */ ,(int)offsetof(ObjectContainer3D_obj,_explicitPartition),HX_("_explicitPartition",17,85,95,70)},
	{::hx::fsObject /*  ::away3d::core::partition::Partition3D */ ,(int)offsetof(ObjectContainer3D_obj,_implicitPartition),HX_("_implicitPartition",c6,08,53,ed)},
	{::hx::fsBool,(int)offsetof(ObjectContainer3D_obj,_mouseEnabled),HX_("_mouseEnabled",bb,e7,44,42)},
	{::hx::fsObject /*  ::away3d::events::Object3DEvent */ ,(int)offsetof(ObjectContainer3D_obj,_sceneTransformChanged),HX_("_sceneTransformChanged",95,17,81,67)},
	{::hx::fsObject /*  ::away3d::events::Object3DEvent */ ,(int)offsetof(ObjectContainer3D_obj,_scenechanged),HX_("_scenechanged",07,6c,40,20)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(ObjectContainer3D_obj,_children),HX_("_children",9e,10,00,b8)},
	{::hx::fsBool,(int)offsetof(ObjectContainer3D_obj,_mouseChildren),HX_("_mouseChildren",c5,08,bd,3d)},
	{::hx::fsObject /*  ::away3d::containers::Scene3D */ ,(int)offsetof(ObjectContainer3D_obj,_oldScene),HX_("_oldScene",84,ea,32,a7)},
	{::hx::fsObject /*  ::openfl::geom::Matrix3D */ ,(int)offsetof(ObjectContainer3D_obj,_inverseSceneTransform),HX_("_inverseSceneTransform",91,37,0c,0c)},
	{::hx::fsBool,(int)offsetof(ObjectContainer3D_obj,_inverseSceneTransformDirty),HX_("_inverseSceneTransformDirty",c1,7a,09,d0)},
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(int)offsetof(ObjectContainer3D_obj,_scenePosition),HX_("_scenePosition",56,52,7c,56)},
	{::hx::fsBool,(int)offsetof(ObjectContainer3D_obj,_scenePositionDirty),HX_("_scenePositionDirty",dc,35,49,bb)},
	{::hx::fsBool,(int)offsetof(ObjectContainer3D_obj,_explicitVisibility),HX_("_explicitVisibility",05,92,5e,7b)},
	{::hx::fsBool,(int)offsetof(ObjectContainer3D_obj,_implicitVisibility),HX_("_implicitVisibility",76,47,74,24)},
	{::hx::fsBool,(int)offsetof(ObjectContainer3D_obj,_listenToSceneTransformChanged),HX_("_listenToSceneTransformChanged",93,6f,de,4f)},
	{::hx::fsBool,(int)offsetof(ObjectContainer3D_obj,_listenToSceneChanged),HX_("_listenToSceneChanged",a9,33,77,d9)},
	{::hx::fsBool,(int)offsetof(ObjectContainer3D_obj,_ignoreTransform),HX_("_ignoreTransform",7b,e4,59,fc)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ObjectContainer3D_obj_sStaticStorageInfo = 0;
#endif

static ::String ObjectContainer3D_obj_sMemberFields[] = {
	HX_("_ancestorsAllowMouseEnabled",44,cd,f7,72),
	HX_("_isRoot",cb,c4,8c,d7),
	HX_("_scene",8d,20,b9,74),
	HX_("_parent",c9,16,f5,5b),
	HX_("_sceneTransform",1f,f3,8c,cb),
	HX_("_sceneTransformDirty",73,1c,b0,63),
	HX_("_explicitPartition",17,85,95,70),
	HX_("_implicitPartition",c6,08,53,ed),
	HX_("_mouseEnabled",bb,e7,44,42),
	HX_("_sceneTransformChanged",95,17,81,67),
	HX_("_scenechanged",07,6c,40,20),
	HX_("_children",9e,10,00,b8),
	HX_("_mouseChildren",c5,08,bd,3d),
	HX_("_oldScene",84,ea,32,a7),
	HX_("_inverseSceneTransform",91,37,0c,0c),
	HX_("_inverseSceneTransformDirty",c1,7a,09,d0),
	HX_("_scenePosition",56,52,7c,56),
	HX_("_scenePositionDirty",dc,35,49,bb),
	HX_("_explicitVisibility",05,92,5e,7b),
	HX_("_implicitVisibility",76,47,74,24),
	HX_("_listenToSceneTransformChanged",93,6f,de,4f),
	HX_("_listenToSceneChanged",a9,33,77,d9),
	HX_("_ignoreTransform",7b,e4,59,fc),
	HX_("get_ignoreTransform",11,71,85,9c),
	HX_("set_ignoreTransform",1d,64,22,d9),
	HX_("get_implicitPartition",dc,66,eb,98),
	HX_("set_implicitPartition",e8,34,f4,ec),
	HX_("get_isVisible",7f,c9,86,68),
	HX_("setParent",6c,7a,25,4d),
	HX_("notifySceneTransformChange",79,51,cb,e8),
	HX_("notifySceneChange",93,ef,c1,21),
	HX_("updateMouseChildren",bb,10,f2,92),
	HX_("get_mouseEnabled",65,41,75,64),
	HX_("set_mouseEnabled",d9,2e,b7,ba),
	HX_("invalidateTransform",71,6c,78,d4),
	HX_("invalidateSceneTransform",5b,d9,ab,50),
	HX_("updateSceneTransform",69,e2,be,04),
	HX_("get_mouseChildren",db,23,db,05),
	HX_("set_mouseChildren",e7,fb,48,29),
	HX_("get_visible",89,d8,1e,29),
	HX_("set_visible",95,df,8b,33),
	HX_("get_assetType",a1,14,13,73),
	HX_("get_scenePosition",6c,6d,9a,1e),
	HX_("get_minX",0f,0a,17,c8),
	HX_("get_minY",10,0a,17,c8),
	HX_("get_minZ",11,0a,17,c8),
	HX_("get_maxX",bd,00,11,c8),
	HX_("get_maxY",be,00,11,c8),
	HX_("get_maxZ",bf,00,11,c8),
	HX_("get_partition",c1,75,23,5f),
	HX_("set_partition",cd,57,29,a4),
	HX_("get_sceneTransform",49,8b,c6,1d),
	HX_("get_scene",a3,35,7b,bc),
	HX_("set_scene",af,21,cc,9f),
	HX_("get_inverseSceneTransform",a7,58,fc,b8),
	HX_("get_parent",f3,74,05,de),
	HX_("contains",1f,5a,7b,2c),
	HX_("addChild",bb,cf,16,bf),
	HX_("addChildren",80,50,c6,a1),
	HX_("removeChild",b8,86,ed,43),
	HX_("removeChildAt",cb,dd,66,3f),
	HX_("removeChildInternal",15,22,8f,75),
	HX_("getChildAt",b9,07,0e,b6),
	HX_("get_numChildren",3c,21,62,1d),
	HX_("lookAt",32,75,b5,61),
	HX_("translateLocal",3d,27,a9,e0),
	HX_("dispose",9f,80,4c,bb),
	HX_("disposeWithChildren",a4,80,cf,5f),
	HX_("clone",5d,13,63,48),
	HX_("rotate",5b,46,20,cb),
	HX_("dispatchEvent",00,c7,64,c6),
	HX_("updateImplicitVisibility",c0,a3,70,aa),
	HX_("addEventListener",cd,0b,64,f1),
	HX_("removeEventListener",ca,87,75,55),
	::String(null()) };

::hx::Class ObjectContainer3D_obj::__mClass;

void ObjectContainer3D_obj::__register()
{
	ObjectContainer3D_obj _hx_dummy;
	ObjectContainer3D_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.containers.ObjectContainer3D",46,0c,91,38);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ObjectContainer3D_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ObjectContainer3D_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ObjectContainer3D_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ObjectContainer3D_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace containers
