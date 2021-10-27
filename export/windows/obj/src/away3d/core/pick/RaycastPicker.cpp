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
#ifndef INCLUDED_away3d_containers_View3D
#include <away3d/containers/View3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_data_EntityListItem
#include <away3d/core/data/EntityListItem.h>
#endif
#ifndef INCLUDED_away3d_core_pick_IPicker
#include <away3d/core/pick/IPicker.h>
#endif
#ifndef INCLUDED_away3d_core_pick_IPickingCollider
#include <away3d/core/pick/IPickingCollider.h>
#endif
#ifndef INCLUDED_away3d_core_pick_PickingCollisionVO
#include <away3d/core/pick/PickingCollisionVO.h>
#endif
#ifndef INCLUDED_away3d_core_pick_RaycastPicker
#include <away3d/core/pick/RaycastPicker.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_EntityCollector
#include <away3d/core/traverse/EntityCollector.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_PartitionTraverser
#include <away3d/core/traverse/PartitionTraverser.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_RaycastCollector
#include <away3d/core/traverse/RaycastCollector.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a90213d3448ef3b3_18_new,"away3d.core.pick.RaycastPicker","new",0x2ff53f9c,"away3d.core.pick.RaycastPicker.new","away3d/core/pick/RaycastPicker.hx",18,0xae5080f5)
HX_LOCAL_STACK_FRAME(_hx_pos_a90213d3448ef3b3_40_get_onlyMouseEnabled,"away3d.core.pick.RaycastPicker","get_onlyMouseEnabled",0x90abaab5,"away3d.core.pick.RaycastPicker.get_onlyMouseEnabled","away3d/core/pick/RaycastPicker.hx",40,0xae5080f5)
HX_LOCAL_STACK_FRAME(_hx_pos_a90213d3448ef3b3_44_set_onlyMouseEnabled,"away3d.core.pick.RaycastPicker","set_onlyMouseEnabled",0x5d636229,"away3d.core.pick.RaycastPicker.set_onlyMouseEnabled","away3d/core/pick/RaycastPicker.hx",44,0xae5080f5)
HX_LOCAL_STACK_FRAME(_hx_pos_a90213d3448ef3b3_65_getViewCollision,"away3d.core.pick.RaycastPicker","getViewCollision",0xe74ec61b,"away3d.core.pick.RaycastPicker.getViewCollision","away3d/core/pick/RaycastPicker.hx",65,0xae5080f5)
HX_LOCAL_STACK_FRAME(_hx_pos_a90213d3448ef3b3_110_getSceneCollision,"away3d.core.pick.RaycastPicker","getSceneCollision",0x76e6f4f8,"away3d.core.pick.RaycastPicker.getSceneCollision","away3d/core/pick/RaycastPicker.hx",110,0xae5080f5)
HX_LOCAL_STACK_FRAME(_hx_pos_a90213d3448ef3b3_145_getEntityCollision,"away3d.core.pick.RaycastPicker","getEntityCollision",0x96e82d1d,"away3d.core.pick.RaycastPicker.getEntityCollision","away3d/core/pick/RaycastPicker.hx",145,0xae5080f5)
HX_LOCAL_STACK_FRAME(_hx_pos_a90213d3448ef3b3_159_setIgnoreList,"away3d.core.pick.RaycastPicker","setIgnoreList",0xf0d7830e,"away3d.core.pick.RaycastPicker.setIgnoreList","away3d/core/pick/RaycastPicker.hx",159,0xae5080f5)
HX_LOCAL_STACK_FRAME(_hx_pos_a90213d3448ef3b3_163_isIgnored,"away3d.core.pick.RaycastPicker","isIgnored",0x8cbe3884,"away3d.core.pick.RaycastPicker.isIgnored","away3d/core/pick/RaycastPicker.hx",163,0xae5080f5)
HX_LOCAL_STACK_FRAME(_hx_pos_a90213d3448ef3b3_178_sortOnNearT,"away3d.core.pick.RaycastPicker","sortOnNearT",0x70fccc4b,"away3d.core.pick.RaycastPicker.sortOnNearT","away3d/core/pick/RaycastPicker.hx",178,0xae5080f5)
HX_LOCAL_STACK_FRAME(_hx_pos_a90213d3448ef3b3_182_getPickingCollisionVO,"away3d.core.pick.RaycastPicker","getPickingCollisionVO",0x3bea077c,"away3d.core.pick.RaycastPicker.getPickingCollisionVO","away3d/core/pick/RaycastPicker.hx",182,0xae5080f5)
HX_LOCAL_STACK_FRAME(_hx_pos_a90213d3448ef3b3_230_updateLocalPosition,"away3d.core.pick.RaycastPicker","updateLocalPosition",0x8250a8a7,"away3d.core.pick.RaycastPicker.updateLocalPosition","away3d/core/pick/RaycastPicker.hx",230,0xae5080f5)
HX_LOCAL_STACK_FRAME(_hx_pos_a90213d3448ef3b3_244_dispose,"away3d.core.pick.RaycastPicker","dispose",0xd5dc3ddb,"away3d.core.pick.RaycastPicker.dispose","away3d/core/pick/RaycastPicker.hx",244,0xae5080f5)
HX_LOCAL_STACK_FRAME(_hx_pos_a90213d3448ef3b3_22_boot,"away3d.core.pick.RaycastPicker","boot",0xbebb6976,"away3d.core.pick.RaycastPicker.boot","away3d/core/pick/RaycastPicker.hx",22,0xae5080f5)
HX_LOCAL_STACK_FRAME(_hx_pos_a90213d3448ef3b3_23_boot,"away3d.core.pick.RaycastPicker","boot",0xbebb6976,"away3d.core.pick.RaycastPicker.boot","away3d/core/pick/RaycastPicker.hx",23,0xae5080f5)
namespace away3d{
namespace core{
namespace pick{

void RaycastPicker_obj::__construct(bool findClosestCollision){
            	HX_GC_STACKFRAME(&_hx_pos_a90213d3448ef3b3_18_new)
HXLINE(  29)		this->_onlyMouseEnabled = true;
HXLINE(  28)		this->_ignoredEntities = ::Array_obj< ::Dynamic>::__new();
HXLINE(  27)		this->_raycastCollector =  ::away3d::core::traverse::RaycastCollector_obj::__alloc( HX_CTX );
HXLINE(  57)		this->_findClosestCollision = findClosestCollision;
HXLINE(  58)		int length = null();
HXDLIN(  58)		bool fixed = null();
HXDLIN(  58)		::Array< ::Dynamic> array = null();
HXDLIN(  58)		this->_entities =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
            	}

Dynamic RaycastPicker_obj::__CreateEmpty() { return new RaycastPicker_obj; }

void *RaycastPicker_obj::_hx_vtable = 0;

Dynamic RaycastPicker_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RaycastPicker_obj > _hx_result = new RaycastPicker_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool RaycastPicker_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x58575818;
}

static ::away3d::core::pick::IPicker_obj _hx_away3d_core_pick_RaycastPicker__hx_away3d_core_pick_IPicker= {
	( bool (::hx::Object::*)())&::away3d::core::pick::RaycastPicker_obj::get_onlyMouseEnabled,
	( bool (::hx::Object::*)(bool))&::away3d::core::pick::RaycastPicker_obj::set_onlyMouseEnabled,
	(  ::away3d::core::pick::PickingCollisionVO (::hx::Object::*)(Float,Float, ::away3d::containers::View3D))&::away3d::core::pick::RaycastPicker_obj::getViewCollision,
	(  ::away3d::core::pick::PickingCollisionVO (::hx::Object::*)( ::openfl::geom::Vector3D, ::openfl::geom::Vector3D, ::away3d::containers::Scene3D))&::away3d::core::pick::RaycastPicker_obj::getSceneCollision,
	( void (::hx::Object::*)())&::away3d::core::pick::RaycastPicker_obj::dispose,
};

void *RaycastPicker_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xe9ec8ad8: return &_hx_away3d_core_pick_RaycastPicker__hx_away3d_core_pick_IPicker;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

bool RaycastPicker_obj::get_onlyMouseEnabled(){
            	HX_STACKFRAME(&_hx_pos_a90213d3448ef3b3_40_get_onlyMouseEnabled)
HXDLIN(  40)		return this->_onlyMouseEnabled;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RaycastPicker_obj,get_onlyMouseEnabled,return )

bool RaycastPicker_obj::set_onlyMouseEnabled(bool value){
            	HX_STACKFRAME(&_hx_pos_a90213d3448ef3b3_44_set_onlyMouseEnabled)
HXLINE(  45)		this->_onlyMouseEnabled = value;
HXLINE(  46)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(RaycastPicker_obj,set_onlyMouseEnabled,return )

 ::away3d::core::pick::PickingCollisionVO RaycastPicker_obj::getViewCollision(Float x,Float y, ::away3d::containers::View3D view){
            	HX_STACKFRAME(&_hx_pos_a90213d3448ef3b3_65_getViewCollision)
HXLINE(  67)		 ::away3d::core::traverse::EntityCollector collector = view->get_entityCollector();
HXLINE(  70)		if ((collector->get_numMouseEnableds() == 0)) {
HXLINE(  71)			return null();
            		}
HXLINE(  74)		 ::openfl::geom::Vector3D rayPosition = view->unproject(x,y,( (Float)(0) ),::away3d::core::pick::RaycastPicker_obj::tempRayPosition);
HXLINE(  75)		 ::openfl::geom::Vector3D rayDirection = view->unproject(x,y,( (Float)(1) ),::away3d::core::pick::RaycastPicker_obj::tempRayDirection);
HXLINE(  76)		rayDirection->x = (rayDirection->x - rayPosition->x);
HXLINE(  77)		rayDirection->y = (rayDirection->y - rayPosition->y);
HXLINE(  78)		rayDirection->z = (rayDirection->z - rayPosition->z);
HXLINE(  81)		this->_numEntities = 0;
HXLINE(  82)		 ::away3d::core::data::EntityListItem node = collector->get_entityHead();
HXLINE(  83)		 ::away3d::entities::Entity entity;
HXLINE(  84)		while(::hx::IsNotNull( node )){
HXLINE(  85)			entity = node->entity;
HXLINE(  87)			if (this->isIgnored(entity)) {
HXLINE(  88)				node = node->next;
HXLINE(  89)				continue;
            			}
HXLINE(  93)			bool _hx_tmp;
HXDLIN(  93)			if (entity->get_isVisible()) {
HXLINE(  93)				_hx_tmp = entity->isIntersectingRay(rayPosition,rayDirection);
            			}
            			else {
HXLINE(  93)				_hx_tmp = false;
            			}
HXDLIN(  93)			if (_hx_tmp) {
HXLINE(  94)				this->_entities->set(this->_numEntities++,entity).StaticCast<  ::away3d::entities::Entity >();
            			}
HXLINE(  96)			node = node->next;
            		}
HXLINE( 100)		if ((this->_numEntities == 0)) {
HXLINE( 101)			return null();
            		}
HXLINE( 103)		return this->getPickingCollisionVO();
            	}


HX_DEFINE_DYNAMIC_FUNC3(RaycastPicker_obj,getViewCollision,return )

 ::away3d::core::pick::PickingCollisionVO RaycastPicker_obj::getSceneCollision( ::openfl::geom::Vector3D position, ::openfl::geom::Vector3D direction, ::away3d::containers::Scene3D scene){
            	HX_STACKFRAME(&_hx_pos_a90213d3448ef3b3_110_getSceneCollision)
HXLINE( 112)		this->_raycastCollector->clear();
HXLINE( 115)		this->_raycastCollector->set_rayPosition(position);
HXLINE( 116)		this->_raycastCollector->set_rayDirection(direction);
HXLINE( 119)		scene->traversePartitions(this->_raycastCollector);
HXLINE( 121)		this->_numEntities = 0;
HXLINE( 122)		 ::away3d::core::data::EntityListItem node = this->_raycastCollector->get_entityHead();
HXLINE( 123)		 ::away3d::entities::Entity entity;
HXLINE( 124)		while(::hx::IsNotNull( node )){
HXLINE( 125)			entity = node->entity;
HXLINE( 127)			if (this->isIgnored(entity)) {
HXLINE( 128)				node = node->next;
HXLINE( 129)				continue;
            			}
HXLINE( 132)			this->_entities->set(this->_numEntities++,entity).StaticCast<  ::away3d::entities::Entity >();
HXLINE( 134)			node = node->next;
            		}
HXLINE( 138)		if ((this->_numEntities == 0)) {
HXLINE( 139)			return null();
            		}
HXLINE( 141)		return this->getPickingCollisionVO();
            	}


HX_DEFINE_DYNAMIC_FUNC3(RaycastPicker_obj,getSceneCollision,return )

 ::away3d::core::pick::PickingCollisionVO RaycastPicker_obj::getEntityCollision( ::openfl::geom::Vector3D position, ::openfl::geom::Vector3D direction,::Array< ::Dynamic> entities){
            	HX_STACKFRAME(&_hx_pos_a90213d3448ef3b3_145_getEntityCollision)
HXLINE( 146)		this->_numEntities = 0;
HXLINE( 148)		 ::away3d::entities::Entity entity;
HXLINE( 149)		{
HXLINE( 149)			int _g = 0;
HXDLIN( 149)			while((_g < entities->length)){
HXLINE( 149)				 ::away3d::entities::Entity entity = entities->__get(_g).StaticCast<  ::away3d::entities::Entity >();
HXDLIN( 149)				_g = (_g + 1);
HXLINE( 150)				if (entity->isIntersectingRay(position,direction)) {
HXLINE( 151)					this->_entities->set(this->_numEntities++,entity).StaticCast<  ::away3d::entities::Entity >();
            				}
            			}
            		}
HXLINE( 154)		return this->getPickingCollisionVO();
            	}


HX_DEFINE_DYNAMIC_FUNC3(RaycastPicker_obj,getEntityCollision,return )

void RaycastPicker_obj::setIgnoreList(::Array< ::Dynamic> entities){
            	HX_STACKFRAME(&_hx_pos_a90213d3448ef3b3_159_setIgnoreList)
HXDLIN( 159)		this->_ignoredEntities = entities;
            	}


HX_DEFINE_DYNAMIC_FUNC1(RaycastPicker_obj,setIgnoreList,(void))

bool RaycastPicker_obj::isIgnored( ::away3d::entities::Entity entity){
            	HX_STACKFRAME(&_hx_pos_a90213d3448ef3b3_163_isIgnored)
HXLINE( 164)		bool _hx_tmp;
HXDLIN( 164)		if (this->_onlyMouseEnabled) {
HXLINE( 164)			if (entity->_ancestorsAllowMouseEnabled) {
HXLINE( 164)				_hx_tmp = !(entity->get_mouseEnabled());
            			}
            			else {
HXLINE( 164)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE( 164)			_hx_tmp = false;
            		}
HXDLIN( 164)		if (_hx_tmp) {
HXLINE( 165)			return true;
            		}
HXLINE( 167)		 ::away3d::entities::Entity ignoredEntity;
HXLINE( 168)		{
HXLINE( 168)			int _g = 0;
HXDLIN( 168)			::Array< ::Dynamic> _g1 = this->_ignoredEntities;
HXDLIN( 168)			while((_g < _g1->length)){
HXLINE( 168)				 ::away3d::entities::Entity ignoredEntity = _g1->__get(_g).StaticCast<  ::away3d::entities::Entity >();
HXDLIN( 168)				_g = (_g + 1);
HXLINE( 169)				if (::hx::IsInstanceEq( ignoredEntity,entity )) {
HXLINE( 170)					return true;
            				}
            			}
            		}
HXLINE( 173)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(RaycastPicker_obj,isIgnored,return )

int RaycastPicker_obj::sortOnNearT( ::away3d::entities::Entity entity1, ::away3d::entities::Entity entity2){
            	HX_STACKFRAME(&_hx_pos_a90213d3448ef3b3_178_sortOnNearT)
HXDLIN( 178)		Float _hx_tmp = entity1->get_pickingCollisionVO()->rayEntryDistance;
HXDLIN( 178)		if ((_hx_tmp > entity2->get_pickingCollisionVO()->rayEntryDistance)) {
HXDLIN( 178)			return 1;
            		}
            		else {
HXDLIN( 178)			return -1;
            		}
HXDLIN( 178)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC2(RaycastPicker_obj,sortOnNearT,return )

 ::away3d::core::pick::PickingCollisionVO RaycastPicker_obj::getPickingCollisionVO(){
            	HX_STACKFRAME(&_hx_pos_a90213d3448ef3b3_182_getPickingCollisionVO)
HXLINE( 184)		this->_entities->set_length(this->_numEntities);
HXLINE( 188)		this->_entities->sort(this->sortOnNearT_dyn());
HXLINE( 195)		Float shortestCollisionDistance = ::Math_obj::POSITIVE_INFINITY;
HXLINE( 196)		 ::away3d::core::pick::PickingCollisionVO bestCollisionVO = null();
HXLINE( 197)		 ::away3d::core::pick::PickingCollisionVO pickingCollisionVO;
HXLINE( 198)		 ::away3d::entities::Entity entity;
HXLINE( 199)		int i;
HXLINE( 201)		{
HXLINE( 201)			int _g = 0;
HXDLIN( 201)			int _g1 = this->_numEntities;
HXDLIN( 201)			while((_g < _g1)){
HXLINE( 201)				_g = (_g + 1);
HXDLIN( 201)				int i = (_g - 1);
HXLINE( 202)				entity = this->_entities->get(i).StaticCast<  ::away3d::entities::Entity >();
HXLINE( 203)				pickingCollisionVO = entity->_pickingCollisionVO;
HXLINE( 204)				if (::hx::IsNotNull( entity->get_pickingCollider() )) {
HXLINE( 206)					bool _hx_tmp;
HXDLIN( 206)					bool _hx_tmp1;
HXDLIN( 206)					if (::hx::IsNotNull( bestCollisionVO )) {
HXLINE( 206)						_hx_tmp1 = (pickingCollisionVO->rayEntryDistance < bestCollisionVO->rayEntryDistance);
            					}
            					else {
HXLINE( 206)						_hx_tmp1 = true;
            					}
HXDLIN( 206)					if (_hx_tmp1) {
HXLINE( 206)						_hx_tmp = entity->collidesBefore(shortestCollisionDistance,this->_findClosestCollision);
            					}
            					else {
HXLINE( 206)						_hx_tmp = false;
            					}
HXDLIN( 206)					if (_hx_tmp) {
HXLINE( 207)						shortestCollisionDistance = pickingCollisionVO->rayEntryDistance;
HXLINE( 208)						bestCollisionVO = pickingCollisionVO;
HXLINE( 209)						if (!(this->_findClosestCollision)) {
HXLINE( 210)							this->updateLocalPosition(pickingCollisionVO);
HXLINE( 211)							return pickingCollisionVO;
            						}
            					}
            				}
            				else {
HXLINE( 214)					bool _hx_tmp;
HXDLIN( 214)					if (::hx::IsNotNull( bestCollisionVO )) {
HXLINE( 214)						_hx_tmp = (pickingCollisionVO->rayEntryDistance < bestCollisionVO->rayEntryDistance);
            					}
            					else {
HXLINE( 214)						_hx_tmp = true;
            					}
HXDLIN( 214)					if (_hx_tmp) {
HXLINE( 219)						if (!(pickingCollisionVO->rayOriginIsInsideBounds)) {
HXLINE( 220)							this->updateLocalPosition(pickingCollisionVO);
HXLINE( 221)							return pickingCollisionVO;
            						}
            					}
            				}
            			}
            		}
HXLINE( 226)		return bestCollisionVO;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RaycastPicker_obj,getPickingCollisionVO,return )

void RaycastPicker_obj::updateLocalPosition( ::away3d::core::pick::PickingCollisionVO pickingCollisionVO){
            	HX_GC_STACKFRAME(&_hx_pos_a90213d3448ef3b3_230_updateLocalPosition)
HXLINE( 231)		if (::hx::IsNull( pickingCollisionVO->localPosition )) {
HXLINE( 232)			pickingCollisionVO->localPosition =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE( 234)		 ::openfl::geom::Vector3D collisionPos = pickingCollisionVO->localPosition;
HXLINE( 235)		 ::openfl::geom::Vector3D rayDir = pickingCollisionVO->localRayDirection;
HXLINE( 236)		 ::openfl::geom::Vector3D rayPos = pickingCollisionVO->localRayPosition;
HXLINE( 237)		Float t = pickingCollisionVO->rayEntryDistance;
HXLINE( 238)		collisionPos->x = (rayPos->x + (t * rayDir->x));
HXLINE( 239)		collisionPos->y = (rayPos->y + (t * rayDir->y));
HXLINE( 240)		collisionPos->z = (rayPos->z + (t * rayDir->z));
            	}


HX_DEFINE_DYNAMIC_FUNC1(RaycastPicker_obj,updateLocalPosition,(void))

void RaycastPicker_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_a90213d3448ef3b3_244_dispose)
            	}


HX_DEFINE_DYNAMIC_FUNC0(RaycastPicker_obj,dispose,(void))

 ::openfl::geom::Vector3D RaycastPicker_obj::tempRayPosition;

 ::openfl::geom::Vector3D RaycastPicker_obj::tempRayDirection;


::hx::ObjectPtr< RaycastPicker_obj > RaycastPicker_obj::__new(bool findClosestCollision) {
	::hx::ObjectPtr< RaycastPicker_obj > __this = new RaycastPicker_obj();
	__this->__construct(findClosestCollision);
	return __this;
}

::hx::ObjectPtr< RaycastPicker_obj > RaycastPicker_obj::__alloc(::hx::Ctx *_hx_ctx,bool findClosestCollision) {
	RaycastPicker_obj *__this = (RaycastPicker_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RaycastPicker_obj), true, "away3d.core.pick.RaycastPicker"));
	*(void **)__this = RaycastPicker_obj::_hx_vtable;
	__this->__construct(findClosestCollision);
	return __this;
}

RaycastPicker_obj::RaycastPicker_obj()
{
}

void RaycastPicker_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RaycastPicker);
	HX_MARK_MEMBER_NAME(_findClosestCollision,"_findClosestCollision");
	HX_MARK_MEMBER_NAME(_raycastCollector,"_raycastCollector");
	HX_MARK_MEMBER_NAME(_ignoredEntities,"_ignoredEntities");
	HX_MARK_MEMBER_NAME(_onlyMouseEnabled,"_onlyMouseEnabled");
	HX_MARK_MEMBER_NAME(_entities,"_entities");
	HX_MARK_MEMBER_NAME(_numEntities,"_numEntities");
	HX_MARK_MEMBER_NAME(_hasCollisions,"_hasCollisions");
	HX_MARK_END_CLASS();
}

void RaycastPicker_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_findClosestCollision,"_findClosestCollision");
	HX_VISIT_MEMBER_NAME(_raycastCollector,"_raycastCollector");
	HX_VISIT_MEMBER_NAME(_ignoredEntities,"_ignoredEntities");
	HX_VISIT_MEMBER_NAME(_onlyMouseEnabled,"_onlyMouseEnabled");
	HX_VISIT_MEMBER_NAME(_entities,"_entities");
	HX_VISIT_MEMBER_NAME(_numEntities,"_numEntities");
	HX_VISIT_MEMBER_NAME(_hasCollisions,"_hasCollisions");
}

