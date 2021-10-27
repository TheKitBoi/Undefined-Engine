#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_animators_IAnimationSet
#include <away3d/animators/IAnimationSet.h>
#endif
#ifndef INCLUDED_away3d_animators_IAnimator
#include <away3d/animators/IAnimator.h>
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
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
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
#ifndef INCLUDED_away3d_materials_lightpickers_LightPickerBase
#include <away3d/materials/lightpickers/LightPickerBase.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_DepthMapPass
#include <away3d/materials/passes/DepthMapPass.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_DistanceMapPass
#include <away3d/materials/passes/DistanceMapPass.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_MaterialPassBase
#include <away3d/materials/passes/MaterialPassBase.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_37_new,"away3d.materials.MaterialBase","new",0xef70fc7b,"away3d.materials.MaterialBase.new","away3d/materials/MaterialBase.hx",37,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_148_get_assetType,"away3d.materials.MaterialBase","get_assetType",0x1a54907c,"away3d.materials.MaterialBase.get_assetType","away3d/materials/MaterialBase.hx",148,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_159_get_lightPicker,"away3d.materials.MaterialBase","get_lightPicker",0xbb796536,"away3d.materials.MaterialBase.get_lightPicker","away3d/materials/MaterialBase.hx",159,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_163_set_lightPicker,"away3d.materials.MaterialBase","set_lightPicker",0xb744e242,"away3d.materials.MaterialBase.set_lightPicker","away3d/materials/MaterialBase.hx",163,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_178_get_mipmap,"away3d.materials.MaterialBase","get_mipmap",0xd74dfa96,"away3d.materials.MaterialBase.get_mipmap","away3d/materials/MaterialBase.hx",178,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_182_set_mipmap,"away3d.materials.MaterialBase","set_mipmap",0xdacb990a,"away3d.materials.MaterialBase.set_mipmap","away3d/materials/MaterialBase.hx",182,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_195_get_smooth,"away3d.materials.MaterialBase","get_smooth",0x8a64d53c,"away3d.materials.MaterialBase.get_smooth","away3d/materials/MaterialBase.hx",195,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_199_set_smooth,"away3d.materials.MaterialBase","set_smooth",0x8de273b0,"away3d.materials.MaterialBase.set_smooth","away3d/materials/MaterialBase.hx",199,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_213_get_depthCompareMode,"away3d.materials.MaterialBase","get_depthCompareMode",0x318d48f3,"away3d.materials.MaterialBase.get_depthCompareMode","away3d/materials/MaterialBase.hx",213,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_217_set_depthCompareMode,"away3d.materials.MaterialBase","set_depthCompareMode",0xfe450067,"away3d.materials.MaterialBase.set_depthCompareMode","away3d/materials/MaterialBase.hx",217,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_228_get_repeat,"away3d.materials.MaterialBase","get_repeat",0x89766469,"away3d.materials.MaterialBase.get_repeat","away3d/materials/MaterialBase.hx",228,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_232_set_repeat,"away3d.materials.MaterialBase","set_repeat",0x8cf402dd,"away3d.materials.MaterialBase.set_repeat","away3d/materials/MaterialBase.hx",232,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_244_get_anisotropy,"away3d.materials.MaterialBase","get_anisotropy",0x438f6410,"away3d.materials.MaterialBase.get_anisotropy","away3d/materials/MaterialBase.hx",244,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_248_set_anisotropy,"away3d.materials.MaterialBase","set_anisotropy",0x63af4c84,"away3d.materials.MaterialBase.set_anisotropy","away3d/materials/MaterialBase.hx",248,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_260_dispose,"away3d.materials.MaterialBase","dispose",0x2a41563a,"away3d.materials.MaterialBase.dispose","away3d/materials/MaterialBase.hx",260,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_275_get_bothSides,"away3d.materials.MaterialBase","get_bothSides",0x72bc1a6d,"away3d.materials.MaterialBase.get_bothSides","away3d/materials/MaterialBase.hx",275,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_279_set_bothSides,"away3d.materials.MaterialBase","set_bothSides",0xb7c1fc79,"away3d.materials.MaterialBase.set_bothSides","away3d/materials/MaterialBase.hx",279,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_302_get_blendMode,"away3d.materials.MaterialBase","get_blendMode",0x74dd3406,"away3d.materials.MaterialBase.get_blendMode","away3d/materials/MaterialBase.hx",302,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_306_set_blendMode,"away3d.materials.MaterialBase","set_blendMode",0xb9e31612,"away3d.materials.MaterialBase.set_blendMode","away3d/materials/MaterialBase.hx",306,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_318_get_alphaPremultiplied,"away3d.materials.MaterialBase","get_alphaPremultiplied",0x1b710126,"away3d.materials.MaterialBase.get_alphaPremultiplied","away3d/materials/MaterialBase.hx",318,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_322_set_alphaPremultiplied,"away3d.materials.MaterialBase","set_alphaPremultiplied",0x4f1c7d9a,"away3d.materials.MaterialBase.set_alphaPremultiplied","away3d/materials/MaterialBase.hx",322,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_335_get_requiresBlending,"away3d.materials.MaterialBase","get_requiresBlending",0x0574c34d,"away3d.materials.MaterialBase.get_requiresBlending","away3d/materials/MaterialBase.hx",335,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_344_get_uniqueId,"away3d.materials.MaterialBase","get_uniqueId",0xea7c25da,"away3d.materials.MaterialBase.get_uniqueId","away3d/materials/MaterialBase.hx",344,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_354_get_numPasses,"away3d.materials.MaterialBase","get_numPasses",0x07d86e17,"away3d.materials.MaterialBase.get_numPasses","away3d/materials/MaterialBase.hx",354,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_364_hasDepthAlphaThreshold,"away3d.materials.MaterialBase","hasDepthAlphaThreshold",0x18806e5b,"away3d.materials.MaterialBase.hasDepthAlphaThreshold","away3d/materials/MaterialBase.hx",364,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_379_activateForDepth,"away3d.materials.MaterialBase","activateForDepth",0x868adb12,"away3d.materials.MaterialBase.activateForDepth","away3d/materials/MaterialBase.hx",379,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_397_deactivateForDepth,"away3d.materials.MaterialBase","deactivateForDepth",0xcd0f8fd3,"away3d.materials.MaterialBase.deactivateForDepth","away3d/materials/MaterialBase.hx",397,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_416_renderDepth,"away3d.materials.MaterialBase","renderDepth",0x347a5ce8,"away3d.materials.MaterialBase.renderDepth","away3d/materials/MaterialBase.hx",416,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_436_passRendersToTexture,"away3d.materials.MaterialBase","passRendersToTexture",0xc9efa4f9,"away3d.materials.MaterialBase.passRendersToTexture","away3d/materials/MaterialBase.hx",436,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_449_activatePass,"away3d.materials.MaterialBase","activatePass",0x1cf27aa9,"away3d.materials.MaterialBase.activatePass","away3d/materials/MaterialBase.hx",449,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_462_deactivatePass,"away3d.materials.MaterialBase","deactivatePass",0x85eb7aea,"away3d.materials.MaterialBase.deactivatePass","away3d/materials/MaterialBase.hx",462,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_475_renderPass,"away3d.materials.MaterialBase","renderPass",0x79ce3c8c,"away3d.materials.MaterialBase.renderPass","away3d/materials/MaterialBase.hx",475,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_500_addOwner,"away3d.materials.MaterialBase","addOwner",0x5919d057,"away3d.materials.MaterialBase.addOwner","away3d/materials/MaterialBase.hx",500,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_525_removeOwner,"away3d.materials.MaterialBase","removeOwner",0xc849b46a,"away3d.materials.MaterialBase.removeOwner","away3d/materials/MaterialBase.hx",525,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_544_get_owners,"away3d.materials.MaterialBase","get_owners",0xb24861ee,"away3d.materials.MaterialBase.get_owners","away3d/materials/MaterialBase.hx",544,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_553_updateMaterial,"away3d.materials.MaterialBase","updateMaterial",0xd7da3395,"away3d.materials.MaterialBase.updateMaterial","away3d/materials/MaterialBase.hx",553,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_564_deactivate,"away3d.materials.MaterialBase","deactivate",0xce73b979,"away3d.materials.MaterialBase.deactivate","away3d/materials/MaterialBase.hx",564,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_575_invalidatePasses,"away3d.materials.MaterialBase","invalidatePasses",0x6e384e5f,"away3d.materials.MaterialBase.invalidatePasses","away3d/materials/MaterialBase.hx",575,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_617_removePass,"away3d.materials.MaterialBase","removePass",0x59e37c7a,"away3d.materials.MaterialBase.removePass","away3d/materials/MaterialBase.hx",617,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_626_clearPasses,"away3d.materials.MaterialBase","clearPasses",0x13be2007,"away3d.materials.MaterialBase.clearPasses","away3d/materials/MaterialBase.hx",626,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_639_addPass,"away3d.materials.MaterialBase","addPass",0xf583fd2d,"away3d.materials.MaterialBase.addPass","away3d/materials/MaterialBase.hx",639,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_657_onPassChange,"away3d.materials.MaterialBase","onPassChange",0x0bdd77a5,"away3d.materials.MaterialBase.onPassChange","away3d/materials/MaterialBase.hx",657,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_681_onDistancePassChange,"away3d.materials.MaterialBase","onDistancePassChange",0xd60e273a,"away3d.materials.MaterialBase.onDistancePassChange","away3d/materials/MaterialBase.hx",681,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_699_onDepthPassChange,"away3d.materials.MaterialBase","onDepthPassChange",0xf7611b00,"away3d.materials.MaterialBase.onDepthPassChange","away3d/materials/MaterialBase.hx",699,0x8c4dfa53)
HX_LOCAL_STACK_FRAME(_hx_pos_2581a4b6e0a45b3e_58_boot,"away3d.materials.MaterialBase","boot",0x8b84efb7,"away3d.materials.MaterialBase.boot","away3d/materials/MaterialBase.hx",58,0x8c4dfa53)
namespace away3d{
namespace materials{

void MaterialBase_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_37_new)
HXLINE( 122)		this->_depthCompareMode = 5;
HXLINE( 115)		this->_anisotropy = 1;
HXLINE( 112)		this->_smooth = true;
HXLINE( 111)		this->_mipmap = true;
HXLINE( 108)		this->_numPasses = 0;
HXLINE( 106)		this->_blendMode = 10;
HXLINE( 129)		int length = null();
HXDLIN( 129)		bool fixed = null();
HXDLIN( 129)		::Array< ::Dynamic> array = null();
HXDLIN( 129)		this->_owners =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE( 130)		int length1 = null();
HXDLIN( 130)		bool fixed1 = null();
HXDLIN( 130)		::Array< ::Dynamic> array1 = null();
HXDLIN( 130)		this->_passes =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length1,fixed1,array1,true);
HXLINE( 131)		this->_depthPass =  ::away3d::materials::passes::DepthMapPass_obj::__alloc( HX_CTX );
HXLINE( 132)		this->_distancePass =  ::away3d::materials::passes::DistanceMapPass_obj::__alloc( HX_CTX );
HXLINE( 133)		this->_depthPass->addEventListener(HX_("change",70,91,72,b7),this->onDepthPassChange_dyn(),null(),null(),null());
HXLINE( 134)		this->_distancePass->addEventListener(HX_("change",70,91,72,b7),this->onDistancePassChange_dyn(),null(),null(),null());
HXLINE( 137)		this->set_alphaPremultiplied(true);
HXLINE( 139)		this->_uniqueId = ::away3d::materials::MaterialBase_obj::MATERIAL_ID_COUNT++;
HXLINE( 140)		super::__construct(null());
            	}

