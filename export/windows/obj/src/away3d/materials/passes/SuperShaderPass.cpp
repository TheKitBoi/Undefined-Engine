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
#ifndef INCLUDED_away3d_lights_DirectionalLight
#include <away3d/lights/DirectionalLight.h>
#endif
#ifndef INCLUDED_away3d_lights_LightBase
#include <away3d/lights/LightBase.h>
#endif
#ifndef INCLUDED_away3d_lights_LightProbe
#include <away3d/lights/LightProbe.h>
#endif
#ifndef INCLUDED_away3d_lights_PointLight
#include <away3d/lights/PointLight.h>
#endif
#ifndef INCLUDED_away3d_materials_MaterialBase
#include <away3d/materials/MaterialBase.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderCompiler
#include <away3d/materials/compilation/ShaderCompiler.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_SuperShaderCompiler
#include <away3d/materials/compilation/SuperShaderCompiler.h>
#endif
#ifndef INCLUDED_away3d_materials_lightpickers_LightPickerBase
#include <away3d/materials/lightpickers/LightPickerBase.h>
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
#ifndef INCLUDED_away3d_materials_passes_CompiledPass
#include <away3d/materials/passes/CompiledPass.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_MaterialPassBase
#include <away3d/materials/passes/MaterialPassBase.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_SuperShaderPass
#include <away3d/materials/passes/SuperShaderPass.h>
#endif
#ifndef INCLUDED_away3d_textures_CubeTextureBase
#include <away3d/textures/CubeTextureBase.h>
#endif
#ifndef INCLUDED_away3d_textures_TextureProxyBase
#include <away3d/textures/TextureProxyBase.h>
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
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
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
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_94fa82ce04623426_27_new,"away3d.materials.passes.SuperShaderPass","new",0x4ec5bd25,"away3d.materials.passes.SuperShaderPass.new","away3d/materials/passes/SuperShaderPass.hx",27,0x0f047aaa)
HX_LOCAL_STACK_FRAME(_hx_pos_94fa82ce04623426_48_createCompiler,"away3d.materials.passes.SuperShaderPass","createCompiler",0xb6990e16,"away3d.materials.passes.SuperShaderPass.createCompiler","away3d/materials/passes/SuperShaderPass.hx",48,0x0f047aaa)
HX_LOCAL_STACK_FRAME(_hx_pos_94fa82ce04623426_58_get_includeCasters,"away3d.materials.passes.SuperShaderPass","get_includeCasters",0x86f24263,"away3d.materials.passes.SuperShaderPass.get_includeCasters","away3d/materials/passes/SuperShaderPass.hx",58,0x0f047aaa)
HX_LOCAL_STACK_FRAME(_hx_pos_94fa82ce04623426_62_set_includeCasters,"away3d.materials.passes.SuperShaderPass","set_includeCasters",0x63a174d7,"away3d.materials.passes.SuperShaderPass.set_includeCasters","away3d/materials/passes/SuperShaderPass.hx",62,0x0f047aaa)
HX_LOCAL_STACK_FRAME(_hx_pos_94fa82ce04623426_77_get_colorTransform,"away3d.materials.passes.SuperShaderPass","get_colorTransform",0x8f80f12d,"away3d.materials.passes.SuperShaderPass.get_colorTransform","away3d/materials/passes/SuperShaderPass.hx",77,0x0f047aaa)
HX_LOCAL_STACK_FRAME(_hx_pos_94fa82ce04623426_81_set_colorTransform,"away3d.materials.passes.SuperShaderPass","set_colorTransform",0x6c3023a1,"away3d.materials.passes.SuperShaderPass.set_colorTransform","away3d/materials/passes/SuperShaderPass.hx",81,0x0f047aaa)
HX_LOCAL_STACK_FRAME(_hx_pos_94fa82ce04623426_100_get_colorTransformMethod,"away3d.materials.passes.SuperShaderPass","get_colorTransformMethod",0x7180fbee,"away3d.materials.passes.SuperShaderPass.get_colorTransformMethod","away3d/materials/passes/SuperShaderPass.hx",100,0x0f047aaa)
HX_LOCAL_STACK_FRAME(_hx_pos_94fa82ce04623426_104_set_colorTransformMethod,"away3d.materials.passes.SuperShaderPass","set_colorTransformMethod",0x845b7d62,"away3d.materials.passes.SuperShaderPass.set_colorTransformMethod","away3d/materials/passes/SuperShaderPass.hx",104,0x0f047aaa)
HX_LOCAL_STACK_FRAME(_hx_pos_94fa82ce04623426_116_addMethod,"away3d.materials.passes.SuperShaderPass","addMethod",0xc42e7a67,"away3d.materials.passes.SuperShaderPass.addMethod","away3d/materials/passes/SuperShaderPass.hx",116,0x0f047aaa)
HX_LOCAL_STACK_FRAME(_hx_pos_94fa82ce04623426_126_get_numMethods,"away3d.materials.passes.SuperShaderPass","get_numMethods",0xb2dfc470,"away3d.materials.passes.SuperShaderPass.get_numMethods","away3d/materials/passes/SuperShaderPass.hx",126,0x0f047aaa)
HX_LOCAL_STACK_FRAME(_hx_pos_94fa82ce04623426_137_hasMethod,"away3d.materials.passes.SuperShaderPass","hasMethod",0x4cf2f860,"away3d.materials.passes.SuperShaderPass.hasMethod","away3d/materials/passes/SuperShaderPass.hx",137,0x0f047aaa)
HX_LOCAL_STACK_FRAME(_hx_pos_94fa82ce04623426_147_getMethodAt,"away3d.materials.passes.SuperShaderPass","getMethodAt",0xfd26e6af,"away3d.materials.passes.SuperShaderPass.getMethodAt","away3d/materials/passes/SuperShaderPass.hx",147,0x0f047aaa)
HX_LOCAL_STACK_FRAME(_hx_pos_94fa82ce04623426_157_addMethodAt,"away3d.materials.passes.SuperShaderPass","addMethodAt",0x088f5b3a,"away3d.materials.passes.SuperShaderPass.addMethodAt","away3d/materials/passes/SuperShaderPass.hx",157,0x0f047aaa)
HX_LOCAL_STACK_FRAME(_hx_pos_94fa82ce04623426_166_removeMethod,"away3d.materials.passes.SuperShaderPass","removeMethod",0xf3c764e0,"away3d.materials.passes.SuperShaderPass.removeMethod","away3d/materials/passes/SuperShaderPass.hx",166,0x0f047aaa)
HX_LOCAL_STACK_FRAME(_hx_pos_94fa82ce04623426_173_updateLights,"away3d.materials.passes.SuperShaderPass","updateLights",0x6304a461,"away3d.materials.passes.SuperShaderPass.updateLights","away3d/materials/passes/SuperShaderPass.hx",173,0x0f047aaa)
HX_LOCAL_STACK_FRAME(_hx_pos_94fa82ce04623426_196_activate,"away3d.materials.passes.SuperShaderPass","activate",0x9b10c4ce,"away3d.materials.passes.SuperShaderPass.activate","away3d/materials/passes/SuperShaderPass.hx",196,0x0f047aaa)
HX_LOCAL_STACK_FRAME(_hx_pos_94fa82ce04623426_221_deactivate,"away3d.materials.passes.SuperShaderPass","deactivate",0x92b6c20f,"away3d.materials.passes.SuperShaderPass.deactivate","away3d/materials/passes/SuperShaderPass.hx",221,0x0f047aaa)
HX_LOCAL_STACK_FRAME(_hx_pos_94fa82ce04623426_240_addPassesFromMethods,"away3d.materials.passes.SuperShaderPass","addPassesFromMethods",0x14c93723,"away3d.materials.passes.SuperShaderPass.addPassesFromMethods","away3d/materials/passes/SuperShaderPass.hx",240,0x0f047aaa)
HX_LOCAL_STACK_FRAME(_hx_pos_94fa82ce04623426_256_usesProbesForSpecular,"away3d.materials.passes.SuperShaderPass","usesProbesForSpecular",0x6ac89e82,"away3d.materials.passes.SuperShaderPass.usesProbesForSpecular","away3d/materials/passes/SuperShaderPass.hx",256,0x0f047aaa)
HX_LOCAL_STACK_FRAME(_hx_pos_94fa82ce04623426_264_usesProbesForDiffuse,"away3d.materials.passes.SuperShaderPass","usesProbesForDiffuse",0xe1119683,"away3d.materials.passes.SuperShaderPass.usesProbesForDiffuse","away3d/materials/passes/SuperShaderPass.hx",264,0x0f047aaa)
HX_LOCAL_STACK_FRAME(_hx_pos_94fa82ce04623426_271_updateMethodConstants,"away3d.materials.passes.SuperShaderPass","updateMethodConstants",0xe014316a,"away3d.materials.passes.SuperShaderPass.updateMethodConstants","away3d/materials/passes/SuperShaderPass.hx",271,0x0f047aaa)
HX_LOCAL_STACK_FRAME(_hx_pos_94fa82ce04623426_286_updateLightConstants,"away3d.materials.passes.SuperShaderPass","updateLightConstants",0xbf8d985d,"away3d.materials.passes.SuperShaderPass.updateLightConstants","away3d/materials/passes/SuperShaderPass.hx",286,0x0f047aaa)
HX_LOCAL_STACK_FRAME(_hx_pos_94fa82ce04623426_378_updateProbes,"away3d.materials.passes.SuperShaderPass","updateProbes",0x305268c7,"away3d.materials.passes.SuperShaderPass.updateProbes","away3d/materials/passes/SuperShaderPass.hx",378,0x0f047aaa)
HX_LOCAL_STACK_FRAME(_hx_pos_94fa82ce04623426_412_set_ignoreLights,"away3d.materials.passes.SuperShaderPass","set_ignoreLights",0x96bf07a7,"away3d.materials.passes.SuperShaderPass.set_ignoreLights","away3d/materials/passes/SuperShaderPass.hx",412,0x0f047aaa)
HX_LOCAL_STACK_FRAME(_hx_pos_94fa82ce04623426_419_get_ignoreLights,"away3d.materials.passes.SuperShaderPass","get_ignoreLights",0x407d1a33,"away3d.materials.passes.SuperShaderPass.get_ignoreLights","away3d/materials/passes/SuperShaderPass.hx",419,0x0f047aaa)
namespace away3d{
namespace materials{
namespace passes{

void SuperShaderPass_obj::__construct( ::away3d::materials::MaterialBase material){
            	HX_STACKFRAME(&_hx_pos_94fa82ce04623426_27_new)
HXLINE(  29)		this->_includeCasters = true;
HXLINE(  39)		super::__construct(material);
HXLINE(  40)		this->_needFragmentAnimation = true;
            	}

Dynamic SuperShaderPass_obj::__CreateEmpty() { return new SuperShaderPass_obj; }

void *SuperShaderPass_obj::_hx_vtable = 0;

Dynamic SuperShaderPass_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SuperShaderPass_obj > _hx_result = new SuperShaderPass_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SuperShaderPass_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x31c7172e) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x31c7172e;
		}
	} else {
		return inClassId==(int)0x437483a9 || inClassId==(int)0x5a0f1d75;
	}
}

 ::away3d::materials::compilation::ShaderCompiler SuperShaderPass_obj::createCompiler(::String profile){
            	HX_GC_STACKFRAME(&_hx_pos_94fa82ce04623426_48_createCompiler)
HXDLIN(  48)		return  ::away3d::materials::compilation::SuperShaderCompiler_obj::__alloc( HX_CTX ,profile);
            	}


