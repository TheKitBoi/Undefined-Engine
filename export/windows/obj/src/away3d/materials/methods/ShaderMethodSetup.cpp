#include <hxcpp.h>

#ifndef INCLUDED_away3d_events_ShadingMethodEvent
#include <away3d/events/ShadingMethodEvent.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
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
#ifndef INCLUDED_away3d_materials_methods_ColorTransformMethod
#include <away3d/materials/methods/ColorTransformMethod.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_EffectMethodBase
#include <away3d/materials/methods/EffectMethodBase.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_LightingMethodBase
#include <away3d/materials/methods/LightingMethodBase.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_MethodVO
#include <away3d/materials/methods/MethodVO.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_MethodVOSet
#include <away3d/materials/methods/MethodVOSet.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_ShaderMethodSetup
#include <away3d/materials/methods/ShaderMethodSetup.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_ShadingMethodBase
#include <away3d/materials/methods/ShadingMethodBase.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_ShadowMapMethodBase
#include <away3d/materials/methods/ShadowMapMethodBase.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_a2ba3724ba392a62_39_new,"away3d.materials.methods.ShaderMethodSetup","new",0x0768785c,"away3d.materials.methods.ShaderMethodSetup.new","away3d/materials/methods/ShaderMethodSetup.hx",39,0x39109757)
HX_LOCAL_STACK_FRAME(_hx_pos_a2ba3724ba392a62_61_onShaderInvalidated,"away3d.materials.methods.ShaderMethodSetup","onShaderInvalidated",0xca6acf41,"away3d.materials.methods.ShaderMethodSetup.onShaderInvalidated","away3d/materials/methods/ShaderMethodSetup.hx",61,0x39109757)
HX_LOCAL_STACK_FRAME(_hx_pos_a2ba3724ba392a62_69_invalidateShaderProgram,"away3d.materials.methods.ShaderMethodSetup","invalidateShaderProgram",0x3236c560,"away3d.materials.methods.ShaderMethodSetup.invalidateShaderProgram","away3d/materials/methods/ShaderMethodSetup.hx",69,0x39109757)
HX_LOCAL_STACK_FRAME(_hx_pos_a2ba3724ba392a62_77_get_normalMethod,"away3d.materials.methods.ShaderMethodSetup","get_normalMethod",0xdccb6b75,"away3d.materials.methods.ShaderMethodSetup.get_normalMethod","away3d/materials/methods/ShaderMethodSetup.hx",77,0x39109757)
HX_LOCAL_STACK_FRAME(_hx_pos_a2ba3724ba392a62_81_set_normalMethod,"away3d.materials.methods.ShaderMethodSetup","set_normalMethod",0x330d58e9,"away3d.materials.methods.ShaderMethodSetup.set_normalMethod","away3d/materials/methods/ShaderMethodSetup.hx",81,0x39109757)
HX_LOCAL_STACK_FRAME(_hx_pos_a2ba3724ba392a62_104_get_ambientMethod,"away3d.materials.methods.ShaderMethodSetup","get_ambientMethod",0x1822596c,"away3d.materials.methods.ShaderMethodSetup.get_ambientMethod","away3d/materials/methods/ShaderMethodSetup.hx",104,0x39109757)
HX_LOCAL_STACK_FRAME(_hx_pos_a2ba3724ba392a62_108_set_ambientMethod,"away3d.materials.methods.ShaderMethodSetup","set_ambientMethod",0x3b903178,"away3d.materials.methods.ShaderMethodSetup.set_ambientMethod","away3d/materials/methods/ShaderMethodSetup.hx",108,0x39109757)
HX_LOCAL_STACK_FRAME(_hx_pos_a2ba3724ba392a62_129_get_shadowMethod,"away3d.materials.methods.ShaderMethodSetup","get_shadowMethod",0x5a3351ee,"away3d.materials.methods.ShaderMethodSetup.get_shadowMethod","away3d/materials/methods/ShaderMethodSetup.hx",129,0x39109757)
HX_LOCAL_STACK_FRAME(_hx_pos_a2ba3724ba392a62_133_set_shadowMethod,"away3d.materials.methods.ShaderMethodSetup","set_shadowMethod",0xb0753f62,"away3d.materials.methods.ShaderMethodSetup.set_shadowMethod","away3d/materials/methods/ShaderMethodSetup.hx",133,0x39109757)
HX_LOCAL_STACK_FRAME(_hx_pos_a2ba3724ba392a62_151_get_diffuseMethod,"away3d.materials.methods.ShaderMethodSetup","get_diffuseMethod",0x82513636,"away3d.materials.methods.ShaderMethodSetup.get_diffuseMethod","away3d/materials/methods/ShaderMethodSetup.hx",151,0x39109757)
HX_LOCAL_STACK_FRAME(_hx_pos_a2ba3724ba392a62_155_set_diffuseMethod,"away3d.materials.methods.ShaderMethodSetup","set_diffuseMethod",0xa5bf0e42,"away3d.materials.methods.ShaderMethodSetup.set_diffuseMethod","away3d/materials/methods/ShaderMethodSetup.hx",155,0x39109757)
HX_LOCAL_STACK_FRAME(_hx_pos_a2ba3724ba392a62_178_get_specularMethod,"away3d.materials.methods.ShaderMethodSetup","get_specularMethod",0x365b4a51,"away3d.materials.methods.ShaderMethodSetup.get_specularMethod","away3d/materials/methods/ShaderMethodSetup.hx",178,0x39109757)
HX_LOCAL_STACK_FRAME(_hx_pos_a2ba3724ba392a62_182_set_specularMethod,"away3d.materials.methods.ShaderMethodSetup","set_specularMethod",0x130a7cc5,"away3d.materials.methods.ShaderMethodSetup.set_specularMethod","away3d/materials/methods/ShaderMethodSetup.hx",182,0x39109757)
HX_LOCAL_STACK_FRAME(_hx_pos_a2ba3724ba392a62_205_get_colorTransformMethod,"away3d.materials.methods.ShaderMethodSetup","get_colorTransformMethod",0xa6c45b57,"away3d.materials.methods.ShaderMethodSetup.get_colorTransformMethod","away3d/materials/methods/ShaderMethodSetup.hx",205,0x39109757)
HX_LOCAL_STACK_FRAME(_hx_pos_a2ba3724ba392a62_209_set_colorTransformMethod,"away3d.materials.methods.ShaderMethodSetup","set_colorTransformMethod",0xb99edccb,"away3d.materials.methods.ShaderMethodSetup.set_colorTransformMethod","away3d/materials/methods/ShaderMethodSetup.hx",209,0x39109757)
HX_LOCAL_STACK_FRAME(_hx_pos_a2ba3724ba392a62_230_dispose,"away3d.materials.methods.ShaderMethodSetup","dispose",0xe03ad69b,"away3d.materials.methods.ShaderMethodSetup.dispose","away3d/materials/methods/ShaderMethodSetup.hx",230,0x39109757)
HX_LOCAL_STACK_FRAME(_hx_pos_a2ba3724ba392a62_248_clearListeners,"away3d.materials.methods.ShaderMethodSetup","clearListeners",0x33f25bb6,"away3d.materials.methods.ShaderMethodSetup.clearListeners","away3d/materials/methods/ShaderMethodSetup.hx",248,0x39109757)
HX_LOCAL_STACK_FRAME(_hx_pos_a2ba3724ba392a62_257_addMethod,"away3d.materials.methods.ShaderMethodSetup","addMethod",0xbf2bf8de,"away3d.materials.methods.ShaderMethodSetup.addMethod","away3d/materials/methods/ShaderMethodSetup.hx",257,0x39109757)
HX_LOCAL_STACK_FRAME(_hx_pos_a2ba3724ba392a62_271_hasMethod,"away3d.materials.methods.ShaderMethodSetup","hasMethod",0x47f076d7,"away3d.materials.methods.ShaderMethodSetup.hasMethod","away3d/materials/methods/ShaderMethodSetup.hx",271,0x39109757)
HX_LOCAL_STACK_FRAME(_hx_pos_a2ba3724ba392a62_280_addMethodAt,"away3d.materials.methods.ShaderMethodSetup","addMethodAt",0xdcc2a571,"away3d.materials.methods.ShaderMethodSetup.addMethodAt","away3d/materials/methods/ShaderMethodSetup.hx",280,0x39109757)
HX_LOCAL_STACK_FRAME(_hx_pos_a2ba3724ba392a62_292_getMethodAt,"away3d.materials.methods.ShaderMethodSetup","getMethodAt",0xd15a30e6,"away3d.materials.methods.ShaderMethodSetup.getMethodAt","away3d/materials/methods/ShaderMethodSetup.hx",292,0x39109757)
HX_LOCAL_STACK_FRAME(_hx_pos_a2ba3724ba392a62_304_get_numMethods,"away3d.materials.methods.ShaderMethodSetup","get_numMethods",0x4eb17699,"away3d.materials.methods.ShaderMethodSetup.get_numMethods","away3d/materials/methods/ShaderMethodSetup.hx",304,0x39109757)
HX_LOCAL_STACK_FRAME(_hx_pos_a2ba3724ba392a62_312_removeMethod,"away3d.materials.methods.ShaderMethodSetup","removeMethod",0xcc750ac9,"away3d.materials.methods.ShaderMethodSetup.removeMethod","away3d/materials/methods/ShaderMethodSetup.hx",312,0x39109757)
HX_LOCAL_STACK_FRAME(_hx_pos_a2ba3724ba392a62_323_getMethodSetForMethod,"away3d.materials.methods.ShaderMethodSetup","getMethodSetForMethod",0xb356c87b,"away3d.materials.methods.ShaderMethodSetup.getMethodSetForMethod","away3d/materials/methods/ShaderMethodSetup.hx",323,0x39109757)
namespace away3d{
namespace materials{
namespace methods{

void ShaderMethodSetup_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_a2ba3724ba392a62_39_new)
HXLINE(  40)		int length = null();
HXDLIN(  40)		bool fixed = null();
HXDLIN(  40)		::Array< ::Dynamic> array = null();
HXDLIN(  40)		this->_methods =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE(  41)		this->_normalMethod =  ::away3d::materials::methods::BasicNormalMethod_obj::__alloc( HX_CTX );
HXLINE(  42)		this->_ambientMethod =  ::away3d::materials::methods::BasicAmbientMethod_obj::__alloc( HX_CTX );
HXLINE(  43)		this->_diffuseMethod =  ::away3d::materials::methods::BasicDiffuseMethod_obj::__alloc( HX_CTX );
HXLINE(  44)		this->_specularMethod =  ::away3d::materials::methods::BasicSpecularMethod_obj::__alloc( HX_CTX );
HXLINE(  45)		this->_normalMethod->addEventListener(HX_("ShaderInvalidated",44,03,b9,4d),this->onShaderInvalidated_dyn(),null(),null(),null());
HXLINE(  46)		this->_diffuseMethod->addEventListener(HX_("ShaderInvalidated",44,03,b9,4d),this->onShaderInvalidated_dyn(),null(),null(),null());
HXLINE(  47)		this->_specularMethod->addEventListener(HX_("ShaderInvalidated",44,03,b9,4d),this->onShaderInvalidated_dyn(),null(),null(),null());
HXLINE(  48)		this->_ambientMethod->addEventListener(HX_("ShaderInvalidated",44,03,b9,4d),this->onShaderInvalidated_dyn(),null(),null(),null());
HXLINE(  49)		this->_normalMethodVO = this->_normalMethod->createMethodVO();
HXLINE(  50)		this->_ambientMethodVO = this->_ambientMethod->createMethodVO();
HXLINE(  51)		this->_diffuseMethodVO = this->_diffuseMethod->createMethodVO();
HXLINE(  52)		this->_specularMethodVO = this->_specularMethod->createMethodVO();
HXLINE(  53)		super::__construct(null());
            	}

Dynamic ShaderMethodSetup_obj::__CreateEmpty() { return new ShaderMethodSetup_obj; }

void *ShaderMethodSetup_obj::_hx_vtable = 0;

Dynamic ShaderMethodSetup_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShaderMethodSetup_obj > _hx_result = new ShaderMethodSetup_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ShaderMethodSetup_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x3e0c9df2;
	}
}

