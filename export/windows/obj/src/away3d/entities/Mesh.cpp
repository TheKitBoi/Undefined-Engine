#include <hxcpp.h>

#ifndef INCLUDED_away3d_animators_IAnimator
#include <away3d/animators/IAnimator.h>
#endif
#ifndef INCLUDED_away3d_animators_data_AnimationSubGeometry
#include <away3d/animators/data/AnimationSubGeometry.h>
#endif
#ifndef INCLUDED_away3d_bounds_BoundingVolumeBase
#include <away3d/bounds/BoundingVolumeBase.h>
#endif
#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_Geometry
#include <away3d/core/base/Geometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_IMaterialOwner
#include <away3d/core/base/IMaterialOwner.h>
#endif
#ifndef INCLUDED_away3d_core_base_IRenderable
#include <away3d/core/base/IRenderable.h>
#endif
#ifndef INCLUDED_away3d_core_base_ISubGeometry
#include <away3d/core/base/ISubGeometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_SubMesh
#include <away3d/core/base/SubMesh.h>
#endif
#ifndef INCLUDED_away3d_core_partition_EntityNode
#include <away3d/core/partition/EntityNode.h>
#endif
#ifndef INCLUDED_away3d_core_partition_MeshNode
#include <away3d/core/partition/MeshNode.h>
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
#ifndef INCLUDED_away3d_entities_Mesh
#include <away3d/entities/Mesh.h>
#endif
#ifndef INCLUDED_away3d_events_GeometryEvent
#include <away3d/events/GeometryEvent.h>
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
#ifndef INCLUDED_away3d_materials_SinglePassMaterialBase
#include <away3d/materials/SinglePassMaterialBase.h>
#endif
#ifndef INCLUDED_away3d_materials_TextureMaterial
#include <away3d/materials/TextureMaterial.h>
#endif
#ifndef INCLUDED_away3d_materials_utils_DefaultMaterialManager
#include <away3d/materials/utils/DefaultMaterialManager.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_6a74304a06d83805_19_new,"away3d.entities.Mesh","new",0xca5f18dd,"away3d.entities.Mesh.new","away3d/entities/Mesh.hx",19,0x592eb553)
HX_LOCAL_STACK_FRAME(_hx_pos_6a74304a06d83805_52_bakeTransformations,"away3d.entities.Mesh","bakeTransformations",0xcd136fee,"away3d.entities.Mesh.bakeTransformations","away3d/entities/Mesh.hx",52,0x592eb553)
HX_LOCAL_STACK_FRAME(_hx_pos_6a74304a06d83805_59_get_assetType,"away3d.entities.Mesh","get_assetType",0xd3a2bb5e,"away3d.entities.Mesh.get_assetType","away3d/entities/Mesh.hx",59,0x592eb553)
HX_LOCAL_STACK_FRAME(_hx_pos_6a74304a06d83805_64_onGeometryBoundsInvalid,"away3d.entities.Mesh","onGeometryBoundsInvalid",0x3404f04e,"away3d.entities.Mesh.onGeometryBoundsInvalid","away3d/entities/Mesh.hx",64,0x592eb553)
HX_LOCAL_STACK_FRAME(_hx_pos_6a74304a06d83805_72_get_castsShadows,"away3d.entities.Mesh","get_castsShadows",0x7476580b,"away3d.entities.Mesh.get_castsShadows","away3d/entities/Mesh.hx",72,0x592eb553)
HX_LOCAL_STACK_FRAME(_hx_pos_6a74304a06d83805_76_set_castsShadows,"away3d.entities.Mesh","set_castsShadows",0xcab8457f,"away3d.entities.Mesh.set_castsShadows","away3d/entities/Mesh.hx",76,0x592eb553)
HX_LOCAL_STACK_FRAME(_hx_pos_6a74304a06d83805_86_get_animator,"away3d.entities.Mesh","get_animator",0x30b46f53,"away3d.entities.Mesh.get_animator","away3d/entities/Mesh.hx",86,0x592eb553)
HX_LOCAL_STACK_FRAME(_hx_pos_6a74304a06d83805_90_set_animator,"away3d.entities.Mesh","set_animator",0x45ad92c7,"away3d.entities.Mesh.set_animator","away3d/entities/Mesh.hx",90,0x592eb553)
HX_LOCAL_STACK_FRAME(_hx_pos_6a74304a06d83805_125_get_geometry,"away3d.entities.Mesh","get_geometry",0x7a6af69e,"away3d.entities.Mesh.get_geometry","away3d/entities/Mesh.hx",125,0x592eb553)
HX_LOCAL_STACK_FRAME(_hx_pos_6a74304a06d83805_129_set_geometry,"away3d.entities.Mesh","set_geometry",0x8f641a12,"away3d.entities.Mesh.set_geometry","away3d/entities/Mesh.hx",129,0x592eb553)
HX_LOCAL_STACK_FRAME(_hx_pos_6a74304a06d83805_168_get_material,"away3d.entities.Mesh","get_material",0x98675093,"away3d.entities.Mesh.get_material","away3d/entities/Mesh.hx",168,0x592eb553)
HX_LOCAL_STACK_FRAME(_hx_pos_6a74304a06d83805_172_set_material,"away3d.entities.Mesh","set_material",0xad607407,"away3d.entities.Mesh.set_material","away3d/entities/Mesh.hx",172,0x592eb553)
HX_LOCAL_STACK_FRAME(_hx_pos_6a74304a06d83805_189_get_subMeshes,"away3d.entities.Mesh","get_subMeshes",0x30f16fcf,"away3d.entities.Mesh.get_subMeshes","away3d/entities/Mesh.hx",189,0x592eb553)
HX_LOCAL_STACK_FRAME(_hx_pos_6a74304a06d83805_203_get_shareAnimationGeometry,"away3d.entities.Mesh","get_shareAnimationGeometry",0x4c2e3ae3,"away3d.entities.Mesh.get_shareAnimationGeometry","away3d/entities/Mesh.hx",203,0x592eb553)
HX_LOCAL_STACK_FRAME(_hx_pos_6a74304a06d83805_207_set_shareAnimationGeometry,"away3d.entities.Mesh","set_shareAnimationGeometry",0xabc30157,"away3d.entities.Mesh.set_shareAnimationGeometry","away3d/entities/Mesh.hx",207,0x592eb553)
HX_LOCAL_STACK_FRAME(_hx_pos_6a74304a06d83805_216_clearAnimationGeometry,"away3d.entities.Mesh","clearAnimationGeometry",0x4ee82b2c,"away3d.entities.Mesh.clearAnimationGeometry","away3d/entities/Mesh.hx",216,0x592eb553)
HX_LOCAL_STACK_FRAME(_hx_pos_6a74304a06d83805_226_dispose,"away3d.entities.Mesh","dispose",0xb9b24b9c,"away3d.entities.Mesh.dispose","away3d/entities/Mesh.hx",226,0x592eb553)
HX_LOCAL_STACK_FRAME(_hx_pos_6a74304a06d83805_238_disposeWithAnimatorAndChildren,"away3d.entities.Mesh","disposeWithAnimatorAndChildren",0xa479446d,"away3d.entities.Mesh.disposeWithAnimatorAndChildren","away3d/entities/Mesh.hx",238,0x592eb553)
HX_LOCAL_STACK_FRAME(_hx_pos_6a74304a06d83805_262_clone,"away3d.entities.Mesh","clone",0x222f351a,"away3d.entities.Mesh.clone","away3d/entities/Mesh.hx",262,0x592eb553)
HX_LOCAL_STACK_FRAME(_hx_pos_6a74304a06d83805_295_updateBounds,"away3d.entities.Mesh","updateBounds",0x58896d41,"away3d.entities.Mesh.updateBounds","away3d/entities/Mesh.hx",295,0x592eb553)
HX_LOCAL_STACK_FRAME(_hx_pos_6a74304a06d83805_305_createEntityPartitionNode,"away3d.entities.Mesh","createEntityPartitionNode",0xd067048a,"away3d.entities.Mesh.createEntityPartitionNode","away3d/entities/Mesh.hx",305,0x592eb553)
HX_LOCAL_STACK_FRAME(_hx_pos_6a74304a06d83805_313_onSubGeometryAdded,"away3d.entities.Mesh","onSubGeometryAdded",0x3ad16a70,"away3d.entities.Mesh.onSubGeometryAdded","away3d/entities/Mesh.hx",313,0x592eb553)
HX_LOCAL_STACK_FRAME(_hx_pos_6a74304a06d83805_320_onSubGeometryRemoved,"away3d.entities.Mesh","onSubGeometryRemoved",0x00628150,"away3d.entities.Mesh.onSubGeometryRemoved","away3d/entities/Mesh.hx",320,0x592eb553)
HX_LOCAL_STACK_FRAME(_hx_pos_6a74304a06d83805_352_addSubMesh,"away3d.entities.Mesh","addSubMesh",0xf8f67c8f,"away3d.entities.Mesh.addSubMesh","away3d/entities/Mesh.hx",352,0x592eb553)
HX_LOCAL_STACK_FRAME(_hx_pos_6a74304a06d83805_362_getSubMeshForSubGeometry,"away3d.entities.Mesh","getSubMeshForSubGeometry",0x3beef023,"away3d.entities.Mesh.getSubMeshForSubGeometry","away3d/entities/Mesh.hx",362,0x592eb553)
HX_LOCAL_STACK_FRAME(_hx_pos_6a74304a06d83805_366_collidesBefore,"away3d.entities.Mesh","collidesBefore",0x11e1bc37,"away3d.entities.Mesh.collidesBefore","away3d/entities/Mesh.hx",366,0x592eb553)
namespace away3d{
namespace entities{

void Mesh_obj::__construct( ::away3d::core::base::Geometry geometry, ::away3d::materials::MaterialBase material){
            	HX_GC_STACKFRAME(&_hx_pos_6a74304a06d83805_19_new)
HXLINE(  33)		this->_shareAnimationGeometry = true;
HXLINE(  32)		this->_castsShadows = true;
HXLINE(  43)		super::__construct();
HXLINE(  44)		int length = null();
HXDLIN(  44)		bool fixed = null();
HXDLIN(  44)		::Array< ::Dynamic> array = null();
HXDLIN(  44)		this->_subMeshes =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE(  46)		 ::away3d::core::base::Geometry _hx_tmp;
HXDLIN(  46)		if (::hx::IsNotNull( geometry )) {
HXLINE(  46)			_hx_tmp = geometry;
            		}
            		else {
HXLINE(  46)			_hx_tmp =  ::away3d::core::base::Geometry_obj::__alloc( HX_CTX );
            		}
HXDLIN(  46)		this->set_geometry(_hx_tmp);
HXLINE(  48)		 ::away3d::materials::MaterialBase _hx_tmp1;
HXDLIN(  48)		if (::hx::IsNotNull( material )) {
HXLINE(  48)			_hx_tmp1 = material;
            		}
            		else {
HXLINE(  48)			_hx_tmp1 = ::away3d::materials::utils::DefaultMaterialManager_obj::getDefaultMaterial(::hx::ObjectPtr<OBJ_>(this));
            		}
HXDLIN(  48)		this->set_material(_hx_tmp1);
            	}

Dynamic Mesh_obj::__CreateEmpty() { return new Mesh_obj; }

void *Mesh_obj::_hx_vtable = 0;

Dynamic Mesh_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Mesh_obj > _hx_result = new Mesh_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Mesh_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x12b32fa7) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0806710d) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0806710d;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x12b32fa7;
		}
	} else {
		if (inClassId<=(int)0x1e6a8fa2) {
			return inClassId==(int)0x13fff02b || inClassId==(int)0x1e6a8fa2;
		} else {
			return inClassId==(int)0x37f46043;
		}
	}
}