::hx::Val RaycastPicker_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_entities") ) { return ::hx::Val( _entities ); }
		if (HX_FIELD_EQ(inName,"isIgnored") ) { return ::hx::Val( isIgnored_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sortOnNearT") ) { return ::hx::Val( sortOnNearT_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_numEntities") ) { return ::hx::Val( _numEntities ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setIgnoreList") ) { return ::hx::Val( setIgnoreList_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_hasCollisions") ) { return ::hx::Val( _hasCollisions ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onlyMouseEnabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_onlyMouseEnabled() ); }
		if (HX_FIELD_EQ(inName,"_ignoredEntities") ) { return ::hx::Val( _ignoredEntities ); }
		if (HX_FIELD_EQ(inName,"getViewCollision") ) { return ::hx::Val( getViewCollision_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_raycastCollector") ) { return ::hx::Val( _raycastCollector ); }
		if (HX_FIELD_EQ(inName,"_onlyMouseEnabled") ) { return ::hx::Val( _onlyMouseEnabled ); }
		if (HX_FIELD_EQ(inName,"getSceneCollision") ) { return ::hx::Val( getSceneCollision_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getEntityCollision") ) { return ::hx::Val( getEntityCollision_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateLocalPosition") ) { return ::hx::Val( updateLocalPosition_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_onlyMouseEnabled") ) { return ::hx::Val( get_onlyMouseEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_onlyMouseEnabled") ) { return ::hx::Val( set_onlyMouseEnabled_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_findClosestCollision") ) { return ::hx::Val( _findClosestCollision ); }
		if (HX_FIELD_EQ(inName,"getPickingCollisionVO") ) { return ::hx::Val( getPickingCollisionVO_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool RaycastPicker_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"tempRayPosition") ) { outValue = ( tempRayPosition ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"tempRayDirection") ) { outValue = ( tempRayDirection ); return true; }
	}
	return false;
}

::hx::Val RaycastPicker_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_entities") ) { _entities=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_numEntities") ) { _numEntities=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_hasCollisions") ) { _hasCollisions=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onlyMouseEnabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_onlyMouseEnabled(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"_ignoredEntities") ) { _ignoredEntities=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_raycastCollector") ) { _raycastCollector=inValue.Cast<  ::away3d::core::traverse::RaycastCollector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onlyMouseEnabled") ) { _onlyMouseEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_findClosestCollision") ) { _findClosestCollision=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool RaycastPicker_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"tempRayPosition") ) { tempRayPosition=ioValue.Cast<  ::openfl::geom::Vector3D >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"tempRayDirection") ) { tempRayDirection=ioValue.Cast<  ::openfl::geom::Vector3D >(); return true; }
	}
	return false;
}