bool SuperShaderPass_obj::get_includeCasters(){
            	HX_STACKFRAME(&_hx_pos_94fa82ce04623426_58_get_includeCasters)
HXDLIN(  58)		return this->_includeCasters;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SuperShaderPass_obj,get_includeCasters,return )

bool SuperShaderPass_obj::set_includeCasters(bool value){
            	HX_STACKFRAME(&_hx_pos_94fa82ce04623426_62_set_includeCasters)
HXLINE(  63)		if ((this->_includeCasters == value)) {
HXLINE(  64)			return value;
            		}
HXLINE(  65)		this->_includeCasters = value;
HXLINE(  66)		this->invalidateShaderProgram(null());
HXLINE(  67)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SuperShaderPass_obj,set_includeCasters,return )

 ::openfl::geom::ColorTransform SuperShaderPass_obj::get_colorTransform(){
            	HX_STACKFRAME(&_hx_pos_94fa82ce04623426_77_get_colorTransform)
HXDLIN(  77)		if (::hx::IsNotNull( this->_methodSetup->get_colorTransformMethod() )) {
HXDLIN(  77)			return this->_methodSetup->_colorTransformMethod->get_colorTransform();
            		}
            		else {
HXDLIN(  77)			return null();
            		}
HXDLIN(  77)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SuperShaderPass_obj,get_colorTransform,return )

 ::openfl::geom::ColorTransform SuperShaderPass_obj::set_colorTransform( ::openfl::geom::ColorTransform value){
            	HX_GC_STACKFRAME(&_hx_pos_94fa82ce04623426_81_set_colorTransform)
HXLINE(  82)		if (::hx::IsNotNull( value )) {
HXLINE(  83)			if (::hx::IsNull( this->get_colorTransformMethod() )) {
HXLINE(  83)				this->set_colorTransformMethod( ::away3d::materials::methods::ColorTransformMethod_obj::__alloc( HX_CTX ));
            			}
HXLINE(  84)			this->_methodSetup->_colorTransformMethod->set_colorTransform(value);
            		}
            		else {
HXLINE(  85)			if (::hx::IsNull( value )) {
HXLINE(  86)				if (::hx::IsNotNull( this->_methodSetup->_colorTransformMethod )) {
HXLINE(  87)					this->set_colorTransformMethod(null());
            				}
HXLINE(  88)				this->set_colorTransformMethod((this->_methodSetup->_colorTransformMethod = null()));
            			}
            		}
HXLINE(  90)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SuperShaderPass_obj,set_colorTransform,return )

 ::away3d::materials::methods::ColorTransformMethod SuperShaderPass_obj::get_colorTransformMethod(){
            	HX_STACKFRAME(&_hx_pos_94fa82ce04623426_100_get_colorTransformMethod)
HXDLIN( 100)		return this->_methodSetup->get_colorTransformMethod();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SuperShaderPass_obj,get_colorTransformMethod,return )

 ::away3d::materials::methods::ColorTransformMethod SuperShaderPass_obj::set_colorTransformMethod( ::away3d::materials::methods::ColorTransformMethod value){
            	HX_STACKFRAME(&_hx_pos_94fa82ce04623426_104_set_colorTransformMethod)
HXLINE( 105)		this->_methodSetup->set_colorTransformMethod(value);
HXLINE( 106)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SuperShaderPass_obj,set_colorTransformMethod,return )