static ::away3d::core::base::IMaterialOwner_obj _hx_away3d_entities_Mesh__hx_away3d_core_base_IMaterialOwner= {
	(  ::away3d::materials::MaterialBase (::hx::Object::*)())&::away3d::entities::Mesh_obj::get_material,
	(  ::away3d::materials::MaterialBase (::hx::Object::*)( ::away3d::materials::MaterialBase))&::away3d::entities::Mesh_obj::set_material,
	( ::Dynamic (::hx::Object::*)())&::away3d::entities::Mesh_obj::get_animator,
};

static ::openfl::events::IEventDispatcher_obj _hx_away3d_entities_Mesh__hx_openfl_events_IEventDispatcher= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::away3d::entities::Mesh_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::away3d::entities::Mesh_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::away3d::entities::Mesh_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::away3d::entities::Mesh_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::away3d::entities::Mesh_obj::willTrigger,
};

static ::away3d::library::assets::IAsset_obj _hx_away3d_entities_Mesh__hx_away3d_library_assets_IAsset= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::away3d::entities::Mesh_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::away3d::entities::Mesh_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::away3d::entities::Mesh_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::away3d::entities::Mesh_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::away3d::entities::Mesh_obj::willTrigger,
	( ::String (::hx::Object::*)())&::away3d::entities::Mesh_obj::get_name,
	( ::String (::hx::Object::*)(::String))&::away3d::entities::Mesh_obj::set_name,
	( ::String (::hx::Object::*)())&::away3d::entities::Mesh_obj::get_id,
	( ::String (::hx::Object::*)(::String))&::away3d::entities::Mesh_obj::set_id,
	( ::String (::hx::Object::*)())&::away3d::entities::Mesh_obj::get_assetNamespace,
	( ::String (::hx::Object::*)())&::away3d::entities::Mesh_obj::get_assetType,
	( ::cpp::VirtualArray (::hx::Object::*)())&::away3d::entities::Mesh_obj::get_assetFullPath,
	( bool (::hx::Object::*)(::String,::String))&::away3d::entities::Mesh_obj::assetPathEquals,
	( void (::hx::Object::*)(::String,::String, ::Dynamic))&::away3d::entities::Mesh_obj::resetAssetPath,
	( void (::hx::Object::*)())&::away3d::entities::Mesh_obj::dispose,
};

