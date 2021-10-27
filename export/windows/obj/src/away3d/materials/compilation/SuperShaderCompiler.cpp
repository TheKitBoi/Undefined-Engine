#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_MethodDependencyCounter
#include <away3d/materials/compilation/MethodDependencyCounter.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderCompiler
#include <away3d/materials/compilation/ShaderCompiler.h>
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
#ifndef INCLUDED_away3d_materials_compilation_SuperShaderCompiler
#include <away3d/materials/compilation/SuperShaderCompiler.h>
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
#ifndef INCLUDED_away3d_materials_methods_LightingMethodBase
#include <away3d/materials/methods/LightingMethodBase.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_MethodVO
#include <away3d/materials/methods/MethodVO.h>
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
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d1c5e600247e0b5f_20_new,"away3d.materials.compilation.SuperShaderCompiler","new",0x68676bf5,"away3d.materials.compilation.SuperShaderCompiler.new","away3d/materials/compilation/SuperShaderCompiler.hx",20,0xa067599e)
HX_LOCAL_STACK_FRAME(_hx_pos_d1c5e600247e0b5f_27_initLightData,"away3d.materials.compilation.SuperShaderCompiler","initLightData",0x40b8c0c5,"away3d.materials.compilation.SuperShaderCompiler.initLightData","away3d/materials/compilation/SuperShaderCompiler.hx",27,0xa067599e)
HX_LOCAL_STACK_FRAME(_hx_pos_d1c5e600247e0b5f_38_calculateDependencies,"away3d.materials.compilation.SuperShaderCompiler","calculateDependencies",0x89365b44,"away3d.materials.compilation.SuperShaderCompiler.calculateDependencies","away3d/materials/compilation/SuperShaderCompiler.hx",38,0xa067599e)
HX_LOCAL_STACK_FRAME(_hx_pos_d1c5e600247e0b5f_47_compileNormalCode,"away3d.materials.compilation.SuperShaderCompiler","compileNormalCode",0x80145c9c,"away3d.materials.compilation.SuperShaderCompiler.compileNormalCode","away3d/materials/compilation/SuperShaderCompiler.hx",47,0xa067599e)
HX_LOCAL_STACK_FRAME(_hx_pos_d1c5e600247e0b5f_93_createNormalRegisters,"away3d.materials.compilation.SuperShaderCompiler","createNormalRegisters",0xa1f062c2,"away3d.materials.compilation.SuperShaderCompiler.createNormalRegisters","away3d/materials/compilation/SuperShaderCompiler.hx",93,0xa067599e)
HX_LOCAL_STACK_FRAME(_hx_pos_d1c5e600247e0b5f_120_compileTangentVertexCode,"away3d.materials.compilation.SuperShaderCompiler","compileTangentVertexCode",0x660a7b2e,"away3d.materials.compilation.SuperShaderCompiler.compileTangentVertexCode","away3d/materials/compilation/SuperShaderCompiler.hx",120,0xa067599e)
HX_LOCAL_STACK_FRAME(_hx_pos_d1c5e600247e0b5f_152_compileTangentNormalMapFragmentCode,"away3d.materials.compilation.SuperShaderCompiler","compileTangentNormalMapFragmentCode",0x4a709615,"away3d.materials.compilation.SuperShaderCompiler.compileTangentNormalMapFragmentCode","away3d/materials/compilation/SuperShaderCompiler.hx",152,0xa067599e)
HX_LOCAL_STACK_FRAME(_hx_pos_d1c5e600247e0b5f_190_compileViewDirCode,"away3d.materials.compilation.SuperShaderCompiler","compileViewDirCode",0xa66f068d,"away3d.materials.compilation.SuperShaderCompiler.compileViewDirCode","away3d/materials/compilation/SuperShaderCompiler.hx",190,0xa067599e)
HX_LOCAL_STACK_FRAME(_hx_pos_d1c5e600247e0b5f_209_compileLightingCode,"away3d.materials.compilation.SuperShaderCompiler","compileLightingCode",0x4b1400c1,"away3d.materials.compilation.SuperShaderCompiler.compileLightingCode","away3d/materials/compilation/SuperShaderCompiler.hx",209,0xa067599e)
HX_LOCAL_STACK_FRAME(_hx_pos_d1c5e600247e0b5f_282_initLightRegisters,"away3d.materials.compilation.SuperShaderCompiler","initLightRegisters",0x762d3435,"away3d.materials.compilation.SuperShaderCompiler.initLightRegisters","away3d/materials/compilation/SuperShaderCompiler.hx",282,0xa067599e)
HX_LOCAL_STACK_FRAME(_hx_pos_d1c5e600247e0b5f_302_compileDirectionalLightCode,"away3d.materials.compilation.SuperShaderCompiler","compileDirectionalLightCode",0x47658e81,"away3d.materials.compilation.SuperShaderCompiler.compileDirectionalLightCode","away3d/materials/compilation/SuperShaderCompiler.hx",302,0xa067599e)
HX_LOCAL_STACK_FRAME(_hx_pos_d1c5e600247e0b5f_325_compilePointLightCode,"away3d.materials.compilation.SuperShaderCompiler","compilePointLightCode",0x01ac145b,"away3d.materials.compilation.SuperShaderCompiler.compilePointLightCode","away3d/materials/compilation/SuperShaderCompiler.hx",325,0xa067599e)
HX_LOCAL_STACK_FRAME(_hx_pos_d1c5e600247e0b5f_373_compileLightProbeCode,"away3d.materials.compilation.SuperShaderCompiler","compileLightProbeCode",0x5dcef66f,"away3d.materials.compilation.SuperShaderCompiler.compileLightProbeCode","away3d/materials/compilation/SuperShaderCompiler.hx",373,0xa067599e)
static const ::String _hx_array_data_44034d83_19[] = {
	HX_(".x",8a,28,00,00),HX_(".y",8b,28,00,00),HX_(".z",8c,28,00,00),HX_(".w",89,28,00,00),
};
namespace away3d{
namespace materials{
namespace compilation{

void SuperShaderCompiler_obj::__construct(::String profile){
            	HX_STACKFRAME(&_hx_pos_d1c5e600247e0b5f_20_new)
HXDLIN(  20)		super::__construct(profile);
            	}

Dynamic SuperShaderCompiler_obj::__CreateEmpty() { return new SuperShaderCompiler_obj; }

void *SuperShaderCompiler_obj::_hx_vtable = 0;

Dynamic SuperShaderCompiler_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SuperShaderCompiler_obj > _hx_result = new SuperShaderCompiler_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SuperShaderCompiler_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x05340f9a) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x05340f9a;
	} else {
		return inClassId==(int)0x4167e349;
	}
}

void SuperShaderCompiler_obj::initLightData(){
            	HX_GC_STACKFRAME(&_hx_pos_d1c5e600247e0b5f_27_initLightData)
HXLINE(  28)		this->super::initLightData();
HXLINE(  30)		::Array< ::Dynamic> array = null();
HXDLIN(  30)		this->_pointLightRegisters =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,(this->_numPointLights * 3),true,array,true);
HXLINE(  31)		::Array< ::Dynamic> array1 = null();
HXDLIN(  31)		this->_dirLightRegisters =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,(this->_numDirectionalLights * 3),true,array1,true);
            	}


void SuperShaderCompiler_obj::calculateDependencies(){
            	HX_STACKFRAME(&_hx_pos_d1c5e600247e0b5f_38_calculateDependencies)
HXLINE(  39)		this->super::calculateDependencies();
HXLINE(  40)		this->_dependencyCounter->addWorldSpaceDependencies(true);
            	}


void SuperShaderCompiler_obj::compileNormalCode(){
            	HX_GC_STACKFRAME(&_hx_pos_d1c5e600247e0b5f_47_compileNormalCode)
HXLINE(  48)		::Array< ::Dynamic> array = null();
HXDLIN(  48)		 ::openfl::_Vector::ObjectVector normalMatrix =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,3,true,array,true);
HXLINE(  50)		this->_sharedRegisters->normalFragment = this->_registerCache->getFreeFragmentVectorTemp();
HXLINE(  51)		 ::away3d::materials::compilation::ShaderRegisterCache _hx_tmp = this->_registerCache;
HXDLIN(  51)		 ::away3d::materials::compilation::ShaderRegisterElement _hx_tmp1 = this->_sharedRegisters->normalFragment;
HXDLIN(  51)		_hx_tmp->addFragmentTempUsages(_hx_tmp1,this->_dependencyCounter->get_normalDependencies());
HXLINE(  53)		bool _hx_tmp2;
HXDLIN(  53)		if (this->_methodSetup->_normalMethod->get_hasOutput()) {
HXLINE(  53)			_hx_tmp2 = !(this->_methodSetup->_normalMethod->get_tangentSpace());
            		}
            		else {
HXLINE(  53)			_hx_tmp2 = false;
            		}