void SuperShaderPass_obj::addMethod( ::away3d::materials::methods::EffectMethodBase method){
            	HX_STACKFRAME(&_hx_pos_94fa82ce04623426_116_addMethod)
HXDLIN( 116)		this->_methodSetup->addMethod(method);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SuperShaderPass_obj,addMethod,(void))

int SuperShaderPass_obj::get_numMethods(){
            	HX_STACKFRAME(&_hx_pos_94fa82ce04623426_126_get_numMethods)
HXDLIN( 126)		return this->_methodSetup->get_numMethods();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SuperShaderPass_obj,get_numMethods,return )

bool SuperShaderPass_obj::hasMethod( ::away3d::materials::methods::EffectMethodBase method){
            	HX_STACKFRAME(&_hx_pos_94fa82ce04623426_137_hasMethod)
HXDLIN( 137)		return this->_methodSetup->hasMethod(method);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SuperShaderPass_obj,hasMethod,return )

 ::away3d::materials::methods::EffectMethodBase SuperShaderPass_obj::getMethodAt(int index){
            	HX_STACKFRAME(&_hx_pos_94fa82ce04623426_147_getMethodAt)
HXDLIN( 147)		return this->_methodSetup->getMethodAt(index);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SuperShaderPass_obj,getMethodAt,return )

void SuperShaderPass_obj::addMethodAt( ::away3d::materials::methods::EffectMethodBase method,int index){
            	HX_STACKFRAME(&_hx_pos_94fa82ce04623426_157_addMethodAt)
HXDLIN( 157)		this->_methodSetup->addMethodAt(method,index);
            	}


HX_DEFINE_DYNAMIC_FUNC2(SuperShaderPass_obj,addMethodAt,(void))

void SuperShaderPass_obj::removeMethod( ::away3d::materials::methods::EffectMethodBase method){
            	HX_STACKFRAME(&_hx_pos_94fa82ce04623426_166_removeMethod)
HXDLIN( 166)		this->_methodSetup->removeMethod(method);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SuperShaderPass_obj,removeMethod,(void))