Dynamic MaterialBase_obj::__CreateEmpty() { return new MaterialBase_obj; }

void *MaterialBase_obj::_hx_vtable = 0;

Dynamic MaterialBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MaterialBase_obj > _hx_result = new MaterialBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MaterialBase_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37f46043) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x37f46043;
		}
	} else {
		return inClassId==(int)0x7e319f05;
	}
}

static ::openfl::events::IEventDispatcher_obj _hx_away3d_materials_MaterialBase__hx_openfl_events_IEventDispatcher= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::away3d::materials::MaterialBase_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::away3d::materials::MaterialBase_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::away3d::materials::MaterialBase_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::away3d::materials::MaterialBase_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::away3d::materials::MaterialBase_obj::willTrigger,
};

static ::away3d::library::assets::IAsset_obj _hx_away3d_materials_MaterialBase__hx_away3d_library_assets_IAsset= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::away3d::materials::MaterialBase_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::away3d::materials::MaterialBase_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::away3d::materials::MaterialBase_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::away3d::materials::MaterialBase_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::away3d::materials::MaterialBase_obj::willTrigger,
	( ::String (::hx::Object::*)())&::away3d::materials::MaterialBase_obj::get_name,
	( ::String (::hx::Object::*)(::String))&::away3d::materials::MaterialBase_obj::set_name,
	( ::String (::hx::Object::*)())&::away3d::materials::MaterialBase_obj::get_id,
	( ::String (::hx::Object::*)(::String))&::away3d::materials::MaterialBase_obj::set_id,
	( ::String (::hx::Object::*)())&::away3d::materials::MaterialBase_obj::get_assetNamespace,
	( ::String (::hx::Object::*)())&::away3d::materials::MaterialBase_obj::get_assetType,
	( ::cpp::VirtualArray (::hx::Object::*)())&::away3d::materials::MaterialBase_obj::get_assetFullPath,
	( bool (::hx::Object::*)(::String,::String))&::away3d::materials::MaterialBase_obj::assetPathEquals,
	( void (::hx::Object::*)(::String,::String, ::Dynamic))&::away3d::materials::MaterialBase_obj::resetAssetPath,
	( void (::hx::Object::*)())&::away3d::materials::MaterialBase_obj::dispose,
};

void *MaterialBase_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x87530281: return &_hx_away3d_materials_MaterialBase__hx_openfl_events_IEventDispatcher;
		case (int)0xa8241686: return &_hx_away3d_materials_MaterialBase__hx_away3d_library_assets_IAsset;
	}
	return super::_hx_getInterface(inHash);
}

::String MaterialBase_obj::get_assetType(){
            	HX_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_148_get_assetType)
HXDLIN( 148)		return HX_("material",a7,5c,a5,f0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(MaterialBase_obj,get_assetType,return )

 ::away3d::materials::lightpickers::LightPickerBase MaterialBase_obj::get_lightPicker(){
            	HX_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_159_get_lightPicker)
HXDLIN( 159)		return this->_lightPicker;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MaterialBase_obj,get_lightPicker,return )

 ::away3d::materials::lightpickers::LightPickerBase MaterialBase_obj::set_lightPicker( ::away3d::materials::lightpickers::LightPickerBase value){
            	HX_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_163_set_lightPicker)
HXLINE( 164)		if (::hx::IsInstanceNotEq( value,this->_lightPicker )) {
HXLINE( 165)			this->_lightPicker = value;
HXLINE( 166)			int len = this->_passes->get_length();
HXLINE( 167)			{
HXLINE( 167)				int _g = 0;
HXDLIN( 167)				int _g1 = len;
HXDLIN( 167)				while((_g < _g1)){
HXLINE( 167)					_g = (_g + 1);
HXDLIN( 167)					int i = (_g - 1);
HXLINE( 168)					 ::away3d::materials::passes::MaterialPassBase _hx_tmp = this->_passes->get(i).StaticCast<  ::away3d::materials::passes::MaterialPassBase >();
HXDLIN( 168)					_hx_tmp->set_lightPicker(this->_lightPicker);
            				}
            			}
            		}
HXLINE( 170)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialBase_obj,set_lightPicker,return )

bool MaterialBase_obj::get_mipmap(){
            	HX_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_178_get_mipmap)
HXDLIN( 178)		return this->_mipmap;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MaterialBase_obj,get_mipmap,return )

bool MaterialBase_obj::set_mipmap(bool value){
            	HX_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_182_set_mipmap)
