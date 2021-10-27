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
#ifndef INCLUDED_away3d_materials_methods_BasicDiffuseMethod
#include <away3d/materials/methods/BasicDiffuseMethod.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_015691dd5093d651_16_new,"away3d.materials.methods.BasicDiffuseMethod","new",0xe2eec734,"away3d.materials.methods.BasicDiffuseMethod.new","away3d/materials/methods/BasicDiffuseMethod.hx",16,0x469cf499)
HX_LOCAL_STACK_FRAME(_hx_pos_015691dd5093d651_57_get_useAmbientTexture,"away3d.materials.methods.BasicDiffuseMethod","get_useAmbientTexture",0xeb0e58f5,"away3d.materials.methods.BasicDiffuseMethod.get_useAmbientTexture","away3d/materials/methods/BasicDiffuseMethod.hx",57,0x469cf499)
HX_LOCAL_STACK_FRAME(_hx_pos_015691dd5093d651_61_set_useAmbientTexture,"away3d.materials.methods.BasicDiffuseMethod","set_useAmbientTexture",0x3f172701,"away3d.materials.methods.BasicDiffuseMethod.set_useAmbientTexture","away3d/materials/methods/BasicDiffuseMethod.hx",61,0x469cf499)
HX_LOCAL_STACK_FRAME(_hx_pos_015691dd5093d651_72_initVO,"away3d.materials.methods.BasicDiffuseMethod","initVO",0xf7906ff5,"away3d.materials.methods.BasicDiffuseMethod.initVO","away3d/materials/methods/BasicDiffuseMethod.hx",72,0x469cf499)
HX_LOCAL_STACK_FRAME(_hx_pos_015691dd5093d651_83_generateMip,"away3d.materials.methods.BasicDiffuseMethod","generateMip",0xfd920433,"away3d.materials.methods.BasicDiffuseMethod.generateMip","away3d/materials/methods/BasicDiffuseMethod.hx",83,0x469cf499)
HX_LOCAL_STACK_FRAME(_hx_pos_015691dd5093d651_92_get_diffuseAlpha,"away3d.materials.methods.BasicDiffuseMethod","get_diffuseAlpha",0xec49b3d1,"away3d.materials.methods.BasicDiffuseMethod.get_diffuseAlpha","away3d/materials/methods/BasicDiffuseMethod.hx",92,0x469cf499)
HX_LOCAL_STACK_FRAME(_hx_pos_015691dd5093d651_96_set_diffuseAlpha,"away3d.materials.methods.BasicDiffuseMethod","set_diffuseAlpha",0x428ba145,"away3d.materials.methods.BasicDiffuseMethod.set_diffuseAlpha","away3d/materials/methods/BasicDiffuseMethod.hx",96,0x469cf499)
HX_LOCAL_STACK_FRAME(_hx_pos_015691dd5093d651_106_get_diffuseColor,"away3d.materials.methods.BasicDiffuseMethod","get_diffuseColor",0x150f7dd6,"away3d.materials.methods.BasicDiffuseMethod.get_diffuseColor","away3d/materials/methods/BasicDiffuseMethod.hx",106,0x469cf499)
HX_LOCAL_STACK_FRAME(_hx_pos_015691dd5093d651_110_set_diffuseColor,"away3d.materials.methods.BasicDiffuseMethod","set_diffuseColor",0x6b516b4a,"away3d.materials.methods.BasicDiffuseMethod.set_diffuseColor","away3d/materials/methods/BasicDiffuseMethod.hx",110,0x469cf499)
HX_LOCAL_STACK_FRAME(_hx_pos_015691dd5093d651_121_get_texture,"away3d.materials.methods.BasicDiffuseMethod","get_texture",0xdc4713c6,"away3d.materials.methods.BasicDiffuseMethod.get_texture","away3d/materials/methods/BasicDiffuseMethod.hx",121,0x469cf499)
HX_LOCAL_STACK_FRAME(_hx_pos_015691dd5093d651_125_set_texture,"away3d.materials.methods.BasicDiffuseMethod","set_texture",0xe6b41ad2,"away3d.materials.methods.BasicDiffuseMethod.set_texture","away3d/materials/methods/BasicDiffuseMethod.hx",125,0x469cf499)
HX_LOCAL_STACK_FRAME(_hx_pos_015691dd5093d651_143_get_alphaThreshold,"away3d.materials.methods.BasicDiffuseMethod","get_alphaThreshold",0xf350d8e2,"away3d.materials.methods.BasicDiffuseMethod.get_alphaThreshold","away3d/materials/methods/BasicDiffuseMethod.hx",143,0x469cf499)
HX_LOCAL_STACK_FRAME(_hx_pos_015691dd5093d651_147_set_alphaThreshold,"away3d.materials.methods.BasicDiffuseMethod","set_alphaThreshold",0xd0000b56,"away3d.materials.methods.BasicDiffuseMethod.set_alphaThreshold","away3d/materials/methods/BasicDiffuseMethod.hx",147,0x469cf499)
HX_LOCAL_STACK_FRAME(_hx_pos_015691dd5093d651_166_dispose,"away3d.materials.methods.BasicDiffuseMethod","dispose",0x968d7173,"away3d.materials.methods.BasicDiffuseMethod.dispose","away3d/materials/methods/BasicDiffuseMethod.hx",166,0x469cf499)
HX_LOCAL_STACK_FRAME(_hx_pos_015691dd5093d651_173_copyFrom,"away3d.materials.methods.BasicDiffuseMethod","copyFrom",0xc5f2d46b,"away3d.materials.methods.BasicDiffuseMethod.copyFrom","away3d/materials/methods/BasicDiffuseMethod.hx",173,0x469cf499)
HX_LOCAL_STACK_FRAME(_hx_pos_015691dd5093d651_186_cleanCompilationData,"away3d.materials.methods.BasicDiffuseMethod","cleanCompilationData",0xa74f49b0,"away3d.materials.methods.BasicDiffuseMethod.cleanCompilationData","away3d/materials/methods/BasicDiffuseMethod.hx",186,0x469cf499)
HX_LOCAL_STACK_FRAME(_hx_pos_015691dd5093d651_197_getFragmentPreLightingCode,"away3d.materials.methods.BasicDiffuseMethod","getFragmentPreLightingCode",0x0788bda2,"away3d.materials.methods.BasicDiffuseMethod.getFragmentPreLightingCode","away3d/materials/methods/BasicDiffuseMethod.hx",197,0x469cf499)
HX_LOCAL_STACK_FRAME(_hx_pos_015691dd5093d651_214_getFragmentCodePerLight,"away3d.materials.methods.BasicDiffuseMethod","getFragmentCodePerLight",0x7b44c580,"away3d.materials.methods.BasicDiffuseMethod.getFragmentCodePerLight","away3d/materials/methods/BasicDiffuseMethod.hx",214,0x469cf499)
HX_LOCAL_STACK_FRAME(_hx_pos_015691dd5093d651_251_getFragmentCodePerProbe,"away3d.materials.methods.BasicDiffuseMethod","getFragmentCodePerProbe",0xced80fda,"away3d.materials.methods.BasicDiffuseMethod.getFragmentCodePerProbe","away3d/materials/methods/BasicDiffuseMethod.hx",251,0x469cf499)
HX_LOCAL_STACK_FRAME(_hx_pos_015691dd5093d651_283_getFragmentPostLightingCode,"away3d.materials.methods.BasicDiffuseMethod","getFragmentPostLightingCode",0x57497713,"away3d.materials.methods.BasicDiffuseMethod.getFragmentPostLightingCode","away3d/materials/methods/BasicDiffuseMethod.hx",283,0x469cf499)
HX_LOCAL_STACK_FRAME(_hx_pos_015691dd5093d651_348_applyShadow,"away3d.materials.methods.BasicDiffuseMethod","applyShadow",0x108772c2,"away3d.materials.methods.BasicDiffuseMethod.applyShadow","away3d/materials/methods/BasicDiffuseMethod.hx",348,0x469cf499)
HX_LOCAL_STACK_FRAME(_hx_pos_015691dd5093d651_356_activate,"away3d.materials.methods.BasicDiffuseMethod","activate",0xe33de45f,"away3d.materials.methods.BasicDiffuseMethod.activate","away3d/materials/methods/BasicDiffuseMethod.hx",356,0x469cf499)
HX_LOCAL_STACK_FRAME(_hx_pos_015691dd5093d651_380_updateDiffuse,"away3d.materials.methods.BasicDiffuseMethod","updateDiffuse",0x5e490e2d,"away3d.materials.methods.BasicDiffuseMethod.updateDiffuse","away3d/materials/methods/BasicDiffuseMethod.hx",380,0x469cf499)
HX_LOCAL_STACK_FRAME(_hx_pos_015691dd5093d651_390_set_shadowRegister,"away3d.materials.methods.BasicDiffuseMethod","set_shadowRegister",0xf1a1f54c,"away3d.materials.methods.BasicDiffuseMethod.set_shadowRegister","away3d/materials/methods/BasicDiffuseMethod.hx",390,0x469cf499)
namespace away3d{
namespace materials{
namespace methods{

void BasicDiffuseMethod_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_015691dd5093d651_16_new)
HXLINE(  41)		this->_alphaThreshold = ((Float)0);
HXLINE(  38)		this->_diffuseA = ((Float)1);
HXLINE(  37)		this->_diffuseB = ((Float)1);
HXLINE(  36)		this->_diffuseG = ((Float)1);
HXLINE(  35)		this->_diffuseR = ((Float)1);
HXLINE(  34)		this->_diffuseColor = 16777215;
HXLINE(  49)		super::__construct();
            	}

Dynamic BasicDiffuseMethod_obj::__CreateEmpty() { return new BasicDiffuseMethod_obj; }

void *BasicDiffuseMethod_obj::_hx_vtable = 0;

Dynamic BasicDiffuseMethod_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BasicDiffuseMethod_obj > _hx_result = new BasicDiffuseMethod_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BasicDiffuseMethod_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		if (inClassId<=(int)0x0446cf5e) {
			if (inClassId<=(int)0x011e2747) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x011e2747;
			} else {
				return inClassId==(int)0x0446cf5e;
			}
		} else {
			return inClassId==(int)0x0c89e854;
		}
	} else {
		return inClassId==(int)0x12886923 || inClassId==(int)0x37f46043;
	}
}