void SuperShaderPass_obj::updateLights(){
            	HX_STACKFRAME(&_hx_pos_94fa82ce04623426_173_updateLights)
HXLINE( 174)		bool _hx_tmp;
HXDLIN( 174)		if (::hx::IsNotNull( this->_lightPicker )) {
HXLINE( 174)			_hx_tmp = !(this->_ignoreLights);
            		}
            		else {
HXLINE( 174)			_hx_tmp = false;
            		}
HXDLIN( 174)		if (_hx_tmp) {
HXLINE( 175)			this->_numPointLights = this->_lightPicker->get_numPointLights();
HXLINE( 176)			this->_numDirectionalLights = this->_lightPicker->get_numDirectionalLights();
HXLINE( 177)			this->_numLightProbes = this->_lightPicker->get_numLightProbes();
HXLINE( 179)			if (this->_includeCasters) {
HXLINE( 180)				 ::away3d::materials::passes::SuperShaderPass _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 180)				int _hx_tmp1 = _hx_tmp->_numPointLights;
HXDLIN( 180)				_hx_tmp->_numPointLights = (_hx_tmp1 + this->_lightPicker->get_numCastingPointLights());
HXLINE( 181)				 ::away3d::materials::passes::SuperShaderPass _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 181)				int _hx_tmp3 = _hx_tmp2->_numDirectionalLights;
HXDLIN( 181)				_hx_tmp2->_numDirectionalLights = (_hx_tmp3 + this->_lightPicker->get_numCastingDirectionalLights());
            			}
            		}
            		else {
HXLINE( 184)			this->_numPointLights = 0;
HXLINE( 185)			this->_numDirectionalLights = 0;
HXLINE( 186)			this->_numLightProbes = 0;
            		}
HXLINE( 189)		this->invalidateShaderProgram(null());
            	}


void SuperShaderPass_obj::activate( ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera){
            	HX_STACKFRAME(&_hx_pos_94fa82ce04623426_196_activate)
HXLINE( 197)		this->super::activate(stage3DProxy,camera);
HXLINE( 199)		if (::hx::IsNotNull( this->_methodSetup->_colorTransformMethod )) {
HXLINE( 200)			this->_methodSetup->_colorTransformMethod->activate(this->_methodSetup->_colorTransformMethodVO,stage3DProxy);
            		}
HXLINE( 202)		 ::openfl::_Vector::ObjectVector methods = this->_methodSetup->_methods;
HXLINE( 203)		int len = methods->get_length();
HXLINE( 204)		{
HXLINE( 204)			int _g = 0;
HXDLIN( 204)			int _g1 = len;
HXDLIN( 204)			while((_g < _g1)){
HXLINE( 204)				_g = (_g + 1);
HXDLIN( 204)				int i = (_g - 1);
HXLINE( 205)				 ::away3d::materials::methods::MethodVOSet set = methods->get(i).StaticCast<  ::away3d::materials::methods::MethodVOSet >();
HXLINE( 206)				set->method->activate(set->data,stage3DProxy);
            			}
            		}
HXLINE( 209)		if ((this->_cameraPositionIndex >= 0)) {
HXLINE( 210)			 ::openfl::geom::Vector3D pos = camera->get_scenePosition();
HXLINE( 211)			this->_vertexConstantData->set(this->_cameraPositionIndex,pos->x);
HXLINE( 212)			this->_vertexConstantData->set((this->_cameraPositionIndex + 1),pos->y);
HXLINE( 213)			this->_vertexConstantData->set((this->_cameraPositionIndex + 2),pos->z);
            		}
            	}


void SuperShaderPass_obj::deactivate( ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_94fa82ce04623426_221_deactivate)
HXLINE( 222)		this->super::deactivate(stage3DProxy);
HXLINE( 224)		if (::hx::IsNotNull( this->_methodSetup->_colorTransformMethod )) {
HXLINE( 225)			this->_methodSetup->_colorTransformMethod->deactivate(this->_methodSetup->_colorTransformMethodVO,stage3DProxy);
            		}
HXLINE( 227)		 ::away3d::materials::methods::MethodVOSet set;
HXLINE( 228)		 ::openfl::_Vector::ObjectVector methods = this->_methodSetup->_methods;
HXLINE( 229)		int len = methods->get_length();
HXLINE( 230)		{
HXLINE( 230)			int _g = 0;
HXDLIN( 230)			int _g1 = len;
HXDLIN( 230)			while((_g < _g1)){
HXLINE( 230)				_g = (_g + 1);
HXDLIN( 230)				int i = (_g - 1);
HXLINE( 231)				set = methods->get(i).StaticCast<  ::away3d::materials::methods::MethodVOSet >();
HXLINE( 232)				set->method->deactivate(set->data,stage3DProxy);
            			}
            		}
            	}


void SuperShaderPass_obj::addPassesFromMethods(){
            	HX_STACKFRAME(&_hx_pos_94fa82ce04623426_240_addPassesFromMethods)
HXLINE( 241)		this->super::addPassesFromMethods();
HXLINE( 243)		if (::hx::IsNotNull( this->_methodSetup->_colorTransformMethod )) {
HXLINE( 244)			this->addPasses(this->_methodSetup->_colorTransformMethod->get_passes());
            		}
HXLINE( 246)		 ::openfl::_Vector::ObjectVector methods = this->_methodSetup->_methods;
HXLINE( 247)		{
HXLINE( 247)			int _g = 0;
HXDLIN( 247)			int _g1 = methods->get_length();
HXDLIN( 247)			while((_g < _g1)){
HXLINE( 247)				_g = (_g + 1);
HXDLIN( 247)				int i = (_g - 1);
HXLINE( 248)				this->addPasses(methods->get(i).StaticCast<  ::away3d::materials::methods::MethodVOSet >()->method->get_passes());
            			}
            		}
            	}


bool SuperShaderPass_obj::usesProbesForSpecular(){
            	HX_STACKFRAME(&_hx_pos_94fa82ce04623426_256_usesProbesForSpecular)
HXDLIN( 256)		if ((this->_numLightProbes > 0)) {
HXDLIN( 256)			return ((this->_specularLightSources & 2) != 0);
            		}
            		else {
HXDLIN( 256)			return false;
            		}
HXDLIN( 256)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SuperShaderPass_obj,usesProbesForSpecular,return )

bool SuperShaderPass_obj::usesProbesForDiffuse(){
            	HX_STACKFRAME(&_hx_pos_94fa82ce04623426_264_usesProbesForDiffuse)
HXDLIN( 264)		if ((this->_numLightProbes > 0)) {
HXDLIN( 264)			return ((this->_diffuseLightSources & 2) != 0);
            		}
            		else {
HXDLIN( 264)			return false;
            		}
HXDLIN( 264)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SuperShaderPass_obj,usesProbesForDiffuse,return )