HXLINE( 183)		this->_mipmap = value;
HXLINE( 184)		{
HXLINE( 184)			int _g = 0;
HXDLIN( 184)			int _g1 = this->_numPasses;
HXDLIN( 184)			while((_g < _g1)){
HXLINE( 184)				_g = (_g + 1);
HXDLIN( 184)				int i = (_g - 1);
HXLINE( 185)				this->_passes->get(i).StaticCast<  ::away3d::materials::passes::MaterialPassBase >()->set_mipmap(value);
            			}
            		}
HXLINE( 187)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialBase_obj,set_mipmap,return )

bool MaterialBase_obj::get_smooth(){
            	HX_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_195_get_smooth)
HXDLIN( 195)		return this->_smooth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MaterialBase_obj,get_smooth,return )

bool MaterialBase_obj::set_smooth(bool value){
            	HX_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_199_set_smooth)
HXLINE( 200)		this->_smooth = value;
HXLINE( 201)		{
HXLINE( 201)			int _g = 0;
HXDLIN( 201)			int _g1 = this->_numPasses;
HXDLIN( 201)			while((_g < _g1)){
HXLINE( 201)				_g = (_g + 1);
HXDLIN( 201)				int i = (_g - 1);
HXLINE( 202)				this->_passes->get(i).StaticCast<  ::away3d::materials::passes::MaterialPassBase >()->set_smooth(value);
            			}
            		}
HXLINE( 203)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialBase_obj,set_smooth,return )

 ::Dynamic MaterialBase_obj::get_depthCompareMode(){
            	HX_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_213_get_depthCompareMode)
HXDLIN( 213)		return this->_depthCompareMode;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MaterialBase_obj,get_depthCompareMode,return )

 ::Dynamic MaterialBase_obj::set_depthCompareMode( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_217_set_depthCompareMode)
HXLINE( 218)		this->_depthCompareMode = value;
HXLINE( 219)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialBase_obj,set_depthCompareMode,return )

bool MaterialBase_obj::get_repeat(){
            	HX_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_228_get_repeat)
HXDLIN( 228)		return this->_repeat;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MaterialBase_obj,get_repeat,return )

bool MaterialBase_obj::set_repeat(bool value){
            	HX_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_232_set_repeat)
HXLINE( 233)		this->_repeat = value;
HXLINE( 234)		{
HXLINE( 234)			int _g = 0;
HXDLIN( 234)			int _g1 = this->_numPasses;
HXDLIN( 234)			while((_g < _g1)){
HXLINE( 234)				_g = (_g + 1);
HXDLIN( 234)				int i = (_g - 1);
HXLINE( 235)				this->_passes->get(i).StaticCast<  ::away3d::materials::passes::MaterialPassBase >()->set_repeat(value);
            			}
            		}
HXLINE( 236)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialBase_obj,set_repeat,return )

 ::Dynamic MaterialBase_obj::get_anisotropy(){
            	HX_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_244_get_anisotropy)
HXDLIN( 244)		return this->_anisotropy;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MaterialBase_obj,get_anisotropy,return )

 ::Dynamic MaterialBase_obj::set_anisotropy( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_248_set_anisotropy)
HXLINE( 249)		this->_anisotropy = value;
HXLINE( 250)		{
HXLINE( 250)			int _g = 0;
HXDLIN( 250)			int _g1 = this->_numPasses;
HXDLIN( 250)			while((_g < _g1)){
HXLINE( 250)				_g = (_g + 1);
HXDLIN( 250)				int i = (_g - 1);
HXLINE( 251)				 ::away3d::materials::passes::MaterialPassBase _hx_tmp = this->_passes->get(i).StaticCast<  ::away3d::materials::passes::MaterialPassBase >();
HXDLIN( 251)				_hx_tmp->set_anisotropy(this->_anisotropy);
            			}
            		}
HXLINE( 252)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialBase_obj,set_anisotropy,return )

void MaterialBase_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_260_dispose)
HXLINE( 261)		{
HXLINE( 261)			int _g = 0;
HXDLIN( 261)			int _g1 = this->_numPasses;
HXDLIN( 261)			while((_g < _g1)){
HXLINE( 261)				_g = (_g + 1);
HXDLIN( 261)				int i = (_g - 1);
HXLINE( 262)				this->_passes->get(i).StaticCast<  ::away3d::materials::passes::MaterialPassBase >()->dispose();
            			}
            		}
HXLINE( 264)		this->_depthPass->dispose();
HXLINE( 265)		this->_distancePass->dispose();
HXLINE( 266)		this->_depthPass->removeEventListener(HX_("change",70,91,72,b7),this->onDepthPassChange_dyn(),null());
HXLINE( 267)		this->_distancePass->removeEventListener(HX_("change",70,91,72,b7),this->onDistancePassChange_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(MaterialBase_obj,dispose,(void))

bool MaterialBase_obj::get_bothSides(){
            	HX_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_275_get_bothSides)
HXDLIN( 275)		return this->_bothSides;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MaterialBase_obj,get_bothSides,return )

bool MaterialBase_obj::set_bothSides(bool value){
            	HX_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_279_set_bothSides)
HXLINE( 280)		this->_bothSides = value;
HXLINE( 282)		{
HXLINE( 282)			int _g = 0;
HXDLIN( 282)			int _g1 = this->_numPasses;
HXDLIN( 282)			while((_g < _g1)){
HXLINE( 282)				_g = (_g + 1);
HXDLIN( 282)				int i = (_g - 1);
HXLINE( 283)				this->_passes->get(i).StaticCast<  ::away3d::materials::passes::MaterialPassBase >()->set_bothSides(value);
            			}
            		}
HXLINE( 285)		this->_depthPass->set_bothSides(value);
HXLINE( 286)		this->_distancePass->set_bothSides(value);
HXLINE( 287)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialBase_obj,set_bothSides,return )

 ::Dynamic MaterialBase_obj::get_blendMode(){
            	HX_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_302_get_blendMode)
HXDLIN( 302)		return this->_blendMode;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MaterialBase_obj,get_blendMode,return )

 ::Dynamic MaterialBase_obj::set_blendMode( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_306_set_blendMode)
HXLINE( 307)		this->_blendMode = value;
HXLINE( 308)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialBase_obj,set_blendMode,return )

bool MaterialBase_obj::get_alphaPremultiplied(){
            	HX_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_318_get_alphaPremultiplied)
HXDLIN( 318)		return this->_alphaPremultiplied;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MaterialBase_obj,get_alphaPremultiplied,return )

bool MaterialBase_obj::set_alphaPremultiplied(bool value){
            	HX_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_322_set_alphaPremultiplied)
HXLINE( 323)		this->_alphaPremultiplied = value;
HXLINE( 325)		{
HXLINE( 325)			int _g = 0;
HXDLIN( 325)			int _g1 = this->_numPasses;
HXDLIN( 325)			while((_g < _g1)){
HXLINE( 325)				_g = (_g + 1);
HXDLIN( 325)				int i = (_g - 1);
HXLINE( 326)				this->_passes->get(i).StaticCast<  ::away3d::materials::passes::MaterialPassBase >()->set_alphaPremultiplied(value);
            			}
            		}
HXLINE( 327)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialBase_obj,set_alphaPremultiplied,return )

bool MaterialBase_obj::get_requiresBlending(){
            	HX_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_335_get_requiresBlending)
HXDLIN( 335)		return ::hx::IsNotEq( this->_blendMode,10 );
            	}


HX_DEFINE_DYNAMIC_FUNC0(MaterialBase_obj,get_requiresBlending,return )

int MaterialBase_obj::get_uniqueId(){
            	HX_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_344_get_uniqueId)
HXDLIN( 344)		return this->_uniqueId;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MaterialBase_obj,get_uniqueId,return )

int MaterialBase_obj::get_numPasses(){
            	HX_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_354_get_numPasses)
HXDLIN( 354)		return this->_numPasses;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MaterialBase_obj,get_numPasses,return )

bool MaterialBase_obj::hasDepthAlphaThreshold(){
            	HX_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_364_hasDepthAlphaThreshold)
