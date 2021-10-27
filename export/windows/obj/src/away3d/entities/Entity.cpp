#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_bounds_AxisAlignedBoundingBox
#include <away3d/bounds/AxisAlignedBoundingBox.h>
#endif
#ifndef INCLUDED_away3d_bounds_BoundingVolumeBase
#include <away3d/bounds/BoundingVolumeBase.h>
#endif
#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_containers_Scene3D
#include <away3d/containers/Scene3D.h>
#endif
#ifndef INCLUDED_away3d_controllers_ControllerBase
#include <away3d/controllers/ControllerBase.h>
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
#ifndef INCLUDED_away3d_core_math_Matrix3DUtils
#include <away3d/core/math/Matrix3DUtils.h>
#endif
#ifndef INCLUDED_away3d_core_partition_EntityNode
#include <away3d/core/partition/EntityNode.h>
#endif
#ifndef INCLUDED_away3d_core_partition_NodeBase
#include <away3d/core/partition/NodeBase.h>
#endif
#ifndef INCLUDED_away3d_core_partition_Partition3D
#include <away3d/core/partition/Partition3D.h>
#endif
#ifndef INCLUDED_away3d_core_pick_IPickingCollider
#include <away3d/core/pick/IPickingCollider.h>
#endif
#ifndef INCLUDED_away3d_core_pick_PickingCollisionVO
#include <away3d/core/pick/PickingCollisionVO.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_entities_SegmentSet
#include <away3d/entities/SegmentSet.h>
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
#ifndef INCLUDED_away3d_primitives_WireframePrimitiveBase
#include <away3d/primitives/WireframePrimitiveBase.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_75ad46a2cc1572c9_22_new,"away3d.entities.Entity","new",0x6bf01093,"away3d.entities.Entity.new","away3d/entities/Entity.hx",22,0x5e81ee5d)
HX_LOCAL_STACK_FRAME(_hx_pos_75ad46a2cc1572c9_47_set_ignoreTransform,"away3d.entities.Entity","set_ignoreTransform",0x47d17a50,"away3d.entities.Entity.set_ignoreTransform","away3d/entities/Entity.hx",47,0x5e81ee5d)
HX_LOCAL_STACK_FRAME(_hx_pos_75ad46a2cc1572c9_63_get_shaderPickingDetails,"away3d.entities.Entity","get_shaderPickingDetails",0x4bb5bc9c,"away3d.entities.Entity.get_shaderPickingDetails","away3d/entities/Entity.hx",63,0x5e81ee5d)
HX_LOCAL_STACK_FRAME(_hx_pos_75ad46a2cc1572c9_67_set_shaderPickingDetails,"away3d.entities.Entity","set_shaderPickingDetails",0x5e903e10,"away3d.entities.Entity.set_shaderPickingDetails","away3d/entities/Entity.hx",67,0x5e81ee5d)
HX_LOCAL_STACK_FRAME(_hx_pos_75ad46a2cc1572c9_78_get_staticNode,"away3d.entities.Entity","get_staticNode",0x571a20c6,"away3d.entities.Entity.get_staticNode","away3d/entities/Entity.hx",78,0x5e81ee5d)
HX_LOCAL_STACK_FRAME(_hx_pos_75ad46a2cc1572c9_82_set_staticNode,"away3d.entities.Entity","set_staticNode",0x773a093a,"away3d.entities.Entity.set_staticNode","away3d/entities/Entity.hx",82,0x5e81ee5d)
HX_LOCAL_STACK_FRAME(_hx_pos_75ad46a2cc1572c9_91_get_pickingCollisionVO,"away3d.entities.Entity","get_pickingCollisionVO",0x04c29c00,"away3d.entities.Entity.get_pickingCollisionVO","away3d/entities/Entity.hx",91,0x5e81ee5d)
HX_LOCAL_STACK_FRAME(_hx_pos_75ad46a2cc1572c9_105_collidesBefore,"away3d.entities.Entity","collidesBefore",0x2b2e1441,"away3d.entities.Entity.collidesBefore","away3d/entities/Entity.hx",105,0x5e81ee5d)
HX_LOCAL_STACK_FRAME(_hx_pos_75ad46a2cc1572c9_113_get_showBounds,"away3d.entities.Entity","get_showBounds",0x7bf64a48,"away3d.entities.Entity.get_showBounds","away3d/entities/Entity.hx",113,0x5e81ee5d)
HX_LOCAL_STACK_FRAME(_hx_pos_75ad46a2cc1572c9_117_set_showBounds,"away3d.entities.Entity","set_showBounds",0x9c1632bc,"away3d.entities.Entity.set_showBounds","away3d/entities/Entity.hx",117,0x5e81ee5d)
HX_LOCAL_STACK_FRAME(_hx_pos_75ad46a2cc1572c9_134_get_minX,"away3d.entities.Entity","get_minX",0x024630fc,"away3d.entities.Entity.get_minX","away3d/entities/Entity.hx",134,0x5e81ee5d)
HX_LOCAL_STACK_FRAME(_hx_pos_75ad46a2cc1572c9_145_get_minY,"away3d.entities.Entity","get_minY",0x024630fd,"away3d.entities.Entity.get_minY","away3d/entities/Entity.hx",145,0x5e81ee5d)
HX_LOCAL_STACK_FRAME(_hx_pos_75ad46a2cc1572c9_156_get_minZ,"away3d.entities.Entity","get_minZ",0x024630fe,"away3d.entities.Entity.get_minZ","away3d/entities/Entity.hx",156,0x5e81ee5d)
HX_LOCAL_STACK_FRAME(_hx_pos_75ad46a2cc1572c9_167_get_maxX,"away3d.entities.Entity","get_maxX",0x024027aa,"away3d.entities.Entity.get_maxX","away3d/entities/Entity.hx",167,0x5e81ee5d)
HX_LOCAL_STACK_FRAME(_hx_pos_75ad46a2cc1572c9_178_get_maxY,"away3d.entities.Entity","get_maxY",0x024027ab,"away3d.entities.Entity.get_maxY","away3d/entities/Entity.hx",178,0x5e81ee5d)
HX_LOCAL_STACK_FRAME(_hx_pos_75ad46a2cc1572c9_189_get_maxZ,"away3d.entities.Entity","get_maxZ",0x024027ac,"away3d.entities.Entity.get_maxZ","away3d/entities/Entity.hx",189,0x5e81ee5d)
HX_LOCAL_STACK_FRAME(_hx_pos_75ad46a2cc1572c9_200_get_bounds,"away3d.entities.Entity","get_bounds",0xd81d726b,"away3d.entities.Entity.get_bounds","away3d/entities/Entity.hx",200,0x5e81ee5d)
HX_LOCAL_STACK_FRAME(_hx_pos_75ad46a2cc1572c9_208_set_bounds,"away3d.entities.Entity","set_bounds",0xdb9b10df,"away3d.entities.Entity.set_bounds","away3d/entities/Entity.hx",208,0x5e81ee5d)
HX_LOCAL_STACK_FRAME(_hx_pos_75ad46a2cc1572c9_219_get_worldBounds,"away3d.entities.Entity","get_worldBounds",0x5cc212b1,"away3d.entities.Entity.get_worldBounds","away3d/entities/Entity.hx",219,0x5e81ee5d)
HX_LOCAL_STACK_FRAME(_hx_pos_75ad46a2cc1572c9_227_updateWorldBounds,"away3d.entities.Entity","updateWorldBounds",0x30a1da51,"away3d.entities.Entity.updateWorldBounds","away3d/entities/Entity.hx",227,0x5e81ee5d)
HX_LOCAL_STACK_FRAME(_hx_pos_75ad46a2cc1572c9_236_set_implicitPartition,"away3d.entities.Entity","set_implicitPartition",0xb63b7ddb,"away3d.entities.Entity.set_implicitPartition","away3d/entities/Entity.hx",236,0x5e81ee5d)
HX_LOCAL_STACK_FRAME(_hx_pos_75ad46a2cc1572c9_253_set_scene,"away3d.entities.Entity","set_scene",0x4edf0a22,"away3d.entities.Entity.set_scene","away3d/entities/Entity.hx",253,0x5e81ee5d)
HX_LOCAL_STACK_FRAME(_hx_pos_75ad46a2cc1572c9_270_get_assetType,"away3d.entities.Entity","get_assetType",0x40ceb294,"away3d.entities.Entity.get_assetType","away3d/entities/Entity.hx",270,0x5e81ee5d)
HX_LOCAL_STACK_FRAME(_hx_pos_75ad46a2cc1572c9_282_get_pickingCollider,"away3d.entities.Entity","get_pickingCollider",0x733cb03f,"away3d.entities.Entity.get_pickingCollider","away3d/entities/Entity.hx",282,0x5e81ee5d)
HX_LOCAL_STACK_FRAME(_hx_pos_75ad46a2cc1572c9_286_set_pickingCollider,"away3d.entities.Entity","set_pickingCollider",0xafd9a34b,"away3d.entities.Entity.set_pickingCollider","away3d/entities/Entity.hx",286,0x5e81ee5d)
HX_LOCAL_STACK_FRAME(_hx_pos_75ad46a2cc1572c9_306_getEntityPartitionNode,"away3d.entities.Entity","getEntityPartitionNode",0x45b1d0a0,"away3d.entities.Entity.getEntityPartitionNode","away3d/entities/Entity.hx",306,0x5e81ee5d)
HX_LOCAL_STACK_FRAME(_hx_pos_75ad46a2cc1572c9_314_isIntersectingRay,"away3d.entities.Entity","isIntersectingRay",0x032462f0,"away3d.entities.Entity.isIntersectingRay","away3d/entities/Entity.hx",314,0x5e81ee5d)
HX_LOCAL_STACK_FRAME(_hx_pos_75ad46a2cc1572c9_346_createEntityPartitionNode,"away3d.entities.Entity","createEntityPartitionNode",0x41c3f4c0,"away3d.entities.Entity.createEntityPartitionNode","away3d/entities/Entity.hx",346,0x5e81ee5d)
HX_LOCAL_STACK_FRAME(_hx_pos_75ad46a2cc1572c9_358_getDefaultBoundingVolume,"away3d.entities.Entity","getDefaultBoundingVolume",0x5f318976,"away3d.entities.Entity.getDefaultBoundingVolume","away3d/entities/Entity.hx",358,0x5e81ee5d)
HX_LOCAL_STACK_FRAME(_hx_pos_75ad46a2cc1572c9_366_updateBounds,"away3d.entities.Entity","updateBounds",0x9392cecb,"away3d.entities.Entity.updateBounds","away3d/entities/Entity.hx",366,0x5e81ee5d)
HX_LOCAL_STACK_FRAME(_hx_pos_75ad46a2cc1572c9_374_invalidateSceneTransform,"away3d.entities.Entity","invalidateSceneTransform",0x85c06a48,"away3d.entities.Entity.invalidateSceneTransform","away3d/entities/Entity.hx",374,0x5e81ee5d)
HX_LOCAL_STACK_FRAME(_hx_pos_75ad46a2cc1572c9_385_invalidateBounds,"away3d.entities.Entity","invalidateBounds",0x11083e3d,"away3d.entities.Entity.invalidateBounds","away3d/entities/Entity.hx",385,0x5e81ee5d)
HX_LOCAL_STACK_FRAME(_hx_pos_75ad46a2cc1572c9_392_updateMouseChildren,"away3d.entities.Entity","updateMouseChildren",0x01a126ee,"away3d.entities.Entity.updateMouseChildren","away3d/entities/Entity.hx",392,0x5e81ee5d)
HX_LOCAL_STACK_FRAME(_hx_pos_75ad46a2cc1572c9_410_notifySceneBoundsInvalid,"away3d.entities.Entity","notifySceneBoundsInvalid",0x7658f22c,"away3d.entities.Entity.notifySceneBoundsInvalid","away3d/entities/Entity.hx",410,0x5e81ee5d)
HX_LOCAL_STACK_FRAME(_hx_pos_75ad46a2cc1572c9_419_notifyPartitionAssigned,"away3d.entities.Entity","notifyPartitionAssigned",0x2bfbff02,"away3d.entities.Entity.notifyPartitionAssigned","away3d/entities/Entity.hx",419,0x5e81ee5d)
HX_LOCAL_STACK_FRAME(_hx_pos_75ad46a2cc1572c9_428_notifyPartitionUnassigned,"away3d.entities.Entity","notifyPartitionUnassigned",0x9041fb5b,"away3d.entities.Entity.notifyPartitionUnassigned","away3d/entities/Entity.hx",428,0x5e81ee5d)
HX_LOCAL_STACK_FRAME(_hx_pos_75ad46a2cc1572c9_434_addBounds,"away3d.entities.Entity","addBounds",0xcd54a3e9,"away3d.entities.Entity.addBounds","away3d/entities/Entity.hx",434,0x5e81ee5d)
HX_LOCAL_STACK_FRAME(_hx_pos_75ad46a2cc1572c9_442_removeBounds,"away3d.entities.Entity","removeBounds",0x02fcc346,"away3d.entities.Entity.removeBounds","away3d/entities/Entity.hx",442,0x5e81ee5d)
HX_LOCAL_STACK_FRAME(_hx_pos_75ad46a2cc1572c9_451_internalUpdate,"away3d.entities.Entity","internalUpdate",0xe26383d3,"away3d.entities.Entity.internalUpdate","away3d/entities/Entity.hx",451,0x5e81ee5d)
namespace away3d{
namespace entities{

void Entity_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_75ad46a2cc1572c9_22_new)
HXLINE(  44)		this->_worldBoundsInvalid = true;
HXLINE(  42)		this->_boundsInvalid = true;
HXLINE(  34)		this->_boundsIsShown = false;
HXLINE( 296)		super::__construct();
HXLINE( 298)		this->_bounds = this->getDefaultBoundingVolume();
HXLINE( 299)		this->_worldBounds = this->getDefaultBoundingVolume();
            	}

