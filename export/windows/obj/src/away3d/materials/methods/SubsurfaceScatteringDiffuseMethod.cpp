#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterCache
#include <away3d/materials/compilation/ShaderRegisterCache.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterData
#include <away3d/materials/compilation/ShaderRegisterData.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterElement
#include <away3d/materials/compilation/ShaderRegisterElement.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_BasicDiffuseMethod
#include <away3d/materials/methods/BasicDiffuseMethod.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_CompositeDiffuseMethod
#include <away3d/materials/methods/CompositeDiffuseMethod.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_LightingMethodBase
#include <away3d/materials/methods/LightingMethodBase.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_MethodVO
#include <away3d/materials/methods/MethodVO.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_ShadingMethodBase
#include <away3d/materials/methods/ShadingMethodBase.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_SubsurfaceScatteringDiffuseMethod
#include <away3d/materials/methods/SubsurfaceScatteringDiffuseMethod.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_MaterialPassBase
#include <away3d/materials/passes/MaterialPassBase.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_SingleObjectDepthPass
#include <away3d/materials/passes/SingleObjectDepthPass.h>
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
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_Texture
#include <openfl/display3D/textures/Texture.h>
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
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0aac5a929853857e_21_new,"away3d.materials.methods.SubsurfaceScatteringDiffuseMethod","new",0xf0635fd7,"away3d.materials.methods.SubsurfaceScatteringDiffuseMethod.new","away3d/materials/methods/SubsurfaceScatteringDiffuseMethod.hx",21,0x0b136e3c)
HX_LOCAL_STACK_FRAME(_hx_pos_0aac5a929853857e_60_initConstants,"away3d.materials.methods.SubsurfaceScatteringDiffuseMethod","initConstants",0x1d876396,"away3d.materials.methods.SubsurfaceScatteringDiffuseMethod.initConstants","away3d/materials/methods/SubsurfaceScatteringDiffuseMethod.hx",60,0x0b136e3c)
HX_LOCAL_STACK_FRAME(_hx_pos_0aac5a929853857e_81_cleanCompilationData,"away3d.materials.methods.SubsurfaceScatteringDiffuseMethod","cleanCompilationData",0x42d0c9ad,"away3d.materials.methods.SubsurfaceScatteringDiffuseMethod.cleanCompilationData","away3d/materials/methods/SubsurfaceScatteringDiffuseMethod.hx",81,0x0b136e3c)
HX_LOCAL_STACK_FRAME(_hx_pos_0aac5a929853857e_98_get_scattering,"away3d.materials.methods.SubsurfaceScatteringDiffuseMethod","get_scattering",0xbdada196,"away3d.materials.methods.SubsurfaceScatteringDiffuseMethod.get_scattering","away3d/materials/methods/SubsurfaceScatteringDiffuseMethod.hx",98,0x0b136e3c)
HX_LOCAL_STACK_FRAME(_hx_pos_0aac5a929853857e_102_set_scattering,"away3d.materials.methods.SubsurfaceScatteringDiffuseMethod","set_scattering",0xddcd8a0a,"away3d.materials.methods.SubsurfaceScatteringDiffuseMethod.set_scattering","away3d/materials/methods/SubsurfaceScatteringDiffuseMethod.hx",102,0x0b136e3c)
HX_LOCAL_STACK_FRAME(_hx_pos_0aac5a929853857e_112_get_translucency,"away3d.materials.methods.SubsurfaceScatteringDiffuseMethod","get_translucency",0x3d4a15a3,"away3d.materials.methods.SubsurfaceScatteringDiffuseMethod.get_translucency","away3d/materials/methods/SubsurfaceScatteringDiffuseMethod.hx",112,0x0b136e3c)
HX_LOCAL_STACK_FRAME(_hx_pos_0aac5a929853857e_116_set_translucency,"away3d.materials.methods.SubsurfaceScatteringDiffuseMethod","set_translucency",0x938c0317,"away3d.materials.methods.SubsurfaceScatteringDiffuseMethod.set_translucency","away3d/materials/methods/SubsurfaceScatteringDiffuseMethod.hx",116,0x0b136e3c)
HX_LOCAL_STACK_FRAME(_hx_pos_0aac5a929853857e_126_get_scatterColor,"away3d.materials.methods.SubsurfaceScatteringDiffuseMethod","get_scatterColor",0xdcfd0af7,"away3d.materials.methods.SubsurfaceScatteringDiffuseMethod.get_scatterColor","away3d/materials/methods/SubsurfaceScatteringDiffuseMethod.hx",126,0x0b136e3c)
HX_LOCAL_STACK_FRAME(_hx_pos_0aac5a929853857e_130_set_scatterColor,"away3d.materials.methods.SubsurfaceScatteringDiffuseMethod","set_scatterColor",0x333ef86b,"away3d.materials.methods.SubsurfaceScatteringDiffuseMethod.set_scatterColor","away3d/materials/methods/SubsurfaceScatteringDiffuseMethod.hx",130,0x0b136e3c)
HX_LOCAL_STACK_FRAME(_hx_pos_0aac5a929853857e_142_getVertexCode,"away3d.materials.methods.SubsurfaceScatteringDiffuseMethod","getVertexCode",0x8d0fc11e,"away3d.materials.methods.SubsurfaceScatteringDiffuseMethod.getVertexCode","away3d/materials/methods/SubsurfaceScatteringDiffuseMethod.hx",142,0x0b136e3c)
HX_LOCAL_STACK_FRAME(_hx_pos_0aac5a929853857e_171_getFragmentPreLightingCode,"away3d.materials.methods.SubsurfaceScatteringDiffuseMethod","getFragmentPreLightingCode",0xf869d95f,"away3d.materials.methods.SubsurfaceScatteringDiffuseMethod.getFragmentPreLightingCode","away3d/materials/methods/SubsurfaceScatteringDiffuseMethod.hx",171,0x0b136e3c)
HX_LOCAL_STACK_FRAME(_hx_pos_0aac5a929853857e_184_getFragmentCodePerLight,"away3d.materials.methods.SubsurfaceScatteringDiffuseMethod","getFragmentCodePerLight",0xdfb7a1a3,"away3d.materials.methods.SubsurfaceScatteringDiffuseMethod.getFragmentCodePerLight","away3d/materials/methods/SubsurfaceScatteringDiffuseMethod.hx",184,0x0b136e3c)
HX_LOCAL_STACK_FRAME(_hx_pos_0aac5a929853857e_194_getFragmentPostLightingCode,"away3d.materials.methods.SubsurfaceScatteringDiffuseMethod","getFragmentPostLightingCode",0x2b60a0b6,"away3d.materials.methods.SubsurfaceScatteringDiffuseMethod.getFragmentPostLightingCode","away3d/materials/methods/SubsurfaceScatteringDiffuseMethod.hx",194,0x0b136e3c)
HX_LOCAL_STACK_FRAME(_hx_pos_0aac5a929853857e_212_activate,"away3d.materials.methods.SubsurfaceScatteringDiffuseMethod","activate",0xfc4e1cdc,"away3d.materials.methods.SubsurfaceScatteringDiffuseMethod.activate","away3d/materials/methods/SubsurfaceScatteringDiffuseMethod.hx",212,0x0b136e3c)
HX_LOCAL_STACK_FRAME(_hx_pos_0aac5a929853857e_228_setRenderState,"away3d.materials.methods.SubsurfaceScatteringDiffuseMethod","setRenderState",0xf203a442,"away3d.materials.methods.SubsurfaceScatteringDiffuseMethod.setRenderState","away3d/materials/methods/SubsurfaceScatteringDiffuseMethod.hx",228,0x0b136e3c)
HX_LOCAL_STACK_FRAME(_hx_pos_0aac5a929853857e_240_scatterLight,"away3d.materials.methods.SubsurfaceScatteringDiffuseMethod","scatterLight",0xd1edb561,"away3d.materials.methods.SubsurfaceScatteringDiffuseMethod.scatterLight","away3d/materials/methods/SubsurfaceScatteringDiffuseMethod.hx",240,0x0b136e3c)
namespace away3d{
namespace materials{
namespace methods{

void SubsurfaceScatteringDiffuseMethod_obj::__construct(::hx::Null< int >  __o_depthMapSize,::hx::Null< Float >  __o_depthMapOffset){
            		int depthMapSize = __o_depthMapSize.Default(512);
            		Float depthMapOffset = __o_depthMapOffset.Default(15);
            	HX_GC_STACKFRAME(&_hx_pos_0aac5a929853857e_21_new)
HXLINE(  38)		this->_scatterB = ((Float)1.0);
HXLINE(  37)		this->_scatterG = ((Float)1.0);
HXLINE(  36)		this->_scatterR = ((Float)1.0);
HXLINE(  33)		this->_scatterColor = 16777215;
HXLINE(  31)		this->_translucency = ((Float)1);
HXLINE(  48)		super::__construct(this->scatterLight_dyn(),null());
HXLINE(  49)		int length = null();
HXDLIN(  49)		bool fixed = null();
HXDLIN(  49)		::Array< ::Dynamic> array = null();
HXDLIN(  49)		this->_passes =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE(  50)		this->_depthPass =  ::away3d::materials::passes::SingleObjectDepthPass_obj::__alloc( HX_CTX ,depthMapSize,depthMapOffset);
HXLINE(  51)		this->_passes->push(( ( ::away3d::materials::passes::MaterialPassBase)(this->_depthPass) ));
HXLINE(  52)		this->_scattering = ((Float)0.2);
HXLINE(  53)		this->_translucency = ( (Float)(1) );
            	}

Dynamic SubsurfaceScatteringDiffuseMethod_obj::__CreateEmpty() { return new SubsurfaceScatteringDiffuseMethod_obj; }

void *SubsurfaceScatteringDiffuseMethod_obj::_hx_vtable = 0;

Dynamic SubsurfaceScatteringDiffuseMethod_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SubsurfaceScatteringDiffuseMethod_obj > _hx_result = new SubsurfaceScatteringDiffuseMethod_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool SubsurfaceScatteringDiffuseMethod_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x12886923) {
		if (inClassId<=(int)0x0446cf5e) {
			if (inClassId<=(int)0x011e2747) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x011e2747;
			} else {
				return inClassId==(int)0x0446cf5e;
			}
		} else {
			return inClassId==(int)0x0c89e854 || inClassId==(int)0x12886923;
		}
	} else {
		if (inClassId<=(int)0x5786be41) {
			return inClassId==(int)0x37f46043 || inClassId==(int)0x5786be41;
		} else {
			return inClassId==(int)0x6c06fbed;
		}
	}
}

