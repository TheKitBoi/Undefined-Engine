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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2402cb372fc9253a_19_new,"away3d.materials.compilation.ShaderCompiler","new",0xbef0c092,"away3d.materials.compilation.ShaderCompiler.new","away3d/materials/compilation/ShaderCompiler.hx",19,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_144_get_enableLightFallOff,"away3d.materials.compilation.ShaderCompiler","get_enableLightFallOff",0xada02ef8,"away3d.materials.compilation.ShaderCompiler.get_enableLightFallOff","away3d/materials/compilation/ShaderCompiler.hx",144,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_148_set_enableLightFallOff,"away3d.materials.compilation.ShaderCompiler","set_enableLightFallOff",0xe14bab6c,"away3d.materials.compilation.ShaderCompiler.set_enableLightFallOff","away3d/materials/compilation/ShaderCompiler.hx",148,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_158_get_needUVAnimation,"away3d.materials.compilation.ShaderCompiler","get_needUVAnimation",0xc0455316,"away3d.materials.compilation.ShaderCompiler.get_needUVAnimation","away3d/materials/compilation/ShaderCompiler.hx",158,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_166_get_UVTarget,"away3d.materials.compilation.ShaderCompiler","get_UVTarget",0x53615e29,"away3d.materials.compilation.ShaderCompiler.get_UVTarget","away3d/materials/compilation/ShaderCompiler.hx",166,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_174_get_UVSource,"away3d.materials.compilation.ShaderCompiler","get_UVSource",0xfea61bb3,"away3d.materials.compilation.ShaderCompiler.get_UVSource","away3d/materials/compilation/ShaderCompiler.hx",174,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_184_get_forceSeperateMVP,"away3d.materials.compilation.ShaderCompiler","get_forceSeperateMVP",0xe3dd262c,"away3d.materials.compilation.ShaderCompiler.get_forceSeperateMVP","away3d/materials/compilation/ShaderCompiler.hx",184,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_188_set_forceSeperateMVP,"away3d.materials.compilation.ShaderCompiler","set_forceSeperateMVP",0xb094dda0,"away3d.materials.compilation.ShaderCompiler.set_forceSeperateMVP","away3d/materials/compilation/ShaderCompiler.hx",188,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_198_initRegisterCache,"away3d.materials.compilation.ShaderCompiler","initRegisterCache",0xb364eb61,"away3d.materials.compilation.ShaderCompiler.initRegisterCache","away3d/materials/compilation/ShaderCompiler.hx",198,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_209_get_animateUVs,"away3d.materials.compilation.ShaderCompiler","get_animateUVs",0x13658c48,"away3d.materials.compilation.ShaderCompiler.get_animateUVs","away3d/materials/compilation/ShaderCompiler.hx",209,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_213_set_animateUVs,"away3d.materials.compilation.ShaderCompiler","set_animateUVs",0x338574bc,"away3d.materials.compilation.ShaderCompiler.set_animateUVs","away3d/materials/compilation/ShaderCompiler.hx",213,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_223_get_animateUVs2,"away3d.materials.compilation.ShaderCompiler","get_animateUVs2",0xe57532ea,"away3d.materials.compilation.ShaderCompiler.get_animateUVs2","away3d/materials/compilation/ShaderCompiler.hx",223,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_227_set_animateUVs2,"away3d.materials.compilation.ShaderCompiler","set_animateUVs2",0xe140aff6,"away3d.materials.compilation.ShaderCompiler.set_animateUVs2","away3d/materials/compilation/ShaderCompiler.hx",227,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_238_get_alphaPremultiplied,"away3d.materials.compilation.ShaderCompiler","get_alphaPremultiplied",0x9866876f,"away3d.materials.compilation.ShaderCompiler.get_alphaPremultiplied","away3d/materials/compilation/ShaderCompiler.hx",238,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_242_set_alphaPremultiplied,"away3d.materials.compilation.ShaderCompiler","set_alphaPremultiplied",0xcc1203e3,"away3d.materials.compilation.ShaderCompiler.set_alphaPremultiplied","away3d/materials/compilation/ShaderCompiler.hx",242,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_252_get_preserveAlpha,"away3d.materials.compilation.ShaderCompiler","get_preserveAlpha",0x950996fb,"away3d.materials.compilation.ShaderCompiler.get_preserveAlpha","away3d/materials/compilation/ShaderCompiler.hx",252,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_256_set_preserveAlpha,"away3d.materials.compilation.ShaderCompiler","set_preserveAlpha",0xb8776f07,"away3d.materials.compilation.ShaderCompiler.set_preserveAlpha","away3d/materials/compilation/ShaderCompiler.hx",256,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_268_setTextureSampling,"away3d.materials.compilation.ShaderCompiler","setTextureSampling",0xe232ea6e,"away3d.materials.compilation.ShaderCompiler.setTextureSampling","away3d/materials/compilation/ShaderCompiler.hx",268,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_281_setConstantDataBuffers,"away3d.materials.compilation.ShaderCompiler","setConstantDataBuffers",0x464157f1,"away3d.materials.compilation.ShaderCompiler.setConstantDataBuffers","away3d/materials/compilation/ShaderCompiler.hx",281,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_291_get_methodSetup,"away3d.materials.compilation.ShaderCompiler","get_methodSetup",0xad91c2a5,"away3d.materials.compilation.ShaderCompiler.get_methodSetup","away3d/materials/compilation/ShaderCompiler.hx",291,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_295_set_methodSetup,"away3d.materials.compilation.ShaderCompiler","set_methodSetup",0xa95d3fb1,"away3d.materials.compilation.ShaderCompiler.set_methodSetup","away3d/materials/compilation/ShaderCompiler.hx",295,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_304_compile,"away3d.materials.compilation.ShaderCompiler","compile",0xb54d16a5,"away3d.materials.compilation.ShaderCompiler.compile","away3d/materials/compilation/ShaderCompiler.hx",304,0xd7b1757b)
static const ::String _hx_array_data_3c04cfa0_24[] = {
	HX_("va0",a5,de,59,00),
};
static const ::String _hx_array_data_3c04cfa0_25[] = {
	HX_("vt0",32,ef,59,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_336_createNormalRegisters,"away3d.materials.compilation.ShaderCompiler","createNormalRegisters",0xb264229f,"away3d.materials.compilation.ShaderCompiler.createNormalRegisters","away3d/materials/compilation/ShaderCompiler.hx",336,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_344_compileMethodsCode,"away3d.materials.compilation.ShaderCompiler","compileMethodsCode",0x10faf61a,"away3d.materials.compilation.ShaderCompiler.compileMethodsCode","away3d/materials/compilation/ShaderCompiler.hx",344,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_363_compileLightingCode,"away3d.materials.compilation.ShaderCompiler","compileLightingCode",0x540d1f5e,"away3d.materials.compilation.ShaderCompiler.compileLightingCode","away3d/materials/compilation/ShaderCompiler.hx",363,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_371_compileViewDirCode,"away3d.materials.compilation.ShaderCompiler","compileViewDirCode",0x080d6a90,"away3d.materials.compilation.ShaderCompiler.compileViewDirCode","away3d/materials/compilation/ShaderCompiler.hx",371,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_379_compileNormalCode,"away3d.materials.compilation.ShaderCompiler","compileNormalCode",0xc319a9f9,"away3d.materials.compilation.ShaderCompiler.compileNormalCode","away3d/materials/compilation/ShaderCompiler.hx",379,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_387_compileUVCode,"away3d.materials.compilation.ShaderCompiler","compileUVCode",0x80008c93,"away3d.materials.compilation.ShaderCompiler.compileUVCode","away3d/materials/compilation/ShaderCompiler.hx",387,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_417_compileSecondaryUVCode,"away3d.materials.compilation.ShaderCompiler","compileSecondaryUVCode",0x9df4fd7d,"away3d.materials.compilation.ShaderCompiler.compileSecondaryUVCode","away3d/materials/compilation/ShaderCompiler.hx",417,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_442_compileGlobalPositionCode,"away3d.materials.compilation.ShaderCompiler","compileGlobalPositionCode",0x8d95d47e,"away3d.materials.compilation.ShaderCompiler.compileGlobalPositionCode","away3d/materials/compilation/ShaderCompiler.hx",442,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_463_compileProjectionCode,"away3d.materials.compilation.ShaderCompiler","compileProjectionCode",0x3a257ae1,"away3d.materials.compilation.ShaderCompiler.compileProjectionCode","away3d/materials/compilation/ShaderCompiler.hx",463,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_482_compileFragmentOutput,"away3d.materials.compilation.ShaderCompiler","compileFragmentOutput",0xfb87c076,"away3d.materials.compilation.ShaderCompiler.compileFragmentOutput","away3d/materials/compilation/ShaderCompiler.hx",482,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_491_initRegisterIndices,"away3d.materials.compilation.ShaderCompiler","initRegisterIndices",0xc7325e06,"away3d.materials.compilation.ShaderCompiler.initRegisterIndices","away3d/materials/compilation/ShaderCompiler.hx",491,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_510_initLightData,"away3d.materials.compilation.ShaderCompiler","initLightData",0x801adba2,"away3d.materials.compilation.ShaderCompiler.initLightData","away3d/materials/compilation/ShaderCompiler.hx",510,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_528_createCommons,"away3d.materials.compilation.ShaderCompiler","createCommons",0xb354cbfe,"away3d.materials.compilation.ShaderCompiler.createCommons","away3d/materials/compilation/ShaderCompiler.hx",528,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_537_calculateDependencies,"away3d.materials.compilation.ShaderCompiler","calculateDependencies",0x99aa1b21,"away3d.materials.compilation.ShaderCompiler.calculateDependencies","away3d/materials/compilation/ShaderCompiler.hx",537,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_569_setupAndCountMethodDependencies,"away3d.materials.compilation.ShaderCompiler","setupAndCountMethodDependencies",0x2222e711,"away3d.materials.compilation.ShaderCompiler.setupAndCountMethodDependencies","away3d/materials/compilation/ShaderCompiler.hx",569,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_578_setupMethod,"away3d.materials.compilation.ShaderCompiler","setupMethod",0x2a440770,"away3d.materials.compilation.ShaderCompiler.setupMethod","away3d/materials/compilation/ShaderCompiler.hx",578,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_597_get_commonsDataIndex,"away3d.materials.compilation.ShaderCompiler","get_commonsDataIndex",0x981dab17,"away3d.materials.compilation.ShaderCompiler.get_commonsDataIndex","away3d/materials/compilation/ShaderCompiler.hx",597,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_604_updateMethodRegisters,"away3d.materials.compilation.ShaderCompiler","updateMethodRegisters",0x7b740e38,"away3d.materials.compilation.ShaderCompiler.updateMethodRegisters","away3d/materials/compilation/ShaderCompiler.hx",604,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_627_get_numUsedVertexConstants,"away3d.materials.compilation.ShaderCompiler","get_numUsedVertexConstants",0x2841f5ff,"away3d.materials.compilation.ShaderCompiler.get_numUsedVertexConstants","away3d/materials/compilation/ShaderCompiler.hx",627,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_636_get_numUsedFragmentConstants,"away3d.materials.compilation.ShaderCompiler","get_numUsedFragmentConstants",0x5ce64913,"away3d.materials.compilation.ShaderCompiler.get_numUsedFragmentConstants","away3d/materials/compilation/ShaderCompiler.hx",636,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_645_get_numUsedStreams,"away3d.materials.compilation.ShaderCompiler","get_numUsedStreams",0xc03e4f67,"away3d.materials.compilation.ShaderCompiler.get_numUsedStreams","away3d/materials/compilation/ShaderCompiler.hx",645,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_653_get_numUsedTextures,"away3d.materials.compilation.ShaderCompiler","get_numUsedTextures",0x561a8944,"away3d.materials.compilation.ShaderCompiler.get_numUsedTextures","away3d/materials/compilation/ShaderCompiler.hx",653,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_661_get_numUsedVaryings,"away3d.materials.compilation.ShaderCompiler","get_numUsedVaryings",0x9514b80f,"away3d.materials.compilation.ShaderCompiler.get_numUsedVaryings","away3d/materials/compilation/ShaderCompiler.hx",661,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_669_usesLightsForSpecular,"away3d.materials.compilation.ShaderCompiler","usesLightsForSpecular",0x817b97d5,"away3d.materials.compilation.ShaderCompiler.usesLightsForSpecular","away3d/materials/compilation/ShaderCompiler.hx",669,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_677_usesLightsForDiffuse,"away3d.materials.compilation.ShaderCompiler","usesLightsForDiffuse",0x9e966890,"away3d.materials.compilation.ShaderCompiler.usesLightsForDiffuse","away3d/materials/compilation/ShaderCompiler.hx",677,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_684_dispose,"away3d.materials.compilation.ShaderCompiler","dispose",0xed2a71d1,"away3d.materials.compilation.ShaderCompiler.dispose","away3d/materials/compilation/ShaderCompiler.hx",684,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_695_cleanUpMethods,"away3d.materials.compilation.ShaderCompiler","cleanUpMethods",0x3bdd0f9c,"away3d.materials.compilation.ShaderCompiler.cleanUpMethods","away3d/materials/compilation/ShaderCompiler.hx",695,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_723_get_specularLightSources,"away3d.materials.compilation.ShaderCompiler","get_specularLightSources",0x8645fc7c,"away3d.materials.compilation.ShaderCompiler.get_specularLightSources","away3d/materials/compilation/ShaderCompiler.hx",723,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_727_set_specularLightSources,"away3d.materials.compilation.ShaderCompiler","set_specularLightSources",0x99207df0,"away3d.materials.compilation.ShaderCompiler.set_specularLightSources","away3d/materials/compilation/ShaderCompiler.hx",727,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_740_get_diffuseLightSources,"away3d.materials.compilation.ShaderCompiler","get_diffuseLightSources",0xa04ee14d,"away3d.materials.compilation.ShaderCompiler.get_diffuseLightSources","away3d/materials/compilation/ShaderCompiler.hx",740,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_744_set_diffuseLightSources,"away3d.materials.compilation.ShaderCompiler","set_diffuseLightSources",0xa2b04a59,"away3d.materials.compilation.ShaderCompiler.set_diffuseLightSources","away3d/materials/compilation/ShaderCompiler.hx",744,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_754_usesProbesForSpecular,"away3d.materials.compilation.ShaderCompiler","usesProbesForSpecular",0x8f82012f,"away3d.materials.compilation.ShaderCompiler.usesProbesForSpecular","away3d/materials/compilation/ShaderCompiler.hx",754,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_762_usesProbesForDiffuse,"away3d.materials.compilation.ShaderCompiler","usesProbesForDiffuse",0x90dfe876,"away3d.materials.compilation.ShaderCompiler.usesProbesForDiffuse","away3d/materials/compilation/ShaderCompiler.hx",762,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_770_usesProbes,"away3d.materials.compilation.ShaderCompiler","usesProbes",0xd12610bd,"away3d.materials.compilation.ShaderCompiler.usesProbes","away3d/materials/compilation/ShaderCompiler.hx",770,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_778_get_uvBufferIndex,"away3d.materials.compilation.ShaderCompiler","get_uvBufferIndex",0x0bbed81a,"away3d.materials.compilation.ShaderCompiler.get_uvBufferIndex","away3d/materials/compilation/ShaderCompiler.hx",778,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_786_get_uvTransformIndex,"away3d.materials.compilation.ShaderCompiler","get_uvTransformIndex",0x0baed4de,"away3d.materials.compilation.ShaderCompiler.get_uvTransformIndex","away3d/materials/compilation/ShaderCompiler.hx",786,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_794_get_uvTransformIndex2,"away3d.materials.compilation.ShaderCompiler","get_uvTransformIndex2",0x2d4b6d94,"away3d.materials.compilation.ShaderCompiler.get_uvTransformIndex2","away3d/materials/compilation/ShaderCompiler.hx",794,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_802_get_secondaryUVBufferIndex,"away3d.materials.compilation.ShaderCompiler","get_secondaryUVBufferIndex",0xf67f84f4,"away3d.materials.compilation.ShaderCompiler.get_secondaryUVBufferIndex","away3d/materials/compilation/ShaderCompiler.hx",802,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_810_get_normalBufferIndex,"away3d.materials.compilation.ShaderCompiler","get_normalBufferIndex",0x9c992e94,"away3d.materials.compilation.ShaderCompiler.get_normalBufferIndex","away3d/materials/compilation/ShaderCompiler.hx",810,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_818_get_tangentBufferIndex,"away3d.materials.compilation.ShaderCompiler","get_tangentBufferIndex",0x5377b584,"away3d.materials.compilation.ShaderCompiler.get_tangentBufferIndex","away3d/materials/compilation/ShaderCompiler.hx",818,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_826_get_lightFragmentConstantIndex,"away3d.materials.compilation.ShaderCompiler","get_lightFragmentConstantIndex",0x779737bf,"away3d.materials.compilation.ShaderCompiler.get_lightFragmentConstantIndex","away3d/materials/compilation/ShaderCompiler.hx",826,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_834_get_cameraPositionIndex,"away3d.materials.compilation.ShaderCompiler","get_cameraPositionIndex",0x6fff078d,"away3d.materials.compilation.ShaderCompiler.get_cameraPositionIndex","away3d/materials/compilation/ShaderCompiler.hx",834,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_842_get_sceneMatrixIndex,"away3d.materials.compilation.ShaderCompiler","get_sceneMatrixIndex",0x4eae8fbc,"away3d.materials.compilation.ShaderCompiler.get_sceneMatrixIndex","away3d/materials/compilation/ShaderCompiler.hx",842,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_850_get_sceneNormalMatrixIndex,"away3d.materials.compilation.ShaderCompiler","get_sceneNormalMatrixIndex",0xec317b15,"away3d.materials.compilation.ShaderCompiler.get_sceneNormalMatrixIndex","away3d/materials/compilation/ShaderCompiler.hx",850,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_858_get_probeWeightsIndex,"away3d.materials.compilation.ShaderCompiler","get_probeWeightsIndex",0x44587bf0,"away3d.materials.compilation.ShaderCompiler.get_probeWeightsIndex","away3d/materials/compilation/ShaderCompiler.hx",858,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_866_get_vertexCode,"away3d.materials.compilation.ShaderCompiler","get_vertexCode",0x65833c08,"away3d.materials.compilation.ShaderCompiler.get_vertexCode","away3d/materials/compilation/ShaderCompiler.hx",866,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_874_get_fragmentCode,"away3d.materials.compilation.ShaderCompiler","get_fragmentCode",0xddfdaa34,"away3d.materials.compilation.ShaderCompiler.get_fragmentCode","away3d/materials/compilation/ShaderCompiler.hx",874,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_882_get_fragmentLightCode,"away3d.materials.compilation.ShaderCompiler","get_fragmentLightCode",0x7d027ebc,"away3d.materials.compilation.ShaderCompiler.get_fragmentLightCode","away3d/materials/compilation/ShaderCompiler.hx",882,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_890_get_fragmentPostLightCode,"away3d.materials.compilation.ShaderCompiler","get_fragmentPostLightCode",0x35fe8ebc,"away3d.materials.compilation.ShaderCompiler.get_fragmentPostLightCode","away3d/materials/compilation/ShaderCompiler.hx",890,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_898_get_shadedTarget,"away3d.materials.compilation.ShaderCompiler","get_shadedTarget",0x892f56df,"away3d.materials.compilation.ShaderCompiler.get_shadedTarget","away3d/materials/compilation/ShaderCompiler.hx",898,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_906_get_numPointLights,"away3d.materials.compilation.ShaderCompiler","get_numPointLights",0xf334db7e,"away3d.materials.compilation.ShaderCompiler.get_numPointLights","away3d/materials/compilation/ShaderCompiler.hx",906,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_910_set_numPointLights,"away3d.materials.compilation.ShaderCompiler","set_numPointLights",0xcfe40df2,"away3d.materials.compilation.ShaderCompiler.set_numPointLights","away3d/materials/compilation/ShaderCompiler.hx",910,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_920_get_numDirectionalLights,"away3d.materials.compilation.ShaderCompiler","get_numDirectionalLights",0x8f6c5658,"away3d.materials.compilation.ShaderCompiler.get_numDirectionalLights","away3d/materials/compilation/ShaderCompiler.hx",920,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_924_set_numDirectionalLights,"away3d.materials.compilation.ShaderCompiler","set_numDirectionalLights",0xa246d7cc,"away3d.materials.compilation.ShaderCompiler.set_numDirectionalLights","away3d/materials/compilation/ShaderCompiler.hx",924,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_934_get_numLightProbes,"away3d.materials.compilation.ShaderCompiler","get_numLightProbes",0x3e38a4ea,"away3d.materials.compilation.ShaderCompiler.get_numLightProbes","away3d/materials/compilation/ShaderCompiler.hx",934,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_938_set_numLightProbes,"away3d.materials.compilation.ShaderCompiler","set_numLightProbes",0x1ae7d75e,"away3d.materials.compilation.ShaderCompiler.set_numLightProbes","away3d/materials/compilation/ShaderCompiler.hx",938,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_948_get_usingSpecularMethod,"away3d.materials.compilation.ShaderCompiler","get_usingSpecularMethod",0x27c28a31,"away3d.materials.compilation.ShaderCompiler.get_usingSpecularMethod","away3d/materials/compilation/ShaderCompiler.hx",948,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_956_get_animatableAttributes,"away3d.materials.compilation.ShaderCompiler","get_animatableAttributes",0xad58036c,"away3d.materials.compilation.ShaderCompiler.get_animatableAttributes","away3d/materials/compilation/ShaderCompiler.hx",956,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_964_get_animationTargetRegisters,"away3d.materials.compilation.ShaderCompiler","get_animationTargetRegisters",0xb2731412,"away3d.materials.compilation.ShaderCompiler.get_animationTargetRegisters","away3d/materials/compilation/ShaderCompiler.hx",964,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_972_get_usesNormals,"away3d.materials.compilation.ShaderCompiler","get_usesNormals",0x39ed5249,"away3d.materials.compilation.ShaderCompiler.get_usesNormals","away3d/materials/compilation/ShaderCompiler.hx",972,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_980_usesLights,"away3d.materials.compilation.ShaderCompiler","usesLights",0x03d84c57,"away3d.materials.compilation.ShaderCompiler.usesLights","away3d/materials/compilation/ShaderCompiler.hx",980,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_987_compileMethods,"away3d.materials.compilation.ShaderCompiler","compileMethods",0x65336e4d,"away3d.materials.compilation.ShaderCompiler.compileMethods","away3d/materials/compilation/ShaderCompiler.hx",987,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_1030_get_lightProbeDiffuseIndices,"away3d.materials.compilation.ShaderCompiler","get_lightProbeDiffuseIndices",0x53d21196,"away3d.materials.compilation.ShaderCompiler.get_lightProbeDiffuseIndices","away3d/materials/compilation/ShaderCompiler.hx",1030,0xd7b1757b)
HX_LOCAL_STACK_FRAME(_hx_pos_2402cb372fc9253a_1038_get_lightProbeSpecularIndices,"away3d.materials.compilation.ShaderCompiler","get_lightProbeSpecularIndices",0xc1abcdd3,"away3d.materials.compilation.ShaderCompiler.get_lightProbeSpecularIndices","away3d/materials/compilation/ShaderCompiler.hx",1038,0xd7b1757b)
namespace away3d{
namespace materials{
namespace compilation{

void ShaderCompiler_obj::__construct(::String profile){
            	HX_GC_STACKFRAME(&_hx_pos_2402cb372fc9253a_19_new)
HXLINE( 103)		this->_probeWeightsIndex = -1;
HXLINE( 102)		this->_cameraPositionIndex = -1;
HXLINE( 101)		this->_sceneNormalMatrixIndex = -1;
HXLINE( 100)		this->_sceneMatrixIndex = -1;
HXLINE(  99)		this->_lightFragmentConstantIndex = -1;
HXLINE(  98)		this->_tangentBufferIndex = -1;
HXLINE(  97)		this->_normalBufferIndex = -1;
HXLINE(  96)		this->_secondaryUVBufferIndex = -1;
HXLINE(  95)		this->_uvTransformIndex2 = -1;
HXLINE(  94)		this->_uvTransformIndex = -1;
HXLINE(  93)		this->_uvBufferIndex = -1;
HXLINE(  86)		this->_commonsDataIndex = -1;
HXLINE(  75)		this->_preserveAlpha = true;
HXLINE( 132)		this->_sharedRegisters =  ::away3d::materials::compilation::ShaderRegisterData_obj::__alloc( HX_CTX );
HXLINE( 133)		this->_dependencyCounter =  ::away3d::materials::compilation::MethodDependencyCounter_obj::__alloc( HX_CTX );
HXLINE( 134)		this->_profile = profile;
HXLINE( 135)		this->initRegisterCache(profile);
            	}

Dynamic ShaderCompiler_obj::__CreateEmpty() { return new ShaderCompiler_obj; }

void *ShaderCompiler_obj::_hx_vtable = 0;

Dynamic ShaderCompiler_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShaderCompiler_obj > _hx_result = new ShaderCompiler_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ShaderCompiler_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x05340f9a;
}

bool ShaderCompiler_obj::get_enableLightFallOff(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_144_get_enableLightFallOff)
HXDLIN( 144)		return this->_enableLightFallOff;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_enableLightFallOff,return )

bool ShaderCompiler_obj::set_enableLightFallOff(bool value){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_148_set_enableLightFallOff)
HXLINE( 149)		this->_enableLightFallOff = value;
HXLINE( 150)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderCompiler_obj,set_enableLightFallOff,return )

bool ShaderCompiler_obj::get_needUVAnimation(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_158_get_needUVAnimation)
HXDLIN( 158)		return this->_needUVAnimation;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_needUVAnimation,return )