Dynamic Entity_obj::__CreateEmpty() { return new Entity_obj; }

void *Entity_obj::_hx_vtable = 0;

Dynamic Entity_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Entity_obj > _hx_result = new Entity_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Entity_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x13fff02b) {
		if (inClassId<=(int)0x12b32fa7) {
			if (inClassId<=(int)0x0c89e854) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
			} else {
				return inClassId==(int)0x12b32fa7;
			}
		} else {
			return inClassId==(int)0x13fff02b;
		}
	} else {
		return inClassId==(int)0x1e6a8fa2 || inClassId==(int)0x37f46043;
	}
}

bool Entity_obj::set_ignoreTransform(bool value){
            	HX_STACKFRAME(&_hx_pos_75ad46a2cc1572c9_47_set_ignoreTransform)
HXLINE(  48)		if (::hx::IsNotNull( this->_scene )) {
HXLINE(  49)			this->_scene->invalidateEntityBounds(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE(  50)		this->super::set_ignoreTransform(value);
HXLINE(  51)		return value;
            	}


bool Entity_obj::get_shaderPickingDetails(){
            	HX_STACKFRAME(&_hx_pos_75ad46a2cc1572c9_63_get_shaderPickingDetails)
HXDLIN(  63)		return this->_shaderPickingDetails;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_shaderPickingDetails,return )

bool Entity_obj::set_shaderPickingDetails(bool value){
            	HX_STACKFRAME(&_hx_pos_75ad46a2cc1572c9_67_set_shaderPickingDetails)
HXLINE(  68)		this->_shaderPickingDetails = value;
HXLINE(  69)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_shaderPickingDetails,return )

bool Entity_obj::get_staticNode(){
            	HX_STACKFRAME(&_hx_pos_75ad46a2cc1572c9_78_get_staticNode)
HXDLIN(  78)		return this->_staticNode;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_staticNode,return )

bool Entity_obj::set_staticNode(bool value){
            	HX_STACKFRAME(&_hx_pos_75ad46a2cc1572c9_82_set_staticNode)
HXLINE(  83)		this->_staticNode = value;
HXLINE(  84)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_staticNode,return )

 ::away3d::core::pick::PickingCollisionVO Entity_obj::get_pickingCollisionVO(){
            	HX_GC_STACKFRAME(&_hx_pos_75ad46a2cc1572c9_91_get_pickingCollisionVO)
HXLINE(  92)		if (::hx::IsNull( this->_pickingCollisionVO )) {
HXLINE(  93)			this->_pickingCollisionVO =  ::away3d::core::pick::PickingCollisionVO_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE(  95)		return this->_pickingCollisionVO;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_pickingCollisionVO,return )

bool Entity_obj::collidesBefore(Float shortestCollisionDistance,bool findClosest){
            	HX_STACKFRAME(&_hx_pos_75ad46a2cc1572c9_105_collidesBefore)
HXDLIN( 105)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Entity_obj,collidesBefore,return )

bool Entity_obj::get_showBounds(){
            	HX_STACKFRAME(&_hx_pos_75ad46a2cc1572c9_113_get_showBounds)
HXDLIN( 113)		return this->_showBounds;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_showBounds,return )

bool Entity_obj::set_showBounds(bool value){
            	HX_STACKFRAME(&_hx_pos_75ad46a2cc1572c9_117_set_showBounds)
HXLINE( 118)		if ((value == this->_showBounds)) {
HXLINE( 119)			return value;
            		}
HXLINE( 121)		this->_showBounds = value;
HXLINE( 123)		if (this->_showBounds) {
HXLINE( 124)			this->addBounds();
            		}
            		else {
HXLINE( 126)			this->removeBounds();
            		}
HXLINE( 127)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_showBounds,return )

Float Entity_obj::get_minX(){
            	HX_STACKFRAME(&_hx_pos_75ad46a2cc1572c9_134_get_minX)
HXLINE( 135)		if (this->_boundsInvalid) {
HXLINE( 136)			this->updateBounds();
            		}
HXLINE( 138)		return this->_bounds->get_min()->x;
            	}


Float Entity_obj::get_minY(){
            	HX_STACKFRAME(&_hx_pos_75ad46a2cc1572c9_145_get_minY)
HXLINE( 146)		if (this->_boundsInvalid) {
HXLINE( 147)			this->updateBounds();
            		}
HXLINE( 149)		return this->_bounds->get_min()->y;
            	}


Float Entity_obj::get_minZ(){
            	HX_STACKFRAME(&_hx_pos_75ad46a2cc1572c9_156_get_minZ)
HXLINE( 157)		if (this->_boundsInvalid) {
HXLINE( 158)			this->updateBounds();
            		}
HXLINE( 160)		return this->_bounds->get_min()->z;
            	}


Float Entity_obj::get_maxX(){
            	HX_STACKFRAME(&_hx_pos_75ad46a2cc1572c9_167_get_maxX)
HXLINE( 168)		if (this->_boundsInvalid) {
HXLINE( 169)			this->updateBounds();
            		}
HXLINE( 171)		return this->_bounds->get_max()->x;
            	}


Float Entity_obj::get_maxY(){
            	HX_STACKFRAME(&_hx_pos_75ad46a2cc1572c9_178_get_maxY)
HXLINE( 179)		if (this->_boundsInvalid) {
HXLINE( 180)			this->updateBounds();
            		}
HXLINE( 182)		return this->_bounds->get_max()->y;
            	}


Float Entity_obj::get_maxZ(){
            	HX_STACKFRAME(&_hx_pos_75ad46a2cc1572c9_189_get_maxZ)
HXLINE( 190)		if (this->_boundsInvalid) {
HXLINE( 191)			this->updateBounds();
            		}
HXLINE( 193)		return this->_bounds->get_max()->z;
            	}


 ::away3d::bounds::BoundingVolumeBase Entity_obj::get_bounds(){
            	HX_STACKFRAME(&_hx_pos_75ad46a2cc1572c9_200_get_bounds)
HXLINE( 201)		if (this->_boundsInvalid) {
HXLINE( 202)			this->updateBounds();
            		}
HXLINE( 204)		return this->_bounds;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_bounds,return )

 ::away3d::bounds::BoundingVolumeBase Entity_obj::set_bounds( ::away3d::bounds::BoundingVolumeBase value){
            	HX_STACKFRAME(&_hx_pos_75ad46a2cc1572c9_208_set_bounds)
HXLINE( 209)		this->removeBounds();
HXLINE( 210)		this->_bounds = value;
HXLINE( 211)		this->_worldBounds = value->clone();
HXLINE( 212)		this->invalidateBounds();
HXLINE( 213)		if (this->_showBounds) {
HXLINE( 214)			this->addBounds();
            		}
HXLINE( 215)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_bounds,return )

 ::away3d::bounds::BoundingVolumeBase Entity_obj::get_worldBounds(){
            	HX_STACKFRAME(&_hx_pos_75ad46a2cc1572c9_219_get_worldBounds)
HXLINE( 220)		if (this->_worldBoundsInvalid) {
HXLINE( 221)			this->updateWorldBounds();
            		}
HXLINE( 223)		return this->_worldBounds;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_worldBounds,return )

void Entity_obj::updateWorldBounds(){
            	HX_STACKFRAME(&_hx_pos_75ad46a2cc1572c9_227_updateWorldBounds)
HXLINE( 228)		 ::away3d::bounds::BoundingVolumeBase _hx_tmp = this->_worldBounds;
HXDLIN( 228)		 ::away3d::bounds::BoundingVolumeBase _hx_tmp1 = this->get_bounds();
HXDLIN( 228)		_hx_tmp->transformFrom(_hx_tmp1,this->get_sceneTransform());
HXLINE( 229)		this->_worldBoundsInvalid = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,updateWorldBounds,(void))

 ::away3d::core::partition::Partition3D Entity_obj::set_implicitPartition( ::away3d::core::partition::Partition3D value){
            	HX_STACKFRAME(&_hx_pos_75ad46a2cc1572c9_236_set_implicitPartition)
HXLINE( 237)		if (::hx::IsInstanceEq( value,this->_implicitPartition )) {
HXLINE( 238)			return value;
            		}
HXLINE( 240)		if (::hx::IsNotNull( this->_implicitPartition )) {
HXLINE( 241)			this->notifyPartitionUnassigned();
            		}
HXLINE( 243)		this->super::set_implicitPartition(value);
HXLINE( 245)		this->notifyPartitionAssigned();
HXLINE( 246)		return value;
            	}


 ::away3d::containers::Scene3D Entity_obj::set_scene( ::away3d::containers::Scene3D value){
            	HX_STACKFRAME(&_hx_pos_75ad46a2cc1572c9_253_set_scene)
HXLINE( 254)		if (::hx::IsInstanceEq( value,this->_scene )) {
HXLINE( 255)			return value;
            		}
HXLINE( 257)		if (::hx::IsNotNull( this->_scene )) {
HXLINE( 258)			this->_scene->unregisterEntity(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 261)		if (::hx::IsNotNull( value )) {
HXLINE( 262)			value->registerEntity(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 264)		this->super::set_scene(value);
HXLINE( 265)		return value;
            	}


::String Entity_obj::get_assetType(){
            	HX_STACKFRAME(&_hx_pos_75ad46a2cc1572c9_270_get_assetType)
HXDLIN( 270)		return HX_("entity",23,13,1c,05);
            	}


::Dynamic Entity_obj::get_pickingCollider(){
            	HX_STACKFRAME(&_hx_pos_75ad46a2cc1572c9_282_get_pickingCollider)
HXDLIN( 282)		return this->_pickingCollider;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_pickingCollider,return )

::Dynamic Entity_obj::set_pickingCollider(::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_75ad46a2cc1572c9_286_set_pickingCollider)
HXLINE( 287)		this->_pickingCollider = value;
HXLINE( 288)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_pickingCollider,return )

 ::away3d::core::partition::EntityNode Entity_obj::getEntityPartitionNode(){
            	HX_STACKFRAME(&_hx_pos_75ad46a2cc1572c9_306_getEntityPartitionNode)
HXLINE( 307)		if (::hx::IsNull( this->_partitionNode )) {
HXLINE( 308)			this->_partitionNode = this->createEntityPartitionNode();
            		}
HXLINE( 310)		return this->_partitionNode;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,getEntityPartitionNode,return )

bool Entity_obj::isIntersectingRay( ::openfl::geom::Vector3D rayPosition, ::openfl::geom::Vector3D rayDirection){
            	HX_GC_STACKFRAME(&_hx_pos_75ad46a2cc1572c9_314_isIntersectingRay)
HXLINE( 315)		if (::hx::IsNull( this->get_pickingCollisionVO()->localRayPosition )) {
HXLINE( 315)			this->get_pickingCollisionVO()->localRayPosition =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE( 316)		if (::hx::IsNull( this->get_pickingCollisionVO()->localRayDirection )) {
HXLINE( 316)			this->get_pickingCollisionVO()->localRayDirection =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE( 317)		if (::hx::IsNull( this->get_pickingCollisionVO()->localNormal )) {
HXLINE( 317)			this->get_pickingCollisionVO()->localNormal =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE( 320)		 ::openfl::geom::Vector3D localRayPosition = this->get_pickingCollisionVO()->localRayPosition;
HXLINE( 321)		 ::openfl::geom::Vector3D localRayDirection = this->get_pickingCollisionVO()->localRayDirection;
HXLINE( 322)		::away3d::core::math::Matrix3DUtils_obj::transformVector(this->get_inverseSceneTransform(),rayPosition,localRayPosition);
HXLINE( 323)		::away3d::core::math::Matrix3DUtils_obj::deltaTransformVector(this->get_inverseSceneTransform(),rayDirection,localRayDirection);
HXLINE( 326)		 ::away3d::bounds::BoundingVolumeBase rayEntryDistance = this->get_bounds();
HXDLIN( 326)		Float rayEntryDistance1 = rayEntryDistance->rayIntersection(localRayPosition,localRayDirection,this->get_pickingCollisionVO()->localNormal);
HXLINE( 327)		if ((rayEntryDistance1 < 0)) {
HXLINE( 328)			return false;
            		}
HXLINE( 331)		this->get_pickingCollisionVO()->rayEntryDistance = rayEntryDistance1;
HXLINE( 332)		this->get_pickingCollisionVO()->rayPosition = rayPosition;
HXLINE( 333)		this->get_pickingCollisionVO()->rayDirection = rayDirection;
HXLINE( 334)		this->get_pickingCollisionVO()->rayOriginIsInsideBounds = (rayEntryDistance1 == 0);
HXLINE( 336)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Entity_obj,isIntersectingRay,return )

 ::away3d::core::partition::EntityNode Entity_obj::createEntityPartitionNode(){
            	HX_GC_STACKFRAME(&_hx_pos_75ad46a2cc1572c9_346_createEntityPartitionNode)
HXDLIN( 346)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::away3d::errors::AbstractMethodError_obj::__alloc( HX_CTX ,null(),null())));
HXDLIN( 346)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,createEntityPartitionNode,return )

 ::away3d::bounds::BoundingVolumeBase Entity_obj::getDefaultBoundingVolume(){
            	HX_GC_STACKFRAME(&_hx_pos_75ad46a2cc1572c9_358_getDefaultBoundingVolume)
HXDLIN( 358)		return  ::away3d::bounds::AxisAlignedBoundingBox_obj::__alloc( HX_CTX );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,getDefaultBoundingVolume,return )

void Entity_obj::updateBounds(){
            	HX_GC_STACKFRAME(&_hx_pos_75ad46a2cc1572c9_366_updateBounds)
HXDLIN( 366)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::away3d::errors::AbstractMethodError_obj::__alloc( HX_CTX ,null(),null())));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,updateBounds,(void))

void Entity_obj::invalidateSceneTransform(){
            	HX_STACKFRAME(&_hx_pos_75ad46a2cc1572c9_374_invalidateSceneTransform)
HXDLIN( 374)		if (!(this->_ignoreTransform)) {
HXLINE( 375)			this->super::invalidateSceneTransform();
HXLINE( 376)			this->_worldBoundsInvalid = true;
HXLINE( 377)			this->notifySceneBoundsInvalid();
            		}
            	}


void Entity_obj::invalidateBounds(){
            	HX_STACKFRAME(&_hx_pos_75ad46a2cc1572c9_385_invalidateBounds)
HXLINE( 386)		this->_boundsInvalid = true;
HXLINE( 387)		this->_worldBoundsInvalid = true;
HXLINE( 388)		this->notifySceneBoundsInvalid();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,invalidateBounds,(void))

void Entity_obj::updateMouseChildren(){
            	HX_STACKFRAME(&_hx_pos_75ad46a2cc1572c9_392_updateMouseChildren)
HXLINE( 394)		bool _hx_tmp;
HXDLIN( 394)		if (::hx::IsNull( this->_parent )) {
HXLINE( 394)			_hx_tmp = ::hx::IsNotNull( this->get_pickingCollider() );
            		}
            		else {
HXLINE( 394)			_hx_tmp = false;
            		}
HXDLIN( 394)		if (_hx_tmp) {
HXLINE( 395)			if (::Std_obj::isOfType(this->_parent,( ( ::Dynamic)(::hx::ClassOf< ::away3d::entities::Entity >()) ))) {
HXLINE( 396)				::Dynamic collider = ::hx::TCast<  ::away3d::entities::Entity >::cast(this->_parent)->get_pickingCollider();
HXLINE( 397)				if (::hx::IsNotNull( collider )) {
HXLINE( 398)					this->set_pickingCollider(collider);
            				}
            			}
            		}
HXLINE( 402)		this->super::updateMouseChildren();
            	}


void Entity_obj::notifySceneBoundsInvalid(){
            	HX_STACKFRAME(&_hx_pos_75ad46a2cc1572c9_410_notifySceneBoundsInvalid)
HXDLIN( 410)		if (::hx::IsNotNull( this->_scene )) {
HXLINE( 411)			this->_scene->invalidateEntityBounds(::hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,notifySceneBoundsInvalid,(void))

void Entity_obj::notifyPartitionAssigned(){
            	HX_STACKFRAME(&_hx_pos_75ad46a2cc1572c9_419_notifyPartitionAssigned)
HXDLIN( 419)		if (::hx::IsNotNull( this->_scene )) {
HXLINE( 420)			this->_scene->registerPartition(::hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,notifyPartitionAssigned,(void))

void Entity_obj::notifyPartitionUnassigned(){
            	HX_STACKFRAME(&_hx_pos_75ad46a2cc1572c9_428_notifyPartitionUnassigned)
HXDLIN( 428)		if (::hx::IsNotNull( this->_scene )) {
HXLINE( 429)			this->_scene->unregisterPartition(::hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,notifyPartitionUnassigned,(void))

void Entity_obj::addBounds(){
            	HX_STACKFRAME(&_hx_pos_75ad46a2cc1572c9_434_addBounds)
HXDLIN( 434)		if (!(this->_boundsIsShown)) {
HXLINE( 435)			this->_boundsIsShown = true;
HXLINE( 436)			this->addChild(this->_bounds->get_boundingRenderable());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,addBounds,(void))

void Entity_obj::removeBounds(){
            	HX_STACKFRAME(&_hx_pos_75ad46a2cc1572c9_442_removeBounds)
HXDLIN( 442)		if (this->_boundsIsShown) {
HXLINE( 443)			this->_boundsIsShown = false;
HXLINE( 444)			this->removeChild(this->_bounds->get_boundingRenderable());
HXLINE( 445)			this->_bounds->disposeRenderable();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,removeBounds,(void))

void Entity_obj::internalUpdate(){
            	HX_STACKFRAME(&_hx_pos_75ad46a2cc1572c9_451_internalUpdate)
HXDLIN( 451)		if (::hx::IsNotNull( this->_controller )) {
HXLINE( 452)			this->_controller->update(null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,internalUpdate,(void))


::hx::ObjectPtr< Entity_obj > Entity_obj::__new() {
	::hx::ObjectPtr< Entity_obj > __this = new Entity_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Entity_obj > Entity_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Entity_obj *__this = (Entity_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Entity_obj), true, "away3d.entities.Entity"));
	*(void **)__this = Entity_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Entity_obj::Entity_obj()
{
}

void Entity_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Entity);
	HX_MARK_MEMBER_NAME(_showBounds,"_showBounds");
	HX_MARK_MEMBER_NAME(_partitionNode,"_partitionNode");
	HX_MARK_MEMBER_NAME(_boundsIsShown,"_boundsIsShown");
	HX_MARK_MEMBER_NAME(_shaderPickingDetails,"_shaderPickingDetails");
	HX_MARK_MEMBER_NAME(_pickingCollisionVO,"_pickingCollisionVO");
	HX_MARK_MEMBER_NAME(_pickingCollider,"_pickingCollider");
	HX_MARK_MEMBER_NAME(_staticNode,"_staticNode");
	HX_MARK_MEMBER_NAME(_bounds,"_bounds");
	HX_MARK_MEMBER_NAME(_boundsInvalid,"_boundsInvalid");
	HX_MARK_MEMBER_NAME(_worldBounds,"_worldBounds");
	HX_MARK_MEMBER_NAME(_worldBoundsInvalid,"_worldBoundsInvalid");
	 ::away3d::containers::ObjectContainer3D_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Entity_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_showBounds,"_showBounds");
	HX_VISIT_MEMBER_NAME(_partitionNode,"_partitionNode");
	HX_VISIT_MEMBER_NAME(_boundsIsShown,"_boundsIsShown");
	HX_VISIT_MEMBER_NAME(_shaderPickingDetails,"_shaderPickingDetails");
	HX_VISIT_MEMBER_NAME(_pickingCollisionVO,"_pickingCollisionVO");
	HX_VISIT_MEMBER_NAME(_pickingCollider,"_pickingCollider");
	HX_VISIT_MEMBER_NAME(_staticNode,"_staticNode");
	HX_VISIT_MEMBER_NAME(_bounds,"_bounds");
	HX_VISIT_MEMBER_NAME(_boundsInvalid,"_boundsInvalid");
	HX_VISIT_MEMBER_NAME(_worldBounds,"_worldBounds");
	HX_VISIT_MEMBER_NAME(_worldBoundsInvalid,"_worldBoundsInvalid");
	 ::away3d::containers::ObjectContainer3D_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Entity_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_bounds() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_bounds") ) { return ::hx::Val( _bounds ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_minX") ) { return ::hx::Val( get_minX_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_minY") ) { return ::hx::Val( get_minY_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_minZ") ) { return ::hx::Val( get_minZ_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_maxX") ) { return ::hx::Val( get_maxX_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_maxY") ) { return ::hx::Val( get_maxY_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_maxZ") ) { return ::hx::Val( get_maxZ_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_scene") ) { return ::hx::Val( set_scene_dyn() ); }
		if (HX_FIELD_EQ(inName,"addBounds") ) { return ::hx::Val( addBounds_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"staticNode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_staticNode() ); }
		if (HX_FIELD_EQ(inName,"showBounds") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_showBounds() ); }
		if (HX_FIELD_EQ(inName,"get_bounds") ) { return ::hx::Val( get_bounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_bounds") ) { return ::hx::Val( set_bounds_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"worldBounds") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_worldBounds() ); }
		if (HX_FIELD_EQ(inName,"_showBounds") ) { return ::hx::Val( _showBounds ); }
		if (HX_FIELD_EQ(inName,"_staticNode") ) { return ::hx::Val( _staticNode ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_worldBounds") ) { return ::hx::Val( _worldBounds ); }
		if (HX_FIELD_EQ(inName,"updateBounds") ) { return ::hx::Val( updateBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeBounds") ) { return ::hx::Val( removeBounds_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_assetType") ) { return ::hx::Val( get_assetType_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_partitionNode") ) { return ::hx::Val( _partitionNode ); }
		if (HX_FIELD_EQ(inName,"_boundsIsShown") ) { return ::hx::Val( _boundsIsShown ); }
		if (HX_FIELD_EQ(inName,"_boundsInvalid") ) { return ::hx::Val( _boundsInvalid ); }
		if (HX_FIELD_EQ(inName,"get_staticNode") ) { return ::hx::Val( get_staticNode_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_staticNode") ) { return ::hx::Val( set_staticNode_dyn() ); }
		if (HX_FIELD_EQ(inName,"collidesBefore") ) { return ::hx::Val( collidesBefore_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_showBounds") ) { return ::hx::Val( get_showBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_showBounds") ) { return ::hx::Val( set_showBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"internalUpdate") ) { return ::hx::Val( internalUpdate_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"pickingCollider") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_pickingCollider() ); }
		if (HX_FIELD_EQ(inName,"get_worldBounds") ) { return ::hx::Val( get_worldBounds_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_pickingCollider") ) { return ::hx::Val( _pickingCollider ); }
		if (HX_FIELD_EQ(inName,"invalidateBounds") ) { return ::hx::Val( invalidateBounds_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"updateWorldBounds") ) { return ::hx::Val( updateWorldBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"isIntersectingRay") ) { return ::hx::Val( isIntersectingRay_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pickingCollisionVO") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_pickingCollisionVO() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_pickingCollisionVO") ) { return ::hx::Val( _pickingCollisionVO ); }
		if (HX_FIELD_EQ(inName,"_worldBoundsInvalid") ) { return ::hx::Val( _worldBoundsInvalid ); }
		if (HX_FIELD_EQ(inName,"set_ignoreTransform") ) { return ::hx::Val( set_ignoreTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_pickingCollider") ) { return ::hx::Val( get_pickingCollider_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_pickingCollider") ) { return ::hx::Val( set_pickingCollider_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateMouseChildren") ) { return ::hx::Val( updateMouseChildren_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"shaderPickingDetails") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_shaderPickingDetails() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_shaderPickingDetails") ) { return ::hx::Val( _shaderPickingDetails ); }
		if (HX_FIELD_EQ(inName,"set_implicitPartition") ) { return ::hx::Val( set_implicitPartition_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_pickingCollisionVO") ) { return ::hx::Val( get_pickingCollisionVO_dyn() ); }
		if (HX_FIELD_EQ(inName,"getEntityPartitionNode") ) { return ::hx::Val( getEntityPartitionNode_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"notifyPartitionAssigned") ) { return ::hx::Val( notifyPartitionAssigned_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_shaderPickingDetails") ) { return ::hx::Val( get_shaderPickingDetails_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_shaderPickingDetails") ) { return ::hx::Val( set_shaderPickingDetails_dyn() ); }
		if (HX_FIELD_EQ(inName,"getDefaultBoundingVolume") ) { return ::hx::Val( getDefaultBoundingVolume_dyn() ); }
		if (HX_FIELD_EQ(inName,"invalidateSceneTransform") ) { return ::hx::Val( invalidateSceneTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"notifySceneBoundsInvalid") ) { return ::hx::Val( notifySceneBoundsInvalid_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"createEntityPartitionNode") ) { return ::hx::Val( createEntityPartitionNode_dyn() ); }
		if (HX_FIELD_EQ(inName,"notifyPartitionUnassigned") ) { return ::hx::Val( notifyPartitionUnassigned_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Entity_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_bounds(inValue.Cast<  ::away3d::bounds::BoundingVolumeBase >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_bounds") ) { _bounds=inValue.Cast<  ::away3d::bounds::BoundingVolumeBase >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"staticNode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_staticNode(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"showBounds") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_showBounds(inValue.Cast< bool >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_showBounds") ) { _showBounds=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_staticNode") ) { _staticNode=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_worldBounds") ) { _worldBounds=inValue.Cast<  ::away3d::bounds::BoundingVolumeBase >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_partitionNode") ) { _partitionNode=inValue.Cast<  ::away3d::core::partition::EntityNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_boundsIsShown") ) { _boundsIsShown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_boundsInvalid") ) { _boundsInvalid=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"pickingCollider") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_pickingCollider(inValue.Cast< ::Dynamic >()) ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_pickingCollider") ) { _pickingCollider=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_pickingCollisionVO") ) { _pickingCollisionVO=inValue.Cast<  ::away3d::core::pick::PickingCollisionVO >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_worldBoundsInvalid") ) { _worldBoundsInvalid=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"shaderPickingDetails") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_shaderPickingDetails(inValue.Cast< bool >()) ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_shaderPickingDetails") ) { _shaderPickingDetails=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Entity_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shaderPickingDetails",26,0e,05,d4));
	outFields->push(HX_("staticNode",d0,01,b6,aa));
	outFields->push(HX_("pickingCollisionVO",0a,97,15,56));
	outFields->push(HX_("showBounds",52,2b,92,cf));
	outFields->push(HX_("bounds",75,86,1d,66));
	outFields->push(HX_("worldBounds",67,1a,8b,31));
	outFields->push(HX_("pickingCollider",f5,ca,82,79));
	outFields->push(HX_("_showBounds",71,f8,1b,a2));
	outFields->push(HX_("_partitionNode",4d,05,9d,9a));
	outFields->push(HX_("_boundsIsShown",d3,a6,9d,f7));
	outFields->push(HX_("_shaderPickingDetails",05,18,a0,42));
	outFields->push(HX_("_pickingCollisionVO",29,1b,f0,35));
	outFields->push(HX_("_pickingCollider",76,0d,62,64));
	outFields->push(HX_("_staticNode",ef,ce,3f,7d));
	outFields->push(HX_("_bounds",14,98,94,d4));
	outFields->push(HX_("_boundsInvalid",43,55,38,1a));
	outFields->push(HX_("_worldBounds",68,c8,94,97));
	outFields->push(HX_("_worldBoundsInvalid",6f,97,2b,f1));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Entity_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(Entity_obj,_showBounds),HX_("_showBounds",71,f8,1b,a2)},
	{::hx::fsObject /*  ::away3d::core::partition::EntityNode */ ,(int)offsetof(Entity_obj,_partitionNode),HX_("_partitionNode",4d,05,9d,9a)},
	{::hx::fsBool,(int)offsetof(Entity_obj,_boundsIsShown),HX_("_boundsIsShown",d3,a6,9d,f7)},
	{::hx::fsBool,(int)offsetof(Entity_obj,_shaderPickingDetails),HX_("_shaderPickingDetails",05,18,a0,42)},
	{::hx::fsObject /*  ::away3d::core::pick::PickingCollisionVO */ ,(int)offsetof(Entity_obj,_pickingCollisionVO),HX_("_pickingCollisionVO",29,1b,f0,35)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(Entity_obj,_pickingCollider),HX_("_pickingCollider",76,0d,62,64)},
	{::hx::fsBool,(int)offsetof(Entity_obj,_staticNode),HX_("_staticNode",ef,ce,3f,7d)},
	{::hx::fsObject /*  ::away3d::bounds::BoundingVolumeBase */ ,(int)offsetof(Entity_obj,_bounds),HX_("_bounds",14,98,94,d4)},
	{::hx::fsBool,(int)offsetof(Entity_obj,_boundsInvalid),HX_("_boundsInvalid",43,55,38,1a)},
	{::hx::fsObject /*  ::away3d::bounds::BoundingVolumeBase */ ,(int)offsetof(Entity_obj,_worldBounds),HX_("_worldBounds",68,c8,94,97)},
	{::hx::fsBool,(int)offsetof(Entity_obj,_worldBoundsInvalid),HX_("_worldBoundsInvalid",6f,97,2b,f1)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Entity_obj_sStaticStorageInfo = 0;
#endif

static ::String Entity_obj_sMemberFields[] = {
	HX_("_showBounds",71,f8,1b,a2),
	HX_("_partitionNode",4d,05,9d,9a),
	HX_("_boundsIsShown",d3,a6,9d,f7),
	HX_("_shaderPickingDetails",05,18,a0,42),
	HX_("_pickingCollisionVO",29,1b,f0,35),
	HX_("_pickingCollider",76,0d,62,64),
	HX_("_staticNode",ef,ce,3f,7d),
	HX_("_bounds",14,98,94,d4),
	HX_("_boundsInvalid",43,55,38,1a),
	HX_("_worldBounds",68,c8,94,97),
	HX_("_worldBoundsInvalid",6f,97,2b,f1),
	HX_("set_ignoreTransform",1d,64,22,d9),
	HX_("get_shaderPickingDetails",af,2b,a1,16),
	HX_("set_shaderPickingDetails",23,ad,7b,29),
	HX_("get_staticNode",19,8a,ab,20),
	HX_("set_staticNode",8d,72,cb,40),
	HX_("get_pickingCollisionVO",53,10,aa,af),
	HX_("collidesBefore",94,7d,bf,f4),
	HX_("get_showBounds",9b,b3,87,45),
	HX_("set_showBounds",0f,9c,a7,65),
	HX_("get_minX",0f,0a,17,c8),
	HX_("get_minY",10,0a,17,c8),
	HX_("get_minZ",11,0a,17,c8),
	HX_("get_maxX",bd,00,11,c8),
	HX_("get_maxY",be,00,11,c8),
	HX_("get_maxZ",bf,00,11,c8),
	HX_("get_bounds",3e,f6,a4,56),
	HX_("set_bounds",b2,94,22,5a),
	HX_("get_worldBounds",fe,d1,6c,f2),
	HX_("updateWorldBounds",de,c6,f4,95),
	HX_("set_implicitPartition",e8,34,f4,ec),
	HX_("set_scene",af,21,cc,9f),
	HX_("get_assetType",a1,14,13,73),
	HX_("get_pickingCollider",0c,9a,8d,04),
	HX_("set_pickingCollider",18,8d,2a,41),
	HX_("getEntityPartitionNode",f3,44,99,f0),
	HX_("isIntersectingRay",7d,4f,77,68),
	HX_("createEntityPartitionNode",4d,b6,d9,04),
	HX_("getDefaultBoundingVolume",89,f8,1c,2a),
	HX_("updateBounds",5e,2d,e1,65),
	HX_("invalidateSceneTransform",5b,d9,ab,50),
	HX_("invalidateBounds",50,e2,c4,70),
	HX_("updateMouseChildren",bb,10,f2,92),
	HX_("notifySceneBoundsInvalid",3f,61,44,41),
	HX_("notifyPartitionAssigned",4f,53,9a,0b),
	HX_("notifyPartitionUnassigned",e8,bc,57,53),
	HX_("addBounds",76,bb,41,1e),
	HX_("removeBounds",d9,21,4b,d5),
	HX_("internalUpdate",26,ed,f4,ab),
	::String(null()) };

::hx::Class Entity_obj::__mClass;

void Entity_obj::__register()
{
	Entity_obj _hx_dummy;
	Entity_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.entities.Entity",21,cb,b9,a4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Entity_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Entity_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Entity_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Entity_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace entities