void SubsurfaceScatteringDiffuseMethod_obj::initConstants( ::away3d::materials::methods::MethodVO vo){
            	HX_STACKFRAME(&_hx_pos_0aac5a929853857e_60_initConstants)
HXLINE(  61)		this->super::initConstants(vo);
HXLINE(  62)		 ::openfl::_Vector::FloatVector data = vo->vertexData;
HXLINE(  63)		int index = vo->secondaryVertexConstantsIndex;
HXLINE(  64)		data->set(index,((Float).5));
HXLINE(  65)		data->set((index + 1),((Float)-.5));
HXLINE(  66)		data->set((index + 2),( (Float)(0) ));
HXLINE(  67)		data->set((index + 3),( (Float)(1) ));
HXLINE(  69)		data = vo->fragmentData;
HXLINE(  70)		index = vo->secondaryFragmentConstantsIndex;
HXLINE(  71)		data->set((index + 3),((Float)1.0));
HXLINE(  72)		data->set((index + 4),((Float)1.0));
HXLINE(  73)		data->set((index + 5),((Float)0.00392156862745098));
HXLINE(  74)		data->set((index + 6),((Float)1.5378700499807768e-005));
HXLINE(  75)		data->set((index + 7),((Float)6.0308629411010845e-008));
HXLINE(  76)		data->set((index + 10),((Float).5));
HXLINE(  77)		data->set((index + 11),((Float)-.1));
            	}