bool BasicDiffuseMethod_obj::get_useAmbientTexture(){
            	HX_STACKFRAME(&_hx_pos_015691dd5093d651_57_get_useAmbientTexture)
HXDLIN(  57)		return this->_useAmbientTexture;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicDiffuseMethod_obj,get_useAmbientTexture,return )

bool BasicDiffuseMethod_obj::set_useAmbientTexture(bool value){
            	HX_STACKFRAME(&_hx_pos_015691dd5093d651_61_set_useAmbientTexture)
HXLINE(  62)		if ((this->_useAmbientTexture == value)) {
HXLINE(  63)			return value;
            		}
HXLINE(  65)		this->_useAmbientTexture = value;
HXLINE(  67)		this->invalidateShaderProgram();
HXLINE(  68)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BasicDiffuseMethod_obj,set_useAmbientTexture,return )

void BasicDiffuseMethod_obj::initVO( ::away3d::materials::methods::MethodVO vo){
            	HX_STACKFRAME(&_hx_pos_015691dd5093d651_72_initVO)
HXLINE(  73)		vo->needsUV = this->_useTexture;
HXLINE(  74)		vo->needsNormals = (vo->numLights > 0);
            	}


void BasicDiffuseMethod_obj::generateMip( ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_015691dd5093d651_83_generateMip)
HXDLIN(  83)		if (this->_useTexture) {
HXLINE(  84)			this->_texture->getTextureForStage3D(stage3DProxy);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BasicDiffuseMethod_obj,generateMip,(void))

Float BasicDiffuseMethod_obj::get_diffuseAlpha(){
            	HX_STACKFRAME(&_hx_pos_015691dd5093d651_92_get_diffuseAlpha)
HXDLIN(  92)		return this->_diffuseA;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicDiffuseMethod_obj,get_diffuseAlpha,return )

Float BasicDiffuseMethod_obj::set_diffuseAlpha(Float value){
            	HX_STACKFRAME(&_hx_pos_015691dd5093d651_96_set_diffuseAlpha)
HXLINE(  97)		this->_diffuseA = value;
HXLINE(  98)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BasicDiffuseMethod_obj,set_diffuseAlpha,return )