::String ShaderCompiler_obj::get_UVTarget(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_166_get_UVTarget)
HXDLIN( 166)		return this->_UVTarget;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_UVTarget,return )

::String ShaderCompiler_obj::get_UVSource(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_174_get_UVSource)
HXDLIN( 174)		return this->_UVSource;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_UVSource,return )

bool ShaderCompiler_obj::get_forceSeperateMVP(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_184_get_forceSeperateMVP)
HXDLIN( 184)		return this->_forceSeperateMVP;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_forceSeperateMVP,return )

bool ShaderCompiler_obj::set_forceSeperateMVP(bool value){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_188_set_forceSeperateMVP)
HXLINE( 189)		this->_forceSeperateMVP = value;
HXLINE( 190)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderCompiler_obj,set_forceSeperateMVP,return )

void ShaderCompiler_obj::initRegisterCache(::String profile){
            	HX_GC_STACKFRAME(&_hx_pos_2402cb372fc9253a_198_initRegisterCache)
HXLINE( 199)		this->_registerCache =  ::away3d::materials::compilation::ShaderRegisterCache_obj::__alloc( HX_CTX ,profile);
HXLINE( 200)		this->_registerCache->set_vertexAttributesOffset(1);
HXLINE( 201)		this->_registerCache->reset();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderCompiler_obj,initRegisterCache,(void))

bool ShaderCompiler_obj::get_animateUVs(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_209_get_animateUVs)
HXDLIN( 209)		return this->_animateUVs;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_animateUVs,return )

bool ShaderCompiler_obj::set_animateUVs(bool value){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_213_set_animateUVs)
HXLINE( 214)		this->_animateUVs = value;
HXLINE( 215)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderCompiler_obj,set_animateUVs,return )

bool ShaderCompiler_obj::get_animateUVs2(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_223_get_animateUVs2)
HXDLIN( 223)		return this->_animateUVs2;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_animateUVs2,return )

bool ShaderCompiler_obj::set_animateUVs2(bool value){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_227_set_animateUVs2)
HXLINE( 228)		this->_animateUVs2 = value;
HXLINE( 229)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderCompiler_obj,set_animateUVs2,return )

bool ShaderCompiler_obj::get_alphaPremultiplied(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_238_get_alphaPremultiplied)
HXDLIN( 238)		return this->_alphaPremultiplied;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_alphaPremultiplied,return )

bool ShaderCompiler_obj::set_alphaPremultiplied(bool value){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_242_set_alphaPremultiplied)
HXLINE( 243)		this->_alphaPremultiplied = value;
HXLINE( 244)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderCompiler_obj,set_alphaPremultiplied,return )

bool ShaderCompiler_obj::get_preserveAlpha(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_252_get_preserveAlpha)
HXDLIN( 252)		return this->_preserveAlpha;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_preserveAlpha,return )

bool ShaderCompiler_obj::set_preserveAlpha(bool value){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_256_set_preserveAlpha)
HXLINE( 257)		this->_preserveAlpha = value;
HXLINE( 258)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderCompiler_obj,set_preserveAlpha,return )

void ShaderCompiler_obj::setTextureSampling(bool smooth,bool repeat,bool mipmap, ::Dynamic anisotropy){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_268_setTextureSampling)
HXLINE( 269)		this->_smooth = smooth;
HXLINE( 270)		this->_repeat = repeat;
HXLINE( 271)		this->_mipmap = mipmap;
HXLINE( 272)		this->_anisotropy = anisotropy;
            	}


HX_DEFINE_DYNAMIC_FUNC4(ShaderCompiler_obj,setTextureSampling,(void))

void ShaderCompiler_obj::setConstantDataBuffers( ::openfl::_Vector::FloatVector vertexConstantData, ::openfl::_Vector::FloatVector fragmentConstantData){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_281_setConstantDataBuffers)
HXLINE( 282)		this->_vertexConstantData = vertexConstantData;
HXLINE( 283)		this->_fragmentConstantData = fragmentConstantData;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShaderCompiler_obj,setConstantDataBuffers,(void))

 ::away3d::materials::methods::ShaderMethodSetup ShaderCompiler_obj::get_methodSetup(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_291_get_methodSetup)
HXDLIN( 291)		return this->_methodSetup;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_methodSetup,return )

 ::away3d::materials::methods::ShaderMethodSetup ShaderCompiler_obj::set_methodSetup( ::away3d::materials::methods::ShaderMethodSetup value){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_295_set_methodSetup)
HXLINE( 296)		this->_methodSetup = value;
HXLINE( 297)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderCompiler_obj,set_methodSetup,return )

void ShaderCompiler_obj::compile(){
            	HX_GC_STACKFRAME(&_hx_pos_2402cb372fc9253a_304_compile)
HXLINE( 305)		this->initRegisterIndices();
HXLINE( 306)		this->initLightData();
HXLINE( 308)		::Array< ::String > array = ::Array_obj< ::String >::fromData( _hx_array_data_3c04cfa0_24,1);
HXDLIN( 308)		int length = null();
HXDLIN( 308)		bool fixed = null();
HXDLIN( 308)		::Array< ::String > array1 = null();
HXDLIN( 308)		 ::openfl::_Vector::ObjectVector vector =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,array1,true);
HXDLIN( 308)		{
HXLINE( 308)			int _g = 0;
HXDLIN( 308)			int _g1 = array->length;
HXDLIN( 308)			while((_g < _g1)){
HXLINE( 308)				_g = (_g + 1);
HXDLIN( 308)				int i = (_g - 1);
HXDLIN( 308)				vector->set(i,array->__get(i));
            			}
            		}
HXDLIN( 308)		this->_animatableAttributes = vector;
HXLINE( 309)		::Array< ::String > array2 = ::Array_obj< ::String >::fromData( _hx_array_data_3c04cfa0_25,1);
HXDLIN( 309)		int length1 = null();
HXDLIN( 309)		bool fixed1 = null();
HXDLIN( 309)		::Array< ::String > array3 = null();
HXDLIN( 309)		 ::openfl::_Vector::ObjectVector vector1 =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length1,fixed1,array3,true);
HXDLIN( 309)		{
HXLINE( 309)			int _g2 = 0;
HXDLIN( 309)			int _g3 = array2->length;
HXDLIN( 309)			while((_g2 < _g3)){
HXLINE( 309)				_g2 = (_g2 + 1);
HXDLIN( 309)				int i = (_g2 - 1);
HXDLIN( 309)				vector1->set(i,array2->__get(i));
            			}
            		}
