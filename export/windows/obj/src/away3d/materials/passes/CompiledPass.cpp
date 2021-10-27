#include <hxcpp.h>

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
#ifndef INCLUDED_away3d_core_math_Matrix3DUtils
#include <away3d/core/math/Matrix3DUtils.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_errors_AbstractMethodError
#include <away3d/errors/AbstractMethodError.h>
#endif
#ifndef INCLUDED_away3d_events_ShadingMethodEvent
#include <away3d/events/ShadingMethodEvent.h>
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
#ifndef INCLUDED_away3d_materials_compilation_ShaderCompiler
#include <away3d/materials/compilation/ShaderCompiler.h>
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
#ifndef INCLUDED_away3d_materials_passes_CompiledPass
#include <away3d/materials/passes/CompiledPass.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_MaterialPassBase
#include <away3d/materials/passes/MaterialPassBase.h>
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
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
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
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_88722f2eca00b80b_32_new,"away3d.materials.passes.CompiledPass","new",0xec114df2,"away3d.materials.passes.CompiledPass.new","away3d/materials/passes/CompiledPass.hx",32,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_118_get_enableLightFallOff,"away3d.materials.passes.CompiledPass","get_enableLightFallOff",0x08e97d98,"away3d.materials.passes.CompiledPass.get_enableLightFallOff","away3d/materials/passes/CompiledPass.hx",118,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_122_set_enableLightFallOff,"away3d.materials.passes.CompiledPass","set_enableLightFallOff",0x3c94fa0c,"away3d.materials.passes.CompiledPass.set_enableLightFallOff","away3d/materials/passes/CompiledPass.hx",122,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_136_get_forceSeparateMVP,"away3d.materials.passes.CompiledPass","get_forceSeparateMVP",0xfdfdc450,"away3d.materials.passes.CompiledPass.get_forceSeparateMVP","away3d/materials/passes/CompiledPass.hx",136,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_140_set_forceSeparateMVP,"away3d.materials.passes.CompiledPass","set_forceSeparateMVP",0xcab57bc4,"away3d.materials.passes.CompiledPass.set_forceSeparateMVP","away3d/materials/passes/CompiledPass.hx",140,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_150_get_numPointLights,"away3d.materials.passes.CompiledPass","get_numPointLights",0xc2ca5a1e,"away3d.materials.passes.CompiledPass.get_numPointLights","away3d/materials/passes/CompiledPass.hx",150,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_158_get_numDirectionalLights,"away3d.materials.passes.CompiledPass","get_numDirectionalLights",0x4a9e8cf8,"away3d.materials.passes.CompiledPass.get_numDirectionalLights","away3d/materials/passes/CompiledPass.hx",158,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_166_get_numLightProbes,"away3d.materials.passes.CompiledPass","get_numLightProbes",0x0dce238a,"away3d.materials.passes.CompiledPass.get_numLightProbes","away3d/materials/passes/CompiledPass.hx",166,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_173_updateProgram,"away3d.materials.passes.CompiledPass","updateProgram",0xb29c978d,"away3d.materials.passes.CompiledPass.updateProgram","away3d/materials/passes/CompiledPass.hx",173,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_184_reset,"away3d.materials.passes.CompiledPass","reset",0x5b0dcfe1,"away3d.materials.passes.CompiledPass.reset","away3d/materials/passes/CompiledPass.hx",184,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_195_updateUsedOffsets,"away3d.materials.passes.CompiledPass","updateUsedOffsets",0xd22d164c,"away3d.materials.passes.CompiledPass.updateUsedOffsets","away3d/materials/passes/CompiledPass.hx",195,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_208_initConstantData,"away3d.materials.passes.CompiledPass","initConstantData",0xad54940c,"away3d.materials.passes.CompiledPass.initConstantData","away3d/materials/passes/CompiledPass.hx",208,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_226_initCompiler,"away3d.materials.passes.CompiledPass","initCompiler",0x5e2b66fd,"away3d.materials.passes.CompiledPass.initCompiler","away3d/materials/passes/CompiledPass.hx",226,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_251_createCompiler,"away3d.materials.passes.CompiledPass","createCompiler",0xab224669,"away3d.materials.passes.CompiledPass.createCompiler","away3d/materials/passes/CompiledPass.hx",251,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_259_updateShaderProperties,"away3d.materials.passes.CompiledPass","updateShaderProperties",0xacb4494f,"away3d.materials.passes.CompiledPass.updateShaderProperties","away3d/materials/passes/CompiledPass.hx",259,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_280_updateRegisterIndices,"away3d.materials.passes.CompiledPass","updateRegisterIndices",0x371da90d,"away3d.materials.passes.CompiledPass.updateRegisterIndices","away3d/materials/passes/CompiledPass.hx",280,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_302_get_preserveAlpha,"away3d.materials.passes.CompiledPass","get_preserveAlpha",0xef82cc5b,"away3d.materials.passes.CompiledPass.get_preserveAlpha","away3d/materials/passes/CompiledPass.hx",302,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_306_set_preserveAlpha,"away3d.materials.passes.CompiledPass","set_preserveAlpha",0x12f0a467,"away3d.materials.passes.CompiledPass.set_preserveAlpha","away3d/materials/passes/CompiledPass.hx",306,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_319_get_animateUVs,"away3d.materials.passes.CompiledPass","get_animateUVs",0xd16f3ae8,"away3d.materials.passes.CompiledPass.get_animateUVs","away3d/materials/passes/CompiledPass.hx",319,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_323_set_animateUVs,"away3d.materials.passes.CompiledPass","set_animateUVs",0xf18f235c,"away3d.materials.passes.CompiledPass.set_animateUVs","away3d/materials/passes/CompiledPass.hx",323,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_337_get_animateUVs2,"away3d.materials.passes.CompiledPass","get_animateUVs2",0x6fe4504a,"away3d.materials.passes.CompiledPass.get_animateUVs2","away3d/materials/passes/CompiledPass.hx",337,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_341_set_animateUVs2,"away3d.materials.passes.CompiledPass","set_animateUVs2",0x6bafcd56,"away3d.materials.passes.CompiledPass.set_animateUVs2","away3d/materials/passes/CompiledPass.hx",341,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_352_set_mipmap,"away3d.materials.passes.CompiledPass","set_mipmap",0x3eba7473,"away3d.materials.passes.CompiledPass.set_mipmap","away3d/materials/passes/CompiledPass.hx",352,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_363_set_anisotropy,"away3d.materials.passes.CompiledPass","set_anisotropy",0x8cba906d,"away3d.materials.passes.CompiledPass.set_anisotropy","away3d/materials/passes/CompiledPass.hx",363,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_376_get_normalMap,"away3d.materials.passes.CompiledPass","get_normalMap",0x60249e9e,"away3d.materials.passes.CompiledPass.get_normalMap","away3d/materials/passes/CompiledPass.hx",376,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_380_set_normalMap,"away3d.materials.passes.CompiledPass","set_normalMap",0xa52a80aa,"away3d.materials.passes.CompiledPass.set_normalMap","away3d/materials/passes/CompiledPass.hx",380,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_390_get_normalMethod,"away3d.materials.passes.CompiledPass","get_normalMethod",0x7710501f,"away3d.materials.passes.CompiledPass.get_normalMethod","away3d/materials/passes/CompiledPass.hx",390,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_394_set_normalMethod,"away3d.materials.passes.CompiledPass","set_normalMethod",0xcd523d93,"away3d.materials.passes.CompiledPass.set_normalMethod","away3d/materials/passes/CompiledPass.hx",394,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_404_get_ambientMethod,"away3d.materials.passes.CompiledPass","get_ambientMethod",0x7a258982,"away3d.materials.passes.CompiledPass.get_ambientMethod","away3d/materials/passes/CompiledPass.hx",404,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_408_set_ambientMethod,"away3d.materials.passes.CompiledPass","set_ambientMethod",0x9d93618e,"away3d.materials.passes.CompiledPass.set_ambientMethod","away3d/materials/passes/CompiledPass.hx",408,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_418_get_shadowMethod,"away3d.materials.passes.CompiledPass","get_shadowMethod",0xf4783698,"away3d.materials.passes.CompiledPass.get_shadowMethod","away3d/materials/passes/CompiledPass.hx",418,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_422_set_shadowMethod,"away3d.materials.passes.CompiledPass","set_shadowMethod",0x4aba240c,"away3d.materials.passes.CompiledPass.set_shadowMethod","away3d/materials/passes/CompiledPass.hx",422,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_432_get_diffuseMethod,"away3d.materials.passes.CompiledPass","get_diffuseMethod",0xe454664c,"away3d.materials.passes.CompiledPass.get_diffuseMethod","away3d/materials/passes/CompiledPass.hx",432,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_436_set_diffuseMethod,"away3d.materials.passes.CompiledPass","set_diffuseMethod",0x07c23e58,"away3d.materials.passes.CompiledPass.set_diffuseMethod","away3d/materials/passes/CompiledPass.hx",436,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_446_get_specularMethod,"away3d.materials.passes.CompiledPass","get_specularMethod",0x97222d7b,"away3d.materials.passes.CompiledPass.get_specularMethod","away3d/materials/passes/CompiledPass.hx",446,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_450_set_specularMethod,"away3d.materials.passes.CompiledPass","set_specularMethod",0x73d15fef,"away3d.materials.passes.CompiledPass.set_specularMethod","away3d/materials/passes/CompiledPass.hx",450,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_459_init,"away3d.materials.passes.CompiledPass","init",0x9fcb9d3e,"away3d.materials.passes.CompiledPass.init","away3d/materials/passes/CompiledPass.hx",459,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_468_dispose,"away3d.materials.passes.CompiledPass","dispose",0xf08d2f31,"away3d.materials.passes.CompiledPass.dispose","away3d/materials/passes/CompiledPass.hx",468,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_479_invalidateShaderProgram,"away3d.materials.passes.CompiledPass","invalidateShaderProgram",0x119629f6,"away3d.materials.passes.CompiledPass.invalidateShaderProgram","away3d/materials/passes/CompiledPass.hx",479,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_505_addPassesFromMethods,"away3d.materials.passes.CompiledPass","addPassesFromMethods",0xc381efb6,"away3d.materials.passes.CompiledPass.addPassesFromMethods","away3d/materials/passes/CompiledPass.hx",505,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_524_addPasses,"away3d.materials.passes.CompiledPass","addPasses",0x300cff92,"away3d.materials.passes.CompiledPass.addPasses","away3d/materials/passes/CompiledPass.hx",524,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_541_initUVTransformData,"away3d.materials.passes.CompiledPass","initUVTransformData",0x38de2b17,"away3d.materials.passes.CompiledPass.initUVTransformData","away3d/materials/passes/CompiledPass.hx",541,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_556_initUVTransformData2,"away3d.materials.passes.CompiledPass","initUVTransformData2",0x8987893b,"away3d.materials.passes.CompiledPass.initUVTransformData2","away3d/materials/passes/CompiledPass.hx",556,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_571_initCommonsData,"away3d.materials.passes.CompiledPass","initCommonsData",0xadd1ce94,"away3d.materials.passes.CompiledPass.initCommonsData","away3d/materials/passes/CompiledPass.hx",571,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_582_cleanUp,"away3d.materials.passes.CompiledPass","cleanUp",0xe0829ed6,"away3d.materials.passes.CompiledPass.cleanUp","away3d/materials/passes/CompiledPass.hx",582,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_591_updateMethodConstants,"away3d.materials.passes.CompiledPass","updateMethodConstants",0x12fcf977,"away3d.materials.passes.CompiledPass.updateMethodConstants","away3d/materials/passes/CompiledPass.hx",591,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_608_updateLightConstants,"away3d.materials.passes.CompiledPass","updateLightConstants",0x6e4650f0,"away3d.materials.passes.CompiledPass.updateLightConstants","away3d/materials/passes/CompiledPass.hx",608,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_616_updateProbes,"away3d.materials.passes.CompiledPass","updateProbes",0xf0b6d65a,"away3d.materials.passes.CompiledPass.updateProbes","away3d/materials/passes/CompiledPass.hx",616,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_625_onShaderInvalidated,"away3d.materials.passes.CompiledPass","onShaderInvalidated",0x17aab0d7,"away3d.materials.passes.CompiledPass.onShaderInvalidated","away3d/materials/passes/CompiledPass.hx",625,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_633_getVertexCode,"away3d.materials.passes.CompiledPass","getVertexCode",0x22287ef9,"away3d.materials.passes.CompiledPass.getVertexCode","away3d/materials/passes/CompiledPass.hx",633,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_641_getFragmentCode,"away3d.materials.passes.CompiledPass","getFragmentCode",0x00ae4b65,"away3d.materials.passes.CompiledPass.getFragmentCode","away3d/materials/passes/CompiledPass.hx",641,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_650_activate,"away3d.materials.passes.CompiledPass","activate",0x49042ce1,"away3d.materials.passes.CompiledPass.activate","away3d/materials/passes/CompiledPass.hx",650,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_667_render,"away3d.materials.passes.CompiledPass","render",0x4db93504,"away3d.materials.passes.CompiledPass.render","away3d/materials/passes/CompiledPass.hx",667,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_776_usesProbes,"away3d.materials.passes.CompiledPass","usesProbes",0xc3cbef5d,"away3d.materials.passes.CompiledPass.usesProbes","away3d/materials/passes/CompiledPass.hx",776,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_784_usesLights,"away3d.materials.passes.CompiledPass","usesLights",0xf67e2af7,"away3d.materials.passes.CompiledPass.usesLights","away3d/materials/passes/CompiledPass.hx",784,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_791_deactivate,"away3d.materials.passes.CompiledPass","deactivate",0x326294e2,"away3d.materials.passes.CompiledPass.deactivate","away3d/materials/passes/CompiledPass.hx",791,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_812_get_specularLightSources,"away3d.materials.passes.CompiledPass","get_specularLightSources",0x4178331c,"away3d.materials.passes.CompiledPass.get_specularLightSources","away3d/materials/passes/CompiledPass.hx",812,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_816_set_specularLightSources,"away3d.materials.passes.CompiledPass","set_specularLightSources",0x5452b490,"away3d.materials.passes.CompiledPass.set_specularLightSources","away3d/materials/passes/CompiledPass.hx",816,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_829_get_diffuseLightSources,"away3d.materials.passes.CompiledPass","get_diffuseLightSources",0x252a5ead,"away3d.materials.passes.CompiledPass.get_diffuseLightSources","away3d/materials/passes/CompiledPass.hx",829,0x5f70cb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_88722f2eca00b80b_833_set_diffuseLightSources,"away3d.materials.passes.CompiledPass","set_diffuseLightSources",0x278bc7b9,"away3d.materials.passes.CompiledPass.set_diffuseLightSources","away3d/materials/passes/CompiledPass.hx",833,0x5f70cb9f)
namespace away3d{
namespace materials{
namespace passes{

void CompiledPass_obj::__construct( ::away3d::materials::MaterialBase material){
            	HX_GC_STACKFRAME(&_hx_pos_88722f2eca00b80b_32_new)
HXLINE(  96)		this->_enableLightFallOff = true;
HXLINE(  88)		this->_preserveAlpha = true;
HXLINE(  62)		int length = null();
HXDLIN(  62)		bool fixed = null();
HXDLIN(  62)		::Array< Float > array = null();
HXDLIN(  62)		this->_fragmentConstantData =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE(  61)		int length1 = null();
HXDLIN(  61)		bool fixed1 = null();
HXDLIN(  61)		::Array< Float > array1 = null();
HXDLIN(  61)		this->_vertexConstantData =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length1,fixed1,array1,true);
HXLINE(  55)		this->_diffuseLightSources = 3;
HXLINE(  54)		this->_specularLightSources = 1;
HXLINE( 106)		this->_material = material;
HXLINE( 108)		this->init();
HXLINE( 109)		super::__construct(null());
            	}

Dynamic CompiledPass_obj::__CreateEmpty() { return new CompiledPass_obj; }

void *CompiledPass_obj::_hx_vtable = 0;

Dynamic CompiledPass_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CompiledPass_obj > _hx_result = new CompiledPass_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CompiledPass_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x31c7172e) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x31c7172e;
		}
	} else {
		return inClassId==(int)0x5a0f1d75;
	}
}