int BasicDiffuseMethod_obj::get_diffuseColor(){
            	HX_STACKFRAME(&_hx_pos_015691dd5093d651_106_get_diffuseColor)
HXDLIN( 106)		return this->_diffuseColor;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicDiffuseMethod_obj,get_diffuseColor,return )

int BasicDiffuseMethod_obj::set_diffuseColor(int diffuseColor){
            	HX_STACKFRAME(&_hx_pos_015691dd5093d651_110_set_diffuseColor)
HXLINE( 111)		this->_diffuseColor = diffuseColor;
HXLINE( 112)		this->updateDiffuse();
HXLINE( 113)		return diffuseColor;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BasicDiffuseMethod_obj,set_diffuseColor,return )

 ::away3d::textures::Texture2DBase BasicDiffuseMethod_obj::get_texture(){
            	HX_STACKFRAME(&_hx_pos_015691dd5093d651_121_get_texture)
HXDLIN( 121)		return this->_texture;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicDiffuseMethod_obj,get_texture,return )

 ::away3d::textures::Texture2DBase BasicDiffuseMethod_obj::set_texture( ::away3d::textures::Texture2DBase value){
            	HX_STACKFRAME(&_hx_pos_015691dd5093d651_125_set_texture)
HXLINE( 126)		bool _hx_tmp;
HXDLIN( 126)		if ((::hx::IsNotNull( value ) == this->_useTexture)) {
HXLINE( 127)			bool _hx_tmp1;
HXDLIN( 127)			if (::hx::IsNotNull( value )) {
HXLINE( 127)				_hx_tmp1 = ::hx::IsNotNull( this->_texture );
            			}
            			else {
HXLINE( 127)				_hx_tmp1 = false;
            			}
HXDLIN( 127)			if (_hx_tmp1) {
HXLINE( 127)				bool _hx_tmp1 = value->get_hasMipMaps();
HXDLIN( 127)				if ((_hx_tmp1 == this->_texture->get_hasMipMaps())) {
HXLINE( 127)					 ::Dynamic _hx_tmp1 = value->get_format();
HXLINE( 126)					_hx_tmp = ::hx::IsNotEq( _hx_tmp1,this->_texture->get_format() );
            				}
            				else {
HXLINE( 126)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE( 126)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE( 126)			_hx_tmp = true;
            		}
HXDLIN( 126)		if (_hx_tmp) {
HXLINE( 128)			this->invalidateShaderProgram();
            		}
HXLINE( 131)		this->_useTexture = ::hx::IsNotNull( value );
HXLINE( 132)		this->_texture = value;
HXLINE( 133)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BasicDiffuseMethod_obj,set_texture,return )

Float BasicDiffuseMethod_obj::get_alphaThreshold(){
            	HX_STACKFRAME(&_hx_pos_015691dd5093d651_143_get_alphaThreshold)
HXDLIN( 143)		return this->_alphaThreshold;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicDiffuseMethod_obj,get_alphaThreshold,return )

Float BasicDiffuseMethod_obj::set_alphaThreshold(Float value){
            	HX_STACKFRAME(&_hx_pos_015691dd5093d651_147_set_alphaThreshold)
HXLINE( 148)		if ((value < 0)) {
HXLINE( 149)			value = ( (Float)(0) );
            		}
            		else {
HXLINE( 150)			if ((value > 1)) {
HXLINE( 151)				value = ( (Float)(1) );
            			}
            		}
HXLINE( 152)		if ((value == this->_alphaThreshold)) {
HXLINE( 153)			return value;
            		}
HXLINE( 155)		bool _hx_tmp;
HXDLIN( 155)		if ((value != 0)) {
HXLINE( 155)			_hx_tmp = (this->_alphaThreshold == 0);
            		}
            		else {
HXLINE( 155)			_hx_tmp = true;
            		}
HXDLIN( 155)		if (_hx_tmp) {
HXLINE( 156)			this->invalidateShaderProgram();
            		}
HXLINE( 158)		this->_alphaThreshold = value;
HXLINE( 159)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BasicDiffuseMethod_obj,set_alphaThreshold,return )

void BasicDiffuseMethod_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_015691dd5093d651_166_dispose)
HXDLIN( 166)		this->_texture = null();
            	}


void BasicDiffuseMethod_obj::copyFrom( ::away3d::materials::methods::ShadingMethodBase method){
            	HX_STACKFRAME(&_hx_pos_015691dd5093d651_173_copyFrom)
HXLINE( 174)		 ::away3d::materials::methods::BasicDiffuseMethod diff = ::hx::TCast<  ::away3d::materials::methods::BasicDiffuseMethod >::cast(method);
HXLINE( 175)		this->set_alphaThreshold(diff->get_alphaThreshold());
HXLINE( 176)		this->set_texture(diff->get_texture());
HXLINE( 177)		this->set_useAmbientTexture(diff->get_useAmbientTexture());
HXLINE( 178)		this->set_diffuseAlpha(diff->get_diffuseAlpha());
HXLINE( 179)		this->set_diffuseColor(diff->get_diffuseColor());
            	}


void BasicDiffuseMethod_obj::cleanCompilationData(){
            	HX_STACKFRAME(&_hx_pos_015691dd5093d651_186_cleanCompilationData)
HXLINE( 187)		this->super::cleanCompilationData();
HXLINE( 188)		this->_shadowRegister = null();
HXLINE( 189)		this->_totalLightColorReg = null();
HXLINE( 190)		this->_diffuseInputRegister = null();
            	}


::String BasicDiffuseMethod_obj::getFragmentPreLightingCode( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterCache regCache){
            	HX_STACKFRAME(&_hx_pos_015691dd5093d651_197_getFragmentPreLightingCode)
HXLINE( 198)		::String code = HX_("",00,00,00,00);
HXLINE( 200)		this->_isFirstLight = true;
HXLINE( 202)		if ((vo->numLights > 0)) {
HXLINE( 203)			this->_totalLightColorReg = regCache->getFreeFragmentVectorTemp();
HXLINE( 204)			regCache->addFragmentTempUsages(this->_totalLightColorReg,1);
            		}
HXLINE( 207)		return code;
            	}