void SubsurfaceScatteringDiffuseMethod_obj::cleanCompilationData(){
            	HX_STACKFRAME(&_hx_pos_0aac5a929853857e_81_cleanCompilationData)
HXLINE(  82)		this->super::cleanCompilationData();
HXLINE(  84)		this->_lightProjVarying = null();
HXLINE(  85)		this->_propReg = null();
HXLINE(  86)		this->_lightColorReg = null();
HXLINE(  87)		this->_colorReg = null();
HXLINE(  88)		this->_decReg = null();
HXLINE(  89)		this->_targetReg = null();
            	}


Float SubsurfaceScatteringDiffuseMethod_obj::get_scattering(){
            	HX_STACKFRAME(&_hx_pos_0aac5a929853857e_98_get_scattering)
HXDLIN(  98)		return this->_scattering;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubsurfaceScatteringDiffuseMethod_obj,get_scattering,return )

Float SubsurfaceScatteringDiffuseMethod_obj::set_scattering(Float value){
            	HX_STACKFRAME(&_hx_pos_0aac5a929853857e_102_set_scattering)
HXLINE( 103)		this->_scattering = value;
HXLINE( 104)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SubsurfaceScatteringDiffuseMethod_obj,set_scattering,return )

Float SubsurfaceScatteringDiffuseMethod_obj::get_translucency(){
            	HX_STACKFRAME(&_hx_pos_0aac5a929853857e_112_get_translucency)
HXDLIN( 112)		return this->_translucency;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubsurfaceScatteringDiffuseMethod_obj,get_translucency,return )

Float SubsurfaceScatteringDiffuseMethod_obj::set_translucency(Float value){
            	HX_STACKFRAME(&_hx_pos_0aac5a929853857e_116_set_translucency)
HXLINE( 117)		this->_translucency = value;
HXLINE( 118)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SubsurfaceScatteringDiffuseMethod_obj,set_translucency,return )

int SubsurfaceScatteringDiffuseMethod_obj::get_scatterColor(){
            	HX_STACKFRAME(&_hx_pos_0aac5a929853857e_126_get_scatterColor)
HXDLIN( 126)		return this->_scatterColor;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubsurfaceScatteringDiffuseMethod_obj,get_scatterColor,return )

int SubsurfaceScatteringDiffuseMethod_obj::set_scatterColor(int scatterColor){
            	HX_STACKFRAME(&_hx_pos_0aac5a929853857e_130_set_scatterColor)
HXLINE( 131)		this->_scatterColor = scatterColor;
HXLINE( 132)		this->_scatterR = (( (Float)(((scatterColor >> 16) & 255)) ) / ( (Float)(255) ));
HXLINE( 133)		this->_scatterG = (( (Float)(((scatterColor >> 8) & 255)) ) / ( (Float)(255) ));
HXLINE( 134)		this->_scatterB = (( (Float)((scatterColor & 255)) ) / ( (Float)(255) ));
HXLINE( 135)		return scatterColor;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SubsurfaceScatteringDiffuseMethod_obj,set_scatterColor,return )