HXDLIN( 309)		this->_animationTargetRegisters = vector1;
HXLINE( 310)		this->_vertexCode = HX_("",00,00,00,00);
HXLINE( 311)		this->_fragmentCode = HX_("",00,00,00,00);
HXLINE( 313)		this->_sharedRegisters->localPosition = this->_registerCache->getFreeVertexVectorTemp();
HXLINE( 314)		this->_registerCache->addVertexTempUsages(this->_sharedRegisters->localPosition,1);
HXLINE( 316)		this->createCommons();
HXLINE( 317)		this->calculateDependencies();
HXLINE( 318)		this->updateMethodRegisters();
HXLINE( 320)		{
HXLINE( 321)			this->_registerCache->getFreeVertexConstant();
HXDLIN( 321)			this->_registerCache->getFreeVertexConstant();
HXDLIN( 321)			this->_registerCache->getFreeVertexConstant();
HXDLIN( 321)			this->_registerCache->getFreeVertexConstant();
            		}
HXLINE( 323)		this->createNormalRegisters();
HXLINE( 324)		bool _hx_tmp;
HXDLIN( 324)		if ((this->_dependencyCounter->get_globalPosDependencies() <= 0)) {
HXLINE( 324)			_hx_tmp = this->_forceSeperateMVP;
            		}
            		else {
HXLINE( 324)			_hx_tmp = true;
            		}
HXDLIN( 324)		if (_hx_tmp) {
HXLINE( 325)			this->compileGlobalPositionCode();
            		}
HXLINE( 326)		this->compileProjectionCode();
HXLINE( 327)		this->compileMethodsCode();
HXLINE( 328)		this->compileFragmentOutput();
HXLINE( 329)		this->_fragmentPostLightCode = this->get_fragmentCode();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,compile,(void))

void ShaderCompiler_obj::createNormalRegisters(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_336_createNormalRegisters)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,createNormalRegisters,(void))

void ShaderCompiler_obj::compileMethodsCode(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_344_compileMethodsCode)
HXLINE( 345)		if ((this->_dependencyCounter->get_uvDependencies() > 0)) {
HXLINE( 346)			this->compileUVCode();
            		}
HXLINE( 347)		if ((this->_dependencyCounter->get_secondaryUVDependencies() > 0)) {
HXLINE( 348)			this->compileSecondaryUVCode();
            		}
HXLINE( 349)		if ((this->_dependencyCounter->get_normalDependencies() > 0)) {
HXLINE( 350)			this->compileNormalCode();
            		}
HXLINE( 351)		if ((this->_dependencyCounter->get_viewDirDependencies() > 0)) {
HXLINE( 352)			this->compileViewDirCode();
            		}
HXLINE( 353)		this->compileLightingCode();
HXLINE( 354)		this->_fragmentLightCode = this->_fragmentCode;
HXLINE( 355)		this->_fragmentCode = HX_("",00,00,00,00);
HXLINE( 356)		this->compileMethods();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,compileMethodsCode,(void))

void ShaderCompiler_obj::compileLightingCode(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_363_compileLightingCode)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,compileLightingCode,(void))

void ShaderCompiler_obj::compileViewDirCode(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_371_compileViewDirCode)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,compileViewDirCode,(void))

void ShaderCompiler_obj::compileNormalCode(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_379_compileNormalCode)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,compileNormalCode,(void))

void ShaderCompiler_obj::compileUVCode(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_387_compileUVCode)
HXLINE( 388)		 ::away3d::materials::compilation::ShaderRegisterElement uvAttributeReg = this->_registerCache->getFreeVertexAttribute();
HXLINE( 389)		this->_uvBufferIndex = uvAttributeReg->get_index();
HXLINE( 391)		 ::away3d::materials::compilation::ShaderRegisterElement varying = this->_registerCache->getFreeVarying();
HXLINE( 393)		this->_sharedRegisters->uvVarying = varying;
HXLINE( 395)		if (this->get_animateUVs()) {
HXLINE( 398)			 ::away3d::materials::compilation::ShaderRegisterElement uvTransform1 = this->_registerCache->getFreeVertexConstant();
HXLINE( 399)			 ::away3d::materials::compilation::ShaderRegisterElement uvTransform2 = this->_registerCache->getFreeVertexConstant();
HXLINE( 400)			this->_uvTransformIndex = (uvTransform1->get_index() * 4);
HXLINE( 402)			 ::away3d::materials::compilation::ShaderCompiler _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 402)			::String _hx_tmp1 = _hx_tmp->_vertexCode;
HXDLIN( 402)			::String _hx_tmp2 = ((HX_("dp4 ",f8,7f,6e,42) + ::Std_obj::string(varying)) + HX_(".x, ",7e,05,c3,1e));
HXDLIN( 402)			::String _hx_tmp3 = ((_hx_tmp2 + ::Std_obj::string(uvAttributeReg)) + HX_(", ",74,26,00,00));
HXDLIN( 402)			::String _hx_tmp4 = (((_hx_tmp3 + ::Std_obj::string(uvTransform1)) + HX_("\n",0a,00,00,00)) + HX_("dp4 ",f8,7f,6e,42));
HXDLIN( 402)			::String _hx_tmp5 = ((_hx_tmp4 + ::Std_obj::string(varying)) + HX_(".y, ",bf,c7,c3,1e));
HXDLIN( 402)			::String _hx_tmp6 = ((_hx_tmp5 + ::Std_obj::string(uvAttributeReg)) + HX_(", ",74,26,00,00));
HXDLIN( 402)			::String _hx_tmp7 = (((_hx_tmp6 + ::Std_obj::string(uvTransform2)) + HX_("\n",0a,00,00,00)) + HX_("mov ",cc,e2,60,48));
HXDLIN( 402)			::String _hx_tmp8 = ((_hx_tmp7 + ::Std_obj::string(varying)) + HX_(".zw, ",9f,29,6d,cd));
HXDLIN( 402)			_hx_tmp->_vertexCode = (_hx_tmp1 + ((_hx_tmp8 + ::Std_obj::string(uvAttributeReg)) + HX_(".zw \n",15,1f,6d,cd)));
            		}
            		else {
HXLINE( 406)			this->_uvTransformIndex = -1;
HXLINE( 407)			this->_needUVAnimation = true;
HXLINE( 408)			this->_UVTarget = varying->toString();
HXLINE( 409)			this->_UVSource = uvAttributeReg->toString();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,compileUVCode,(void))

void ShaderCompiler_obj::compileSecondaryUVCode(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_417_compileSecondaryUVCode)
HXLINE( 418)		 ::away3d::materials::compilation::ShaderRegisterElement uvAttributeReg = this->_registerCache->getFreeVertexAttribute();
HXLINE( 419)		this->_secondaryUVBufferIndex = uvAttributeReg->get_index();
HXLINE( 420)		 ::away3d::materials::compilation::ShaderRegisterElement varying = this->_registerCache->getFreeVarying();
HXLINE( 421)		this->_sharedRegisters->secondaryUVVarying = varying;
HXLINE( 423)		if (this->get_animateUVs2()) {
HXLINE( 426)			 ::away3d::materials::compilation::ShaderRegisterElement uvTransformX = this->_registerCache->getFreeVertexConstant();
HXLINE( 427)			 ::away3d::materials::compilation::ShaderRegisterElement uvTransformY = this->_registerCache->getFreeVertexConstant();
HXLINE( 428)			this->_uvTransformIndex2 = (uvTransformX->get_index() * 4);
HXLINE( 429)			 ::away3d::materials::compilation::ShaderCompiler _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 429)			::String _hx_tmp1 = _hx_tmp->_vertexCode;
HXDLIN( 429)			::String _hx_tmp2 = ((HX_("dp4 ",f8,7f,6e,42) + ::Std_obj::string(varying)) + HX_(".x, ",7e,05,c3,1e));
HXDLIN( 429)			::String _hx_tmp3 = ((_hx_tmp2 + ::Std_obj::string(uvAttributeReg)) + HX_(", ",74,26,00,00));
HXDLIN( 429)			_hx_tmp->_vertexCode = (_hx_tmp1 + ((_hx_tmp3 + ::Std_obj::string(uvTransformX)) + HX_("\n",0a,00,00,00)));
HXLINE( 430)			 ::away3d::materials::compilation::ShaderCompiler _hx_tmp4 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 430)			::String _hx_tmp5 = _hx_tmp4->_vertexCode;
HXDLIN( 430)			::String _hx_tmp6 = ((HX_("dp4 ",f8,7f,6e,42) + ::Std_obj::string(varying)) + HX_(".y, ",bf,c7,c3,1e));
HXDLIN( 430)			::String _hx_tmp7 = ((_hx_tmp6 + ::Std_obj::string(uvAttributeReg)) + HX_(", ",74,26,00,00));
HXDLIN( 430)			_hx_tmp4->_vertexCode = (_hx_tmp5 + ((_hx_tmp7 + ::Std_obj::string(uvTransformY)) + HX_("\n",0a,00,00,00)));
HXLINE( 431)			 ::away3d::materials::compilation::ShaderCompiler _hx_tmp8 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 431)			::String _hx_tmp9 = _hx_tmp8->_vertexCode;
HXDLIN( 431)			::String _hx_tmp10 = ((HX_("mov ",cc,e2,60,48) + ::Std_obj::string(varying)) + HX_(".zw, ",9f,29,6d,cd));
HXDLIN( 431)			_hx_tmp8->_vertexCode = (_hx_tmp9 + (((_hx_tmp10 + ::Std_obj::string(uvAttributeReg)) + HX_(".zw",6b,52,23,00)) + HX_("\n",0a,00,00,00)));
            		}
            		else {
HXLINE( 433)			this->_uvTransformIndex2 = -1;
HXLINE( 434)			 ::away3d::materials::compilation::ShaderCompiler _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 434)			::String _hx_tmp1 = _hx_tmp->_vertexCode;
HXDLIN( 434)			::String _hx_tmp2 = ((HX_("mov ",cc,e2,60,48) + ::Std_obj::string(varying)) + HX_(", ",74,26,00,00));
HXDLIN( 434)			_hx_tmp->_vertexCode = (_hx_tmp1 + ((_hx_tmp2 + ::Std_obj::string(uvAttributeReg)) + HX_("\n",0a,00,00,00)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,compileSecondaryUVCode,(void))

void ShaderCompiler_obj::compileGlobalPositionCode(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_442_compileGlobalPositionCode)
HXLINE( 443)		this->_sharedRegisters->globalPositionVertex = this->_registerCache->getFreeVertexVectorTemp();
HXLINE( 444)		 ::away3d::materials::compilation::ShaderRegisterCache _hx_tmp = this->_registerCache;
HXDLIN( 444)		 ::away3d::materials::compilation::ShaderRegisterElement _hx_tmp1 = this->_sharedRegisters->globalPositionVertex;
HXDLIN( 444)		_hx_tmp->addVertexTempUsages(_hx_tmp1,this->_dependencyCounter->get_globalPosDependencies());
HXLINE( 445)		 ::away3d::materials::compilation::ShaderRegisterElement positionMatrixReg = this->_registerCache->getFreeVertexConstant();
HXLINE( 446)		this->_registerCache->getFreeVertexConstant();
HXLINE( 447)		this->_registerCache->getFreeVertexConstant();
HXLINE( 448)		this->_registerCache->getFreeVertexConstant();
HXLINE( 449)		this->_sceneMatrixIndex = (positionMatrixReg->get_index() * 4);
HXLINE( 451)		 ::away3d::materials::compilation::ShaderCompiler _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 451)		::String _hx_tmp3 = _hx_tmp2->_vertexCode;
HXDLIN( 451)		::String _hx_tmp4 = ((HX_("m44 ",53,e4,33,48) + ::Std_obj::string(this->_sharedRegisters->globalPositionVertex)) + HX_(", ",74,26,00,00));
HXDLIN( 451)		::String _hx_tmp5 = ((_hx_tmp4 + ::Std_obj::string(this->_sharedRegisters->localPosition)) + HX_(", ",74,26,00,00));
HXDLIN( 451)		_hx_tmp2->_vertexCode = (_hx_tmp3 + ((_hx_tmp5 + ::Std_obj::string(positionMatrixReg)) + HX_("\n",0a,00,00,00)));
HXLINE( 453)		if (this->_dependencyCounter->get_usesGlobalPosFragment()) {
HXLINE( 454)			this->_sharedRegisters->globalPositionVarying = this->_registerCache->getFreeVarying();
HXLINE( 455)			 ::away3d::materials::compilation::ShaderCompiler _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 455)			::String _hx_tmp1 = _hx_tmp->_vertexCode;
HXDLIN( 455)			::String _hx_tmp2 = ((HX_("mov ",cc,e2,60,48) + ::Std_obj::string(this->_sharedRegisters->globalPositionVarying)) + HX_(", ",74,26,00,00));
HXDLIN( 455)			_hx_tmp->_vertexCode = (_hx_tmp1 + ((_hx_tmp2 + ::Std_obj::string(this->_sharedRegisters->globalPositionVertex)) + HX_("\n",0a,00,00,00)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,compileGlobalPositionCode,(void))

void ShaderCompiler_obj::compileProjectionCode(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_463_compileProjectionCode)
HXLINE( 464)		::String pos;
HXDLIN( 464)		bool pos1;
HXDLIN( 464)		if ((this->_dependencyCounter->get_globalPosDependencies() <= 0)) {
HXLINE( 464)			pos1 = this->_forceSeperateMVP;
            		}
            		else {
HXLINE( 464)			pos1 = true;
            		}
HXDLIN( 464)		if (pos1) {
HXLINE( 464)			pos = this->_sharedRegisters->globalPositionVertex->toString();
            		}
            		else {
HXLINE( 464)			pos = ( (::String)(this->_animationTargetRegisters->get(0)) );
            		}
HXLINE( 465)		::String code;
HXLINE( 467)		if ((this->_dependencyCounter->get_projectionDependencies() > 0)) {
HXLINE( 468)			this->_sharedRegisters->projectionFragment = this->_registerCache->getFreeVarying();
HXLINE( 469)			code = ((((((HX_("m44 vt5, ",38,20,ee,ea) + pos) + HX_(", vc0\t\t\n",1b,91,e3,55)) + HX_("mov ",cc,e2,60,48)) + ::Std_obj::string(this->_sharedRegisters->projectionFragment)) + HX_(", vt5\n",67,d1,dd,52)) + HX_("mov op, vt5\n",14,d0,93,30));
            		}
            		else {
HXLINE( 473)			code = ((HX_("m44 op, ",a8,db,eb,4d) + pos) + HX_(", vc0\t\t\n",1b,91,e3,55));
            		}
HXLINE( 475)		 ::away3d::materials::compilation::ShaderCompiler _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 475)		_hx_tmp->_vertexCode = (_hx_tmp->_vertexCode + code);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,compileProjectionCode,(void))

void ShaderCompiler_obj::compileFragmentOutput(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_482_compileFragmentOutput)
HXLINE( 483)		 ::away3d::materials::compilation::ShaderCompiler _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 483)		::String _hx_tmp1 = _hx_tmp->_fragmentCode;
HXDLIN( 483)		::String _hx_tmp2 = ((HX_("mov ",cc,e2,60,48) + ::Std_obj::string(this->_registerCache->get_fragmentOutputRegister())) + HX_(", ",74,26,00,00));
HXDLIN( 483)		_hx_tmp->_fragmentCode = (_hx_tmp1 + ((_hx_tmp2 + ::Std_obj::string(this->_sharedRegisters->shadedTarget)) + HX_("\n",0a,00,00,00)));
HXLINE( 484)		this->_registerCache->removeFragmentTempUsage(this->_sharedRegisters->shadedTarget);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,compileFragmentOutput,(void))

void ShaderCompiler_obj::initRegisterIndices(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_491_initRegisterIndices)
HXLINE( 492)		this->_commonsDataIndex = -1;
HXLINE( 493)		this->_cameraPositionIndex = -1;
HXLINE( 494)		this->_uvBufferIndex = -1;
HXLINE( 495)		this->_uvTransformIndex = -1;
HXLINE( 496)		this->_uvTransformIndex2 = -1;
HXLINE( 497)		this->_secondaryUVBufferIndex = -1;
HXLINE( 498)		this->_normalBufferIndex = -1;
HXLINE( 499)		this->_tangentBufferIndex = -1;
HXLINE( 500)		this->_lightFragmentConstantIndex = -1;
HXLINE( 501)		this->_sceneMatrixIndex = -1;
HXLINE( 502)		this->_sceneNormalMatrixIndex = -1;
HXLINE( 503)		this->_probeWeightsIndex = -1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,initRegisterIndices,(void))

