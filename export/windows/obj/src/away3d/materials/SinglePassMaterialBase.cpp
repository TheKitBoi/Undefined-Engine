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
#ifndef INCLUDED_away3d_materials_SinglePassMaterialBase
#include <away3d/materials/SinglePassMaterialBase.h>
#endif
#ifndef INCLUDED_away3d_materials_lightpickers_LightPickerBase
#include <away3d/materials/lightpickers/LightPickerBase.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_BasicAmbientMethod
#include <away3d/materials/methods/BasicAmbientMethod.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_BasicDiffuseMethod
#include <away3d/materials/methods/BasicDiffuseMethod.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_BasicNormalMethod
#include <away3d/materials/methods/BasicNormalMethod.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_BasicSpecularMethod
#include <away3d/materials/methods/BasicSpecularMethod.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_EffectMethodBase
#include <away3d/materials/methods/EffectMethodBase.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_LightingMethodBase
#include <away3d/materials/methods/LightingMethodBase.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_ShadingMethodBase
#include <away3d/materials/methods/ShadingMethodBase.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_ShadowMapMethodBase
#include <away3d/materials/methods/ShadowMapMethodBase.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_CompiledPass
#include <away3d/materials/passes/CompiledPass.h>
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
#ifndef INCLUDED_away3d_materials_passes_SuperShaderPass
#include <away3d/materials/passes/SuperShaderPass.h>
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
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_54_new,"away3d.materials.SinglePassMaterialBase","new",0x056dbd54,"away3d.materials.SinglePassMaterialBase.new","away3d/materials/SinglePassMaterialBase.hx",54,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_65_get_enableLightFallOff,"away3d.materials.SinglePassMaterialBase","get_enableLightFallOff",0x8ef57376,"away3d.materials.SinglePassMaterialBase.get_enableLightFallOff","away3d/materials/SinglePassMaterialBase.hx",65,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_69_set_enableLightFallOff,"away3d.materials.SinglePassMaterialBase","set_enableLightFallOff",0xc2a0efea,"away3d.materials.SinglePassMaterialBase.set_enableLightFallOff","away3d/materials/SinglePassMaterialBase.hx",69,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_81_get_alphaThreshold,"away3d.materials.SinglePassMaterialBase","get_alphaThreshold",0x7c1bc6c2,"away3d.materials.SinglePassMaterialBase.get_alphaThreshold","away3d/materials/SinglePassMaterialBase.hx",81,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_85_set_alphaThreshold,"away3d.materials.SinglePassMaterialBase","set_alphaThreshold",0x58caf936,"away3d.materials.SinglePassMaterialBase.set_alphaThreshold","away3d/materials/SinglePassMaterialBase.hx",85,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_96_set_blendMode,"away3d.materials.SinglePassMaterialBase","set_blendMode",0xafd8c02b,"away3d.materials.SinglePassMaterialBase.set_blendMode","away3d/materials/SinglePassMaterialBase.hx",96,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_106_set_depthCompareMode,"away3d.materials.SinglePassMaterialBase","set_depthCompareMode",0xf6a5bb6e,"away3d.materials.SinglePassMaterialBase.set_depthCompareMode","away3d/materials/SinglePassMaterialBase.hx",106,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_116_activateForDepth,"away3d.materials.SinglePassMaterialBase","activateForDepth",0x6681c699,"away3d.materials.SinglePassMaterialBase.activateForDepth","away3d/materials/SinglePassMaterialBase.hx",116,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_132_get_specularLightSources,"away3d.materials.SinglePassMaterialBase","get_specularLightSources",0x5ad3dc7a,"away3d.materials.SinglePassMaterialBase.get_specularLightSources","away3d/materials/SinglePassMaterialBase.hx",132,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_136_set_specularLightSources,"away3d.materials.SinglePassMaterialBase","set_specularLightSources",0x6dae5dee,"away3d.materials.SinglePassMaterialBase.set_specularLightSources","away3d/materials/SinglePassMaterialBase.hx",136,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_149_get_diffuseLightSources,"away3d.materials.SinglePassMaterialBase","get_diffuseLightSources",0xe9958b0f,"away3d.materials.SinglePassMaterialBase.get_diffuseLightSources","away3d/materials/SinglePassMaterialBase.hx",149,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_153_set_diffuseLightSources,"away3d.materials.SinglePassMaterialBase","set_diffuseLightSources",0xebf6f41b,"away3d.materials.SinglePassMaterialBase.set_diffuseLightSources","away3d/materials/SinglePassMaterialBase.hx",153,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_163_get_requiresBlending,"away3d.materials.SinglePassMaterialBase","get_requiresBlending",0xfdd57e54,"away3d.materials.SinglePassMaterialBase.get_requiresBlending","away3d/materials/SinglePassMaterialBase.hx",163,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_171_get_colorTransform,"away3d.materials.SinglePassMaterialBase","get_colorTransform",0x27b07dde,"away3d.materials.SinglePassMaterialBase.get_colorTransform","away3d/materials/SinglePassMaterialBase.hx",171,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_175_set_colorTransform,"away3d.materials.SinglePassMaterialBase","set_colorTransform",0x045fb052,"away3d.materials.SinglePassMaterialBase.set_colorTransform","away3d/materials/SinglePassMaterialBase.hx",175,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_185_get_ambientMethod,"away3d.materials.SinglePassMaterialBase","get_ambientMethod",0xdf196064,"away3d.materials.SinglePassMaterialBase.get_ambientMethod","away3d/materials/SinglePassMaterialBase.hx",185,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_189_set_ambientMethod,"away3d.materials.SinglePassMaterialBase","set_ambientMethod",0x02873870,"away3d.materials.SinglePassMaterialBase.set_ambientMethod","away3d/materials/SinglePassMaterialBase.hx",189,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_199_get_shadowMethod,"away3d.materials.SinglePassMaterialBase","get_shadowMethod",0xdf1c51f6,"away3d.materials.SinglePassMaterialBase.get_shadowMethod","away3d/materials/SinglePassMaterialBase.hx",199,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_203_set_shadowMethod,"away3d.materials.SinglePassMaterialBase","set_shadowMethod",0x355e3f6a,"away3d.materials.SinglePassMaterialBase.set_shadowMethod","away3d/materials/SinglePassMaterialBase.hx",203,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_213_get_diffuseMethod,"away3d.materials.SinglePassMaterialBase","get_diffuseMethod",0x49483d2e,"away3d.materials.SinglePassMaterialBase.get_diffuseMethod","away3d/materials/SinglePassMaterialBase.hx",213,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_217_set_diffuseMethod,"away3d.materials.SinglePassMaterialBase","set_diffuseMethod",0x6cb6153a,"away3d.materials.SinglePassMaterialBase.set_diffuseMethod","away3d/materials/SinglePassMaterialBase.hx",217,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_227_get_normalMethod,"away3d.materials.SinglePassMaterialBase","get_normalMethod",0x61b46b7d,"away3d.materials.SinglePassMaterialBase.get_normalMethod","away3d/materials/SinglePassMaterialBase.hx",227,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_231_set_normalMethod,"away3d.materials.SinglePassMaterialBase","set_normalMethod",0xb7f658f1,"away3d.materials.SinglePassMaterialBase.set_normalMethod","away3d/materials/SinglePassMaterialBase.hx",231,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_241_get_specularMethod,"away3d.materials.SinglePassMaterialBase","get_specularMethod",0x878a5c59,"away3d.materials.SinglePassMaterialBase.get_specularMethod","away3d/materials/SinglePassMaterialBase.hx",241,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_245_set_specularMethod,"away3d.materials.SinglePassMaterialBase","set_specularMethod",0x64398ecd,"away3d.materials.SinglePassMaterialBase.set_specularMethod","away3d/materials/SinglePassMaterialBase.hx",245,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_257_addMethod,"away3d.materials.SinglePassMaterialBase","addMethod",0x8b4747d6,"away3d.materials.SinglePassMaterialBase.addMethod","away3d/materials/SinglePassMaterialBase.hx",257,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_265_get_numMethods,"away3d.materials.SinglePassMaterialBase","get_numMethods",0xbf5ce4a1,"away3d.materials.SinglePassMaterialBase.get_numMethods","away3d/materials/SinglePassMaterialBase.hx",265,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_276_hasMethod,"away3d.materials.SinglePassMaterialBase","hasMethod",0x140bc5cf,"away3d.materials.SinglePassMaterialBase.hasMethod","away3d/materials/SinglePassMaterialBase.hx",276,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_286_getMethodAt,"away3d.materials.SinglePassMaterialBase","getMethodAt",0x56212dde,"away3d.materials.SinglePassMaterialBase.getMethodAt","away3d/materials/SinglePassMaterialBase.hx",286,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_296_addMethodAt,"away3d.materials.SinglePassMaterialBase","addMethodAt",0x6189a269,"away3d.materials.SinglePassMaterialBase.addMethodAt","away3d/materials/SinglePassMaterialBase.hx",296,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_305_removeMethod,"away3d.materials.SinglePassMaterialBase","removeMethod",0x75cb66d1,"away3d.materials.SinglePassMaterialBase.removeMethod","away3d/materials/SinglePassMaterialBase.hx",305,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_312_set_mipmap,"away3d.materials.SinglePassMaterialBase","set_mipmap",0x0da99551,"away3d.materials.SinglePassMaterialBase.set_mipmap","away3d/materials/SinglePassMaterialBase.hx",312,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_325_get_normalMap,"away3d.materials.SinglePassMaterialBase","get_normalMap",0x0a26dc80,"away3d.materials.SinglePassMaterialBase.get_normalMap","away3d/materials/SinglePassMaterialBase.hx",325,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_329_set_normalMap,"away3d.materials.SinglePassMaterialBase","set_normalMap",0x4f2cbe8c,"away3d.materials.SinglePassMaterialBase.set_normalMap","away3d/materials/SinglePassMaterialBase.hx",329,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_341_get_specularMap,"away3d.materials.SinglePassMaterialBase","get_specularMap",0x28320a24,"away3d.materials.SinglePassMaterialBase.get_specularMap","away3d/materials/SinglePassMaterialBase.hx",341,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_345_set_specularMap,"away3d.materials.SinglePassMaterialBase","set_specularMap",0x23fd8730,"away3d.materials.SinglePassMaterialBase.set_specularMap","away3d/materials/SinglePassMaterialBase.hx",345,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_358_get_gloss,"away3d.materials.SinglePassMaterialBase","get_gloss",0xa36ee215,"away3d.materials.SinglePassMaterialBase.get_gloss","away3d/materials/SinglePassMaterialBase.hx",358,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_362_set_gloss,"away3d.materials.SinglePassMaterialBase","set_gloss",0x86bfce21,"away3d.materials.SinglePassMaterialBase.set_gloss","away3d/materials/SinglePassMaterialBase.hx",362,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_373_get_ambient,"away3d.materials.SinglePassMaterialBase","get_ambient",0x7079f923,"away3d.materials.SinglePassMaterialBase.get_ambient","away3d/materials/SinglePassMaterialBase.hx",373,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_377_set_ambient,"away3d.materials.SinglePassMaterialBase","set_ambient",0x7ae7002f,"away3d.materials.SinglePassMaterialBase.set_ambient","away3d/materials/SinglePassMaterialBase.hx",377,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_387_get_specular,"away3d.materials.SinglePassMaterialBase","get_specular",0x45c8df58,"away3d.materials.SinglePassMaterialBase.get_specular","away3d/materials/SinglePassMaterialBase.hx",387,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_391_set_specular,"away3d.materials.SinglePassMaterialBase","set_specular",0x5ac202cc,"away3d.materials.SinglePassMaterialBase.set_specular","away3d/materials/SinglePassMaterialBase.hx",391,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_402_get_ambientColor,"away3d.materials.SinglePassMaterialBase","get_ambientColor",0xf1c6e940,"away3d.materials.SinglePassMaterialBase.get_ambientColor","away3d/materials/SinglePassMaterialBase.hx",402,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_406_set_ambientColor,"away3d.materials.SinglePassMaterialBase","set_ambientColor",0x4808d6b4,"away3d.materials.SinglePassMaterialBase.set_ambientColor","away3d/materials/SinglePassMaterialBase.hx",406,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_416_get_specularColor,"away3d.materials.SinglePassMaterialBase","get_specularColor",0x67a062eb,"away3d.materials.SinglePassMaterialBase.get_specularColor","away3d/materials/SinglePassMaterialBase.hx",416,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_420_set_specularColor,"away3d.materials.SinglePassMaterialBase","set_specularColor",0x8b0e3af7,"away3d.materials.SinglePassMaterialBase.set_specularColor","away3d/materials/SinglePassMaterialBase.hx",420,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_431_get_alphaBlending,"away3d.materials.SinglePassMaterialBase","get_alphaBlending",0x38b599fa,"away3d.materials.SinglePassMaterialBase.get_alphaBlending","away3d/materials/SinglePassMaterialBase.hx",431,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_435_set_alphaBlending,"away3d.materials.SinglePassMaterialBase","set_alphaBlending",0x5c237206,"away3d.materials.SinglePassMaterialBase.set_alphaBlending","away3d/materials/SinglePassMaterialBase.hx",435,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_447_updateMaterial,"away3d.materials.SinglePassMaterialBase","updateMaterial",0x18d95f5c,"away3d.materials.SinglePassMaterialBase.updateMaterial","away3d/materials/SinglePassMaterialBase.hx",447,0x21bec11a)
HX_LOCAL_STACK_FRAME(_hx_pos_5810a4a1b94e36c5_464_set_lightPicker,"away3d.materials.SinglePassMaterialBase","set_lightPicker",0x558c049b,"away3d.materials.SinglePassMaterialBase.set_lightPicker","away3d/materials/SinglePassMaterialBase.hx",464,0x21bec11a)
namespace away3d{
namespace materials{

void SinglePassMaterialBase_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_54_new)
HXLINE(  55)		super::__construct();
HXLINE(  56)		this->addPass((this->_screenPass =  ::away3d::materials::passes::SuperShaderPass_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this))));
            	}