bool CompiledPass_obj::get_enableLightFallOff(){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_118_get_enableLightFallOff)
HXDLIN( 118)		return this->_enableLightFallOff;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,get_enableLightFallOff,return )

bool CompiledPass_obj::set_enableLightFallOff(bool value){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_122_set_enableLightFallOff)
HXLINE( 123)		if ((value != this->_enableLightFallOff)) {
HXLINE( 124)			this->invalidateShaderProgram(true);
            		}
HXLINE( 125)		this->_enableLightFallOff = value;
HXLINE( 126)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompiledPass_obj,set_enableLightFallOff,return )

bool CompiledPass_obj::get_forceSeparateMVP(){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_136_get_forceSeparateMVP)
HXDLIN( 136)		return this->_forceSeparateMVP;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,get_forceSeparateMVP,return )

bool CompiledPass_obj::set_forceSeparateMVP(bool value){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_140_set_forceSeparateMVP)
HXLINE( 141)		this->_forceSeparateMVP = value;
HXLINE( 142)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompiledPass_obj,set_forceSeparateMVP,return )

int CompiledPass_obj::get_numPointLights(){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_150_get_numPointLights)
HXDLIN( 150)		return this->_numPointLights;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,get_numPointLights,return )

int CompiledPass_obj::get_numDirectionalLights(){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_158_get_numDirectionalLights)
HXDLIN( 158)		return this->_numDirectionalLights;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,get_numDirectionalLights,return )

int CompiledPass_obj::get_numLightProbes(){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_166_get_numLightProbes)
HXDLIN( 166)		return this->_numLightProbes;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,get_numLightProbes,return )

void CompiledPass_obj::updateProgram( ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_173_updateProgram)
HXLINE( 174)		this->reset(stage3DProxy->get_profile());
HXLINE( 175)		this->super::updateProgram(stage3DProxy);
            	}


void CompiledPass_obj::reset(::String profile){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_184_reset)
HXLINE( 185)		this->initCompiler(profile);
HXLINE( 186)		this->updateShaderProperties();
HXLINE( 187)		this->initConstantData();
HXLINE( 188)		this->cleanUp();
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompiledPass_obj,reset,(void))

void CompiledPass_obj::updateUsedOffsets(){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_195_updateUsedOffsets)
HXLINE( 196)		this->_numUsedVertexConstants = this->_compiler->get_numUsedVertexConstants();
HXLINE( 197)		this->_numUsedFragmentConstants = this->_compiler->get_numUsedFragmentConstants();
HXLINE( 198)		this->_numUsedStreams = this->_compiler->get_numUsedStreams();
HXLINE( 199)		this->_numUsedTextures = this->_compiler->get_numUsedTextures();
HXLINE( 200)		this->_numUsedVaryings = this->_compiler->get_numUsedVaryings();
HXLINE( 201)		this->_numUsedFragmentConstants = this->_compiler->get_numUsedFragmentConstants();
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,updateUsedOffsets,(void))

void CompiledPass_obj::initConstantData(){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_208_initConstantData)
HXLINE( 209)		this->_vertexConstantData->set_length((this->_numUsedVertexConstants * 4));
HXLINE( 210)		this->_fragmentConstantData->set_length((this->_numUsedFragmentConstants * 4));
HXLINE( 212)		this->initCommonsData();
HXLINE( 213)		if ((this->_uvTransformIndex >= 0)) {
HXLINE( 214)			this->initUVTransformData();
            		}
HXLINE( 215)		if ((this->_cameraPositionIndex >= 0)) {
HXLINE( 216)			this->_vertexConstantData->set((this->_cameraPositionIndex + 3),( (Float)(1) ));
            		}
HXLINE( 218)		this->updateMethodConstants();
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,initConstantData,(void))

void CompiledPass_obj::initCompiler(::String profile){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_226_initCompiler)
HXLINE( 227)		this->_compiler = this->createCompiler(profile);
HXLINE( 228)		this->_compiler->set_forceSeperateMVP(this->_forceSeparateMVP);
HXLINE( 229)		this->_compiler->set_numPointLights(this->_numPointLights);
HXLINE( 230)		this->_compiler->set_numDirectionalLights(this->_numDirectionalLights);
HXLINE( 231)		this->_compiler->set_numLightProbes(this->_numLightProbes);
HXLINE( 232)		this->_compiler->set_methodSetup(this->_methodSetup);
HXLINE( 233)		this->_compiler->set_diffuseLightSources(this->_diffuseLightSources);
HXLINE( 234)		this->_compiler->set_specularLightSources(this->_specularLightSources);
HXLINE( 235)		this->_compiler->setTextureSampling(this->_smooth,this->_repeat,this->_mipmap,this->_anisotropy);
HXLINE( 236)		this->_compiler->setConstantDataBuffers(this->_vertexConstantData,this->_fragmentConstantData);
HXLINE( 237)		this->_compiler->set_animateUVs(this->_animateUVs);
HXLINE( 238)		this->_compiler->set_animateUVs2(this->_animateUVs2);
HXLINE( 239)		bool _hx_tmp;
HXDLIN( 239)		if (this->_alphaPremultiplied) {
HXLINE( 239)			_hx_tmp = this->_enableBlending;
            		}
            		else {
HXLINE( 239)			_hx_tmp = false;
            		}
HXDLIN( 239)		this->_compiler->set_alphaPremultiplied(_hx_tmp);
HXLINE( 240)		bool _hx_tmp1;
HXDLIN( 240)		if (this->_preserveAlpha) {
HXLINE( 240)			_hx_tmp1 = this->_enableBlending;
            		}
            		else {
HXLINE( 240)			_hx_tmp1 = false;
            		}
HXDLIN( 240)		this->_compiler->set_preserveAlpha(_hx_tmp1);
HXLINE( 241)		this->_compiler->set_enableLightFallOff(this->_enableLightFallOff);
HXLINE( 242)		this->_compiler->compile();
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompiledPass_obj,initCompiler,(void))

 ::away3d::materials::compilation::ShaderCompiler CompiledPass_obj::createCompiler(::String profile){
            	HX_GC_STACKFRAME(&_hx_pos_88722f2eca00b80b_251_createCompiler)
HXDLIN( 251)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::away3d::errors::AbstractMethodError_obj::__alloc( HX_CTX ,null(),null())));
HXDLIN( 251)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompiledPass_obj,createCompiler,return )

void CompiledPass_obj::updateShaderProperties(){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_259_updateShaderProperties)
HXLINE( 260)		this->_animatableAttributes = this->_compiler->get_animatableAttributes();
HXLINE( 261)		this->_animationTargetRegisters = this->_compiler->get_animationTargetRegisters();
HXLINE( 262)		this->_vertexCode = this->_compiler->get_vertexCode();
HXLINE( 263)		this->_fragmentLightCode = this->_compiler->get_fragmentLightCode();
HXLINE( 264)		this->_framentPostLightCode = this->_compiler->get_fragmentPostLightCode();
HXLINE( 265)		this->_shadedTarget = this->_compiler->get_shadedTarget();
HXLINE( 266)		this->_usingSpecularMethod = this->_compiler->get_usingSpecularMethod();
HXLINE( 267)		this->_usesNormals = this->_compiler->get_usesNormals();
HXLINE( 268)		this->_needUVAnimation = this->_compiler->get_needUVAnimation();
HXLINE( 269)		this->_UVSource = this->_compiler->get_UVSource();
HXLINE( 270)		this->_UVTarget = this->_compiler->get_UVTarget();
HXLINE( 272)		this->updateRegisterIndices();
HXLINE( 273)		this->updateUsedOffsets();
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,updateShaderProperties,(void))