HXDLIN( 364)		return (this->_depthPass->get_alphaThreshold() > 0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(MaterialBase_obj,hasDepthAlphaThreshold,return )

void MaterialBase_obj::activateForDepth( ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera,::hx::Null< bool >  __o_distanceBased){
            		bool distanceBased = __o_distanceBased.Default(false);
            	HX_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_379_activateForDepth)
HXLINE( 380)		this->_distanceBasedDepthRender = distanceBased;
HXLINE( 382)		if (distanceBased) {
HXLINE( 383)			this->_distancePass->activate(stage3DProxy,camera);
            		}
            		else {
HXLINE( 385)			this->_depthPass->activate(stage3DProxy,camera);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(MaterialBase_obj,activateForDepth,(void))

void MaterialBase_obj::deactivateForDepth( ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_397_deactivateForDepth)
HXDLIN( 397)		if (this->_distanceBasedDepthRender) {
HXLINE( 398)			this->_distancePass->deactivate(stage3DProxy);
            		}
            		else {
HXLINE( 400)			this->_depthPass->deactivate(stage3DProxy);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialBase_obj,deactivateForDepth,(void))

void MaterialBase_obj::renderDepth(::Dynamic renderable, ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera, ::openfl::geom::Matrix3D viewProjection){
            	HX_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_416_renderDepth)
HXDLIN( 416)		if (this->_distanceBasedDepthRender) {
HXLINE( 417)			if (::hx::IsNotNull( ::away3d::core::base::IMaterialOwner_obj::get_animator(renderable) )) {
HXLINE( 418)				this->_distancePass->updateAnimationState(renderable,stage3DProxy,camera);
            			}
HXLINE( 419)			this->_distancePass->render(renderable,stage3DProxy,camera,viewProjection);
            		}
            		else {
HXLINE( 421)			if (::hx::IsNotNull( ::away3d::core::base::IMaterialOwner_obj::get_animator(renderable) )) {
HXLINE( 422)				this->_depthPass->updateAnimationState(renderable,stage3DProxy,camera);
            			}
HXLINE( 423)			this->_depthPass->render(renderable,stage3DProxy,camera,viewProjection);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(MaterialBase_obj,renderDepth,(void))

bool MaterialBase_obj::passRendersToTexture(int index){
            	HX_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_436_passRendersToTexture)
HXDLIN( 436)		return this->_passes->get(index).StaticCast<  ::away3d::materials::passes::MaterialPassBase >()->get_renderToTexture();
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialBase_obj,passRendersToTexture,return )

void MaterialBase_obj::activatePass(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera){
            	HX_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_449_activatePass)
HXDLIN( 449)		this->_passes->get(index).StaticCast<  ::away3d::materials::passes::MaterialPassBase >()->activate(stage3DProxy,camera);
            	}


HX_DEFINE_DYNAMIC_FUNC3(MaterialBase_obj,activatePass,(void))

void MaterialBase_obj::deactivatePass(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_462_deactivatePass)
HXDLIN( 462)		this->_passes->get(index).StaticCast<  ::away3d::materials::passes::MaterialPassBase >()->deactivate(stage3DProxy);
            	}


HX_DEFINE_DYNAMIC_FUNC2(MaterialBase_obj,deactivatePass,(void))

void MaterialBase_obj::renderPass(int index,::Dynamic renderable, ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::core::traverse::EntityCollector entityCollector, ::openfl::geom::Matrix3D viewProjection){
            	HX_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_475_renderPass)
HXLINE( 476)		if (::hx::IsNotNull( this->_lightPicker )) {
HXLINE( 477)			this->_lightPicker->collectLights(renderable,entityCollector);
            		}
HXLINE( 479)		 ::away3d::materials::passes::MaterialPassBase pass = this->_passes->get(index).StaticCast<  ::away3d::materials::passes::MaterialPassBase >();
HXLINE( 481)		if (::hx::IsNotNull( ::away3d::core::base::IMaterialOwner_obj::get_animator(renderable) )) {
HXLINE( 482)			pass->updateAnimationState(renderable,stage3DProxy,entityCollector->get_camera());
            		}
HXLINE( 484)		pass->render(renderable,stage3DProxy,entityCollector->get_camera(),viewProjection);
            	}


HX_DEFINE_DYNAMIC_FUNC5(MaterialBase_obj,renderPass,(void))

void MaterialBase_obj::addOwner(::Dynamic owner){
            	HX_GC_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_500_addOwner)
HXLINE( 501)		this->_owners->push(owner);
HXLINE( 503)		if (::hx::IsNotNull( ::away3d::core::base::IMaterialOwner_obj::get_animator(owner) )) {
HXLINE( 504)			bool _hx_tmp;
HXDLIN( 504)			if (::hx::IsNotNull( this->_animationSet )) {
HXLINE( 504)				::Dynamic _hx_tmp1 = ::away3d::animators::IAnimator_obj::get_animationSet(::away3d::core::base::IMaterialOwner_obj::get_animator(owner));
HXDLIN( 504)				_hx_tmp = ::hx::IsInstanceNotEq( _hx_tmp1,this->_animationSet );
            			}
            			else {
HXLINE( 504)				_hx_tmp = false;
            			}
HXDLIN( 504)			if (_hx_tmp) {
HXLINE( 505)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("A Material instance cannot be shared across renderables with different animator libraries",0d,81,28,d2),null())));
            			}
            			else {
HXLINE( 507)				::Dynamic _hx_tmp = this->_animationSet;
HXDLIN( 507)				if (::hx::IsInstanceNotEq( _hx_tmp,::away3d::animators::IAnimator_obj::get_animationSet(::away3d::core::base::IMaterialOwner_obj::get_animator(owner)) )) {
HXLINE( 508)					this->_animationSet = ::away3d::animators::IAnimator_obj::get_animationSet(::away3d::core::base::IMaterialOwner_obj::get_animator(owner));
HXLINE( 509)					{
HXLINE( 509)						int _g = 0;
HXDLIN( 509)						int _g1 = this->_numPasses;
HXDLIN( 509)						while((_g < _g1)){
HXLINE( 509)							_g = (_g + 1);
HXDLIN( 509)							int i = (_g - 1);
HXLINE( 510)							 ::away3d::materials::passes::MaterialPassBase _hx_tmp = this->_passes->get(i).StaticCast<  ::away3d::materials::passes::MaterialPassBase >();
HXDLIN( 510)							_hx_tmp->set_animationSet(this->_animationSet);
            						}
            					}
HXLINE( 511)					this->_depthPass->set_animationSet(this->_animationSet);
HXLINE( 512)					this->_distancePass->set_animationSet(this->_animationSet);
HXLINE( 513)					this->invalidatePasses(null());
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialBase_obj,addOwner,(void))

void MaterialBase_obj::removeOwner(::Dynamic owner){
            	HX_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_525_removeOwner)
HXLINE( 526)		{
HXLINE( 526)			::Dynamic this1 = this->_owners;
HXDLIN( 526)			( ( ::openfl::_Vector::ObjectVector)(this1) )->splice(this->_owners->indexOf(owner,0),1);
            		}
HXLINE( 527)		if ((this->_owners->get_length() == 0)) {
HXLINE( 528)			this->_animationSet = null();
HXLINE( 529)			{
HXLINE( 529)				int _g = 0;
HXDLIN( 529)				int _g1 = this->_numPasses;
HXDLIN( 529)				while((_g < _g1)){
HXLINE( 529)					_g = (_g + 1);
HXDLIN( 529)					int i = (_g - 1);
HXLINE( 530)					 ::away3d::materials::passes::MaterialPassBase _hx_tmp = this->_passes->get(i).StaticCast<  ::away3d::materials::passes::MaterialPassBase >();
HXDLIN( 530)					_hx_tmp->set_animationSet(this->_animationSet);
            				}
            			}
HXLINE( 531)			this->_depthPass->set_animationSet(this->_animationSet);
HXLINE( 532)			this->_distancePass->set_animationSet(this->_animationSet);
HXLINE( 533)			this->invalidatePasses(null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialBase_obj,removeOwner,(void))

 ::openfl::_Vector::ObjectVector MaterialBase_obj::get_owners(){
            	HX_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_544_get_owners)
HXDLIN( 544)		return this->_owners;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MaterialBase_obj,get_owners,return )

void MaterialBase_obj::updateMaterial( ::openfl::display3D::Context3D context){
            	HX_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_553_updateMaterial)
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialBase_obj,updateMaterial,(void))