Dynamic SinglePassMaterialBase_obj::__CreateEmpty() { return new SinglePassMaterialBase_obj; }

void *SinglePassMaterialBase_obj::_hx_vtable = 0;

Dynamic SinglePassMaterialBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SinglePassMaterialBase_obj > _hx_result = new SinglePassMaterialBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SinglePassMaterialBase_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37f46043) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x37f46043;
		}
	} else {
		return inClassId==(int)0x488e125e || inClassId==(int)0x7e319f05;
	}
}

bool SinglePassMaterialBase_obj::get_enableLightFallOff(){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_65_get_enableLightFallOff)
HXDLIN(  65)		return this->_screenPass->get_enableLightFallOff();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SinglePassMaterialBase_obj,get_enableLightFallOff,return )

bool SinglePassMaterialBase_obj::set_enableLightFallOff(bool value){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_69_set_enableLightFallOff)
HXLINE(  70)		this->_screenPass->set_enableLightFallOff(value);
HXLINE(  71)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,set_enableLightFallOff,return )

Float SinglePassMaterialBase_obj::get_alphaThreshold(){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_81_get_alphaThreshold)
HXDLIN(  81)		return this->_screenPass->get_diffuseMethod()->get_alphaThreshold();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SinglePassMaterialBase_obj,get_alphaThreshold,return )

