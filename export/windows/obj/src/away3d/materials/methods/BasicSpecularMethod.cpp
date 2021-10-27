#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
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
#ifndef INCLUDED_away3d_materials_methods_BasicSpecularMethod
#include <away3d/materials/methods/BasicSpecularMethod.h>
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
#ifndef INCLUDED_away3d_textures_Texture2DBase
#include <away3d/textures/Texture2DBase.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_bb72c68215b9ebfc_17_new,"away3d.materials.methods.BasicSpecularMethod","new",0xfcb6b537,"away3d.materials.methods.BasicSpecularMethod.new","away3d/materials/methods/BasicSpecularMethod.hx",17,0x3e36e59c)
HX_LOCAL_STACK_FRAME(_hx_pos_bb72c68215b9ebfc_54_initVO,"away3d.materials.methods.BasicSpecularMethod","initVO",0x46ece5d2,"away3d.materials.methods.BasicSpecularMethod.initVO","away3d/materials/methods/BasicSpecularMethod.hx",54,0x3e36e59c)
HX_LOCAL_STACK_FRAME(_hx_pos_bb72c68215b9ebfc_65_get_gloss,"away3d.materials.methods.BasicSpecularMethod","get_gloss",0x55d36638,"away3d.materials.methods.BasicSpecularMethod.get_gloss","away3d/materials/methods/BasicSpecularMethod.hx",65,0x3e36e59c)
HX_LOCAL_STACK_FRAME(_hx_pos_bb72c68215b9ebfc_69_set_gloss,"away3d.materials.methods.BasicSpecularMethod","set_gloss",0x39245244,"away3d.materials.methods.BasicSpecularMethod.set_gloss","away3d/materials/methods/BasicSpecularMethod.hx",69,0x3e36e59c)
HX_LOCAL_STACK_FRAME(_hx_pos_bb72c68215b9ebfc_79_get_specular,"away3d.materials.methods.BasicSpecularMethod","get_specular",0x81315315,"away3d.materials.methods.BasicSpecularMethod.get_specular","away3d/materials/methods/BasicSpecularMethod.hx",79,0x3e36e59c)
HX_LOCAL_STACK_FRAME(_hx_pos_bb72c68215b9ebfc_83_set_specular,"away3d.materials.methods.BasicSpecularMethod","set_specular",0x962a7689,"away3d.materials.methods.BasicSpecularMethod.set_specular","away3d/materials/methods/BasicSpecularMethod.hx",83,0x3e36e59c)
HX_LOCAL_STACK_FRAME(_hx_pos_bb72c68215b9ebfc_97_get_specularColor,"away3d.materials.methods.BasicSpecularMethod","get_specularColor",0x6f2a420e,"away3d.materials.methods.BasicSpecularMethod.get_specularColor","away3d/materials/methods/BasicSpecularMethod.hx",97,0x3e36e59c)
HX_LOCAL_STACK_FRAME(_hx_pos_bb72c68215b9ebfc_101_set_specularColor,"away3d.materials.methods.BasicSpecularMethod","set_specularColor",0x92981a1a,"away3d.materials.methods.BasicSpecularMethod.set_specularColor","away3d/materials/methods/BasicSpecularMethod.hx",101,0x3e36e59c)
HX_LOCAL_STACK_FRAME(_hx_pos_bb72c68215b9ebfc_120_get_texture,"away3d.materials.methods.BasicSpecularMethod","get_texture",0x7d813cc9,"away3d.materials.methods.BasicSpecularMethod.get_texture","away3d/materials/methods/BasicSpecularMethod.hx",120,0x3e36e59c)
HX_LOCAL_STACK_FRAME(_hx_pos_bb72c68215b9ebfc_124_set_texture,"away3d.materials.methods.BasicSpecularMethod","set_texture",0x87ee43d5,"away3d.materials.methods.BasicSpecularMethod.set_texture","away3d/materials/methods/BasicSpecularMethod.hx",124,0x3e36e59c)
HX_LOCAL_STACK_FRAME(_hx_pos_bb72c68215b9ebfc_138_copyFrom,"away3d.materials.methods.BasicSpecularMethod","copyFrom",0xfdbe3b88,"away3d.materials.methods.BasicSpecularMethod.copyFrom","away3d/materials/methods/BasicSpecularMethod.hx",138,0x3e36e59c)
HX_LOCAL_STACK_FRAME(_hx_pos_bb72c68215b9ebfc_150_cleanCompilationData,"away3d.materials.methods.BasicSpecularMethod","cleanCompilationData",0x3ce7684d,"away3d.materials.methods.BasicSpecularMethod.cleanCompilationData","away3d/materials/methods/BasicSpecularMethod.hx",150,0x3e36e59c)
HX_LOCAL_STACK_FRAME(_hx_pos_bb72c68215b9ebfc_163_getFragmentPreLightingCode,"away3d.materials.methods.BasicSpecularMethod","getFragmentPreLightingCode",0xe3b52fff,"away3d.materials.methods.BasicSpecularMethod.getFragmentPreLightingCode","away3d/materials/methods/BasicSpecularMethod.hx",163,0x3e36e59c)
HX_LOCAL_STACK_FRAME(_hx_pos_bb72c68215b9ebfc_192_getFragmentCodePerLight,"away3d.materials.methods.BasicSpecularMethod","getFragmentCodePerLight",0xb0d9e703,"away3d.materials.methods.BasicSpecularMethod.getFragmentCodePerLight","away3d/materials/methods/BasicSpecularMethod.hx",192,0x3e36e59c)
HX_LOCAL_STACK_FRAME(_hx_pos_bb72c68215b9ebfc_242_getFragmentCodePerProbe,"away3d.materials.methods.BasicSpecularMethod","getFragmentCodePerProbe",0x046d315d,"away3d.materials.methods.BasicSpecularMethod.getFragmentCodePerProbe","away3d/materials/methods/BasicSpecularMethod.hx",242,0x3e36e59c)
HX_LOCAL_STACK_FRAME(_hx_pos_bb72c68215b9ebfc_280_getFragmentPostLightingCode,"away3d.materials.methods.BasicSpecularMethod","getFragmentPostLightingCode",0x22011616,"away3d.materials.methods.BasicSpecularMethod.getFragmentPostLightingCode","away3d/materials/methods/BasicSpecularMethod.hx",280,0x3e36e59c)
HX_LOCAL_STACK_FRAME(_hx_pos_bb72c68215b9ebfc_307_activate,"away3d.materials.methods.BasicSpecularMethod","activate",0x1b094b7c,"away3d.materials.methods.BasicSpecularMethod.activate","away3d/materials/methods/BasicSpecularMethod.hx",307,0x3e36e59c)
HX_LOCAL_STACK_FRAME(_hx_pos_bb72c68215b9ebfc_334_updateSpecular,"away3d.materials.methods.BasicSpecularMethod","updateSpecular",0xf8daf675,"away3d.materials.methods.BasicSpecularMethod.updateSpecular","away3d/materials/methods/BasicSpecularMethod.hx",334,0x3e36e59c)
HX_LOCAL_STACK_FRAME(_hx_pos_bb72c68215b9ebfc_344_set_shadowRegister,"away3d.materials.methods.BasicSpecularMethod","set_shadowRegister",0x0b8642a9,"away3d.materials.methods.BasicSpecularMethod.set_shadowRegister","away3d/materials/methods/BasicSpecularMethod.hx",344,0x3e36e59c)
namespace away3d{
namespace materials{
namespace methods{

void BasicSpecularMethod_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_bb72c68215b9ebfc_17_new)
HXLINE(  38)		this->_specularB = ((Float)1);
HXLINE(  37)		this->_specularG = ((Float)1);
HXLINE(  36)		this->_specularR = ((Float)1);
HXLINE(  35)		this->_specularColor = 16777215;
HXLINE(  34)		this->_specular = ((Float)1);
HXLINE(  33)		this->_gloss = ((Float)50);
HXLINE(  47)		super::__construct();
            	}

Dynamic BasicSpecularMethod_obj::__CreateEmpty() { return new BasicSpecularMethod_obj; }

void *BasicSpecularMethod_obj::_hx_vtable = 0;

Dynamic BasicSpecularMethod_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BasicSpecularMethod_obj > _hx_result = new BasicSpecularMethod_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BasicSpecularMethod_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x12886923) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x011e2747) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x011e2747;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x12886923;
		}
	} else {
		return inClassId==(int)0x37f46043 || inClassId==(int)0x3d2c834d;
	}
}