void SuperShaderPass_obj::updateMethodConstants(){
            	HX_STACKFRAME(&_hx_pos_94fa82ce04623426_271_updateMethodConstants)
HXLINE( 272)		this->super::updateMethodConstants();
HXLINE( 273)		if (::hx::IsNotNull( this->_methodSetup->_colorTransformMethod )) {
HXLINE( 274)			this->_methodSetup->_colorTransformMethod->initConstants(this->_methodSetup->_colorTransformMethodVO);
            		}
HXLINE( 276)		 ::openfl::_Vector::ObjectVector methods = this->_methodSetup->_methods;
HXLINE( 277)		int len = methods->get_length();
HXLINE( 278)		{
HXLINE( 278)			int _g = 0;
HXDLIN( 278)			int _g1 = len;
HXDLIN( 278)			while((_g < _g1)){
HXLINE( 278)				_g = (_g + 1);
HXDLIN( 278)				int i = (_g - 1);
HXLINE( 279)				 ::away3d::materials::methods::EffectMethodBase _hx_tmp = methods->get(i).StaticCast<  ::away3d::materials::methods::MethodVOSet >()->method;
HXDLIN( 279)				_hx_tmp->initConstants(methods->get(i).StaticCast<  ::away3d::materials::methods::MethodVOSet >()->data);
            			}
            		}
            	}


void SuperShaderPass_obj::updateLightConstants(){
            	HX_STACKFRAME(&_hx_pos_94fa82ce04623426_286_updateLightConstants)
HXLINE( 288)		 ::away3d::lights::DirectionalLight dirLight;
HXLINE( 289)		 ::away3d::lights::PointLight pointLight;
HXLINE( 290)		int i;
HXLINE( 291)		int len;
HXLINE( 292)		 ::openfl::geom::Vector3D dirPos;
HXLINE( 293)		int total = 0;
HXLINE( 294)		int numLightTypes;
HXDLIN( 294)		if (this->_includeCasters) {
HXLINE( 294)			numLightTypes = 2;
            		}
            		else {
HXLINE( 294)			numLightTypes = 1;
            		}
HXLINE( 290)		int k = this->_lightFragmentConstantIndex;
HXLINE( 298)		{
HXLINE( 298)			int _g = 0;
HXDLIN( 298)			int _g1 = numLightTypes;
HXDLIN( 298)			while((_g < _g1)){
HXLINE( 298)				_g = (_g + 1);
HXDLIN( 298)				int caster = (_g - 1);
HXLINE( 299)				 ::openfl::_Vector::ObjectVector dirLights;
HXDLIN( 299)				if ((caster != 0)) {
HXLINE( 299)					dirLights = this->_lightPicker->get_castingDirectionalLights();
            				}
            				else {
HXLINE( 299)					dirLights = this->_lightPicker->get_directionalLights();
            				}
HXLINE( 300)				len = dirLights->get_length();
HXLINE( 301)				total = (total + len);
HXLINE( 303)				{
HXLINE( 303)					int _g1 = 0;
HXDLIN( 303)					int _g2 = len;
HXDLIN( 303)					while((_g1 < _g2)){
HXLINE( 303)						_g1 = (_g1 + 1);
HXDLIN( 303)						int i = (_g1 - 1);
HXLINE( 304)						dirLight = dirLights->get(i).StaticCast<  ::away3d::lights::DirectionalLight >();
HXLINE( 305)						dirPos = dirLight->get_sceneDirection();
HXLINE( 307)						 ::away3d::materials::passes::SuperShaderPass _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 307)						_hx_tmp->_ambientLightR = (_hx_tmp->_ambientLightR + dirLight->_ambientR);
HXLINE( 308)						 ::away3d::materials::passes::SuperShaderPass _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 308)						_hx_tmp1->_ambientLightG = (_hx_tmp1->_ambientLightG + dirLight->_ambientG);
HXLINE( 309)						 ::away3d::materials::passes::SuperShaderPass _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 309)						_hx_tmp2->_ambientLightB = (_hx_tmp2->_ambientLightB + dirLight->_ambientB);
HXLINE( 311)						{
HXLINE( 311)							k = (k + 1);
HXDLIN( 311)							this->_fragmentConstantData->set((k - 1),-(dirPos->x));
            						}
HXLINE( 312)						{
HXLINE( 312)							k = (k + 1);
HXDLIN( 312)							this->_fragmentConstantData->set((k - 1),-(dirPos->y));
            						}
HXLINE( 313)						{
HXLINE( 313)							k = (k + 1);
HXDLIN( 313)							this->_fragmentConstantData->set((k - 1),-(dirPos->z));
            						}
HXLINE( 314)						{
HXLINE( 314)							k = (k + 1);
HXDLIN( 314)							this->_fragmentConstantData->set((k - 1),( (Float)(1) ));
            						}
HXLINE( 316)						{
HXLINE( 316)							k = (k + 1);
HXDLIN( 316)							this->_fragmentConstantData->set((k - 1),dirLight->_diffuseR);
            						}
HXLINE( 317)						{
HXLINE( 317)							k = (k + 1);
HXDLIN( 317)							this->_fragmentConstantData->set((k - 1),dirLight->_diffuseG);
            						}
HXLINE( 318)						{
HXLINE( 318)							k = (k + 1);
HXDLIN( 318)							this->_fragmentConstantData->set((k - 1),dirLight->_diffuseB);
            						}
HXLINE( 319)						{
HXLINE( 319)							k = (k + 1);
HXDLIN( 319)							this->_fragmentConstantData->set((k - 1),( (Float)(1) ));
            						}
HXLINE( 321)						{
HXLINE( 321)							k = (k + 1);
HXDLIN( 321)							this->_fragmentConstantData->set((k - 1),dirLight->_specularR);
            						}
HXLINE( 322)						{
HXLINE( 322)							k = (k + 1);
HXDLIN( 322)							this->_fragmentConstantData->set((k - 1),dirLight->_specularG);
            						}
HXLINE( 323)						{
HXLINE( 323)							k = (k + 1);
HXDLIN( 323)							this->_fragmentConstantData->set((k - 1),dirLight->_specularB);
            						}
HXLINE( 324)						{
HXLINE( 324)							k = (k + 1);
HXDLIN( 324)							this->_fragmentConstantData->set((k - 1),( (Float)(1) ));
            						}
            					}
            				}
            			}
            		}