void ShaderCompiler_obj::initLightData(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_510_initLightData)
HXLINE( 511)		this->_numLights = (this->_numPointLights + this->_numDirectionalLights);
HXLINE( 512)		this->_numProbeRegisters = ::Math_obj::ceil((( (Float)(this->_numLightProbes) ) / ( (Float)(4) )));
HXLINE( 514)		if (::hx::IsNotNull( this->_methodSetup->_specularMethod )) {
HXLINE( 515)			this->_combinedLightSources = (this->_specularLightSources | this->_diffuseLightSources);
            		}
            		else {
HXLINE( 517)			this->_combinedLightSources = this->_diffuseLightSources;
            		}
HXLINE( 519)		bool _hx_tmp;
HXDLIN( 519)		if (::hx::IsNotNull( this->_methodSetup->_specularMethod )) {
HXLINE( 519)			if (!(this->usesLightsForSpecular())) {
HXLINE( 519)				_hx_tmp = this->usesProbesForSpecular();
            			}
            			else {
HXLINE( 519)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE( 519)			_hx_tmp = false;
            		}
HXDLIN( 519)		this->_usingSpecularMethod = _hx_tmp;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,initLightData,(void))

void ShaderCompiler_obj::createCommons(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_528_createCommons)
HXLINE( 529)		this->_sharedRegisters->commons = this->_registerCache->getFreeFragmentConstant();
HXLINE( 530)		this->_commonsDataIndex = (this->_sharedRegisters->commons->get_index() * 4);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,createCommons,(void))

void ShaderCompiler_obj::calculateDependencies(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_537_calculateDependencies)
HXLINE( 538)		this->_dependencyCounter->reset();
HXLINE( 540)		 ::openfl::_Vector::ObjectVector methods = this->_methodSetup->_methods;
HXLINE( 543)		this->setupAndCountMethodDependencies(this->_methodSetup->_diffuseMethod,this->_methodSetup->_diffuseMethodVO);
HXLINE( 544)		if (::hx::IsNotNull( this->_methodSetup->_shadowMethod )) {
HXLINE( 545)			this->setupAndCountMethodDependencies(this->_methodSetup->_shadowMethod,this->_methodSetup->_shadowMethodVO);
            		}
HXLINE( 546)		this->setupAndCountMethodDependencies(this->_methodSetup->_ambientMethod,this->_methodSetup->_ambientMethodVO);
HXLINE( 547)		if (this->_usingSpecularMethod) {
HXLINE( 548)			this->setupAndCountMethodDependencies(this->_methodSetup->_specularMethod,this->_methodSetup->_specularMethodVO);
            		}
HXLINE( 549)		if (::hx::IsNotNull( this->_methodSetup->_colorTransformMethod )) {
HXLINE( 550)			this->setupAndCountMethodDependencies(this->_methodSetup->_colorTransformMethod,this->_methodSetup->_colorTransformMethodVO);
            		}
HXLINE( 541)		int len = methods->get_length();
HXLINE( 553)		{
HXLINE( 553)			int _g = 0;
HXDLIN( 553)			int _g1 = len;
HXDLIN( 553)			while((_g < _g1)){
HXLINE( 553)				_g = (_g + 1);
HXDLIN( 553)				int i = (_g - 1);
HXLINE( 554)				 ::away3d::materials::methods::EffectMethodBase _hx_tmp = methods->get(i).StaticCast<  ::away3d::materials::methods::MethodVOSet >()->method;
HXDLIN( 554)				this->setupAndCountMethodDependencies(_hx_tmp,methods->get(i).StaticCast<  ::away3d::materials::methods::MethodVOSet >()->data);
            			}
            		}
HXLINE( 556)		if (this->get_usesNormals()) {
HXLINE( 557)			this->setupAndCountMethodDependencies(this->_methodSetup->_normalMethod,this->_methodSetup->_normalMethodVO);
            		}
HXLINE( 560)		this->_dependencyCounter->setPositionedLights(this->_numPointLights,this->_combinedLightSources);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,calculateDependencies,(void))

void ShaderCompiler_obj::setupAndCountMethodDependencies( ::away3d::materials::methods::ShadingMethodBase method, ::away3d::materials::methods::MethodVO methodVO){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_569_setupAndCountMethodDependencies)
HXLINE( 570)		this->setupMethod(method,methodVO);
HXLINE( 571)		this->_dependencyCounter->includeMethodVO(methodVO);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShaderCompiler_obj,setupAndCountMethodDependencies,(void))

void ShaderCompiler_obj::setupMethod( ::away3d::materials::methods::ShadingMethodBase method, ::away3d::materials::methods::MethodVO methodVO){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_578_setupMethod)
HXLINE( 579)		method->reset();
HXLINE( 580)		methodVO->reset();
HXLINE( 581)		methodVO->vertexData = this->_vertexConstantData;
HXLINE( 582)		methodVO->fragmentData = this->_fragmentConstantData;
HXLINE( 583)		methodVO->useSmoothTextures = this->_smooth;
HXLINE( 584)		methodVO->repeatTextures = this->_repeat;
HXLINE( 585)		methodVO->useMipmapping = this->_mipmap;
HXLINE( 586)		methodVO->anisotropy = this->_anisotropy;
HXLINE( 587)		bool _hx_tmp;
HXDLIN( 587)		if (this->_enableLightFallOff) {
HXLINE( 587)			_hx_tmp = (this->_profile != HX_("baselineConstrained",d1,73,c8,e8));
            		}
            		else {
HXLINE( 587)			_hx_tmp = false;
            		}
HXDLIN( 587)		methodVO->useLightFallOff = _hx_tmp;
HXLINE( 588)		methodVO->numLights = (this->_numLights + this->_numLightProbes);
HXLINE( 589)		method->initVO(methodVO);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShaderCompiler_obj,setupMethod,(void))

int ShaderCompiler_obj::get_commonsDataIndex(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_597_get_commonsDataIndex)
HXDLIN( 597)		return this->_commonsDataIndex;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_commonsDataIndex,return )

void ShaderCompiler_obj::updateMethodRegisters(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_604_updateMethodRegisters)
HXLINE( 605)		this->_methodSetup->_normalMethod->set_sharedRegisters(this->_sharedRegisters);
HXLINE( 606)		this->_methodSetup->_diffuseMethod->set_sharedRegisters(this->_sharedRegisters);
HXLINE( 607)		if (::hx::IsNotNull( this->_methodSetup->_shadowMethod )) {
HXLINE( 608)			this->_methodSetup->_shadowMethod->set_sharedRegisters(this->_sharedRegisters);
            		}
HXLINE( 609)		this->_methodSetup->_ambientMethod->set_sharedRegisters(this->_sharedRegisters);
HXLINE( 610)		if (::hx::IsNotNull( this->_methodSetup->_specularMethod )) {
HXLINE( 611)			this->_methodSetup->_specularMethod->set_sharedRegisters(this->_sharedRegisters);
            		}
HXLINE( 612)		if (::hx::IsNotNull( this->_methodSetup->_colorTransformMethod )) {
HXLINE( 613)			this->_methodSetup->_colorTransformMethod->set_sharedRegisters(this->_sharedRegisters);
            		}
HXLINE( 615)		 ::openfl::_Vector::ObjectVector methods = this->_methodSetup->_methods;
HXLINE( 616)		int len = methods->get_length();
HXLINE( 617)		{
HXLINE( 617)			int _g = 0;
HXDLIN( 617)			int _g1 = len;
HXDLIN( 617)			while((_g < _g1)){
HXLINE( 617)				_g = (_g + 1);
HXDLIN( 617)				int i = (_g - 1);
HXLINE( 618)				methods->get(i).StaticCast<  ::away3d::materials::methods::MethodVOSet >()->method->set_sharedRegisters(this->_sharedRegisters);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,updateMethodRegisters,(void))

int ShaderCompiler_obj::get_numUsedVertexConstants(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_627_get_numUsedVertexConstants)
HXDLIN( 627)		return this->_registerCache->get_numUsedVertexConstants();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_numUsedVertexConstants,return )

int ShaderCompiler_obj::get_numUsedFragmentConstants(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_636_get_numUsedFragmentConstants)
HXDLIN( 636)		return this->_registerCache->get_numUsedFragmentConstants();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_numUsedFragmentConstants,return )

int ShaderCompiler_obj::get_numUsedStreams(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_645_get_numUsedStreams)
HXDLIN( 645)		return this->_registerCache->get_numUsedStreams();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_numUsedStreams,return )

int ShaderCompiler_obj::get_numUsedTextures(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_653_get_numUsedTextures)
HXDLIN( 653)		return this->_registerCache->get_numUsedTextures();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_numUsedTextures,return )

int ShaderCompiler_obj::get_numUsedVaryings(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_661_get_numUsedVaryings)
HXDLIN( 661)		return this->_registerCache->get_numUsedVaryings();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_numUsedVaryings,return )

bool ShaderCompiler_obj::usesLightsForSpecular(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_669_usesLightsForSpecular)
HXDLIN( 669)		if ((this->_numLights > 0)) {
HXDLIN( 669)			return ((this->_specularLightSources & 1) != 0);
            		}
            		else {
HXDLIN( 669)			return false;
            		}
HXDLIN( 669)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,usesLightsForSpecular,return )

bool ShaderCompiler_obj::usesLightsForDiffuse(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_677_usesLightsForDiffuse)
HXDLIN( 677)		if ((this->_numLights > 0)) {
HXDLIN( 677)			return ((this->_diffuseLightSources & 1) != 0);
            		}
            		else {
HXDLIN( 677)			return false;
            		}
HXDLIN( 677)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,usesLightsForDiffuse,return )

void ShaderCompiler_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_684_dispose)
HXLINE( 685)		this->cleanUpMethods();
HXLINE( 686)		this->_registerCache->dispose();
HXLINE( 687)		this->_registerCache = null();
HXLINE( 688)		this->_sharedRegisters = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,dispose,(void))

void ShaderCompiler_obj::cleanUpMethods(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_695_cleanUpMethods)
HXLINE( 696)		if (::hx::IsNotNull( this->_methodSetup->_normalMethod )) {
HXLINE( 697)			this->_methodSetup->_normalMethod->cleanCompilationData();
            		}
HXLINE( 698)		if (::hx::IsNotNull( this->_methodSetup->_diffuseMethod )) {
HXLINE( 699)			this->_methodSetup->_diffuseMethod->cleanCompilationData();
            		}
HXLINE( 700)		if (::hx::IsNotNull( this->_methodSetup->_ambientMethod )) {
HXLINE( 701)			this->_methodSetup->_ambientMethod->cleanCompilationData();
            		}
HXLINE( 702)		if (::hx::IsNotNull( this->_methodSetup->_specularMethod )) {
HXLINE( 703)			this->_methodSetup->_specularMethod->cleanCompilationData();
            		}
HXLINE( 704)		if (::hx::IsNotNull( this->_methodSetup->_shadowMethod )) {
HXLINE( 705)			this->_methodSetup->_shadowMethod->cleanCompilationData();
            		}
HXLINE( 706)		if (::hx::IsNotNull( this->_methodSetup->_colorTransformMethod )) {
HXLINE( 707)			this->_methodSetup->_colorTransformMethod->cleanCompilationData();
            		}
HXLINE( 709)		 ::openfl::_Vector::ObjectVector methods = this->_methodSetup->_methods;
HXLINE( 710)		int len = methods->get_length();
HXLINE( 711)		{
HXLINE( 711)			int _g = 0;
HXDLIN( 711)			int _g1 = len;
HXDLIN( 711)			while((_g < _g1)){
HXLINE( 711)				_g = (_g + 1);
HXDLIN( 711)				int i = (_g - 1);
HXLINE( 712)				methods->get(i).StaticCast<  ::away3d::materials::methods::MethodVOSet >()->method->cleanCompilationData();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,cleanUpMethods,(void))

int ShaderCompiler_obj::get_specularLightSources(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_723_get_specularLightSources)
HXDLIN( 723)		return this->_specularLightSources;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_specularLightSources,return )

int ShaderCompiler_obj::set_specularLightSources(int value){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_727_set_specularLightSources)
HXLINE( 728)		this->_specularLightSources = value;
HXLINE( 729)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderCompiler_obj,set_specularLightSources,return )

int ShaderCompiler_obj::get_diffuseLightSources(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_740_get_diffuseLightSources)
HXDLIN( 740)		return this->_diffuseLightSources;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_diffuseLightSources,return )

int ShaderCompiler_obj::set_diffuseLightSources(int value){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_744_set_diffuseLightSources)
HXLINE( 745)		this->_diffuseLightSources = value;
HXLINE( 746)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderCompiler_obj,set_diffuseLightSources,return )

bool ShaderCompiler_obj::usesProbesForSpecular(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_754_usesProbesForSpecular)
HXDLIN( 754)		if ((this->_numLightProbes > 0)) {
HXDLIN( 754)			return ((this->_specularLightSources & 2) != 0);
            		}
            		else {
HXDLIN( 754)			return false;
            		}
HXDLIN( 754)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,usesProbesForSpecular,return )

bool ShaderCompiler_obj::usesProbesForDiffuse(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_762_usesProbesForDiffuse)
HXDLIN( 762)		if ((this->_numLightProbes > 0)) {
HXDLIN( 762)			return ((this->_diffuseLightSources & 2) != 0);
            		}
            		else {
HXDLIN( 762)			return false;
            		}
HXDLIN( 762)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,usesProbesForDiffuse,return )

bool ShaderCompiler_obj::usesProbes(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_770_usesProbes)
HXDLIN( 770)		if ((this->_numLightProbes > 0)) {
HXDLIN( 770)			return (((this->_diffuseLightSources | this->_specularLightSources) & 2) != 0);
            		}
            		else {
HXDLIN( 770)			return false;
            		}
HXDLIN( 770)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,usesProbes,return )

int ShaderCompiler_obj::get_uvBufferIndex(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_778_get_uvBufferIndex)
HXDLIN( 778)		return this->_uvBufferIndex;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_uvBufferIndex,return )

int ShaderCompiler_obj::get_uvTransformIndex(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_786_get_uvTransformIndex)
HXDLIN( 786)		return this->_uvTransformIndex;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_uvTransformIndex,return )

int ShaderCompiler_obj::get_uvTransformIndex2(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_794_get_uvTransformIndex2)
HXDLIN( 794)		return this->_uvTransformIndex2;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_uvTransformIndex2,return )

int ShaderCompiler_obj::get_secondaryUVBufferIndex(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_802_get_secondaryUVBufferIndex)
HXDLIN( 802)		return this->_secondaryUVBufferIndex;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_secondaryUVBufferIndex,return )

int ShaderCompiler_obj::get_normalBufferIndex(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_810_get_normalBufferIndex)
HXDLIN( 810)		return this->_normalBufferIndex;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_normalBufferIndex,return )

int ShaderCompiler_obj::get_tangentBufferIndex(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_818_get_tangentBufferIndex)
HXDLIN( 818)		return this->_tangentBufferIndex;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_tangentBufferIndex,return )

int ShaderCompiler_obj::get_lightFragmentConstantIndex(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_826_get_lightFragmentConstantIndex)
HXDLIN( 826)		return this->_lightFragmentConstantIndex;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_lightFragmentConstantIndex,return )

int ShaderCompiler_obj::get_cameraPositionIndex(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_834_get_cameraPositionIndex)
HXDLIN( 834)		return this->_cameraPositionIndex;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_cameraPositionIndex,return )

int ShaderCompiler_obj::get_sceneMatrixIndex(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_842_get_sceneMatrixIndex)
HXDLIN( 842)		return this->_sceneMatrixIndex;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_sceneMatrixIndex,return )

int ShaderCompiler_obj::get_sceneNormalMatrixIndex(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_850_get_sceneNormalMatrixIndex)
HXDLIN( 850)		return this->_sceneNormalMatrixIndex;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_sceneNormalMatrixIndex,return )

int ShaderCompiler_obj::get_probeWeightsIndex(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_858_get_probeWeightsIndex)
HXDLIN( 858)		return this->_probeWeightsIndex;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_probeWeightsIndex,return )

::String ShaderCompiler_obj::get_vertexCode(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_866_get_vertexCode)
HXDLIN( 866)		return this->_vertexCode;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_vertexCode,return )

::String ShaderCompiler_obj::get_fragmentCode(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_874_get_fragmentCode)
HXDLIN( 874)		return this->_fragmentCode;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_fragmentCode,return )