void MaterialBase_obj::deactivate( ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_564_deactivate)
HXDLIN( 564)		this->_passes->get((this->_numPasses - 1)).StaticCast<  ::away3d::materials::passes::MaterialPassBase >()->deactivate(stage3DProxy);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialBase_obj,deactivate,(void))

void MaterialBase_obj::invalidatePasses( ::away3d::materials::passes::MaterialPassBase triggerPass){
            	HX_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_575_invalidatePasses)
HXLINE( 576)		::Dynamic owner;
HXLINE( 578)		this->_depthPass->invalidateShaderProgram(null());
HXLINE( 579)		this->_distancePass->invalidateShaderProgram(null());
HXLINE( 584)		if (::hx::IsNotNull( this->_animationSet )) {
HXLINE( 585)			::away3d::animators::IAnimationSet_obj::resetGPUCompatibility(this->_animationSet);
HXLINE( 586)			{
HXLINE( 586)				 ::Dynamic owner = this->_owners->iterator();
HXDLIN( 586)				while(( (bool)(owner->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 586)					::Dynamic owner1 = owner->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE( 587)					if (::hx::IsNotNull( ::away3d::core::base::IMaterialOwner_obj::get_animator(owner1) )) {
HXLINE( 588)						::away3d::animators::IAnimator_obj::testGPUCompatibility(::away3d::core::base::IMaterialOwner_obj::get_animator(owner1),this->_depthPass);
HXLINE( 589)						::away3d::animators::IAnimator_obj::testGPUCompatibility(::away3d::core::base::IMaterialOwner_obj::get_animator(owner1),this->_distancePass);
            					}
            				}
            			}
            		}
HXLINE( 594)		{
HXLINE( 594)			int _g = 0;
HXDLIN( 594)			int _g1 = this->_numPasses;
HXDLIN( 594)			while((_g < _g1)){
HXLINE( 594)				_g = (_g + 1);
HXDLIN( 594)				int i = (_g - 1);
HXLINE( 596)				if (::hx::IsInstanceNotEq( this->_passes->get(i).StaticCast<  ::away3d::materials::passes::MaterialPassBase >(),triggerPass )) {
HXLINE( 597)					this->_passes->get(i).StaticCast<  ::away3d::materials::passes::MaterialPassBase >()->invalidateShaderProgram(false);
            				}
HXLINE( 603)				if (::hx::IsNotNull( this->_animationSet )) {
HXLINE( 604)					 ::Dynamic owner = this->_owners->iterator();
HXDLIN( 604)					while(( (bool)(owner->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 604)						::Dynamic owner1 = owner->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE( 605)						if (::hx::IsNotNull( ::away3d::core::base::IMaterialOwner_obj::get_animator(owner1) )) {
HXLINE( 606)							::Dynamic _hx_tmp = ::away3d::core::base::IMaterialOwner_obj::get_animator(owner1);
HXDLIN( 606)							::away3d::animators::IAnimator_obj::testGPUCompatibility(_hx_tmp,this->_passes->get(i).StaticCast<  ::away3d::materials::passes::MaterialPassBase >());
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialBase_obj,invalidatePasses,(void))

void MaterialBase_obj::removePass( ::away3d::materials::passes::MaterialPassBase pass){
            	HX_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_617_removePass)
HXLINE( 618)		{
HXLINE( 618)			::Dynamic this1 = this->_passes;
HXDLIN( 618)			( ( ::openfl::_Vector::ObjectVector)(this1) )->splice(this->_passes->indexOf(pass,0),1);
            		}
HXLINE( 619)		--this->_numPasses;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialBase_obj,removePass,(void))

void MaterialBase_obj::clearPasses(){
            	HX_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_626_clearPasses)
HXLINE( 627)		{
HXLINE( 627)			int _g = 0;
HXDLIN( 627)			int _g1 = this->_numPasses;
HXDLIN( 627)			while((_g < _g1)){
HXLINE( 627)				_g = (_g + 1);
HXDLIN( 627)				int i = (_g - 1);
HXLINE( 628)				this->_passes->get(i).StaticCast<  ::away3d::materials::passes::MaterialPassBase >()->removeEventListener(HX_("change",70,91,72,b7),this->onPassChange_dyn(),null());
            			}
            		}
HXLINE( 630)		this->_passes->set_length(0);
HXLINE( 631)		this->_numPasses = 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MaterialBase_obj,clearPasses,(void))

void MaterialBase_obj::addPass( ::away3d::materials::passes::MaterialPassBase pass){
            	HX_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_639_addPass)
HXLINE( 640)		this->_passes->set(this->_numPasses++,pass).StaticCast<  ::away3d::materials::passes::MaterialPassBase >();
HXLINE( 641)		pass->set_animationSet(this->_animationSet);
HXLINE( 642)		pass->set_alphaPremultiplied(this->_alphaPremultiplied);
HXLINE( 643)		pass->set_mipmap(this->_mipmap);
HXLINE( 644)		pass->set_smooth(this->_smooth);
HXLINE( 645)		pass->set_repeat(this->_repeat);
HXLINE( 646)		pass->set_anisotropy(this->_anisotropy);
HXLINE( 647)		pass->set_lightPicker(this->_lightPicker);
HXLINE( 648)		pass->set_bothSides(this->_bothSides);
HXLINE( 649)		pass->addEventListener(HX_("change",70,91,72,b7),this->onPassChange_dyn(),null(),null(),null());
HXLINE( 650)		this->invalidatePasses(null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialBase_obj,addPass,(void))

void MaterialBase_obj::onPassChange( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_657_onPassChange)
HXLINE( 658)		Float mult = ( (Float)(1) );
HXLINE( 659)		 ::openfl::_Vector::IntVector ids;
HXLINE( 660)		int len;
HXLINE( 662)		this->_renderOrderId = 0;
HXLINE( 664)		{
HXLINE( 664)			int _g = 0;
HXDLIN( 664)			int _g1 = this->_numPasses;
HXDLIN( 664)			while((_g < _g1)){
HXLINE( 664)				_g = (_g + 1);
HXDLIN( 664)				int i = (_g - 1);
HXLINE( 665)				ids = this->_passes->get(i).StaticCast<  ::away3d::materials::passes::MaterialPassBase >()->_program3Dids;
HXLINE( 666)				len = ids->get_length();
HXLINE( 667)				{
HXLINE( 667)					int _g1 = 0;
HXDLIN( 667)					int _g2 = len;
HXDLIN( 667)					while((_g1 < _g2)){
HXLINE( 667)						_g1 = (_g1 + 1);
HXDLIN( 667)						int j = (_g1 - 1);
HXLINE( 668)						if ((ids->get(j) != -1)) {
HXLINE( 669)							 ::away3d::materials::MaterialBase _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 669)							int _hx_tmp1 = _hx_tmp->_renderOrderId;
HXDLIN( 669)							_hx_tmp->_renderOrderId = (_hx_tmp1 + ::Std_obj::_hx_int((mult * ( (Float)(ids->get(j)) ))));
HXLINE( 670)							goto _hx_goto_56;
            						}
            					}
            					_hx_goto_56:;
            				}
HXLINE( 673)				mult = (mult * ( (Float)(1000) ));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialBase_obj,onPassChange,(void))

void MaterialBase_obj::onDistancePassChange( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_681_onDistancePassChange)
HXLINE( 682)		 ::openfl::_Vector::IntVector ids = this->_distancePass->_program3Dids;
HXLINE( 683)		int len = ids->get_length();
HXLINE( 685)		this->_depthPassId = 0;
HXLINE( 687)		{
HXLINE( 687)			int _g = 0;
HXDLIN( 687)			int _g1 = len;
HXDLIN( 687)			while((_g < _g1)){
HXLINE( 687)				_g = (_g + 1);
HXDLIN( 687)				int j = (_g - 1);
HXLINE( 688)				if ((ids->get(j) != -1)) {
HXLINE( 689)					 ::away3d::materials::MaterialBase _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 689)					int _hx_tmp1 = _hx_tmp->_depthPassId;
HXDLIN( 689)					_hx_tmp->_depthPassId = (_hx_tmp1 + ids->get(j));
HXLINE( 690)					goto _hx_goto_58;
            				}
            			}
            			_hx_goto_58:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialBase_obj,onDistancePassChange,(void))

void MaterialBase_obj::onDepthPassChange( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_699_onDepthPassChange)
HXLINE( 700)		 ::openfl::_Vector::IntVector ids = this->_depthPass->_program3Dids;
HXLINE( 701)		int len = ids->get_length();
HXLINE( 703)		this->_depthPassId = 0;
HXLINE( 705)		{
HXLINE( 705)			int _g = 0;
HXDLIN( 705)			int _g1 = len;
HXDLIN( 705)			while((_g < _g1)){
HXLINE( 705)				_g = (_g + 1);
HXDLIN( 705)				int j = (_g - 1);
HXLINE( 706)				if ((ids->get(j) != -1)) {
HXLINE( 707)					 ::away3d::materials::MaterialBase _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 707)					int _hx_tmp1 = _hx_tmp->_depthPassId;
HXDLIN( 707)					_hx_tmp->_depthPassId = (_hx_tmp1 + ids->get(j));
HXLINE( 708)					goto _hx_goto_60;
            				}
            			}
            			_hx_goto_60:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialBase_obj,onDepthPassChange,(void))

int MaterialBase_obj::MATERIAL_ID_COUNT;


::hx::ObjectPtr< MaterialBase_obj > MaterialBase_obj::__new() {
	::hx::ObjectPtr< MaterialBase_obj > __this = new MaterialBase_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< MaterialBase_obj > MaterialBase_obj::__alloc(::hx::Ctx *_hx_ctx) {
	MaterialBase_obj *__this = (MaterialBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MaterialBase_obj), true, "away3d.materials.MaterialBase"));
	*(void **)__this = MaterialBase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

MaterialBase_obj::MaterialBase_obj()
{
}

void MaterialBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MaterialBase);
	HX_MARK_MEMBER_NAME(extra,"extra");
	HX_MARK_MEMBER_NAME(_classification,"_classification");
	HX_MARK_MEMBER_NAME(_uniqueId,"_uniqueId");
	HX_MARK_MEMBER_NAME(_renderOrderId,"_renderOrderId");
	HX_MARK_MEMBER_NAME(_depthPassId,"_depthPassId");
	HX_MARK_MEMBER_NAME(_bothSides,"_bothSides");
	HX_MARK_MEMBER_NAME(_animationSet,"_animationSet");
	HX_MARK_MEMBER_NAME(_owners,"_owners");
	HX_MARK_MEMBER_NAME(_alphaPremultiplied,"_alphaPremultiplied");
	HX_MARK_MEMBER_NAME(_blendMode,"_blendMode");
	HX_MARK_MEMBER_NAME(_numPasses,"_numPasses");
	HX_MARK_MEMBER_NAME(_passes,"_passes");
	HX_MARK_MEMBER_NAME(_mipmap,"_mipmap");
	HX_MARK_MEMBER_NAME(_smooth,"_smooth");
	HX_MARK_MEMBER_NAME(_repeat,"_repeat");
	HX_MARK_MEMBER_NAME(_anisotropy,"_anisotropy");
	HX_MARK_MEMBER_NAME(_depthPass,"_depthPass");
	HX_MARK_MEMBER_NAME(_distancePass,"_distancePass");
	HX_MARK_MEMBER_NAME(_lightPicker,"_lightPicker");
	HX_MARK_MEMBER_NAME(_distanceBasedDepthRender,"_distanceBasedDepthRender");
	HX_MARK_MEMBER_NAME(_depthCompareMode,"_depthCompareMode");
	 ::away3d::library::assets::NamedAssetBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MaterialBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(extra,"extra");
	HX_VISIT_MEMBER_NAME(_classification,"_classification");
	HX_VISIT_MEMBER_NAME(_uniqueId,"_uniqueId");
	HX_VISIT_MEMBER_NAME(_renderOrderId,"_renderOrderId");
	HX_VISIT_MEMBER_NAME(_depthPassId,"_depthPassId");
	HX_VISIT_MEMBER_NAME(_bothSides,"_bothSides");
	HX_VISIT_MEMBER_NAME(_animationSet,"_animationSet");
	HX_VISIT_MEMBER_NAME(_owners,"_owners");
	HX_VISIT_MEMBER_NAME(_alphaPremultiplied,"_alphaPremultiplied");
	HX_VISIT_MEMBER_NAME(_blendMode,"_blendMode");
	HX_VISIT_MEMBER_NAME(_numPasses,"_numPasses");
	HX_VISIT_MEMBER_NAME(_passes,"_passes");
	HX_VISIT_MEMBER_NAME(_mipmap,"_mipmap");
	HX_VISIT_MEMBER_NAME(_smooth,"_smooth");
	HX_VISIT_MEMBER_NAME(_repeat,"_repeat");
	HX_VISIT_MEMBER_NAME(_anisotropy,"_anisotropy");
	HX_VISIT_MEMBER_NAME(_depthPass,"_depthPass");
	HX_VISIT_MEMBER_NAME(_distancePass,"_distancePass");
	HX_VISIT_MEMBER_NAME(_lightPicker,"_lightPicker");
	HX_VISIT_MEMBER_NAME(_distanceBasedDepthRender,"_distanceBasedDepthRender");
	HX_VISIT_MEMBER_NAME(_depthCompareMode,"_depthCompareMode");
	 ::away3d::library::assets::NamedAssetBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MaterialBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"extra") ) { return ::hx::Val( extra ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mipmap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_mipmap() ); }
		if (HX_FIELD_EQ(inName,"smooth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_smooth() ); }
		if (HX_FIELD_EQ(inName,"repeat") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_repeat() ); }
		if (HX_FIELD_EQ(inName,"owners") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_owners() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_owners") ) { return ::hx::Val( _owners ); }
		if (HX_FIELD_EQ(inName,"_passes") ) { return ::hx::Val( _passes ); }
		if (HX_FIELD_EQ(inName,"_mipmap") ) { return ::hx::Val( _mipmap ); }
		if (HX_FIELD_EQ(inName,"_smooth") ) { return ::hx::Val( _smooth ); }
		if (HX_FIELD_EQ(inName,"_repeat") ) { return ::hx::Val( _repeat ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		if (HX_FIELD_EQ(inName,"addPass") ) { return ::hx::Val( addPass_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uniqueId") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_uniqueId() ); }
		if (HX_FIELD_EQ(inName,"addOwner") ) { return ::hx::Val( addOwner_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"assetType") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_assetType() ); }
		if (HX_FIELD_EQ(inName,"bothSides") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_bothSides() ); }
		if (HX_FIELD_EQ(inName,"blendMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_blendMode() ); }
		if (HX_FIELD_EQ(inName,"numPasses") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numPasses() ); }
		if (HX_FIELD_EQ(inName,"_uniqueId") ) { return ::hx::Val( _uniqueId ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"anisotropy") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_anisotropy() ); }
		if (HX_FIELD_EQ(inName,"_bothSides") ) { return ::hx::Val( _bothSides ); }
		if (HX_FIELD_EQ(inName,"_blendMode") ) { return ::hx::Val( _blendMode ); }
		if (HX_FIELD_EQ(inName,"_numPasses") ) { return ::hx::Val( _numPasses ); }
		if (HX_FIELD_EQ(inName,"_depthPass") ) { return ::hx::Val( _depthPass ); }
		if (HX_FIELD_EQ(inName,"get_mipmap") ) { return ::hx::Val( get_mipmap_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_mipmap") ) { return ::hx::Val( set_mipmap_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_smooth") ) { return ::hx::Val( get_smooth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_smooth") ) { return ::hx::Val( set_smooth_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_repeat") ) { return ::hx::Val( get_repeat_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_repeat") ) { return ::hx::Val( set_repeat_dyn() ); }
		if (HX_FIELD_EQ(inName,"renderPass") ) { return ::hx::Val( renderPass_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_owners") ) { return ::hx::Val( get_owners_dyn() ); }
		if (HX_FIELD_EQ(inName,"deactivate") ) { return ::hx::Val( deactivate_dyn() ); }
		if (HX_FIELD_EQ(inName,"removePass") ) { return ::hx::Val( removePass_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lightPicker") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_lightPicker() ); }
		if (HX_FIELD_EQ(inName,"_anisotropy") ) { return ::hx::Val( _anisotropy ); }
		if (HX_FIELD_EQ(inName,"renderDepth") ) { return ::hx::Val( renderDepth_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeOwner") ) { return ::hx::Val( removeOwner_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearPasses") ) { return ::hx::Val( clearPasses_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_depthPassId") ) { return ::hx::Val( _depthPassId ); }
		if (HX_FIELD_EQ(inName,"_lightPicker") ) { return ::hx::Val( _lightPicker ); }
		if (HX_FIELD_EQ(inName,"get_uniqueId") ) { return ::hx::Val( get_uniqueId_dyn() ); }
		if (HX_FIELD_EQ(inName,"activatePass") ) { return ::hx::Val( activatePass_dyn() ); }
		if (HX_FIELD_EQ(inName,"onPassChange") ) { return ::hx::Val( onPassChange_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_animationSet") ) { return ::hx::Val( _animationSet ); }
		if (HX_FIELD_EQ(inName,"_distancePass") ) { return ::hx::Val( _distancePass ); }
		if (HX_FIELD_EQ(inName,"get_assetType") ) { return ::hx::Val( get_assetType_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_bothSides") ) { return ::hx::Val( get_bothSides_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_bothSides") ) { return ::hx::Val( set_bothSides_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_blendMode") ) { return ::hx::Val( get_blendMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_blendMode") ) { return ::hx::Val( set_blendMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numPasses") ) { return ::hx::Val( get_numPasses_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_renderOrderId") ) { return ::hx::Val( _renderOrderId ); }
		if (HX_FIELD_EQ(inName,"get_anisotropy") ) { return ::hx::Val( get_anisotropy_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_anisotropy") ) { return ::hx::Val( set_anisotropy_dyn() ); }
		if (HX_FIELD_EQ(inName,"deactivatePass") ) { return ::hx::Val( deactivatePass_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateMaterial") ) { return ::hx::Val( updateMaterial_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_classification") ) { return ::hx::Val( _classification ); }
		if (HX_FIELD_EQ(inName,"get_lightPicker") ) { return ::hx::Val( get_lightPicker_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_lightPicker") ) { return ::hx::Val( set_lightPicker_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"depthCompareMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_depthCompareMode() ); }
		if (HX_FIELD_EQ(inName,"requiresBlending") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_requiresBlending() ); }
		if (HX_FIELD_EQ(inName,"activateForDepth") ) { return ::hx::Val( activateForDepth_dyn() ); }
		if (HX_FIELD_EQ(inName,"invalidatePasses") ) { return ::hx::Val( invalidatePasses_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_depthCompareMode") ) { return ::hx::Val( _depthCompareMode ); }
		if (HX_FIELD_EQ(inName,"onDepthPassChange") ) { return ::hx::Val( onDepthPassChange_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"alphaPremultiplied") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_alphaPremultiplied() ); }
		if (HX_FIELD_EQ(inName,"deactivateForDepth") ) { return ::hx::Val( deactivateForDepth_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_alphaPremultiplied") ) { return ::hx::Val( _alphaPremultiplied ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_depthCompareMode") ) { return ::hx::Val( get_depthCompareMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_depthCompareMode") ) { return ::hx::Val( set_depthCompareMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_requiresBlending") ) { return ::hx::Val( get_requiresBlending_dyn() ); }
		if (HX_FIELD_EQ(inName,"passRendersToTexture") ) { return ::hx::Val( passRendersToTexture_dyn() ); }
		if (HX_FIELD_EQ(inName,"onDistancePassChange") ) { return ::hx::Val( onDistancePassChange_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_alphaPremultiplied") ) { return ::hx::Val( get_alphaPremultiplied_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alphaPremultiplied") ) { return ::hx::Val( set_alphaPremultiplied_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasDepthAlphaThreshold") ) { return ::hx::Val( hasDepthAlphaThreshold_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_distanceBasedDepthRender") ) { return ::hx::Val( _distanceBasedDepthRender ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MaterialBase_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"MATERIAL_ID_COUNT") ) { outValue = ( MATERIAL_ID_COUNT ); return true; }
	}
	return false;
}

::hx::Val MaterialBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"extra") ) { extra=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mipmap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_mipmap(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"smooth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_smooth(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"repeat") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_repeat(inValue.Cast< bool >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_owners") ) { _owners=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_passes") ) { _passes=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mipmap") ) { _mipmap=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_smooth") ) { _smooth=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_repeat") ) { _repeat=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bothSides") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_bothSides(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"blendMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_blendMode(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"_uniqueId") ) { _uniqueId=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"anisotropy") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_anisotropy(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"_bothSides") ) { _bothSides=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_blendMode") ) { _blendMode=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numPasses") ) { _numPasses=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_depthPass") ) { _depthPass=inValue.Cast<  ::away3d::materials::passes::DepthMapPass >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lightPicker") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_lightPicker(inValue.Cast<  ::away3d::materials::lightpickers::LightPickerBase >()) ); }
		if (HX_FIELD_EQ(inName,"_anisotropy") ) { _anisotropy=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_depthPassId") ) { _depthPassId=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lightPicker") ) { _lightPicker=inValue.Cast<  ::away3d::materials::lightpickers::LightPickerBase >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_animationSet") ) { _animationSet=inValue.Cast< ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_distancePass") ) { _distancePass=inValue.Cast<  ::away3d::materials::passes::DistanceMapPass >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_renderOrderId") ) { _renderOrderId=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_classification") ) { _classification=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"depthCompareMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_depthCompareMode(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_depthCompareMode") ) { _depthCompareMode=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"alphaPremultiplied") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alphaPremultiplied(inValue.Cast< bool >()) ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_alphaPremultiplied") ) { _alphaPremultiplied=inValue.Cast< bool >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_distanceBasedDepthRender") ) { _distanceBasedDepthRender=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MaterialBase_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"MATERIAL_ID_COUNT") ) { MATERIAL_ID_COUNT=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void MaterialBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("assetType",ca,40,af,b1));
	outFields->push(HX_("lightPicker",04,45,1b,e3));
	outFields->push(HX_("mipmap",88,2d,54,54));
	outFields->push(HX_("smooth",2e,08,6b,07));
	outFields->push(HX_("depthCompareMode",65,5e,47,b5));
	outFields->push(HX_("repeat",5b,97,7c,06));
	outFields->push(HX_("anisotropy",02,f8,8e,1b));
	outFields->push(HX_("bothSides",bb,ca,16,0a));
	outFields->push(HX_("blendMode",54,e4,37,0c));
	outFields->push(HX_("alphaPremultiplied",18,d7,f0,91));
	outFields->push(HX_("requiresBlending",bf,d8,2e,89));
	outFields->push(HX_("uniqueId",4c,79,aa,5b));
	outFields->push(HX_("numPasses",65,1e,33,9f));
	outFields->push(HX_("owners",e0,94,4e,2f));
	outFields->push(HX_("extra",90,9a,22,77));
	outFields->push(HX_("_classification",c5,13,1e,48));
	outFields->push(HX_("_uniqueId",ab,70,40,a3));
	outFields->push(HX_("_renderOrderId",94,53,e8,ad));
	outFields->push(HX_("_depthPassId",70,f2,44,d6));
	outFields->push(HX_("_bothSides",7c,46,b9,65));
	outFields->push(HX_("_animationSet",dd,31,9d,8c));
	outFields->push(HX_("_owners",7f,a6,c5,9d));
	outFields->push(HX_("_alphaPremultiplied",37,5b,cb,71));
	outFields->push(HX_("_blendMode",15,60,da,67));
	outFields->push(HX_("_numPasses",26,9a,d5,fa));
	outFields->push(HX_("_passes",1e,e5,a8,5c));
	outFields->push(HX_("_mipmap",27,3f,cb,c2));
	outFields->push(HX_("_smooth",cd,19,e2,75));
	outFields->push(HX_("_repeat",fa,a8,f3,74));
	outFields->push(HX_("_anisotropy",21,c5,18,ee));
	outFields->push(HX_("_depthPass",35,bb,77,fc));
	outFields->push(HX_("_distancePass",85,75,95,df));
	outFields->push(HX_("_lightPicker",05,f3,24,49));
	outFields->push(HX_("_distanceBasedDepthRender",fa,6a,75,06));
	outFields->push(HX_("_depthCompareMode",c4,4c,c2,4d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MaterialBase_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MaterialBase_obj,extra),HX_("extra",90,9a,22,77)},
	{::hx::fsString,(int)offsetof(MaterialBase_obj,_classification),HX_("_classification",c5,13,1e,48)},
	{::hx::fsInt,(int)offsetof(MaterialBase_obj,_uniqueId),HX_("_uniqueId",ab,70,40,a3)},
	{::hx::fsInt,(int)offsetof(MaterialBase_obj,_renderOrderId),HX_("_renderOrderId",94,53,e8,ad)},
	{::hx::fsInt,(int)offsetof(MaterialBase_obj,_depthPassId),HX_("_depthPassId",70,f2,44,d6)},
	{::hx::fsBool,(int)offsetof(MaterialBase_obj,_bothSides),HX_("_bothSides",7c,46,b9,65)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(MaterialBase_obj,_animationSet),HX_("_animationSet",dd,31,9d,8c)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(MaterialBase_obj,_owners),HX_("_owners",7f,a6,c5,9d)},
	{::hx::fsBool,(int)offsetof(MaterialBase_obj,_alphaPremultiplied),HX_("_alphaPremultiplied",37,5b,cb,71)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MaterialBase_obj,_blendMode),HX_("_blendMode",15,60,da,67)},
	{::hx::fsInt,(int)offsetof(MaterialBase_obj,_numPasses),HX_("_numPasses",26,9a,d5,fa)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(MaterialBase_obj,_passes),HX_("_passes",1e,e5,a8,5c)},
	{::hx::fsBool,(int)offsetof(MaterialBase_obj,_mipmap),HX_("_mipmap",27,3f,cb,c2)},
	{::hx::fsBool,(int)offsetof(MaterialBase_obj,_smooth),HX_("_smooth",cd,19,e2,75)},
	{::hx::fsBool,(int)offsetof(MaterialBase_obj,_repeat),HX_("_repeat",fa,a8,f3,74)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MaterialBase_obj,_anisotropy),HX_("_anisotropy",21,c5,18,ee)},
	{::hx::fsObject /*  ::away3d::materials::passes::DepthMapPass */ ,(int)offsetof(MaterialBase_obj,_depthPass),HX_("_depthPass",35,bb,77,fc)},
	{::hx::fsObject /*  ::away3d::materials::passes::DistanceMapPass */ ,(int)offsetof(MaterialBase_obj,_distancePass),HX_("_distancePass",85,75,95,df)},
	{::hx::fsObject /*  ::away3d::materials::lightpickers::LightPickerBase */ ,(int)offsetof(MaterialBase_obj,_lightPicker),HX_("_lightPicker",05,f3,24,49)},
	{::hx::fsBool,(int)offsetof(MaterialBase_obj,_distanceBasedDepthRender),HX_("_distanceBasedDepthRender",fa,6a,75,06)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MaterialBase_obj,_depthCompareMode),HX_("_depthCompareMode",c4,4c,c2,4d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo MaterialBase_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &MaterialBase_obj::MATERIAL_ID_COUNT,HX_("MATERIAL_ID_COUNT",e3,97,90,9e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String MaterialBase_obj_sMemberFields[] = {
	HX_("extra",90,9a,22,77),
	HX_("_classification",c5,13,1e,48),
	HX_("_uniqueId",ab,70,40,a3),
	HX_("_renderOrderId",94,53,e8,ad),
	HX_("_depthPassId",70,f2,44,d6),
	HX_("_bothSides",7c,46,b9,65),
	HX_("_animationSet",dd,31,9d,8c),
	HX_("_owners",7f,a6,c5,9d),
	HX_("_alphaPremultiplied",37,5b,cb,71),
	HX_("_blendMode",15,60,da,67),
	HX_("_numPasses",26,9a,d5,fa),
	HX_("_passes",1e,e5,a8,5c),
	HX_("_mipmap",27,3f,cb,c2),
	HX_("_smooth",cd,19,e2,75),
	HX_("_repeat",fa,a8,f3,74),
	HX_("_anisotropy",21,c5,18,ee),
	HX_("_depthPass",35,bb,77,fc),
	HX_("_distancePass",85,75,95,df),
	HX_("_lightPicker",05,f3,24,49),
	HX_("_distanceBasedDepthRender",fa,6a,75,06),
	HX_("_depthCompareMode",c4,4c,c2,4d),
	HX_("get_assetType",a1,14,13,73),
	HX_("get_lightPicker",9b,fc,fc,a3),
	HX_("set_lightPicker",a7,79,c8,9f),
	HX_("get_mipmap",51,9d,db,44),
	HX_("set_mipmap",c5,3b,59,48),
	HX_("get_smooth",f7,77,f2,f7),
	HX_("set_smooth",6b,16,70,fb),
	HX_("get_depthCompareMode",6e,c3,b1,d3),
	HX_("set_depthCompareMode",e2,7a,69,a0),
	HX_("get_repeat",24,07,04,f7),
	HX_("set_repeat",98,a5,81,fa),
	HX_("get_anisotropy",4b,80,84,91),
	HX_("set_anisotropy",bf,68,a4,b1),
	HX_("dispose",9f,80,4c,bb),
	HX_("get_bothSides",92,9e,7a,cb),
	HX_("set_bothSides",9e,80,80,10),
	HX_("get_blendMode",2b,b8,9b,cd),
	HX_("set_blendMode",37,9a,a1,12),
	HX_("get_alphaPremultiplied",61,50,85,eb),
	HX_("set_alphaPremultiplied",d5,cc,30,1f),
	HX_("get_requiresBlending",c8,3d,99,a7),
	HX_("get_uniqueId",55,2d,c4,10),
	HX_("get_numPasses",3c,f2,96,60),
	HX_("hasDepthAlphaThreshold",96,bd,94,e8),
	HX_("activateForDepth",0d,bc,2b,11),
	HX_("deactivateForDepth",8e,e5,66,ea),
	HX_("renderDepth",cd,1d,db,a2),
	HX_("passRendersToTexture",74,1f,14,6c),
	HX_("activatePass",24,82,3a,43),
	HX_("deactivatePass",25,97,e0,d3),
	HX_("renderPass",47,df,5b,e7),
	HX_("addOwner",52,be,d3,b1),
	HX_("removeOwner",4f,75,aa,36),
	HX_("get_owners",a9,04,d6,1f),
	HX_("updateMaterial",d0,4f,cf,25),
	HX_("deactivate",34,5c,01,3c),
	HX_("invalidatePasses",5a,2f,d9,f8),
	HX_("removePass",35,1f,71,c7),
	HX_("clearPasses",ec,e0,1e,82),
	HX_("addPass",92,27,8f,86),
	HX_("onPassChange",20,7f,25,32),
	HX_("onDistancePassChange",b5,a1,32,78),
	HX_("onDepthPassChange",a5,15,85,b9),
	::String(null()) };

static void MaterialBase_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MaterialBase_obj::MATERIAL_ID_COUNT,"MATERIAL_ID_COUNT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MaterialBase_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MaterialBase_obj::MATERIAL_ID_COUNT,"MATERIAL_ID_COUNT");
};

#endif

::hx::Class MaterialBase_obj::__mClass;

static ::String MaterialBase_obj_sStaticFields[] = {
	HX_("MATERIAL_ID_COUNT",e3,97,90,9e),
	::String(null())
};

void MaterialBase_obj::__register()
{
	MaterialBase_obj _hx_dummy;
	MaterialBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.materials.MaterialBase",09,a3,8c,9b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MaterialBase_obj::__GetStatic;
	__mClass->mSetStaticField = &MaterialBase_obj::__SetStatic;
	__mClass->mMarkFunc = MaterialBase_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MaterialBase_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MaterialBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MaterialBase_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MaterialBase_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MaterialBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MaterialBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MaterialBase_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_2581a4b6e0a45b3e_58_boot)
HXDLIN(  58)		MATERIAL_ID_COUNT = 0;
            	}
}

} // end namespace away3d
} // end namespace materials