HXLINE( 329)		if ((this->_numDirectionalLights > total)) {
HXLINE( 330)			i = (k + ((this->_numDirectionalLights - total) * 12));
HXLINE( 331)			while(true){
HXLINE( 331)				bool aNeg = (i < 0);
HXDLIN( 331)				bool bNeg = (k < 0);
HXDLIN( 331)				bool _hx_tmp;
HXDLIN( 331)				if ((aNeg != bNeg)) {
HXLINE( 331)					_hx_tmp = aNeg;
            				}
            				else {
HXLINE( 331)					_hx_tmp = (i > k);
            				}
HXDLIN( 331)				if (!(_hx_tmp)) {
HXLINE( 331)					goto _hx_goto_27;
            				}
HXLINE( 332)				k = (k + 1);
HXDLIN( 332)				this->_fragmentConstantData->set((k - 1),( (Float)(0) ));
            			}
            			_hx_goto_27:;
            		}
HXLINE( 335)		total = 0;
HXLINE( 336)		{
HXLINE( 336)			int _g2 = 0;
HXDLIN( 336)			int _g3 = numLightTypes;
HXDLIN( 336)			while((_g2 < _g3)){
HXLINE( 336)				_g2 = (_g2 + 1);
HXDLIN( 336)				int caster = (_g2 - 1);
HXLINE( 337)				 ::openfl::_Vector::ObjectVector pointLights;
HXDLIN( 337)				if ((caster != 0)) {
HXLINE( 337)					pointLights = this->_lightPicker->get_castingPointLights();
            				}
            				else {
HXLINE( 337)					pointLights = this->_lightPicker->get_pointLights();
            				}
HXLINE( 338)				len = pointLights->get_length();
HXLINE( 339)				{
HXLINE( 339)					int _g = 0;
HXDLIN( 339)					int _g1 = len;
HXDLIN( 339)					while((_g < _g1)){
HXLINE( 339)						_g = (_g + 1);
HXDLIN( 339)						int i = (_g - 1);
HXLINE( 340)						pointLight = pointLights->get(i).StaticCast<  ::away3d::lights::PointLight >();
HXLINE( 341)						dirPos = pointLight->get_scenePosition();
HXLINE( 343)						 ::away3d::materials::passes::SuperShaderPass _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 343)						_hx_tmp->_ambientLightR = (_hx_tmp->_ambientLightR + pointLight->_ambientR);
HXLINE( 344)						 ::away3d::materials::passes::SuperShaderPass _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 344)						_hx_tmp1->_ambientLightG = (_hx_tmp1->_ambientLightG + pointLight->_ambientG);
HXLINE( 345)						 ::away3d::materials::passes::SuperShaderPass _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 345)						_hx_tmp2->_ambientLightB = (_hx_tmp2->_ambientLightB + pointLight->_ambientB);
HXLINE( 347)						{
HXLINE( 347)							k = (k + 1);
HXDLIN( 347)							this->_fragmentConstantData->set((k - 1),dirPos->x);
            						}
HXLINE( 348)						{
HXLINE( 348)							k = (k + 1);
HXDLIN( 348)							this->_fragmentConstantData->set((k - 1),dirPos->y);
            						}
HXLINE( 349)						{
HXLINE( 349)							k = (k + 1);
HXDLIN( 349)							this->_fragmentConstantData->set((k - 1),dirPos->z);
            						}
HXLINE( 350)						{
HXLINE( 350)							k = (k + 1);
HXDLIN( 350)							this->_fragmentConstantData->set((k - 1),( (Float)(1) ));
            						}
HXLINE( 352)						{
HXLINE( 352)							k = (k + 1);
HXDLIN( 352)							this->_fragmentConstantData->set((k - 1),pointLight->_diffuseR);
            						}
HXLINE( 353)						{
HXLINE( 353)							k = (k + 1);
HXDLIN( 353)							this->_fragmentConstantData->set((k - 1),pointLight->_diffuseG);
            						}
HXLINE( 354)						{
HXLINE( 354)							k = (k + 1);
HXDLIN( 354)							this->_fragmentConstantData->set((k - 1),pointLight->_diffuseB);
            						}
HXLINE( 355)						{
HXLINE( 355)							k = (k + 1);
HXDLIN( 355)							this->_fragmentConstantData->set((k - 1),(pointLight->_radius * pointLight->_radius));
            						}
HXLINE( 357)						{
HXLINE( 357)							k = (k + 1);
HXDLIN( 357)							this->_fragmentConstantData->set((k - 1),pointLight->_specularR);
            						}
HXLINE( 358)						{
HXLINE( 358)							k = (k + 1);
HXDLIN( 358)							this->_fragmentConstantData->set((k - 1),pointLight->_specularG);
            						}
HXLINE( 359)						{
HXLINE( 359)							k = (k + 1);
HXDLIN( 359)							this->_fragmentConstantData->set((k - 1),pointLight->_specularB);
            						}
HXLINE( 360)						{
HXLINE( 360)							k = (k + 1);
HXDLIN( 360)							this->_fragmentConstantData->set((k - 1),pointLight->_fallOffFactor);
            						}
            					}
            				}
            			}
            		}