void ShaderMethodSetup_obj::onShaderInvalidated( ::away3d::events::ShadingMethodEvent event){
            	HX_STACKFRAME(&_hx_pos_a2ba3724ba392a62_61_onShaderInvalidated)
HXDLIN(  61)		this->invalidateShaderProgram();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderMethodSetup_obj,onShaderInvalidated,(void))

void ShaderMethodSetup_obj::invalidateShaderProgram(){
            	HX_GC_STACKFRAME(&_hx_pos_a2ba3724ba392a62_69_invalidateShaderProgram)
HXDLIN(  69)		this->dispatchEvent( ::away3d::events::ShadingMethodEvent_obj::__alloc( HX_CTX ,HX_("ShaderInvalidated",44,03,b9,4d),null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderMethodSetup_obj,invalidateShaderProgram,(void))

 ::away3d::materials::methods::BasicNormalMethod ShaderMethodSetup_obj::get_normalMethod(){
            	HX_STACKFRAME(&_hx_pos_a2ba3724ba392a62_77_get_normalMethod)
HXDLIN(  77)		return this->_normalMethod;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderMethodSetup_obj,get_normalMethod,return )

 ::away3d::materials::methods::BasicNormalMethod ShaderMethodSetup_obj::set_normalMethod( ::away3d::materials::methods::BasicNormalMethod value){
            	HX_STACKFRAME(&_hx_pos_a2ba3724ba392a62_81_set_normalMethod)
HXLINE(  82)		if (::hx::IsNotNull( this->_normalMethod )) {
HXLINE(  83)			this->_normalMethod->removeEventListener(HX_("ShaderInvalidated",44,03,b9,4d),this->onShaderInvalidated_dyn(),null());
            		}
HXLINE(  85)		if (::hx::IsNotNull( value )) {
HXLINE(  86)			if (::hx::IsNotNull( this->_normalMethod )) {
HXLINE(  87)				value->copyFrom(this->_normalMethod);
            			}
HXLINE(  88)			this->_normalMethodVO = value->createMethodVO();
HXLINE(  89)			value->addEventListener(HX_("ShaderInvalidated",44,03,b9,4d),this->onShaderInvalidated_dyn(),null(),null(),null());
            		}
HXLINE(  92)		this->_normalMethod = value;
HXLINE(  94)		if (::hx::IsNotNull( value )) {
HXLINE(  95)			this->invalidateShaderProgram();
            		}
HXLINE(  96)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderMethodSetup_obj,set_normalMethod,return )

 ::away3d::materials::methods::BasicAmbientMethod ShaderMethodSetup_obj::get_ambientMethod(){
            	HX_STACKFRAME(&_hx_pos_a2ba3724ba392a62_104_get_ambientMethod)
HXDLIN( 104)		return this->_ambientMethod;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderMethodSetup_obj,get_ambientMethod,return )

 ::away3d::materials::methods::BasicAmbientMethod ShaderMethodSetup_obj::set_ambientMethod( ::away3d::materials::methods::BasicAmbientMethod value){
            	HX_STACKFRAME(&_hx_pos_a2ba3724ba392a62_108_set_ambientMethod)
HXLINE( 109)		if (::hx::IsNotNull( this->_ambientMethod )) {
HXLINE( 110)			this->_ambientMethod->removeEventListener(HX_("ShaderInvalidated",44,03,b9,4d),this->onShaderInvalidated_dyn(),null());
            		}
HXLINE( 111)		if (::hx::IsNotNull( value )) {
HXLINE( 112)			if (::hx::IsNotNull( this->_ambientMethod )) {
HXLINE( 113)				value->copyFrom(this->_ambientMethod);
            			}
HXLINE( 114)			value->addEventListener(HX_("ShaderInvalidated",44,03,b9,4d),this->onShaderInvalidated_dyn(),null(),null(),null());
HXLINE( 115)			this->_ambientMethodVO = value->createMethodVO();
            		}
HXLINE( 117)		this->_ambientMethod = value;
HXLINE( 119)		if (::hx::IsNotNull( value )) {
HXLINE( 120)			this->invalidateShaderProgram();
            		}
HXLINE( 121)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderMethodSetup_obj,set_ambientMethod,return )

 ::away3d::materials::methods::ShadowMapMethodBase ShaderMethodSetup_obj::get_shadowMethod(){
            	HX_STACKFRAME(&_hx_pos_a2ba3724ba392a62_129_get_shadowMethod)
HXDLIN( 129)		return this->_shadowMethod;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderMethodSetup_obj,get_shadowMethod,return )

 ::away3d::materials::methods::ShadowMapMethodBase ShaderMethodSetup_obj::set_shadowMethod( ::away3d::materials::methods::ShadowMapMethodBase value){
            	HX_STACKFRAME(&_hx_pos_a2ba3724ba392a62_133_set_shadowMethod)
HXLINE( 134)		if (::hx::IsNotNull( this->_shadowMethod )) {
HXLINE( 135)			this->_shadowMethod->removeEventListener(HX_("ShaderInvalidated",44,03,b9,4d),this->onShaderInvalidated_dyn(),null());
            		}
HXLINE( 136)		this->_shadowMethod = value;
HXLINE( 137)		if (::hx::IsNotNull( this->_shadowMethod )) {
HXLINE( 138)			this->_shadowMethod->addEventListener(HX_("ShaderInvalidated",44,03,b9,4d),this->onShaderInvalidated_dyn(),null(),null(),null());
HXLINE( 139)			this->_shadowMethodVO = this->_shadowMethod->createMethodVO();
            		}
            		else {
HXLINE( 141)			this->_shadowMethodVO = null();
            		}
HXLINE( 142)		this->invalidateShaderProgram();
HXLINE( 143)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderMethodSetup_obj,set_shadowMethod,return )

 ::away3d::materials::methods::BasicDiffuseMethod ShaderMethodSetup_obj::get_diffuseMethod(){
            	HX_STACKFRAME(&_hx_pos_a2ba3724ba392a62_151_get_diffuseMethod)
HXDLIN( 151)		return this->_diffuseMethod;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderMethodSetup_obj,get_diffuseMethod,return )

 ::away3d::materials::methods::BasicDiffuseMethod ShaderMethodSetup_obj::set_diffuseMethod( ::away3d::materials::methods::BasicDiffuseMethod value){
            	HX_STACKFRAME(&_hx_pos_a2ba3724ba392a62_155_set_diffuseMethod)
HXLINE( 156)		if (::hx::IsNotNull( this->_diffuseMethod )) {
HXLINE( 157)			this->_diffuseMethod->removeEventListener(HX_("ShaderInvalidated",44,03,b9,4d),this->onShaderInvalidated_dyn(),null());
            		}
HXLINE( 159)		if (::hx::IsNotNull( value )) {
HXLINE( 160)			if (::hx::IsNotNull( this->_diffuseMethod )) {
HXLINE( 161)				value->copyFrom(this->_diffuseMethod);
            			}
HXLINE( 162)			value->addEventListener(HX_("ShaderInvalidated",44,03,b9,4d),this->onShaderInvalidated_dyn(),null(),null(),null());
HXLINE( 163)			this->_diffuseMethodVO = value->createMethodVO();
            		}
HXLINE( 166)		this->_diffuseMethod = value;
HXLINE( 168)		if (::hx::IsNotNull( value )) {
HXLINE( 169)			this->invalidateShaderProgram();
            		}
HXLINE( 170)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderMethodSetup_obj,set_diffuseMethod,return )

 ::away3d::materials::methods::BasicSpecularMethod ShaderMethodSetup_obj::get_specularMethod(){
            	HX_STACKFRAME(&_hx_pos_a2ba3724ba392a62_178_get_specularMethod)
HXDLIN( 178)		return this->_specularMethod;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderMethodSetup_obj,get_specularMethod,return )

 ::away3d::materials::methods::BasicSpecularMethod ShaderMethodSetup_obj::set_specularMethod( ::away3d::materials::methods::BasicSpecularMethod value){
            	HX_STACKFRAME(&_hx_pos_a2ba3724ba392a62_182_set_specularMethod)
HXLINE( 183)		if (::hx::IsNotNull( this->_specularMethod )) {
HXLINE( 184)			this->_specularMethod->removeEventListener(HX_("ShaderInvalidated",44,03,b9,4d),this->onShaderInvalidated_dyn(),null());
HXLINE( 185)			if (::hx::IsNotNull( value )) {
HXLINE( 186)				value->copyFrom(this->_specularMethod);
            			}
            		}
HXLINE( 189)		this->_specularMethod = value;
HXLINE( 190)		if (::hx::IsNotNull( this->_specularMethod )) {
HXLINE( 191)			this->_specularMethod->addEventListener(HX_("ShaderInvalidated",44,03,b9,4d),this->onShaderInvalidated_dyn(),null(),null(),null());
HXLINE( 192)			this->_specularMethodVO = this->_specularMethod->createMethodVO();
            		}
            		else {
HXLINE( 194)			this->_specularMethodVO = null();
            		}
HXLINE( 196)		this->invalidateShaderProgram();
HXLINE( 197)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderMethodSetup_obj,set_specularMethod,return )

 ::away3d::materials::methods::ColorTransformMethod ShaderMethodSetup_obj::get_colorTransformMethod(){
            	HX_STACKFRAME(&_hx_pos_a2ba3724ba392a62_205_get_colorTransformMethod)
HXDLIN( 205)		return this->_colorTransformMethod;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderMethodSetup_obj,get_colorTransformMethod,return )

 ::away3d::materials::methods::ColorTransformMethod ShaderMethodSetup_obj::set_colorTransformMethod( ::away3d::materials::methods::ColorTransformMethod value){
            	HX_STACKFRAME(&_hx_pos_a2ba3724ba392a62_209_set_colorTransformMethod)
HXLINE( 210)		if (::hx::IsInstanceEq( this->_colorTransformMethod,value )) {
HXLINE( 211)			return value;
            		}
HXLINE( 212)		if (::hx::IsNotNull( this->_colorTransformMethod )) {
HXLINE( 213)			this->_colorTransformMethod->removeEventListener(HX_("ShaderInvalidated",44,03,b9,4d),this->onShaderInvalidated_dyn(),null());
            		}
HXLINE( 214)		bool _hx_tmp;
HXDLIN( 214)		if (::hx::IsNotNull( this->_colorTransformMethod )) {
HXLINE( 214)			_hx_tmp = ::hx::IsNull( value );
            		}
            		else {
HXLINE( 214)			_hx_tmp = true;
            		}
HXDLIN( 214)		if (_hx_tmp) {
HXLINE( 215)			this->invalidateShaderProgram();
            		}
HXLINE( 217)		this->_colorTransformMethod = value;
HXLINE( 218)		if (::hx::IsNotNull( this->_colorTransformMethod )) {
HXLINE( 219)			this->_colorTransformMethod->addEventListener(HX_("ShaderInvalidated",44,03,b9,4d),this->onShaderInvalidated_dyn(),null(),null(),null());
HXLINE( 220)			this->_colorTransformMethodVO = this->_colorTransformMethod->createMethodVO();
            		}
            		else {
HXLINE( 222)			this->_colorTransformMethodVO = null();
            		}
HXLINE( 223)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderMethodSetup_obj,set_colorTransformMethod,return )

void ShaderMethodSetup_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_a2ba3724ba392a62_230_dispose)
HXLINE( 231)		this->clearListeners(this->_normalMethod);
HXLINE( 232)		this->clearListeners(this->_diffuseMethod);
HXLINE( 233)		this->clearListeners(this->_shadowMethod);
HXLINE( 234)		this->clearListeners(this->_ambientMethod);
HXLINE( 235)		this->clearListeners(this->_specularMethod);
HXLINE( 237)		{
HXLINE( 237)			int _g = 0;
HXDLIN( 237)			int _g1 = this->_methods->get_length();
HXDLIN( 237)			while((_g < _g1)){
HXLINE( 237)				_g = (_g + 1);
HXDLIN( 237)				int i = (_g - 1);
HXLINE( 238)				this->clearListeners(this->_methods->get(i).StaticCast<  ::away3d::materials::methods::MethodVOSet >()->method);
            			}
            		}
HXLINE( 240)		this->_methods = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderMethodSetup_obj,dispose,(void))