::String BasicDiffuseMethod_obj::getFragmentCodePerLight( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterElement lightDirReg, ::away3d::materials::compilation::ShaderRegisterElement lightColReg, ::away3d::materials::compilation::ShaderRegisterCache regCache){
            	HX_STACKFRAME(&_hx_pos_015691dd5093d651_214_getFragmentCodePerLight)
HXLINE( 215)		::String code = HX_("",00,00,00,00);
HXLINE( 216)		 ::away3d::materials::compilation::ShaderRegisterElement t;
HXLINE( 219)		if (this->_isFirstLight) {
HXLINE( 220)			t = this->_totalLightColorReg;
            		}
            		else {
HXLINE( 222)			t = regCache->getFreeFragmentVectorTemp();
HXLINE( 223)			regCache->addFragmentTempUsages(t,1);
            		}
HXLINE( 226)		::String code1 = ((HX_("dp3 ",19,7f,6e,42) + ::Std_obj::string(t)) + HX_(".x, ",7e,05,c3,1e));
HXDLIN( 226)		::String code2 = ((code1 + ::Std_obj::string(lightDirReg)) + HX_(", ",74,26,00,00));
HXDLIN( 226)		::String code3 = (((code2 + ::Std_obj::string(this->_sharedRegisters->normalFragment)) + HX_("\n",0a,00,00,00)) + HX_("max ",fc,44,56,48));
HXDLIN( 226)		::String code4 = ((code3 + ::Std_obj::string(t)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN( 226)		::String code5 = ((code4 + ::Std_obj::string(t)) + HX_(".x, ",7e,05,c3,1e));
HXDLIN( 226)		code = (code + ((code5 + ::Std_obj::string(this->_sharedRegisters->commons)) + HX_(".y\n",1f,51,23,00)));
HXLINE( 229)		if (vo->useLightFallOff) {
HXLINE( 230)			::String code1 = ((HX_("mul ",9c,67,65,48) + ::Std_obj::string(t)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN( 230)			::String code2 = ((code1 + ::Std_obj::string(t)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN( 230)			code = (code + ((code2 + ::Std_obj::string(lightDirReg)) + HX_(".w\n",61,4f,23,00)));
            		}
HXLINE( 232)		if (::hx::IsNotNull( this->_modulateMethod )) {
HXLINE( 233)			code = (code + ::Std_obj::string(this->_modulateMethod(vo,t,regCache,this->_sharedRegisters)));
            		}
HXLINE( 235)		::String code6 = ((HX_("mul ",9c,67,65,48) + ::Std_obj::string(t)) + HX_(", ",74,26,00,00));
HXDLIN( 235)		::String code7 = ((code6 + ::Std_obj::string(t)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN( 235)		code = (code + ((code7 + ::Std_obj::string(lightColReg)) + HX_("\n",0a,00,00,00)));
HXLINE( 237)		if (!(this->_isFirstLight)) {
HXLINE( 238)			::String code1 = ((HX_("add ",df,ea,69,40) + ::Std_obj::string(this->_totalLightColorReg)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 238)			::String code2 = ((code1 + ::Std_obj::string(this->_totalLightColorReg)) + HX_(", ",74,26,00,00));
HXDLIN( 238)			code = (code + ((code2 + ::Std_obj::string(t)) + HX_("\n",0a,00,00,00)));
HXLINE( 239)			regCache->removeFragmentTempUsage(t);
            		}
HXLINE( 242)		this->_isFirstLight = false;
HXLINE( 244)		return code;
            	}


::String BasicDiffuseMethod_obj::getFragmentCodePerProbe( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterElement cubeMapReg,::String weightRegister, ::away3d::materials::compilation::ShaderRegisterCache regCache){
            	HX_STACKFRAME(&_hx_pos_015691dd5093d651_251_getFragmentCodePerProbe)
HXLINE( 252)		::String code = HX_("",00,00,00,00);
HXLINE( 253)		 ::away3d::materials::compilation::ShaderRegisterElement t;
HXLINE( 256)		if (this->_isFirstLight) {
HXLINE( 257)			t = this->_totalLightColorReg;
            		}
            		else {
HXLINE( 259)			t = regCache->getFreeFragmentVectorTemp();
HXLINE( 260)			regCache->addFragmentTempUsages(t,1);
            		}
HXLINE( 263)		::String code1 = ((HX_("tex ",59,cc,f9,4c) + ::Std_obj::string(t)) + HX_(", ",74,26,00,00));
HXDLIN( 263)		::String code2 = ((code1 + ::Std_obj::string(this->_sharedRegisters->normalFragment)) + HX_(", ",74,26,00,00));
HXDLIN( 263)		::String code3 = (((code2 + ::Std_obj::string(cubeMapReg)) + HX_(" <cube,linear,miplinear>\n",39,70,37,22)) + HX_("mul ",9c,67,65,48));
HXDLIN( 263)		::String code4 = ((code3 + ::Std_obj::string(t)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 263)		code = (code + ((((code4 + ::Std_obj::string(t)) + HX_(".xyz, ",1f,c0,d7,cc)) + weightRegister) + HX_("\n",0a,00,00,00)));
HXLINE( 266)		if (::hx::IsNotNull( this->_modulateMethod )) {
HXLINE( 267)			code = (code + ::Std_obj::string(this->_modulateMethod(vo,t,regCache,this->_sharedRegisters)));
            		}
HXLINE( 269)		if (!(this->_isFirstLight)) {
HXLINE( 270)			::String code1 = ((HX_("add ",df,ea,69,40) + ::Std_obj::string(this->_totalLightColorReg)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 270)			::String code2 = ((code1 + ::Std_obj::string(this->_totalLightColorReg)) + HX_(", ",74,26,00,00));
HXDLIN( 270)			code = (code + ((code2 + ::Std_obj::string(t)) + HX_("\n",0a,00,00,00)));
HXLINE( 271)			regCache->removeFragmentTempUsage(t);
            		}
HXLINE( 274)		this->_isFirstLight = false;
HXLINE( 276)		return code;
            	}


::String BasicDiffuseMethod_obj::getFragmentPostLightingCode( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterCache regCache, ::away3d::materials::compilation::ShaderRegisterElement targetReg){
            	HX_STACKFRAME(&_hx_pos_015691dd5093d651_283_getFragmentPostLightingCode)
HXLINE( 284)		::String code = HX_("",00,00,00,00);
HXLINE( 285)		 ::away3d::materials::compilation::ShaderRegisterElement albedo;
HXLINE( 286)		 ::away3d::materials::compilation::ShaderRegisterElement cutOffReg;
HXLINE( 289)		if ((vo->numLights > 0)) {
HXLINE( 290)			if (::hx::IsNotNull( this->_shadowRegister )) {
HXLINE( 291)				code = (code + this->applyShadow(vo,regCache));
            			}
HXLINE( 292)			albedo = regCache->getFreeFragmentVectorTemp();
HXLINE( 293)			regCache->addFragmentTempUsages(albedo,1);
            		}
            		else {
HXLINE( 295)			albedo = targetReg;
            		}
HXLINE( 297)		if (this->_useTexture) {
HXLINE( 298)			this->_diffuseInputRegister = regCache->getFreeTextureReg();
HXLINE( 299)			vo->texturesIndex = this->_diffuseInputRegister->get_index();
HXLINE( 300)			code = (code + this->getTex2DSampleCode(vo,albedo,this->_diffuseInputRegister,this->_texture,null(),null()));
HXLINE( 301)			if ((this->_alphaThreshold > 0)) {
HXLINE( 302)				cutOffReg = regCache->getFreeFragmentConstant();
HXLINE( 303)				vo->fragmentConstantsIndex = (cutOffReg->get_index() * 4);
HXLINE( 304)				::String code1 = ((HX_("sub ",a0,a6,5c,4c) + ::Std_obj::string(albedo)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN( 304)				::String code2 = ((code1 + ::Std_obj::string(albedo)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN( 304)				::String code3 = (((code2 + ::Std_obj::string(cutOffReg)) + HX_(".x\n",40,50,23,00)) + HX_("kil ",52,df,09,47));
HXDLIN( 304)				::String code4 = (((code3 + ::Std_obj::string(albedo)) + HX_(".w\n",61,4f,23,00)) + HX_("add ",df,ea,69,40));
HXDLIN( 304)				::String code5 = ((code4 + ::Std_obj::string(albedo)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN( 304)				::String code6 = ((code5 + ::Std_obj::string(albedo)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN( 304)				code = (code + ((code6 + ::Std_obj::string(cutOffReg)) + HX_(".x\n",40,50,23,00)));
            			}
            		}
            		else {
HXLINE( 309)			this->_diffuseInputRegister = regCache->getFreeFragmentConstant();
HXLINE( 310)			vo->fragmentConstantsIndex = (this->_diffuseInputRegister->get_index() * 4);
HXLINE( 311)			::String code1 = ((HX_("mov ",cc,e2,60,48) + ::Std_obj::string(albedo)) + HX_(", ",74,26,00,00));
HXDLIN( 311)			code = (code + ((code1 + ::Std_obj::string(this->_diffuseInputRegister)) + HX_("\n",0a,00,00,00)));
            		}
HXLINE( 314)		if ((vo->numLights == 0)) {
HXLINE( 315)			return code;
            		}
HXLINE( 317)		::String code1 = ((HX_("sat ",3a,89,4d,4c) + ::Std_obj::string(this->_totalLightColorReg)) + HX_(", ",74,26,00,00));
HXDLIN( 317)		code = (code + ((code1 + ::Std_obj::string(this->_totalLightColorReg)) + HX_("\n",0a,00,00,00)));
HXLINE( 319)		if (this->_useAmbientTexture) {
HXLINE( 320)			::String code1 = ((HX_("mul ",9c,67,65,48) + ::Std_obj::string(albedo)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 320)			::String code2 = ((code1 + ::Std_obj::string(albedo)) + HX_(", ",74,26,00,00));
HXDLIN( 320)			::String code3 = (((code2 + ::Std_obj::string(this->_totalLightColorReg)) + HX_("\n",0a,00,00,00)) + HX_("mul ",9c,67,65,48));
HXDLIN( 320)			::String code4 = ((code3 + ::Std_obj::string(this->_totalLightColorReg)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 320)			::String code5 = ((code4 + ::Std_obj::string(targetReg)) + HX_(", ",74,26,00,00));
HXDLIN( 320)			::String code6 = (((code5 + ::Std_obj::string(this->_totalLightColorReg)) + HX_("\n",0a,00,00,00)) + HX_("sub ",a0,a6,5c,4c));
HXDLIN( 320)			::String code7 = ((code6 + ::Std_obj::string(targetReg)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 320)			::String code8 = ((code7 + ::Std_obj::string(targetReg)) + HX_(", ",74,26,00,00));
HXDLIN( 320)			::String code9 = (((code8 + ::Std_obj::string(this->_totalLightColorReg)) + HX_("\n",0a,00,00,00)) + HX_("add ",df,ea,69,40));
HXDLIN( 320)			::String code10 = ((code9 + ::Std_obj::string(targetReg)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 320)			::String code11 = ((code10 + ::Std_obj::string(albedo)) + HX_(", ",74,26,00,00));
HXDLIN( 320)			code = (code + ((code11 + ::Std_obj::string(targetReg)) + HX_("\n",0a,00,00,00)));
            		}
            		else {
HXLINE( 325)			::String code1 = ((HX_("add ",df,ea,69,40) + ::Std_obj::string(targetReg)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 325)			::String code2 = ((code1 + ::Std_obj::string(this->_totalLightColorReg)) + HX_(", ",74,26,00,00));
HXDLIN( 325)			code = (code + ((code2 + ::Std_obj::string(targetReg)) + HX_("\n",0a,00,00,00)));
HXLINE( 326)			if (this->_useTexture) {
HXLINE( 327)				::String code1 = ((HX_("mul ",9c,67,65,48) + ::Std_obj::string(targetReg)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 327)				::String code2 = ((code1 + ::Std_obj::string(albedo)) + HX_(", ",74,26,00,00));
HXDLIN( 327)				::String code3 = (((code2 + ::Std_obj::string(targetReg)) + HX_("\n",0a,00,00,00)) + HX_("mov ",cc,e2,60,48));
HXDLIN( 327)				::String code4 = ((code3 + ::Std_obj::string(targetReg)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN( 327)				code = (code + ((code4 + ::Std_obj::string(albedo)) + HX_(".w\n",61,4f,23,00)));
            			}
            			else {
HXLINE( 330)				::String code1 = ((HX_("mul ",9c,67,65,48) + ::Std_obj::string(targetReg)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 330)				::String code2 = ((code1 + ::Std_obj::string(this->_diffuseInputRegister)) + HX_(", ",74,26,00,00));
HXDLIN( 330)				::String code3 = (((code2 + ::Std_obj::string(targetReg)) + HX_("\n",0a,00,00,00)) + HX_("mov ",cc,e2,60,48));
HXDLIN( 330)				::String code4 = ((code3 + ::Std_obj::string(targetReg)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN( 330)				code = (code + ((code4 + ::Std_obj::string(this->_diffuseInputRegister)) + HX_(".w\n",61,4f,23,00)));
            			}
            		}
HXLINE( 335)		regCache->removeFragmentTempUsage(this->_totalLightColorReg);
HXLINE( 336)		regCache->removeFragmentTempUsage(albedo);
HXLINE( 338)		return code;
            	}


::String BasicDiffuseMethod_obj::applyShadow( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterCache regCache){
            	HX_STACKFRAME(&_hx_pos_015691dd5093d651_348_applyShadow)
HXDLIN( 348)		::String _hx_tmp = ((HX_("mul ",9c,67,65,48) + ::Std_obj::string(this->_totalLightColorReg)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 348)		::String _hx_tmp1 = ((_hx_tmp + ::Std_obj::string(this->_totalLightColorReg)) + HX_(", ",74,26,00,00));
HXDLIN( 348)		return ((_hx_tmp1 + ::Std_obj::string(this->_shadowRegister)) + HX_(".w\n",61,4f,23,00));
            	}


HX_DEFINE_DYNAMIC_FUNC2(BasicDiffuseMethod_obj,applyShadow,return )

void BasicDiffuseMethod_obj::activate( ::away3d::materials::methods::MethodVO vo, ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_015691dd5093d651_356_activate)
HXDLIN( 356)		if (this->_useTexture) {
HXLINE( 358)			 ::openfl::display3D::Context3D stage3DProxy1 = stage3DProxy->_context3D;
HXLINE( 359)			int vo1 = vo->texturesIndex;
HXDLIN( 359)			 ::Dynamic _hx_tmp;
HXDLIN( 359)			if (vo->repeatTextures) {
HXLINE( 359)				_hx_tmp = 2;
            			}
            			else {
HXLINE( 359)				_hx_tmp = 0;
            			}
HXLINE( 360)			 ::Dynamic _hx_tmp1 = this->getSmoothingFilter(vo->useSmoothTextures,vo->anisotropy);
HXLINE( 361)			 ::Dynamic _hx_tmp2;
HXDLIN( 361)			if (vo->useMipmapping) {
HXLINE( 361)				_hx_tmp2 = 0;
            			}
            			else {
HXLINE( 361)				_hx_tmp2 = 2;
            			}
HXLINE( 358)			stage3DProxy1->setSamplerStateAt(vo1,_hx_tmp,_hx_tmp1,_hx_tmp2);
HXLINE( 363)			 ::openfl::display3D::Context3D stage3DProxy2 = stage3DProxy->_context3D;
HXDLIN( 363)			int vo2 = vo->texturesIndex;
HXDLIN( 363)			stage3DProxy2->setTextureAt(vo2,this->_texture->getTextureForStage3D(stage3DProxy));
HXLINE( 364)			if ((this->_alphaThreshold > 0)) {
HXLINE( 365)				vo->fragmentData->set(vo->fragmentConstantsIndex,this->_alphaThreshold);
            			}
            		}
            		else {
HXLINE( 367)			int index = vo->fragmentConstantsIndex;
HXLINE( 368)			 ::openfl::_Vector::FloatVector data = vo->fragmentData;
HXLINE( 369)			data->set(index,this->_diffuseR);
HXLINE( 370)			data->set((index + 1),this->_diffuseG);
HXLINE( 371)			data->set((index + 2),this->_diffuseB);
HXLINE( 372)			data->set((index + 3),this->_diffuseA);
            		}
            	}


void BasicDiffuseMethod_obj::updateDiffuse(){
            	HX_STACKFRAME(&_hx_pos_015691dd5093d651_380_updateDiffuse)
HXLINE( 381)		this->_diffuseR = (( (Float)(((this->_diffuseColor >> 16) & 255)) ) / ( (Float)(255) ));
HXLINE( 382)		this->_diffuseG = (( (Float)(((this->_diffuseColor >> 8) & 255)) ) / ( (Float)(255) ));
HXLINE( 383)		this->_diffuseB = (( (Float)((this->_diffuseColor & 255)) ) / ( (Float)(255) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicDiffuseMethod_obj,updateDiffuse,(void))

 ::away3d::materials::compilation::ShaderRegisterElement BasicDiffuseMethod_obj::set_shadowRegister( ::away3d::materials::compilation::ShaderRegisterElement value){
            	HX_STACKFRAME(&_hx_pos_015691dd5093d651_390_set_shadowRegister)
HXLINE( 391)		this->_shadowRegister = value;
HXLINE( 392)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BasicDiffuseMethod_obj,set_shadowRegister,return )


::hx::ObjectPtr< BasicDiffuseMethod_obj > BasicDiffuseMethod_obj::__new() {
	::hx::ObjectPtr< BasicDiffuseMethod_obj > __this = new BasicDiffuseMethod_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< BasicDiffuseMethod_obj > BasicDiffuseMethod_obj::__alloc(::hx::Ctx *_hx_ctx) {
	BasicDiffuseMethod_obj *__this = (BasicDiffuseMethod_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BasicDiffuseMethod_obj), true, "away3d.materials.methods.BasicDiffuseMethod"));
	*(void **)__this = BasicDiffuseMethod_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BasicDiffuseMethod_obj::BasicDiffuseMethod_obj()
{
}

void BasicDiffuseMethod_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BasicDiffuseMethod);
	HX_MARK_MEMBER_NAME(_useAmbientTexture,"_useAmbientTexture");
	HX_MARK_MEMBER_NAME(_useTexture,"_useTexture");
	HX_MARK_MEMBER_NAME(_totalLightColorReg,"_totalLightColorReg");
	HX_MARK_MEMBER_NAME(_diffuseInputRegister,"_diffuseInputRegister");
	HX_MARK_MEMBER_NAME(_texture,"_texture");
	HX_MARK_MEMBER_NAME(_diffuseColor,"_diffuseColor");
	HX_MARK_MEMBER_NAME(_diffuseR,"_diffuseR");
	HX_MARK_MEMBER_NAME(_diffuseG,"_diffuseG");
	HX_MARK_MEMBER_NAME(_diffuseB,"_diffuseB");
	HX_MARK_MEMBER_NAME(_diffuseA,"_diffuseA");
	HX_MARK_MEMBER_NAME(_shadowRegister,"_shadowRegister");
	HX_MARK_MEMBER_NAME(_alphaThreshold,"_alphaThreshold");
	HX_MARK_MEMBER_NAME(_isFirstLight,"_isFirstLight");
	 ::away3d::materials::methods::LightingMethodBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BasicDiffuseMethod_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_useAmbientTexture,"_useAmbientTexture");
	HX_VISIT_MEMBER_NAME(_useTexture,"_useTexture");
	HX_VISIT_MEMBER_NAME(_totalLightColorReg,"_totalLightColorReg");
	HX_VISIT_MEMBER_NAME(_diffuseInputRegister,"_diffuseInputRegister");
	HX_VISIT_MEMBER_NAME(_texture,"_texture");
	HX_VISIT_MEMBER_NAME(_diffuseColor,"_diffuseColor");
	HX_VISIT_MEMBER_NAME(_diffuseR,"_diffuseR");
	HX_VISIT_MEMBER_NAME(_diffuseG,"_diffuseG");
	HX_VISIT_MEMBER_NAME(_diffuseB,"_diffuseB");
	HX_VISIT_MEMBER_NAME(_diffuseA,"_diffuseA");
	HX_VISIT_MEMBER_NAME(_shadowRegister,"_shadowRegister");
	HX_VISIT_MEMBER_NAME(_alphaThreshold,"_alphaThreshold");
	HX_VISIT_MEMBER_NAME(_isFirstLight,"_isFirstLight");
	 ::away3d::materials::methods::LightingMethodBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BasicDiffuseMethod_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"initVO") ) { return ::hx::Val( initVO_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_texture() ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_texture") ) { return ::hx::Val( _texture ); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return ::hx::Val( copyFrom_dyn() ); }
		if (HX_FIELD_EQ(inName,"activate") ) { return ::hx::Val( activate_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_diffuseR") ) { return ::hx::Val( _diffuseR ); }
		if (HX_FIELD_EQ(inName,"_diffuseG") ) { return ::hx::Val( _diffuseG ); }
		if (HX_FIELD_EQ(inName,"_diffuseB") ) { return ::hx::Val( _diffuseB ); }
		if (HX_FIELD_EQ(inName,"_diffuseA") ) { return ::hx::Val( _diffuseA ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_useTexture") ) { return ::hx::Val( _useTexture ); }
		if (HX_FIELD_EQ(inName,"generateMip") ) { return ::hx::Val( generateMip_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_texture") ) { return ::hx::Val( get_texture_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_texture") ) { return ::hx::Val( set_texture_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyShadow") ) { return ::hx::Val( applyShadow_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"diffuseAlpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_diffuseAlpha() ); }
		if (HX_FIELD_EQ(inName,"diffuseColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_diffuseColor() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_diffuseColor") ) { return ::hx::Val( _diffuseColor ); }
		if (HX_FIELD_EQ(inName,"_isFirstLight") ) { return ::hx::Val( _isFirstLight ); }
		if (HX_FIELD_EQ(inName,"updateDiffuse") ) { return ::hx::Val( updateDiffuse_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"alphaThreshold") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_alphaThreshold() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_shadowRegister") ) { return ::hx::Val( _shadowRegister ); }
		if (HX_FIELD_EQ(inName,"_alphaThreshold") ) { return ::hx::Val( _alphaThreshold ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_diffuseAlpha") ) { return ::hx::Val( get_diffuseAlpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_diffuseAlpha") ) { return ::hx::Val( set_diffuseAlpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_diffuseColor") ) { return ::hx::Val( get_diffuseColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_diffuseColor") ) { return ::hx::Val( set_diffuseColor_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"useAmbientTexture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_useAmbientTexture() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_useAmbientTexture") ) { return ::hx::Val( _useAmbientTexture ); }
		if (HX_FIELD_EQ(inName,"get_alphaThreshold") ) { return ::hx::Val( get_alphaThreshold_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alphaThreshold") ) { return ::hx::Val( set_alphaThreshold_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_shadowRegister") ) { return ::hx::Val( set_shadowRegister_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_totalLightColorReg") ) { return ::hx::Val( _totalLightColorReg ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"cleanCompilationData") ) { return ::hx::Val( cleanCompilationData_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_diffuseInputRegister") ) { return ::hx::Val( _diffuseInputRegister ); }
		if (HX_FIELD_EQ(inName,"get_useAmbientTexture") ) { return ::hx::Val( get_useAmbientTexture_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_useAmbientTexture") ) { return ::hx::Val( set_useAmbientTexture_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getFragmentCodePerLight") ) { return ::hx::Val( getFragmentCodePerLight_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFragmentCodePerProbe") ) { return ::hx::Val( getFragmentCodePerProbe_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"getFragmentPreLightingCode") ) { return ::hx::Val( getFragmentPreLightingCode_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"getFragmentPostLightingCode") ) { return ::hx::Val( getFragmentPostLightingCode_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BasicDiffuseMethod_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_texture(inValue.Cast<  ::away3d::textures::Texture2DBase >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_texture") ) { _texture=inValue.Cast<  ::away3d::textures::Texture2DBase >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_diffuseR") ) { _diffuseR=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_diffuseG") ) { _diffuseG=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_diffuseB") ) { _diffuseB=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_diffuseA") ) { _diffuseA=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_useTexture") ) { _useTexture=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"diffuseAlpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_diffuseAlpha(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"diffuseColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_diffuseColor(inValue.Cast< int >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_diffuseColor") ) { _diffuseColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_isFirstLight") ) { _isFirstLight=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"alphaThreshold") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alphaThreshold(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"shadowRegister") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_shadowRegister(inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_shadowRegister") ) { _shadowRegister=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_alphaThreshold") ) { _alphaThreshold=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"useAmbientTexture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_useAmbientTexture(inValue.Cast< bool >()) ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_useAmbientTexture") ) { _useAmbientTexture=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_totalLightColorReg") ) { _totalLightColorReg=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_diffuseInputRegister") ) { _diffuseInputRegister=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BasicDiffuseMethod_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("useAmbientTexture",4a,1a,fb,1a));
	outFields->push(HX_("diffuseAlpha",9c,72,de,1c));
	outFields->push(HX_("diffuseColor",a1,3c,a4,45));
	outFields->push(HX_("texture",db,c8,e0,9e));
	outFields->push(HX_("alphaThreshold",6d,20,ab,01));
	outFields->push(HX_("shadowRegister",63,0a,4d,23));
	outFields->push(HX_("_useAmbientTexture",0b,bf,10,ee));
	outFields->push(HX_("_useTexture",73,b8,1d,74));
	outFields->push(HX_("_totalLightColorReg",62,68,8f,70));
	outFields->push(HX_("_diffuseInputRegister",aa,83,de,6c));
	outFields->push(HX_("_texture",5c,22,99,d8));
	outFields->push(HX_("_diffuseColor",80,cf,12,28));
	outFields->push(HX_("_diffuseR",0f,cc,8b,7e));
	outFields->push(HX_("_diffuseG",04,cc,8b,7e));
	outFields->push(HX_("_diffuseB",ff,cb,8b,7e));
	outFields->push(HX_("_diffuseA",fe,cb,8b,7e));
	outFields->push(HX_("_shadowRegister",02,53,ad,6c));
	outFields->push(HX_("_alphaThreshold",0c,69,0b,4b));
	outFields->push(HX_("_isFirstLight",ef,95,68,67));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BasicDiffuseMethod_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(BasicDiffuseMethod_obj,_useAmbientTexture),HX_("_useAmbientTexture",0b,bf,10,ee)},
	{::hx::fsBool,(int)offsetof(BasicDiffuseMethod_obj,_useTexture),HX_("_useTexture",73,b8,1d,74)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(BasicDiffuseMethod_obj,_totalLightColorReg),HX_("_totalLightColorReg",62,68,8f,70)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(BasicDiffuseMethod_obj,_diffuseInputRegister),HX_("_diffuseInputRegister",aa,83,de,6c)},
	{::hx::fsObject /*  ::away3d::textures::Texture2DBase */ ,(int)offsetof(BasicDiffuseMethod_obj,_texture),HX_("_texture",5c,22,99,d8)},
	{::hx::fsInt,(int)offsetof(BasicDiffuseMethod_obj,_diffuseColor),HX_("_diffuseColor",80,cf,12,28)},
	{::hx::fsFloat,(int)offsetof(BasicDiffuseMethod_obj,_diffuseR),HX_("_diffuseR",0f,cc,8b,7e)},
	{::hx::fsFloat,(int)offsetof(BasicDiffuseMethod_obj,_diffuseG),HX_("_diffuseG",04,cc,8b,7e)},
	{::hx::fsFloat,(int)offsetof(BasicDiffuseMethod_obj,_diffuseB),HX_("_diffuseB",ff,cb,8b,7e)},
	{::hx::fsFloat,(int)offsetof(BasicDiffuseMethod_obj,_diffuseA),HX_("_diffuseA",fe,cb,8b,7e)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(BasicDiffuseMethod_obj,_shadowRegister),HX_("_shadowRegister",02,53,ad,6c)},
	{::hx::fsFloat,(int)offsetof(BasicDiffuseMethod_obj,_alphaThreshold),HX_("_alphaThreshold",0c,69,0b,4b)},
	{::hx::fsBool,(int)offsetof(BasicDiffuseMethod_obj,_isFirstLight),HX_("_isFirstLight",ef,95,68,67)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BasicDiffuseMethod_obj_sStaticStorageInfo = 0;
#endif

static ::String BasicDiffuseMethod_obj_sMemberFields[] = {
	HX_("_useAmbientTexture",0b,bf,10,ee),
	HX_("_useTexture",73,b8,1d,74),
	HX_("_totalLightColorReg",62,68,8f,70),
	HX_("_diffuseInputRegister",aa,83,de,6c),
	HX_("_texture",5c,22,99,d8),
	HX_("_diffuseColor",80,cf,12,28),
	HX_("_diffuseR",0f,cc,8b,7e),
	HX_("_diffuseG",04,cc,8b,7e),
	HX_("_diffuseB",ff,cb,8b,7e),
	HX_("_diffuseA",fe,cb,8b,7e),
	HX_("_shadowRegister",02,53,ad,6c),
	HX_("_alphaThreshold",0c,69,0b,4b),
	HX_("_isFirstLight",ef,95,68,67),
	HX_("get_useAmbientTexture",21,1d,a9,99),
	HX_("set_useAmbientTexture",2d,eb,b1,ed),
	HX_("initVO",49,6a,4c,97),
	HX_("generateMip",5f,19,26,46),
	HX_("get_diffuseAlpha",25,5f,7d,21),
	HX_("set_diffuseAlpha",99,4c,bf,77),
	HX_("get_diffuseColor",2a,29,43,4a),
	HX_("set_diffuseColor",9e,16,85,a0),
	HX_("get_texture",f2,28,db,24),
	HX_("set_texture",fe,2f,48,2f),
	HX_("get_alphaThreshold",36,01,45,9d),
	HX_("set_alphaThreshold",aa,33,f4,79),
	HX_("dispose",9f,80,4c,bb),
	HX_("copyFrom",bf,0b,61,c8),
	HX_("cleanCompilationData",04,2f,dd,d4),
	HX_("getFragmentPreLightingCode",f6,59,1b,b5),
	HX_("getFragmentCodePerLight",ac,ec,39,19),
	HX_("getFragmentCodePerProbe",06,37,cd,6c),
	HX_("getFragmentPostLightingCode",3f,a4,ff,89),
	HX_("applyShadow",ee,87,1b,59),
	HX_("activate",b3,1b,ac,e5),
	HX_("updateDiffuse",59,c6,ed,03),
	HX_("set_shadowRegister",a0,1d,96,9b),
	::String(null()) };

::hx::Class BasicDiffuseMethod_obj::__mClass;

void BasicDiffuseMethod_obj::__register()
{
	BasicDiffuseMethod_obj _hx_dummy;
	BasicDiffuseMethod_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.materials.methods.BasicDiffuseMethod",42,5d,ce,00);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BasicDiffuseMethod_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BasicDiffuseMethod_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BasicDiffuseMethod_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BasicDiffuseMethod_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace materials
} // end namespace methods