HXLINE( 365)		if ((this->_numPointLights > total)) {
HXLINE( 366)			i = (k + ((total - this->_numPointLights) * 12));
HXLINE( 367)			while(true){
HXLINE( 367)				bool aNeg = (i < 0);
HXDLIN( 367)				bool bNeg = (k < 0);
HXDLIN( 367)				bool _hx_tmp;
HXDLIN( 367)				if ((aNeg != bNeg)) {
HXLINE( 367)					_hx_tmp = aNeg;
            				}
            				else {
HXLINE( 367)					_hx_tmp = (i > k);
            				}
HXDLIN( 367)				if (!(_hx_tmp)) {
HXLINE( 367)					goto _hx_goto_30;
            				}
HXLINE( 368)				this->_fragmentConstantData->set(k,( (Float)(0) ));
HXLINE( 369)				k = (k + 1);
            			}
            			_hx_goto_30:;
            		}
            	}


void SuperShaderPass_obj::updateProbes( ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_94fa82ce04623426_378_updateProbes)
HXLINE( 379)		 ::away3d::lights::LightProbe probe;
HXLINE( 380)		 ::openfl::_Vector::ObjectVector lightProbes = this->_lightPicker->get_lightProbes();
HXLINE( 381)		 ::openfl::_Vector::FloatVector weights = this->_lightPicker->get_lightProbeWeights();
HXLINE( 382)		int len = lightProbes->get_length();
HXLINE( 383)		bool addDiff = this->usesProbesForDiffuse();
HXLINE( 384)		bool addSpec;
HXDLIN( 384)		if (::hx::IsNotNull( this->_methodSetup->_specularMethod )) {
HXLINE( 384)			addSpec = this->usesProbesForSpecular();
            		}
            		else {
HXLINE( 384)			addSpec = false;
            		}
HXLINE( 385)		 ::openfl::display3D::Context3D context = stage3DProxy->_context3D;
HXLINE( 387)		bool _hx_tmp;
HXDLIN( 387)		if (!(addDiff)) {
HXLINE( 387)			_hx_tmp = addSpec;
            		}
            		else {
HXLINE( 387)			_hx_tmp = true;
            		}
HXDLIN( 387)		if (!(_hx_tmp)) {
HXLINE( 388)			return;
            		}
HXLINE( 390)		{
HXLINE( 390)			int _g = 0;
HXDLIN( 390)			int _g1 = len;
HXDLIN( 390)			while((_g < _g1)){
HXLINE( 390)				_g = (_g + 1);
HXDLIN( 390)				int i = (_g - 1);
HXLINE( 391)				probe = lightProbes->get(i).StaticCast<  ::away3d::lights::LightProbe >();
HXLINE( 393)				if (addDiff) {
HXLINE( 394)					int _hx_tmp = this->_lightProbeDiffuseIndices->get(i);
HXDLIN( 394)					context->setTextureAt(_hx_tmp,probe->get_diffuseMap()->getTextureForStage3D(stage3DProxy));
            				}
HXLINE( 395)				if (addSpec) {
HXLINE( 396)					int _hx_tmp = this->_lightProbeSpecularIndices->get(i);
HXDLIN( 396)					context->setTextureAt(_hx_tmp,probe->get_specularMap()->getTextureForStage3D(stage3DProxy));
            				}
            			}
            		}
HXLINE( 399)		{
HXLINE( 399)			::Dynamic this1 = this->_fragmentConstantData;
HXDLIN( 399)			int index = this->_probeWeightsIndex;
HXDLIN( 399)			( ( ::openfl::_Vector::FloatVector)(this1) )->set(index,weights->get(0));
            		}
HXLINE( 400)		{
HXLINE( 400)			::Dynamic this2 = this->_fragmentConstantData;
HXDLIN( 400)			int index1 = (this->_probeWeightsIndex + 1);
HXDLIN( 400)			( ( ::openfl::_Vector::FloatVector)(this2) )->set(index1,weights->get(1));
            		}
HXLINE( 401)		{
HXLINE( 401)			::Dynamic this3 = this->_fragmentConstantData;
HXDLIN( 401)			int index2 = (this->_probeWeightsIndex + 2);
HXDLIN( 401)			( ( ::openfl::_Vector::FloatVector)(this3) )->set(index2,weights->get(2));
            		}
HXLINE( 402)		{
HXLINE( 402)			::Dynamic this4 = this->_fragmentConstantData;
HXDLIN( 402)			int index3 = (this->_probeWeightsIndex + 3);
HXDLIN( 402)			( ( ::openfl::_Vector::FloatVector)(this4) )->set(index3,weights->get(3));
            		}
            	}


bool SuperShaderPass_obj::set_ignoreLights(bool ignoreLights){
            	HX_STACKFRAME(&_hx_pos_94fa82ce04623426_412_set_ignoreLights)
HXLINE( 413)		this->_ignoreLights = ignoreLights;
HXLINE( 414)		return this->_ignoreLights;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SuperShaderPass_obj,set_ignoreLights,return )

bool SuperShaderPass_obj::get_ignoreLights(){
            	HX_STACKFRAME(&_hx_pos_94fa82ce04623426_419_get_ignoreLights)
HXDLIN( 419)		return this->_ignoreLights;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SuperShaderPass_obj,get_ignoreLights,return )


::hx::ObjectPtr< SuperShaderPass_obj > SuperShaderPass_obj::__new( ::away3d::materials::MaterialBase material) {
	::hx::ObjectPtr< SuperShaderPass_obj > __this = new SuperShaderPass_obj();
	__this->__construct(material);
	return __this;
}

::hx::ObjectPtr< SuperShaderPass_obj > SuperShaderPass_obj::__alloc(::hx::Ctx *_hx_ctx, ::away3d::materials::MaterialBase material) {
	SuperShaderPass_obj *__this = (SuperShaderPass_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SuperShaderPass_obj), true, "away3d.materials.passes.SuperShaderPass"));
	*(void **)__this = SuperShaderPass_obj::_hx_vtable;
	__this->__construct(material);
	return __this;
}

SuperShaderPass_obj::SuperShaderPass_obj()
{
}