void *Mesh_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xcf5e1b32: return &_hx_away3d_entities_Mesh__hx_away3d_core_base_IMaterialOwner;
		case (int)0x87530281: return &_hx_away3d_entities_Mesh__hx_openfl_events_IEventDispatcher;
		case (int)0xa8241686: return &_hx_away3d_entities_Mesh__hx_away3d_library_assets_IAsset;
	}
	return super::_hx_getInterface(inHash);
}

void Mesh_obj::bakeTransformations(){
            	HX_STACKFRAME(&_hx_pos_6a74304a06d83805_52_bakeTransformations)
HXLINE(  53)		 ::away3d::core::base::Geometry _hx_tmp = this->get_geometry();
HXDLIN(  53)		_hx_tmp->applyTransformation(this->get_transform());
HXLINE(  54)		this->get_transform()->identity();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,bakeTransformations,(void))

::String Mesh_obj::get_assetType(){
            	HX_STACKFRAME(&_hx_pos_6a74304a06d83805_59_get_assetType)
HXDLIN(  59)		return HX_("mesh",ed,49,59,48);
            	}


void Mesh_obj::onGeometryBoundsInvalid( ::away3d::events::GeometryEvent event){
            	HX_STACKFRAME(&_hx_pos_6a74304a06d83805_64_onGeometryBoundsInvalid)
HXDLIN(  64)		this->invalidateBounds();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,onGeometryBoundsInvalid,(void))