HXDLIN(  53)		if (_hx_tmp2) {
HXLINE(  54)			 ::away3d::materials::compilation::SuperShaderCompiler _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  54)			::String _hx_tmp1 = _hx_tmp->_vertexCode;
HXDLIN(  54)			_hx_tmp->_vertexCode = (_hx_tmp1 + this->_methodSetup->_normalMethod->getVertexCode(this->_methodSetup->_normalMethodVO,this->_registerCache));
HXLINE(  55)			 ::away3d::materials::compilation::SuperShaderCompiler _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  55)			::String _hx_tmp3 = _hx_tmp2->_fragmentCode;
HXDLIN(  55)			_hx_tmp2->_fragmentCode = (_hx_tmp3 + this->_methodSetup->_normalMethod->getFragmentCode(this->_methodSetup->_normalMethodVO,this->_registerCache,this->_sharedRegisters->normalFragment));
HXLINE(  56)			return;
            		}
HXLINE(  59)		this->_sharedRegisters->normalVarying = this->_registerCache->getFreeVarying();
HXLINE(  61)		normalMatrix->set(0,this->_registerCache->getFreeVertexConstant()).StaticCast<  ::away3d::materials::compilation::ShaderRegisterElement >();
HXLINE(  62)		normalMatrix->set(1,this->_registerCache->getFreeVertexConstant()).StaticCast<  ::away3d::materials::compilation::ShaderRegisterElement >();
HXLINE(  63)		normalMatrix->set(2,this->_registerCache->getFreeVertexConstant()).StaticCast<  ::away3d::materials::compilation::ShaderRegisterElement >();
HXLINE(  64)		this->_registerCache->getFreeVertexConstant();
HXLINE(  65)		this->_sceneNormalMatrixIndex = (normalMatrix->get(0).StaticCast<  ::away3d::materials::compilation::ShaderRegisterElement >()->get_index() * 4);
HXLINE(  67)		if (this->_methodSetup->_normalMethod->get_hasOutput()) {
HXLINE(  69)			this->compileTangentVertexCode(normalMatrix);
HXLINE(  70)			this->compileTangentNormalMapFragmentCode();
            		}
            		else {
HXLINE(  72)			 ::away3d::materials::compilation::SuperShaderCompiler _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  72)			::String _hx_tmp1 = _hx_tmp->_vertexCode;
HXDLIN(  72)			::String _hx_tmp2 = ((HX_("m33 ",33,21,33,48) + ::Std_obj::string(this->_sharedRegisters->normalVarying)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN(  72)			::String _hx_tmp3 = ((_hx_tmp2 + ::Std_obj::string(this->_sharedRegisters->animatedNormal)) + HX_(", ",74,26,00,00));
HXDLIN(  72)			::String _hx_tmp4 = (((_hx_tmp3 + ::Std_obj::string(normalMatrix->get(0).StaticCast<  ::away3d::materials::compilation::ShaderRegisterElement >())) + HX_("\n",0a,00,00,00)) + HX_("mov ",cc,e2,60,48));
HXDLIN(  72)			::String _hx_tmp5 = ((_hx_tmp4 + ::Std_obj::string(this->_sharedRegisters->normalVarying)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN(  72)			_hx_tmp->_vertexCode = (_hx_tmp1 + ((_hx_tmp5 + ::Std_obj::string(this->_sharedRegisters->animatedNormal)) + HX_(".w\t\n",aa,24,c2,1e)));
HXLINE(  75)			 ::away3d::materials::compilation::SuperShaderCompiler _hx_tmp6 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  75)			::String _hx_tmp7 = _hx_tmp6->_fragmentCode;
HXDLIN(  75)			::String _hx_tmp8 = ((HX_("nrm ",57,58,0c,49) + ::Std_obj::string(this->_sharedRegisters->normalFragment)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN(  75)			::String _hx_tmp9 = (((_hx_tmp8 + ::Std_obj::string(this->_sharedRegisters->normalVarying)) + HX_("\n",0a,00,00,00)) + HX_("mov ",cc,e2,60,48));
HXDLIN(  75)			::String _hx_tmp10 = ((_hx_tmp9 + ::Std_obj::string(this->_sharedRegisters->normalFragment)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN(  75)			_hx_tmp6->_fragmentCode = (_hx_tmp7 + ((_hx_tmp10 + ::Std_obj::string(this->_sharedRegisters->normalVarying)) + HX_(".w\t\t\n",41,ef,1d,cb)));
HXLINE(  78)			if ((this->_dependencyCounter->get_tangentDependencies() > 0)) {
HXLINE(  79)				this->_sharedRegisters->tangentInput = this->_registerCache->getFreeVertexAttribute();
HXLINE(  80)				this->_tangentBufferIndex = this->_sharedRegisters->tangentInput->get_index();
HXLINE(  81)				this->_sharedRegisters->tangentVarying = this->_registerCache->getFreeVarying();
HXLINE(  82)				 ::away3d::materials::compilation::SuperShaderCompiler _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  82)				::String _hx_tmp1 = _hx_tmp->_vertexCode;
HXDLIN(  82)				::String _hx_tmp2 = ((HX_("mov ",cc,e2,60,48) + ::Std_obj::string(this->_sharedRegisters->tangentVarying)) + HX_(", ",74,26,00,00));
HXDLIN(  82)				_hx_tmp->_vertexCode = (_hx_tmp1 + ((_hx_tmp2 + ::Std_obj::string(this->_sharedRegisters->tangentInput)) + HX_("\n",0a,00,00,00)));
            			}
            		}
HXLINE(  86)		this->_registerCache->removeVertexTempUsage(this->_sharedRegisters->animatedNormal);
            	}


void SuperShaderCompiler_obj::createNormalRegisters(){
            	HX_STACKFRAME(&_hx_pos_d1c5e600247e0b5f_93_createNormalRegisters)
HXLINE(  94)		if ((this->_dependencyCounter->get_normalDependencies() > 0)) {
HXLINE(  95)			this->_sharedRegisters->normalInput = this->_registerCache->getFreeVertexAttribute();
HXLINE(  96)			this->_normalBufferIndex = this->_sharedRegisters->normalInput->get_index();
HXLINE(  97)			this->_sharedRegisters->animatedNormal = this->_registerCache->getFreeVertexVectorTemp();
HXLINE(  98)			this->_registerCache->addVertexTempUsages(this->_sharedRegisters->animatedNormal,1);
HXLINE(  99)			{
HXLINE(  99)				::Dynamic this1 = this->_animatableAttributes;
HXDLIN(  99)				( ( ::openfl::_Vector::ObjectVector)(this1) )->push(this->_sharedRegisters->normalInput->toString());
            			}
HXLINE( 100)			{
HXLINE( 100)				::Dynamic this2 = this->_animationTargetRegisters;
HXDLIN( 100)				( ( ::openfl::_Vector::ObjectVector)(this2) )->push(this->_sharedRegisters->animatedNormal->toString());
            			}
            		}
HXLINE( 103)		if (this->_methodSetup->_normalMethod->get_hasOutput()) {
HXLINE( 104)			this->_sharedRegisters->tangentInput = this->_registerCache->getFreeVertexAttribute();
HXLINE( 105)			this->_tangentBufferIndex = this->_sharedRegisters->tangentInput->get_index();
HXLINE( 107)			this->_sharedRegisters->animatedTangent = this->_registerCache->getFreeVertexVectorTemp();
HXLINE( 108)			this->_registerCache->addVertexTempUsages(this->_sharedRegisters->animatedTangent,1);
HXLINE( 110)			{
HXLINE( 110)				::Dynamic this1 = this->_animatableAttributes;
HXDLIN( 110)				( ( ::openfl::_Vector::ObjectVector)(this1) )->push(this->_sharedRegisters->tangentInput->toString());
            			}
HXLINE( 111)			{
HXLINE( 111)				::Dynamic this2 = this->_animationTargetRegisters;
HXDLIN( 111)				( ( ::openfl::_Vector::ObjectVector)(this2) )->push(this->_sharedRegisters->animatedTangent->toString());
            			}
            		}
            	}


void SuperShaderCompiler_obj::compileTangentVertexCode( ::openfl::_Vector::ObjectVector matrix){
            	HX_STACKFRAME(&_hx_pos_d1c5e600247e0b5f_120_compileTangentVertexCode)
HXLINE( 121)		this->_sharedRegisters->tangentVarying = this->_registerCache->getFreeVarying();
HXLINE( 122)		this->_sharedRegisters->bitangentVarying = this->_registerCache->getFreeVarying();
HXLINE( 124)		 ::away3d::materials::compilation::SuperShaderCompiler _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 124)		::String _hx_tmp1 = _hx_tmp->_vertexCode;
HXDLIN( 124)		::String _hx_tmp2 = ((HX_("m33 ",33,21,33,48) + ::Std_obj::string(this->_sharedRegisters->animatedNormal)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 124)		::String _hx_tmp3 = ((_hx_tmp2 + ::Std_obj::string(this->_sharedRegisters->animatedNormal)) + HX_(", ",74,26,00,00));
HXDLIN( 124)		::String _hx_tmp4 = (((_hx_tmp3 + ::Std_obj::string(matrix->get(0).StaticCast<  ::away3d::materials::compilation::ShaderRegisterElement >())) + HX_("\n",0a,00,00,00)) + HX_("nrm ",57,58,0c,49));
HXDLIN( 124)		::String _hx_tmp5 = ((_hx_tmp4 + ::Std_obj::string(this->_sharedRegisters->animatedNormal)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 124)		_hx_tmp->_vertexCode = (_hx_tmp1 + ((_hx_tmp5 + ::Std_obj::string(this->_sharedRegisters->animatedNormal)) + HX_("\n",0a,00,00,00)));
HXLINE( 127)		 ::away3d::materials::compilation::SuperShaderCompiler _hx_tmp6 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 127)		::String _hx_tmp7 = _hx_tmp6->_vertexCode;
HXDLIN( 127)		::String _hx_tmp8 = ((HX_("m33 ",33,21,33,48) + ::Std_obj::string(this->_sharedRegisters->animatedTangent)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 127)		::String _hx_tmp9 = ((_hx_tmp8 + ::Std_obj::string(this->_sharedRegisters->animatedTangent)) + HX_(", ",74,26,00,00));
HXDLIN( 127)		::String _hx_tmp10 = (((_hx_tmp9 + ::Std_obj::string(matrix->get(0).StaticCast<  ::away3d::materials::compilation::ShaderRegisterElement >())) + HX_("\n",0a,00,00,00)) + HX_("nrm ",57,58,0c,49));
HXDLIN( 127)		::String _hx_tmp11 = ((_hx_tmp10 + ::Std_obj::string(this->_sharedRegisters->animatedTangent)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 127)		_hx_tmp6->_vertexCode = (_hx_tmp7 + ((_hx_tmp11 + ::Std_obj::string(this->_sharedRegisters->animatedTangent)) + HX_("\n",0a,00,00,00)));
HXLINE( 130)		 ::away3d::materials::compilation::ShaderRegisterElement bitanTemp = this->_registerCache->getFreeVertexVectorTemp();
HXLINE( 131)		 ::away3d::materials::compilation::SuperShaderCompiler _hx_tmp12 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 131)		::String _hx_tmp13 = _hx_tmp12->_vertexCode;
HXDLIN( 131)		::String _hx_tmp14 = ((HX_("mov ",cc,e2,60,48) + ::Std_obj::string(this->_sharedRegisters->tangentVarying)) + HX_(".x, ",7e,05,c3,1e));
HXDLIN( 131)		::String _hx_tmp15 = (((_hx_tmp14 + ::Std_obj::string(this->_sharedRegisters->animatedTangent)) + HX_(".x  \n",c0,ad,d8,cb)) + HX_("mov ",cc,e2,60,48));
HXDLIN( 131)		::String _hx_tmp16 = ((_hx_tmp15 + ::Std_obj::string(this->_sharedRegisters->tangentVarying)) + HX_(".z, ",00,8a,c4,1e));
HXDLIN( 131)		::String _hx_tmp17 = (((_hx_tmp16 + ::Std_obj::string(this->_sharedRegisters->animatedNormal)) + HX_(".x  \n",c0,ad,d8,cb)) + HX_("mov ",cc,e2,60,48));
HXDLIN( 131)		::String _hx_tmp18 = ((_hx_tmp17 + ::Std_obj::string(this->_sharedRegisters->tangentVarying)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN( 131)		::String _hx_tmp19 = (((_hx_tmp18 + ::Std_obj::string(this->_sharedRegisters->normalInput)) + HX_(".w  \n",21,77,2f,cb)) + HX_("mov ",cc,e2,60,48));
HXDLIN( 131)		::String _hx_tmp20 = ((_hx_tmp19 + ::Std_obj::string(this->_sharedRegisters->bitangentVarying)) + HX_(".x, ",7e,05,c3,1e));
HXDLIN( 131)		::String _hx_tmp21 = (((_hx_tmp20 + ::Std_obj::string(this->_sharedRegisters->animatedTangent)) + HX_(".y  \n",5f,e4,81,cc)) + HX_("mov ",cc,e2,60,48));
HXDLIN( 131)		::String _hx_tmp22 = ((_hx_tmp21 + ::Std_obj::string(this->_sharedRegisters->bitangentVarying)) + HX_(".z, ",00,8a,c4,1e));
HXDLIN( 131)		::String _hx_tmp23 = (((_hx_tmp22 + ::Std_obj::string(this->_sharedRegisters->animatedNormal)) + HX_(".y  \n",5f,e4,81,cc)) + HX_("mov ",cc,e2,60,48));
HXDLIN( 131)		::String _hx_tmp24 = ((_hx_tmp23 + ::Std_obj::string(this->_sharedRegisters->bitangentVarying)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN( 131)		::String _hx_tmp25 = (((_hx_tmp24 + ::Std_obj::string(this->_sharedRegisters->normalInput)) + HX_(".w  \n",21,77,2f,cb)) + HX_("mov ",cc,e2,60,48));
HXDLIN( 131)		::String _hx_tmp26 = ((_hx_tmp25 + ::Std_obj::string(this->_sharedRegisters->normalVarying)) + HX_(".x, ",7e,05,c3,1e));
HXDLIN( 131)		::String _hx_tmp27 = (((_hx_tmp26 + ::Std_obj::string(this->_sharedRegisters->animatedTangent)) + HX_(".z  \n",fe,1a,2b,cd)) + HX_("mov ",cc,e2,60,48));
HXDLIN( 131)		::String _hx_tmp28 = ((_hx_tmp27 + ::Std_obj::string(this->_sharedRegisters->normalVarying)) + HX_(".z, ",00,8a,c4,1e));
HXDLIN( 131)		::String _hx_tmp29 = (((_hx_tmp28 + ::Std_obj::string(this->_sharedRegisters->animatedNormal)) + HX_(".z  \n",fe,1a,2b,cd)) + HX_("mov ",cc,e2,60,48));
HXDLIN( 131)		::String _hx_tmp30 = ((_hx_tmp29 + ::Std_obj::string(this->_sharedRegisters->normalVarying)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN( 131)		::String _hx_tmp31 = (((_hx_tmp30 + ::Std_obj::string(this->_sharedRegisters->normalInput)) + HX_(".w  \n",21,77,2f,cb)) + HX_("crs ",bc,04,c7,41));
HXDLIN( 131)		::String _hx_tmp32 = ((_hx_tmp31 + ::Std_obj::string(bitanTemp)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 131)		::String _hx_tmp33 = ((_hx_tmp32 + ::Std_obj::string(this->_sharedRegisters->animatedNormal)) + HX_(", ",74,26,00,00));
HXDLIN( 131)		::String _hx_tmp34 = (((_hx_tmp33 + ::Std_obj::string(this->_sharedRegisters->animatedTangent)) + HX_("\n",0a,00,00,00)) + HX_("mov ",cc,e2,60,48));
HXDLIN( 131)		::String _hx_tmp35 = ((_hx_tmp34 + ::Std_obj::string(this->_sharedRegisters->tangentVarying)) + HX_(".y, ",bf,c7,c3,1e));
HXDLIN( 131)		::String _hx_tmp36 = (((_hx_tmp35 + ::Std_obj::string(bitanTemp)) + HX_(".x    \n",40,6b,c0,f5)) + HX_("mov ",cc,e2,60,48));
HXDLIN( 131)		::String _hx_tmp37 = ((_hx_tmp36 + ::Std_obj::string(this->_sharedRegisters->bitangentVarying)) + HX_(".y, ",bf,c7,c3,1e));
HXDLIN( 131)		::String _hx_tmp38 = (((_hx_tmp37 + ::Std_obj::string(bitanTemp)) + HX_(".y  \n",5f,e4,81,cc)) + HX_("mov ",cc,e2,60,48));
HXDLIN( 131)		::String _hx_tmp39 = ((_hx_tmp38 + ::Std_obj::string(this->_sharedRegisters->normalVarying)) + HX_(".y, ",bf,c7,c3,1e));
HXDLIN( 131)		_hx_tmp12->_vertexCode = (_hx_tmp13 + ((_hx_tmp39 + ::Std_obj::string(bitanTemp)) + HX_(".z    \n",fe,23,77,c2)));
HXLINE( 145)		this->_registerCache->removeVertexTempUsage(this->_sharedRegisters->animatedTangent);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SuperShaderCompiler_obj,compileTangentVertexCode,(void))

void SuperShaderCompiler_obj::compileTangentNormalMapFragmentCode(){
            	HX_STACKFRAME(&_hx_pos_d1c5e600247e0b5f_152_compileTangentNormalMapFragmentCode)
HXLINE( 153)		 ::away3d::materials::compilation::ShaderRegisterElement t = this->_registerCache->getFreeFragmentVectorTemp();
HXLINE( 158)		this->_registerCache->addFragmentTempUsages(t,1);
HXLINE( 154)		 ::away3d::materials::compilation::ShaderRegisterElement b = this->_registerCache->getFreeFragmentVectorTemp();
HXLINE( 160)		this->_registerCache->addFragmentTempUsages(b,1);
HXLINE( 155)		 ::away3d::materials::compilation::ShaderRegisterElement n = this->_registerCache->getFreeFragmentVectorTemp();
HXLINE( 162)		this->_registerCache->addFragmentTempUsages(n,1);
HXLINE( 164)		 ::away3d::materials::compilation::SuperShaderCompiler _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 164)		::String _hx_tmp1 = _hx_tmp->_fragmentCode;
HXDLIN( 164)		::String _hx_tmp2 = ((HX_("nrm ",57,58,0c,49) + ::Std_obj::string(t)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 164)		::String _hx_tmp3 = (((_hx_tmp2 + ::Std_obj::string(this->_sharedRegisters->tangentVarying)) + HX_("\n",0a,00,00,00)) + HX_("mov ",cc,e2,60,48));
HXDLIN( 164)		::String _hx_tmp4 = ((_hx_tmp3 + ::Std_obj::string(t)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN( 164)		::String _hx_tmp5 = (((_hx_tmp4 + ::Std_obj::string(this->_sharedRegisters->tangentVarying)) + HX_(".w\t\n",aa,24,c2,1e)) + HX_("nrm ",57,58,0c,49));
HXDLIN( 164)		::String _hx_tmp6 = ((_hx_tmp5 + ::Std_obj::string(b)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 164)		::String _hx_tmp7 = (((_hx_tmp6 + ::Std_obj::string(this->_sharedRegisters->bitangentVarying)) + HX_("\n",0a,00,00,00)) + HX_("nrm ",57,58,0c,49));
HXDLIN( 164)		::String _hx_tmp8 = ((_hx_tmp7 + ::Std_obj::string(n)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 164)		_hx_tmp->_fragmentCode = (_hx_tmp1 + ((_hx_tmp8 + ::Std_obj::string(this->_sharedRegisters->normalVarying)) + HX_("\n",0a,00,00,00)));
HXLINE( 169)		 ::away3d::materials::compilation::ShaderRegisterElement temp = this->_registerCache->getFreeFragmentVectorTemp();
HXLINE( 170)		this->_registerCache->addFragmentTempUsages(temp,1);
HXLINE( 171)		 ::away3d::materials::compilation::SuperShaderCompiler _hx_tmp9 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 171)		::String _hx_tmp10 = _hx_tmp9->_fragmentCode;
HXDLIN( 171)		::String _hx_tmp11 = (this->_methodSetup->_normalMethod->getFragmentCode(this->_methodSetup->_normalMethodVO,this->_registerCache,temp) + HX_("m33 ",33,21,33,48));
HXDLIN( 171)		::String _hx_tmp12 = ((_hx_tmp11 + ::Std_obj::string(this->_sharedRegisters->normalFragment)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 171)		::String _hx_tmp13 = ((_hx_tmp12 + ::Std_obj::string(temp)) + HX_(", ",74,26,00,00));
HXDLIN( 171)		::String _hx_tmp14 = (((_hx_tmp13 + ::Std_obj::string(t)) + HX_("\t\n",e1,07,00,00)) + HX_("mov ",cc,e2,60,48));
HXDLIN( 171)		::String _hx_tmp15 = ((_hx_tmp14 + ::Std_obj::string(this->_sharedRegisters->normalFragment)) + HX_(".w,   ",7d,68,47,06));
HXDLIN( 171)		_hx_tmp9->_fragmentCode = (_hx_tmp10 + ((_hx_tmp15 + ::Std_obj::string(this->_sharedRegisters->normalVarying)) + HX_(".w\t\t\t\n",ca,68,13,ef)));
HXLINE( 175)		this->_registerCache->removeFragmentTempUsage(temp);
HXLINE( 177)		if (this->_methodSetup->_normalMethodVO->needsView) {
HXLINE( 178)			this->_registerCache->removeFragmentTempUsage(this->_sharedRegisters->viewDirFragment);
            		}
HXLINE( 179)		bool _hx_tmp16;
HXDLIN( 179)		if (!(this->_methodSetup->_normalMethodVO->needsGlobalVertexPos)) {
HXLINE( 179)			_hx_tmp16 = this->_methodSetup->_normalMethodVO->needsGlobalFragmentPos;
            		}
            		else {
HXLINE( 179)			_hx_tmp16 = true;
            		}
HXDLIN( 179)		if (_hx_tmp16) {
HXLINE( 180)			this->_registerCache->removeVertexTempUsage(this->_sharedRegisters->globalPositionVertex);
            		}
HXLINE( 181)		this->_registerCache->removeFragmentTempUsage(b);
HXLINE( 182)		this->_registerCache->removeFragmentTempUsage(t);
HXLINE( 183)		this->_registerCache->removeFragmentTempUsage(n);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SuperShaderCompiler_obj,compileTangentNormalMapFragmentCode,(void))

void SuperShaderCompiler_obj::compileViewDirCode(){
            	HX_STACKFRAME(&_hx_pos_d1c5e600247e0b5f_190_compileViewDirCode)
HXLINE( 191)		 ::away3d::materials::compilation::ShaderRegisterElement cameraPositionReg = this->_registerCache->getFreeVertexConstant();
HXLINE( 192)		this->_sharedRegisters->viewDirVarying = this->_registerCache->getFreeVarying();
HXLINE( 193)		this->_sharedRegisters->viewDirFragment = this->_registerCache->getFreeFragmentVectorTemp();
HXLINE( 194)		 ::away3d::materials::compilation::ShaderRegisterCache _hx_tmp = this->_registerCache;
HXDLIN( 194)		 ::away3d::materials::compilation::ShaderRegisterElement _hx_tmp1 = this->_sharedRegisters->viewDirFragment;
HXDLIN( 194)		_hx_tmp->addFragmentTempUsages(_hx_tmp1,this->_dependencyCounter->get_viewDirDependencies());
HXLINE( 196)		this->_cameraPositionIndex = (cameraPositionReg->get_index() * 4);
HXLINE( 198)		 ::away3d::materials::compilation::SuperShaderCompiler _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 198)		::String _hx_tmp3 = _hx_tmp2->_vertexCode;
HXDLIN( 198)		::String _hx_tmp4 = ((HX_("sub ",a0,a6,5c,4c) + ::Std_obj::string(this->_sharedRegisters->viewDirVarying)) + HX_(", ",74,26,00,00));
HXDLIN( 198)		::String _hx_tmp5 = ((_hx_tmp4 + ::Std_obj::string(cameraPositionReg)) + HX_(", ",74,26,00,00));
HXDLIN( 198)		_hx_tmp2->_vertexCode = (_hx_tmp3 + ((_hx_tmp5 + ::Std_obj::string(this->_sharedRegisters->globalPositionVertex)) + HX_("\n",0a,00,00,00)));
HXLINE( 199)		 ::away3d::materials::compilation::SuperShaderCompiler _hx_tmp6 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 199)		::String _hx_tmp7 = _hx_tmp6->_fragmentCode;
HXDLIN( 199)		::String _hx_tmp8 = ((HX_("nrm ",57,58,0c,49) + ::Std_obj::string(this->_sharedRegisters->viewDirFragment)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 199)		::String _hx_tmp9 = (((_hx_tmp8 + ::Std_obj::string(this->_sharedRegisters->viewDirVarying)) + HX_("\n",0a,00,00,00)) + HX_("mov ",cc,e2,60,48));
HXDLIN( 199)		::String _hx_tmp10 = ((_hx_tmp9 + ::Std_obj::string(this->_sharedRegisters->viewDirFragment)) + HX_(".w,   ",7d,68,47,06));
HXDLIN( 199)		_hx_tmp6->_fragmentCode = (_hx_tmp7 + ((_hx_tmp10 + ::Std_obj::string(this->_sharedRegisters->viewDirVarying)) + HX_(".w \t\t\n",13,51,47,fe)));
HXLINE( 202)		this->_registerCache->removeVertexTempUsage(this->_sharedRegisters->globalPositionVertex);
            	}


void SuperShaderCompiler_obj::compileLightingCode(){
            	HX_STACKFRAME(&_hx_pos_d1c5e600247e0b5f_209_compileLightingCode)
HXLINE( 210)		 ::away3d::materials::compilation::ShaderRegisterElement shadowReg = null();
HXLINE( 212)		this->_sharedRegisters->shadedTarget = this->_registerCache->getFreeFragmentVectorTemp();
HXLINE( 213)		this->_registerCache->addFragmentTempUsages(this->_sharedRegisters->shadedTarget,1);
HXLINE( 215)		 ::away3d::materials::compilation::SuperShaderCompiler _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 215)		::String _hx_tmp1 = _hx_tmp->_vertexCode;
HXDLIN( 215)		_hx_tmp->_vertexCode = (_hx_tmp1 + this->_methodSetup->_diffuseMethod->getVertexCode(this->_methodSetup->_diffuseMethodVO,this->_registerCache));
HXLINE( 216)		 ::away3d::materials::compilation::SuperShaderCompiler _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 216)		::String _hx_tmp3 = _hx_tmp2->_fragmentCode;
HXDLIN( 216)		_hx_tmp2->_fragmentCode = (_hx_tmp3 + this->_methodSetup->_diffuseMethod->getFragmentPreLightingCode(this->_methodSetup->_diffuseMethodVO,this->_registerCache));
HXLINE( 218)		if (this->_usingSpecularMethod) {
HXLINE( 219)			 ::away3d::materials::compilation::SuperShaderCompiler _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 219)			::String _hx_tmp1 = _hx_tmp->_vertexCode;
HXDLIN( 219)			_hx_tmp->_vertexCode = (_hx_tmp1 + this->_methodSetup->_specularMethod->getVertexCode(this->_methodSetup->_specularMethodVO,this->_registerCache));
HXLINE( 220)			 ::away3d::materials::compilation::SuperShaderCompiler _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 220)			::String _hx_tmp3 = _hx_tmp2->_fragmentCode;
HXDLIN( 220)			_hx_tmp2->_fragmentCode = (_hx_tmp3 + this->_methodSetup->_specularMethod->getFragmentPreLightingCode(this->_methodSetup->_specularMethodVO,this->_registerCache));
            		}
HXLINE( 223)		if (this->usesLights()) {
HXLINE( 224)			this->initLightRegisters();
HXLINE( 225)			this->compileDirectionalLightCode();
HXLINE( 226)			this->compilePointLightCode();
            		}
HXLINE( 229)		if (this->usesProbes()) {
HXLINE( 230)			this->compileLightProbeCode();
            		}
HXLINE( 233)		 ::away3d::materials::compilation::SuperShaderCompiler _hx_tmp4 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 233)		::String _hx_tmp5 = _hx_tmp4->_vertexCode;
HXDLIN( 233)		_hx_tmp4->_vertexCode = (_hx_tmp5 + this->_methodSetup->_ambientMethod->getVertexCode(this->_methodSetup->_ambientMethodVO,this->_registerCache));
HXLINE( 234)		 ::away3d::materials::compilation::SuperShaderCompiler _hx_tmp6 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 234)		::String _hx_tmp7 = _hx_tmp6->_fragmentCode;
HXDLIN( 234)		_hx_tmp6->_fragmentCode = (_hx_tmp7 + this->_methodSetup->_ambientMethod->getFragmentCode(this->_methodSetup->_ambientMethodVO,this->_registerCache,this->_sharedRegisters->shadedTarget));
HXLINE( 235)		if (this->_methodSetup->_ambientMethodVO->needsNormals) {
HXLINE( 236)			this->_registerCache->removeFragmentTempUsage(this->_sharedRegisters->normalFragment);
            		}
HXLINE( 237)		if (this->_methodSetup->_ambientMethodVO->needsView) {
HXLINE( 238)			this->_registerCache->removeFragmentTempUsage(this->_sharedRegisters->viewDirFragment);
            		}
HXLINE( 240)		if (::hx::IsNotNull( this->_methodSetup->_shadowMethod )) {
HXLINE( 241)			 ::away3d::materials::compilation::SuperShaderCompiler _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 241)			::String _hx_tmp1 = _hx_tmp->_vertexCode;
HXDLIN( 241)			_hx_tmp->_vertexCode = (_hx_tmp1 + this->_methodSetup->_shadowMethod->getVertexCode(this->_methodSetup->_shadowMethodVO,this->_registerCache));
HXLINE( 244)			if ((this->_dependencyCounter->get_normalDependencies() == 0)) {
HXLINE( 245)				shadowReg = this->_registerCache->getFreeFragmentVectorTemp();
HXLINE( 246)				this->_registerCache->addFragmentTempUsages(shadowReg,1);
            			}
            			else {
HXLINE( 248)				shadowReg = this->_sharedRegisters->normalFragment;
            			}
HXLINE( 250)			this->_methodSetup->_diffuseMethod->set_shadowRegister(shadowReg);
HXLINE( 251)			 ::away3d::materials::compilation::SuperShaderCompiler _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 251)			::String _hx_tmp3 = _hx_tmp2->_fragmentCode;
HXDLIN( 251)			_hx_tmp2->_fragmentCode = (_hx_tmp3 + this->_methodSetup->_shadowMethod->getFragmentCode(this->_methodSetup->_shadowMethodVO,this->_registerCache,shadowReg));
            		}
HXLINE( 253)		 ::away3d::materials::compilation::SuperShaderCompiler _hx_tmp8 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 253)		::String _hx_tmp9 = _hx_tmp8->_fragmentCode;
HXDLIN( 253)		_hx_tmp8->_fragmentCode = (_hx_tmp9 + this->_methodSetup->_diffuseMethod->getFragmentPostLightingCode(this->_methodSetup->_diffuseMethodVO,this->_registerCache,this->_sharedRegisters->shadedTarget));
HXLINE( 255)		if (this->_alphaPremultiplied) {
HXLINE( 256)			 ::away3d::materials::compilation::SuperShaderCompiler _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 256)			::String _hx_tmp1 = _hx_tmp->_fragmentCode;
HXDLIN( 256)			::String _hx_tmp2 = ((HX_("add ",df,ea,69,40) + ::Std_obj::string(this->_sharedRegisters->shadedTarget)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN( 256)			::String _hx_tmp3 = ((_hx_tmp2 + ::Std_obj::string(this->_sharedRegisters->shadedTarget)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN( 256)			::String _hx_tmp4 = (((_hx_tmp3 + ::Std_obj::string(this->_sharedRegisters->commons)) + HX_(".z\n",fe,51,23,00)) + HX_("div ",af,69,69,42));
HXDLIN( 256)			::String _hx_tmp5 = ((_hx_tmp4 + ::Std_obj::string(this->_sharedRegisters->shadedTarget)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 256)			::String _hx_tmp6 = ((_hx_tmp5 + ::Std_obj::string(this->_sharedRegisters->shadedTarget)) + HX_(", ",74,26,00,00));
HXDLIN( 256)			::String _hx_tmp7 = (((_hx_tmp6 + ::Std_obj::string(this->_sharedRegisters->shadedTarget)) + HX_(".w\n",61,4f,23,00)) + HX_("sub ",a0,a6,5c,4c));
HXDLIN( 256)			::String _hx_tmp8 = ((_hx_tmp7 + ::Std_obj::string(this->_sharedRegisters->shadedTarget)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN( 256)			::String _hx_tmp9 = ((_hx_tmp8 + ::Std_obj::string(this->_sharedRegisters->shadedTarget)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN( 256)			::String _hx_tmp10 = (((_hx_tmp9 + ::Std_obj::string(this->_sharedRegisters->commons)) + HX_(".z\n",fe,51,23,00)) + HX_("sat ",3a,89,4d,4c));
HXDLIN( 256)			::String _hx_tmp11 = ((_hx_tmp10 + ::Std_obj::string(this->_sharedRegisters->shadedTarget)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 256)			_hx_tmp->_fragmentCode = (_hx_tmp1 + ((_hx_tmp11 + ::Std_obj::string(this->_sharedRegisters->shadedTarget)) + HX_("\n",0a,00,00,00)));
            		}
HXLINE( 263)		if (this->_methodSetup->_diffuseMethodVO->needsNormals) {
HXLINE( 264)			this->_registerCache->removeFragmentTempUsage(this->_sharedRegisters->normalFragment);
            		}
HXLINE( 265)		if (this->_methodSetup->_diffuseMethodVO->needsView) {
HXLINE( 266)			this->_registerCache->removeFragmentTempUsage(this->_sharedRegisters->viewDirFragment);
            		}
HXLINE( 268)		if (this->_usingSpecularMethod) {
HXLINE( 269)			this->_methodSetup->_specularMethod->set_shadowRegister(shadowReg);
HXLINE( 270)			 ::away3d::materials::compilation::SuperShaderCompiler _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 270)			::String _hx_tmp1 = _hx_tmp->_fragmentCode;
HXDLIN( 270)			_hx_tmp->_fragmentCode = (_hx_tmp1 + this->_methodSetup->_specularMethod->getFragmentPostLightingCode(this->_methodSetup->_specularMethodVO,this->_registerCache,this->_sharedRegisters->shadedTarget));
HXLINE( 271)			if (this->_methodSetup->_specularMethodVO->needsNormals) {
HXLINE( 272)				this->_registerCache->removeFragmentTempUsage(this->_sharedRegisters->normalFragment);
            			}
HXLINE( 273)			if (this->_methodSetup->_specularMethodVO->needsView) {
HXLINE( 274)				this->_registerCache->removeFragmentTempUsage(this->_sharedRegisters->viewDirFragment);
            			}
            		}
            	}


void SuperShaderCompiler_obj::initLightRegisters(){
            	HX_STACKFRAME(&_hx_pos_d1c5e600247e0b5f_282_initLightRegisters)
HXLINE( 284)		int len = this->_dirLightRegisters->get_length();
HXLINE( 287)		{
HXLINE( 287)			int _g = 0;
HXDLIN( 287)			int _g1 = len;
HXDLIN( 287)			while((_g < _g1)){
HXLINE( 287)				_g = (_g + 1);
HXDLIN( 287)				int i = (_g - 1);
HXLINE( 288)				{
HXLINE( 288)					::Dynamic this1 = this->_dirLightRegisters;
HXDLIN( 288)					( ( ::openfl::_Vector::ObjectVector)(this1) )->set(i,this->_registerCache->getFreeFragmentConstant()).StaticCast<  ::away3d::materials::compilation::ShaderRegisterElement >();
            				}
HXLINE( 289)				if ((this->_lightFragmentConstantIndex == -1)) {
HXLINE( 290)					this->_lightFragmentConstantIndex = (this->_dirLightRegisters->get(i).StaticCast<  ::away3d::materials::compilation::ShaderRegisterElement >()->get_index() * 4);
            				}
            			}
            		}
HXLINE( 293)		len = this->_pointLightRegisters->get_length();
HXLINE( 294)		{
HXLINE( 294)			int _g2 = 0;
HXDLIN( 294)			int _g3 = len;
HXDLIN( 294)			while((_g2 < _g3)){
HXLINE( 294)				_g2 = (_g2 + 1);
HXDLIN( 294)				int i = (_g2 - 1);
HXLINE( 295)				{
HXLINE( 295)					::Dynamic this1 = this->_pointLightRegisters;
HXDLIN( 295)					( ( ::openfl::_Vector::ObjectVector)(this1) )->set(i,this->_registerCache->getFreeFragmentConstant()).StaticCast<  ::away3d::materials::compilation::ShaderRegisterElement >();
            				}
HXLINE( 296)				if ((this->_lightFragmentConstantIndex == -1)) {
HXLINE( 297)					this->_lightFragmentConstantIndex = (this->_pointLightRegisters->get(i).StaticCast<  ::away3d::materials::compilation::ShaderRegisterElement >()->get_index() * 4);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SuperShaderCompiler_obj,initLightRegisters,(void))

void SuperShaderCompiler_obj::compileDirectionalLightCode(){
            	HX_STACKFRAME(&_hx_pos_d1c5e600247e0b5f_302_compileDirectionalLightCode)
HXLINE( 303)		 ::away3d::materials::compilation::ShaderRegisterElement diffuseColorReg;
HXLINE( 304)		 ::away3d::materials::compilation::ShaderRegisterElement specularColorReg;
HXLINE( 305)		 ::away3d::materials::compilation::ShaderRegisterElement lightDirReg;
HXLINE( 306)		int regIndex = 0;
HXLINE( 307)		bool addSpec;
HXDLIN( 307)		if (this->_usingSpecularMethod) {
HXLINE( 307)			addSpec = this->usesLightsForSpecular();
            		}
            		else {
HXLINE( 307)			addSpec = false;
            		}
HXLINE( 308)		bool addDiff = this->usesLightsForDiffuse();
HXLINE( 310)		bool _hx_tmp;
HXDLIN( 310)		if (!(addSpec)) {
HXLINE( 310)			_hx_tmp = addDiff;
            		}
            		else {
HXLINE( 310)			_hx_tmp = true;
            		}
HXDLIN( 310)		if (!(_hx_tmp)) {
HXLINE( 311)			return;
            		}
HXLINE( 313)		{
HXLINE( 313)			int _g = 0;
HXDLIN( 313)			int _g1 = this->_numDirectionalLights;
HXDLIN( 313)			while((_g < _g1)){
HXLINE( 313)				_g = (_g + 1);
HXDLIN( 313)				int i = (_g - 1);
HXLINE( 314)				regIndex = (regIndex + 1);
HXDLIN( 314)				lightDirReg = this->_dirLightRegisters->get((regIndex - 1)).StaticCast<  ::away3d::materials::compilation::ShaderRegisterElement >();
HXLINE( 315)				regIndex = (regIndex + 1);
HXDLIN( 315)				diffuseColorReg = this->_dirLightRegisters->get((regIndex - 1)).StaticCast<  ::away3d::materials::compilation::ShaderRegisterElement >();
HXLINE( 316)				regIndex = (regIndex + 1);
HXDLIN( 316)				specularColorReg = this->_dirLightRegisters->get((regIndex - 1)).StaticCast<  ::away3d::materials::compilation::ShaderRegisterElement >();
HXLINE( 317)				if (addDiff) {
HXLINE( 318)					 ::away3d::materials::compilation::SuperShaderCompiler _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 318)					::String _hx_tmp1 = _hx_tmp->_fragmentCode;
HXDLIN( 318)					_hx_tmp->_fragmentCode = (_hx_tmp1 + this->_methodSetup->_diffuseMethod->getFragmentCodePerLight(this->_methodSetup->_diffuseMethodVO,lightDirReg,diffuseColorReg,this->_registerCache));
            				}
HXLINE( 319)				if (addSpec) {
HXLINE( 320)					 ::away3d::materials::compilation::SuperShaderCompiler _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 320)					::String _hx_tmp1 = _hx_tmp->_fragmentCode;
HXDLIN( 320)					_hx_tmp->_fragmentCode = (_hx_tmp1 + this->_methodSetup->_specularMethod->getFragmentCodePerLight(this->_methodSetup->_specularMethodVO,lightDirReg,specularColorReg,this->_registerCache));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SuperShaderCompiler_obj,compileDirectionalLightCode,(void))

void SuperShaderCompiler_obj::compilePointLightCode(){
            	HX_STACKFRAME(&_hx_pos_d1c5e600247e0b5f_325_compilePointLightCode)
HXLINE( 326)		 ::away3d::materials::compilation::ShaderRegisterElement diffuseColorReg;
HXLINE( 327)		 ::away3d::materials::compilation::ShaderRegisterElement specularColorReg;
HXLINE( 328)		 ::away3d::materials::compilation::ShaderRegisterElement lightPosReg;
HXLINE( 329)		 ::away3d::materials::compilation::ShaderRegisterElement lightDirReg;
HXLINE( 330)		int regIndex = 0;
HXLINE( 331)		bool addSpec;
HXDLIN( 331)		if (this->_usingSpecularMethod) {
HXLINE( 331)			addSpec = this->usesLightsForSpecular();
            		}
            		else {
HXLINE( 331)			addSpec = false;
            		}
HXLINE( 332)		bool addDiff = this->usesLightsForDiffuse();
HXLINE( 334)		bool _hx_tmp;
HXDLIN( 334)		if (!(addSpec)) {
HXLINE( 334)			_hx_tmp = addDiff;
            		}
            		else {
HXLINE( 334)			_hx_tmp = true;
            		}
HXDLIN( 334)		if (!(_hx_tmp)) {
HXLINE( 335)			return;
            		}
HXLINE( 337)		{
HXLINE( 337)			int _g = 0;
HXDLIN( 337)			int _g1 = this->_numPointLights;
HXDLIN( 337)			while((_g < _g1)){
HXLINE( 337)				_g = (_g + 1);
HXDLIN( 337)				int i = (_g - 1);
HXLINE( 338)				regIndex = (regIndex + 1);
HXDLIN( 338)				lightPosReg = this->_pointLightRegisters->get((regIndex - 1)).StaticCast<  ::away3d::materials::compilation::ShaderRegisterElement >();
HXLINE( 339)				regIndex = (regIndex + 1);
HXDLIN( 339)				diffuseColorReg = this->_pointLightRegisters->get((regIndex - 1)).StaticCast<  ::away3d::materials::compilation::ShaderRegisterElement >();
HXLINE( 340)				regIndex = (regIndex + 1);
HXDLIN( 340)				specularColorReg = this->_pointLightRegisters->get((regIndex - 1)).StaticCast<  ::away3d::materials::compilation::ShaderRegisterElement >();
HXLINE( 341)				lightDirReg = this->_registerCache->getFreeFragmentVectorTemp();
HXLINE( 342)				this->_registerCache->addFragmentTempUsages(lightDirReg,1);
HXLINE( 345)				 ::away3d::materials::compilation::SuperShaderCompiler _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 345)				::String _hx_tmp1 = _hx_tmp->_fragmentCode;
HXDLIN( 345)				::String _hx_tmp2 = ((HX_("sub ",a0,a6,5c,4c) + ::Std_obj::string(lightDirReg)) + HX_(", ",74,26,00,00));
HXDLIN( 345)				::String _hx_tmp3 = ((_hx_tmp2 + ::Std_obj::string(lightPosReg)) + HX_(", ",74,26,00,00));
HXDLIN( 345)				::String _hx_tmp4 = (((_hx_tmp3 + ::Std_obj::string(this->_sharedRegisters->globalPositionVarying)) + HX_("\n",0a,00,00,00)) + HX_("dp3 ",19,7f,6e,42));
HXDLIN( 345)				::String _hx_tmp5 = ((_hx_tmp4 + ::Std_obj::string(lightDirReg)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN( 345)				::String _hx_tmp6 = ((_hx_tmp5 + ::Std_obj::string(lightDirReg)) + HX_(", ",74,26,00,00));
HXDLIN( 345)				::String _hx_tmp7 = (((_hx_tmp6 + ::Std_obj::string(lightDirReg)) + HX_("\n",0a,00,00,00)) + HX_("sub ",a0,a6,5c,4c));
HXDLIN( 345)				::String _hx_tmp8 = ((_hx_tmp7 + ::Std_obj::string(lightDirReg)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN( 345)				::String _hx_tmp9 = ((_hx_tmp8 + ::Std_obj::string(lightDirReg)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN( 345)				::String _hx_tmp10 = (((_hx_tmp9 + ::Std_obj::string(diffuseColorReg)) + HX_(".w\n",61,4f,23,00)) + HX_("mul ",9c,67,65,48));
HXDLIN( 345)				::String _hx_tmp11 = ((_hx_tmp10 + ::Std_obj::string(lightDirReg)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN( 345)				::String _hx_tmp12 = ((_hx_tmp11 + ::Std_obj::string(lightDirReg)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN( 345)				::String _hx_tmp13 = (((_hx_tmp12 + ::Std_obj::string(specularColorReg)) + HX_(".w\n",61,4f,23,00)) + HX_("sat ",3a,89,4d,4c));
HXDLIN( 345)				::String _hx_tmp14 = ((_hx_tmp13 + ::Std_obj::string(lightDirReg)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN( 345)				::String _hx_tmp15 = (((_hx_tmp14 + ::Std_obj::string(lightDirReg)) + HX_(".w\n",61,4f,23,00)) + HX_("sub ",a0,a6,5c,4c));
HXDLIN( 345)				::String _hx_tmp16 = ((_hx_tmp15 + ::Std_obj::string(lightDirReg)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN( 345)				::String _hx_tmp17 = ((_hx_tmp16 + ::Std_obj::string(lightPosReg)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN( 345)				::String _hx_tmp18 = (((_hx_tmp17 + ::Std_obj::string(lightDirReg)) + HX_(".w\n",61,4f,23,00)) + HX_("nrm ",57,58,0c,49));
HXDLIN( 345)				::String _hx_tmp19 = ((_hx_tmp18 + ::Std_obj::string(lightDirReg)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 345)				_hx_tmp->_fragmentCode = (_hx_tmp1 + ((_hx_tmp19 + ::Std_obj::string(lightDirReg)) + HX_("\n",0a,00,00,00)));
HXLINE( 359)				if ((this->_lightFragmentConstantIndex == -1)) {
HXLINE( 360)					this->_lightFragmentConstantIndex = (lightPosReg->get_index() * 4);
            				}
HXLINE( 362)				if (addDiff) {
HXLINE( 363)					 ::away3d::materials::compilation::SuperShaderCompiler _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 363)					::String _hx_tmp1 = _hx_tmp->_fragmentCode;
HXDLIN( 363)					_hx_tmp->_fragmentCode = (_hx_tmp1 + this->_methodSetup->_diffuseMethod->getFragmentCodePerLight(this->_methodSetup->_diffuseMethodVO,lightDirReg,diffuseColorReg,this->_registerCache));
            				}
HXLINE( 365)				if (addSpec) {
HXLINE( 366)					 ::away3d::materials::compilation::SuperShaderCompiler _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 366)					::String _hx_tmp1 = _hx_tmp->_fragmentCode;
HXDLIN( 366)					_hx_tmp->_fragmentCode = (_hx_tmp1 + this->_methodSetup->_specularMethod->getFragmentCodePerLight(this->_methodSetup->_specularMethodVO,lightDirReg,specularColorReg,this->_registerCache));
            				}
HXLINE( 368)				this->_registerCache->removeFragmentTempUsage(lightDirReg);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SuperShaderCompiler_obj,compilePointLightCode,(void))

void SuperShaderCompiler_obj::compileLightProbeCode(){
            	HX_GC_STACKFRAME(&_hx_pos_d1c5e600247e0b5f_373_compileLightProbeCode)
HXLINE( 374)		::String weightReg;
HXLINE( 375)		::Array< ::String > weightComponents = ::Array_obj< ::String >::fromData( _hx_array_data_44034d83_19,4);
HXLINE( 376)		int length = null();
HXDLIN( 376)		bool fixed = null();
HXDLIN( 376)		::Array< ::Dynamic> array = null();
HXDLIN( 376)		 ::openfl::_Vector::ObjectVector weightRegisters =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE( 377)		int i = 0;
HXLINE( 378)		 ::away3d::materials::compilation::ShaderRegisterElement texReg;
HXLINE( 379)		bool addSpec;
HXDLIN( 379)		if (this->_usingSpecularMethod) {
HXLINE( 379)			addSpec = this->usesProbesForSpecular();
            		}
            		else {
HXLINE( 379)			addSpec = false;
            		}
HXLINE( 380)		bool addDiff = this->usesProbesForDiffuse();
HXLINE( 382)		bool _hx_tmp;
HXDLIN( 382)		if (!(addSpec)) {
HXLINE( 382)			_hx_tmp = addDiff;
            		}
            		else {
HXLINE( 382)			_hx_tmp = true;
            		}
HXDLIN( 382)		if (!(_hx_tmp)) {
HXLINE( 383)			return;
            		}
HXLINE( 385)		if (addDiff) {
HXLINE( 386)			int length = null();
HXDLIN( 386)			bool fixed = null();
HXDLIN( 386)			::Array< int > array = null();
HXDLIN( 386)			this->_lightProbeDiffuseIndices =  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,length,fixed,array);
            		}
HXLINE( 387)		if (addSpec) {
HXLINE( 388)			int length = null();
HXDLIN( 388)			bool fixed = null();
HXDLIN( 388)			::Array< int > array = null();
HXDLIN( 388)			this->_lightProbeSpecularIndices =  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,length,fixed,array);
            		}
HXLINE( 390)		{
HXLINE( 390)			int _g = 0;
HXDLIN( 390)			int _g1 = this->_numProbeRegisters;
HXDLIN( 390)			while((_g < _g1)){
HXLINE( 390)				_g = (_g + 1);
HXDLIN( 390)				int i = (_g - 1);
HXLINE( 391)				weightRegisters->set(i,this->_registerCache->getFreeFragmentConstant()).StaticCast<  ::away3d::materials::compilation::ShaderRegisterElement >();
HXLINE( 392)				if ((i == 0)) {
HXLINE( 393)					this->_probeWeightsIndex = (weightRegisters->get(i).StaticCast<  ::away3d::materials::compilation::ShaderRegisterElement >()->get_index() * 4);
            				}
            			}
            		}
HXLINE( 396)		{
HXLINE( 396)			int _g2 = 0;
HXDLIN( 396)			int _g3 = this->_numLightProbes;
HXDLIN( 396)			while((_g2 < _g3)){
HXLINE( 396)				_g2 = (_g2 + 1);
HXDLIN( 396)				int i = (_g2 - 1);
HXLINE( 397)				::String weightReg1 = weightRegisters->get(::Math_obj::floor((( (Float)(i) ) / ( (Float)(4) )))).StaticCast<  ::away3d::materials::compilation::ShaderRegisterElement >()->toString();
HXDLIN( 397)				weightReg = (weightReg1 + weightComponents->__get(::hx::Mod(i,4)));
HXLINE( 399)				if (addDiff) {
HXLINE( 400)					texReg = this->_registerCache->getFreeTextureReg();
HXLINE( 401)					{
HXLINE( 401)						::Dynamic this1 = this->_lightProbeDiffuseIndices;
HXDLIN( 401)						( ( ::openfl::_Vector::IntVector)(this1) )->set(i,texReg->get_index());
            					}
HXLINE( 402)					 ::away3d::materials::compilation::SuperShaderCompiler _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 402)					::String _hx_tmp1 = _hx_tmp->_fragmentCode;
HXDLIN( 402)					_hx_tmp->_fragmentCode = (_hx_tmp1 + this->_methodSetup->_diffuseMethod->getFragmentCodePerProbe(this->_methodSetup->_diffuseMethodVO,texReg,weightReg,this->_registerCache));
            				}
HXLINE( 405)				if (addSpec) {
HXLINE( 406)					texReg = this->_registerCache->getFreeTextureReg();
HXLINE( 407)					{
HXLINE( 407)						::Dynamic this1 = this->_lightProbeSpecularIndices;
HXDLIN( 407)						( ( ::openfl::_Vector::IntVector)(this1) )->set(i,texReg->get_index());
            					}
HXLINE( 408)					 ::away3d::materials::compilation::SuperShaderCompiler _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 408)					::String _hx_tmp1 = _hx_tmp->_fragmentCode;
HXDLIN( 408)					_hx_tmp->_fragmentCode = (_hx_tmp1 + this->_methodSetup->_specularMethod->getFragmentCodePerProbe(this->_methodSetup->_specularMethodVO,texReg,weightReg,this->_registerCache));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SuperShaderCompiler_obj,compileLightProbeCode,(void))


::hx::ObjectPtr< SuperShaderCompiler_obj > SuperShaderCompiler_obj::__new(::String profile) {
	::hx::ObjectPtr< SuperShaderCompiler_obj > __this = new SuperShaderCompiler_obj();
	__this->__construct(profile);
	return __this;
}

::hx::ObjectPtr< SuperShaderCompiler_obj > SuperShaderCompiler_obj::__alloc(::hx::Ctx *_hx_ctx,::String profile) {
	SuperShaderCompiler_obj *__this = (SuperShaderCompiler_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SuperShaderCompiler_obj), true, "away3d.materials.compilation.SuperShaderCompiler"));
	*(void **)__this = SuperShaderCompiler_obj::_hx_vtable;
	__this->__construct(profile);
	return __this;
}

SuperShaderCompiler_obj::SuperShaderCompiler_obj()
{
}

void SuperShaderCompiler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SuperShaderCompiler);
	HX_MARK_MEMBER_NAME(_pointLightRegisters,"_pointLightRegisters");
	HX_MARK_MEMBER_NAME(_dirLightRegisters,"_dirLightRegisters");
	 ::away3d::materials::compilation::ShaderCompiler_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SuperShaderCompiler_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_pointLightRegisters,"_pointLightRegisters");
	HX_VISIT_MEMBER_NAME(_dirLightRegisters,"_dirLightRegisters");
	 ::away3d::materials::compilation::ShaderCompiler_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val SuperShaderCompiler_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"initLightData") ) { return ::hx::Val( initLightData_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"compileNormalCode") ) { return ::hx::Val( compileNormalCode_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_dirLightRegisters") ) { return ::hx::Val( _dirLightRegisters ); }
		if (HX_FIELD_EQ(inName,"compileViewDirCode") ) { return ::hx::Val( compileViewDirCode_dyn() ); }
		if (HX_FIELD_EQ(inName,"initLightRegisters") ) { return ::hx::Val( initLightRegisters_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"compileLightingCode") ) { return ::hx::Val( compileLightingCode_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_pointLightRegisters") ) { return ::hx::Val( _pointLightRegisters ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"calculateDependencies") ) { return ::hx::Val( calculateDependencies_dyn() ); }
		if (HX_FIELD_EQ(inName,"createNormalRegisters") ) { return ::hx::Val( createNormalRegisters_dyn() ); }
		if (HX_FIELD_EQ(inName,"compilePointLightCode") ) { return ::hx::Val( compilePointLightCode_dyn() ); }
		if (HX_FIELD_EQ(inName,"compileLightProbeCode") ) { return ::hx::Val( compileLightProbeCode_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"compileTangentVertexCode") ) { return ::hx::Val( compileTangentVertexCode_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"compileDirectionalLightCode") ) { return ::hx::Val( compileDirectionalLightCode_dyn() ); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"compileTangentNormalMapFragmentCode") ) { return ::hx::Val( compileTangentNormalMapFragmentCode_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SuperShaderCompiler_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"_dirLightRegisters") ) { _dirLightRegisters=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_pointLightRegisters") ) { _pointLightRegisters=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SuperShaderCompiler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_pointLightRegisters",6b,c0,89,b1));
	outFields->push(HX_("_dirLightRegisters",e8,b7,8d,b9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SuperShaderCompiler_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(SuperShaderCompiler_obj,_pointLightRegisters),HX_("_pointLightRegisters",6b,c0,89,b1)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(SuperShaderCompiler_obj,_dirLightRegisters),HX_("_dirLightRegisters",e8,b7,8d,b9)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SuperShaderCompiler_obj_sStaticStorageInfo = 0;
#endif

static ::String SuperShaderCompiler_obj_sMemberFields[] = {
	HX_("_pointLightRegisters",6b,c0,89,b1),
	HX_("_dirLightRegisters",e8,b7,8d,b9),
	HX_("initLightData",f0,f8,80,36),
	HX_("calculateDependencies",6f,36,83,c4),
	HX_("compileNormalCode",47,86,93,2c),
	HX_("createNormalRegisters",ed,3d,3d,dd),
	HX_("compileTangentVertexCode",e3,ac,64,20),
	HX_("compileTangentNormalMapFragmentCode",80,86,aa,7a),
	HX_("compileViewDirCode",82,52,34,e9),
	HX_("compileLightingCode",2c,2b,f1,74),
	HX_("initLightRegisters",2a,80,f2,b8),
	HX_("compileDirectionalLightCode",ec,9b,63,dc),
	HX_("compilePointLightCode",86,ef,f8,3c),
	HX_("compileLightProbeCode",9a,d1,1b,99),
	::String(null()) };

::hx::Class SuperShaderCompiler_obj::__mClass;

void SuperShaderCompiler_obj::__register()
{
	SuperShaderCompiler_obj _hx_dummy;
	SuperShaderCompiler_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.materials.compilation.SuperShaderCompiler",83,4d,03,44);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SuperShaderCompiler_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SuperShaderCompiler_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SuperShaderCompiler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SuperShaderCompiler_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace materials
} // end namespace compilation