::hx::Val SuperShaderPass_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"activate") ) { return ::hx::Val( activate_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addMethod") ) { return ::hx::Val( addMethod_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasMethod") ) { return ::hx::Val( hasMethod_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"numMethods") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_numMethods() : numMethods ); }
		if (HX_FIELD_EQ(inName,"deactivate") ) { return ::hx::Val( deactivate_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getMethodAt") ) { return ::hx::Val( getMethodAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"addMethodAt") ) { return ::hx::Val( addMethodAt_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"removeMethod") ) { return ::hx::Val( removeMethod_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateLights") ) { return ::hx::Val( updateLights_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateProbes") ) { return ::hx::Val( updateProbes_dyn() ); }
		if (HX_FIELD_EQ(inName,"ignoreLights") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_ignoreLights() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_ignoreLights") ) { return ::hx::Val( _ignoreLights ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createCompiler") ) { return ::hx::Val( createCompiler_dyn() ); }
		if (HX_FIELD_EQ(inName,"includeCasters") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_includeCasters() ); }
		if (HX_FIELD_EQ(inName,"colorTransform") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_colorTransform() ); }
		if (HX_FIELD_EQ(inName,"get_numMethods") ) { return ::hx::Val( get_numMethods_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_includeCasters") ) { return ::hx::Val( _includeCasters ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_ignoreLights") ) { return ::hx::Val( set_ignoreLights_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_ignoreLights") ) { return ::hx::Val( get_ignoreLights_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_includeCasters") ) { return ::hx::Val( get_includeCasters_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_includeCasters") ) { return ::hx::Val( set_includeCasters_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_colorTransform") ) { return ::hx::Val( get_colorTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_colorTransform") ) { return ::hx::Val( set_colorTransform_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"colorTransformMethod") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_colorTransformMethod() ); }
		if (HX_FIELD_EQ(inName,"addPassesFromMethods") ) { return ::hx::Val( addPassesFromMethods_dyn() ); }
		if (HX_FIELD_EQ(inName,"usesProbesForDiffuse") ) { return ::hx::Val( usesProbesForDiffuse_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateLightConstants") ) { return ::hx::Val( updateLightConstants_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"usesProbesForSpecular") ) { return ::hx::Val( usesProbesForSpecular_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateMethodConstants") ) { return ::hx::Val( updateMethodConstants_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_colorTransformMethod") ) { return ::hx::Val( get_colorTransformMethod_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_colorTransformMethod") ) { return ::hx::Val( set_colorTransformMethod_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SuperShaderPass_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"numMethods") ) { numMethods=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ignoreLights") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_ignoreLights(inValue.Cast< bool >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_ignoreLights") ) { _ignoreLights=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"includeCasters") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_includeCasters(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"colorTransform") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_colorTransform(inValue.Cast<  ::openfl::geom::ColorTransform >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_includeCasters") ) { _includeCasters=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"colorTransformMethod") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_colorTransformMethod(inValue.Cast<  ::away3d::materials::methods::ColorTransformMethod >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SuperShaderPass_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_includeCasters",5e,71,11,ee));
	outFields->push(HX_("_ignoreLights",6e,04,21,c7));
	outFields->push(HX_("includeCasters",bf,28,b1,a4));
	outFields->push(HX_("colorTransform",89,d7,3f,ad));
	outFields->push(HX_("colorTransformMethod",4a,0f,27,ac));
	outFields->push(HX_("numMethods",cc,4c,5d,56));
	outFields->push(HX_("ignoreLights",8f,71,b2,e4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SuperShaderPass_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(SuperShaderPass_obj,_includeCasters),HX_("_includeCasters",5e,71,11,ee)},
	{::hx::fsBool,(int)offsetof(SuperShaderPass_obj,_ignoreLights),HX_("_ignoreLights",6e,04,21,c7)},
	{::hx::fsInt,(int)offsetof(SuperShaderPass_obj,numMethods),HX_("numMethods",cc,4c,5d,56)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SuperShaderPass_obj_sStaticStorageInfo = 0;
#endif

static ::String SuperShaderPass_obj_sMemberFields[] = {
	HX_("_includeCasters",5e,71,11,ee),
	HX_("_ignoreLights",6e,04,21,c7),
	HX_("createCompiler",bb,1e,0c,d0),
	HX_("get_includeCasters",88,09,4b,40),
	HX_("set_includeCasters",fc,3b,fa,1c),
	HX_("get_colorTransform",52,b8,d9,48),
	HX_("set_colorTransform",c6,ea,88,25),
	HX_("get_colorTransformMethod",d3,2c,c3,ee),
	HX_("set_colorTransformMethod",47,ae,9d,01),
	HX_("addMethod",e2,2b,7f,c1),
	HX_("numMethods",cc,4c,5d,56),
	HX_("get_numMethods",15,d5,52,cc),
	HX_("hasMethod",db,a9,43,4a),
	HX_("getMethodAt",ea,2c,23,75),
	HX_("addMethodAt",75,a1,8b,80),
	HX_("removeMethod",45,92,88,78),
	HX_("updateLights",c6,d1,c5,e7),
	HX_("activate",b3,1b,ac,e5),
	HX_("deactivate",34,5c,01,3c),
	HX_("addPassesFromMethods",88,d1,3d,6b),
	HX_("usesProbesForSpecular",7d,1c,5b,ba),
	HX_("usesProbesForDiffuse",e8,30,86,37),
	HX_("updateMethodConstants",65,af,a6,2f),
	HX_("updateLightConstants",c2,32,02,16),
	HX_("updateProbes",2c,96,13,b5),
	HX_("set_ignoreLights",8c,4b,93,3f),
	HX_("get_ignoreLights",18,5e,51,e9),
	::String(null()) };

::hx::Class SuperShaderPass_obj::__mClass;

void SuperShaderPass_obj::__register()
{
	SuperShaderPass_obj _hx_dummy;
	SuperShaderPass_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.materials.passes.SuperShaderPass",b3,46,35,54);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SuperShaderPass_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SuperShaderPass_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SuperShaderPass_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SuperShaderPass_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace materials
} // end namespace passes