Float SinglePassMaterialBase_obj::set_alphaThreshold(Float value){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_85_set_alphaThreshold)
HXLINE(  86)		this->_screenPass->get_diffuseMethod()->set_alphaThreshold(value);
HXLINE(  87)		this->_depthPass->set_alphaThreshold(value);
HXLINE(  88)		this->_distancePass->set_alphaThreshold(value);
HXLINE(  89)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,set_alphaThreshold,return )

 ::Dynamic SinglePassMaterialBase_obj::set_blendMode( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_96_set_blendMode)
HXLINE(  97)		this->super::set_blendMode(value);
HXLINE(  98)		 ::away3d::materials::passes::SuperShaderPass _hx_tmp = this->_screenPass;
HXDLIN(  98)		 ::Dynamic _hx_tmp1;
HXDLIN(  98)		bool _hx_tmp2;
HXDLIN(  98)		if (::hx::IsEq( this->get_blendMode(),10 )) {
HXLINE(  98)			_hx_tmp2 = this->get_requiresBlending();
            		}
            		else {
HXLINE(  98)			_hx_tmp2 = false;
            		}
HXDLIN(  98)		if (_hx_tmp2) {
HXLINE(  98)			_hx_tmp1 = 7;
            		}
            		else {
HXLINE(  98)			_hx_tmp1 = this->get_blendMode();
            		}
HXDLIN(  98)		_hx_tmp->setBlendMode(_hx_tmp1);
HXLINE(  99)		return value;
            	}


 ::Dynamic SinglePassMaterialBase_obj::set_depthCompareMode( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_106_set_depthCompareMode)
HXLINE( 107)		this->super::set_depthCompareMode(value);
HXLINE( 108)		this->_screenPass->set_depthCompareMode(value);
HXLINE( 109)		return value;
            	}