void CompiledPass_obj::updateRegisterIndices(){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_280_updateRegisterIndices)
HXLINE( 281)		this->_uvBufferIndex = this->_compiler->get_uvBufferIndex();
HXLINE( 282)		this->_uvTransformIndex = this->_compiler->get_uvTransformIndex();
HXLINE( 283)		this->_uvTransformIndex2 = this->_compiler->get_uvTransformIndex2();
HXLINE( 284)		this->_secondaryUVBufferIndex = this->_compiler->get_secondaryUVBufferIndex();
HXLINE( 285)		this->_normalBufferIndex = this->_compiler->get_normalBufferIndex();
HXLINE( 286)		this->_tangentBufferIndex = this->_compiler->get_tangentBufferIndex();
HXLINE( 287)		this->_lightFragmentConstantIndex = this->_compiler->get_lightFragmentConstantIndex();
HXLINE( 288)		this->_cameraPositionIndex = this->_compiler->get_cameraPositionIndex();
HXLINE( 289)		this->_commonsDataIndex = this->_compiler->get_commonsDataIndex();
HXLINE( 290)		this->_sceneMatrixIndex = this->_compiler->get_sceneMatrixIndex();
HXLINE( 291)		this->_sceneNormalMatrixIndex = this->_compiler->get_sceneNormalMatrixIndex();
HXLINE( 292)		this->_probeWeightsIndex = this->_compiler->get_probeWeightsIndex();
HXLINE( 293)		this->_lightProbeDiffuseIndices = this->_compiler->get_lightProbeDiffuseIndices();
HXLINE( 294)		this->_lightProbeSpecularIndices = this->_compiler->get_lightProbeSpecularIndices();
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,updateRegisterIndices,(void))

bool CompiledPass_obj::get_preserveAlpha(){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_302_get_preserveAlpha)
HXDLIN( 302)		return this->_preserveAlpha;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,get_preserveAlpha,return )

bool CompiledPass_obj::set_preserveAlpha(bool value){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_306_set_preserveAlpha)
HXLINE( 307)		if ((this->_preserveAlpha == value)) {
HXLINE( 308)			return value;
            		}
HXLINE( 309)		this->_preserveAlpha = value;
HXLINE( 310)		this->invalidateShaderProgram(null());
HXLINE( 311)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompiledPass_obj,set_preserveAlpha,return )

bool CompiledPass_obj::get_animateUVs(){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_319_get_animateUVs)
HXDLIN( 319)		return this->_animateUVs;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,get_animateUVs,return )

bool CompiledPass_obj::set_animateUVs(bool value){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_323_set_animateUVs)
HXLINE( 324)		if ((this->_animateUVs == value)) {
HXLINE( 325)			return value;
            		}
HXLINE( 327)		this->_animateUVs = value;
HXLINE( 328)		this->invalidateShaderProgram(null());
HXLINE( 329)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompiledPass_obj,set_animateUVs,return )

bool CompiledPass_obj::get_animateUVs2(){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_337_get_animateUVs2)
HXDLIN( 337)		return this->_animateUVs2;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,get_animateUVs2,return )

bool CompiledPass_obj::set_animateUVs2(bool value){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_341_set_animateUVs2)
HXLINE( 342)		if ((this->_animateUVs2 == value)) {
HXLINE( 342)			return value;
            		}
HXLINE( 343)		this->_animateUVs2 = value;
HXLINE( 344)		this->invalidateShaderProgram(null());
HXLINE( 345)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompiledPass_obj,set_animateUVs2,return )

bool CompiledPass_obj::set_mipmap(bool value){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_352_set_mipmap)
HXLINE( 353)		if ((this->_mipmap == value)) {
HXLINE( 354)			return value;
            		}
HXLINE( 355)		this->super::set_mipmap(value);
HXLINE( 356)		return value;
            	}


 ::Dynamic CompiledPass_obj::set_anisotropy( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_363_set_anisotropy)
HXLINE( 364)		if (::hx::IsEq( this->_anisotropy,value )) {
HXLINE( 365)			return value;
            		}
HXLINE( 366)		this->super::set_anisotropy(value);
HXLINE( 367)		return value;
            	}


 ::away3d::textures::Texture2DBase CompiledPass_obj::get_normalMap(){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_376_get_normalMap)
HXDLIN( 376)		return this->_methodSetup->_normalMethod->get_normalMap();
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,get_normalMap,return )

 ::away3d::textures::Texture2DBase CompiledPass_obj::set_normalMap( ::away3d::textures::Texture2DBase value){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_380_set_normalMap)
HXLINE( 381)		this->_methodSetup->_normalMethod->set_normalMap(value);
HXLINE( 382)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompiledPass_obj,set_normalMap,return )

 ::away3d::materials::methods::BasicNormalMethod CompiledPass_obj::get_normalMethod(){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_390_get_normalMethod)
HXDLIN( 390)		return this->_methodSetup->get_normalMethod();
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,get_normalMethod,return )

 ::away3d::materials::methods::BasicNormalMethod CompiledPass_obj::set_normalMethod( ::away3d::materials::methods::BasicNormalMethod value){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_394_set_normalMethod)
HXLINE( 395)		this->_methodSetup->set_normalMethod(value);
HXLINE( 396)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompiledPass_obj,set_normalMethod,return )

 ::away3d::materials::methods::BasicAmbientMethod CompiledPass_obj::get_ambientMethod(){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_404_get_ambientMethod)
HXDLIN( 404)		return this->_methodSetup->get_ambientMethod();
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,get_ambientMethod,return )

 ::away3d::materials::methods::BasicAmbientMethod CompiledPass_obj::set_ambientMethod( ::away3d::materials::methods::BasicAmbientMethod value){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_408_set_ambientMethod)
HXLINE( 409)		this->_methodSetup->set_ambientMethod(value);
HXLINE( 410)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompiledPass_obj,set_ambientMethod,return )

 ::away3d::materials::methods::ShadowMapMethodBase CompiledPass_obj::get_shadowMethod(){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_418_get_shadowMethod)
HXDLIN( 418)		return this->_methodSetup->get_shadowMethod();
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,get_shadowMethod,return )

 ::away3d::materials::methods::ShadowMapMethodBase CompiledPass_obj::set_shadowMethod( ::away3d::materials::methods::ShadowMapMethodBase value){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_422_set_shadowMethod)
HXLINE( 423)		this->_methodSetup->set_shadowMethod(value);
HXLINE( 424)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompiledPass_obj,set_shadowMethod,return )

 ::away3d::materials::methods::BasicDiffuseMethod CompiledPass_obj::get_diffuseMethod(){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_432_get_diffuseMethod)
HXDLIN( 432)		return this->_methodSetup->get_diffuseMethod();
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,get_diffuseMethod,return )

 ::away3d::materials::methods::BasicDiffuseMethod CompiledPass_obj::set_diffuseMethod( ::away3d::materials::methods::BasicDiffuseMethod value){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_436_set_diffuseMethod)
HXLINE( 437)		this->_methodSetup->set_diffuseMethod(value);
HXLINE( 438)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompiledPass_obj,set_diffuseMethod,return )

 ::away3d::materials::methods::BasicSpecularMethod CompiledPass_obj::get_specularMethod(){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_446_get_specularMethod)
HXDLIN( 446)		return this->_methodSetup->get_specularMethod();
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,get_specularMethod,return )

 ::away3d::materials::methods::BasicSpecularMethod CompiledPass_obj::set_specularMethod( ::away3d::materials::methods::BasicSpecularMethod value){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_450_set_specularMethod)
HXLINE( 451)		this->_methodSetup->set_specularMethod(value);
HXLINE( 452)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompiledPass_obj,set_specularMethod,return )

void CompiledPass_obj::init(){
            	HX_GC_STACKFRAME(&_hx_pos_88722f2eca00b80b_459_init)
HXLINE( 460)		this->_methodSetup =  ::away3d::materials::methods::ShaderMethodSetup_obj::__alloc( HX_CTX );
HXLINE( 461)		this->_methodSetup->addEventListener(HX_("ShaderInvalidated",44,03,b9,4d),this->onShaderInvalidated_dyn(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,init,(void))

void CompiledPass_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_468_dispose)
HXLINE( 469)		this->super::dispose();
HXLINE( 470)		this->_methodSetup->removeEventListener(HX_("ShaderInvalidated",44,03,b9,4d),this->onShaderInvalidated_dyn(),null());
HXLINE( 471)		this->_methodSetup->dispose();
HXLINE( 472)		this->_methodSetup = null();
            	}


void CompiledPass_obj::invalidateShaderProgram(::hx::Null< bool >  __o_updateMaterial){
            		bool updateMaterial = __o_updateMaterial.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_88722f2eca00b80b_479_invalidateShaderProgram)
HXLINE( 480)		 ::openfl::_Vector::ObjectVector oldPasses = this->_passes;
HXLINE( 481)		int length = null();
HXDLIN( 481)		bool fixed = null();
HXDLIN( 481)		::Array< ::Dynamic> array = null();
HXDLIN( 481)		this->_passes =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE( 483)		if (::hx::IsNotNull( this->_methodSetup )) {
HXLINE( 484)			this->addPassesFromMethods();
            		}
HXLINE( 486)		bool _hx_tmp;
HXDLIN( 486)		if (::hx::IsNotNull( oldPasses )) {
HXLINE( 486)			int _hx_tmp1 = this->_passes->get_length();
HXDLIN( 486)			_hx_tmp = (_hx_tmp1 != oldPasses->get_length());
            		}
            		else {
HXLINE( 486)			_hx_tmp = true;
            		}
HXDLIN( 486)		if (_hx_tmp) {
HXLINE( 487)			this->_passesDirty = true;
HXLINE( 488)			return;
            		}
HXLINE( 491)		{
HXLINE( 491)			int _g = 0;
HXDLIN( 491)			int _g1 = this->_passes->get_length();
HXDLIN( 491)			while((_g < _g1)){
HXLINE( 491)				_g = (_g + 1);
HXDLIN( 491)				int i = (_g - 1);
HXLINE( 492)				 ::away3d::materials::passes::MaterialPassBase _hx_tmp = this->_passes->get(i).StaticCast<  ::away3d::materials::passes::MaterialPassBase >();
HXDLIN( 492)				if (::hx::IsInstanceNotEq( _hx_tmp,oldPasses->get(i).StaticCast<  ::away3d::materials::passes::MaterialPassBase >() )) {
HXLINE( 493)					this->_passesDirty = true;
HXLINE( 494)					return;
            				}
            			}
            		}
HXLINE( 498)		this->super::invalidateShaderProgram(updateMaterial);
            	}


void CompiledPass_obj::addPassesFromMethods(){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_505_addPassesFromMethods)
HXLINE( 506)		bool _hx_tmp;
HXDLIN( 506)		if (::hx::IsNotNull( this->_methodSetup->_normalMethod )) {
HXLINE( 506)			_hx_tmp = this->_methodSetup->_normalMethod->get_hasOutput();
            		}
            		else {
HXLINE( 506)			_hx_tmp = false;
            		}
HXDLIN( 506)		if (_hx_tmp) {
HXLINE( 507)			this->addPasses(this->_methodSetup->_normalMethod->get_passes());
            		}
HXLINE( 508)		if (::hx::IsNotNull( this->_methodSetup->_ambientMethod )) {
HXLINE( 509)			this->addPasses(this->_methodSetup->_ambientMethod->get_passes());
            		}
HXLINE( 510)		if (::hx::IsNotNull( this->_methodSetup->_shadowMethod )) {
HXLINE( 511)			this->addPasses(this->_methodSetup->_shadowMethod->get_passes());
            		}
HXLINE( 512)		if (::hx::IsNotNull( this->_methodSetup->_diffuseMethod )) {
HXLINE( 513)			this->addPasses(this->_methodSetup->_diffuseMethod->get_passes());
            		}