::String ShaderCompiler_obj::get_fragmentLightCode(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_882_get_fragmentLightCode)
HXDLIN( 882)		return this->_fragmentLightCode;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_fragmentLightCode,return )

::String ShaderCompiler_obj::get_fragmentPostLightCode(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_890_get_fragmentPostLightCode)
HXDLIN( 890)		return this->_fragmentPostLightCode;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_fragmentPostLightCode,return )

::String ShaderCompiler_obj::get_shadedTarget(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_898_get_shadedTarget)
HXDLIN( 898)		return this->_sharedRegisters->shadedTarget->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_shadedTarget,return )

int ShaderCompiler_obj::get_numPointLights(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_906_get_numPointLights)
HXDLIN( 906)		return this->_numPointLights;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_numPointLights,return )

int ShaderCompiler_obj::set_numPointLights(int numPointLights){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_910_set_numPointLights)
HXLINE( 911)		this->_numPointLights = numPointLights;
HXLINE( 912)		return numPointLights;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderCompiler_obj,set_numPointLights,return )

int ShaderCompiler_obj::get_numDirectionalLights(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_920_get_numDirectionalLights)
HXDLIN( 920)		return this->_numDirectionalLights;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_numDirectionalLights,return )

int ShaderCompiler_obj::set_numDirectionalLights(int value){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_924_set_numDirectionalLights)
HXLINE( 925)		this->_numDirectionalLights = value;
HXLINE( 926)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderCompiler_obj,set_numDirectionalLights,return )

int ShaderCompiler_obj::get_numLightProbes(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_934_get_numLightProbes)
HXDLIN( 934)		return this->_numLightProbes;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_numLightProbes,return )

int ShaderCompiler_obj::set_numLightProbes(int value){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_938_set_numLightProbes)
HXLINE( 939)		this->_numLightProbes = value;
HXLINE( 940)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderCompiler_obj,set_numLightProbes,return )

bool ShaderCompiler_obj::get_usingSpecularMethod(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_948_get_usingSpecularMethod)
HXDLIN( 948)		return this->_usingSpecularMethod;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_usingSpecularMethod,return )

 ::openfl::_Vector::ObjectVector ShaderCompiler_obj::get_animatableAttributes(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_956_get_animatableAttributes)
HXDLIN( 956)		return this->_animatableAttributes;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_animatableAttributes,return )

 ::openfl::_Vector::ObjectVector ShaderCompiler_obj::get_animationTargetRegisters(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_964_get_animationTargetRegisters)
HXDLIN( 964)		return this->_animationTargetRegisters;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_animationTargetRegisters,return )

bool ShaderCompiler_obj::get_usesNormals(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_972_get_usesNormals)
HXDLIN( 972)		if ((this->_dependencyCounter->get_normalDependencies() > 0)) {
HXDLIN( 972)			return this->_methodSetup->_normalMethod->get_hasOutput();
            		}
            		else {
HXDLIN( 972)			return false;
            		}
HXDLIN( 972)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_usesNormals,return )

bool ShaderCompiler_obj::usesLights(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_980_usesLights)
HXDLIN( 980)		if ((this->_numLights > 0)) {
HXDLIN( 980)			return ((this->_combinedLightSources & 1) != 0);
            		}
            		else {
HXDLIN( 980)			return false;
            		}
HXDLIN( 980)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,usesLights,return )

void ShaderCompiler_obj::compileMethods(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_987_compileMethods)
HXLINE( 988)		 ::openfl::_Vector::ObjectVector methods = this->_methodSetup->_methods;
HXLINE( 989)		int numMethods = methods->get_length();
HXLINE( 990)		 ::away3d::materials::methods::EffectMethodBase method;
HXLINE( 991)		 ::away3d::materials::methods::MethodVO data;
HXLINE( 992)		 ::away3d::materials::compilation::ShaderRegisterElement alphaReg = null();
HXLINE( 994)		if (this->_preserveAlpha) {
HXLINE( 995)			alphaReg = this->_registerCache->getFreeFragmentSingleTemp();
HXLINE( 996)			this->_registerCache->addFragmentTempUsages(alphaReg,1);
HXLINE( 997)			 ::away3d::materials::compilation::ShaderCompiler _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 997)			::String _hx_tmp1 = _hx_tmp->_fragmentCode;
HXDLIN( 997)			::String _hx_tmp2 = ((HX_("mov ",cc,e2,60,48) + ::Std_obj::string(alphaReg)) + HX_(", ",74,26,00,00));
HXDLIN( 997)			_hx_tmp->_fragmentCode = (_hx_tmp1 + ((_hx_tmp2 + ::Std_obj::string(this->_sharedRegisters->shadedTarget)) + HX_(".w\n",61,4f,23,00)));
            		}
HXLINE(1000)		{
HXLINE(1000)			int _g = 0;
HXDLIN(1000)			int _g1 = numMethods;
HXDLIN(1000)			while((_g < _g1)){
HXLINE(1000)				_g = (_g + 1);
HXDLIN(1000)				int i = (_g - 1);
HXLINE(1001)				method = methods->get(i).StaticCast<  ::away3d::materials::methods::MethodVOSet >()->method;
HXLINE(1002)				data = methods->get(i).StaticCast<  ::away3d::materials::methods::MethodVOSet >()->data;
HXLINE(1003)				 ::away3d::materials::compilation::ShaderCompiler _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(1003)				::String _hx_tmp1 = _hx_tmp->_vertexCode;
HXDLIN(1003)				_hx_tmp->_vertexCode = (_hx_tmp1 + method->getVertexCode(data,this->_registerCache));
HXLINE(1004)				bool _hx_tmp2;
HXDLIN(1004)				if (!(data->needsGlobalVertexPos)) {
HXLINE(1004)					_hx_tmp2 = data->needsGlobalFragmentPos;
            				}
            				else {
HXLINE(1004)					_hx_tmp2 = true;
            				}
HXDLIN(1004)				if (_hx_tmp2) {
HXLINE(1005)					this->_registerCache->removeVertexTempUsage(this->_sharedRegisters->globalPositionVertex);
            				}
HXLINE(1007)				 ::away3d::materials::compilation::ShaderCompiler _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(1007)				::String _hx_tmp4 = _hx_tmp3->_fragmentCode;
HXDLIN(1007)				_hx_tmp3->_fragmentCode = (_hx_tmp4 + method->getFragmentCode(data,this->_registerCache,this->_sharedRegisters->shadedTarget));
HXLINE(1008)				if (data->needsNormals) {
HXLINE(1009)					this->_registerCache->removeFragmentTempUsage(this->_sharedRegisters->normalFragment);
            				}
HXLINE(1010)				if (data->needsView) {
HXLINE(1011)					this->_registerCache->removeFragmentTempUsage(this->_sharedRegisters->viewDirFragment);
            				}
            			}
            		}
HXLINE(1014)		if (this->_preserveAlpha) {
HXLINE(1015)			 ::away3d::materials::compilation::ShaderCompiler _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(1015)			::String _hx_tmp1 = _hx_tmp->_fragmentCode;
HXDLIN(1015)			::String _hx_tmp2 = ((HX_("mov ",cc,e2,60,48) + ::Std_obj::string(this->_sharedRegisters->shadedTarget)) + HX_(".w, ",3d,43,c2,1e));
HXDLIN(1015)			_hx_tmp->_fragmentCode = (_hx_tmp1 + ((_hx_tmp2 + ::Std_obj::string(alphaReg)) + HX_("\n",0a,00,00,00)));
HXLINE(1016)			this->_registerCache->removeFragmentTempUsage(alphaReg);
            		}
HXLINE(1019)		if (::hx::IsNotNull( this->_methodSetup->_colorTransformMethod )) {
HXLINE(1020)			 ::away3d::materials::compilation::ShaderCompiler _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(1020)			::String _hx_tmp1 = _hx_tmp->_vertexCode;
HXDLIN(1020)			_hx_tmp->_vertexCode = (_hx_tmp1 + this->_methodSetup->_colorTransformMethod->getVertexCode(this->_methodSetup->_colorTransformMethodVO,this->_registerCache));
HXLINE(1021)			 ::away3d::materials::compilation::ShaderCompiler _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(1021)			::String _hx_tmp3 = _hx_tmp2->_fragmentCode;
HXDLIN(1021)			_hx_tmp2->_fragmentCode = (_hx_tmp3 + this->_methodSetup->_colorTransformMethod->getFragmentCode(this->_methodSetup->_colorTransformMethodVO,this->_registerCache,this->_sharedRegisters->shadedTarget));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,compileMethods,(void))

 ::openfl::_Vector::IntVector ShaderCompiler_obj::get_lightProbeDiffuseIndices(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_1030_get_lightProbeDiffuseIndices)
HXDLIN(1030)		return this->_lightProbeDiffuseIndices;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_lightProbeDiffuseIndices,return )

 ::openfl::_Vector::IntVector ShaderCompiler_obj::get_lightProbeSpecularIndices(){
            	HX_STACKFRAME(&_hx_pos_2402cb372fc9253a_1038_get_lightProbeSpecularIndices)
HXDLIN(1038)		return this->_lightProbeSpecularIndices;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_lightProbeSpecularIndices,return )


::hx::ObjectPtr< ShaderCompiler_obj > ShaderCompiler_obj::__new(::String profile) {
	::hx::ObjectPtr< ShaderCompiler_obj > __this = new ShaderCompiler_obj();
	__this->__construct(profile);
	return __this;
}

::hx::ObjectPtr< ShaderCompiler_obj > ShaderCompiler_obj::__alloc(::hx::Ctx *_hx_ctx,::String profile) {
	ShaderCompiler_obj *__this = (ShaderCompiler_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShaderCompiler_obj), true, "away3d.materials.compilation.ShaderCompiler"));
	*(void **)__this = ShaderCompiler_obj::_hx_vtable;
	__this->__construct(profile);
	return __this;
}

ShaderCompiler_obj::ShaderCompiler_obj()
{
}

void ShaderCompiler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShaderCompiler);
	HX_MARK_MEMBER_NAME(_sharedRegisters,"_sharedRegisters");
	HX_MARK_MEMBER_NAME(_registerCache,"_registerCache");
	HX_MARK_MEMBER_NAME(_dependencyCounter,"_dependencyCounter");
	HX_MARK_MEMBER_NAME(_methodSetup,"_methodSetup");
	HX_MARK_MEMBER_NAME(_smooth,"_smooth");
	HX_MARK_MEMBER_NAME(_repeat,"_repeat");
	HX_MARK_MEMBER_NAME(_mipmap,"_mipmap");
	HX_MARK_MEMBER_NAME(_anisotropy,"_anisotropy");
	HX_MARK_MEMBER_NAME(_enableLightFallOff,"_enableLightFallOff");
	HX_MARK_MEMBER_NAME(_preserveAlpha,"_preserveAlpha");
	HX_MARK_MEMBER_NAME(_animateUVs,"_animateUVs");
	HX_MARK_MEMBER_NAME(_animateUVs2,"_animateUVs2");
	HX_MARK_MEMBER_NAME(_alphaPremultiplied,"_alphaPremultiplied");
	HX_MARK_MEMBER_NAME(_vertexConstantData,"_vertexConstantData");
	HX_MARK_MEMBER_NAME(_fragmentConstantData,"_fragmentConstantData");
	HX_MARK_MEMBER_NAME(_vertexCode,"_vertexCode");
	HX_MARK_MEMBER_NAME(_fragmentCode,"_fragmentCode");
	HX_MARK_MEMBER_NAME(_fragmentLightCode,"_fragmentLightCode");
	HX_MARK_MEMBER_NAME(_fragmentPostLightCode,"_fragmentPostLightCode");
	HX_MARK_MEMBER_NAME(_commonsDataIndex,"_commonsDataIndex");
	HX_MARK_MEMBER_NAME(_animatableAttributes,"_animatableAttributes");
	HX_MARK_MEMBER_NAME(_animationTargetRegisters,"_animationTargetRegisters");
	HX_MARK_MEMBER_NAME(_lightProbeDiffuseIndices,"_lightProbeDiffuseIndices");
	HX_MARK_MEMBER_NAME(_lightProbeSpecularIndices,"_lightProbeSpecularIndices");
	HX_MARK_MEMBER_NAME(_uvBufferIndex,"_uvBufferIndex");
	HX_MARK_MEMBER_NAME(_uvTransformIndex,"_uvTransformIndex");
	HX_MARK_MEMBER_NAME(_uvTransformIndex2,"_uvTransformIndex2");
	HX_MARK_MEMBER_NAME(_secondaryUVBufferIndex,"_secondaryUVBufferIndex");
	HX_MARK_MEMBER_NAME(_normalBufferIndex,"_normalBufferIndex");
	HX_MARK_MEMBER_NAME(_tangentBufferIndex,"_tangentBufferIndex");
	HX_MARK_MEMBER_NAME(_lightFragmentConstantIndex,"_lightFragmentConstantIndex");
	HX_MARK_MEMBER_NAME(_sceneMatrixIndex,"_sceneMatrixIndex");
	HX_MARK_MEMBER_NAME(_sceneNormalMatrixIndex,"_sceneNormalMatrixIndex");
	HX_MARK_MEMBER_NAME(_cameraPositionIndex,"_cameraPositionIndex");
	HX_MARK_MEMBER_NAME(_probeWeightsIndex,"_probeWeightsIndex");
	HX_MARK_MEMBER_NAME(_specularLightSources,"_specularLightSources");
	HX_MARK_MEMBER_NAME(_diffuseLightSources,"_diffuseLightSources");
	HX_MARK_MEMBER_NAME(_numLights,"_numLights");
	HX_MARK_MEMBER_NAME(_numLightProbes,"_numLightProbes");
	HX_MARK_MEMBER_NAME(_numPointLights,"_numPointLights");
	HX_MARK_MEMBER_NAME(_numDirectionalLights,"_numDirectionalLights");
	HX_MARK_MEMBER_NAME(_numProbeRegisters,"_numProbeRegisters");
	HX_MARK_MEMBER_NAME(_combinedLightSources,"_combinedLightSources");
	HX_MARK_MEMBER_NAME(_usingSpecularMethod,"_usingSpecularMethod");
	HX_MARK_MEMBER_NAME(_needUVAnimation,"_needUVAnimation");
	HX_MARK_MEMBER_NAME(_UVTarget,"_UVTarget");
	HX_MARK_MEMBER_NAME(_UVSource,"_UVSource");
	HX_MARK_MEMBER_NAME(_profile,"_profile");
	HX_MARK_MEMBER_NAME(_forceSeperateMVP,"_forceSeperateMVP");
	HX_MARK_END_CLASS();
}