void SinglePassMaterialBase_obj::activateForDepth( ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera,::hx::Null< bool >  __o_distanceBased){
            		bool distanceBased = __o_distanceBased.Default(false);
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_116_activateForDepth)
HXLINE( 117)		if (distanceBased) {
HXLINE( 118)			 ::away3d::materials::passes::DistanceMapPass _hx_tmp = this->_distancePass;
HXDLIN( 118)			_hx_tmp->set_alphaMask(this->_screenPass->get_diffuseMethod()->get_texture());
            		}
            		else {
HXLINE( 120)			 ::away3d::materials::passes::DepthMapPass _hx_tmp = this->_depthPass;
HXDLIN( 120)			_hx_tmp->set_alphaMask(this->_screenPass->get_diffuseMethod()->get_texture());
            		}
HXLINE( 121)		this->super::activateForDepth(stage3DProxy,camera,distanceBased);
            	}


int SinglePassMaterialBase_obj::get_specularLightSources(){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_132_get_specularLightSources)
HXDLIN( 132)		return this->_screenPass->get_specularLightSources();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SinglePassMaterialBase_obj,get_specularLightSources,return )

int SinglePassMaterialBase_obj::set_specularLightSources(int value){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_136_set_specularLightSources)
HXLINE( 137)		this->_screenPass->set_specularLightSources(value);
HXLINE( 138)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,set_specularLightSources,return )

int SinglePassMaterialBase_obj::get_diffuseLightSources(){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_149_get_diffuseLightSources)
HXDLIN( 149)		return this->_screenPass->get_diffuseLightSources();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SinglePassMaterialBase_obj,get_diffuseLightSources,return )

int SinglePassMaterialBase_obj::set_diffuseLightSources(int value){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_153_set_diffuseLightSources)
HXLINE( 154)		this->_screenPass->set_diffuseLightSources(value);
HXLINE( 155)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,set_diffuseLightSources,return )

bool SinglePassMaterialBase_obj::get_requiresBlending(){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_163_get_requiresBlending)
HXDLIN( 163)		bool _hx_tmp;
HXDLIN( 163)		if (!(this->super::get_requiresBlending())) {
HXDLIN( 163)			_hx_tmp = this->_alphaBlending;
            		}
            		else {
HXDLIN( 163)			_hx_tmp = true;
            		}
HXDLIN( 163)		if (!(_hx_tmp)) {
HXDLIN( 163)			if (::hx::IsNotNull( this->_screenPass->get_colorTransform() )) {
HXDLIN( 163)				return (this->_screenPass->get_colorTransform()->alphaMultiplier < 1);
            			}
            			else {
HXDLIN( 163)				return false;
            			}
            		}
            		else {
HXDLIN( 163)			return true;
            		}
HXDLIN( 163)		return false;
            	}


 ::openfl::geom::ColorTransform SinglePassMaterialBase_obj::get_colorTransform(){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_171_get_colorTransform)
HXDLIN( 171)		return this->_screenPass->get_colorTransform();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SinglePassMaterialBase_obj,get_colorTransform,return )

 ::openfl::geom::ColorTransform SinglePassMaterialBase_obj::set_colorTransform( ::openfl::geom::ColorTransform value){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_175_set_colorTransform)
HXLINE( 176)		this->_screenPass->set_colorTransform(value);
HXLINE( 177)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,set_colorTransform,return )

 ::away3d::materials::methods::BasicAmbientMethod SinglePassMaterialBase_obj::get_ambientMethod(){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_185_get_ambientMethod)
HXDLIN( 185)		return this->_screenPass->get_ambientMethod();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SinglePassMaterialBase_obj,get_ambientMethod,return )

 ::away3d::materials::methods::BasicAmbientMethod SinglePassMaterialBase_obj::set_ambientMethod( ::away3d::materials::methods::BasicAmbientMethod value){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_189_set_ambientMethod)
HXLINE( 190)		this->_screenPass->set_ambientMethod(value);
HXLINE( 191)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,set_ambientMethod,return )

 ::away3d::materials::methods::ShadowMapMethodBase SinglePassMaterialBase_obj::get_shadowMethod(){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_199_get_shadowMethod)
HXDLIN( 199)		return this->_screenPass->get_shadowMethod();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SinglePassMaterialBase_obj,get_shadowMethod,return )

 ::away3d::materials::methods::ShadowMapMethodBase SinglePassMaterialBase_obj::set_shadowMethod( ::away3d::materials::methods::ShadowMapMethodBase value){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_203_set_shadowMethod)
HXLINE( 204)		this->_screenPass->set_shadowMethod(value);
HXLINE( 205)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,set_shadowMethod,return )

 ::away3d::materials::methods::BasicDiffuseMethod SinglePassMaterialBase_obj::get_diffuseMethod(){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_213_get_diffuseMethod)
HXDLIN( 213)		return this->_screenPass->get_diffuseMethod();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SinglePassMaterialBase_obj,get_diffuseMethod,return )

 ::away3d::materials::methods::BasicDiffuseMethod SinglePassMaterialBase_obj::set_diffuseMethod( ::away3d::materials::methods::BasicDiffuseMethod value){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_217_set_diffuseMethod)
HXLINE( 218)		this->_screenPass->set_diffuseMethod(value);
HXLINE( 219)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,set_diffuseMethod,return )

 ::away3d::materials::methods::BasicNormalMethod SinglePassMaterialBase_obj::get_normalMethod(){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_227_get_normalMethod)
HXDLIN( 227)		return this->_screenPass->get_normalMethod();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SinglePassMaterialBase_obj,get_normalMethod,return )

 ::away3d::materials::methods::BasicNormalMethod SinglePassMaterialBase_obj::set_normalMethod( ::away3d::materials::methods::BasicNormalMethod value){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_231_set_normalMethod)
HXLINE( 232)		this->_screenPass->set_normalMethod(value);
HXLINE( 233)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,set_normalMethod,return )

 ::away3d::materials::methods::BasicSpecularMethod SinglePassMaterialBase_obj::get_specularMethod(){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_241_get_specularMethod)
HXDLIN( 241)		return this->_screenPass->get_specularMethod();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SinglePassMaterialBase_obj,get_specularMethod,return )

 ::away3d::materials::methods::BasicSpecularMethod SinglePassMaterialBase_obj::set_specularMethod( ::away3d::materials::methods::BasicSpecularMethod value){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_245_set_specularMethod)