void BasicSpecularMethod_obj::initVO( ::away3d::materials::methods::MethodVO vo){
            	HX_STACKFRAME(&_hx_pos_bb72c68215b9ebfc_54_initVO)
HXLINE(  55)		vo->needsUV = this->_useTexture;
HXLINE(  56)		vo->needsNormals = (vo->numLights > 0);
HXLINE(  57)		vo->needsView = (vo->numLights > 0);
            	}


Float BasicSpecularMethod_obj::get_gloss(){
            	HX_STACKFRAME(&_hx_pos_bb72c68215b9ebfc_65_get_gloss)
HXDLIN(  65)		return this->_gloss;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicSpecularMethod_obj,get_gloss,return )

Float BasicSpecularMethod_obj::set_gloss(Float value){
            	HX_STACKFRAME(&_hx_pos_bb72c68215b9ebfc_69_set_gloss)
HXLINE(  70)		this->_gloss = value;
HXLINE(  71)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BasicSpecularMethod_obj,set_gloss,return )

Float BasicSpecularMethod_obj::get_specular(){
            	HX_STACKFRAME(&_hx_pos_bb72c68215b9ebfc_79_get_specular)
HXDLIN(  79)		return this->_specular;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicSpecularMethod_obj,get_specular,return )

Float BasicSpecularMethod_obj::set_specular(Float value){
            	HX_STACKFRAME(&_hx_pos_bb72c68215b9ebfc_83_set_specular)
HXLINE(  84)		if ((value == this->_specular)) {
HXLINE(  85)			return value;
            		}
HXLINE(  87)		this->_specular = value;
HXLINE(  88)		this->updateSpecular();
HXLINE(  89)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BasicSpecularMethod_obj,set_specular,return )

int BasicSpecularMethod_obj::get_specularColor(){
            	HX_STACKFRAME(&_hx_pos_bb72c68215b9ebfc_97_get_specularColor)
HXDLIN(  97)		return this->_specularColor;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicSpecularMethod_obj,get_specularColor,return )