HXLINE( 514)		if (::hx::IsNotNull( this->_methodSetup->_specularMethod )) {
HXLINE( 515)			this->addPasses(this->_methodSetup->_specularMethod->get_passes());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,addPassesFromMethods,(void))

void CompiledPass_obj::addPasses( ::openfl::_Vector::ObjectVector passes){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_524_addPasses)
HXLINE( 525)		if (::hx::IsNull( passes )) {
HXLINE( 526)			return;
            		}
HXLINE( 528)		int len = passes->get_length();
HXLINE( 530)		{
HXLINE( 530)			int _g = 0;
HXDLIN( 530)			int _g1 = len;
HXDLIN( 530)			while((_g < _g1)){
HXLINE( 530)				_g = (_g + 1);
HXDLIN( 530)				int i = (_g - 1);
HXLINE( 531)				 ::away3d::materials::passes::MaterialPassBase _hx_tmp = passes->get(i).StaticCast<  ::away3d::materials::passes::MaterialPassBase >();
HXDLIN( 531)				_hx_tmp->set_material(this->get_material());
HXLINE( 532)				passes->get(i).StaticCast<  ::away3d::materials::passes::MaterialPassBase >()->set_lightPicker(this->_lightPicker);
HXLINE( 533)				{
HXLINE( 533)					::Dynamic this1 = this->_passes;
HXDLIN( 533)					( ( ::openfl::_Vector::ObjectVector)(this1) )->push(passes->get(i).StaticCast<  ::away3d::materials::passes::MaterialPassBase >());
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompiledPass_obj,addPasses,(void))

void CompiledPass_obj::initUVTransformData(){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_541_initUVTransformData)
HXLINE( 542)		this->_vertexConstantData->set(this->_uvTransformIndex,( (Float)(1) ));
HXLINE( 543)		this->_vertexConstantData->set((this->_uvTransformIndex + 1),( (Float)(0) ));
HXLINE( 544)		this->_vertexConstantData->set((this->_uvTransformIndex + 2),( (Float)(0) ));
HXLINE( 545)		this->_vertexConstantData->set((this->_uvTransformIndex + 3),( (Float)(0) ));
HXLINE( 546)		this->_vertexConstantData->set((this->_uvTransformIndex + 4),( (Float)(0) ));
HXLINE( 547)		this->_vertexConstantData->set((this->_uvTransformIndex + 5),( (Float)(1) ));
HXLINE( 548)		this->_vertexConstantData->set((this->_uvTransformIndex + 6),( (Float)(0) ));
HXLINE( 549)		this->_vertexConstantData->set((this->_uvTransformIndex + 7),( (Float)(0) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,initUVTransformData,(void))

void CompiledPass_obj::initUVTransformData2(){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_556_initUVTransformData2)
HXLINE( 557)		this->_vertexConstantData->set(this->_uvTransformIndex2,( (Float)(1) ));
HXLINE( 558)		this->_vertexConstantData->set((this->_uvTransformIndex2 + 1),( (Float)(0) ));
HXLINE( 559)		this->_vertexConstantData->set((this->_uvTransformIndex2 + 2),( (Float)(0) ));
HXLINE( 560)		this->_vertexConstantData->set((this->_uvTransformIndex2 + 3),( (Float)(0) ));
HXLINE( 561)		this->_vertexConstantData->set((this->_uvTransformIndex2 + 4),( (Float)(0) ));
HXLINE( 562)		this->_vertexConstantData->set((this->_uvTransformIndex2 + 5),( (Float)(1) ));
HXLINE( 563)		this->_vertexConstantData->set((this->_uvTransformIndex2 + 6),( (Float)(0) ));
HXLINE( 564)		this->_vertexConstantData->set((this->_uvTransformIndex2 + 7),( (Float)(0) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,initUVTransformData2,(void))

void CompiledPass_obj::initCommonsData(){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_571_initCommonsData)
HXLINE( 572)		this->_fragmentConstantData->set(this->_commonsDataIndex,((Float).5));
HXLINE( 573)		this->_fragmentConstantData->set((this->_commonsDataIndex + 1),( (Float)(0) ));
HXLINE( 574)		this->_fragmentConstantData->set((this->_commonsDataIndex + 2),((Float)0.00392156862745098));
HXLINE( 575)		this->_fragmentConstantData->set((this->_commonsDataIndex + 3),( (Float)(1) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,initCommonsData,(void))

void CompiledPass_obj::cleanUp(){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_582_cleanUp)
HXLINE( 583)		this->_compiler->dispose();
HXLINE( 584)		this->_compiler = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,cleanUp,(void))

void CompiledPass_obj::updateMethodConstants(){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_591_updateMethodConstants)
HXLINE( 592)		if (::hx::IsNotNull( this->_methodSetup->_normalMethod )) {
HXLINE( 593)			this->_methodSetup->_normalMethod->initConstants(this->_methodSetup->_normalMethodVO);
            		}
HXLINE( 594)		if (::hx::IsNotNull( this->_methodSetup->_diffuseMethod )) {
HXLINE( 595)			this->_methodSetup->_diffuseMethod->initConstants(this->_methodSetup->_diffuseMethodVO);
            		}
HXLINE( 596)		if (::hx::IsNotNull( this->_methodSetup->_ambientMethod )) {
HXLINE( 597)			this->_methodSetup->_ambientMethod->initConstants(this->_methodSetup->_ambientMethodVO);
            		}
HXLINE( 598)		if (this->_usingSpecularMethod) {
HXLINE( 599)			this->_methodSetup->_specularMethod->initConstants(this->_methodSetup->_specularMethodVO);
            		}
HXLINE( 600)		if (::hx::IsNotNull( this->_methodSetup->_shadowMethod )) {
HXLINE( 601)			this->_methodSetup->_shadowMethod->initConstants(this->_methodSetup->_shadowMethodVO);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,updateMethodConstants,(void))

void CompiledPass_obj::updateLightConstants(){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_608_updateLightConstants)
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,updateLightConstants,(void))

void CompiledPass_obj::updateProbes( ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_616_updateProbes)
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompiledPass_obj,updateProbes,(void))

void CompiledPass_obj::onShaderInvalidated( ::away3d::events::ShadingMethodEvent event){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_625_onShaderInvalidated)
HXDLIN( 625)		this->invalidateShaderProgram(null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompiledPass_obj,onShaderInvalidated,(void))

::String CompiledPass_obj::getVertexCode(){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_633_getVertexCode)
HXDLIN( 633)		return this->_vertexCode;
            	}


::String CompiledPass_obj::getFragmentCode(::String animatorCode){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_641_getFragmentCode)
HXDLIN( 641)		return ((this->_fragmentLightCode + animatorCode) + this->_framentPostLightCode);
            	}


void CompiledPass_obj::activate( ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_650_activate)
HXLINE( 651)		this->super::activate(stage3DProxy,camera);
HXLINE( 653)		if (this->_usesNormals) {
HXLINE( 654)			this->_methodSetup->_normalMethod->activate(this->_methodSetup->_normalMethodVO,stage3DProxy);
            		}
HXLINE( 655)		this->_methodSetup->_ambientMethod->activate(this->_methodSetup->_ambientMethodVO,stage3DProxy);
HXLINE( 656)		if (::hx::IsNotNull( this->_methodSetup->_shadowMethod )) {
HXLINE( 657)			this->_methodSetup->_shadowMethod->activate(this->_methodSetup->_shadowMethodVO,stage3DProxy);
            		}
HXLINE( 658)		this->_methodSetup->_diffuseMethod->activate(this->_methodSetup->_diffuseMethodVO,stage3DProxy);
HXLINE( 659)		if (this->_usingSpecularMethod) {
HXLINE( 660)			this->_methodSetup->_specularMethod->activate(this->_methodSetup->_specularMethodVO,stage3DProxy);
            		}
            	}


void CompiledPass_obj::render(::Dynamic renderable, ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera, ::openfl::geom::Matrix3D viewProjection){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_667_render)
HXLINE( 668)		int i = 0;
HXLINE( 669)		 ::openfl::display3D::Context3D context = stage3DProxy->_context3D;
HXLINE( 670)		if ((this->_uvBufferIndex >= 0)) {
HXLINE( 671)			::away3d::core::base::IRenderable_obj::activateUVBuffer(renderable,this->_uvBufferIndex,stage3DProxy);
            		}
HXLINE( 672)		if ((this->_secondaryUVBufferIndex >= 0)) {
HXLINE( 673)			::away3d::core::base::IRenderable_obj::activateSecondaryUVBuffer(renderable,this->_secondaryUVBufferIndex,stage3DProxy);
            		}
HXLINE( 674)		if ((this->_normalBufferIndex >= 0)) {
HXLINE( 675)			::away3d::core::base::IRenderable_obj::activateVertexNormalBuffer(renderable,this->_normalBufferIndex,stage3DProxy);
            		}
HXLINE( 676)		if ((this->_tangentBufferIndex >= 0)) {
HXLINE( 677)			::away3d::core::base::IRenderable_obj::activateVertexTangentBuffer(renderable,this->_tangentBufferIndex,stage3DProxy);
            		}
HXLINE( 679)		if (this->_animateUVs) {
HXLINE( 680)			 ::openfl::geom::Matrix uvTransform = ::away3d::core::base::IRenderable_obj::get_uvTransform(renderable);
HXLINE( 681)			if (::hx::IsNotNull( uvTransform )) {
HXLINE( 682)				this->_vertexConstantData->set(this->_uvTransformIndex,uvTransform->a);
HXLINE( 683)				this->_vertexConstantData->set((this->_uvTransformIndex + 1),uvTransform->b);
HXLINE( 684)				this->_vertexConstantData->set((this->_uvTransformIndex + 3),uvTransform->tx);
HXLINE( 685)				this->_vertexConstantData->set((this->_uvTransformIndex + 4),uvTransform->c);
HXLINE( 686)				this->_vertexConstantData->set((this->_uvTransformIndex + 5),uvTransform->d);
HXLINE( 687)				this->_vertexConstantData->set((this->_uvTransformIndex + 7),uvTransform->ty);
            			}
            			else {
HXLINE( 689)				this->_vertexConstantData->set(this->_uvTransformIndex,( (Float)(1) ));
HXLINE( 690)				this->_vertexConstantData->set((this->_uvTransformIndex + 1),( (Float)(0) ));
HXLINE( 691)				this->_vertexConstantData->set((this->_uvTransformIndex + 3),( (Float)(0) ));
HXLINE( 692)				this->_vertexConstantData->set((this->_uvTransformIndex + 4),( (Float)(0) ));
HXLINE( 693)				this->_vertexConstantData->set((this->_uvTransformIndex + 5),( (Float)(1) ));
HXLINE( 694)				this->_vertexConstantData->set((this->_uvTransformIndex + 7),( (Float)(0) ));
            			}
            		}
HXLINE( 698)		if (this->_animateUVs2) {
HXLINE( 699)			 ::openfl::geom::Matrix uvTransform2 = ::away3d::core::base::IRenderable_obj::get_uvTransform2(renderable);
HXLINE( 700)			if (::hx::IsNotNull( uvTransform2 )) {
HXLINE( 701)				this->_vertexConstantData->set(this->_uvTransformIndex2,uvTransform2->a);
HXLINE( 702)				this->_vertexConstantData->set((this->_uvTransformIndex2 + 1),uvTransform2->b);
HXLINE( 703)				this->_vertexConstantData->set((this->_uvTransformIndex2 + 3),uvTransform2->tx);
HXLINE( 704)				this->_vertexConstantData->set((this->_uvTransformIndex2 + 4),uvTransform2->c);
HXLINE( 705)				this->_vertexConstantData->set((this->_uvTransformIndex2 + 5),uvTransform2->d);
HXLINE( 706)				this->_vertexConstantData->set((this->_uvTransformIndex2 + 7),uvTransform2->ty);
            			}
            			else {
HXLINE( 710)				this->_vertexConstantData->set(this->_uvTransformIndex2,( (Float)(1) ));
HXLINE( 711)				this->_vertexConstantData->set((this->_uvTransformIndex2 + 1),( (Float)(0) ));
HXLINE( 712)				this->_vertexConstantData->set((this->_uvTransformIndex2 + 3),( (Float)(0) ));
HXLINE( 713)				this->_vertexConstantData->set((this->_uvTransformIndex2 + 4),( (Float)(0) ));
HXLINE( 714)				this->_vertexConstantData->set((this->_uvTransformIndex2 + 5),( (Float)(1) ));
HXLINE( 715)				this->_vertexConstantData->set((this->_uvTransformIndex2 + 7),( (Float)(0) ));
            			}
            		}