HXLINE( 246)		this->_screenPass->set_specularMethod(value);
HXLINE( 247)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,set_specularMethod,return )

void SinglePassMaterialBase_obj::addMethod( ::away3d::materials::methods::EffectMethodBase method){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_257_addMethod)
HXDLIN( 257)		this->_screenPass->addMethod(method);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,addMethod,(void))

int SinglePassMaterialBase_obj::get_numMethods(){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_265_get_numMethods)
HXDLIN( 265)		return this->_screenPass->get_numMethods();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SinglePassMaterialBase_obj,get_numMethods,return )

bool SinglePassMaterialBase_obj::hasMethod( ::away3d::materials::methods::EffectMethodBase method){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_276_hasMethod)
HXDLIN( 276)		return this->_screenPass->hasMethod(method);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,hasMethod,return )

 ::away3d::materials::methods::EffectMethodBase SinglePassMaterialBase_obj::getMethodAt(int index){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_286_getMethodAt)
HXDLIN( 286)		return this->_screenPass->getMethodAt(index);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,getMethodAt,return )

void SinglePassMaterialBase_obj::addMethodAt( ::away3d::materials::methods::EffectMethodBase method,int index){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_296_addMethodAt)
HXDLIN( 296)		this->_screenPass->addMethodAt(method,index);
            	}


HX_DEFINE_DYNAMIC_FUNC2(SinglePassMaterialBase_obj,addMethodAt,(void))

void SinglePassMaterialBase_obj::removeMethod( ::away3d::materials::methods::EffectMethodBase method){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_305_removeMethod)
HXDLIN( 305)		this->_screenPass->removeMethod(method);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,removeMethod,(void))

bool SinglePassMaterialBase_obj::set_mipmap(bool value){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_312_set_mipmap)
HXLINE( 313)		if ((this->_mipmap == value)) {
HXLINE( 314)			return value;
            		}
HXLINE( 315)		this->super::set_mipmap(value);
HXLINE( 316)		return value;
            	}


 ::away3d::textures::Texture2DBase SinglePassMaterialBase_obj::get_normalMap(){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_325_get_normalMap)
HXDLIN( 325)		return this->_screenPass->get_normalMap();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SinglePassMaterialBase_obj,get_normalMap,return )

 ::away3d::textures::Texture2DBase SinglePassMaterialBase_obj::set_normalMap( ::away3d::textures::Texture2DBase value){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_329_set_normalMap)
HXLINE( 330)		this->_screenPass->set_normalMap(value);
HXLINE( 331)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,set_normalMap,return )

 ::away3d::textures::Texture2DBase SinglePassMaterialBase_obj::get_specularMap(){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_341_get_specularMap)
HXDLIN( 341)		return this->_screenPass->get_specularMethod()->get_texture();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SinglePassMaterialBase_obj,get_specularMap,return )

 ::away3d::textures::Texture2DBase SinglePassMaterialBase_obj::set_specularMap( ::away3d::textures::Texture2DBase value){
            	HX_GC_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_345_set_specularMap)
HXLINE( 346)		if (::hx::IsNotNull( this->_screenPass->get_specularMethod() )) {
HXLINE( 347)			this->_screenPass->get_specularMethod()->set_texture(value);
            		}
            		else {
HXLINE( 349)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("No specular method was set to assign the specularGlossMap to",15,a8,c6,67),null())));
            		}
HXLINE( 350)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,set_specularMap,return )

Float SinglePassMaterialBase_obj::get_gloss(){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_358_get_gloss)
HXDLIN( 358)		if (::hx::IsNotNull( this->_screenPass->get_specularMethod() )) {
HXDLIN( 358)			return this->_screenPass->get_specularMethod()->get_gloss();
            		}
            		else {
HXDLIN( 358)			return ( (Float)(0) );
            		}
HXDLIN( 358)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SinglePassMaterialBase_obj,get_gloss,return )

Float SinglePassMaterialBase_obj::set_gloss(Float value){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_362_set_gloss)
HXLINE( 363)		if (::hx::IsNotNull( this->_screenPass->get_specularMethod() )) {
HXLINE( 364)			this->_screenPass->get_specularMethod()->set_gloss(value);
            		}
HXLINE( 365)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,set_gloss,return )

Float SinglePassMaterialBase_obj::get_ambient(){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_373_get_ambient)
HXDLIN( 373)		return this->_screenPass->get_ambientMethod()->get_ambient();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SinglePassMaterialBase_obj,get_ambient,return )

Float SinglePassMaterialBase_obj::set_ambient(Float value){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_377_set_ambient)
HXLINE( 378)		this->_screenPass->get_ambientMethod()->set_ambient(value);
HXLINE( 379)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,set_ambient,return )

Float SinglePassMaterialBase_obj::get_specular(){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_387_get_specular)
HXDLIN( 387)		if (::hx::IsNotNull( this->_screenPass->get_specularMethod() )) {
HXDLIN( 387)			return this->_screenPass->get_specularMethod()->get_specular();
            		}
            		else {
HXDLIN( 387)			return ( (Float)(0) );
            		}
HXDLIN( 387)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SinglePassMaterialBase_obj,get_specular,return )

Float SinglePassMaterialBase_obj::set_specular(Float value){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_391_set_specular)
HXLINE( 392)		if (::hx::IsNotNull( this->_screenPass->get_specularMethod() )) {
HXLINE( 393)			this->_screenPass->get_specularMethod()->set_specular(value);
            		}
HXLINE( 394)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,set_specular,return )

int SinglePassMaterialBase_obj::get_ambientColor(){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_402_get_ambientColor)
HXDLIN( 402)		return this->_screenPass->get_ambientMethod()->get_ambientColor();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SinglePassMaterialBase_obj,get_ambientColor,return )