::String SubsurfaceScatteringDiffuseMethod_obj::getVertexCode( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterCache regCache){
            	HX_STACKFRAME(&_hx_pos_0aac5a929853857e_142_getVertexCode)
HXLINE( 143)		::String code = this->super::getVertexCode(vo,regCache);
HXLINE( 146)		 ::away3d::materials::compilation::ShaderRegisterElement temp = regCache->getFreeVertexVectorTemp();
HXLINE( 145)		 ::away3d::materials::compilation::ShaderRegisterElement toTexRegister = regCache->getFreeVertexConstant();
HXLINE( 149)		vo->secondaryVertexConstantsIndex = (toTexRegister->get_index() * 4);
HXLINE( 151)		this->_lightProjVarying = regCache->getFreeVarying();
HXLINE( 144)		 ::away3d::materials::compilation::ShaderRegisterElement lightProjection = regCache->getFreeVertexConstant();
HXLINE( 153)		regCache->getFreeVertexConstant();
HXLINE( 154)		regCache->getFreeVertexConstant();
HXLINE( 155)		regCache->getFreeVertexConstant();
HXLINE( 157)		::String code1 = ((HX_("m44 ",53,e4,33,48) + ::Std_obj::string(temp)) + HX_(", vt0, ",32,bb,35,2f));
HXDLIN( 157)		::String code2 = (((code1 + ::Std_obj::string(lightProjection)) + HX_("\n",0a,00,00,00)) + HX_("div ",af,69,69,42));
HXDLIN( 157)		::String code3 = ((code2 + ::Std_obj::string(temp)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 157)		::String code4 = ((code3 + ::Std_obj::string(temp)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 157)		::String code5 = (((code4 + ::Std_obj::string(temp)) + HX_(".w\n",61,4f,23,00)) + HX_("mul ",9c,67,65,48));
HXDLIN( 157)		::String code6 = ((code5 + ::Std_obj::string(temp)) + HX_(".xy, ",e3,40,1c,cc));
HXDLIN( 157)		::String code7 = ((code6 + ::Std_obj::string(temp)) + HX_(".xy, ",e3,40,1c,cc));
HXDLIN( 157)		::String code8 = (((code7 + ::Std_obj::string(toTexRegister)) + HX_(".xy\n",7b,48,c3,1e)) + HX_("add ",df,ea,69,40));
HXDLIN( 157)		::String code9 = ((code8 + ::Std_obj::string(temp)) + HX_(".xy, ",e3,40,1c,cc));
HXDLIN( 157)		::String code10 = ((code9 + ::Std_obj::string(temp)) + HX_(".xy, ",e3,40,1c,cc));
HXDLIN( 157)		::String code11 = (((code10 + ::Std_obj::string(toTexRegister)) + HX_(".xx\n",9c,47,c3,1e)) + HX_("mov ",cc,e2,60,48));
HXDLIN( 157)		::String code12 = ((code11 + ::Std_obj::string(this->_lightProjVarying)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 157)		::String code13 = (((code12 + ::Std_obj::string(temp)) + HX_(".xyz\n",bf,84,1c,cc)) + HX_("mov ",cc,e2,60,48));
HXDLIN( 157)		code = (code + ((code13 + ::Std_obj::string(this->_lightProjVarying)) + HX_(".w, va0.w\n",d9,34,cc,ca)));
HXLINE( 164)		return code;
            	}


::String SubsurfaceScatteringDiffuseMethod_obj::getFragmentPreLightingCode( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterCache regCache){
            	HX_STACKFRAME(&_hx_pos_0aac5a929853857e_171_getFragmentPreLightingCode)
HXLINE( 172)		this->_colorReg = regCache->getFreeFragmentConstant();
HXLINE( 173)		this->_decReg = regCache->getFreeFragmentConstant();
HXLINE( 174)		this->_propReg = regCache->getFreeFragmentConstant();
HXLINE( 175)		vo->secondaryFragmentConstantsIndex = (this->_colorReg->get_index() * 4);
HXLINE( 177)		return this->super::getFragmentPreLightingCode(vo,regCache);
            	}


::String SubsurfaceScatteringDiffuseMethod_obj::getFragmentCodePerLight( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterElement lightDirReg, ::away3d::materials::compilation::ShaderRegisterElement lightColReg, ::away3d::materials::compilation::ShaderRegisterCache regCache){
            	HX_STACKFRAME(&_hx_pos_0aac5a929853857e_184_getFragmentCodePerLight)
HXLINE( 185)		this->_isFirstLight = true;
HXLINE( 186)		this->_lightColorReg = lightColReg;
HXLINE( 187)		return this->super::getFragmentCodePerLight(vo,lightDirReg,lightColReg,regCache);
            	}


::String SubsurfaceScatteringDiffuseMethod_obj::getFragmentPostLightingCode( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterCache regCache, ::away3d::materials::compilation::ShaderRegisterElement targetReg){
            	HX_STACKFRAME(&_hx_pos_0aac5a929853857e_194_getFragmentPostLightingCode)
HXLINE( 195)		::String code = this->super::getFragmentPostLightingCode(vo,regCache,targetReg);
HXLINE( 196)		 ::away3d::materials::compilation::ShaderRegisterElement temp = regCache->getFreeFragmentVectorTemp();
HXLINE( 198)		::String code1 = ((HX_("mul ",9c,67,65,48) + ::Std_obj::string(temp)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 198)		::String code2 = ((code1 + ::Std_obj::string(this->_lightColorReg)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 198)		::String code3 = (((code2 + ::Std_obj::string(this->_targetReg)) + HX_(".w\n",61,4f,23,00)) + HX_("mul ",9c,67,65,48));
HXDLIN( 198)		::String code4 = ((code3 + ::Std_obj::string(temp)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 198)		::String code5 = ((code4 + ::Std_obj::string(temp)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 198)		::String code6 = (((code5 + ::Std_obj::string(this->_colorReg)) + HX_(".xyz\n",bf,84,1c,cc)) + HX_("add ",df,ea,69,40));
HXDLIN( 198)		::String code7 = ((code6 + ::Std_obj::string(targetReg)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 198)		::String code8 = ((code7 + ::Std_obj::string(targetReg)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 198)		code = (code + ((code8 + ::Std_obj::string(temp)) + HX_(".xyz\n",bf,84,1c,cc)));
HXLINE( 202)		if (::hx::IsInstanceNotEq( this->_targetReg,this->_sharedRegisters->viewDirFragment )) {
HXLINE( 203)			regCache->removeFragmentTempUsage(targetReg);
            		}
HXLINE( 205)		return code;
            	}


void SubsurfaceScatteringDiffuseMethod_obj::activate( ::away3d::materials::methods::MethodVO vo, ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_0aac5a929853857e_212_activate)
HXLINE( 213)		this->super::activate(vo,stage3DProxy);
HXLINE( 215)		int index = vo->secondaryFragmentConstantsIndex;
HXLINE( 216)		 ::openfl::_Vector::FloatVector data = vo->fragmentData;
HXLINE( 217)		data->set(index,this->_scatterR);
HXLINE( 218)		data->set((index + 1),this->_scatterG);
HXLINE( 219)		data->set((index + 2),this->_scatterB);
HXLINE( 220)		data->set((index + 8),this->_scattering);
HXLINE( 221)		data->set((index + 9),this->_translucency);
            	}


void SubsurfaceScatteringDiffuseMethod_obj::setRenderState( ::away3d::materials::methods::MethodVO vo,::Dynamic renderable, ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera){
            	HX_STACKFRAME(&_hx_pos_0aac5a929853857e_228_setRenderState)
HXLINE( 229)		 ::openfl::display3D::textures::Texture depthMap = this->_depthPass->getDepthMap(renderable,stage3DProxy);
HXLINE( 230)		 ::openfl::geom::Matrix3D projection = this->_depthPass->getProjection(renderable);
HXLINE( 232)		stage3DProxy->_context3D->setTextureAt(vo->secondaryTexturesIndex,depthMap);
HXLINE( 233)		projection->copyRawDataTo(vo->vertexData,(vo->secondaryVertexConstantsIndex + 4),true);
            	}


::String SubsurfaceScatteringDiffuseMethod_obj::scatterLight( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterElement targetReg, ::away3d::materials::compilation::ShaderRegisterCache regCache, ::away3d::materials::compilation::ShaderRegisterData sharedRegisters){
            	HX_STACKFRAME(&_hx_pos_0aac5a929853857e_240_scatterLight)
HXLINE( 242)		if (!(this->_isFirstLight)) {
HXLINE( 243)			return HX_("",00,00,00,00);
            		}
HXLINE( 244)		this->_isFirstLight = false;
HXLINE( 246)		::String code = HX_("",00,00,00,00);
HXLINE( 247)		 ::away3d::materials::compilation::ShaderRegisterElement depthReg = regCache->getFreeTextureReg();
HXLINE( 249)		if (::hx::IsNull( sharedRegisters->viewDirFragment )) {
HXLINE( 250)			this->_targetReg = sharedRegisters->viewDirFragment;
            		}
            		else {
HXLINE( 252)			this->_targetReg = regCache->getFreeFragmentVectorTemp();
HXLINE( 253)			regCache->addFragmentTempUsages(this->_targetReg,1);
            		}
HXLINE( 256)		vo->secondaryTexturesIndex = depthReg->get_index();
HXLINE( 258)		 ::away3d::materials::compilation::ShaderRegisterElement temp = regCache->getFreeFragmentVectorTemp();
HXLINE( 259)		::String code1 = ((HX_("tex ",59,cc,f9,4c) + ::Std_obj::string(temp)) + HX_(", ",74,26,00,00));
HXDLIN( 259)		::String code2 = ((code1 + ::Std_obj::string(this->_lightProjVarying)) + HX_(", ",74,26,00,00));
HXDLIN( 259)		::String code3 = (((code2 + ::Std_obj::string(depthReg)) + HX_(" <2d,nearest,clamp>\n",db,f5,38,87)) + HX_("dp4 ",f8,7f,6e,42));
HXDLIN( 259)		::String code4 = ((code3 + ::Std_obj::string(targetReg)) + HX_(".z, ",00,8a,c4,1e));
HXDLIN( 259)		::String code5 = ((code4 + ::Std_obj::string(temp)) + HX_(", ",74,26,00,00));
HXDLIN( 259)		code = (code + ((code5 + ::Std_obj::string(this->_decReg)) + HX_("\n",0a,00,00,00)));
HXLINE( 263)		::String code6 = ((HX_("sub ",a0,a6,5c,4c) + ::Std_obj::string(targetReg)) + HX_(".z, ",00,8a,c4,1e));
HXDLIN( 263)		::String code7 = ((code6 + ::Std_obj::string(this->_lightProjVarying)) + HX_(".z, ",00,8a,c4,1e));
HXDLIN( 263)		::String code8 = (((code7 + ::Std_obj::string(targetReg)) + HX_(".z\n",fe,51,23,00)) + HX_("sub ",a0,a6,5c,4c));
HXDLIN( 263)		::String code9 = ((code8 + ::Std_obj::string(targetReg)) + HX_(".z, ",00,8a,c4,1e));
HXDLIN( 263)		::String code10 = ((code9 + ::Std_obj::string(this->_propReg)) + HX_(".x, ",7e,05,c3,1e));
HXDLIN( 263)		::String code11 = (((code10 + ::Std_obj::string(targetReg)) + HX_(".z\n",fe,51,23,00)) + HX_("mul ",9c,67,65,48));
HXDLIN( 263)		::String code12 = ((code11 + ::Std_obj::string(targetReg)) + HX_(".z, ",00,8a,c4,1e));
HXDLIN( 263)		::String code13 = ((code12 + ::Std_obj::string(this->_propReg)) + HX_(".y, ",bf,c7,c3,1e));
HXDLIN( 263)		::String code14 = (((code13 + ::Std_obj::string(targetReg)) + HX_(".z\n",fe,51,23,00)) + HX_("sat ",3a,89,4d,4c));
HXDLIN( 263)		::String code15 = ((code14 + ::Std_obj::string(targetReg)) + HX_(".z, ",00,8a,c4,1e));
HXDLIN( 263)		::String code16 = (((code15 + ::Std_obj::string(targetReg)) + HX_(".z\n",fe,51,23,00)) + HX_("neg ",d0,75,02,49));
HXDLIN( 263)		::String code17 = ((code16 + ::Std_obj::string(targetReg)) + HX_(".y, ",bf,c7,c3,1e));
HXDLIN( 263)		::String code18 = (((code17 + ::Std_obj::string(targetReg)) + HX_(".x\n",40,50,23,00)) + HX_("mul ",9c,67,65,48));
HXDLIN( 263)		::String code19 = ((code18 + ::Std_obj::string(targetReg)) + HX_(".y, ",bf,c7,c3,1e));
HXDLIN( 263)		::String code20 = ((code19 + ::Std_obj::string(targetReg)) + HX_(".y, ",bf,c7,c3,1e));
HXDLIN( 263)		::String code21 = (((code20 + ::Std_obj::string(this->_propReg)) + HX_(".z\n",fe,51,23,00)) + HX_("add ",df,ea,69,40));
HXDLIN( 263)		::String code22 = ((code21 + ::Std_obj::string(targetReg)) + HX_(".y, ",bf,c7,c3,1e));
HXDLIN( 263)		::String code23 = ((code22 + ::Std_obj::string(targetReg)) + HX_(".y, ",bf,c7,c3,1e));
HXDLIN( 263)		::String code24 = (((code23 + ::Std_obj::string(this->_propReg)) + HX_(".z\n",fe,51,23,00)) + HX_("mul ",9c,67,65,48));
HXDLIN( 263)		::String code25 = ((code24 + ::Std_obj::string(this->_targetReg)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN( 263)		::String code26 = ((code25 + ::Std_obj::string(targetReg)) + HX_(".z, ",00,8a,c4,1e));
HXDLIN( 263)		::String code27 = (((code26 + ::Std_obj::string(targetReg)) + HX_(".y\n",1f,51,23,00)) + HX_("sub ",a0,a6,5c,4c));
HXDLIN( 263)		::String code28 = ((code27 + ::Std_obj::string(targetReg)) + HX_(".y, ",bf,c7,c3,1e));
HXDLIN( 263)		::String code29 = ((code28 + ::Std_obj::string(this->_colorReg)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN( 263)		::String code30 = (((code29 + ::Std_obj::string(this->_targetReg)) + HX_(".w\n",61,4f,23,00)) + HX_("mul ",9c,67,65,48));
HXDLIN( 263)		::String code31 = ((code30 + ::Std_obj::string(targetReg)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN( 263)		::String code32 = ((code31 + ::Std_obj::string(targetReg)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN( 263)		code = (code + ((code32 + ::Std_obj::string(targetReg)) + HX_(".y\n",1f,51,23,00)));
HXLINE( 280)		return code;
            	}


HX_DEFINE_DYNAMIC_FUNC4(SubsurfaceScatteringDiffuseMethod_obj,scatterLight,return )


::hx::ObjectPtr< SubsurfaceScatteringDiffuseMethod_obj > SubsurfaceScatteringDiffuseMethod_obj::__new(::hx::Null< int >  __o_depthMapSize,::hx::Null< Float >  __o_depthMapOffset) {
	::hx::ObjectPtr< SubsurfaceScatteringDiffuseMethod_obj > __this = new SubsurfaceScatteringDiffuseMethod_obj();
	__this->__construct(__o_depthMapSize,__o_depthMapOffset);
	return __this;
}

::hx::ObjectPtr< SubsurfaceScatteringDiffuseMethod_obj > SubsurfaceScatteringDiffuseMethod_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_depthMapSize,::hx::Null< Float >  __o_depthMapOffset) {
	SubsurfaceScatteringDiffuseMethod_obj *__this = (SubsurfaceScatteringDiffuseMethod_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SubsurfaceScatteringDiffuseMethod_obj), true, "away3d.materials.methods.SubsurfaceScatteringDiffuseMethod"));
	*(void **)__this = SubsurfaceScatteringDiffuseMethod_obj::_hx_vtable;
	__this->__construct(__o_depthMapSize,__o_depthMapOffset);
	return __this;
}

SubsurfaceScatteringDiffuseMethod_obj::SubsurfaceScatteringDiffuseMethod_obj()
{
}

void SubsurfaceScatteringDiffuseMethod_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SubsurfaceScatteringDiffuseMethod);
	HX_MARK_MEMBER_NAME(_depthPass,"_depthPass");
	HX_MARK_MEMBER_NAME(_lightProjVarying,"_lightProjVarying");
	HX_MARK_MEMBER_NAME(_propReg,"_propReg");
	HX_MARK_MEMBER_NAME(_scattering,"_scattering");
	HX_MARK_MEMBER_NAME(_translucency,"_translucency");
	HX_MARK_MEMBER_NAME(_lightColorReg,"_lightColorReg");
	HX_MARK_MEMBER_NAME(_scatterColor,"_scatterColor");
	HX_MARK_MEMBER_NAME(_colorReg,"_colorReg");
	HX_MARK_MEMBER_NAME(_decReg,"_decReg");
	HX_MARK_MEMBER_NAME(_scatterR,"_scatterR");
	HX_MARK_MEMBER_NAME(_scatterG,"_scatterG");
	HX_MARK_MEMBER_NAME(_scatterB,"_scatterB");
	HX_MARK_MEMBER_NAME(_targetReg,"_targetReg");
	 ::away3d::materials::methods::CompositeDiffuseMethod_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SubsurfaceScatteringDiffuseMethod_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_depthPass,"_depthPass");
	HX_VISIT_MEMBER_NAME(_lightProjVarying,"_lightProjVarying");
	HX_VISIT_MEMBER_NAME(_propReg,"_propReg");
	HX_VISIT_MEMBER_NAME(_scattering,"_scattering");
	HX_VISIT_MEMBER_NAME(_translucency,"_translucency");
	HX_VISIT_MEMBER_NAME(_lightColorReg,"_lightColorReg");
	HX_VISIT_MEMBER_NAME(_scatterColor,"_scatterColor");
	HX_VISIT_MEMBER_NAME(_colorReg,"_colorReg");
	HX_VISIT_MEMBER_NAME(_decReg,"_decReg");
	HX_VISIT_MEMBER_NAME(_scatterR,"_scatterR");
	HX_VISIT_MEMBER_NAME(_scatterG,"_scatterG");
	HX_VISIT_MEMBER_NAME(_scatterB,"_scatterB");
	HX_VISIT_MEMBER_NAME(_targetReg,"_targetReg");
	 ::away3d::materials::methods::CompositeDiffuseMethod_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val SubsurfaceScatteringDiffuseMethod_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_decReg") ) { return ::hx::Val( _decReg ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_propReg") ) { return ::hx::Val( _propReg ); }
		if (HX_FIELD_EQ(inName,"activate") ) { return ::hx::Val( activate_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_colorReg") ) { return ::hx::Val( _colorReg ); }
		if (HX_FIELD_EQ(inName,"_scatterR") ) { return ::hx::Val( _scatterR ); }
		if (HX_FIELD_EQ(inName,"_scatterG") ) { return ::hx::Val( _scatterG ); }
		if (HX_FIELD_EQ(inName,"_scatterB") ) { return ::hx::Val( _scatterB ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scattering") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scattering() ); }
		if (HX_FIELD_EQ(inName,"_depthPass") ) { return ::hx::Val( _depthPass ); }
		if (HX_FIELD_EQ(inName,"_targetReg") ) { return ::hx::Val( _targetReg ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_scattering") ) { return ::hx::Val( _scattering ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"translucency") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_translucency() ); }
		if (HX_FIELD_EQ(inName,"scatterColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scatterColor() ); }
		if (HX_FIELD_EQ(inName,"scatterLight") ) { return ::hx::Val( scatterLight_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_translucency") ) { return ::hx::Val( _translucency ); }
		if (HX_FIELD_EQ(inName,"_scatterColor") ) { return ::hx::Val( _scatterColor ); }
		if (HX_FIELD_EQ(inName,"initConstants") ) { return ::hx::Val( initConstants_dyn() ); }
		if (HX_FIELD_EQ(inName,"getVertexCode") ) { return ::hx::Val( getVertexCode_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_lightColorReg") ) { return ::hx::Val( _lightColorReg ); }
		if (HX_FIELD_EQ(inName,"get_scattering") ) { return ::hx::Val( get_scattering_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scattering") ) { return ::hx::Val( set_scattering_dyn() ); }
		if (HX_FIELD_EQ(inName,"setRenderState") ) { return ::hx::Val( setRenderState_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_translucency") ) { return ::hx::Val( get_translucency_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_translucency") ) { return ::hx::Val( set_translucency_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_scatterColor") ) { return ::hx::Val( get_scatterColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scatterColor") ) { return ::hx::Val( set_scatterColor_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_lightProjVarying") ) { return ::hx::Val( _lightProjVarying ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"cleanCompilationData") ) { return ::hx::Val( cleanCompilationData_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getFragmentCodePerLight") ) { return ::hx::Val( getFragmentCodePerLight_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"getFragmentPreLightingCode") ) { return ::hx::Val( getFragmentPreLightingCode_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"getFragmentPostLightingCode") ) { return ::hx::Val( getFragmentPostLightingCode_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SubsurfaceScatteringDiffuseMethod_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_decReg") ) { _decReg=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_propReg") ) { _propReg=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_colorReg") ) { _colorReg=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scatterR") ) { _scatterR=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scatterG") ) { _scatterG=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scatterB") ) { _scatterB=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scattering") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scattering(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"_depthPass") ) { _depthPass=inValue.Cast<  ::away3d::materials::passes::SingleObjectDepthPass >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_targetReg") ) { _targetReg=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_scattering") ) { _scattering=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"translucency") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_translucency(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"scatterColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scatterColor(inValue.Cast< int >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_translucency") ) { _translucency=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scatterColor") ) { _scatterColor=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_lightColorReg") ) { _lightColorReg=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_lightProjVarying") ) { _lightProjVarying=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SubsurfaceScatteringDiffuseMethod_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("scattering",64,53,2f,4d));
	outFields->push(HX_("translucency",f1,56,f6,f5));
	outFields->push(HX_("scatterColor",45,4c,a9,95));
	outFields->push(HX_("_depthPass",35,bb,77,fc));
	outFields->push(HX_("_lightProjVarying",7c,93,b5,f1));
	outFields->push(HX_("_propReg",f2,4a,8c,33));
	outFields->push(HX_("_scattering",83,20,b9,1f));
	outFields->push(HX_("_translucency",d0,e9,64,d8));
	outFields->push(HX_("_lightColorReg",e8,e2,cc,93));
	outFields->push(HX_("_scatterColor",24,df,17,78));
	outFields->push(HX_("_colorReg",10,d7,84,d1));
	outFields->push(HX_("_decReg",51,6e,4e,d3));
	outFields->push(HX_("_scatterR",b3,39,1f,ee));
	outFields->push(HX_("_scatterG",a8,39,1f,ee));
	outFields->push(HX_("_scatterB",a3,39,1f,ee));
	outFields->push(HX_("_targetReg",44,42,d8,c4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SubsurfaceScatteringDiffuseMethod_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::away3d::materials::passes::SingleObjectDepthPass */ ,(int)offsetof(SubsurfaceScatteringDiffuseMethod_obj,_depthPass),HX_("_depthPass",35,bb,77,fc)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(SubsurfaceScatteringDiffuseMethod_obj,_lightProjVarying),HX_("_lightProjVarying",7c,93,b5,f1)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(SubsurfaceScatteringDiffuseMethod_obj,_propReg),HX_("_propReg",f2,4a,8c,33)},
	{::hx::fsFloat,(int)offsetof(SubsurfaceScatteringDiffuseMethod_obj,_scattering),HX_("_scattering",83,20,b9,1f)},
	{::hx::fsFloat,(int)offsetof(SubsurfaceScatteringDiffuseMethod_obj,_translucency),HX_("_translucency",d0,e9,64,d8)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(SubsurfaceScatteringDiffuseMethod_obj,_lightColorReg),HX_("_lightColorReg",e8,e2,cc,93)},
	{::hx::fsInt,(int)offsetof(SubsurfaceScatteringDiffuseMethod_obj,_scatterColor),HX_("_scatterColor",24,df,17,78)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(SubsurfaceScatteringDiffuseMethod_obj,_colorReg),HX_("_colorReg",10,d7,84,d1)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(SubsurfaceScatteringDiffuseMethod_obj,_decReg),HX_("_decReg",51,6e,4e,d3)},
	{::hx::fsFloat,(int)offsetof(SubsurfaceScatteringDiffuseMethod_obj,_scatterR),HX_("_scatterR",b3,39,1f,ee)},
	{::hx::fsFloat,(int)offsetof(SubsurfaceScatteringDiffuseMethod_obj,_scatterG),HX_("_scatterG",a8,39,1f,ee)},
	{::hx::fsFloat,(int)offsetof(SubsurfaceScatteringDiffuseMethod_obj,_scatterB),HX_("_scatterB",a3,39,1f,ee)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(SubsurfaceScatteringDiffuseMethod_obj,_targetReg),HX_("_targetReg",44,42,d8,c4)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SubsurfaceScatteringDiffuseMethod_obj_sStaticStorageInfo = 0;
#endif

static ::String SubsurfaceScatteringDiffuseMethod_obj_sMemberFields[] = {
	HX_("_depthPass",35,bb,77,fc),
	HX_("_lightProjVarying",7c,93,b5,f1),
	HX_("_propReg",f2,4a,8c,33),
	HX_("_scattering",83,20,b9,1f),
	HX_("_translucency",d0,e9,64,d8),
	HX_("_lightColorReg",e8,e2,cc,93),
	HX_("_scatterColor",24,df,17,78),
	HX_("_colorReg",10,d7,84,d1),
	HX_("_decReg",51,6e,4e,d3),
	HX_("_scatterR",b3,39,1f,ee),
	HX_("_scatterG",a8,39,1f,ee),
	HX_("_scatterB",a3,39,1f,ee),
	HX_("_targetReg",44,42,d8,c4),
	HX_("initConstants",5f,39,6b,bf),
	HX_("cleanCompilationData",04,2f,dd,d4),
	HX_("get_scattering",ad,db,24,c3),
	HX_("set_scattering",21,c4,44,e3),
	HX_("get_translucency",7a,43,95,fa),
	HX_("set_translucency",ee,30,d7,50),
	HX_("get_scatterColor",ce,38,48,9a),
	HX_("set_scatterColor",42,26,8a,f0),
	HX_("getVertexCode",e7,96,f3,2e),
	HX_("getFragmentPreLightingCode",f6,59,1b,b5),
	HX_("getFragmentCodePerLight",ac,ec,39,19),
	HX_("getFragmentPostLightingCode",3f,a4,ff,89),
	HX_("activate",b3,1b,ac,e5),
	HX_("setRenderState",59,de,7a,f7),
	HX_("scatterLight",b8,6b,49,c0),
	::String(null()) };

::hx::Class SubsurfaceScatteringDiffuseMethod_obj::__mClass;

void SubsurfaceScatteringDiffuseMethod_obj::__register()
{
	SubsurfaceScatteringDiffuseMethod_obj _hx_dummy;
	SubsurfaceScatteringDiffuseMethod_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.materials.methods.SubsurfaceScatteringDiffuseMethod",65,28,7b,c9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SubsurfaceScatteringDiffuseMethod_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SubsurfaceScatteringDiffuseMethod_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SubsurfaceScatteringDiffuseMethod_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SubsurfaceScatteringDiffuseMethod_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace materials
} // end namespace methods