HXLINE( 719)		this->_ambientLightR = (this->_ambientLightG = (this->_ambientLightB = ( (Float)(0) )));
HXLINE( 721)		if (this->usesLights()) {
HXLINE( 722)			this->updateLightConstants();
            		}
HXLINE( 724)		if (this->usesProbes()) {
HXLINE( 725)			this->updateProbes(stage3DProxy);
            		}
HXLINE( 727)		if ((this->_sceneMatrixIndex >= 0)) {
HXLINE( 728)			::away3d::core::base::IRenderable_obj::getRenderSceneTransform(renderable,camera)->copyRawDataTo(this->_vertexConstantData,this->_sceneMatrixIndex,true);
HXLINE( 729)			viewProjection->copyRawDataTo(this->_vertexConstantData,0,true);
            		}
            		else {
HXLINE( 731)			 ::openfl::geom::Matrix3D matrix3D = ::away3d::core::math::Matrix3DUtils_obj::CALCULATION_MATRIX;
HXLINE( 732)			matrix3D->copyFrom(::away3d::core::base::IRenderable_obj::getRenderSceneTransform(renderable,camera));
HXLINE( 733)			matrix3D->append(viewProjection);
HXLINE( 734)			matrix3D->copyRawDataTo(this->_vertexConstantData,0,true);
            		}
HXLINE( 737)		if ((this->_sceneNormalMatrixIndex >= 0)) {
HXLINE( 738)			::away3d::core::base::IRenderable_obj::get_inverseSceneTransform(renderable)->copyRawDataTo(this->_vertexConstantData,this->_sceneNormalMatrixIndex,false);
            		}
HXLINE( 740)		if (this->_usesNormals) {
HXLINE( 741)			this->_methodSetup->_normalMethod->setRenderState(this->_methodSetup->_normalMethodVO,renderable,stage3DProxy,camera);
            		}
HXLINE( 743)		 ::away3d::materials::methods::BasicAmbientMethod ambientMethod = this->_methodSetup->_ambientMethod;
HXLINE( 744)		ambientMethod->_lightAmbientR = this->_ambientLightR;
HXLINE( 745)		ambientMethod->_lightAmbientG = this->_ambientLightG;
HXLINE( 746)		ambientMethod->_lightAmbientB = this->_ambientLightB;
HXLINE( 747)		ambientMethod->setRenderState(this->_methodSetup->_ambientMethodVO,renderable,stage3DProxy,camera);
HXLINE( 749)		if (::hx::IsNotNull( this->_methodSetup->_shadowMethod )) {
HXLINE( 750)			this->_methodSetup->_shadowMethod->setRenderState(this->_methodSetup->_shadowMethodVO,renderable,stage3DProxy,camera);
            		}
HXLINE( 751)		this->_methodSetup->_diffuseMethod->setRenderState(this->_methodSetup->_diffuseMethodVO,renderable,stage3DProxy,camera);
HXLINE( 752)		if (this->_usingSpecularMethod) {
HXLINE( 753)			this->_methodSetup->_specularMethod->setRenderState(this->_methodSetup->_specularMethodVO,renderable,stage3DProxy,camera);
            		}
HXLINE( 754)		if (::hx::IsNotNull( this->_methodSetup->_colorTransformMethod )) {
HXLINE( 755)			this->_methodSetup->_colorTransformMethod->setRenderState(this->_methodSetup->_colorTransformMethodVO,renderable,stage3DProxy,camera);
            		}
HXLINE( 757)		 ::openfl::_Vector::ObjectVector methods = this->_methodSetup->_methods;
HXLINE( 758)		int len = methods->get_length();
HXLINE( 759)		{
HXLINE( 759)			int _g = 0;
HXDLIN( 759)			int _g1 = len;
HXDLIN( 759)			while((_g < _g1)){
HXLINE( 759)				_g = (_g + 1);
HXDLIN( 759)				int i = (_g - 1);
HXLINE( 760)				 ::away3d::materials::methods::MethodVOSet set = methods->get(i).StaticCast<  ::away3d::materials::methods::MethodVOSet >();
HXLINE( 761)				set->method->setRenderState(set->data,renderable,stage3DProxy,camera);
            			}
            		}
HXLINE( 764)		context->setProgramConstantsFromVector(1,0,this->_vertexConstantData,this->_numUsedVertexConstants);
HXLINE( 765)		context->setProgramConstantsFromVector(0,0,this->_fragmentConstantData,this->_numUsedFragmentConstants);
HXLINE( 767)		::away3d::core::base::IRenderable_obj::activateVertexBuffer(renderable,0,stage3DProxy);
HXLINE( 768)		 ::openfl::display3D::IndexBuffer3D _hx_tmp = ::away3d::core::base::IRenderable_obj::getIndexBuffer(renderable,stage3DProxy);
HXDLIN( 768)		stage3DProxy->drawTriangles(_hx_tmp,0,::away3d::core::base::IRenderable_obj::get_numTriangles(renderable));
            	}


bool CompiledPass_obj::usesProbes(){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_776_usesProbes)
HXDLIN( 776)		if ((this->_numLightProbes > 0)) {
HXDLIN( 776)			return (((this->_diffuseLightSources | this->_specularLightSources) & 2) != 0);
            		}
            		else {
HXDLIN( 776)			return false;
            		}
HXDLIN( 776)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,usesProbes,return )

bool CompiledPass_obj::usesLights(){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_784_usesLights)
HXDLIN( 784)		bool _hx_tmp;
HXDLIN( 784)		if ((this->_numPointLights <= 0)) {
HXDLIN( 784)			_hx_tmp = (this->_numDirectionalLights > 0);
            		}
            		else {
HXDLIN( 784)			_hx_tmp = true;
            		}
HXDLIN( 784)		if (_hx_tmp) {
HXDLIN( 784)			return (((this->_diffuseLightSources | this->_specularLightSources) & 1) != 0);
            		}
            		else {
HXDLIN( 784)			return false;
            		}
HXDLIN( 784)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,usesLights,return )

void CompiledPass_obj::deactivate( ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_791_deactivate)
HXLINE( 792)		this->super::deactivate(stage3DProxy);
HXLINE( 794)		if (this->_usesNormals) {
HXLINE( 795)			this->_methodSetup->_normalMethod->deactivate(this->_methodSetup->_normalMethodVO,stage3DProxy);
            		}
HXLINE( 796)		this->_methodSetup->_ambientMethod->deactivate(this->_methodSetup->_ambientMethodVO,stage3DProxy);
HXLINE( 797)		if (::hx::IsNotNull( this->_methodSetup->_shadowMethod )) {
HXLINE( 798)			this->_methodSetup->_shadowMethod->deactivate(this->_methodSetup->_shadowMethodVO,stage3DProxy);
            		}
HXLINE( 799)		this->_methodSetup->_diffuseMethod->deactivate(this->_methodSetup->_diffuseMethodVO,stage3DProxy);
HXLINE( 800)		if (this->_usingSpecularMethod) {
HXLINE( 801)			this->_methodSetup->_specularMethod->deactivate(this->_methodSetup->_specularMethodVO,stage3DProxy);
            		}
            	}


int CompiledPass_obj::get_specularLightSources(){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_812_get_specularLightSources)
HXDLIN( 812)		return this->_specularLightSources;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,get_specularLightSources,return )

int CompiledPass_obj::set_specularLightSources(int value){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_816_set_specularLightSources)
HXLINE( 817)		this->_specularLightSources = value;
HXLINE( 818)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompiledPass_obj,set_specularLightSources,return )

int CompiledPass_obj::get_diffuseLightSources(){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_829_get_diffuseLightSources)
HXDLIN( 829)		return this->_diffuseLightSources;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,get_diffuseLightSources,return )

int CompiledPass_obj::set_diffuseLightSources(int value){
            	HX_STACKFRAME(&_hx_pos_88722f2eca00b80b_833_set_diffuseLightSources)
HXLINE( 834)		this->_diffuseLightSources = value;
HXLINE( 835)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompiledPass_obj,set_diffuseLightSources,return )


::hx::ObjectPtr< CompiledPass_obj > CompiledPass_obj::__new( ::away3d::materials::MaterialBase material) {
	::hx::ObjectPtr< CompiledPass_obj > __this = new CompiledPass_obj();
	__this->__construct(material);
	return __this;
}

::hx::ObjectPtr< CompiledPass_obj > CompiledPass_obj::__alloc(::hx::Ctx *_hx_ctx, ::away3d::materials::MaterialBase material) {
	CompiledPass_obj *__this = (CompiledPass_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CompiledPass_obj), true, "away3d.materials.passes.CompiledPass"));
	*(void **)__this = CompiledPass_obj::_hx_vtable;
	__this->__construct(material);
	return __this;
}

CompiledPass_obj::CompiledPass_obj()
{
}