void RaycastPicker_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("onlyMouseEnabled",68,98,03,a3));
	outFields->push(HX_("_findClosestCollision",11,93,de,88));
	outFields->push(HX_("_raycastCollector",c3,e4,ba,d0));
	outFields->push(HX_("_ignoredEntities",f4,2d,88,e7));
	outFields->push(HX_("_onlyMouseEnabled",c7,86,7e,3b));
	outFields->push(HX_("_entities",a0,8d,2b,da));
	outFields->push(HX_("_numEntities",a8,94,b5,e4));
	outFields->push(HX_("_hasCollisions",fc,63,c1,50));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo RaycastPicker_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(RaycastPicker_obj,_findClosestCollision),HX_("_findClosestCollision",11,93,de,88)},
	{::hx::fsObject /*  ::away3d::core::traverse::RaycastCollector */ ,(int)offsetof(RaycastPicker_obj,_raycastCollector),HX_("_raycastCollector",c3,e4,ba,d0)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(RaycastPicker_obj,_ignoredEntities),HX_("_ignoredEntities",f4,2d,88,e7)},
	{::hx::fsBool,(int)offsetof(RaycastPicker_obj,_onlyMouseEnabled),HX_("_onlyMouseEnabled",c7,86,7e,3b)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(RaycastPicker_obj,_entities),HX_("_entities",a0,8d,2b,da)},
	{::hx::fsInt,(int)offsetof(RaycastPicker_obj,_numEntities),HX_("_numEntities",a8,94,b5,e4)},
	{::hx::fsBool,(int)offsetof(RaycastPicker_obj,_hasCollisions),HX_("_hasCollisions",fc,63,c1,50)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo RaycastPicker_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(void *) &RaycastPicker_obj::tempRayPosition,HX_("tempRayPosition",ff,71,58,43)},
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(void *) &RaycastPicker_obj::tempRayDirection,HX_("tempRayDirection",29,bc,f9,e9)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String RaycastPicker_obj_sMemberFields[] = {
	HX_("_findClosestCollision",11,93,de,88),
	HX_("_raycastCollector",c3,e4,ba,d0),
	HX_("_ignoredEntities",f4,2d,88,e7),
	HX_("_onlyMouseEnabled",c7,86,7e,3b),
	HX_("_entities",a0,8d,2b,da),
	HX_("_numEntities",a8,94,b5,e4),
	HX_("_hasCollisions",fc,63,c1,50),
	HX_("get_onlyMouseEnabled",71,fd,6d,c1),
	HX_("set_onlyMouseEnabled",e5,b4,25,8e),
	HX_("getViewCollision",d7,0a,ca,3f),
	HX_("getSceneCollision",bc,d4,47,8a),
	HX_("getEntityCollision",d9,18,4b,78),
	HX_("setIgnoreList",d2,30,54,e9),
	HX_("isIgnored",48,b4,d7,e0),
	HX_("sortOnNearT",0f,c1,3f,1b),
	HX_("getPickingCollisionVO",40,19,30,b5),
	HX_("updateLocalPosition",6b,01,7c,d7),
	HX_("dispose",9f,80,4c,bb),
	::String(null()) };