int SinglePassMaterialBase_obj::set_ambientColor(int value){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_406_set_ambientColor)
HXLINE( 407)		this->_screenPass->get_ambientMethod()->set_ambientColor(value);
HXLINE( 408)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,set_ambientColor,return )

int SinglePassMaterialBase_obj::get_specularColor(){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_416_get_specularColor)
HXDLIN( 416)		return this->_screenPass->get_specularMethod()->get_specularColor();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SinglePassMaterialBase_obj,get_specularColor,return )

int SinglePassMaterialBase_obj::set_specularColor(int value){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_420_set_specularColor)
HXLINE( 421)		this->_screenPass->get_specularMethod()->set_specularColor(value);
HXLINE( 422)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,set_specularColor,return )

bool SinglePassMaterialBase_obj::get_alphaBlending(){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_431_get_alphaBlending)
HXDLIN( 431)		return this->_alphaBlending;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SinglePassMaterialBase_obj,get_alphaBlending,return )

bool SinglePassMaterialBase_obj::set_alphaBlending(bool value){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_435_set_alphaBlending)
HXLINE( 436)		this->_alphaBlending = value;
HXLINE( 437)		 ::away3d::materials::passes::SuperShaderPass _hx_tmp = this->_screenPass;
HXDLIN( 437)		 ::Dynamic _hx_tmp1;
HXDLIN( 437)		bool _hx_tmp2;
HXDLIN( 437)		if (::hx::IsEq( this->get_blendMode(),10 )) {
HXLINE( 437)			_hx_tmp2 = this->get_requiresBlending();
            		}
            		else {
HXLINE( 437)			_hx_tmp2 = false;
            		}
HXDLIN( 437)		if (_hx_tmp2) {
HXLINE( 437)			_hx_tmp1 = 7;
            		}
            		else {
HXLINE( 437)			_hx_tmp1 = this->get_blendMode();
            		}
HXDLIN( 437)		_hx_tmp->setBlendMode(_hx_tmp1);
HXLINE( 438)		 ::away3d::materials::passes::SuperShaderPass _hx_tmp3 = this->_screenPass;
HXDLIN( 438)		_hx_tmp3->set_preserveAlpha(this->get_requiresBlending());
HXLINE( 439)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,set_alphaBlending,return )

void SinglePassMaterialBase_obj::updateMaterial( ::openfl::display3D::Context3D context){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_447_updateMaterial)
HXDLIN( 447)		if (this->_screenPass->_passesDirty) {
HXLINE( 448)			this->clearPasses();
HXLINE( 449)			if (::hx::IsNotNull( this->_screenPass->_passes )) {
HXLINE( 450)				int len = this->_screenPass->_passes->get_length();
HXLINE( 451)				{
HXLINE( 451)					int _g = 0;
HXDLIN( 451)					int _g1 = len;
HXDLIN( 451)					while((_g < _g1)){
HXLINE( 451)						_g = (_g + 1);
HXDLIN( 451)						int i = (_g - 1);
HXLINE( 452)						this->addPass(this->_screenPass->_passes->get(i).StaticCast<  ::away3d::materials::passes::MaterialPassBase >());
            					}
            				}
            			}
HXLINE( 455)			this->addPass(this->_screenPass);
HXLINE( 456)			this->_screenPass->_passesDirty = false;
            		}
            	}


 ::away3d::materials::lightpickers::LightPickerBase SinglePassMaterialBase_obj::set_lightPicker( ::away3d::materials::lightpickers::LightPickerBase value){
            	HX_STACKFRAME(&_hx_pos_5810a4a1b94e36c5_464_set_lightPicker)
HXLINE( 465)		this->super::set_lightPicker(value);
HXLINE( 466)		this->_screenPass->set_lightPicker(value);
HXLINE( 467)		return value;
            	}



::hx::ObjectPtr< SinglePassMaterialBase_obj > SinglePassMaterialBase_obj::__new() {
	::hx::ObjectPtr< SinglePassMaterialBase_obj > __this = new SinglePassMaterialBase_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< SinglePassMaterialBase_obj > SinglePassMaterialBase_obj::__alloc(::hx::Ctx *_hx_ctx) {
	SinglePassMaterialBase_obj *__this = (SinglePassMaterialBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SinglePassMaterialBase_obj), true, "away3d.materials.SinglePassMaterialBase"));
	*(void **)__this = SinglePassMaterialBase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SinglePassMaterialBase_obj::SinglePassMaterialBase_obj()
{
}

void SinglePassMaterialBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SinglePassMaterialBase);
	HX_MARK_MEMBER_NAME(_screenPass,"_screenPass");
	HX_MARK_MEMBER_NAME(_alphaBlending,"_alphaBlending");
	 ::away3d::materials::MaterialBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SinglePassMaterialBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_screenPass,"_screenPass");
	HX_VISIT_MEMBER_NAME(_alphaBlending,"_alphaBlending");
	 ::away3d::materials::MaterialBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val SinglePassMaterialBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"gloss") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_gloss() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ambient") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_ambient() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"specular") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_specular() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normalMap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_normalMap() ); }
		if (HX_FIELD_EQ(inName,"addMethod") ) { return ::hx::Val( addMethod_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasMethod") ) { return ::hx::Val( hasMethod_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_gloss") ) { return ::hx::Val( get_gloss_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_gloss") ) { return ::hx::Val( set_gloss_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"numMethods") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numMethods() ); }
		if (HX_FIELD_EQ(inName,"set_mipmap") ) { return ::hx::Val( set_mipmap_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"specularMap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_specularMap() ); }
		if (HX_FIELD_EQ(inName,"_screenPass") ) { return ::hx::Val( _screenPass ); }
		if (HX_FIELD_EQ(inName,"getMethodAt") ) { return ::hx::Val( getMethodAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"addMethodAt") ) { return ::hx::Val( addMethodAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_ambient") ) { return ::hx::Val( get_ambient_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_ambient") ) { return ::hx::Val( set_ambient_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shadowMethod") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_shadowMethod() ); }
		if (HX_FIELD_EQ(inName,"normalMethod") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_normalMethod() ); }
		if (HX_FIELD_EQ(inName,"ambientColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_ambientColor() ); }
		if (HX_FIELD_EQ(inName,"removeMethod") ) { return ::hx::Val( removeMethod_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_specular") ) { return ::hx::Val( get_specular_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_specular") ) { return ::hx::Val( set_specular_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ambientMethod") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_ambientMethod() ); }
		if (HX_FIELD_EQ(inName,"diffuseMethod") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_diffuseMethod() ); }
		if (HX_FIELD_EQ(inName,"specularColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_specularColor() ); }
		if (HX_FIELD_EQ(inName,"alphaBlending") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_alphaBlending() ); }
		if (HX_FIELD_EQ(inName,"set_blendMode") ) { return ::hx::Val( set_blendMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_normalMap") ) { return ::hx::Val( get_normalMap_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_normalMap") ) { return ::hx::Val( set_normalMap_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"alphaThreshold") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_alphaThreshold() ); }
		if (HX_FIELD_EQ(inName,"colorTransform") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_colorTransform() ); }
		if (HX_FIELD_EQ(inName,"specularMethod") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_specularMethod() ); }
		if (HX_FIELD_EQ(inName,"_alphaBlending") ) { return ::hx::Val( _alphaBlending ); }
		if (HX_FIELD_EQ(inName,"get_numMethods") ) { return ::hx::Val( get_numMethods_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateMaterial") ) { return ::hx::Val( updateMaterial_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_specularMap") ) { return ::hx::Val( get_specularMap_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_specularMap") ) { return ::hx::Val( set_specularMap_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_lightPicker") ) { return ::hx::Val( set_lightPicker_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"activateForDepth") ) { return ::hx::Val( activateForDepth_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_shadowMethod") ) { return ::hx::Val( get_shadowMethod_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_shadowMethod") ) { return ::hx::Val( set_shadowMethod_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_normalMethod") ) { return ::hx::Val( get_normalMethod_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_normalMethod") ) { return ::hx::Val( set_normalMethod_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_ambientColor") ) { return ::hx::Val( get_ambientColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_ambientColor") ) { return ::hx::Val( set_ambientColor_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_ambientMethod") ) { return ::hx::Val( get_ambientMethod_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_ambientMethod") ) { return ::hx::Val( set_ambientMethod_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_diffuseMethod") ) { return ::hx::Val( get_diffuseMethod_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_diffuseMethod") ) { return ::hx::Val( set_diffuseMethod_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_specularColor") ) { return ::hx::Val( get_specularColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_specularColor") ) { return ::hx::Val( set_specularColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_alphaBlending") ) { return ::hx::Val( get_alphaBlending_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alphaBlending") ) { return ::hx::Val( set_alphaBlending_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"enableLightFallOff") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_enableLightFallOff() ); }
		if (HX_FIELD_EQ(inName,"get_alphaThreshold") ) { return ::hx::Val( get_alphaThreshold_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alphaThreshold") ) { return ::hx::Val( set_alphaThreshold_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_colorTransform") ) { return ::hx::Val( get_colorTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_colorTransform") ) { return ::hx::Val( set_colorTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_specularMethod") ) { return ::hx::Val( get_specularMethod_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_specularMethod") ) { return ::hx::Val( set_specularMethod_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"diffuseLightSources") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_diffuseLightSources() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"specularLightSources") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_specularLightSources() ); }
		if (HX_FIELD_EQ(inName,"set_depthCompareMode") ) { return ::hx::Val( set_depthCompareMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_requiresBlending") ) { return ::hx::Val( get_requiresBlending_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_enableLightFallOff") ) { return ::hx::Val( get_enableLightFallOff_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_enableLightFallOff") ) { return ::hx::Val( set_enableLightFallOff_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_diffuseLightSources") ) { return ::hx::Val( get_diffuseLightSources_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_diffuseLightSources") ) { return ::hx::Val( set_diffuseLightSources_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_specularLightSources") ) { return ::hx::Val( get_specularLightSources_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_specularLightSources") ) { return ::hx::Val( set_specularLightSources_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SinglePassMaterialBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"gloss") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_gloss(inValue.Cast< Float >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ambient") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_ambient(inValue.Cast< Float >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"specular") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_specular(inValue.Cast< Float >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normalMap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_normalMap(inValue.Cast<  ::away3d::textures::Texture2DBase >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"specularMap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_specularMap(inValue.Cast<  ::away3d::textures::Texture2DBase >()) ); }
		if (HX_FIELD_EQ(inName,"_screenPass") ) { _screenPass=inValue.Cast<  ::away3d::materials::passes::SuperShaderPass >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shadowMethod") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_shadowMethod(inValue.Cast<  ::away3d::materials::methods::ShadowMapMethodBase >()) ); }
		if (HX_FIELD_EQ(inName,"normalMethod") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_normalMethod(inValue.Cast<  ::away3d::materials::methods::BasicNormalMethod >()) ); }
		if (HX_FIELD_EQ(inName,"ambientColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_ambientColor(inValue.Cast< int >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ambientMethod") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_ambientMethod(inValue.Cast<  ::away3d::materials::methods::BasicAmbientMethod >()) ); }
		if (HX_FIELD_EQ(inName,"diffuseMethod") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_diffuseMethod(inValue.Cast<  ::away3d::materials::methods::BasicDiffuseMethod >()) ); }
		if (HX_FIELD_EQ(inName,"specularColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_specularColor(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"alphaBlending") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alphaBlending(inValue.Cast< bool >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"alphaThreshold") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alphaThreshold(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"colorTransform") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_colorTransform(inValue.Cast<  ::openfl::geom::ColorTransform >()) ); }
		if (HX_FIELD_EQ(inName,"specularMethod") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_specularMethod(inValue.Cast<  ::away3d::materials::methods::BasicSpecularMethod >()) ); }
		if (HX_FIELD_EQ(inName,"_alphaBlending") ) { _alphaBlending=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"enableLightFallOff") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_enableLightFallOff(inValue.Cast< bool >()) ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"diffuseLightSources") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_diffuseLightSources(inValue.Cast< int >()) ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"specularLightSources") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_specularLightSources(inValue.Cast< int >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SinglePassMaterialBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("enableLightFallOff",a1,7e,2a,a7));
	outFields->push(HX_("alphaThreshold",6d,20,ab,01));
	outFields->push(HX_("specularLightSources",65,48,c2,b2));
	outFields->push(HX_("diffuseLightSources",84,45,ca,ff));
	outFields->push(HX_("colorTransform",89,d7,3f,ad));
	outFields->push(HX_("ambientMethod",19,25,b6,82));
	outFields->push(HX_("shadowMethod",e1,5a,27,85));
	outFields->push(HX_("diffuseMethod",e3,01,e5,ec));
	outFields->push(HX_("normalMethod",68,74,bf,07));
	outFields->push(HX_("specularMethod",04,b6,19,0d));
	outFields->push(HX_("numMethods",cc,4c,5d,56));
	outFields->push(HX_("normalMap",b5,e2,8b,ab));
	outFields->push(HX_("specularMap",99,c7,8c,b1));
	outFields->push(HX_("gloss",ca,69,fd,95));
	outFields->push(HX_("ambient",18,98,81,09));
	outFields->push(HX_("specular",c3,56,6c,93));
	outFields->push(HX_("ambientColor",2b,f2,d1,97));
	outFields->push(HX_("specularColor",a0,27,3d,0b));
	outFields->push(HX_("alphaBlending",af,5e,52,dc));
	outFields->push(HX_("_screenPass",7c,3f,12,95));
	outFields->push(HX_("_alphaBlending",f0,4e,a4,1a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SinglePassMaterialBase_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::away3d::materials::passes::SuperShaderPass */ ,(int)offsetof(SinglePassMaterialBase_obj,_screenPass),HX_("_screenPass",7c,3f,12,95)},
	{::hx::fsBool,(int)offsetof(SinglePassMaterialBase_obj,_alphaBlending),HX_("_alphaBlending",f0,4e,a4,1a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SinglePassMaterialBase_obj_sStaticStorageInfo = 0;
#endif

static ::String SinglePassMaterialBase_obj_sMemberFields[] = {
	HX_("_screenPass",7c,3f,12,95),
	HX_("_alphaBlending",f0,4e,a4,1a),
	HX_("get_enableLightFallOff",ea,f7,be,00),
	HX_("set_enableLightFallOff",5e,74,6a,34),
	HX_("get_alphaThreshold",36,01,45,9d),
	HX_("set_alphaThreshold",aa,33,f4,79),
	HX_("set_blendMode",37,9a,a1,12),
	HX_("set_depthCompareMode",e2,7a,69,a0),
	HX_("activateForDepth",0d,bc,2b,11),
	HX_("get_specularLightSources",ee,65,5e,f5),
	HX_("set_specularLightSources",62,e7,38,08),
	HX_("get_diffuseLightSources",1b,ec,1f,08),
	HX_("set_diffuseLightSources",27,55,81,0a),
	HX_("get_requiresBlending",c8,3d,99,a7),
	HX_("get_colorTransform",52,b8,d9,48),
	HX_("set_colorTransform",c6,ea,88,25),
	HX_("get_ambientMethod",70,30,26,89),
	HX_("set_ambientMethod",7c,08,94,ac),
	HX_("get_shadowMethod",6a,47,c6,89),
	HX_("set_shadowMethod",de,34,08,e0),
	HX_("get_diffuseMethod",3a,0d,55,f3),
	HX_("set_diffuseMethod",46,e5,c2,16),
	HX_("get_normalMethod",f1,60,5e,0c),
	HX_("set_normalMethod",65,4e,a0,62),
	HX_("get_specularMethod",cd,96,b3,a8),
	HX_("set_specularMethod",41,c9,62,85),
	HX_("addMethod",e2,2b,7f,c1),
	HX_("get_numMethods",15,d5,52,cc),
	HX_("hasMethod",db,a9,43,4a),
	HX_("getMethodAt",ea,2c,23,75),
	HX_("addMethodAt",75,a1,8b,80),
	HX_("removeMethod",45,92,88,78),
	HX_("set_mipmap",c5,3b,59,48),
	HX_("get_normalMap",8c,b6,ef,6c),
	HX_("set_normalMap",98,98,f5,b1),
	HX_("get_specularMap",30,7f,6e,72),
	HX_("set_specularMap",3c,fc,39,6e),
	HX_("get_gloss",21,c6,a6,d9),
	HX_("set_gloss",2d,b2,f7,bc),
	HX_("get_ambient",2f,f8,7b,8f),
	HX_("set_ambient",3b,ff,e8,99),
	HX_("get_specular",cc,0a,86,48),
	HX_("set_specular",40,2e,7f,5d),
	HX_("get_ambientColor",b4,de,70,9c),
	HX_("set_ambientColor",28,cc,b2,f2),
	HX_("get_specularColor",f7,32,ad,11),
	HX_("set_specularColor",03,0b,1b,35),
	HX_("get_alphaBlending",06,6a,c2,e2),
	HX_("set_alphaBlending",12,42,30,06),
	HX_("updateMaterial",d0,4f,cf,25),
	HX_("set_lightPicker",a7,79,c8,9f),
	::String(null()) };

::hx::Class SinglePassMaterialBase_obj::__mClass;

void SinglePassMaterialBase_obj::__register()
{
	SinglePassMaterialBase_obj _hx_dummy;
	SinglePassMaterialBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.materials.SinglePassMaterialBase",62,c3,cf,42);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SinglePassMaterialBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SinglePassMaterialBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SinglePassMaterialBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SinglePassMaterialBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace materials