void ShaderCompiler_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_sharedRegisters,"_sharedRegisters");
	HX_VISIT_MEMBER_NAME(_registerCache,"_registerCache");
	HX_VISIT_MEMBER_NAME(_dependencyCounter,"_dependencyCounter");
	HX_VISIT_MEMBER_NAME(_methodSetup,"_methodSetup");
	HX_VISIT_MEMBER_NAME(_smooth,"_smooth");
	HX_VISIT_MEMBER_NAME(_repeat,"_repeat");
	HX_VISIT_MEMBER_NAME(_mipmap,"_mipmap");
	HX_VISIT_MEMBER_NAME(_anisotropy,"_anisotropy");
	HX_VISIT_MEMBER_NAME(_enableLightFallOff,"_enableLightFallOff");
	HX_VISIT_MEMBER_NAME(_preserveAlpha,"_preserveAlpha");
	HX_VISIT_MEMBER_NAME(_animateUVs,"_animateUVs");
	HX_VISIT_MEMBER_NAME(_animateUVs2,"_animateUVs2");
	HX_VISIT_MEMBER_NAME(_alphaPremultiplied,"_alphaPremultiplied");
	HX_VISIT_MEMBER_NAME(_vertexConstantData,"_vertexConstantData");
	HX_VISIT_MEMBER_NAME(_fragmentConstantData,"_fragmentConstantData");
	HX_VISIT_MEMBER_NAME(_vertexCode,"_vertexCode");
	HX_VISIT_MEMBER_NAME(_fragmentCode,"_fragmentCode");
	HX_VISIT_MEMBER_NAME(_fragmentLightCode,"_fragmentLightCode");
	HX_VISIT_MEMBER_NAME(_fragmentPostLightCode,"_fragmentPostLightCode");
	HX_VISIT_MEMBER_NAME(_commonsDataIndex,"_commonsDataIndex");
	HX_VISIT_MEMBER_NAME(_animatableAttributes,"_animatableAttributes");
	HX_VISIT_MEMBER_NAME(_animationTargetRegisters,"_animationTargetRegisters");
	HX_VISIT_MEMBER_NAME(_lightProbeDiffuseIndices,"_lightProbeDiffuseIndices");
	HX_VISIT_MEMBER_NAME(_lightProbeSpecularIndices,"_lightProbeSpecularIndices");
	HX_VISIT_MEMBER_NAME(_uvBufferIndex,"_uvBufferIndex");
	HX_VISIT_MEMBER_NAME(_uvTransformIndex,"_uvTransformIndex");
	HX_VISIT_MEMBER_NAME(_uvTransformIndex2,"_uvTransformIndex2");
	HX_VISIT_MEMBER_NAME(_secondaryUVBufferIndex,"_secondaryUVBufferIndex");
	HX_VISIT_MEMBER_NAME(_normalBufferIndex,"_normalBufferIndex");
	HX_VISIT_MEMBER_NAME(_tangentBufferIndex,"_tangentBufferIndex");
	HX_VISIT_MEMBER_NAME(_lightFragmentConstantIndex,"_lightFragmentConstantIndex");
	HX_VISIT_MEMBER_NAME(_sceneMatrixIndex,"_sceneMatrixIndex");
	HX_VISIT_MEMBER_NAME(_sceneNormalMatrixIndex,"_sceneNormalMatrixIndex");
	HX_VISIT_MEMBER_NAME(_cameraPositionIndex,"_cameraPositionIndex");
	HX_VISIT_MEMBER_NAME(_probeWeightsIndex,"_probeWeightsIndex");
	HX_VISIT_MEMBER_NAME(_specularLightSources,"_specularLightSources");
	HX_VISIT_MEMBER_NAME(_diffuseLightSources,"_diffuseLightSources");
	HX_VISIT_MEMBER_NAME(_numLights,"_numLights");
	HX_VISIT_MEMBER_NAME(_numLightProbes,"_numLightProbes");
	HX_VISIT_MEMBER_NAME(_numPointLights,"_numPointLights");
	HX_VISIT_MEMBER_NAME(_numDirectionalLights,"_numDirectionalLights");
	HX_VISIT_MEMBER_NAME(_numProbeRegisters,"_numProbeRegisters");
	HX_VISIT_MEMBER_NAME(_combinedLightSources,"_combinedLightSources");
	HX_VISIT_MEMBER_NAME(_usingSpecularMethod,"_usingSpecularMethod");
	HX_VISIT_MEMBER_NAME(_needUVAnimation,"_needUVAnimation");
	HX_VISIT_MEMBER_NAME(_UVTarget,"_UVTarget");
	HX_VISIT_MEMBER_NAME(_UVSource,"_UVSource");
	HX_VISIT_MEMBER_NAME(_profile,"_profile");
	HX_VISIT_MEMBER_NAME(_forceSeperateMVP,"_forceSeperateMVP");
}