bool Mesh_obj::get_castsShadows(){
            	HX_STACKFRAME(&_hx_pos_6a74304a06d83805_72_get_castsShadows)
HXDLIN(  72)		return this->_castsShadows;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,get_castsShadows,return )

bool Mesh_obj::set_castsShadows(bool value){
            	HX_STACKFRAME(&_hx_pos_6a74304a06d83805_76_set_castsShadows)
HXLINE(  77)		this->_castsShadows = value;
HXLINE(  78)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,set_castsShadows,return )

::Dynamic Mesh_obj::get_animator(){
            	HX_STACKFRAME(&_hx_pos_6a74304a06d83805_86_get_animator)
HXDLIN(  86)		return this->_animator;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,get_animator,return )

::Dynamic Mesh_obj::set_animator(::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_6a74304a06d83805_90_set_animator)
HXLINE(  91)		if (::hx::IsNotNull( this->_animator )) {
HXLINE(  92)			::away3d::animators::IAnimator_obj::removeOwner(this->_animator,::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE(  94)		this->_animator = value;
HXLINE(  97)		 ::away3d::materials::MaterialBase oldMaterial = this->get_material();
HXLINE(  98)		this->set_material(null());
HXLINE(  99)		this->set_material(oldMaterial);
HXLINE( 101)		int len = this->_subMeshes->get_length();
HXLINE( 102)		 ::away3d::core::base::SubMesh subMesh;
HXLINE( 105)		{
HXLINE( 105)			int _g = 0;
HXDLIN( 105)			int _g1 = len;
HXDLIN( 105)			while((_g < _g1)){
HXLINE( 105)				_g = (_g + 1);
HXDLIN( 105)				int i = (_g - 1);
HXLINE( 106)				subMesh = this->_subMeshes->get(i).StaticCast<  ::away3d::core::base::SubMesh >();
HXLINE( 107)				oldMaterial = subMesh->_material;
HXLINE( 108)				if (::hx::IsNotNull( oldMaterial )) {
HXLINE( 109)					subMesh->set_material(null());
HXLINE( 110)					subMesh->set_material(oldMaterial);
            				}
            			}
            		}
HXLINE( 114)		if (::hx::IsNotNull( this->_animator )) {
HXLINE( 115)			::away3d::animators::IAnimator_obj::addOwner(this->_animator,::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 117)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,set_animator,return )

 ::away3d::core::base::Geometry Mesh_obj::get_geometry(){
            	HX_STACKFRAME(&_hx_pos_6a74304a06d83805_125_get_geometry)
HXDLIN( 125)		return this->_geometry;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,get_geometry,return )

 ::away3d::core::base::Geometry Mesh_obj::set_geometry( ::away3d::core::base::Geometry value){
            	HX_STACKFRAME(&_hx_pos_6a74304a06d83805_129_set_geometry)
HXLINE( 130)		int i;
HXLINE( 132)		if (::hx::IsNotNull( this->_geometry )) {
HXLINE( 133)			this->_geometry->removeEventListener(HX_("BoundsInvalid",e2,b4,d6,23),this->onGeometryBoundsInvalid_dyn(),null());
HXLINE( 134)			this->_geometry->removeEventListener(HX_("SubGeometryAdded",2e,cf,4e,f4),this->onSubGeometryAdded_dyn(),null());
HXLINE( 135)			this->_geometry->removeEventListener(HX_("SubGeometryRemoved",8e,11,91,1f),this->onSubGeometryRemoved_dyn(),null());
HXLINE( 137)			{
HXLINE( 137)				int _g = 0;
HXDLIN( 137)				int _g1 = this->_subMeshes->get_length();
HXDLIN( 137)				while((_g < _g1)){
HXLINE( 137)					_g = (_g + 1);
HXDLIN( 137)					int i = (_g - 1);
HXLINE( 138)					this->_subMeshes->get(i).StaticCast<  ::away3d::core::base::SubMesh >()->dispose();
            				}
            			}
HXLINE( 139)			this->_subMeshes->set_length(0);
            		}
HXLINE( 142)		this->_geometry = value;
HXLINE( 143)		if (::hx::IsNotNull( this->_geometry )) {
HXLINE( 144)			this->_geometry->addEventListener(HX_("BoundsInvalid",e2,b4,d6,23),this->onGeometryBoundsInvalid_dyn(),null(),null(),null());
HXLINE( 145)			this->_geometry->addEventListener(HX_("SubGeometryAdded",2e,cf,4e,f4),this->onSubGeometryAdded_dyn(),null(),null(),null());
HXLINE( 146)			this->_geometry->addEventListener(HX_("SubGeometryRemoved",8e,11,91,1f),this->onSubGeometryRemoved_dyn(),null(),null(),null());
HXLINE( 148)			 ::openfl::_Vector::ObjectVector subGeoms = this->_geometry->get_subGeometries();
HXLINE( 150)			{
HXLINE( 150)				int _g = 0;
HXDLIN( 150)				int _g1 = subGeoms->get_length();
HXDLIN( 150)				while((_g < _g1)){
HXLINE( 150)					_g = (_g + 1);
HXDLIN( 150)					int i = (_g - 1);
HXLINE( 151)					this->addSubMesh(subGeoms->get(i));
            				}
            			}
            		}
HXLINE( 154)		if (::hx::IsNotNull( this->_material )) {
HXLINE( 156)			this->_material->removeOwner(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 157)			this->_material->addOwner(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 160)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,set_geometry,return )

 ::away3d::materials::MaterialBase Mesh_obj::get_material(){
            	HX_STACKFRAME(&_hx_pos_6a74304a06d83805_168_get_material)
HXDLIN( 168)		return this->_material;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,get_material,return )

 ::away3d::materials::MaterialBase Mesh_obj::set_material( ::away3d::materials::MaterialBase value){
            	HX_STACKFRAME(&_hx_pos_6a74304a06d83805_172_set_material)
HXLINE( 173)		if (::hx::IsInstanceEq( value,this->_material )) {
HXLINE( 174)			return value;
            		}
HXLINE( 175)		if (::hx::IsNotNull( this->_material )) {
HXLINE( 176)			this->_material->removeOwner(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 177)		this->_material = value;
HXLINE( 178)		if (::hx::IsNotNull( this->_material )) {
HXLINE( 179)			this->_material->addOwner(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 181)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,set_material,return )

 ::openfl::_Vector::ObjectVector Mesh_obj::get_subMeshes(){
            	HX_STACKFRAME(&_hx_pos_6a74304a06d83805_189_get_subMeshes)
HXLINE( 193)		this->_geometry->validate();
HXLINE( 195)		return this->_subMeshes;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,get_subMeshes,return )

bool Mesh_obj::get_shareAnimationGeometry(){
            	HX_STACKFRAME(&_hx_pos_6a74304a06d83805_203_get_shareAnimationGeometry)
HXDLIN( 203)		return this->_shareAnimationGeometry;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,get_shareAnimationGeometry,return )

bool Mesh_obj::set_shareAnimationGeometry(bool value){
            	HX_STACKFRAME(&_hx_pos_6a74304a06d83805_207_set_shareAnimationGeometry)
HXLINE( 208)		this->_shareAnimationGeometry = value;
HXLINE( 209)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,set_shareAnimationGeometry,return )

void Mesh_obj::clearAnimationGeometry(){
            	HX_STACKFRAME(&_hx_pos_6a74304a06d83805_216_clearAnimationGeometry)
HXLINE( 217)		int len = this->_subMeshes->get_length();
HXLINE( 218)		{
HXLINE( 218)			int _g = 0;
HXDLIN( 218)			int _g1 = len;
HXDLIN( 218)			while((_g < _g1)){
HXLINE( 218)				_g = (_g + 1);
HXDLIN( 218)				int i = (_g - 1);
HXLINE( 219)				this->_subMeshes->get(i).StaticCast<  ::away3d::core::base::SubMesh >()->animationSubGeometry = null();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,clearAnimationGeometry,(void))

void Mesh_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_6a74304a06d83805_226_dispose)
HXLINE( 227)		this->super::dispose();
HXLINE( 229)		this->set_material(null());
HXLINE( 230)		this->set_geometry(null());
            	}


void Mesh_obj::disposeWithAnimatorAndChildren(){
            	HX_STACKFRAME(&_hx_pos_6a74304a06d83805_238_disposeWithAnimatorAndChildren)
HXLINE( 239)		this->disposeWithChildren();
HXLINE( 241)		if (::hx::IsNotNull( this->_animator )) {
HXLINE( 242)			::away3d::animators::IAnimator_obj::dispose(this->_animator);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,disposeWithAnimatorAndChildren,(void))

 ::away3d::core::base::Object3D Mesh_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_6a74304a06d83805_262_clone)
HXLINE( 263)		 ::away3d::entities::Mesh clone =  ::away3d::entities::Mesh_obj::__alloc( HX_CTX ,this->_geometry,this->_material);
HXLINE( 264)		clone->set_transform(this->get_transform());
HXLINE( 265)		clone->set_pivotPoint(this->get_pivotPoint());
HXLINE( 266)		clone->set_partition(this->get_partition());
HXLINE( 267)		clone->set_bounds(this->_bounds->clone());
HXLINE( 268)		clone->set_name(this->get_name());
HXLINE( 269)		clone->set_castsShadows(this->get_castsShadows());
HXLINE( 270)		clone->set_shareAnimationGeometry(this->get_shareAnimationGeometry());
HXLINE( 271)		clone->set_mouseEnabled(this->get_mouseEnabled());
HXLINE( 272)		clone->set_mouseChildren(this->get_mouseChildren());
HXLINE( 275)		clone->extra = this->extra;
HXLINE( 277)		int len = this->_subMeshes->get_length();
HXLINE( 278)		{
HXLINE( 278)			int _g = 0;
HXDLIN( 278)			int _g1 = len;
HXDLIN( 278)			while((_g < _g1)){
HXLINE( 278)				_g = (_g + 1);
HXDLIN( 278)				int i = (_g - 1);
HXLINE( 279)				clone->_subMeshes->get(i).StaticCast<  ::away3d::core::base::SubMesh >()->_material = this->_subMeshes->get(i).StaticCast<  ::away3d::core::base::SubMesh >()->_material;
            			}
            		}
HXLINE( 281)		len = this->get_numChildren();
HXLINE( 282)		{
HXLINE( 282)			int _g2 = 0;
HXDLIN( 282)			int _g3 = len;
HXDLIN( 282)			while((_g2 < _g3)){
HXLINE( 282)				_g2 = (_g2 + 1);
HXDLIN( 282)				int i = (_g2 - 1);
HXLINE( 283)				clone->addChild(::hx::TCast<  ::away3d::containers::ObjectContainer3D >::cast(this->getChildAt(i)->clone()));
            			}
            		}
HXLINE( 285)		if (::hx::IsNotNull( this->_animator )) {
HXLINE( 286)			clone->set_animator(::away3d::animators::IAnimator_obj::clone(this->_animator));
            		}
HXLINE( 288)		return clone;
            	}


void Mesh_obj::updateBounds(){
            	HX_STACKFRAME(&_hx_pos_6a74304a06d83805_295_updateBounds)
HXLINE( 296)		this->_bounds->fromGeometry(this->_geometry);
HXLINE( 297)		this->_boundsInvalid = false;
            	}


 ::away3d::core::partition::EntityNode Mesh_obj::createEntityPartitionNode(){
            	HX_GC_STACKFRAME(&_hx_pos_6a74304a06d83805_305_createEntityPartitionNode)
HXDLIN( 305)		return  ::away3d::core::partition::MeshNode_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
            	}


void Mesh_obj::onSubGeometryAdded( ::away3d::events::GeometryEvent event){
            	HX_STACKFRAME(&_hx_pos_6a74304a06d83805_313_onSubGeometryAdded)
HXDLIN( 313)		this->addSubMesh(event->get_subGeometry());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,onSubGeometryAdded,(void))

void Mesh_obj::onSubGeometryRemoved( ::away3d::events::GeometryEvent event){
            	HX_STACKFRAME(&_hx_pos_6a74304a06d83805_320_onSubGeometryRemoved)
HXLINE( 321)		 ::away3d::core::base::SubMesh subMesh;
HXLINE( 322)		::Dynamic subGeom = event->get_subGeometry();
HXLINE( 323)		int len = this->_subMeshes->get_length();
HXLINE( 324)		int i = 0;
HXLINE( 331)		while((i < len)){
HXLINE( 332)			subMesh = this->_subMeshes->get(i).StaticCast<  ::away3d::core::base::SubMesh >();
HXLINE( 333)			if (::hx::IsInstanceEq( subMesh->get_subGeometry(),subGeom )) {
HXLINE( 334)				subMesh->dispose();
HXLINE( 335)				this->_subMeshes->splice(i,1);
HXLINE( 336)				goto _hx_goto_28;
            			}
HXLINE( 338)			i = (i + 1);
            		}
            		_hx_goto_28:;
HXLINE( 341)		len = (len - 1);
HXLINE( 342)		while((i < len)){
HXLINE( 343)			this->_subMeshes->get(i).StaticCast<  ::away3d::core::base::SubMesh >()->_index = i;
HXLINE( 344)			i = (i + 1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,onSubGeometryRemoved,(void))

void Mesh_obj::addSubMesh(::Dynamic subGeometry){
            	HX_GC_STACKFRAME(&_hx_pos_6a74304a06d83805_352_addSubMesh)
HXLINE( 353)		 ::away3d::core::base::SubMesh subMesh =  ::away3d::core::base::SubMesh_obj::__alloc( HX_CTX ,subGeometry,::hx::ObjectPtr<OBJ_>(this),null());
HXLINE( 354)		int len = this->_subMeshes->get_length();
HXLINE( 355)		subMesh->_index = len;
HXLINE( 356)		this->_subMeshes->set(len,subMesh).StaticCast<  ::away3d::core::base::SubMesh >();
HXLINE( 357)		this->invalidateBounds();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,addSubMesh,(void))

 ::away3d::core::base::SubMesh Mesh_obj::getSubMeshForSubGeometry(::Dynamic subGeometry){
            	HX_STACKFRAME(&_hx_pos_6a74304a06d83805_362_getSubMeshForSubGeometry)
HXDLIN( 362)		::Dynamic this1 = this->_subMeshes;
HXDLIN( 362)		return ( ( ::openfl::_Vector::ObjectVector)(this1) )->get(this->_geometry->get_subGeometries()->indexOf(subGeometry,0)).StaticCast<  ::away3d::core::base::SubMesh >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,getSubMeshForSubGeometry,return )

bool Mesh_obj::collidesBefore(Float shortestCollisionDistance,bool findClosest){
            	HX_STACKFRAME(&_hx_pos_6a74304a06d83805_366_collidesBefore)
HXLINE( 367)		::away3d::core::pick::IPickingCollider_obj::setLocalRay(this->_pickingCollider,this->_pickingCollisionVO->localRayPosition,this->_pickingCollisionVO->localRayDirection);
HXLINE( 368)		this->_pickingCollisionVO->renderable = null();
HXLINE( 369)		int len = this->_subMeshes->get_length();
HXLINE( 370)		{
HXLINE( 370)			int _g = 0;
HXDLIN( 370)			int _g1 = len;
HXDLIN( 370)			while((_g < _g1)){
HXLINE( 370)				_g = (_g + 1);
HXDLIN( 370)				int i = (_g - 1);
HXLINE( 371)				 ::away3d::core::base::SubMesh subMesh = this->_subMeshes->get(i).StaticCast<  ::away3d::core::base::SubMesh >();
HXLINE( 374)				if (::away3d::core::pick::IPickingCollider_obj::testSubMeshCollision(this->_pickingCollider,subMesh,this->_pickingCollisionVO,shortestCollisionDistance)) {
HXLINE( 375)					shortestCollisionDistance = this->_pickingCollisionVO->rayEntryDistance;
HXLINE( 376)					this->_pickingCollisionVO->renderable = subMesh;
HXLINE( 377)					if (!(findClosest)) {
HXLINE( 378)						return true;
            					}
            				}
            			}
            		}
HXLINE( 382)		return ::hx::IsNotNull( this->_pickingCollisionVO->renderable );
            	}



::hx::ObjectPtr< Mesh_obj > Mesh_obj::__new( ::away3d::core::base::Geometry geometry, ::away3d::materials::MaterialBase material) {
	::hx::ObjectPtr< Mesh_obj > __this = new Mesh_obj();
	__this->__construct(geometry,material);
	return __this;
}

::hx::ObjectPtr< Mesh_obj > Mesh_obj::__alloc(::hx::Ctx *_hx_ctx, ::away3d::core::base::Geometry geometry, ::away3d::materials::MaterialBase material) {
	Mesh_obj *__this = (Mesh_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Mesh_obj), true, "away3d.entities.Mesh"));
	*(void **)__this = Mesh_obj::_hx_vtable;
	__this->__construct(geometry,material);
	return __this;
}

Mesh_obj::Mesh_obj()
{
}

void Mesh_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Mesh);
	HX_MARK_MEMBER_NAME(_subMeshes,"_subMeshes");
	HX_MARK_MEMBER_NAME(_geometry,"_geometry");
	HX_MARK_MEMBER_NAME(_material,"_material");
	HX_MARK_MEMBER_NAME(_animator,"_animator");
	HX_MARK_MEMBER_NAME(_castsShadows,"_castsShadows");
	HX_MARK_MEMBER_NAME(_shareAnimationGeometry,"_shareAnimationGeometry");
	 ::away3d::entities::Entity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Mesh_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_subMeshes,"_subMeshes");
	HX_VISIT_MEMBER_NAME(_geometry,"_geometry");
	HX_VISIT_MEMBER_NAME(_material,"_material");
	HX_VISIT_MEMBER_NAME(_animator,"_animator");
	HX_VISIT_MEMBER_NAME(_castsShadows,"_castsShadows");
	HX_VISIT_MEMBER_NAME(_shareAnimationGeometry,"_shareAnimationGeometry");
	 ::away3d::entities::Entity_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Mesh_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"animator") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_animator() ); }
		if (HX_FIELD_EQ(inName,"geometry") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_geometry() ); }
		if (HX_FIELD_EQ(inName,"material") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_material() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"subMeshes") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_subMeshes() ); }
		if (HX_FIELD_EQ(inName,"_geometry") ) { return ::hx::Val( _geometry ); }
		if (HX_FIELD_EQ(inName,"_material") ) { return ::hx::Val( _material ); }
		if (HX_FIELD_EQ(inName,"_animator") ) { return ::hx::Val( _animator ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_subMeshes") ) { return ::hx::Val( _subMeshes ); }
		if (HX_FIELD_EQ(inName,"addSubMesh") ) { return ::hx::Val( addSubMesh_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"castsShadows") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_castsShadows() ); }
		if (HX_FIELD_EQ(inName,"get_animator") ) { return ::hx::Val( get_animator_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_animator") ) { return ::hx::Val( set_animator_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_geometry") ) { return ::hx::Val( get_geometry_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_geometry") ) { return ::hx::Val( set_geometry_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_material") ) { return ::hx::Val( get_material_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_material") ) { return ::hx::Val( set_material_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateBounds") ) { return ::hx::Val( updateBounds_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_castsShadows") ) { return ::hx::Val( _castsShadows ); }
		if (HX_FIELD_EQ(inName,"get_assetType") ) { return ::hx::Val( get_assetType_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_subMeshes") ) { return ::hx::Val( get_subMeshes_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"collidesBefore") ) { return ::hx::Val( collidesBefore_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_castsShadows") ) { return ::hx::Val( get_castsShadows_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_castsShadows") ) { return ::hx::Val( set_castsShadows_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onSubGeometryAdded") ) { return ::hx::Val( onSubGeometryAdded_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"bakeTransformations") ) { return ::hx::Val( bakeTransformations_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"onSubGeometryRemoved") ) { return ::hx::Val( onSubGeometryRemoved_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"shareAnimationGeometry") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_shareAnimationGeometry() ); }
		if (HX_FIELD_EQ(inName,"clearAnimationGeometry") ) { return ::hx::Val( clearAnimationGeometry_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_shareAnimationGeometry") ) { return ::hx::Val( _shareAnimationGeometry ); }
		if (HX_FIELD_EQ(inName,"onGeometryBoundsInvalid") ) { return ::hx::Val( onGeometryBoundsInvalid_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getSubMeshForSubGeometry") ) { return ::hx::Val( getSubMeshForSubGeometry_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"createEntityPartitionNode") ) { return ::hx::Val( createEntityPartitionNode_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"get_shareAnimationGeometry") ) { return ::hx::Val( get_shareAnimationGeometry_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_shareAnimationGeometry") ) { return ::hx::Val( set_shareAnimationGeometry_dyn() ); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"disposeWithAnimatorAndChildren") ) { return ::hx::Val( disposeWithAnimatorAndChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Mesh_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"animator") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_animator(inValue.Cast< ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"geometry") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_geometry(inValue.Cast<  ::away3d::core::base::Geometry >()) ); }
		if (HX_FIELD_EQ(inName,"material") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_material(inValue.Cast<  ::away3d::materials::MaterialBase >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_geometry") ) { _geometry=inValue.Cast<  ::away3d::core::base::Geometry >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_material") ) { _material=inValue.Cast<  ::away3d::materials::MaterialBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_animator") ) { _animator=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_subMeshes") ) { _subMeshes=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"castsShadows") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_castsShadows(inValue.Cast< bool >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_castsShadows") ) { _castsShadows=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"shareAnimationGeometry") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_shareAnimationGeometry(inValue.Cast< bool >()) ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_shareAnimationGeometry") ) { _shareAnimationGeometry=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Mesh_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("castsShadows",1f,fe,ad,16));
	outFields->push(HX_("animator",67,7b,f2,88));
	outFields->push(HX_("geometry",b2,02,a9,d2));
	outFields->push(HX_("material",a7,5c,a5,f0));
	outFields->push(HX_("subMeshes",3b,f5,fd,0e));
	outFields->push(HX_("shareAnimationGeometry",f7,c1,11,c4));
	outFields->push(HX_("_subMeshes",fc,70,a0,6a));
	outFields->push(HX_("_geometry",11,fa,3e,1a));
	outFields->push(HX_("_material",06,54,3b,38));
	outFields->push(HX_("_animator",c6,72,88,d0));
	outFields->push(HX_("_castsShadows",fe,90,1c,f9));
	outFields->push(HX_("_shareAnimationGeometry",96,41,ea,56));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Mesh_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(Mesh_obj,_subMeshes),HX_("_subMeshes",fc,70,a0,6a)},
	{::hx::fsObject /*  ::away3d::core::base::Geometry */ ,(int)offsetof(Mesh_obj,_geometry),HX_("_geometry",11,fa,3e,1a)},
	{::hx::fsObject /*  ::away3d::materials::MaterialBase */ ,(int)offsetof(Mesh_obj,_material),HX_("_material",06,54,3b,38)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(Mesh_obj,_animator),HX_("_animator",c6,72,88,d0)},
	{::hx::fsBool,(int)offsetof(Mesh_obj,_castsShadows),HX_("_castsShadows",fe,90,1c,f9)},
	{::hx::fsBool,(int)offsetof(Mesh_obj,_shareAnimationGeometry),HX_("_shareAnimationGeometry",96,41,ea,56)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Mesh_obj_sStaticStorageInfo = 0;
#endif

static ::String Mesh_obj_sMemberFields[] = {
	HX_("_subMeshes",fc,70,a0,6a),
	HX_("_geometry",11,fa,3e,1a),
	HX_("_material",06,54,3b,38),
	HX_("_animator",c6,72,88,d0),
	HX_("_castsShadows",fe,90,1c,f9),
	HX_("_shareAnimationGeometry",96,41,ea,56),
	HX_("bakeTransformations",71,9d,ea,78),
	HX_("get_assetType",a1,14,13,73),
	HX_("onGeometryBoundsInvalid",51,9b,f4,8c),
	HX_("get_castsShadows",a8,ea,4c,1b),
	HX_("set_castsShadows",1c,d8,8e,71),
	HX_("get_animator",70,2f,0c,3e),
	HX_("set_animator",e4,52,05,53),
	HX_("get_geometry",bb,b6,c2,87),
	HX_("set_geometry",2f,da,bb,9c),
	HX_("get_material",b0,10,bf,a5),
	HX_("set_material",24,34,b8,ba),
	HX_("get_subMeshes",12,c9,61,d0),
	HX_("get_shareAnimationGeometry",c0,13,17,fc),
	HX_("set_shareAnimationGeometry",34,da,ab,5b),
	HX_("clearAnimationGeometry",89,11,a2,78),
	HX_("dispose",9f,80,4c,bb),
	HX_("disposeWithAnimatorAndChildren",ca,4f,3c,35),
	HX_("clone",5d,13,63,48),
	HX_("updateBounds",5e,2d,e1,65),
	HX_("createEntityPartitionNode",4d,b6,d9,04),
	HX_("onSubGeometryAdded",4d,9e,67,32),
	HX_("onSubGeometryRemoved",6d,26,d3,b0),
	HX_("addSubMesh",6c,0b,e7,7d),
	HX_("getSubMeshForSubGeometry",c0,e7,b4,b4),
	HX_("collidesBefore",94,7d,bf,f4),
	::String(null()) };

::hx::Class Mesh_obj::__mClass;

void Mesh_obj::__register()
{
	Mesh_obj _hx_dummy;
	Mesh_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.entities.Mesh",6b,66,98,04);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Mesh_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Mesh_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Mesh_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Mesh_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace entities