int BasicSpecularMethod_obj::set_specularColor(int value){
            	HX_STACKFRAME(&_hx_pos_bb72c68215b9ebfc_101_set_specularColor)
HXLINE( 102)		if ((this->_specularColor == value)) {
HXLINE( 103)			return value;
            		}
HXLINE( 106)		bool _hx_tmp;
HXDLIN( 106)		if ((this->_specularColor != 0)) {
HXLINE( 106)			_hx_tmp = (value == 0);
            		}
            		else {
HXLINE( 106)			_hx_tmp = true;
            		}
HXDLIN( 106)		if (_hx_tmp) {
HXLINE( 107)			this->invalidateShaderProgram();
            		}
HXLINE( 108)		this->_specularColor = value;
HXLINE( 109)		this->updateSpecular();
HXLINE( 110)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BasicSpecularMethod_obj,set_specularColor,return )

 ::away3d::textures::Texture2DBase BasicSpecularMethod_obj::get_texture(){
            	HX_STACKFRAME(&_hx_pos_bb72c68215b9ebfc_120_get_texture)
HXDLIN( 120)		return this->_texture;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicSpecularMethod_obj,get_texture,return )

 ::away3d::textures::Texture2DBase BasicSpecularMethod_obj::set_texture( ::away3d::textures::Texture2DBase value){
            	HX_STACKFRAME(&_hx_pos_bb72c68215b9ebfc_124_set_texture)
HXLINE( 125)		bool _hx_tmp;
HXDLIN( 125)		if ((::hx::IsNotNull( value ) == this->_useTexture)) {
HXLINE( 126)			bool _hx_tmp1;
HXDLIN( 126)			if (::hx::IsNotNull( value )) {
HXLINE( 126)				_hx_tmp1 = ::hx::IsNotNull( this->_texture );
            			}
            			else {
HXLINE( 126)				_hx_tmp1 = false;
            			}
HXDLIN( 126)			if (_hx_tmp1) {
HXLINE( 126)				bool _hx_tmp1 = value->get_hasMipMaps();
HXDLIN( 126)				if ((_hx_tmp1 == this->_texture->get_hasMipMaps())) {
HXLINE( 126)					 ::Dynamic _hx_tmp1 = value->get_format();
HXLINE( 125)					_hx_tmp = ::hx::IsNotEq( _hx_tmp1,this->_texture->get_format() );
            				}
            				else {
HXLINE( 125)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE( 125)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE( 125)			_hx_tmp = true;
            		}
HXDLIN( 125)		if (_hx_tmp) {
HXLINE( 127)			this->invalidateShaderProgram();
            		}
HXLINE( 129)		this->_useTexture = ::hx::IsNotNull( value );
HXLINE( 130)		this->_texture = value;
HXLINE( 131)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BasicSpecularMethod_obj,set_texture,return )

void BasicSpecularMethod_obj::copyFrom( ::away3d::materials::methods::ShadingMethodBase method){
            	HX_STACKFRAME(&_hx_pos_bb72c68215b9ebfc_138_copyFrom)
HXLINE( 139)		 ::away3d::materials::methods::BasicSpecularMethod spec = ::hx::TCast<  ::away3d::materials::methods::BasicSpecularMethod >::cast(method);
HXLINE( 140)		this->set_texture(spec->get_texture());
HXLINE( 141)		this->set_specular(spec->get_specular());
HXLINE( 142)		this->set_specularColor(spec->get_specularColor());
HXLINE( 143)		this->set_gloss(spec->get_gloss());
            	}


void BasicSpecularMethod_obj::cleanCompilationData(){
            	HX_STACKFRAME(&_hx_pos_bb72c68215b9ebfc_150_cleanCompilationData)
HXLINE( 151)		this->super::cleanCompilationData();
HXLINE( 152)		this->_shadowRegister = null();
HXLINE( 153)		this->_totalLightColorReg = null();
HXLINE( 154)		this->_specularTextureRegister = null();
HXLINE( 155)		this->_specularTexData = null();
HXLINE( 156)		this->_specularDataRegister = null();
            	}


::String BasicSpecularMethod_obj::getFragmentPreLightingCode( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterCache regCache){
            	HX_STACKFRAME(&_hx_pos_bb72c68215b9ebfc_163_getFragmentPreLightingCode)
HXLINE( 164)		::String code = HX_("",00,00,00,00);
HXLINE( 166)		this->_isFirstLight = true;
HXLINE( 168)		if ((vo->numLights > 0)) {
HXLINE( 169)			this->_specularDataRegister = regCache->getFreeFragmentConstant();
HXLINE( 170)			vo->fragmentConstantsIndex = (this->_specularDataRegister->get_index() * 4);
HXLINE( 172)			if (this->_useTexture) {
HXLINE( 173)				this->_specularTexData = regCache->getFreeFragmentVectorTemp();
HXLINE( 174)				regCache->addFragmentTempUsages(this->_specularTexData,1);
HXLINE( 175)				this->_specularTextureRegister = regCache->getFreeTextureReg();
HXLINE( 176)				vo->texturesIndex = this->_specularTextureRegister->get_index();
HXLINE( 177)				code = this->getTex2DSampleCode(vo,this->_specularTexData,this->_specularTextureRegister,this->_texture,null(),null());
            			}
            			else {
HXLINE( 179)				this->_specularTextureRegister = null();
            			}
HXLINE( 181)			this->_totalLightColorReg = regCache->getFreeFragmentVectorTemp();
HXLINE( 182)			regCache->addFragmentTempUsages(this->_totalLightColorReg,1);
            		}
HXLINE( 185)		return code;
            	}


::String BasicSpecularMethod_obj::getFragmentCodePerLight( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterElement lightDirReg, ::away3d::materials::compilation::ShaderRegisterElement lightColReg, ::away3d::materials::compilation::ShaderRegisterCache regCache){
            	HX_STACKFRAME(&_hx_pos_bb72c68215b9ebfc_192_getFragmentCodePerLight)
HXLINE( 193)		::String code = HX_("",00,00,00,00);
HXLINE( 194)		 ::away3d::materials::compilation::ShaderRegisterElement t;
HXLINE( 196)		if (this->_isFirstLight) {
HXLINE( 197)			t = this->_totalLightColorReg;
            		}
            		else {
HXLINE( 199)			t = regCache->getFreeFragmentVectorTemp();
HXLINE( 200)			regCache->addFragmentTempUsages(t,1);
            		}
HXLINE( 203)		 ::away3d::materials::compilation::ShaderRegisterElement viewDirReg = this->_sharedRegisters->viewDirFragment;
HXLINE( 204)		 ::away3d::materials::compilation::ShaderRegisterElement normalReg = this->_sharedRegisters->normalFragment;
HXLINE( 207)		::String code1 = ((HX_("add ",df,ea,69,40) + ::Std_obj::string(t)) + HX_(", ",74,26,00,00));
HXDLIN( 207)		::String code2 = ((code1 + ::Std_obj::string(lightDirReg)) + HX_(", ",74,26,00,00));
HXDLIN( 207)		::String code3 = (((code2 + ::Std_obj::string(viewDirReg)) + HX_("\n",0a,00,00,00)) + HX_("nrm ",57,58,0c,49));
HXDLIN( 207)		::String code4 = ((code3 + ::Std_obj::string(t)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 207)		::String code5 = (((code4 + ::Std_obj::string(t)) + HX_("\n",0a,00,00,00)) + HX_("dp3 ",19,7f,6e,42));
HXDLIN( 207)		::String code6 = ((code5 + ::Std_obj::string(t)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN( 207)		::String code7 = ((code6 + ::Std_obj::string(normalReg)) + HX_(", ",74,26,00,00));
HXDLIN( 207)		::String code8 = (((code7 + ::Std_obj::string(t)) + HX_("\n",0a,00,00,00)) + HX_("sat ",3a,89,4d,4c));
HXDLIN( 207)		::String code9 = ((code8 + ::Std_obj::string(t)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN( 207)		code = (code + ((code9 + ::Std_obj::string(t)) + HX_(".w\n",61,4f,23,00)));
HXLINE( 212)		if (this->_useTexture) {
HXLINE( 214)			::String code1 = ((HX_("mul ",9c,67,65,48) + ::Std_obj::string(this->_specularTexData)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN( 214)			::String code2 = ((code1 + ::Std_obj::string(this->_specularTexData)) + HX_(".y, ",bf,c7,c3,1e));
HXDLIN( 214)			::String code3 = (((code2 + ::Std_obj::string(this->_specularDataRegister)) + HX_(".w\n",61,4f,23,00)) + HX_("pow ",88,87,5c,4a));
HXDLIN( 214)			::String code4 = ((code3 + ::Std_obj::string(t)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN( 214)			::String code5 = ((code4 + ::Std_obj::string(t)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN( 214)			code = (code + ((code5 + ::Std_obj::string(this->_specularTexData)) + HX_(".w\n",61,4f,23,00)));
            		}
            		else {
HXLINE( 217)			::String code1 = ((HX_("pow ",88,87,5c,4a) + ::Std_obj::string(t)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN( 217)			::String code2 = ((code1 + ::Std_obj::string(t)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN( 217)			code = (code + ((code2 + ::Std_obj::string(this->_specularDataRegister)) + HX_(".w\n",61,4f,23,00)));
            		}
HXLINE( 220)		if (vo->useLightFallOff) {
HXLINE( 221)			::String code1 = ((HX_("mul ",9c,67,65,48) + ::Std_obj::string(t)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN( 221)			::String code2 = ((code1 + ::Std_obj::string(t)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN( 221)			code = (code + ((code2 + ::Std_obj::string(lightDirReg)) + HX_(".w\n",61,4f,23,00)));
            		}
HXLINE( 223)		if (::hx::IsNotNull( this->_modulateMethod )) {
HXLINE( 224)			code = (code + ::Std_obj::string(this->_modulateMethod(vo,t,regCache,this->_sharedRegisters)));
            		}
HXLINE( 226)		::String code10 = ((HX_("mul ",9c,67,65,48) + ::Std_obj::string(t)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 226)		::String code11 = ((code10 + ::Std_obj::string(lightColReg)) + HX_(", ",74,26,00,00));
HXDLIN( 226)		code = (code + ((code11 + ::Std_obj::string(t)) + HX_(".w\n",61,4f,23,00)));
HXLINE( 228)		if (!(this->_isFirstLight)) {
HXLINE( 229)			::String code1 = ((HX_("add ",df,ea,69,40) + ::Std_obj::string(this->_totalLightColorReg)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 229)			::String code2 = ((code1 + ::Std_obj::string(this->_totalLightColorReg)) + HX_(", ",74,26,00,00));
HXDLIN( 229)			code = (code + ((code2 + ::Std_obj::string(t)) + HX_("\n",0a,00,00,00)));
HXLINE( 230)			regCache->removeFragmentTempUsage(t);
            		}
HXLINE( 233)		this->_isFirstLight = false;
HXLINE( 235)		return code;
            	}


::String BasicSpecularMethod_obj::getFragmentCodePerProbe( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterElement cubeMapReg,::String weightRegister, ::away3d::materials::compilation::ShaderRegisterCache regCache){
            	HX_STACKFRAME(&_hx_pos_bb72c68215b9ebfc_242_getFragmentCodePerProbe)
HXLINE( 243)		::String code = HX_("",00,00,00,00);
HXLINE( 244)		 ::away3d::materials::compilation::ShaderRegisterElement t;
HXLINE( 247)		if (this->_isFirstLight) {
HXLINE( 248)			t = this->_totalLightColorReg;
            		}
            		else {
HXLINE( 250)			t = regCache->getFreeFragmentVectorTemp();
HXLINE( 251)			regCache->addFragmentTempUsages(t,1);
            		}
HXLINE( 254)		 ::away3d::materials::compilation::ShaderRegisterElement normalReg = this->_sharedRegisters->normalFragment;
HXLINE( 255)		 ::away3d::materials::compilation::ShaderRegisterElement viewDirReg = this->_sharedRegisters->viewDirFragment;
HXLINE( 256)		::String code1 = ((HX_("dp3 ",19,7f,6e,42) + ::Std_obj::string(t)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN( 256)		::String code2 = ((code1 + ::Std_obj::string(normalReg)) + HX_(", ",74,26,00,00));
HXDLIN( 256)		::String code3 = (((code2 + ::Std_obj::string(viewDirReg)) + HX_("\n",0a,00,00,00)) + HX_("add ",df,ea,69,40));
HXDLIN( 256)		::String code4 = ((code3 + ::Std_obj::string(t)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN( 256)		::String code5 = ((code4 + ::Std_obj::string(t)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN( 256)		::String code6 = (((code5 + ::Std_obj::string(t)) + HX_(".w\n",61,4f,23,00)) + HX_("mul ",9c,67,65,48));
HXDLIN( 256)		::String code7 = ((code6 + ::Std_obj::string(t)) + HX_(", ",74,26,00,00));
HXDLIN( 256)		::String code8 = ((code7 + ::Std_obj::string(t)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN( 256)		::String code9 = (((code8 + ::Std_obj::string(normalReg)) + HX_("\n",0a,00,00,00)) + HX_("sub ",a0,a6,5c,4c));
HXDLIN( 256)		::String code10 = ((code9 + ::Std_obj::string(t)) + HX_(", ",74,26,00,00));
HXDLIN( 256)		::String code11 = ((code10 + ::Std_obj::string(t)) + HX_(", ",74,26,00,00));
HXDLIN( 256)		::String code12 = (((code11 + ::Std_obj::string(viewDirReg)) + HX_("\n",0a,00,00,00)) + HX_("tex ",59,cc,f9,4c));
HXDLIN( 256)		::String code13 = ((code12 + ::Std_obj::string(t)) + HX_(", ",74,26,00,00));
HXDLIN( 256)		::String code14 = ((code13 + ::Std_obj::string(t)) + HX_(", ",74,26,00,00));
HXDLIN( 256)		::String code15 = ((code14 + ::Std_obj::string(cubeMapReg)) + HX_(" <cube,",fb,97,64,7e));
HXLINE( 260)		::String code16;
HXDLIN( 260)		if (vo->useSmoothTextures) {
HXLINE( 260)			code16 = HX_("linear",e5,51,a0,ec);
            		}
            		else {
HXLINE( 260)			code16 = HX_("nearest",5e,18,ca,65);
            		}
HXLINE( 256)		::String code17 = (((((code15 + code16) + HX_(",miplinear>\n",19,28,88,e6)) + HX_("mul ",9c,67,65,48)) + ::Std_obj::string(t)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 256)		code = (code + ((((code17 + ::Std_obj::string(t)) + HX_(", ",74,26,00,00)) + weightRegister) + HX_("\n",0a,00,00,00)));
HXLINE( 263)		if (::hx::IsNotNull( this->_modulateMethod )) {
HXLINE( 264)			code = (code + ::Std_obj::string(this->_modulateMethod(vo,t,regCache,this->_sharedRegisters)));
            		}
HXLINE( 266)		if (!(this->_isFirstLight)) {
HXLINE( 267)			::String code1 = ((HX_("add ",df,ea,69,40) + ::Std_obj::string(this->_totalLightColorReg)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 267)			::String code2 = ((code1 + ::Std_obj::string(this->_totalLightColorReg)) + HX_(", ",74,26,00,00));
HXDLIN( 267)			code = (code + ((code2 + ::Std_obj::string(t)) + HX_("\n",0a,00,00,00)));
HXLINE( 268)			regCache->removeFragmentTempUsage(t);
            		}
HXLINE( 271)		this->_isFirstLight = false;
HXLINE( 273)		return code;
            	}


::String BasicSpecularMethod_obj::getFragmentPostLightingCode( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterCache regCache, ::away3d::materials::compilation::ShaderRegisterElement targetReg){
            	HX_STACKFRAME(&_hx_pos_bb72c68215b9ebfc_280_getFragmentPostLightingCode)
HXLINE( 281)		::String code = HX_("",00,00,00,00);
HXLINE( 283)		if ((vo->numLights == 0)) {
HXLINE( 284)			return code;
            		}
HXLINE( 286)		if (::hx::IsNotNull( this->_shadowRegister )) {
HXLINE( 287)			::String code1 = ((HX_("mul ",9c,67,65,48) + ::Std_obj::string(this->_totalLightColorReg)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 287)			::String code2 = ((code1 + ::Std_obj::string(this->_totalLightColorReg)) + HX_(", ",74,26,00,00));
HXDLIN( 287)			code = (code + ((code2 + ::Std_obj::string(this->_shadowRegister)) + HX_(".w\n",61,4f,23,00)));
            		}
HXLINE( 289)		if (this->_useTexture) {
HXLINE( 291)			::String code1 = ((HX_("mul ",9c,67,65,48) + ::Std_obj::string(this->_totalLightColorReg)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 291)			::String code2 = ((code1 + ::Std_obj::string(this->_totalLightColorReg)) + HX_(", ",74,26,00,00));
HXDLIN( 291)			code = (code + ((code2 + ::Std_obj::string(this->_specularTexData)) + HX_(".x\n",40,50,23,00)));
HXLINE( 292)			regCache->removeFragmentTempUsage(this->_specularTexData);
            		}
HXLINE( 296)		::String code1 = ((HX_("mul ",9c,67,65,48) + ::Std_obj::string(this->_totalLightColorReg)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 296)		::String code2 = ((code1 + ::Std_obj::string(this->_totalLightColorReg)) + HX_(", ",74,26,00,00));
HXDLIN( 296)		::String code3 = (((code2 + ::Std_obj::string(this->_specularDataRegister)) + HX_("\n",0a,00,00,00)) + HX_("add ",df,ea,69,40));
HXDLIN( 296)		::String code4 = ((code3 + ::Std_obj::string(targetReg)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 296)		::String code5 = ((code4 + ::Std_obj::string(targetReg)) + HX_(", ",74,26,00,00));
HXDLIN( 296)		code = (code + ((code5 + ::Std_obj::string(this->_totalLightColorReg)) + HX_("\n",0a,00,00,00)));
HXLINE( 298)		regCache->removeFragmentTempUsage(this->_totalLightColorReg);
HXLINE( 300)		return code;
            	}


void BasicSpecularMethod_obj::activate( ::away3d::materials::methods::MethodVO vo, ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_bb72c68215b9ebfc_307_activate)
HXLINE( 310)		if ((vo->numLights == 0)) {
HXLINE( 311)			return;
            		}
HXLINE( 313)		if (this->_useTexture) {
HXLINE( 315)			 ::openfl::display3D::Context3D stage3DProxy1 = stage3DProxy->_context3D;
HXLINE( 316)			int vo1 = vo->texturesIndex;
HXDLIN( 316)			 ::Dynamic _hx_tmp;
HXDLIN( 316)			if (vo->repeatTextures) {
HXLINE( 316)				_hx_tmp = 2;
            			}
            			else {
HXLINE( 316)				_hx_tmp = 0;
            			}
HXLINE( 317)			 ::Dynamic _hx_tmp1 = this->getSmoothingFilter(vo->useSmoothTextures,vo->anisotropy);
HXLINE( 318)			 ::Dynamic _hx_tmp2;
HXDLIN( 318)			if (vo->useMipmapping) {
HXLINE( 318)				_hx_tmp2 = 0;
            			}
            			else {
HXLINE( 318)				_hx_tmp2 = 2;
            			}
HXLINE( 315)			stage3DProxy1->setSamplerStateAt(vo1,_hx_tmp,_hx_tmp1,_hx_tmp2);
HXLINE( 320)			 ::openfl::display3D::Context3D stage3DProxy2 = stage3DProxy->_context3D;
HXDLIN( 320)			int vo2 = vo->texturesIndex;
HXDLIN( 320)			stage3DProxy2->setTextureAt(vo2,this->_texture->getTextureForStage3D(stage3DProxy));
            		}
HXLINE( 322)		int index = vo->fragmentConstantsIndex;
HXLINE( 323)		 ::openfl::_Vector::FloatVector data = vo->fragmentData;
HXLINE( 324)		data->set(index,this->_specularR);
HXLINE( 325)		data->set((index + 1),this->_specularG);
HXLINE( 326)		data->set((index + 2),this->_specularB);
HXLINE( 327)		data->set((index + 3),this->_gloss);
            	}


void BasicSpecularMethod_obj::updateSpecular(){
            	HX_STACKFRAME(&_hx_pos_bb72c68215b9ebfc_334_updateSpecular)
HXLINE( 335)		int _hx_int = (::hx::UShr(this->_specularColor,16) & 255);
HXDLIN( 335)		Float _hx_tmp;
HXDLIN( 335)		if ((_hx_int < 0)) {
HXLINE( 335)			_hx_tmp = (((Float)4294967296.0) + _hx_int);
            		}
            		else {
HXLINE( 335)			_hx_tmp = (_hx_int + ((Float)0.0));
            		}
HXDLIN( 335)		int int1 = 255;
HXDLIN( 335)		Float _hx_tmp1;
HXDLIN( 335)		if ((int1 < 0)) {
HXLINE( 335)			_hx_tmp1 = (((Float)4294967296.0) + int1);
            		}
            		else {
HXLINE( 335)			_hx_tmp1 = (int1 + ((Float)0.0));
            		}
HXDLIN( 335)		this->_specularR = ((_hx_tmp / _hx_tmp1) * this->_specular);
HXLINE( 336)		int int2 = (::hx::UShr(this->_specularColor,8) & 255);
HXDLIN( 336)		Float _hx_tmp2;
HXDLIN( 336)		if ((int2 < 0)) {
HXLINE( 336)			_hx_tmp2 = (((Float)4294967296.0) + int2);
            		}
            		else {
HXLINE( 336)			_hx_tmp2 = (int2 + ((Float)0.0));
            		}
HXDLIN( 336)		int int3 = 255;
HXDLIN( 336)		Float _hx_tmp3;
HXDLIN( 336)		if ((int3 < 0)) {
HXLINE( 336)			_hx_tmp3 = (((Float)4294967296.0) + int3);
            		}
            		else {
HXLINE( 336)			_hx_tmp3 = (int3 + ((Float)0.0));
            		}
HXDLIN( 336)		this->_specularG = ((_hx_tmp2 / _hx_tmp3) * this->_specular);
HXLINE( 337)		int int4 = (this->_specularColor & 255);
HXDLIN( 337)		Float _hx_tmp4;
HXDLIN( 337)		if ((int4 < 0)) {
HXLINE( 337)			_hx_tmp4 = (((Float)4294967296.0) + int4);
            		}
            		else {
HXLINE( 337)			_hx_tmp4 = (int4 + ((Float)0.0));
            		}
HXDLIN( 337)		int int5 = 255;
HXDLIN( 337)		Float _hx_tmp5;
HXDLIN( 337)		if ((int5 < 0)) {
HXLINE( 337)			_hx_tmp5 = (((Float)4294967296.0) + int5);
            		}
            		else {
HXLINE( 337)			_hx_tmp5 = (int5 + ((Float)0.0));
            		}
HXDLIN( 337)		this->_specularB = ((_hx_tmp4 / _hx_tmp5) * this->_specular);
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicSpecularMethod_obj,updateSpecular,(void))

 ::away3d::materials::compilation::ShaderRegisterElement BasicSpecularMethod_obj::set_shadowRegister( ::away3d::materials::compilation::ShaderRegisterElement shadowReg){
            	HX_STACKFRAME(&_hx_pos_bb72c68215b9ebfc_344_set_shadowRegister)
HXLINE( 345)		this->_shadowRegister = shadowReg;
HXLINE( 346)		return shadowReg;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BasicSpecularMethod_obj,set_shadowRegister,return )


::hx::ObjectPtr< BasicSpecularMethod_obj > BasicSpecularMethod_obj::__new() {
	::hx::ObjectPtr< BasicSpecularMethod_obj > __this = new BasicSpecularMethod_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< BasicSpecularMethod_obj > BasicSpecularMethod_obj::__alloc(::hx::Ctx *_hx_ctx) {
	BasicSpecularMethod_obj *__this = (BasicSpecularMethod_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BasicSpecularMethod_obj), true, "away3d.materials.methods.BasicSpecularMethod"));
	*(void **)__this = BasicSpecularMethod_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BasicSpecularMethod_obj::BasicSpecularMethod_obj()
{
}

void BasicSpecularMethod_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BasicSpecularMethod);
	HX_MARK_MEMBER_NAME(_useTexture,"_useTexture");
	HX_MARK_MEMBER_NAME(_totalLightColorReg,"_totalLightColorReg");
	HX_MARK_MEMBER_NAME(_specularTextureRegister,"_specularTextureRegister");
	HX_MARK_MEMBER_NAME(_specularTexData,"_specularTexData");
	HX_MARK_MEMBER_NAME(_specularDataRegister,"_specularDataRegister");
	HX_MARK_MEMBER_NAME(_texture,"_texture");
	HX_MARK_MEMBER_NAME(_gloss,"_gloss");
	HX_MARK_MEMBER_NAME(_specular,"_specular");
	HX_MARK_MEMBER_NAME(_specularColor,"_specularColor");
	HX_MARK_MEMBER_NAME(_specularR,"_specularR");
	HX_MARK_MEMBER_NAME(_specularG,"_specularG");
	HX_MARK_MEMBER_NAME(_specularB,"_specularB");
	HX_MARK_MEMBER_NAME(_shadowRegister,"_shadowRegister");
	HX_MARK_MEMBER_NAME(_isFirstLight,"_isFirstLight");
	 ::away3d::materials::methods::LightingMethodBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BasicSpecularMethod_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_useTexture,"_useTexture");
	HX_VISIT_MEMBER_NAME(_totalLightColorReg,"_totalLightColorReg");
	HX_VISIT_MEMBER_NAME(_specularTextureRegister,"_specularTextureRegister");
	HX_VISIT_MEMBER_NAME(_specularTexData,"_specularTexData");
	HX_VISIT_MEMBER_NAME(_specularDataRegister,"_specularDataRegister");
	HX_VISIT_MEMBER_NAME(_texture,"_texture");
	HX_VISIT_MEMBER_NAME(_gloss,"_gloss");
	HX_VISIT_MEMBER_NAME(_specular,"_specular");
	HX_VISIT_MEMBER_NAME(_specularColor,"_specularColor");
	HX_VISIT_MEMBER_NAME(_specularR,"_specularR");
	HX_VISIT_MEMBER_NAME(_specularG,"_specularG");
	HX_VISIT_MEMBER_NAME(_specularB,"_specularB");
	HX_VISIT_MEMBER_NAME(_shadowRegister,"_shadowRegister");
	HX_VISIT_MEMBER_NAME(_isFirstLight,"_isFirstLight");
	 ::away3d::materials::methods::LightingMethodBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BasicSpecularMethod_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"gloss") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_gloss() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_gloss") ) { return ::hx::Val( _gloss ); }
		if (HX_FIELD_EQ(inName,"initVO") ) { return ::hx::Val( initVO_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_texture() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"specular") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_specular() ); }
		if (HX_FIELD_EQ(inName,"_texture") ) { return ::hx::Val( _texture ); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return ::hx::Val( copyFrom_dyn() ); }
		if (HX_FIELD_EQ(inName,"activate") ) { return ::hx::Val( activate_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_specular") ) { return ::hx::Val( _specular ); }
		if (HX_FIELD_EQ(inName,"get_gloss") ) { return ::hx::Val( get_gloss_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_gloss") ) { return ::hx::Val( set_gloss_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_specularR") ) { return ::hx::Val( _specularR ); }
		if (HX_FIELD_EQ(inName,"_specularG") ) { return ::hx::Val( _specularG ); }
		if (HX_FIELD_EQ(inName,"_specularB") ) { return ::hx::Val( _specularB ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_useTexture") ) { return ::hx::Val( _useTexture ); }
		if (HX_FIELD_EQ(inName,"get_texture") ) { return ::hx::Val( get_texture_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_texture") ) { return ::hx::Val( set_texture_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_specular") ) { return ::hx::Val( get_specular_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_specular") ) { return ::hx::Val( set_specular_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"specularColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_specularColor() ); }
		if (HX_FIELD_EQ(inName,"_isFirstLight") ) { return ::hx::Val( _isFirstLight ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_specularColor") ) { return ::hx::Val( _specularColor ); }
		if (HX_FIELD_EQ(inName,"updateSpecular") ) { return ::hx::Val( updateSpecular_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_shadowRegister") ) { return ::hx::Val( _shadowRegister ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_specularTexData") ) { return ::hx::Val( _specularTexData ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_specularColor") ) { return ::hx::Val( get_specularColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_specularColor") ) { return ::hx::Val( set_specularColor_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_shadowRegister") ) { return ::hx::Val( set_shadowRegister_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_totalLightColorReg") ) { return ::hx::Val( _totalLightColorReg ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"cleanCompilationData") ) { return ::hx::Val( cleanCompilationData_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_specularDataRegister") ) { return ::hx::Val( _specularDataRegister ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getFragmentCodePerLight") ) { return ::hx::Val( getFragmentCodePerLight_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFragmentCodePerProbe") ) { return ::hx::Val( getFragmentCodePerProbe_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_specularTextureRegister") ) { return ::hx::Val( _specularTextureRegister ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"getFragmentPreLightingCode") ) { return ::hx::Val( getFragmentPreLightingCode_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"getFragmentPostLightingCode") ) { return ::hx::Val( getFragmentPostLightingCode_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BasicSpecularMethod_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"gloss") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_gloss(inValue.Cast< Float >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_gloss") ) { _gloss=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_texture(inValue.Cast<  ::away3d::textures::Texture2DBase >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"specular") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_specular(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"_texture") ) { _texture=inValue.Cast<  ::away3d::textures::Texture2DBase >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_specular") ) { _specular=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_specularR") ) { _specularR=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_specularG") ) { _specularG=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_specularB") ) { _specularB=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_useTexture") ) { _useTexture=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"specularColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_specularColor(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"_isFirstLight") ) { _isFirstLight=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"shadowRegister") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_shadowRegister(inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >()) ); }
		if (HX_FIELD_EQ(inName,"_specularColor") ) { _specularColor=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_shadowRegister") ) { _shadowRegister=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_specularTexData") ) { _specularTexData=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_totalLightColorReg") ) { _totalLightColorReg=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_specularDataRegister") ) { _specularDataRegister=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_specularTextureRegister") ) { _specularTextureRegister=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BasicSpecularMethod_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("gloss",ca,69,fd,95));
	outFields->push(HX_("specular",c3,56,6c,93));
	outFields->push(HX_("specularColor",a0,27,3d,0b));
	outFields->push(HX_("texture",db,c8,e0,9e));
	outFields->push(HX_("shadowRegister",63,0a,4d,23));
	outFields->push(HX_("_useTexture",73,b8,1d,74));
	outFields->push(HX_("_totalLightColorReg",62,68,8f,70));
	outFields->push(HX_("_specularTextureRegister",5c,ee,75,90));
	outFields->push(HX_("_specularTexData",af,21,1f,ad));
	outFields->push(HX_("_specularDataRegister",ef,37,78,44));
	outFields->push(HX_("_texture",5c,22,99,d8));
	outFields->push(HX_("_gloss",0b,b1,e4,91));
	outFields->push(HX_("_specular",22,4e,02,db));
	outFields->push(HX_("_specularColor",e1,17,8f,49));
	outFields->push(HX_("_specularR",f0,0f,02,c7));
	outFields->push(HX_("_specularG",e5,0f,02,c7));
	outFields->push(HX_("_specularB",e0,0f,02,c7));
	outFields->push(HX_("_shadowRegister",02,53,ad,6c));
	outFields->push(HX_("_isFirstLight",ef,95,68,67));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BasicSpecularMethod_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(BasicSpecularMethod_obj,_useTexture),HX_("_useTexture",73,b8,1d,74)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(BasicSpecularMethod_obj,_totalLightColorReg),HX_("_totalLightColorReg",62,68,8f,70)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(BasicSpecularMethod_obj,_specularTextureRegister),HX_("_specularTextureRegister",5c,ee,75,90)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(BasicSpecularMethod_obj,_specularTexData),HX_("_specularTexData",af,21,1f,ad)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(BasicSpecularMethod_obj,_specularDataRegister),HX_("_specularDataRegister",ef,37,78,44)},
	{::hx::fsObject /*  ::away3d::textures::Texture2DBase */ ,(int)offsetof(BasicSpecularMethod_obj,_texture),HX_("_texture",5c,22,99,d8)},
	{::hx::fsFloat,(int)offsetof(BasicSpecularMethod_obj,_gloss),HX_("_gloss",0b,b1,e4,91)},
	{::hx::fsFloat,(int)offsetof(BasicSpecularMethod_obj,_specular),HX_("_specular",22,4e,02,db)},
	{::hx::fsInt,(int)offsetof(BasicSpecularMethod_obj,_specularColor),HX_("_specularColor",e1,17,8f,49)},
	{::hx::fsFloat,(int)offsetof(BasicSpecularMethod_obj,_specularR),HX_("_specularR",f0,0f,02,c7)},
	{::hx::fsFloat,(int)offsetof(BasicSpecularMethod_obj,_specularG),HX_("_specularG",e5,0f,02,c7)},
	{::hx::fsFloat,(int)offsetof(BasicSpecularMethod_obj,_specularB),HX_("_specularB",e0,0f,02,c7)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(BasicSpecularMethod_obj,_shadowRegister),HX_("_shadowRegister",02,53,ad,6c)},
	{::hx::fsBool,(int)offsetof(BasicSpecularMethod_obj,_isFirstLight),HX_("_isFirstLight",ef,95,68,67)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BasicSpecularMethod_obj_sStaticStorageInfo = 0;
#endif

static ::String BasicSpecularMethod_obj_sMemberFields[] = {
	HX_("_useTexture",73,b8,1d,74),
	HX_("_totalLightColorReg",62,68,8f,70),
	HX_("_specularTextureRegister",5c,ee,75,90),
	HX_("_specularTexData",af,21,1f,ad),
	HX_("_specularDataRegister",ef,37,78,44),
	HX_("_texture",5c,22,99,d8),
	HX_("_gloss",0b,b1,e4,91),
	HX_("_specular",22,4e,02,db),
	HX_("_specularColor",e1,17,8f,49),
	HX_("_specularR",f0,0f,02,c7),
	HX_("_specularG",e5,0f,02,c7),
	HX_("_specularB",e0,0f,02,c7),
	HX_("_shadowRegister",02,53,ad,6c),
	HX_("_isFirstLight",ef,95,68,67),
	HX_("initVO",49,6a,4c,97),
	HX_("get_gloss",21,c6,a6,d9),
	HX_("set_gloss",2d,b2,f7,bc),
	HX_("get_specular",cc,0a,86,48),
	HX_("set_specular",40,2e,7f,5d),
	HX_("get_specularColor",f7,32,ad,11),
	HX_("set_specularColor",03,0b,1b,35),
	HX_("get_texture",f2,28,db,24),
	HX_("set_texture",fe,2f,48,2f),
	HX_("copyFrom",bf,0b,61,c8),
	HX_("cleanCompilationData",04,2f,dd,d4),
	HX_("getFragmentPreLightingCode",f6,59,1b,b5),
	HX_("getFragmentCodePerLight",ac,ec,39,19),
	HX_("getFragmentCodePerProbe",06,37,cd,6c),
	HX_("getFragmentPostLightingCode",3f,a4,ff,89),
	HX_("activate",b3,1b,ac,e5),
	HX_("updateSpecular",ec,49,96,c8),
	HX_("set_shadowRegister",a0,1d,96,9b),
	::String(null()) };

::hx::Class BasicSpecularMethod_obj::__mClass;

void BasicSpecularMethod_obj::__register()
{
	BasicSpecularMethod_obj _hx_dummy;
	BasicSpecularMethod_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.materials.methods.BasicSpecularMethod",c5,4d,60,65);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BasicSpecularMethod_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BasicSpecularMethod_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BasicSpecularMethod_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BasicSpecularMethod_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace materials
} // end namespace methods