::hx::Val ShaderCompiler_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_smooth") ) { return ::hx::Val( _smooth ); }
		if (HX_FIELD_EQ(inName,"_repeat") ) { return ::hx::Val( _repeat ); }
		if (HX_FIELD_EQ(inName,"_mipmap") ) { return ::hx::Val( _mipmap ); }
		if (HX_FIELD_EQ(inName,"compile") ) { return ::hx::Val( compile_dyn() ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"UVTarget") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UVTarget() ); }
		if (HX_FIELD_EQ(inName,"UVSource") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UVSource() ); }
		if (HX_FIELD_EQ(inName,"_profile") ) { return ::hx::Val( _profile ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_UVTarget") ) { return ::hx::Val( _UVTarget ); }
		if (HX_FIELD_EQ(inName,"_UVSource") ) { return ::hx::Val( _UVSource ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"animateUVs") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_animateUVs() ); }
		if (HX_FIELD_EQ(inName,"vertexCode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_vertexCode() ); }
		if (HX_FIELD_EQ(inName,"_numLights") ) { return ::hx::Val( _numLights ); }
		if (HX_FIELD_EQ(inName,"usesProbes") ) { return ::hx::Val( usesProbes_dyn() ); }
		if (HX_FIELD_EQ(inName,"usesLights") ) { return ::hx::Val( usesLights_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"animateUVs2") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_animateUVs2() ); }
		if (HX_FIELD_EQ(inName,"methodSetup") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_methodSetup() ); }
		if (HX_FIELD_EQ(inName,"usesNormals") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_usesNormals() ); }
		if (HX_FIELD_EQ(inName,"_anisotropy") ) { return ::hx::Val( _anisotropy ); }
		if (HX_FIELD_EQ(inName,"_animateUVs") ) { return ::hx::Val( _animateUVs ); }
		if (HX_FIELD_EQ(inName,"_vertexCode") ) { return ::hx::Val( _vertexCode ); }
		if (HX_FIELD_EQ(inName,"setupMethod") ) { return ::hx::Val( setupMethod_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fragmentCode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_fragmentCode() ); }
		if (HX_FIELD_EQ(inName,"shadedTarget") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_shadedTarget() ); }
		if (HX_FIELD_EQ(inName,"_methodSetup") ) { return ::hx::Val( _methodSetup ); }
		if (HX_FIELD_EQ(inName,"_animateUVs2") ) { return ::hx::Val( _animateUVs2 ); }
		if (HX_FIELD_EQ(inName,"get_UVTarget") ) { return ::hx::Val( get_UVTarget_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_UVSource") ) { return ::hx::Val( get_UVSource_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"preserveAlpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_preserveAlpha() ); }
		if (HX_FIELD_EQ(inName,"uvBufferIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_uvBufferIndex() ); }
		if (HX_FIELD_EQ(inName,"_fragmentCode") ) { return ::hx::Val( _fragmentCode ); }
		if (HX_FIELD_EQ(inName,"compileUVCode") ) { return ::hx::Val( compileUVCode_dyn() ); }
		if (HX_FIELD_EQ(inName,"initLightData") ) { return ::hx::Val( initLightData_dyn() ); }
		if (HX_FIELD_EQ(inName,"createCommons") ) { return ::hx::Val( createCommons_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"numUsedStreams") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numUsedStreams() ); }
		if (HX_FIELD_EQ(inName,"numPointLights") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numPointLights() ); }
		if (HX_FIELD_EQ(inName,"numLightProbes") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numLightProbes() ); }
		if (HX_FIELD_EQ(inName,"_registerCache") ) { return ::hx::Val( _registerCache ); }
		if (HX_FIELD_EQ(inName,"_preserveAlpha") ) { return ::hx::Val( _preserveAlpha ); }
		if (HX_FIELD_EQ(inName,"_uvBufferIndex") ) { return ::hx::Val( _uvBufferIndex ); }
		if (HX_FIELD_EQ(inName,"get_animateUVs") ) { return ::hx::Val( get_animateUVs_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_animateUVs") ) { return ::hx::Val( set_animateUVs_dyn() ); }
		if (HX_FIELD_EQ(inName,"cleanUpMethods") ) { return ::hx::Val( cleanUpMethods_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_vertexCode") ) { return ::hx::Val( get_vertexCode_dyn() ); }
		if (HX_FIELD_EQ(inName,"compileMethods") ) { return ::hx::Val( compileMethods_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"needUVAnimation") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_needUVAnimation() ); }
		if (HX_FIELD_EQ(inName,"numUsedTextures") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numUsedTextures() ); }
		if (HX_FIELD_EQ(inName,"numUsedVaryings") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numUsedVaryings() ); }
		if (HX_FIELD_EQ(inName,"_numLightProbes") ) { return ::hx::Val( _numLightProbes ); }
		if (HX_FIELD_EQ(inName,"_numPointLights") ) { return ::hx::Val( _numPointLights ); }
		if (HX_FIELD_EQ(inName,"get_animateUVs2") ) { return ::hx::Val( get_animateUVs2_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_animateUVs2") ) { return ::hx::Val( set_animateUVs2_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_methodSetup") ) { return ::hx::Val( get_methodSetup_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_methodSetup") ) { return ::hx::Val( set_methodSetup_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_usesNormals") ) { return ::hx::Val( get_usesNormals_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"forceSeperateMVP") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_forceSeperateMVP() ); }
		if (HX_FIELD_EQ(inName,"commonsDataIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_commonsDataIndex() ); }
		if (HX_FIELD_EQ(inName,"uvTransformIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_uvTransformIndex() ); }
		if (HX_FIELD_EQ(inName,"sceneMatrixIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_sceneMatrixIndex() ); }
		if (HX_FIELD_EQ(inName,"_sharedRegisters") ) { return ::hx::Val( _sharedRegisters ); }
		if (HX_FIELD_EQ(inName,"_needUVAnimation") ) { return ::hx::Val( _needUVAnimation ); }
		if (HX_FIELD_EQ(inName,"get_fragmentCode") ) { return ::hx::Val( get_fragmentCode_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_shadedTarget") ) { return ::hx::Val( get_shadedTarget_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"uvTransformIndex2") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_uvTransformIndex2() ); }
		if (HX_FIELD_EQ(inName,"normalBufferIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_normalBufferIndex() ); }
		if (HX_FIELD_EQ(inName,"probeWeightsIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_probeWeightsIndex() ); }
		if (HX_FIELD_EQ(inName,"fragmentLightCode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_fragmentLightCode() ); }
		if (HX_FIELD_EQ(inName,"_commonsDataIndex") ) { return ::hx::Val( _commonsDataIndex ); }
		if (HX_FIELD_EQ(inName,"_uvTransformIndex") ) { return ::hx::Val( _uvTransformIndex ); }
		if (HX_FIELD_EQ(inName,"_sceneMatrixIndex") ) { return ::hx::Val( _sceneMatrixIndex ); }
		if (HX_FIELD_EQ(inName,"_forceSeperateMVP") ) { return ::hx::Val( _forceSeperateMVP ); }
		if (HX_FIELD_EQ(inName,"initRegisterCache") ) { return ::hx::Val( initRegisterCache_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_preserveAlpha") ) { return ::hx::Val( get_preserveAlpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_preserveAlpha") ) { return ::hx::Val( set_preserveAlpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"compileNormalCode") ) { return ::hx::Val( compileNormalCode_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_uvBufferIndex") ) { return ::hx::Val( get_uvBufferIndex_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"enableLightFallOff") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_enableLightFallOff() ); }
		if (HX_FIELD_EQ(inName,"alphaPremultiplied") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_alphaPremultiplied() ); }
		if (HX_FIELD_EQ(inName,"tangentBufferIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_tangentBufferIndex() ); }
		if (HX_FIELD_EQ(inName,"_dependencyCounter") ) { return ::hx::Val( _dependencyCounter ); }
		if (HX_FIELD_EQ(inName,"_fragmentLightCode") ) { return ::hx::Val( _fragmentLightCode ); }
		if (HX_FIELD_EQ(inName,"_uvTransformIndex2") ) { return ::hx::Val( _uvTransformIndex2 ); }
		if (HX_FIELD_EQ(inName,"_normalBufferIndex") ) { return ::hx::Val( _normalBufferIndex ); }
		if (HX_FIELD_EQ(inName,"_probeWeightsIndex") ) { return ::hx::Val( _probeWeightsIndex ); }
		if (HX_FIELD_EQ(inName,"_numProbeRegisters") ) { return ::hx::Val( _numProbeRegisters ); }
		if (HX_FIELD_EQ(inName,"setTextureSampling") ) { return ::hx::Val( setTextureSampling_dyn() ); }
		if (HX_FIELD_EQ(inName,"compileMethodsCode") ) { return ::hx::Val( compileMethodsCode_dyn() ); }
		if (HX_FIELD_EQ(inName,"compileViewDirCode") ) { return ::hx::Val( compileViewDirCode_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numUsedStreams") ) { return ::hx::Val( get_numUsedStreams_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numPointLights") ) { return ::hx::Val( get_numPointLights_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_numPointLights") ) { return ::hx::Val( set_numPointLights_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numLightProbes") ) { return ::hx::Val( get_numLightProbes_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_numLightProbes") ) { return ::hx::Val( set_numLightProbes_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"diffuseLightSources") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_diffuseLightSources() ); }
		if (HX_FIELD_EQ(inName,"cameraPositionIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_cameraPositionIndex() ); }
		if (HX_FIELD_EQ(inName,"usingSpecularMethod") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_usingSpecularMethod() ); }
		if (HX_FIELD_EQ(inName,"_enableLightFallOff") ) { return ::hx::Val( _enableLightFallOff ); }
		if (HX_FIELD_EQ(inName,"_alphaPremultiplied") ) { return ::hx::Val( _alphaPremultiplied ); }
		if (HX_FIELD_EQ(inName,"_vertexConstantData") ) { return ::hx::Val( _vertexConstantData ); }
		if (HX_FIELD_EQ(inName,"_tangentBufferIndex") ) { return ::hx::Val( _tangentBufferIndex ); }
		if (HX_FIELD_EQ(inName,"get_needUVAnimation") ) { return ::hx::Val( get_needUVAnimation_dyn() ); }
		if (HX_FIELD_EQ(inName,"compileLightingCode") ) { return ::hx::Val( compileLightingCode_dyn() ); }
		if (HX_FIELD_EQ(inName,"initRegisterIndices") ) { return ::hx::Val( initRegisterIndices_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numUsedTextures") ) { return ::hx::Val( get_numUsedTextures_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numUsedVaryings") ) { return ::hx::Val( get_numUsedVaryings_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"specularLightSources") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_specularLightSources() ); }
		if (HX_FIELD_EQ(inName,"numDirectionalLights") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numDirectionalLights() ); }
		if (HX_FIELD_EQ(inName,"animatableAttributes") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_animatableAttributes() ); }
		if (HX_FIELD_EQ(inName,"_cameraPositionIndex") ) { return ::hx::Val( _cameraPositionIndex ); }
		if (HX_FIELD_EQ(inName,"_diffuseLightSources") ) { return ::hx::Val( _diffuseLightSources ); }
		if (HX_FIELD_EQ(inName,"_usingSpecularMethod") ) { return ::hx::Val( _usingSpecularMethod ); }
		if (HX_FIELD_EQ(inName,"get_forceSeperateMVP") ) { return ::hx::Val( get_forceSeperateMVP_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_forceSeperateMVP") ) { return ::hx::Val( set_forceSeperateMVP_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_commonsDataIndex") ) { return ::hx::Val( get_commonsDataIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"usesLightsForDiffuse") ) { return ::hx::Val( usesLightsForDiffuse_dyn() ); }
		if (HX_FIELD_EQ(inName,"usesProbesForDiffuse") ) { return ::hx::Val( usesProbesForDiffuse_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_uvTransformIndex") ) { return ::hx::Val( get_uvTransformIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_sceneMatrixIndex") ) { return ::hx::Val( get_sceneMatrixIndex_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"fragmentPostLightCode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_fragmentPostLightCode() ); }
		if (HX_FIELD_EQ(inName,"_fragmentConstantData") ) { return ::hx::Val( _fragmentConstantData ); }
		if (HX_FIELD_EQ(inName,"_animatableAttributes") ) { return ::hx::Val( _animatableAttributes ); }
		if (HX_FIELD_EQ(inName,"_specularLightSources") ) { return ::hx::Val( _specularLightSources ); }
		if (HX_FIELD_EQ(inName,"_numDirectionalLights") ) { return ::hx::Val( _numDirectionalLights ); }
		if (HX_FIELD_EQ(inName,"_combinedLightSources") ) { return ::hx::Val( _combinedLightSources ); }
		if (HX_FIELD_EQ(inName,"createNormalRegisters") ) { return ::hx::Val( createNormalRegisters_dyn() ); }
		if (HX_FIELD_EQ(inName,"compileProjectionCode") ) { return ::hx::Val( compileProjectionCode_dyn() ); }
		if (HX_FIELD_EQ(inName,"compileFragmentOutput") ) { return ::hx::Val( compileFragmentOutput_dyn() ); }
		if (HX_FIELD_EQ(inName,"calculateDependencies") ) { return ::hx::Val( calculateDependencies_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateMethodRegisters") ) { return ::hx::Val( updateMethodRegisters_dyn() ); }
		if (HX_FIELD_EQ(inName,"usesLightsForSpecular") ) { return ::hx::Val( usesLightsForSpecular_dyn() ); }
		if (HX_FIELD_EQ(inName,"usesProbesForSpecular") ) { return ::hx::Val( usesProbesForSpecular_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_uvTransformIndex2") ) { return ::hx::Val( get_uvTransformIndex2_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_normalBufferIndex") ) { return ::hx::Val( get_normalBufferIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_probeWeightsIndex") ) { return ::hx::Val( get_probeWeightsIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_fragmentLightCode") ) { return ::hx::Val( get_fragmentLightCode_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"numUsedVertexConstants") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numUsedVertexConstants() ); }
		if (HX_FIELD_EQ(inName,"secondaryUVBufferIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_secondaryUVBufferIndex() ); }
		if (HX_FIELD_EQ(inName,"sceneNormalMatrixIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_sceneNormalMatrixIndex() ); }
		if (HX_FIELD_EQ(inName,"_fragmentPostLightCode") ) { return ::hx::Val( _fragmentPostLightCode ); }
		if (HX_FIELD_EQ(inName,"get_enableLightFallOff") ) { return ::hx::Val( get_enableLightFallOff_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_enableLightFallOff") ) { return ::hx::Val( set_enableLightFallOff_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_alphaPremultiplied") ) { return ::hx::Val( get_alphaPremultiplied_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alphaPremultiplied") ) { return ::hx::Val( set_alphaPremultiplied_dyn() ); }
		if (HX_FIELD_EQ(inName,"setConstantDataBuffers") ) { return ::hx::Val( setConstantDataBuffers_dyn() ); }
		if (HX_FIELD_EQ(inName,"compileSecondaryUVCode") ) { return ::hx::Val( compileSecondaryUVCode_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_tangentBufferIndex") ) { return ::hx::Val( get_tangentBufferIndex_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_secondaryUVBufferIndex") ) { return ::hx::Val( _secondaryUVBufferIndex ); }
		if (HX_FIELD_EQ(inName,"_sceneNormalMatrixIndex") ) { return ::hx::Val( _sceneNormalMatrixIndex ); }
		if (HX_FIELD_EQ(inName,"get_diffuseLightSources") ) { return ::hx::Val( get_diffuseLightSources_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_diffuseLightSources") ) { return ::hx::Val( set_diffuseLightSources_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_cameraPositionIndex") ) { return ::hx::Val( get_cameraPositionIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_usingSpecularMethod") ) { return ::hx::Val( get_usingSpecularMethod_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"numUsedFragmentConstants") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numUsedFragmentConstants() ); }
		if (HX_FIELD_EQ(inName,"animationTargetRegisters") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_animationTargetRegisters() ); }
		if (HX_FIELD_EQ(inName,"lightProbeDiffuseIndices") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_lightProbeDiffuseIndices() ); }
		if (HX_FIELD_EQ(inName,"get_specularLightSources") ) { return ::hx::Val( get_specularLightSources_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_specularLightSources") ) { return ::hx::Val( set_specularLightSources_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numDirectionalLights") ) { return ::hx::Val( get_numDirectionalLights_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_numDirectionalLights") ) { return ::hx::Val( set_numDirectionalLights_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_animatableAttributes") ) { return ::hx::Val( get_animatableAttributes_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lightProbeSpecularIndices") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_lightProbeSpecularIndices() ); }
		if (HX_FIELD_EQ(inName,"_animationTargetRegisters") ) { return ::hx::Val( _animationTargetRegisters ); }
		if (HX_FIELD_EQ(inName,"_lightProbeDiffuseIndices") ) { return ::hx::Val( _lightProbeDiffuseIndices ); }
		if (HX_FIELD_EQ(inName,"compileGlobalPositionCode") ) { return ::hx::Val( compileGlobalPositionCode_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_fragmentPostLightCode") ) { return ::hx::Val( get_fragmentPostLightCode_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lightFragmentConstantIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_lightFragmentConstantIndex() ); }
		if (HX_FIELD_EQ(inName,"_lightProbeSpecularIndices") ) { return ::hx::Val( _lightProbeSpecularIndices ); }
		if (HX_FIELD_EQ(inName,"get_numUsedVertexConstants") ) { return ::hx::Val( get_numUsedVertexConstants_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_secondaryUVBufferIndex") ) { return ::hx::Val( get_secondaryUVBufferIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_sceneNormalMatrixIndex") ) { return ::hx::Val( get_sceneNormalMatrixIndex_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_lightFragmentConstantIndex") ) { return ::hx::Val( _lightFragmentConstantIndex ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"get_numUsedFragmentConstants") ) { return ::hx::Val( get_numUsedFragmentConstants_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_animationTargetRegisters") ) { return ::hx::Val( get_animationTargetRegisters_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_lightProbeDiffuseIndices") ) { return ::hx::Val( get_lightProbeDiffuseIndices_dyn() ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"get_lightProbeSpecularIndices") ) { return ::hx::Val( get_lightProbeSpecularIndices_dyn() ); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"get_lightFragmentConstantIndex") ) { return ::hx::Val( get_lightFragmentConstantIndex_dyn() ); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"setupAndCountMethodDependencies") ) { return ::hx::Val( setupAndCountMethodDependencies_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ShaderCompiler_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_smooth") ) { _smooth=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_repeat") ) { _repeat=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mipmap") ) { _mipmap=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_profile") ) { _profile=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_UVTarget") ) { _UVTarget=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_UVSource") ) { _UVSource=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"animateUVs") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_animateUVs(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"_numLights") ) { _numLights=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"animateUVs2") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_animateUVs2(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"methodSetup") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_methodSetup(inValue.Cast<  ::away3d::materials::methods::ShaderMethodSetup >()) ); }
		if (HX_FIELD_EQ(inName,"_anisotropy") ) { _anisotropy=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_animateUVs") ) { _animateUVs=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vertexCode") ) { _vertexCode=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_methodSetup") ) { _methodSetup=inValue.Cast<  ::away3d::materials::methods::ShaderMethodSetup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_animateUVs2") ) { _animateUVs2=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"preserveAlpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_preserveAlpha(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"_fragmentCode") ) { _fragmentCode=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"numPointLights") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_numPointLights(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"numLightProbes") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_numLightProbes(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"_registerCache") ) { _registerCache=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterCache >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_preserveAlpha") ) { _preserveAlpha=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_uvBufferIndex") ) { _uvBufferIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_numLightProbes") ) { _numLightProbes=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numPointLights") ) { _numPointLights=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"forceSeperateMVP") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_forceSeperateMVP(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"_sharedRegisters") ) { _sharedRegisters=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_needUVAnimation") ) { _needUVAnimation=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_commonsDataIndex") ) { _commonsDataIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_uvTransformIndex") ) { _uvTransformIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sceneMatrixIndex") ) { _sceneMatrixIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_forceSeperateMVP") ) { _forceSeperateMVP=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"enableLightFallOff") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_enableLightFallOff(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"alphaPremultiplied") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alphaPremultiplied(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"_dependencyCounter") ) { _dependencyCounter=inValue.Cast<  ::away3d::materials::compilation::MethodDependencyCounter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fragmentLightCode") ) { _fragmentLightCode=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_uvTransformIndex2") ) { _uvTransformIndex2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_normalBufferIndex") ) { _normalBufferIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_probeWeightsIndex") ) { _probeWeightsIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numProbeRegisters") ) { _numProbeRegisters=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"diffuseLightSources") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_diffuseLightSources(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"_enableLightFallOff") ) { _enableLightFallOff=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_alphaPremultiplied") ) { _alphaPremultiplied=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vertexConstantData") ) { _vertexConstantData=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tangentBufferIndex") ) { _tangentBufferIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"specularLightSources") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_specularLightSources(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"numDirectionalLights") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_numDirectionalLights(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"_cameraPositionIndex") ) { _cameraPositionIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_diffuseLightSources") ) { _diffuseLightSources=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_usingSpecularMethod") ) { _usingSpecularMethod=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_fragmentConstantData") ) { _fragmentConstantData=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_animatableAttributes") ) { _animatableAttributes=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_specularLightSources") ) { _specularLightSources=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numDirectionalLights") ) { _numDirectionalLights=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_combinedLightSources") ) { _combinedLightSources=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_fragmentPostLightCode") ) { _fragmentPostLightCode=inValue.Cast< ::String >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_secondaryUVBufferIndex") ) { _secondaryUVBufferIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sceneNormalMatrixIndex") ) { _sceneNormalMatrixIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_animationTargetRegisters") ) { _animationTargetRegisters=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
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

void ShaderCompiler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("enableLightFallOff",a1,7e,2a,a7));
	outFields->push(HX_("needUVAnimation",cd,8f,1e,56));
	outFields->push(HX_("UVTarget",92,30,77,b1));
	outFields->push(HX_("UVSource",1c,ee,bb,5c));
	outFields->push(HX_("forceSeperateMVP",95,09,19,6c));
	outFields->push(HX_("animateUVs",f1,8a,63,80));
	outFields->push(HX_("animateUVs2",21,08,b6,d6));
	outFields->push(HX_("alphaPremultiplied",18,d7,f0,91));
	outFields->push(HX_("preserveAlpha",f2,67,13,f8));
	outFields->push(HX_("methodSetup",dc,97,d2,9e));
	outFields->push(HX_("commonsDataIndex",80,8e,59,20));
	outFields->push(HX_("numUsedVertexConstants",28,ce,57,a5));
	outFields->push(HX_("numUsedFragmentConstants",7c,3d,41,ad));
	outFields->push(HX_("numUsedStreams",90,56,cb,05));
	outFields->push(HX_("numUsedTextures",fb,c5,f3,eb));
	outFields->push(HX_("numUsedVaryings",c6,f4,ed,2a));
	outFields->push(HX_("specularLightSources",65,48,c2,b2));
	outFields->push(HX_("diffuseLightSources",84,45,ca,ff));
	outFields->push(HX_("uvBufferIndex",11,a9,c8,6e));
	outFields->push(HX_("uvTransformIndex",47,b8,ea,93));
	outFields->push(HX_("uvTransformIndex2",0b,86,76,d9));
	outFields->push(HX_("secondaryUVBufferIndex",1d,5d,95,73));
	outFields->push(HX_("normalBufferIndex",0b,47,c4,48));
	outFields->push(HX_("tangentBufferIndex",2d,05,02,4d));
	outFields->push(HX_("lightFragmentConstantIndex",68,d8,e6,cb));
	outFields->push(HX_("cameraPositionIndex",c4,6b,7a,cf));
	outFields->push(HX_("sceneMatrixIndex",25,73,ea,d6));
	outFields->push(HX_("sceneNormalMatrixIndex",3e,53,47,69));
	outFields->push(HX_("probeWeightsIndex",67,94,83,f0));
	outFields->push(HX_("vertexCode",b1,3a,81,d2));
	outFields->push(HX_("fragmentCode",1d,65,77,05));
	outFields->push(HX_("fragmentLightCode",33,97,2d,29));
	outFields->push(HX_("fragmentPostLightCode",b3,ae,44,f6));
	outFields->push(HX_("shadedTarget",c8,11,a9,b0));
	outFields->push(HX_("numPointLights",a7,e2,c1,38));
	outFields->push(HX_("numDirectionalLights",41,a2,e8,bb));
	outFields->push(HX_("numLightProbes",13,ac,c5,83));
	outFields->push(HX_("usingSpecularMethod",68,ee,3d,87));
	outFields->push(HX_("animatableAttributes",55,4f,d4,d9));
	outFields->push(HX_("animationTargetRegisters",7b,08,ce,02));
	outFields->push(HX_("usesNormals",80,27,2e,2b));
	outFields->push(HX_("lightProbeDiffuseIndices",ff,05,2d,a4));
	outFields->push(HX_("lightProbeSpecularIndices",4a,b5,e6,c0));
	outFields->push(HX_("_sharedRegisters",cc,37,3c,f5));
	outFields->push(HX_("_registerCache",20,4d,cf,74));
	outFields->push(HX_("_dependencyCounter",32,a4,e6,32));
	outFields->push(HX_("_methodSetup",dd,45,dc,04));
	outFields->push(HX_("_smooth",cd,19,e2,75));
	outFields->push(HX_("_repeat",fa,a8,f3,74));
	outFields->push(HX_("_mipmap",27,3f,cb,c2));
	outFields->push(HX_("_anisotropy",21,c5,18,ee));
	outFields->push(HX_("_enableLightFallOff",c0,02,05,87));
	outFields->push(HX_("_preserveAlpha",33,58,65,36));
	outFields->push(HX_("_animateUVs",10,58,ed,52));
	outFields->push(HX_("_animateUVs2",22,b6,bf,3c));
	outFields->push(HX_("_alphaPremultiplied",37,5b,cb,71));
	outFields->push(HX_("_vertexConstantData",51,f7,a2,d1));
	outFields->push(HX_("_fragmentConstantData",7d,f3,6b,12));
	outFields->push(HX_("_vertexCode",d0,07,0b,a5));
	outFields->push(HX_("_fragmentCode",fc,f7,e5,e7));
	outFields->push(HX_("_fragmentLightCode",f4,3b,43,fc));
	outFields->push(HX_("_fragmentPostLightCode",f4,47,52,4f));
	outFields->push(HX_("_commonsDataIndex",df,7c,d4,b8));
	outFields->push(HX_("_animatableAttributes",34,59,6f,48));
	outFields->push(HX_("_animationTargetRegisters",da,ed,7c,5c));
	outFields->push(HX_("_lightProbeDiffuseIndices",5e,eb,db,fd));
	outFields->push(HX_("_lightProbeSpecularIndices",0b,83,40,e0));
	outFields->push(HX_("_uvBufferIndex",52,99,1a,ad));
	outFields->push(HX_("_uvTransformIndex",a6,a6,65,2c));
	outFields->push(HX_("_uvTransformIndex2",cc,2a,8c,ac));
	outFields->push(HX_("_secondaryUVBufferIndex",bc,dc,6d,06));
	outFields->push(HX_("_normalBufferIndex",cc,eb,d9,1b));
	outFields->push(HX_("_tangentBufferIndex",4c,89,dc,2c));
	outFields->push(HX_("_lightFragmentConstantIndex",87,13,21,1b));
	outFields->push(HX_("_sceneMatrixIndex",84,61,65,6f));
	outFields->push(HX_("_sceneNormalMatrixIndex",dd,d2,1f,fc));
	outFields->push(HX_("_cameraPositionIndex",c5,82,d3,ce));
	outFields->push(HX_("_probeWeightsIndex",28,39,99,c3));
	outFields->push(HX_("_specularLightSources",44,52,5d,21));
	outFields->push(HX_("_diffuseLightSources",85,5c,23,ff));
	outFields->push(HX_("_numLights",84,f1,a5,f4));
	outFields->push(HX_("_numLightProbes",b2,f4,25,cd));
	outFields->push(HX_("_numPointLights",46,2b,22,82));
	outFields->push(HX_("_numDirectionalLights",20,ac,83,2a));
	outFields->push(HX_("_numProbeRegisters",07,55,4d,87));
	outFields->push(HX_("_combinedLightSources",86,5b,15,d4));
	outFields->push(HX_("_usingSpecularMethod",69,05,97,86));
	outFields->push(HX_("_needUVAnimation",4e,d2,fd,40));
	outFields->push(HX_("_UVTarget",f1,27,0d,f9));
	outFields->push(HX_("_UVSource",7b,e5,51,a4));
	outFields->push(HX_("_profile",aa,a2,01,2d));
	outFields->push(HX_("_forceSeperateMVP",f4,f7,93,04));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ShaderCompiler_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterData */ ,(int)offsetof(ShaderCompiler_obj,_sharedRegisters),HX_("_sharedRegisters",cc,37,3c,f5)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterCache */ ,(int)offsetof(ShaderCompiler_obj,_registerCache),HX_("_registerCache",20,4d,cf,74)},
	{::hx::fsObject /*  ::away3d::materials::compilation::MethodDependencyCounter */ ,(int)offsetof(ShaderCompiler_obj,_dependencyCounter),HX_("_dependencyCounter",32,a4,e6,32)},
	{::hx::fsObject /*  ::away3d::materials::methods::ShaderMethodSetup */ ,(int)offsetof(ShaderCompiler_obj,_methodSetup),HX_("_methodSetup",dd,45,dc,04)},
	{::hx::fsBool,(int)offsetof(ShaderCompiler_obj,_smooth),HX_("_smooth",cd,19,e2,75)},
	{::hx::fsBool,(int)offsetof(ShaderCompiler_obj,_repeat),HX_("_repeat",fa,a8,f3,74)},
	{::hx::fsBool,(int)offsetof(ShaderCompiler_obj,_mipmap),HX_("_mipmap",27,3f,cb,c2)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ShaderCompiler_obj,_anisotropy),HX_("_anisotropy",21,c5,18,ee)},
	{::hx::fsBool,(int)offsetof(ShaderCompiler_obj,_enableLightFallOff),HX_("_enableLightFallOff",c0,02,05,87)},
	{::hx::fsBool,(int)offsetof(ShaderCompiler_obj,_preserveAlpha),HX_("_preserveAlpha",33,58,65,36)},
	{::hx::fsBool,(int)offsetof(ShaderCompiler_obj,_animateUVs),HX_("_animateUVs",10,58,ed,52)},
	{::hx::fsBool,(int)offsetof(ShaderCompiler_obj,_animateUVs2),HX_("_animateUVs2",22,b6,bf,3c)},
	{::hx::fsBool,(int)offsetof(ShaderCompiler_obj,_alphaPremultiplied),HX_("_alphaPremultiplied",37,5b,cb,71)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(ShaderCompiler_obj,_vertexConstantData),HX_("_vertexConstantData",51,f7,a2,d1)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(ShaderCompiler_obj,_fragmentConstantData),HX_("_fragmentConstantData",7d,f3,6b,12)},
	{::hx::fsString,(int)offsetof(ShaderCompiler_obj,_vertexCode),HX_("_vertexCode",d0,07,0b,a5)},
	{::hx::fsString,(int)offsetof(ShaderCompiler_obj,_fragmentCode),HX_("_fragmentCode",fc,f7,e5,e7)},
	{::hx::fsString,(int)offsetof(ShaderCompiler_obj,_fragmentLightCode),HX_("_fragmentLightCode",f4,3b,43,fc)},
	{::hx::fsString,(int)offsetof(ShaderCompiler_obj,_fragmentPostLightCode),HX_("_fragmentPostLightCode",f4,47,52,4f)},
	{::hx::fsInt,(int)offsetof(ShaderCompiler_obj,_commonsDataIndex),HX_("_commonsDataIndex",df,7c,d4,b8)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(ShaderCompiler_obj,_animatableAttributes),HX_("_animatableAttributes",34,59,6f,48)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(ShaderCompiler_obj,_animationTargetRegisters),HX_("_animationTargetRegisters",da,ed,7c,5c)},
	{::hx::fsObject /*  ::openfl::_Vector::IntVector */ ,(int)offsetof(ShaderCompiler_obj,_lightProbeDiffuseIndices),HX_("_lightProbeDiffuseIndices",5e,eb,db,fd)},
	{::hx::fsObject /*  ::openfl::_Vector::IntVector */ ,(int)offsetof(ShaderCompiler_obj,_lightProbeSpecularIndices),HX_("_lightProbeSpecularIndices",0b,83,40,e0)},
	{::hx::fsInt,(int)offsetof(ShaderCompiler_obj,_uvBufferIndex),HX_("_uvBufferIndex",52,99,1a,ad)},
	{::hx::fsInt,(int)offsetof(ShaderCompiler_obj,_uvTransformIndex),HX_("_uvTransformIndex",a6,a6,65,2c)},
	{::hx::fsInt,(int)offsetof(ShaderCompiler_obj,_uvTransformIndex2),HX_("_uvTransformIndex2",cc,2a,8c,ac)},
	{::hx::fsInt,(int)offsetof(ShaderCompiler_obj,_secondaryUVBufferIndex),HX_("_secondaryUVBufferIndex",bc,dc,6d,06)},
	{::hx::fsInt,(int)offsetof(ShaderCompiler_obj,_normalBufferIndex),HX_("_normalBufferIndex",cc,eb,d9,1b)},
	{::hx::fsInt,(int)offsetof(ShaderCompiler_obj,_tangentBufferIndex),HX_("_tangentBufferIndex",4c,89,dc,2c)},
	{::hx::fsInt,(int)offsetof(ShaderCompiler_obj,_lightFragmentConstantIndex),HX_("_lightFragmentConstantIndex",87,13,21,1b)},
	{::hx::fsInt,(int)offsetof(ShaderCompiler_obj,_sceneMatrixIndex),HX_("_sceneMatrixIndex",84,61,65,6f)},
	{::hx::fsInt,(int)offsetof(ShaderCompiler_obj,_sceneNormalMatrixIndex),HX_("_sceneNormalMatrixIndex",dd,d2,1f,fc)},
	{::hx::fsInt,(int)offsetof(ShaderCompiler_obj,_cameraPositionIndex),HX_("_cameraPositionIndex",c5,82,d3,ce)},
	{::hx::fsInt,(int)offsetof(ShaderCompiler_obj,_probeWeightsIndex),HX_("_probeWeightsIndex",28,39,99,c3)},
	{::hx::fsInt,(int)offsetof(ShaderCompiler_obj,_specularLightSources),HX_("_specularLightSources",44,52,5d,21)},
	{::hx::fsInt,(int)offsetof(ShaderCompiler_obj,_diffuseLightSources),HX_("_diffuseLightSources",85,5c,23,ff)},
	{::hx::fsInt,(int)offsetof(ShaderCompiler_obj,_numLights),HX_("_numLights",84,f1,a5,f4)},
	{::hx::fsInt,(int)offsetof(ShaderCompiler_obj,_numLightProbes),HX_("_numLightProbes",b2,f4,25,cd)},
	{::hx::fsInt,(int)offsetof(ShaderCompiler_obj,_numPointLights),HX_("_numPointLights",46,2b,22,82)},
	{::hx::fsInt,(int)offsetof(ShaderCompiler_obj,_numDirectionalLights),HX_("_numDirectionalLights",20,ac,83,2a)},
	{::hx::fsInt,(int)offsetof(ShaderCompiler_obj,_numProbeRegisters),HX_("_numProbeRegisters",07,55,4d,87)},
	{::hx::fsInt,(int)offsetof(ShaderCompiler_obj,_combinedLightSources),HX_("_combinedLightSources",86,5b,15,d4)},
	{::hx::fsBool,(int)offsetof(ShaderCompiler_obj,_usingSpecularMethod),HX_("_usingSpecularMethod",69,05,97,86)},
	{::hx::fsBool,(int)offsetof(ShaderCompiler_obj,_needUVAnimation),HX_("_needUVAnimation",4e,d2,fd,40)},
	{::hx::fsString,(int)offsetof(ShaderCompiler_obj,_UVTarget),HX_("_UVTarget",f1,27,0d,f9)},
	{::hx::fsString,(int)offsetof(ShaderCompiler_obj,_UVSource),HX_("_UVSource",7b,e5,51,a4)},
	{::hx::fsString,(int)offsetof(ShaderCompiler_obj,_profile),HX_("_profile",aa,a2,01,2d)},
	{::hx::fsBool,(int)offsetof(ShaderCompiler_obj,_forceSeperateMVP),HX_("_forceSeperateMVP",f4,f7,93,04)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ShaderCompiler_obj_sStaticStorageInfo = 0;
#endif

static ::String ShaderCompiler_obj_sMemberFields[] = {
	HX_("_sharedRegisters",cc,37,3c,f5),
	HX_("_registerCache",20,4d,cf,74),
	HX_("_dependencyCounter",32,a4,e6,32),
	HX_("_methodSetup",dd,45,dc,04),
	HX_("_smooth",cd,19,e2,75),
	HX_("_repeat",fa,a8,f3,74),
	HX_("_mipmap",27,3f,cb,c2),
	HX_("_anisotropy",21,c5,18,ee),
	HX_("_enableLightFallOff",c0,02,05,87),
	HX_("_preserveAlpha",33,58,65,36),
	HX_("_animateUVs",10,58,ed,52),
	HX_("_animateUVs2",22,b6,bf,3c),
	HX_("_alphaPremultiplied",37,5b,cb,71),
	HX_("_vertexConstantData",51,f7,a2,d1),
	HX_("_fragmentConstantData",7d,f3,6b,12),
	HX_("_vertexCode",d0,07,0b,a5),
	HX_("_fragmentCode",fc,f7,e5,e7),
	HX_("_fragmentLightCode",f4,3b,43,fc),
	HX_("_fragmentPostLightCode",f4,47,52,4f),
	HX_("_commonsDataIndex",df,7c,d4,b8),
	HX_("_animatableAttributes",34,59,6f,48),
	HX_("_animationTargetRegisters",da,ed,7c,5c),
	HX_("_lightProbeDiffuseIndices",5e,eb,db,fd),
	HX_("_lightProbeSpecularIndices",0b,83,40,e0),
	HX_("_uvBufferIndex",52,99,1a,ad),
	HX_("_uvTransformIndex",a6,a6,65,2c),
	HX_("_uvTransformIndex2",cc,2a,8c,ac),
	HX_("_secondaryUVBufferIndex",bc,dc,6d,06),
	HX_("_normalBufferIndex",cc,eb,d9,1b),
	HX_("_tangentBufferIndex",4c,89,dc,2c),
	HX_("_lightFragmentConstantIndex",87,13,21,1b),
	HX_("_sceneMatrixIndex",84,61,65,6f),
	HX_("_sceneNormalMatrixIndex",dd,d2,1f,fc),
	HX_("_cameraPositionIndex",c5,82,d3,ce),
	HX_("_probeWeightsIndex",28,39,99,c3),
	HX_("_specularLightSources",44,52,5d,21),
	HX_("_diffuseLightSources",85,5c,23,ff),
	HX_("_numLights",84,f1,a5,f4),
	HX_("_numLightProbes",b2,f4,25,cd),
	HX_("_numPointLights",46,2b,22,82),
	HX_("_numDirectionalLights",20,ac,83,2a),
	HX_("_numProbeRegisters",07,55,4d,87),
	HX_("_combinedLightSources",86,5b,15,d4),
	HX_("_usingSpecularMethod",69,05,97,86),
	HX_("_needUVAnimation",4e,d2,fd,40),
	HX_("_UVTarget",f1,27,0d,f9),
	HX_("_UVSource",7b,e5,51,a4),
	HX_("_profile",aa,a2,01,2d),
	HX_("_forceSeperateMVP",f4,f7,93,04),
	HX_("get_enableLightFallOff",ea,f7,be,00),
	HX_("set_enableLightFallOff",5e,74,6a,34),
	HX_("get_needUVAnimation",e4,5e,29,e1),
	HX_("get_UVTarget",9b,e4,90,66),
	HX_("get_UVSource",25,a2,d5,11),
	HX_("get_forceSeperateMVP",9e,6e,83,8a),
	HX_("set_forceSeperateMVP",12,26,3b,57),
	HX_("initRegisterCache",af,c7,de,1c),
	HX_("get_animateUVs",3a,13,59,f6),
	HX_("set_animateUVs",ae,fb,78,16),
	HX_("get_animateUVs2",b8,bf,97,97),
	HX_("set_animateUVs2",c4,3c,63,93),
	HX_("get_alphaPremultiplied",61,50,85,eb),
	HX_("set_alphaPremultiplied",d5,cc,30,1f),
	HX_("get_preserveAlpha",49,73,83,fe),
	HX_("set_preserveAlpha",55,4b,f1,21),
	HX_("setTextureSampling",60,d2,59,c3),
	HX_("setConstantDataBuffers",e3,20,60,99),
	HX_("get_methodSetup",73,4f,b4,5f),
	HX_("set_methodSetup",7f,cc,7f,5b),
	HX_("compile",73,25,6f,83),
	HX_("createNormalRegisters",ed,3d,3d,dd),
	HX_("compileMethodsCode",0c,de,21,f2),
	HX_("compileLightingCode",2c,2b,f1,74),
	HX_("compileViewDirCode",82,52,34,e9),
	HX_("compileNormalCode",47,86,93,2c),
	HX_("compileUVCode",e1,a9,66,36),
	HX_("compileSecondaryUVCode",6f,c6,13,f1),
	HX_("compileGlobalPositionCode",cc,ae,d9,53),
	HX_("compileProjectionCode",2f,96,fe,64),
	HX_("compileFragmentOutput",c4,db,60,26),
	HX_("initRegisterIndices",d4,69,16,e8),
	HX_("initLightData",f0,f8,80,36),
	HX_("createCommons",4c,e9,ba,69),
	HX_("calculateDependencies",6f,36,83,c4),
	HX_("setupAndCountMethodDependencies",df,6f,50,6f),
	HX_("setupMethod",3e,95,10,ea),
	HX_("get_commonsDataIndex",89,f3,c3,3e),
	HX_("updateMethodRegisters",86,29,4d,a6),
	HX_("get_numUsedVertexConstants",f1,1f,5d,dd),
	HX_("get_numUsedFragmentConstants",85,53,95,ee),
	HX_("get_numUsedStreams",59,37,65,a1),
	HX_("get_numUsedTextures",12,95,fe,76),
	HX_("get_numUsedVaryings",dd,c3,f8,b5),
	HX_("usesLightsForSpecular",23,b3,54,ac),
	HX_("usesLightsForDiffuse",02,b1,3c,45),
	HX_("dispose",9f,80,4c,bb),
	HX_("cleanUpMethods",8e,96,d0,1e),
	HX_("get_specularLightSources",ee,65,5e,f5),
	HX_("set_specularLightSources",62,e7,38,08),
	HX_("get_diffuseLightSources",1b,ec,1f,08),
	HX_("set_diffuseLightSources",27,55,81,0a),
	HX_("usesProbesForSpecular",7d,1c,5b,ba),
	HX_("usesProbesForDiffuse",e8,30,86,37),
	HX_("usesProbes",af,b6,6a,cd),
	HX_("get_uvBufferIndex",68,b4,38,75),
	HX_("get_uvTransformIndex",50,1d,55,b2),
	HX_("get_uvTransformIndex2",e2,88,24,58),
	HX_("get_secondaryUVBufferIndex",e6,ae,9a,ab),
	HX_("get_normalBufferIndex",e2,49,72,c7),
	HX_("get_tangentBufferIndex",76,7e,96,a6),
	HX_("get_lightFragmentConstantIndex",b1,42,f3,1a),
	HX_("get_cameraPositionIndex",5b,12,d0,d7),
	HX_("get_sceneMatrixIndex",2e,d8,54,f5),
	HX_("get_sceneNormalMatrixIndex",07,a5,4c,a1),
	HX_("get_probeWeightsIndex",3e,97,31,6f),
	HX_("get_vertexCode",fa,c2,76,48),
	HX_("get_fragmentCode",a6,51,16,0a),
	HX_("get_fragmentLightCode",0a,9a,db,a7),
	HX_("get_fragmentPostLightCode",0a,69,42,fc),
	HX_("get_shadedTarget",51,fe,47,b5),
	HX_("get_numPointLights",70,c3,5b,d4),
	HX_("set_numPointLights",e4,f5,0a,b1),
	HX_("get_numDirectionalLights",ca,bf,84,fe),
	HX_("set_numDirectionalLights",3e,41,5f,11),
	HX_("get_numLightProbes",dc,8c,5f,1f),
	HX_("set_numLightProbes",50,bf,0e,fc),
	HX_("get_usingSpecularMethod",ff,94,93,8f),
	HX_("get_animatableAttributes",de,6c,70,1c),
	HX_("get_animationTargetRegisters",84,1e,22,44),
	HX_("get_usesNormals",17,df,0f,ec),
	HX_("usesLights",49,f2,1c,00),
	HX_("compileMethods",3f,f5,26,48),
	HX_("get_lightProbeDiffuseIndices",08,1c,81,e5),
	HX_("get_lightProbeSpecularIndices",21,e7,25,a9),
	::String(null()) };

::hx::Class ShaderCompiler_obj::__mClass;

void ShaderCompiler_obj::__register()
{
	ShaderCompiler_obj _hx_dummy;
	ShaderCompiler_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.materials.compilation.ShaderCompiler",a0,cf,04,3c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ShaderCompiler_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ShaderCompiler_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShaderCompiler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShaderCompiler_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace materials
} // end namespace compilation