static void RaycastPicker_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RaycastPicker_obj::tempRayPosition,"tempRayPosition");
	HX_MARK_MEMBER_NAME(RaycastPicker_obj::tempRayDirection,"tempRayDirection");
};

#ifdef HXCPP_VISIT_ALLOCS
static void RaycastPicker_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RaycastPicker_obj::tempRayPosition,"tempRayPosition");
	HX_VISIT_MEMBER_NAME(RaycastPicker_obj::tempRayDirection,"tempRayDirection");
};

#endif

::hx::Class RaycastPicker_obj::__mClass;

static ::String RaycastPicker_obj_sStaticFields[] = {
	HX_("tempRayPosition",ff,71,58,43),
	HX_("tempRayDirection",29,bc,f9,e9),
	::String(null())
};

void RaycastPicker_obj::__register()
{
	RaycastPicker_obj _hx_dummy;
	RaycastPicker_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.pick.RaycastPicker",aa,81,46,63);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &RaycastPicker_obj::__GetStatic;
	__mClass->mSetStaticField = &RaycastPicker_obj::__SetStatic;
	__mClass->mMarkFunc = RaycastPicker_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(RaycastPicker_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RaycastPicker_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RaycastPicker_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = RaycastPicker_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RaycastPicker_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RaycastPicker_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void RaycastPicker_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_a90213d3448ef3b3_22_boot)
HXDLIN(  22)		tempRayPosition =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_a90213d3448ef3b3_23_boot)
HXDLIN(  23)		tempRayDirection =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            	}
}

} // end namespace away3d
} // end namespace core
} // end namespace pick