void ShaderMethodSetup_obj::clearListeners( ::away3d::materials::methods::ShadingMethodBase method){
            	HX_STACKFRAME(&_hx_pos_a2ba3724ba392a62_248_clearListeners)
HXDLIN( 248)		if (::hx::IsNotNull( method )) {
HXLINE( 249)			method->removeEventListener(HX_("ShaderInvalidated",44,03,b9,4d),this->onShaderInvalidated_dyn(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderMethodSetup_obj,clearListeners,(void))

void ShaderMethodSetup_obj::addMethod( ::away3d::materials::methods::EffectMethodBase method){
            	HX_GC_STACKFRAME(&_hx_pos_a2ba3724ba392a62_257_addMethod)
HXLINE( 258)		{
HXLINE( 258)			::Dynamic this1 = this->_methods;
HXDLIN( 258)			( ( ::openfl::_Vector::ObjectVector)(this1) )->push( ::away3d::materials::methods::MethodVOSet_obj::__alloc( HX_CTX ,method));
            		}
HXLINE( 259)		method->addEventListener(HX_("ShaderInvalidated",44,03,b9,4d),this->onShaderInvalidated_dyn(),null(),null(),null());
HXLINE( 260)		this->invalidateShaderProgram();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderMethodSetup_obj,addMethod,(void))

bool ShaderMethodSetup_obj::hasMethod( ::away3d::materials::methods::EffectMethodBase method){
            	HX_STACKFRAME(&_hx_pos_a2ba3724ba392a62_271_hasMethod)
HXDLIN( 271)		return ::hx::IsNotNull( this->getMethodSetForMethod(method) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderMethodSetup_obj,hasMethod,return )

void ShaderMethodSetup_obj::addMethodAt( ::away3d::materials::methods::EffectMethodBase method,int index){
            	HX_GC_STACKFRAME(&_hx_pos_a2ba3724ba392a62_280_addMethodAt)
HXLINE( 281)		{
HXLINE( 281)			::Dynamic this1 = this->_methods;
HXDLIN( 281)			( ( ::openfl::_Vector::ObjectVector)(this1) )->insertAt(index, ::away3d::materials::methods::MethodVOSet_obj::__alloc( HX_CTX ,method));
            		}
HXLINE( 282)		method->addEventListener(HX_("ShaderInvalidated",44,03,b9,4d),this->onShaderInvalidated_dyn(),null(),null(),null());
HXLINE( 283)		this->invalidateShaderProgram();
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShaderMethodSetup_obj,addMethodAt,(void))

 ::away3d::materials::methods::EffectMethodBase ShaderMethodSetup_obj::getMethodAt(int index){
            	HX_STACKFRAME(&_hx_pos_a2ba3724ba392a62_292_getMethodAt)
HXLINE( 293)		if ((index > (this->_methods->get_length() - 1))) {
HXLINE( 294)			return null();
            		}
HXLINE( 296)		return this->_methods->get(index).StaticCast<  ::away3d::materials::methods::MethodVOSet >()->method;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderMethodSetup_obj,getMethodAt,return )

int ShaderMethodSetup_obj::get_numMethods(){
            	HX_STACKFRAME(&_hx_pos_a2ba3724ba392a62_304_get_numMethods)
HXDLIN( 304)		return this->_methods->get_length();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderMethodSetup_obj,get_numMethods,return )

void ShaderMethodSetup_obj::removeMethod( ::away3d::materials::methods::EffectMethodBase method){
            	HX_STACKFRAME(&_hx_pos_a2ba3724ba392a62_312_removeMethod)
HXLINE( 313)		 ::away3d::materials::methods::MethodVOSet methodSet = this->getMethodSetForMethod(method);
HXLINE( 314)		if (::hx::IsNotNull( methodSet )) {
HXLINE( 315)			int index = this->_methods->indexOf(methodSet,0);
HXLINE( 316)			this->_methods->splice(index,1);
HXLINE( 317)			method->removeEventListener(HX_("ShaderInvalidated",44,03,b9,4d),this->onShaderInvalidated_dyn(),null());
HXLINE( 318)			this->invalidateShaderProgram();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderMethodSetup_obj,removeMethod,(void))

 ::away3d::materials::methods::MethodVOSet ShaderMethodSetup_obj::getMethodSetForMethod( ::away3d::materials::methods::EffectMethodBase method){
            	HX_STACKFRAME(&_hx_pos_a2ba3724ba392a62_323_getMethodSetForMethod)
HXLINE( 324)		int len = this->_methods->get_length();
HXLINE( 325)		{
HXLINE( 325)			int _g = 0;
HXDLIN( 325)			int _g1 = len;
HXDLIN( 325)			while((_g < _g1)){
HXLINE( 325)				_g = (_g + 1);
HXDLIN( 325)				int i = (_g - 1);
HXLINE( 326)				if (::hx::IsInstanceEq( this->_methods->get(i).StaticCast<  ::away3d::materials::methods::MethodVOSet >()->method,method )) {
HXLINE( 327)					return this->_methods->get(i).StaticCast<  ::away3d::materials::methods::MethodVOSet >();
            				}
            			}
            		}
HXLINE( 330)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderMethodSetup_obj,getMethodSetForMethod,return )


::hx::ObjectPtr< ShaderMethodSetup_obj > ShaderMethodSetup_obj::__new() {
	::hx::ObjectPtr< ShaderMethodSetup_obj > __this = new ShaderMethodSetup_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ShaderMethodSetup_obj > ShaderMethodSetup_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ShaderMethodSetup_obj *__this = (ShaderMethodSetup_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShaderMethodSetup_obj), true, "away3d.materials.methods.ShaderMethodSetup"));
	*(void **)__this = ShaderMethodSetup_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ShaderMethodSetup_obj::ShaderMethodSetup_obj()
{
}

void ShaderMethodSetup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShaderMethodSetup);
	HX_MARK_MEMBER_NAME(_colorTransformMethod,"_colorTransformMethod");
	HX_MARK_MEMBER_NAME(_colorTransformMethodVO,"_colorTransformMethodVO");
	HX_MARK_MEMBER_NAME(_normalMethod,"_normalMethod");
	HX_MARK_MEMBER_NAME(_normalMethodVO,"_normalMethodVO");
	HX_MARK_MEMBER_NAME(_ambientMethod,"_ambientMethod");
	HX_MARK_MEMBER_NAME(_ambientMethodVO,"_ambientMethodVO");
	HX_MARK_MEMBER_NAME(_shadowMethod,"_shadowMethod");
	HX_MARK_MEMBER_NAME(_shadowMethodVO,"_shadowMethodVO");
	HX_MARK_MEMBER_NAME(_diffuseMethod,"_diffuseMethod");
	HX_MARK_MEMBER_NAME(_diffuseMethodVO,"_diffuseMethodVO");
	HX_MARK_MEMBER_NAME(_specularMethod,"_specularMethod");
	HX_MARK_MEMBER_NAME(_specularMethodVO,"_specularMethodVO");
	HX_MARK_MEMBER_NAME(_methods,"_methods");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ShaderMethodSetup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_colorTransformMethod,"_colorTransformMethod");
	HX_VISIT_MEMBER_NAME(_colorTransformMethodVO,"_colorTransformMethodVO");
	HX_VISIT_MEMBER_NAME(_normalMethod,"_normalMethod");
	HX_VISIT_MEMBER_NAME(_normalMethodVO,"_normalMethodVO");
	HX_VISIT_MEMBER_NAME(_ambientMethod,"_ambientMethod");
	HX_VISIT_MEMBER_NAME(_ambientMethodVO,"_ambientMethodVO");
	HX_VISIT_MEMBER_NAME(_shadowMethod,"_shadowMethod");
	HX_VISIT_MEMBER_NAME(_shadowMethodVO,"_shadowMethodVO");
	HX_VISIT_MEMBER_NAME(_diffuseMethod,"_diffuseMethod");
	HX_VISIT_MEMBER_NAME(_diffuseMethodVO,"_diffuseMethodVO");
	HX_VISIT_MEMBER_NAME(_specularMethod,"_specularMethod");
	HX_VISIT_MEMBER_NAME(_specularMethodVO,"_specularMethodVO");
	HX_VISIT_MEMBER_NAME(_methods,"_methods");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ShaderMethodSetup_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_methods") ) { return ::hx::Val( _methods ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addMethod") ) { return ::hx::Val( addMethod_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasMethod") ) { return ::hx::Val( hasMethod_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"numMethods") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numMethods() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addMethodAt") ) { return ::hx::Val( addMethodAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"getMethodAt") ) { return ::hx::Val( getMethodAt_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"normalMethod") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_normalMethod() ); }
		if (HX_FIELD_EQ(inName,"shadowMethod") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_shadowMethod() ); }
		if (HX_FIELD_EQ(inName,"removeMethod") ) { return ::hx::Val( removeMethod_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ambientMethod") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_ambientMethod() ); }
		if (HX_FIELD_EQ(inName,"diffuseMethod") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_diffuseMethod() ); }
		if (HX_FIELD_EQ(inName,"_normalMethod") ) { return ::hx::Val( _normalMethod ); }
		if (HX_FIELD_EQ(inName,"_shadowMethod") ) { return ::hx::Val( _shadowMethod ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"specularMethod") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_specularMethod() ); }
		if (HX_FIELD_EQ(inName,"_ambientMethod") ) { return ::hx::Val( _ambientMethod ); }
		if (HX_FIELD_EQ(inName,"_diffuseMethod") ) { return ::hx::Val( _diffuseMethod ); }
		if (HX_FIELD_EQ(inName,"clearListeners") ) { return ::hx::Val( clearListeners_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numMethods") ) { return ::hx::Val( get_numMethods_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_normalMethodVO") ) { return ::hx::Val( _normalMethodVO ); }
		if (HX_FIELD_EQ(inName,"_shadowMethodVO") ) { return ::hx::Val( _shadowMethodVO ); }
		if (HX_FIELD_EQ(inName,"_specularMethod") ) { return ::hx::Val( _specularMethod ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_ambientMethodVO") ) { return ::hx::Val( _ambientMethodVO ); }
		if (HX_FIELD_EQ(inName,"_diffuseMethodVO") ) { return ::hx::Val( _diffuseMethodVO ); }
		if (HX_FIELD_EQ(inName,"get_normalMethod") ) { return ::hx::Val( get_normalMethod_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_normalMethod") ) { return ::hx::Val( set_normalMethod_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_shadowMethod") ) { return ::hx::Val( get_shadowMethod_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_shadowMethod") ) { return ::hx::Val( set_shadowMethod_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_specularMethodVO") ) { return ::hx::Val( _specularMethodVO ); }
		if (HX_FIELD_EQ(inName,"get_ambientMethod") ) { return ::hx::Val( get_ambientMethod_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_ambientMethod") ) { return ::hx::Val( set_ambientMethod_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_diffuseMethod") ) { return ::hx::Val( get_diffuseMethod_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_diffuseMethod") ) { return ::hx::Val( set_diffuseMethod_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_specularMethod") ) { return ::hx::Val( get_specularMethod_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_specularMethod") ) { return ::hx::Val( set_specularMethod_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onShaderInvalidated") ) { return ::hx::Val( onShaderInvalidated_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"colorTransformMethod") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_colorTransformMethod() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_colorTransformMethod") ) { return ::hx::Val( _colorTransformMethod ); }
		if (HX_FIELD_EQ(inName,"getMethodSetForMethod") ) { return ::hx::Val( getMethodSetForMethod_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_colorTransformMethodVO") ) { return ::hx::Val( _colorTransformMethodVO ); }
		if (HX_FIELD_EQ(inName,"invalidateShaderProgram") ) { return ::hx::Val( invalidateShaderProgram_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_colorTransformMethod") ) { return ::hx::Val( get_colorTransformMethod_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_colorTransformMethod") ) { return ::hx::Val( set_colorTransformMethod_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ShaderMethodSetup_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_methods") ) { _methods=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"normalMethod") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_normalMethod(inValue.Cast<  ::away3d::materials::methods::BasicNormalMethod >()) ); }
		if (HX_FIELD_EQ(inName,"shadowMethod") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_shadowMethod(inValue.Cast<  ::away3d::materials::methods::ShadowMapMethodBase >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ambientMethod") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_ambientMethod(inValue.Cast<  ::away3d::materials::methods::BasicAmbientMethod >()) ); }
		if (HX_FIELD_EQ(inName,"diffuseMethod") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_diffuseMethod(inValue.Cast<  ::away3d::materials::methods::BasicDiffuseMethod >()) ); }
		if (HX_FIELD_EQ(inName,"_normalMethod") ) { _normalMethod=inValue.Cast<  ::away3d::materials::methods::BasicNormalMethod >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_shadowMethod") ) { _shadowMethod=inValue.Cast<  ::away3d::materials::methods::ShadowMapMethodBase >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"specularMethod") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_specularMethod(inValue.Cast<  ::away3d::materials::methods::BasicSpecularMethod >()) ); }
		if (HX_FIELD_EQ(inName,"_ambientMethod") ) { _ambientMethod=inValue.Cast<  ::away3d::materials::methods::BasicAmbientMethod >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_diffuseMethod") ) { _diffuseMethod=inValue.Cast<  ::away3d::materials::methods::BasicDiffuseMethod >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_normalMethodVO") ) { _normalMethodVO=inValue.Cast<  ::away3d::materials::methods::MethodVO >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_shadowMethodVO") ) { _shadowMethodVO=inValue.Cast<  ::away3d::materials::methods::MethodVO >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_specularMethod") ) { _specularMethod=inValue.Cast<  ::away3d::materials::methods::BasicSpecularMethod >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_ambientMethodVO") ) { _ambientMethodVO=inValue.Cast<  ::away3d::materials::methods::MethodVO >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_diffuseMethodVO") ) { _diffuseMethodVO=inValue.Cast<  ::away3d::materials::methods::MethodVO >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_specularMethodVO") ) { _specularMethodVO=inValue.Cast<  ::away3d::materials::methods::MethodVO >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"colorTransformMethod") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_colorTransformMethod(inValue.Cast<  ::away3d::materials::methods::ColorTransformMethod >()) ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_colorTransformMethod") ) { _colorTransformMethod=inValue.Cast<  ::away3d::materials::methods::ColorTransformMethod >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_colorTransformMethodVO") ) { _colorTransformMethodVO=inValue.Cast<  ::away3d::materials::methods::MethodVO >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShaderMethodSetup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("normalMethod",68,74,bf,07));
	outFields->push(HX_("ambientMethod",19,25,b6,82));
	outFields->push(HX_("shadowMethod",e1,5a,27,85));
	outFields->push(HX_("diffuseMethod",e3,01,e5,ec));
	outFields->push(HX_("specularMethod",04,b6,19,0d));
	outFields->push(HX_("colorTransformMethod",4a,0f,27,ac));
	outFields->push(HX_("numMethods",cc,4c,5d,56));
	outFields->push(HX_("_colorTransformMethod",29,19,c2,1a));
	outFields->push(HX_("_colorTransformMethodVO",a2,c0,59,e2));
	outFields->push(HX_("_normalMethod",47,07,2e,ea));
	outFields->push(HX_("_normalMethodVO",40,f2,33,57));
	outFields->push(HX_("_ambientMethod",5a,15,08,c1));
	outFields->push(HX_("_ambientMethodVO",13,eb,3b,23));
	outFields->push(HX_("_shadowMethod",c0,ed,95,67));
	outFields->push(HX_("_shadowMethodVO",f9,28,3d,eb));
	outFields->push(HX_("_diffuseMethod",24,f2,36,2b));
	outFields->push(HX_("_diffuseMethodVO",5d,0e,73,9c));
	outFields->push(HX_("_specularMethod",a3,fe,79,56));
	outFields->push(HX_("_specularMethodVO",9c,78,f1,67));
	outFields->push(HX_("_methods",f3,67,f5,5f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ShaderMethodSetup_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::away3d::materials::methods::ColorTransformMethod */ ,(int)offsetof(ShaderMethodSetup_obj,_colorTransformMethod),HX_("_colorTransformMethod",29,19,c2,1a)},
	{::hx::fsObject /*  ::away3d::materials::methods::MethodVO */ ,(int)offsetof(ShaderMethodSetup_obj,_colorTransformMethodVO),HX_("_colorTransformMethodVO",a2,c0,59,e2)},
	{::hx::fsObject /*  ::away3d::materials::methods::BasicNormalMethod */ ,(int)offsetof(ShaderMethodSetup_obj,_normalMethod),HX_("_normalMethod",47,07,2e,ea)},
	{::hx::fsObject /*  ::away3d::materials::methods::MethodVO */ ,(int)offsetof(ShaderMethodSetup_obj,_normalMethodVO),HX_("_normalMethodVO",40,f2,33,57)},
	{::hx::fsObject /*  ::away3d::materials::methods::BasicAmbientMethod */ ,(int)offsetof(ShaderMethodSetup_obj,_ambientMethod),HX_("_ambientMethod",5a,15,08,c1)},
	{::hx::fsObject /*  ::away3d::materials::methods::MethodVO */ ,(int)offsetof(ShaderMethodSetup_obj,_ambientMethodVO),HX_("_ambientMethodVO",13,eb,3b,23)},
	{::hx::fsObject /*  ::away3d::materials::methods::ShadowMapMethodBase */ ,(int)offsetof(ShaderMethodSetup_obj,_shadowMethod),HX_("_shadowMethod",c0,ed,95,67)},
	{::hx::fsObject /*  ::away3d::materials::methods::MethodVO */ ,(int)offsetof(ShaderMethodSetup_obj,_shadowMethodVO),HX_("_shadowMethodVO",f9,28,3d,eb)},
	{::hx::fsObject /*  ::away3d::materials::methods::BasicDiffuseMethod */ ,(int)offsetof(ShaderMethodSetup_obj,_diffuseMethod),HX_("_diffuseMethod",24,f2,36,2b)},
	{::hx::fsObject /*  ::away3d::materials::methods::MethodVO */ ,(int)offsetof(ShaderMethodSetup_obj,_diffuseMethodVO),HX_("_diffuseMethodVO",5d,0e,73,9c)},
	{::hx::fsObject /*  ::away3d::materials::methods::BasicSpecularMethod */ ,(int)offsetof(ShaderMethodSetup_obj,_specularMethod),HX_("_specularMethod",a3,fe,79,56)},
	{::hx::fsObject /*  ::away3d::materials::methods::MethodVO */ ,(int)offsetof(ShaderMethodSetup_obj,_specularMethodVO),HX_("_specularMethodVO",9c,78,f1,67)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(ShaderMethodSetup_obj,_methods),HX_("_methods",f3,67,f5,5f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ShaderMethodSetup_obj_sStaticStorageInfo = 0;
#endif

static ::String ShaderMethodSetup_obj_sMemberFields[] = {
	HX_("_colorTransformMethod",29,19,c2,1a),
	HX_("_colorTransformMethodVO",a2,c0,59,e2),
	HX_("_normalMethod",47,07,2e,ea),
	HX_("_normalMethodVO",40,f2,33,57),
	HX_("_ambientMethod",5a,15,08,c1),
	HX_("_ambientMethodVO",13,eb,3b,23),
	HX_("_shadowMethod",c0,ed,95,67),
	HX_("_shadowMethodVO",f9,28,3d,eb),
	HX_("_diffuseMethod",24,f2,36,2b),
	HX_("_diffuseMethodVO",5d,0e,73,9c),
	HX_("_specularMethod",a3,fe,79,56),
	HX_("_specularMethodVO",9c,78,f1,67),
	HX_("_methods",f3,67,f5,5f),
	HX_("onShaderInvalidated",45,6f,55,65),
	HX_("invalidateShaderProgram",64,b7,8b,f4),
	HX_("get_normalMethod",f1,60,5e,0c),
	HX_("set_normalMethod",65,4e,a0,62),
	HX_("get_ambientMethod",70,30,26,89),
	HX_("set_ambientMethod",7c,08,94,ac),
	HX_("get_shadowMethod",6a,47,c6,89),
	HX_("set_shadowMethod",de,34,08,e0),
	HX_("get_diffuseMethod",3a,0d,55,f3),
	HX_("set_diffuseMethod",46,e5,c2,16),
	HX_("get_specularMethod",cd,96,b3,a8),
	HX_("set_specularMethod",41,c9,62,85),
	HX_("get_colorTransformMethod",d3,2c,c3,ee),
	HX_("set_colorTransformMethod",47,ae,9d,01),
	HX_("dispose",9f,80,4c,bb),
	HX_("clearListeners",32,ba,93,b1),
	HX_("addMethod",e2,2b,7f,c1),
	HX_("hasMethod",db,a9,43,4a),
	HX_("addMethodAt",75,a1,8b,80),
	HX_("getMethodAt",ea,2c,23,75),
	HX_("get_numMethods",15,d5,52,cc),
	HX_("removeMethod",45,92,88,78),
	HX_("getMethodSetForMethod",7f,71,2c,d6),
	::String(null()) };

::hx::Class ShaderMethodSetup_obj::__mClass;

void ShaderMethodSetup_obj::__register()
{
	ShaderMethodSetup_obj _hx_dummy;
	ShaderMethodSetup_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.materials.methods.ShaderMethodSetup",6a,5a,fe,78);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ShaderMethodSetup_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ShaderMethodSetup_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShaderMethodSetup_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShaderMethodSetup_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace materials
} // end namespace methods