void CompiledPass_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CompiledPass);
	HX_MARK_MEMBER_NAME(_passes,"_passes");
	HX_MARK_MEMBER_NAME(_passesDirty,"_passesDirty");
	HX_MARK_MEMBER_NAME(_specularLightSources,"_specularLightSources");
	HX_MARK_MEMBER_NAME(_diffuseLightSources,"_diffuseLightSources");
	HX_MARK_MEMBER_NAME(_vertexCode,"_vertexCode");
	HX_MARK_MEMBER_NAME(_fragmentLightCode,"_fragmentLightCode");
	HX_MARK_MEMBER_NAME(_framentPostLightCode,"_framentPostLightCode");
	HX_MARK_MEMBER_NAME(_vertexConstantData,"_vertexConstantData");
	HX_MARK_MEMBER_NAME(_fragmentConstantData,"_fragmentConstantData");
	HX_MARK_MEMBER_NAME(_commonsDataIndex,"_commonsDataIndex");
	HX_MARK_MEMBER_NAME(_probeWeightsIndex,"_probeWeightsIndex");
	HX_MARK_MEMBER_NAME(_uvBufferIndex,"_uvBufferIndex");
	HX_MARK_MEMBER_NAME(_secondaryUVBufferIndex,"_secondaryUVBufferIndex");
	HX_MARK_MEMBER_NAME(_normalBufferIndex,"_normalBufferIndex");
	HX_MARK_MEMBER_NAME(_tangentBufferIndex,"_tangentBufferIndex");
	HX_MARK_MEMBER_NAME(_sceneMatrixIndex,"_sceneMatrixIndex");
	HX_MARK_MEMBER_NAME(_sceneNormalMatrixIndex,"_sceneNormalMatrixIndex");
	HX_MARK_MEMBER_NAME(_lightFragmentConstantIndex,"_lightFragmentConstantIndex");
	HX_MARK_MEMBER_NAME(_cameraPositionIndex,"_cameraPositionIndex");
	HX_MARK_MEMBER_NAME(_uvTransformIndex,"_uvTransformIndex");
	HX_MARK_MEMBER_NAME(_uvTransformIndex2,"_uvTransformIndex2");
	HX_MARK_MEMBER_NAME(_lightProbeDiffuseIndices,"_lightProbeDiffuseIndices");
	HX_MARK_MEMBER_NAME(_lightProbeSpecularIndices,"_lightProbeSpecularIndices");
	HX_MARK_MEMBER_NAME(_ambientLightR,"_ambientLightR");
	HX_MARK_MEMBER_NAME(_ambientLightG,"_ambientLightG");
	HX_MARK_MEMBER_NAME(_ambientLightB,"_ambientLightB");
	HX_MARK_MEMBER_NAME(_compiler,"_compiler");
	HX_MARK_MEMBER_NAME(_methodSetup,"_methodSetup");
	HX_MARK_MEMBER_NAME(_usingSpecularMethod,"_usingSpecularMethod");
	HX_MARK_MEMBER_NAME(_usesNormals,"_usesNormals");
	HX_MARK_MEMBER_NAME(_preserveAlpha,"_preserveAlpha");
	HX_MARK_MEMBER_NAME(_animateUVs,"_animateUVs");
	HX_MARK_MEMBER_NAME(_animateUVs2,"_animateUVs2");
	HX_MARK_MEMBER_NAME(_numPointLights,"_numPointLights");
	HX_MARK_MEMBER_NAME(_numDirectionalLights,"_numDirectionalLights");
	HX_MARK_MEMBER_NAME(_numLightProbes,"_numLightProbes");
	HX_MARK_MEMBER_NAME(_enableLightFallOff,"_enableLightFallOff");
	HX_MARK_MEMBER_NAME(_forceSeparateMVP,"_forceSeparateMVP");
	 ::away3d::materials::passes::MaterialPassBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CompiledPass_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_passes,"_passes");
	HX_VISIT_MEMBER_NAME(_passesDirty,"_passesDirty");
	HX_VISIT_MEMBER_NAME(_specularLightSources,"_specularLightSources");
	HX_VISIT_MEMBER_NAME(_diffuseLightSources,"_diffuseLightSources");
	HX_VISIT_MEMBER_NAME(_vertexCode,"_vertexCode");
	HX_VISIT_MEMBER_NAME(_fragmentLightCode,"_fragmentLightCode");
	HX_VISIT_MEMBER_NAME(_framentPostLightCode,"_framentPostLightCode");
	HX_VISIT_MEMBER_NAME(_vertexConstantData,"_vertexConstantData");
	HX_VISIT_MEMBER_NAME(_fragmentConstantData,"_fragmentConstantData");
	HX_VISIT_MEMBER_NAME(_commonsDataIndex,"_commonsDataIndex");
	HX_VISIT_MEMBER_NAME(_probeWeightsIndex,"_probeWeightsIndex");
	HX_VISIT_MEMBER_NAME(_uvBufferIndex,"_uvBufferIndex");
	HX_VISIT_MEMBER_NAME(_secondaryUVBufferIndex,"_secondaryUVBufferIndex");
	HX_VISIT_MEMBER_NAME(_normalBufferIndex,"_normalBufferIndex");
	HX_VISIT_MEMBER_NAME(_tangentBufferIndex,"_tangentBufferIndex");
	HX_VISIT_MEMBER_NAME(_sceneMatrixIndex,"_sceneMatrixIndex");
	HX_VISIT_MEMBER_NAME(_sceneNormalMatrixIndex,"_sceneNormalMatrixIndex");
	HX_VISIT_MEMBER_NAME(_lightFragmentConstantIndex,"_lightFragmentConstantIndex");
	HX_VISIT_MEMBER_NAME(_cameraPositionIndex,"_cameraPositionIndex");
	HX_VISIT_MEMBER_NAME(_uvTransformIndex,"_uvTransformIndex");
	HX_VISIT_MEMBER_NAME(_uvTransformIndex2,"_uvTransformIndex2");
	HX_VISIT_MEMBER_NAME(_lightProbeDiffuseIndices,"_lightProbeDiffuseIndices");
	HX_VISIT_MEMBER_NAME(_lightProbeSpecularIndices,"_lightProbeSpecularIndices");
	HX_VISIT_MEMBER_NAME(_ambientLightR,"_ambientLightR");
	HX_VISIT_MEMBER_NAME(_ambientLightG,"_ambientLightG");
	HX_VISIT_MEMBER_NAME(_ambientLightB,"_ambientLightB");
	HX_VISIT_MEMBER_NAME(_compiler,"_compiler");
	HX_VISIT_MEMBER_NAME(_methodSetup,"_methodSetup");
	HX_VISIT_MEMBER_NAME(_usingSpecularMethod,"_usingSpecularMethod");
	HX_VISIT_MEMBER_NAME(_usesNormals,"_usesNormals");
	HX_VISIT_MEMBER_NAME(_preserveAlpha,"_preserveAlpha");
	HX_VISIT_MEMBER_NAME(_animateUVs,"_animateUVs");
	HX_VISIT_MEMBER_NAME(_animateUVs2,"_animateUVs2");
	HX_VISIT_MEMBER_NAME(_numPointLights,"_numPointLights");
	HX_VISIT_MEMBER_NAME(_numDirectionalLights,"_numDirectionalLights");
	HX_VISIT_MEMBER_NAME(_numLightProbes,"_numLightProbes");
	HX_VISIT_MEMBER_NAME(_enableLightFallOff,"_enableLightFallOff");
	HX_VISIT_MEMBER_NAME(_forceSeparateMVP,"_forceSeparateMVP");
	 ::away3d::materials::passes::MaterialPassBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CompiledPass_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_passes") ) { return ::hx::Val( _passes ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		if (HX_FIELD_EQ(inName,"cleanUp") ) { return ::hx::Val( cleanUp_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"activate") ) { return ::hx::Val( activate_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normalMap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_normalMap() ); }
		if (HX_FIELD_EQ(inName,"_compiler") ) { return ::hx::Val( _compiler ); }
		if (HX_FIELD_EQ(inName,"addPasses") ) { return ::hx::Val( addPasses_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"animateUVs") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_animateUVs() ); }
		if (HX_FIELD_EQ(inName,"set_mipmap") ) { return ::hx::Val( set_mipmap_dyn() ); }
		if (HX_FIELD_EQ(inName,"usesProbes") ) { return ::hx::Val( usesProbes_dyn() ); }
		if (HX_FIELD_EQ(inName,"usesLights") ) { return ::hx::Val( usesLights_dyn() ); }
		if (HX_FIELD_EQ(inName,"deactivate") ) { return ::hx::Val( deactivate_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"animateUVs2") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_animateUVs2() ); }
		if (HX_FIELD_EQ(inName,"_vertexCode") ) { return ::hx::Val( _vertexCode ); }
		if (HX_FIELD_EQ(inName,"_animateUVs") ) { return ::hx::Val( _animateUVs ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"normalMethod") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_normalMethod() ); }
		if (HX_FIELD_EQ(inName,"shadowMethod") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_shadowMethod() ); }
		if (HX_FIELD_EQ(inName,"_passesDirty") ) { return ::hx::Val( _passesDirty ); }
		if (HX_FIELD_EQ(inName,"_methodSetup") ) { return ::hx::Val( _methodSetup ); }
		if (HX_FIELD_EQ(inName,"_usesNormals") ) { return ::hx::Val( _usesNormals ); }
		if (HX_FIELD_EQ(inName,"_animateUVs2") ) { return ::hx::Val( _animateUVs2 ); }
		if (HX_FIELD_EQ(inName,"initCompiler") ) { return ::hx::Val( initCompiler_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateProbes") ) { return ::hx::Val( updateProbes_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"preserveAlpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_preserveAlpha() ); }
		if (HX_FIELD_EQ(inName,"ambientMethod") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_ambientMethod() ); }
		if (HX_FIELD_EQ(inName,"diffuseMethod") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_diffuseMethod() ); }
		if (HX_FIELD_EQ(inName,"updateProgram") ) { return ::hx::Val( updateProgram_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_normalMap") ) { return ::hx::Val( get_normalMap_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_normalMap") ) { return ::hx::Val( set_normalMap_dyn() ); }
		if (HX_FIELD_EQ(inName,"getVertexCode") ) { return ::hx::Val( getVertexCode_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"numPointLights") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numPointLights() ); }
		if (HX_FIELD_EQ(inName,"numLightProbes") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numLightProbes() ); }
		if (HX_FIELD_EQ(inName,"specularMethod") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_specularMethod() ); }
		if (HX_FIELD_EQ(inName,"_uvBufferIndex") ) { return ::hx::Val( _uvBufferIndex ); }
		if (HX_FIELD_EQ(inName,"_ambientLightR") ) { return ::hx::Val( _ambientLightR ); }
		if (HX_FIELD_EQ(inName,"_ambientLightG") ) { return ::hx::Val( _ambientLightG ); }
		if (HX_FIELD_EQ(inName,"_ambientLightB") ) { return ::hx::Val( _ambientLightB ); }
		if (HX_FIELD_EQ(inName,"_preserveAlpha") ) { return ::hx::Val( _preserveAlpha ); }
		if (HX_FIELD_EQ(inName,"createCompiler") ) { return ::hx::Val( createCompiler_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_animateUVs") ) { return ::hx::Val( get_animateUVs_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_animateUVs") ) { return ::hx::Val( set_animateUVs_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_anisotropy") ) { return ::hx::Val( set_anisotropy_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_numPointLights") ) { return ::hx::Val( _numPointLights ); }
		if (HX_FIELD_EQ(inName,"_numLightProbes") ) { return ::hx::Val( _numLightProbes ); }
		if (HX_FIELD_EQ(inName,"get_animateUVs2") ) { return ::hx::Val( get_animateUVs2_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_animateUVs2") ) { return ::hx::Val( set_animateUVs2_dyn() ); }
		if (HX_FIELD_EQ(inName,"initCommonsData") ) { return ::hx::Val( initCommonsData_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFragmentCode") ) { return ::hx::Val( getFragmentCode_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"forceSeparateMVP") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_forceSeparateMVP() ); }
		if (HX_FIELD_EQ(inName,"initConstantData") ) { return ::hx::Val( initConstantData_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_normalMethod") ) { return ::hx::Val( get_normalMethod_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_normalMethod") ) { return ::hx::Val( set_normalMethod_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_shadowMethod") ) { return ::hx::Val( get_shadowMethod_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_shadowMethod") ) { return ::hx::Val( set_shadowMethod_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_commonsDataIndex") ) { return ::hx::Val( _commonsDataIndex ); }
		if (HX_FIELD_EQ(inName,"_sceneMatrixIndex") ) { return ::hx::Val( _sceneMatrixIndex ); }
		if (HX_FIELD_EQ(inName,"_uvTransformIndex") ) { return ::hx::Val( _uvTransformIndex ); }
		if (HX_FIELD_EQ(inName,"_forceSeparateMVP") ) { return ::hx::Val( _forceSeparateMVP ); }
		if (HX_FIELD_EQ(inName,"updateUsedOffsets") ) { return ::hx::Val( updateUsedOffsets_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_preserveAlpha") ) { return ::hx::Val( get_preserveAlpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_preserveAlpha") ) { return ::hx::Val( set_preserveAlpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_ambientMethod") ) { return ::hx::Val( get_ambientMethod_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_ambientMethod") ) { return ::hx::Val( set_ambientMethod_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_diffuseMethod") ) { return ::hx::Val( get_diffuseMethod_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_diffuseMethod") ) { return ::hx::Val( set_diffuseMethod_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"enableLightFallOff") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_enableLightFallOff() ); }
		if (HX_FIELD_EQ(inName,"_fragmentLightCode") ) { return ::hx::Val( _fragmentLightCode ); }
		if (HX_FIELD_EQ(inName,"_probeWeightsIndex") ) { return ::hx::Val( _probeWeightsIndex ); }
		if (HX_FIELD_EQ(inName,"_normalBufferIndex") ) { return ::hx::Val( _normalBufferIndex ); }
		if (HX_FIELD_EQ(inName,"_uvTransformIndex2") ) { return ::hx::Val( _uvTransformIndex2 ); }
		if (HX_FIELD_EQ(inName,"get_numPointLights") ) { return ::hx::Val( get_numPointLights_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numLightProbes") ) { return ::hx::Val( get_numLightProbes_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_specularMethod") ) { return ::hx::Val( get_specularMethod_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_specularMethod") ) { return ::hx::Val( set_specularMethod_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"diffuseLightSources") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_diffuseLightSources() ); }
		if (HX_FIELD_EQ(inName,"_vertexConstantData") ) { return ::hx::Val( _vertexConstantData ); }
		if (HX_FIELD_EQ(inName,"_tangentBufferIndex") ) { return ::hx::Val( _tangentBufferIndex ); }
		if (HX_FIELD_EQ(inName,"_enableLightFallOff") ) { return ::hx::Val( _enableLightFallOff ); }
		if (HX_FIELD_EQ(inName,"initUVTransformData") ) { return ::hx::Val( initUVTransformData_dyn() ); }
		if (HX_FIELD_EQ(inName,"onShaderInvalidated") ) { return ::hx::Val( onShaderInvalidated_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"numDirectionalLights") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numDirectionalLights() ); }
		if (HX_FIELD_EQ(inName,"specularLightSources") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_specularLightSources() ); }
		if (HX_FIELD_EQ(inName,"_diffuseLightSources") ) { return ::hx::Val( _diffuseLightSources ); }
		if (HX_FIELD_EQ(inName,"_cameraPositionIndex") ) { return ::hx::Val( _cameraPositionIndex ); }
		if (HX_FIELD_EQ(inName,"_usingSpecularMethod") ) { return ::hx::Val( _usingSpecularMethod ); }
		if (HX_FIELD_EQ(inName,"get_forceSeparateMVP") ) { return ::hx::Val( get_forceSeparateMVP_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_forceSeparateMVP") ) { return ::hx::Val( set_forceSeparateMVP_dyn() ); }
		if (HX_FIELD_EQ(inName,"addPassesFromMethods") ) { return ::hx::Val( addPassesFromMethods_dyn() ); }
		if (HX_FIELD_EQ(inName,"initUVTransformData2") ) { return ::hx::Val( initUVTransformData2_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateLightConstants") ) { return ::hx::Val( updateLightConstants_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_specularLightSources") ) { return ::hx::Val( _specularLightSources ); }
		if (HX_FIELD_EQ(inName,"_framentPostLightCode") ) { return ::hx::Val( _framentPostLightCode ); }
		if (HX_FIELD_EQ(inName,"_fragmentConstantData") ) { return ::hx::Val( _fragmentConstantData ); }
		if (HX_FIELD_EQ(inName,"_numDirectionalLights") ) { return ::hx::Val( _numDirectionalLights ); }
		if (HX_FIELD_EQ(inName,"updateRegisterIndices") ) { return ::hx::Val( updateRegisterIndices_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateMethodConstants") ) { return ::hx::Val( updateMethodConstants_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_enableLightFallOff") ) { return ::hx::Val( get_enableLightFallOff_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_enableLightFallOff") ) { return ::hx::Val( set_enableLightFallOff_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateShaderProperties") ) { return ::hx::Val( updateShaderProperties_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_secondaryUVBufferIndex") ) { return ::hx::Val( _secondaryUVBufferIndex ); }
		if (HX_FIELD_EQ(inName,"_sceneNormalMatrixIndex") ) { return ::hx::Val( _sceneNormalMatrixIndex ); }
		if (HX_FIELD_EQ(inName,"invalidateShaderProgram") ) { return ::hx::Val( invalidateShaderProgram_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_diffuseLightSources") ) { return ::hx::Val( get_diffuseLightSources_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_diffuseLightSources") ) { return ::hx::Val( set_diffuseLightSources_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_numDirectionalLights") ) { return ::hx::Val( get_numDirectionalLights_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_specularLightSources") ) { return ::hx::Val( get_specularLightSources_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_specularLightSources") ) { return ::hx::Val( set_specularLightSources_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_lightProbeDiffuseIndices") ) { return ::hx::Val( _lightProbeDiffuseIndices ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_lightProbeSpecularIndices") ) { return ::hx::Val( _lightProbeSpecularIndices ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_lightFragmentConstantIndex") ) { return ::hx::Val( _lightFragmentConstantIndex ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CompiledPass_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_passes") ) { _passes=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normalMap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_normalMap(inValue.Cast<  ::away3d::textures::Texture2DBase >()) ); }
		if (HX_FIELD_EQ(inName,"_compiler") ) { _compiler=inValue.Cast<  ::away3d::materials::compilation::ShaderCompiler >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"animateUVs") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_animateUVs(inValue.Cast< bool >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"animateUVs2") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_animateUVs2(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"_vertexCode") ) { _vertexCode=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_animateUVs") ) { _animateUVs=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"normalMethod") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_normalMethod(inValue.Cast<  ::away3d::materials::methods::BasicNormalMethod >()) ); }
		if (HX_FIELD_EQ(inName,"shadowMethod") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_shadowMethod(inValue.Cast<  ::away3d::materials::methods::ShadowMapMethodBase >()) ); }
		if (HX_FIELD_EQ(inName,"_passesDirty") ) { _passesDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_methodSetup") ) { _methodSetup=inValue.Cast<  ::away3d::materials::methods::ShaderMethodSetup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_usesNormals") ) { _usesNormals=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_animateUVs2") ) { _animateUVs2=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"preserveAlpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_preserveAlpha(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"ambientMethod") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_ambientMethod(inValue.Cast<  ::away3d::materials::methods::BasicAmbientMethod >()) ); }
		if (HX_FIELD_EQ(inName,"diffuseMethod") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_diffuseMethod(inValue.Cast<  ::away3d::materials::methods::BasicDiffuseMethod >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"specularMethod") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_specularMethod(inValue.Cast<  ::away3d::materials::methods::BasicSpecularMethod >()) ); }
		if (HX_FIELD_EQ(inName,"_uvBufferIndex") ) { _uvBufferIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ambientLightR") ) { _ambientLightR=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ambientLightG") ) { _ambientLightG=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ambientLightB") ) { _ambientLightB=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_preserveAlpha") ) { _preserveAlpha=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_numPointLights") ) { _numPointLights=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numLightProbes") ) { _numLightProbes=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"forceSeparateMVP") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_forceSeparateMVP(inValue.Cast< bool >()) ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_commonsDataIndex") ) { _commonsDataIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sceneMatrixIndex") ) { _sceneMatrixIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_uvTransformIndex") ) { _uvTransformIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_forceSeparateMVP") ) { _forceSeparateMVP=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"enableLightFallOff") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_enableLightFallOff(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"_fragmentLightCode") ) { _fragmentLightCode=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_probeWeightsIndex") ) { _probeWeightsIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_normalBufferIndex") ) { _normalBufferIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_uvTransformIndex2") ) { _uvTransformIndex2=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"diffuseLightSources") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_diffuseLightSources(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"_vertexConstantData") ) { _vertexConstantData=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tangentBufferIndex") ) { _tangentBufferIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_enableLightFallOff") ) { _enableLightFallOff=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"specularLightSources") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_specularLightSources(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"_diffuseLightSources") ) { _diffuseLightSources=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cameraPositionIndex") ) { _cameraPositionIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_usingSpecularMethod") ) { _usingSpecularMethod=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_specularLightSources") ) { _specularLightSources=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_framentPostLightCode") ) { _framentPostLightCode=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fragmentConstantData") ) { _fragmentConstantData=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numDirectionalLights") ) { _numDirectionalLights=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_secondaryUVBufferIndex") ) { _secondaryUVBufferIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sceneNormalMatrixIndex") ) { _sceneNormalMatrixIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_lightProbeDiffuseIndices") ) { _lightProbeDiffuseIndices=inValue.Cast<  ::openfl::_Vector::IntVector >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_lightProbeSpecularIndices") ) { _lightProbeSpecularIndices=inValue.Cast<  ::openfl::_Vector::IntVector >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_lightFragmentConstantIndex") ) { _lightFragmentConstantIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CompiledPass_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("enableLightFallOff",a1,7e,2a,a7));
	outFields->push(HX_("forceSeparateMVP",19,41,4f,87));
	outFields->push(HX_("numPointLights",a7,e2,c1,38));
	outFields->push(HX_("numDirectionalLights",41,a2,e8,bb));
	outFields->push(HX_("numLightProbes",13,ac,c5,83));
	outFields->push(HX_("preserveAlpha",f2,67,13,f8));
	outFields->push(HX_("animateUVs",f1,8a,63,80));
	outFields->push(HX_("animateUVs2",21,08,b6,d6));
	outFields->push(HX_("normalMap",b5,e2,8b,ab));
	outFields->push(HX_("normalMethod",68,74,bf,07));
	outFields->push(HX_("ambientMethod",19,25,b6,82));
	outFields->push(HX_("shadowMethod",e1,5a,27,85));
	outFields->push(HX_("diffuseMethod",e3,01,e5,ec));
	outFields->push(HX_("specularMethod",04,b6,19,0d));
	outFields->push(HX_("specularLightSources",65,48,c2,b2));
	outFields->push(HX_("diffuseLightSources",84,45,ca,ff));
	outFields->push(HX_("_passes",1e,e5,a8,5c));
	outFields->push(HX_("_passesDirty",14,8e,ab,e7));
	outFields->push(HX_("_specularLightSources",44,52,5d,21));
	outFields->push(HX_("_diffuseLightSources",85,5c,23,ff));
	outFields->push(HX_("_vertexCode",d0,07,0b,a5));
	outFields->push(HX_("_fragmentLightCode",f4,3b,43,fc));
	outFields->push(HX_("_framentPostLightCode",cf,e8,63,b5));
	outFields->push(HX_("_vertexConstantData",51,f7,a2,d1));
	outFields->push(HX_("_fragmentConstantData",7d,f3,6b,12));
	outFields->push(HX_("_commonsDataIndex",df,7c,d4,b8));
	outFields->push(HX_("_probeWeightsIndex",28,39,99,c3));
	outFields->push(HX_("_uvBufferIndex",52,99,1a,ad));
	outFields->push(HX_("_secondaryUVBufferIndex",bc,dc,6d,06));
	outFields->push(HX_("_normalBufferIndex",cc,eb,d9,1b));
	outFields->push(HX_("_tangentBufferIndex",4c,89,dc,2c));
	outFields->push(HX_("_sceneMatrixIndex",84,61,65,6f));
	outFields->push(HX_("_sceneNormalMatrixIndex",dd,d2,1f,fc));
	outFields->push(HX_("_lightFragmentConstantIndex",87,13,21,1b));
	outFields->push(HX_("_cameraPositionIndex",c5,82,d3,ce));
	outFields->push(HX_("_uvTransformIndex",a6,a6,65,2c));
	outFields->push(HX_("_uvTransformIndex2",cc,2a,8c,ac));
	outFields->push(HX_("_lightProbeDiffuseIndices",5e,eb,db,fd));
	outFields->push(HX_("_lightProbeSpecularIndices",0b,83,40,e0));
	outFields->push(HX_("_ambientLightR",35,49,af,9f));
	outFields->push(HX_("_ambientLightG",2a,49,af,9f));
	outFields->push(HX_("_ambientLightB",25,49,af,9f));
	outFields->push(HX_("_compiler",fe,96,67,c5));
	outFields->push(HX_("_methodSetup",dd,45,dc,04));
	outFields->push(HX_("_usingSpecularMethod",69,05,97,86));
	outFields->push(HX_("_usesNormals",81,d5,37,91));
	outFields->push(HX_("_preserveAlpha",33,58,65,36));
	outFields->push(HX_("_animateUVs",10,58,ed,52));
	outFields->push(HX_("_animateUVs2",22,b6,bf,3c));
	outFields->push(HX_("_numPointLights",46,2b,22,82));
	outFields->push(HX_("_numDirectionalLights",20,ac,83,2a));
	outFields->push(HX_("_numLightProbes",b2,f4,25,cd));
	outFields->push(HX_("_enableLightFallOff",c0,02,05,87));
	outFields->push(HX_("_forceSeparateMVP",78,2f,ca,1f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CompiledPass_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(CompiledPass_obj,_passes),HX_("_passes",1e,e5,a8,5c)},
	{::hx::fsBool,(int)offsetof(CompiledPass_obj,_passesDirty),HX_("_passesDirty",14,8e,ab,e7)},
	{::hx::fsInt,(int)offsetof(CompiledPass_obj,_specularLightSources),HX_("_specularLightSources",44,52,5d,21)},
	{::hx::fsInt,(int)offsetof(CompiledPass_obj,_diffuseLightSources),HX_("_diffuseLightSources",85,5c,23,ff)},
	{::hx::fsString,(int)offsetof(CompiledPass_obj,_vertexCode),HX_("_vertexCode",d0,07,0b,a5)},
	{::hx::fsString,(int)offsetof(CompiledPass_obj,_fragmentLightCode),HX_("_fragmentLightCode",f4,3b,43,fc)},
	{::hx::fsString,(int)offsetof(CompiledPass_obj,_framentPostLightCode),HX_("_framentPostLightCode",cf,e8,63,b5)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(CompiledPass_obj,_vertexConstantData),HX_("_vertexConstantData",51,f7,a2,d1)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(CompiledPass_obj,_fragmentConstantData),HX_("_fragmentConstantData",7d,f3,6b,12)},
	{::hx::fsInt,(int)offsetof(CompiledPass_obj,_commonsDataIndex),HX_("_commonsDataIndex",df,7c,d4,b8)},
	{::hx::fsInt,(int)offsetof(CompiledPass_obj,_probeWeightsIndex),HX_("_probeWeightsIndex",28,39,99,c3)},
	{::hx::fsInt,(int)offsetof(CompiledPass_obj,_uvBufferIndex),HX_("_uvBufferIndex",52,99,1a,ad)},
	{::hx::fsInt,(int)offsetof(CompiledPass_obj,_secondaryUVBufferIndex),HX_("_secondaryUVBufferIndex",bc,dc,6d,06)},
	{::hx::fsInt,(int)offsetof(CompiledPass_obj,_normalBufferIndex),HX_("_normalBufferIndex",cc,eb,d9,1b)},
	{::hx::fsInt,(int)offsetof(CompiledPass_obj,_tangentBufferIndex),HX_("_tangentBufferIndex",4c,89,dc,2c)},
	{::hx::fsInt,(int)offsetof(CompiledPass_obj,_sceneMatrixIndex),HX_("_sceneMatrixIndex",84,61,65,6f)},
	{::hx::fsInt,(int)offsetof(CompiledPass_obj,_sceneNormalMatrixIndex),HX_("_sceneNormalMatrixIndex",dd,d2,1f,fc)},
	{::hx::fsInt,(int)offsetof(CompiledPass_obj,_lightFragmentConstantIndex),HX_("_lightFragmentConstantIndex",87,13,21,1b)},
	{::hx::fsInt,(int)offsetof(CompiledPass_obj,_cameraPositionIndex),HX_("_cameraPositionIndex",c5,82,d3,ce)},
	{::hx::fsInt,(int)offsetof(CompiledPass_obj,_uvTransformIndex),HX_("_uvTransformIndex",a6,a6,65,2c)},
	{::hx::fsInt,(int)offsetof(CompiledPass_obj,_uvTransformIndex2),HX_("_uvTransformIndex2",cc,2a,8c,ac)},
	{::hx::fsObject /*  ::openfl::_Vector::IntVector */ ,(int)offsetof(CompiledPass_obj,_lightProbeDiffuseIndices),HX_("_lightProbeDiffuseIndices",5e,eb,db,fd)},
	{::hx::fsObject /*  ::openfl::_Vector::IntVector */ ,(int)offsetof(CompiledPass_obj,_lightProbeSpecularIndices),HX_("_lightProbeSpecularIndices",0b,83,40,e0)},
	{::hx::fsFloat,(int)offsetof(CompiledPass_obj,_ambientLightR),HX_("_ambientLightR",35,49,af,9f)},
	{::hx::fsFloat,(int)offsetof(CompiledPass_obj,_ambientLightG),HX_("_ambientLightG",2a,49,af,9f)},
	{::hx::fsFloat,(int)offsetof(CompiledPass_obj,_ambientLightB),HX_("_ambientLightB",25,49,af,9f)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderCompiler */ ,(int)offsetof(CompiledPass_obj,_compiler),HX_("_compiler",fe,96,67,c5)},
	{::hx::fsObject /*  ::away3d::materials::methods::ShaderMethodSetup */ ,(int)offsetof(CompiledPass_obj,_methodSetup),HX_("_methodSetup",dd,45,dc,04)},
	{::hx::fsBool,(int)offsetof(CompiledPass_obj,_usingSpecularMethod),HX_("_usingSpecularMethod",69,05,97,86)},
	{::hx::fsBool,(int)offsetof(CompiledPass_obj,_usesNormals),HX_("_usesNormals",81,d5,37,91)},
	{::hx::fsBool,(int)offsetof(CompiledPass_obj,_preserveAlpha),HX_("_preserveAlpha",33,58,65,36)},
	{::hx::fsBool,(int)offsetof(CompiledPass_obj,_animateUVs),HX_("_animateUVs",10,58,ed,52)},
	{::hx::fsBool,(int)offsetof(CompiledPass_obj,_animateUVs2),HX_("_animateUVs2",22,b6,bf,3c)},
	{::hx::fsInt,(int)offsetof(CompiledPass_obj,_numPointLights),HX_("_numPointLights",46,2b,22,82)},
	{::hx::fsInt,(int)offsetof(CompiledPass_obj,_numDirectionalLights),HX_("_numDirectionalLights",20,ac,83,2a)},
	{::hx::fsInt,(int)offsetof(CompiledPass_obj,_numLightProbes),HX_("_numLightProbes",b2,f4,25,cd)},
	{::hx::fsBool,(int)offsetof(CompiledPass_obj,_enableLightFallOff),HX_("_enableLightFallOff",c0,02,05,87)},
	{::hx::fsBool,(int)offsetof(CompiledPass_obj,_forceSeparateMVP),HX_("_forceSeparateMVP",78,2f,ca,1f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CompiledPass_obj_sStaticStorageInfo = 0;
#endif

static ::String CompiledPass_obj_sMemberFields[] = {
	HX_("_passes",1e,e5,a8,5c),
	HX_("_passesDirty",14,8e,ab,e7),
	HX_("_specularLightSources",44,52,5d,21),
	HX_("_diffuseLightSources",85,5c,23,ff),
	HX_("_vertexCode",d0,07,0b,a5),
	HX_("_fragmentLightCode",f4,3b,43,fc),
	HX_("_framentPostLightCode",cf,e8,63,b5),
	HX_("_vertexConstantData",51,f7,a2,d1),
	HX_("_fragmentConstantData",7d,f3,6b,12),
	HX_("_commonsDataIndex",df,7c,d4,b8),
	HX_("_probeWeightsIndex",28,39,99,c3),
	HX_("_uvBufferIndex",52,99,1a,ad),
	HX_("_secondaryUVBufferIndex",bc,dc,6d,06),
	HX_("_normalBufferIndex",cc,eb,d9,1b),
	HX_("_tangentBufferIndex",4c,89,dc,2c),
	HX_("_sceneMatrixIndex",84,61,65,6f),
	HX_("_sceneNormalMatrixIndex",dd,d2,1f,fc),
	HX_("_lightFragmentConstantIndex",87,13,21,1b),
	HX_("_cameraPositionIndex",c5,82,d3,ce),
	HX_("_uvTransformIndex",a6,a6,65,2c),
	HX_("_uvTransformIndex2",cc,2a,8c,ac),
	HX_("_lightProbeDiffuseIndices",5e,eb,db,fd),
	HX_("_lightProbeSpecularIndices",0b,83,40,e0),
	HX_("_ambientLightR",35,49,af,9f),
	HX_("_ambientLightG",2a,49,af,9f),
	HX_("_ambientLightB",25,49,af,9f),
	HX_("_compiler",fe,96,67,c5),
	HX_("_methodSetup",dd,45,dc,04),
	HX_("_usingSpecularMethod",69,05,97,86),
	HX_("_usesNormals",81,d5,37,91),
	HX_("_preserveAlpha",33,58,65,36),
	HX_("_animateUVs",10,58,ed,52),
	HX_("_animateUVs2",22,b6,bf,3c),
	HX_("_numPointLights",46,2b,22,82),
	HX_("_numDirectionalLights",20,ac,83,2a),
	HX_("_numLightProbes",b2,f4,25,cd),
	HX_("_enableLightFallOff",c0,02,05,87),
	HX_("_forceSeparateMVP",78,2f,ca,1f),
	HX_("get_enableLightFallOff",ea,f7,be,00),
	HX_("set_enableLightFallOff",5e,74,6a,34),
	HX_("get_forceSeparateMVP",22,a6,b9,a5),
	HX_("set_forceSeparateMVP",96,5d,71,72),
	HX_("get_numPointLights",70,c3,5b,d4),
	HX_("get_numDirectionalLights",ca,bf,84,fe),
	HX_("get_numLightProbes",dc,8c,5f,1f),
	HX_("updateProgram",7b,af,67,bf),
	HX_("reset",cf,49,c8,e6),
	HX_("updateUsedOffsets",3a,bd,2d,e1),
	HX_("initConstantData",de,a4,a2,42),
	HX_("initCompiler",cf,26,88,22),
	HX_("createCompiler",bb,1e,0c,d0),
	HX_("updateShaderProperties",a1,c3,89,a4),
	HX_("updateRegisterIndices",fb,5e,c7,53),
	HX_("get_preserveAlpha",49,73,83,fe),
	HX_("set_preserveAlpha",55,4b,f1,21),
	HX_("get_animateUVs",3a,13,59,f6),
	HX_("set_animateUVs",ae,fb,78,16),
	HX_("get_animateUVs2",b8,bf,97,97),
	HX_("set_animateUVs2",c4,3c,63,93),
	HX_("set_mipmap",c5,3b,59,48),
	HX_("set_anisotropy",bf,68,a4,b1),
	HX_("get_normalMap",8c,b6,ef,6c),
	HX_("set_normalMap",98,98,f5,b1),
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
	HX_("init",10,3b,bb,45),
	HX_("dispose",9f,80,4c,bb),
	HX_("invalidateShaderProgram",64,b7,8b,f4),
	HX_("addPassesFromMethods",88,d1,3d,6b),
	HX_("addPasses",80,08,56,a6),
	HX_("initUVTransformData",85,e9,88,86),
	HX_("initUVTransformData2",0d,6b,43,31),
	HX_("initCommonsData",02,3e,85,d5),
	HX_("cleanUp",44,f0,41,ab),
	HX_("updateMethodConstants",65,af,a6,2f),
	HX_("updateLightConstants",c2,32,02,16),
	HX_("updateProbes",2c,96,13,b5),
	HX_("onShaderInvalidated",45,6f,55,65),
	HX_("getVertexCode",e7,96,f3,2e),
	HX_("getFragmentCode",d3,ba,61,28),
	HX_("activate",b3,1b,ac,e5),
	HX_("render",56,6b,29,05),
	HX_("usesProbes",af,b6,6a,cd),
	HX_("usesLights",49,f2,1c,00),
	HX_("deactivate",34,5c,01,3c),
	HX_("get_specularLightSources",ee,65,5e,f5),
	HX_("set_specularLightSources",62,e7,38,08),
	HX_("get_diffuseLightSources",1b,ec,1f,08),
	HX_("set_diffuseLightSources",27,55,81,0a),
	::String(null()) };

::hx::Class CompiledPass_obj::__mClass;

void CompiledPass_obj::__register()
{
	CompiledPass_obj _hx_dummy;
	CompiledPass_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.materials.passes.CompiledPass",00,2d,bb,cb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CompiledPass_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CompiledPass_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CompiledPass_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CompiledPass_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace materials
} // end namespace passes
