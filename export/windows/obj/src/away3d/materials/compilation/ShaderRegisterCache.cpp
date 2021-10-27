#include <hxcpp.h>

#ifndef INCLUDED_away3d_materials_compilation_RegisterPool
#include <away3d/materials/compilation/RegisterPool.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterCache
#include <away3d/materials/compilation/ShaderRegisterCache.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterElement
#include <away3d/materials/compilation/ShaderRegisterElement.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c907763d9aea5fee_47_new,"away3d.materials.compilation.ShaderRegisterCache","new",0x35a3a130,"away3d.materials.compilation.ShaderRegisterCache.new","away3d/materials/compilation/ShaderRegisterCache.hx",47,0xdd04e4c3)
HX_LOCAL_STACK_FRAME(_hx_pos_c907763d9aea5fee_54_reset,"away3d.materials.compilation.ShaderRegisterCache","reset",0xec49ee9f,"away3d.materials.compilation.ShaderRegisterCache.reset","away3d/materials/compilation/ShaderRegisterCache.hx",54,0xdd04e4c3)
HX_LOCAL_STACK_FRAME(_hx_pos_c907763d9aea5fee_83_dispose,"away3d.materials.compilation.ShaderRegisterCache","dispose",0x601cf96f,"away3d.materials.compilation.ShaderRegisterCache.dispose","away3d/materials/compilation/ShaderRegisterCache.hx",83,0xdd04e4c3)
HX_LOCAL_STACK_FRAME(_hx_pos_c907763d9aea5fee_107_addFragmentTempUsages,"away3d.materials.compilation.ShaderRegisterCache","addFragmentTempUsages",0x5c109da7,"away3d.materials.compilation.ShaderRegisterCache.addFragmentTempUsages","away3d/materials/compilation/ShaderRegisterCache.hx",107,0xdd04e4c3)
HX_LOCAL_STACK_FRAME(_hx_pos_c907763d9aea5fee_116_removeFragmentTempUsage,"away3d.materials.compilation.ShaderRegisterCache","removeFragmentTempUsage",0x10029769,"away3d.materials.compilation.ShaderRegisterCache.removeFragmentTempUsage","away3d/materials/compilation/ShaderRegisterCache.hx",116,0xdd04e4c3)
HX_LOCAL_STACK_FRAME(_hx_pos_c907763d9aea5fee_127_addVertexTempUsages,"away3d.materials.compilation.ShaderRegisterCache","addVertexTempUsages",0x6c4db3fb,"away3d.materials.compilation.ShaderRegisterCache.addVertexTempUsages","away3d/materials/compilation/ShaderRegisterCache.hx",127,0xdd04e4c3)
HX_LOCAL_STACK_FRAME(_hx_pos_c907763d9aea5fee_136_removeVertexTempUsage,"away3d.materials.compilation.ShaderRegisterCache","removeVertexTempUsage",0x3893f655,"away3d.materials.compilation.ShaderRegisterCache.removeVertexTempUsage","away3d/materials/compilation/ShaderRegisterCache.hx",136,0xdd04e4c3)
HX_LOCAL_STACK_FRAME(_hx_pos_c907763d9aea5fee_145_getFreeFragmentVectorTemp,"away3d.materials.compilation.ShaderRegisterCache","getFreeFragmentVectorTemp",0x07412339,"away3d.materials.compilation.ShaderRegisterCache.getFreeFragmentVectorTemp","away3d/materials/compilation/ShaderRegisterCache.hx",145,0xdd04e4c3)
HX_LOCAL_STACK_FRAME(_hx_pos_c907763d9aea5fee_153_getFreeFragmentSingleTemp,"away3d.materials.compilation.ShaderRegisterCache","getFreeFragmentSingleTemp",0xbb739f7e,"away3d.materials.compilation.ShaderRegisterCache.getFreeFragmentSingleTemp","away3d/materials/compilation/ShaderRegisterCache.hx",153,0xdd04e4c3)
HX_LOCAL_STACK_FRAME(_hx_pos_c907763d9aea5fee_160_getFreeVarying,"away3d.materials.compilation.ShaderRegisterCache","getFreeVarying",0xb404095e,"away3d.materials.compilation.ShaderRegisterCache.getFreeVarying","away3d/materials/compilation/ShaderRegisterCache.hx",160,0xdd04e4c3)
HX_LOCAL_STACK_FRAME(_hx_pos_c907763d9aea5fee_170_getFreeFragmentConstant,"away3d.materials.compilation.ShaderRegisterCache","getFreeFragmentConstant",0x579ad2a6,"away3d.materials.compilation.ShaderRegisterCache.getFreeFragmentConstant","away3d/materials/compilation/ShaderRegisterCache.hx",170,0xdd04e4c3)
HX_LOCAL_STACK_FRAME(_hx_pos_c907763d9aea5fee_180_getFreeVertexConstant,"away3d.materials.compilation.ShaderRegisterCache","getFreeVertexConstant",0xa5f6a9ba,"away3d.materials.compilation.ShaderRegisterCache.getFreeVertexConstant","away3d/materials/compilation/ShaderRegisterCache.hx",180,0xdd04e4c3)
HX_LOCAL_STACK_FRAME(_hx_pos_c907763d9aea5fee_191_getFreeVertexVectorTemp,"away3d.materials.compilation.ShaderRegisterCache","getFreeVertexVectorTemp",0x858fe74d,"away3d.materials.compilation.ShaderRegisterCache.getFreeVertexVectorTemp","away3d/materials/compilation/ShaderRegisterCache.hx",191,0xdd04e4c3)
HX_LOCAL_STACK_FRAME(_hx_pos_c907763d9aea5fee_199_getFreeVertexSingleTemp,"away3d.materials.compilation.ShaderRegisterCache","getFreeVertexSingleTemp",0x39c26392,"away3d.materials.compilation.ShaderRegisterCache.getFreeVertexSingleTemp","away3d/materials/compilation/ShaderRegisterCache.hx",199,0xdd04e4c3)
HX_LOCAL_STACK_FRAME(_hx_pos_c907763d9aea5fee_206_getFreeVertexAttribute,"away3d.materials.compilation.ShaderRegisterCache","getFreeVertexAttribute",0x4862d306,"away3d.materials.compilation.ShaderRegisterCache.getFreeVertexAttribute","away3d/materials/compilation/ShaderRegisterCache.hx",206,0xdd04e4c3)
HX_LOCAL_STACK_FRAME(_hx_pos_c907763d9aea5fee_216_getFreeTextureReg,"away3d.materials.compilation.ShaderRegisterCache","getFreeTextureReg",0x42cc7f0b,"away3d.materials.compilation.ShaderRegisterCache.getFreeTextureReg","away3d/materials/compilation/ShaderRegisterCache.hx",216,0xdd04e4c3)
HX_LOCAL_STACK_FRAME(_hx_pos_c907763d9aea5fee_227_get_vertexConstantOffset,"away3d.materials.compilation.ShaderRegisterCache","get_vertexConstantOffset",0x85e2c154,"away3d.materials.compilation.ShaderRegisterCache.get_vertexConstantOffset","away3d/materials/compilation/ShaderRegisterCache.hx",227,0xdd04e4c3)
HX_LOCAL_STACK_FRAME(_hx_pos_c907763d9aea5fee_231_set_vertexConstantOffset,"away3d.materials.compilation.ShaderRegisterCache","set_vertexConstantOffset",0x98bd42c8,"away3d.materials.compilation.ShaderRegisterCache.set_vertexConstantOffset","away3d/materials/compilation/ShaderRegisterCache.hx",231,0xdd04e4c3)
HX_LOCAL_STACK_FRAME(_hx_pos_c907763d9aea5fee_241_get_vertexAttributesOffset,"away3d.materials.compilation.ShaderRegisterCache","get_vertexAttributesOffset",0xc2c6ca47,"away3d.materials.compilation.ShaderRegisterCache.get_vertexAttributesOffset","away3d/materials/compilation/ShaderRegisterCache.hx",241,0xdd04e4c3)
HX_LOCAL_STACK_FRAME(_hx_pos_c907763d9aea5fee_245_set_vertexAttributesOffset,"away3d.materials.compilation.ShaderRegisterCache","set_vertexAttributesOffset",0x225b90bb,"away3d.materials.compilation.ShaderRegisterCache.set_vertexAttributesOffset","away3d/materials/compilation/ShaderRegisterCache.hx",245,0xdd04e4c3)
HX_LOCAL_STACK_FRAME(_hx_pos_c907763d9aea5fee_255_get_varyingsOffset,"away3d.materials.compilation.ShaderRegisterCache","get_varyingsOffset",0xd2738fef,"away3d.materials.compilation.ShaderRegisterCache.get_varyingsOffset","away3d/materials/compilation/ShaderRegisterCache.hx",255,0xdd04e4c3)
HX_LOCAL_STACK_FRAME(_hx_pos_c907763d9aea5fee_259_set_varyingsOffset,"away3d.materials.compilation.ShaderRegisterCache","set_varyingsOffset",0xaf22c263,"away3d.materials.compilation.ShaderRegisterCache.set_varyingsOffset","away3d/materials/compilation/ShaderRegisterCache.hx",259,0xdd04e4c3)
HX_LOCAL_STACK_FRAME(_hx_pos_c907763d9aea5fee_269_get_fragmentConstantOffset,"away3d.materials.compilation.ShaderRegisterCache","get_fragmentConstantOffset",0x5af58b00,"away3d.materials.compilation.ShaderRegisterCache.get_fragmentConstantOffset","away3d/materials/compilation/ShaderRegisterCache.hx",269,0xdd04e4c3)
HX_LOCAL_STACK_FRAME(_hx_pos_c907763d9aea5fee_273_set_fragmentConstantOffset,"away3d.materials.compilation.ShaderRegisterCache","set_fragmentConstantOffset",0xba8a5174,"away3d.materials.compilation.ShaderRegisterCache.set_fragmentConstantOffset","away3d/materials/compilation/ShaderRegisterCache.hx",273,0xdd04e4c3)
HX_LOCAL_STACK_FRAME(_hx_pos_c907763d9aea5fee_283_get_fragmentOutputRegister,"away3d.materials.compilation.ShaderRegisterCache","get_fragmentOutputRegister",0x37c5756d,"away3d.materials.compilation.ShaderRegisterCache.get_fragmentOutputRegister","away3d/materials/compilation/ShaderRegisterCache.hx",283,0xdd04e4c3)
HX_LOCAL_STACK_FRAME(_hx_pos_c907763d9aea5fee_291_get_numUsedVertexConstants,"away3d.materials.compilation.ShaderRegisterCache","get_numUsedVertexConstants",0xd97d6921,"away3d.materials.compilation.ShaderRegisterCache.get_numUsedVertexConstants","away3d/materials/compilation/ShaderRegisterCache.hx",291,0xdd04e4c3)
HX_LOCAL_STACK_FRAME(_hx_pos_c907763d9aea5fee_299_get_numUsedFragmentConstants,"away3d.materials.compilation.ShaderRegisterCache","get_numUsedFragmentConstants",0x6a3e48b5,"away3d.materials.compilation.ShaderRegisterCache.get_numUsedFragmentConstants","away3d/materials/compilation/ShaderRegisterCache.hx",299,0xdd04e4c3)
HX_LOCAL_STACK_FRAME(_hx_pos_c907763d9aea5fee_307_get_numUsedStreams,"away3d.materials.compilation.ShaderRegisterCache","get_numUsedStreams",0xb580d089,"away3d.materials.compilation.ShaderRegisterCache.get_numUsedStreams","away3d/materials/compilation/ShaderRegisterCache.hx",307,0xdd04e4c3)
HX_LOCAL_STACK_FRAME(_hx_pos_c907763d9aea5fee_315_get_numUsedTextures,"away3d.materials.compilation.ShaderRegisterCache","get_numUsedTextures",0xfb0905e2,"away3d.materials.compilation.ShaderRegisterCache.get_numUsedTextures","away3d/materials/compilation/ShaderRegisterCache.hx",315,0xdd04e4c3)
HX_LOCAL_STACK_FRAME(_hx_pos_c907763d9aea5fee_323_get_numUsedVaryings,"away3d.materials.compilation.ShaderRegisterCache","get_numUsedVaryings",0x3a0334ad,"away3d.materials.compilation.ShaderRegisterCache.get_numUsedVaryings","away3d/materials/compilation/ShaderRegisterCache.hx",323,0xdd04e4c3)
namespace away3d{
namespace materials{
namespace compilation{

void ShaderRegisterCache_obj::__construct(::String profile){
            	HX_STACKFRAME(&_hx_pos_c907763d9aea5fee_47_new)
HXDLIN(  47)		this->_profile = profile;
            	}

Dynamic ShaderRegisterCache_obj::__CreateEmpty() { return new ShaderRegisterCache_obj; }

void *ShaderRegisterCache_obj::_hx_vtable = 0;

Dynamic ShaderRegisterCache_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShaderRegisterCache_obj > _hx_result = new ShaderRegisterCache_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ShaderRegisterCache_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4b2b1c20;
}

void ShaderRegisterCache_obj::reset(){
            	HX_GC_STACKFRAME(&_hx_pos_c907763d9aea5fee_54_reset)
HXLINE(  55)		this->_fragmentTempCache =  ::away3d::materials::compilation::RegisterPool_obj::__alloc( HX_CTX ,HX_("ft",4e,59,00,00),8,false);
HXLINE(  56)		this->_vertexTempCache =  ::away3d::materials::compilation::RegisterPool_obj::__alloc( HX_CTX ,HX_("vt",3e,67,00,00),8,false);
HXLINE(  57)		this->_varyingCache =  ::away3d::materials::compilation::RegisterPool_obj::__alloc( HX_CTX ,HX_("v",76,00,00,00),8,null());
HXLINE(  58)		this->_textureCache =  ::away3d::materials::compilation::RegisterPool_obj::__alloc( HX_CTX ,HX_("fs",4d,59,00,00),8,null());
HXLINE(  59)		this->_vertexAttributesCache =  ::away3d::materials::compilation::RegisterPool_obj::__alloc( HX_CTX ,HX_("va",2b,67,00,00),8,null());
HXLINE(  60)		this->_fragmentConstantsCache =  ::away3d::materials::compilation::RegisterPool_obj::__alloc( HX_CTX ,HX_("fc",3d,59,00,00),28,null());
HXLINE(  61)		this->_vertexConstantsCache =  ::away3d::materials::compilation::RegisterPool_obj::__alloc( HX_CTX ,HX_("vc",2d,67,00,00),128,null());
HXLINE(  62)		this->_fragmentOutputRegister =  ::away3d::materials::compilation::ShaderRegisterElement_obj::__alloc( HX_CTX ,HX_("oc",14,61,00,00),-1,null());
HXLINE(  63)		this->_vertexOutputRegister =  ::away3d::materials::compilation::ShaderRegisterElement_obj::__alloc( HX_CTX ,HX_("op",21,61,00,00),-1,null());
HXLINE(  64)		this->_numUsedVertexConstants = 0;
HXLINE(  65)		this->_numUsedStreams = 0;
HXLINE(  66)		this->_numUsedTextures = 0;
HXLINE(  67)		this->_numUsedVaryings = 0;
HXLINE(  68)		this->_numUsedFragmentConstants = 0;
HXLINE(  69)		{
HXLINE(  69)			int _g = 0;
HXDLIN(  69)			int _g1 = this->_vertexAttributesOffset;
HXDLIN(  69)			while((_g < _g1)){
HXLINE(  69)				_g = (_g + 1);
HXDLIN(  69)				int i = (_g - 1);
HXLINE(  70)				this->getFreeVertexAttribute();
            			}
            		}
HXLINE(  71)		{
HXLINE(  71)			int _g2 = 0;
HXDLIN(  71)			int _g3 = this->_vertexConstantOffset;
HXDLIN(  71)			while((_g2 < _g3)){
HXLINE(  71)				_g2 = (_g2 + 1);
HXDLIN(  71)				int i = (_g2 - 1);
HXLINE(  72)				this->getFreeVertexConstant();
            			}
            		}
HXLINE(  73)		{
HXLINE(  73)			int _g4 = 0;
HXDLIN(  73)			int _g5 = this->_varyingsOffset;
HXDLIN(  73)			while((_g4 < _g5)){
HXLINE(  73)				_g4 = (_g4 + 1);
HXDLIN(  73)				int i = (_g4 - 1);
HXLINE(  74)				this->getFreeVarying();
            			}
            		}
HXLINE(  75)		{
HXLINE(  75)			int _g6 = 0;
HXDLIN(  75)			int _g7 = this->_fragmentConstantOffset;
HXDLIN(  75)			while((_g6 < _g7)){
HXLINE(  75)				_g6 = (_g6 + 1);
HXDLIN(  75)				int i = (_g6 - 1);
HXLINE(  76)				this->getFreeFragmentConstant();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterCache_obj,reset,(void))

void ShaderRegisterCache_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_c907763d9aea5fee_83_dispose)
HXLINE(  84)		this->_fragmentTempCache->dispose();
HXLINE(  85)		this->_vertexTempCache->dispose();
HXLINE(  86)		this->_varyingCache->dispose();
HXLINE(  87)		this->_fragmentConstantsCache->dispose();
HXLINE(  88)		this->_vertexAttributesCache->dispose();
HXLINE(  90)		this->_fragmentTempCache = null();
HXLINE(  91)		this->_vertexTempCache = null();
HXLINE(  92)		this->_varyingCache = null();
HXLINE(  93)		this->_fragmentConstantsCache = null();
HXLINE(  94)		this->_vertexAttributesCache = null();
HXLINE(  95)		this->_fragmentOutputRegister = null();
HXLINE(  96)		this->_vertexOutputRegister = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterCache_obj,dispose,(void))

void ShaderRegisterCache_obj::addFragmentTempUsages( ::away3d::materials::compilation::ShaderRegisterElement _hx_register,int usageCount){
            	HX_STACKFRAME(&_hx_pos_c907763d9aea5fee_107_addFragmentTempUsages)
HXDLIN( 107)		this->_fragmentTempCache->addUsage(_hx_register,usageCount);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShaderRegisterCache_obj,addFragmentTempUsages,(void))

void ShaderRegisterCache_obj::removeFragmentTempUsage( ::away3d::materials::compilation::ShaderRegisterElement _hx_register){
            	HX_STACKFRAME(&_hx_pos_c907763d9aea5fee_116_removeFragmentTempUsage)
HXDLIN( 116)		this->_fragmentTempCache->removeUsage(_hx_register);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderRegisterCache_obj,removeFragmentTempUsage,(void))

void ShaderRegisterCache_obj::addVertexTempUsages( ::away3d::materials::compilation::ShaderRegisterElement _hx_register,int usageCount){
            	HX_STACKFRAME(&_hx_pos_c907763d9aea5fee_127_addVertexTempUsages)
HXDLIN( 127)		this->_vertexTempCache->addUsage(_hx_register,usageCount);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShaderRegisterCache_obj,addVertexTempUsages,(void))

void ShaderRegisterCache_obj::removeVertexTempUsage( ::away3d::materials::compilation::ShaderRegisterElement _hx_register){
            	HX_STACKFRAME(&_hx_pos_c907763d9aea5fee_136_removeVertexTempUsage)
HXDLIN( 136)		this->_vertexTempCache->removeUsage(_hx_register);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderRegisterCache_obj,removeVertexTempUsage,(void))

 ::away3d::materials::compilation::ShaderRegisterElement ShaderRegisterCache_obj::getFreeFragmentVectorTemp(){
            	HX_STACKFRAME(&_hx_pos_c907763d9aea5fee_145_getFreeFragmentVectorTemp)
HXDLIN( 145)		return this->_fragmentTempCache->requestFreeVectorReg();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterCache_obj,getFreeFragmentVectorTemp,return )

 ::away3d::materials::compilation::ShaderRegisterElement ShaderRegisterCache_obj::getFreeFragmentSingleTemp(){
            	HX_STACKFRAME(&_hx_pos_c907763d9aea5fee_153_getFreeFragmentSingleTemp)
HXDLIN( 153)		return this->_fragmentTempCache->requestFreeRegComponent();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterCache_obj,getFreeFragmentSingleTemp,return )

 ::away3d::materials::compilation::ShaderRegisterElement ShaderRegisterCache_obj::getFreeVarying(){
            	HX_STACKFRAME(&_hx_pos_c907763d9aea5fee_160_getFreeVarying)
HXLINE( 161)		 ::away3d::materials::compilation::ShaderRegisterElement result = this->_varyingCache->requestFreeVectorReg();
HXLINE( 162)		++this->_numUsedVaryings;
HXLINE( 163)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterCache_obj,getFreeVarying,return )

 ::away3d::materials::compilation::ShaderRegisterElement ShaderRegisterCache_obj::getFreeFragmentConstant(){
            	HX_STACKFRAME(&_hx_pos_c907763d9aea5fee_170_getFreeFragmentConstant)
HXLINE( 171)		 ::away3d::materials::compilation::ShaderRegisterElement result = this->_fragmentConstantsCache->requestFreeVectorReg();
HXLINE( 172)		++this->_numUsedFragmentConstants;
HXLINE( 173)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterCache_obj,getFreeFragmentConstant,return )

 ::away3d::materials::compilation::ShaderRegisterElement ShaderRegisterCache_obj::getFreeVertexConstant(){
            	HX_STACKFRAME(&_hx_pos_c907763d9aea5fee_180_getFreeVertexConstant)
HXLINE( 181)		 ::away3d::materials::compilation::ShaderRegisterElement result = this->_vertexConstantsCache->requestFreeVectorReg();
HXLINE( 182)		++this->_numUsedVertexConstants;
HXLINE( 183)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterCache_obj,getFreeVertexConstant,return )

 ::away3d::materials::compilation::ShaderRegisterElement ShaderRegisterCache_obj::getFreeVertexVectorTemp(){
            	HX_STACKFRAME(&_hx_pos_c907763d9aea5fee_191_getFreeVertexVectorTemp)
HXDLIN( 191)		return this->_vertexTempCache->requestFreeVectorReg();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterCache_obj,getFreeVertexVectorTemp,return )

 ::away3d::materials::compilation::ShaderRegisterElement ShaderRegisterCache_obj::getFreeVertexSingleTemp(){
            	HX_STACKFRAME(&_hx_pos_c907763d9aea5fee_199_getFreeVertexSingleTemp)
HXDLIN( 199)		return this->_vertexTempCache->requestFreeRegComponent();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterCache_obj,getFreeVertexSingleTemp,return )

 ::away3d::materials::compilation::ShaderRegisterElement ShaderRegisterCache_obj::getFreeVertexAttribute(){
            	HX_STACKFRAME(&_hx_pos_c907763d9aea5fee_206_getFreeVertexAttribute)
HXLINE( 207)		 ::away3d::materials::compilation::ShaderRegisterElement result = this->_vertexAttributesCache->requestFreeVectorReg();
HXLINE( 208)		++this->_numUsedStreams;
HXLINE( 209)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterCache_obj,getFreeVertexAttribute,return )

 ::away3d::materials::compilation::ShaderRegisterElement ShaderRegisterCache_obj::getFreeTextureReg(){
            	HX_STACKFRAME(&_hx_pos_c907763d9aea5fee_216_getFreeTextureReg)
HXLINE( 217)		 ::away3d::materials::compilation::ShaderRegisterElement result = this->_textureCache->requestFreeVectorReg();
HXLINE( 218)		++this->_numUsedTextures;
HXLINE( 219)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterCache_obj,getFreeTextureReg,return )

int ShaderRegisterCache_obj::get_vertexConstantOffset(){
            	HX_STACKFRAME(&_hx_pos_c907763d9aea5fee_227_get_vertexConstantOffset)
HXDLIN( 227)		return this->_vertexConstantOffset;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterCache_obj,get_vertexConstantOffset,return )

int ShaderRegisterCache_obj::set_vertexConstantOffset(int vertexConstantOffset){
            	HX_STACKFRAME(&_hx_pos_c907763d9aea5fee_231_set_vertexConstantOffset)
HXLINE( 232)		this->_vertexConstantOffset = vertexConstantOffset;
HXLINE( 233)		return vertexConstantOffset;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderRegisterCache_obj,set_vertexConstantOffset,return )

int ShaderRegisterCache_obj::get_vertexAttributesOffset(){
            	HX_STACKFRAME(&_hx_pos_c907763d9aea5fee_241_get_vertexAttributesOffset)
HXDLIN( 241)		return this->_vertexAttributesOffset;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterCache_obj,get_vertexAttributesOffset,return )

int ShaderRegisterCache_obj::set_vertexAttributesOffset(int value){
            	HX_STACKFRAME(&_hx_pos_c907763d9aea5fee_245_set_vertexAttributesOffset)
HXLINE( 246)		this->_vertexAttributesOffset = value;
HXLINE( 247)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderRegisterCache_obj,set_vertexAttributesOffset,return )

int ShaderRegisterCache_obj::get_varyingsOffset(){
            	HX_STACKFRAME(&_hx_pos_c907763d9aea5fee_255_get_varyingsOffset)
HXDLIN( 255)		return this->_varyingsOffset;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterCache_obj,get_varyingsOffset,return )

int ShaderRegisterCache_obj::set_varyingsOffset(int value){
            	HX_STACKFRAME(&_hx_pos_c907763d9aea5fee_259_set_varyingsOffset)
HXLINE( 260)		this->_varyingsOffset = value;
HXLINE( 261)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderRegisterCache_obj,set_varyingsOffset,return )

int ShaderRegisterCache_obj::get_fragmentConstantOffset(){
            	HX_STACKFRAME(&_hx_pos_c907763d9aea5fee_269_get_fragmentConstantOffset)
HXDLIN( 269)		return this->_fragmentConstantOffset;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterCache_obj,get_fragmentConstantOffset,return )

int ShaderRegisterCache_obj::set_fragmentConstantOffset(int value){
            	HX_STACKFRAME(&_hx_pos_c907763d9aea5fee_273_set_fragmentConstantOffset)
HXLINE( 274)		this->_fragmentConstantOffset = value;
HXLINE( 275)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderRegisterCache_obj,set_fragmentConstantOffset,return )

 ::away3d::materials::compilation::ShaderRegisterElement ShaderRegisterCache_obj::get_fragmentOutputRegister(){
            	HX_STACKFRAME(&_hx_pos_c907763d9aea5fee_283_get_fragmentOutputRegister)
HXDLIN( 283)		return this->_fragmentOutputRegister;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterCache_obj,get_fragmentOutputRegister,return )

int ShaderRegisterCache_obj::get_numUsedVertexConstants(){
            	HX_STACKFRAME(&_hx_pos_c907763d9aea5fee_291_get_numUsedVertexConstants)
HXDLIN( 291)		return this->_numUsedVertexConstants;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterCache_obj,get_numUsedVertexConstants,return )

int ShaderRegisterCache_obj::get_numUsedFragmentConstants(){
            	HX_STACKFRAME(&_hx_pos_c907763d9aea5fee_299_get_numUsedFragmentConstants)
HXDLIN( 299)		return this->_numUsedFragmentConstants;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterCache_obj,get_numUsedFragmentConstants,return )

int ShaderRegisterCache_obj::get_numUsedStreams(){
            	HX_STACKFRAME(&_hx_pos_c907763d9aea5fee_307_get_numUsedStreams)
HXDLIN( 307)		return this->_numUsedStreams;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterCache_obj,get_numUsedStreams,return )

int ShaderRegisterCache_obj::get_numUsedTextures(){
            	HX_STACKFRAME(&_hx_pos_c907763d9aea5fee_315_get_numUsedTextures)
HXDLIN( 315)		return this->_numUsedTextures;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterCache_obj,get_numUsedTextures,return )

int ShaderRegisterCache_obj::get_numUsedVaryings(){
            	HX_STACKFRAME(&_hx_pos_c907763d9aea5fee_323_get_numUsedVaryings)
HXDLIN( 323)		return this->_numUsedVaryings;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterCache_obj,get_numUsedVaryings,return )


::hx::ObjectPtr< ShaderRegisterCache_obj > ShaderRegisterCache_obj::__new(::String profile) {
	::hx::ObjectPtr< ShaderRegisterCache_obj > __this = new ShaderRegisterCache_obj();
	__this->__construct(profile);
	return __this;
}

::hx::ObjectPtr< ShaderRegisterCache_obj > ShaderRegisterCache_obj::__alloc(::hx::Ctx *_hx_ctx,::String profile) {
	ShaderRegisterCache_obj *__this = (ShaderRegisterCache_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShaderRegisterCache_obj), true, "away3d.materials.compilation.ShaderRegisterCache"));
	*(void **)__this = ShaderRegisterCache_obj::_hx_vtable;
	__this->__construct(profile);
	return __this;
}

ShaderRegisterCache_obj::ShaderRegisterCache_obj()
{
}

void ShaderRegisterCache_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShaderRegisterCache);
	HX_MARK_MEMBER_NAME(_fragmentTempCache,"_fragmentTempCache");
	HX_MARK_MEMBER_NAME(_vertexTempCache,"_vertexTempCache");
	HX_MARK_MEMBER_NAME(_varyingCache,"_varyingCache");
	HX_MARK_MEMBER_NAME(_fragmentConstantsCache,"_fragmentConstantsCache");
	HX_MARK_MEMBER_NAME(_vertexConstantsCache,"_vertexConstantsCache");
	HX_MARK_MEMBER_NAME(_textureCache,"_textureCache");
	HX_MARK_MEMBER_NAME(_vertexAttributesCache,"_vertexAttributesCache");
	HX_MARK_MEMBER_NAME(_vertexConstantOffset,"_vertexConstantOffset");
	HX_MARK_MEMBER_NAME(_vertexAttributesOffset,"_vertexAttributesOffset");
	HX_MARK_MEMBER_NAME(_varyingsOffset,"_varyingsOffset");
	HX_MARK_MEMBER_NAME(_fragmentConstantOffset,"_fragmentConstantOffset");
	HX_MARK_MEMBER_NAME(_fragmentOutputRegister,"_fragmentOutputRegister");
	HX_MARK_MEMBER_NAME(_vertexOutputRegister,"_vertexOutputRegister");
	HX_MARK_MEMBER_NAME(_numUsedVertexConstants,"_numUsedVertexConstants");
	HX_MARK_MEMBER_NAME(_numUsedFragmentConstants,"_numUsedFragmentConstants");
	HX_MARK_MEMBER_NAME(_numUsedStreams,"_numUsedStreams");
	HX_MARK_MEMBER_NAME(_numUsedTextures,"_numUsedTextures");
	HX_MARK_MEMBER_NAME(_numUsedVaryings,"_numUsedVaryings");
	HX_MARK_MEMBER_NAME(_profile,"_profile");
	HX_MARK_END_CLASS();
}

void ShaderRegisterCache_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_fragmentTempCache,"_fragmentTempCache");
	HX_VISIT_MEMBER_NAME(_vertexTempCache,"_vertexTempCache");
	HX_VISIT_MEMBER_NAME(_varyingCache,"_varyingCache");
	HX_VISIT_MEMBER_NAME(_fragmentConstantsCache,"_fragmentConstantsCache");
	HX_VISIT_MEMBER_NAME(_vertexConstantsCache,"_vertexConstantsCache");
	HX_VISIT_MEMBER_NAME(_textureCache,"_textureCache");
	HX_VISIT_MEMBER_NAME(_vertexAttributesCache,"_vertexAttributesCache");
	HX_VISIT_MEMBER_NAME(_vertexConstantOffset,"_vertexConstantOffset");
	HX_VISIT_MEMBER_NAME(_vertexAttributesOffset,"_vertexAttributesOffset");
	HX_VISIT_MEMBER_NAME(_varyingsOffset,"_varyingsOffset");
	HX_VISIT_MEMBER_NAME(_fragmentConstantOffset,"_fragmentConstantOffset");
	HX_VISIT_MEMBER_NAME(_fragmentOutputRegister,"_fragmentOutputRegister");
	HX_VISIT_MEMBER_NAME(_vertexOutputRegister,"_vertexOutputRegister");
	HX_VISIT_MEMBER_NAME(_numUsedVertexConstants,"_numUsedVertexConstants");
	HX_VISIT_MEMBER_NAME(_numUsedFragmentConstants,"_numUsedFragmentConstants");
	HX_VISIT_MEMBER_NAME(_numUsedStreams,"_numUsedStreams");
	HX_VISIT_MEMBER_NAME(_numUsedTextures,"_numUsedTextures");
	HX_VISIT_MEMBER_NAME(_numUsedVaryings,"_numUsedVaryings");
	HX_VISIT_MEMBER_NAME(_profile,"_profile");
}

::hx::Val ShaderRegisterCache_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_profile") ) { return ::hx::Val( _profile ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_varyingCache") ) { return ::hx::Val( _varyingCache ); }
		if (HX_FIELD_EQ(inName,"_textureCache") ) { return ::hx::Val( _textureCache ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"varyingsOffset") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_varyingsOffset() ); }
		if (HX_FIELD_EQ(inName,"numUsedStreams") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numUsedStreams() ); }
		if (HX_FIELD_EQ(inName,"getFreeVarying") ) { return ::hx::Val( getFreeVarying_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"numUsedTextures") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numUsedTextures() ); }
		if (HX_FIELD_EQ(inName,"numUsedVaryings") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numUsedVaryings() ); }
		if (HX_FIELD_EQ(inName,"_varyingsOffset") ) { return ::hx::Val( _varyingsOffset ); }
		if (HX_FIELD_EQ(inName,"_numUsedStreams") ) { return ::hx::Val( _numUsedStreams ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_vertexTempCache") ) { return ::hx::Val( _vertexTempCache ); }
		if (HX_FIELD_EQ(inName,"_numUsedTextures") ) { return ::hx::Val( _numUsedTextures ); }
		if (HX_FIELD_EQ(inName,"_numUsedVaryings") ) { return ::hx::Val( _numUsedVaryings ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getFreeTextureReg") ) { return ::hx::Val( getFreeTextureReg_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_fragmentTempCache") ) { return ::hx::Val( _fragmentTempCache ); }
		if (HX_FIELD_EQ(inName,"get_varyingsOffset") ) { return ::hx::Val( get_varyingsOffset_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_varyingsOffset") ) { return ::hx::Val( set_varyingsOffset_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numUsedStreams") ) { return ::hx::Val( get_numUsedStreams_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addVertexTempUsages") ) { return ::hx::Val( addVertexTempUsages_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numUsedTextures") ) { return ::hx::Val( get_numUsedTextures_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numUsedVaryings") ) { return ::hx::Val( get_numUsedVaryings_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"vertexConstantOffset") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_vertexConstantOffset() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_vertexConstantsCache") ) { return ::hx::Val( _vertexConstantsCache ); }
		if (HX_FIELD_EQ(inName,"_vertexConstantOffset") ) { return ::hx::Val( _vertexConstantOffset ); }
		if (HX_FIELD_EQ(inName,"_vertexOutputRegister") ) { return ::hx::Val( _vertexOutputRegister ); }
		if (HX_FIELD_EQ(inName,"addFragmentTempUsages") ) { return ::hx::Val( addFragmentTempUsages_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeVertexTempUsage") ) { return ::hx::Val( removeVertexTempUsage_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFreeVertexConstant") ) { return ::hx::Val( getFreeVertexConstant_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"vertexAttributesOffset") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_vertexAttributesOffset() ); }
		if (HX_FIELD_EQ(inName,"fragmentConstantOffset") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_fragmentConstantOffset() ); }
		if (HX_FIELD_EQ(inName,"fragmentOutputRegister") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_fragmentOutputRegister() ); }
		if (HX_FIELD_EQ(inName,"numUsedVertexConstants") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numUsedVertexConstants() ); }
		if (HX_FIELD_EQ(inName,"_vertexAttributesCache") ) { return ::hx::Val( _vertexAttributesCache ); }
		if (HX_FIELD_EQ(inName,"getFreeVertexAttribute") ) { return ::hx::Val( getFreeVertexAttribute_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_fragmentConstantsCache") ) { return ::hx::Val( _fragmentConstantsCache ); }
		if (HX_FIELD_EQ(inName,"_vertexAttributesOffset") ) { return ::hx::Val( _vertexAttributesOffset ); }
		if (HX_FIELD_EQ(inName,"_fragmentConstantOffset") ) { return ::hx::Val( _fragmentConstantOffset ); }
		if (HX_FIELD_EQ(inName,"_fragmentOutputRegister") ) { return ::hx::Val( _fragmentOutputRegister ); }
		if (HX_FIELD_EQ(inName,"_numUsedVertexConstants") ) { return ::hx::Val( _numUsedVertexConstants ); }
		if (HX_FIELD_EQ(inName,"removeFragmentTempUsage") ) { return ::hx::Val( removeFragmentTempUsage_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFreeFragmentConstant") ) { return ::hx::Val( getFreeFragmentConstant_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFreeVertexVectorTemp") ) { return ::hx::Val( getFreeVertexVectorTemp_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFreeVertexSingleTemp") ) { return ::hx::Val( getFreeVertexSingleTemp_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"numUsedFragmentConstants") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numUsedFragmentConstants() ); }
		if (HX_FIELD_EQ(inName,"get_vertexConstantOffset") ) { return ::hx::Val( get_vertexConstantOffset_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_vertexConstantOffset") ) { return ::hx::Val( set_vertexConstantOffset_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_numUsedFragmentConstants") ) { return ::hx::Val( _numUsedFragmentConstants ); }
		if (HX_FIELD_EQ(inName,"getFreeFragmentVectorTemp") ) { return ::hx::Val( getFreeFragmentVectorTemp_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFreeFragmentSingleTemp") ) { return ::hx::Val( getFreeFragmentSingleTemp_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"get_vertexAttributesOffset") ) { return ::hx::Val( get_vertexAttributesOffset_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_vertexAttributesOffset") ) { return ::hx::Val( set_vertexAttributesOffset_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_fragmentConstantOffset") ) { return ::hx::Val( get_fragmentConstantOffset_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_fragmentConstantOffset") ) { return ::hx::Val( set_fragmentConstantOffset_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_fragmentOutputRegister") ) { return ::hx::Val( get_fragmentOutputRegister_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numUsedVertexConstants") ) { return ::hx::Val( get_numUsedVertexConstants_dyn() ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"get_numUsedFragmentConstants") ) { return ::hx::Val( get_numUsedFragmentConstants_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ShaderRegisterCache_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_profile") ) { _profile=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_varyingCache") ) { _varyingCache=inValue.Cast<  ::away3d::materials::compilation::RegisterPool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_textureCache") ) { _textureCache=inValue.Cast<  ::away3d::materials::compilation::RegisterPool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"varyingsOffset") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_varyingsOffset(inValue.Cast< int >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_varyingsOffset") ) { _varyingsOffset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numUsedStreams") ) { _numUsedStreams=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_vertexTempCache") ) { _vertexTempCache=inValue.Cast<  ::away3d::materials::compilation::RegisterPool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numUsedTextures") ) { _numUsedTextures=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numUsedVaryings") ) { _numUsedVaryings=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_fragmentTempCache") ) { _fragmentTempCache=inValue.Cast<  ::away3d::materials::compilation::RegisterPool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"vertexConstantOffset") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_vertexConstantOffset(inValue.Cast< int >()) ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_vertexConstantsCache") ) { _vertexConstantsCache=inValue.Cast<  ::away3d::materials::compilation::RegisterPool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vertexConstantOffset") ) { _vertexConstantOffset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vertexOutputRegister") ) { _vertexOutputRegister=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"vertexAttributesOffset") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_vertexAttributesOffset(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"fragmentConstantOffset") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_fragmentConstantOffset(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"_vertexAttributesCache") ) { _vertexAttributesCache=inValue.Cast<  ::away3d::materials::compilation::RegisterPool >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_fragmentConstantsCache") ) { _fragmentConstantsCache=inValue.Cast<  ::away3d::materials::compilation::RegisterPool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vertexAttributesOffset") ) { _vertexAttributesOffset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fragmentConstantOffset") ) { _fragmentConstantOffset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fragmentOutputRegister") ) { _fragmentOutputRegister=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numUsedVertexConstants") ) { _numUsedVertexConstants=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_numUsedFragmentConstants") ) { _numUsedFragmentConstants=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShaderRegisterCache_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("vertexConstantOffset",9b,06,ec,88));
	outFields->push(HX_("vertexAttributesOffset",4e,2f,a1,8e));
	outFields->push(HX_("varyingsOffset",f6,15,be,22));
	outFields->push(HX_("fragmentConstantOffset",07,f0,cf,26));
	outFields->push(HX_("fragmentOutputRegister",74,da,9f,03));
	outFields->push(HX_("numUsedVertexConstants",28,ce,57,a5));
	outFields->push(HX_("numUsedFragmentConstants",7c,3d,41,ad));
	outFields->push(HX_("numUsedStreams",90,56,cb,05));
	outFields->push(HX_("numUsedTextures",fb,c5,f3,eb));
	outFields->push(HX_("numUsedVaryings",c6,f4,ed,2a));
	outFields->push(HX_("_fragmentTempCache",5f,49,89,b8));
	outFields->push(HX_("_vertexTempCache",0b,59,56,53));
	outFields->push(HX_("_varyingCache",91,ca,23,b1));
	outFields->push(HX_("_fragmentConstantsCache",c2,ec,20,f4));
	outFields->push(HX_("_vertexConstantsCache",96,8d,ff,31));
	outFields->push(HX_("_textureCache",46,da,22,1c));
	outFields->push(HX_("_vertexAttributesCache",28,2c,ba,30));
	outFields->push(HX_("_vertexConstantOffset",7a,10,87,f7));
	outFields->push(HX_("_vertexAttributesOffset",ed,ae,79,21));
	outFields->push(HX_("_varyingsOffset",95,5e,1e,6c));
	outFields->push(HX_("_fragmentConstantOffset",a6,6f,a8,b9));
	outFields->push(HX_("_fragmentOutputRegister",13,5a,78,96));
	outFields->push(HX_("_vertexOutputRegister",e7,fa,56,d4));
	outFields->push(HX_("_numUsedVertexConstants",c7,4d,30,38));
	outFields->push(HX_("_numUsedFragmentConstants",db,22,f0,06));
	outFields->push(HX_("_numUsedStreams",2f,9f,2b,4f));
	outFields->push(HX_("_numUsedTextures",7c,08,d3,d6));
	outFields->push(HX_("_numUsedVaryings",47,37,cd,15));
	outFields->push(HX_("_profile",aa,a2,01,2d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ShaderRegisterCache_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::away3d::materials::compilation::RegisterPool */ ,(int)offsetof(ShaderRegisterCache_obj,_fragmentTempCache),HX_("_fragmentTempCache",5f,49,89,b8)},
	{::hx::fsObject /*  ::away3d::materials::compilation::RegisterPool */ ,(int)offsetof(ShaderRegisterCache_obj,_vertexTempCache),HX_("_vertexTempCache",0b,59,56,53)},
	{::hx::fsObject /*  ::away3d::materials::compilation::RegisterPool */ ,(int)offsetof(ShaderRegisterCache_obj,_varyingCache),HX_("_varyingCache",91,ca,23,b1)},
	{::hx::fsObject /*  ::away3d::materials::compilation::RegisterPool */ ,(int)offsetof(ShaderRegisterCache_obj,_fragmentConstantsCache),HX_("_fragmentConstantsCache",c2,ec,20,f4)},
	{::hx::fsObject /*  ::away3d::materials::compilation::RegisterPool */ ,(int)offsetof(ShaderRegisterCache_obj,_vertexConstantsCache),HX_("_vertexConstantsCache",96,8d,ff,31)},
	{::hx::fsObject /*  ::away3d::materials::compilation::RegisterPool */ ,(int)offsetof(ShaderRegisterCache_obj,_textureCache),HX_("_textureCache",46,da,22,1c)},
	{::hx::fsObject /*  ::away3d::materials::compilation::RegisterPool */ ,(int)offsetof(ShaderRegisterCache_obj,_vertexAttributesCache),HX_("_vertexAttributesCache",28,2c,ba,30)},
	{::hx::fsInt,(int)offsetof(ShaderRegisterCache_obj,_vertexConstantOffset),HX_("_vertexConstantOffset",7a,10,87,f7)},
	{::hx::fsInt,(int)offsetof(ShaderRegisterCache_obj,_vertexAttributesOffset),HX_("_vertexAttributesOffset",ed,ae,79,21)},
	{::hx::fsInt,(int)offsetof(ShaderRegisterCache_obj,_varyingsOffset),HX_("_varyingsOffset",95,5e,1e,6c)},
	{::hx::fsInt,(int)offsetof(ShaderRegisterCache_obj,_fragmentConstantOffset),HX_("_fragmentConstantOffset",a6,6f,a8,b9)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(ShaderRegisterCache_obj,_fragmentOutputRegister),HX_("_fragmentOutputRegister",13,5a,78,96)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(ShaderRegisterCache_obj,_vertexOutputRegister),HX_("_vertexOutputRegister",e7,fa,56,d4)},
	{::hx::fsInt,(int)offsetof(ShaderRegisterCache_obj,_numUsedVertexConstants),HX_("_numUsedVertexConstants",c7,4d,30,38)},
	{::hx::fsInt,(int)offsetof(ShaderRegisterCache_obj,_numUsedFragmentConstants),HX_("_numUsedFragmentConstants",db,22,f0,06)},
	{::hx::fsInt,(int)offsetof(ShaderRegisterCache_obj,_numUsedStreams),HX_("_numUsedStreams",2f,9f,2b,4f)},
	{::hx::fsInt,(int)offsetof(ShaderRegisterCache_obj,_numUsedTextures),HX_("_numUsedTextures",7c,08,d3,d6)},
	{::hx::fsInt,(int)offsetof(ShaderRegisterCache_obj,_numUsedVaryings),HX_("_numUsedVaryings",47,37,cd,15)},
	{::hx::fsString,(int)offsetof(ShaderRegisterCache_obj,_profile),HX_("_profile",aa,a2,01,2d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ShaderRegisterCache_obj_sStaticStorageInfo = 0;
#endif

static ::String ShaderRegisterCache_obj_sMemberFields[] = {
	HX_("_fragmentTempCache",5f,49,89,b8),
	HX_("_vertexTempCache",0b,59,56,53),
	HX_("_varyingCache",91,ca,23,b1),
	HX_("_fragmentConstantsCache",c2,ec,20,f4),
	HX_("_vertexConstantsCache",96,8d,ff,31),
	HX_("_textureCache",46,da,22,1c),
	HX_("_vertexAttributesCache",28,2c,ba,30),
	HX_("_vertexConstantOffset",7a,10,87,f7),
	HX_("_vertexAttributesOffset",ed,ae,79,21),
	HX_("_varyingsOffset",95,5e,1e,6c),
	HX_("_fragmentConstantOffset",a6,6f,a8,b9),
	HX_("_fragmentOutputRegister",13,5a,78,96),
	HX_("_vertexOutputRegister",e7,fa,56,d4),
	HX_("_numUsedVertexConstants",c7,4d,30,38),
	HX_("_numUsedFragmentConstants",db,22,f0,06),
	HX_("_numUsedStreams",2f,9f,2b,4f),
	HX_("_numUsedTextures",7c,08,d3,d6),
	HX_("_numUsedVaryings",47,37,cd,15),
	HX_("_profile",aa,a2,01,2d),
	HX_("reset",cf,49,c8,e6),
	HX_("dispose",9f,80,4c,bb),
	HX_("addFragmentTempUsages",d7,58,ec,eb),
	HX_("removeFragmentTempUsage",99,7e,a7,1a),
	HX_("addVertexTempUsages",2b,43,43,e8),
	HX_("removeVertexTempUsage",85,b1,6f,c8),
	HX_("getFreeFragmentVectorTemp",69,36,52,b2),
	HX_("getFreeFragmentSingleTemp",ae,b2,84,66),
	HX_("getFreeVarying",2e,c8,58,00),
	HX_("getFreeFragmentConstant",d6,b9,3f,62),
	HX_("getFreeVertexConstant",ea,64,d2,35),
	HX_("getFreeVertexVectorTemp",7d,ce,34,90),
	HX_("getFreeVertexSingleTemp",c2,4a,67,44),
	HX_("getFreeVertexAttribute",d6,e1,ca,98),
	HX_("getFreeTextureReg",3b,e2,fe,82),
	HX_("get_vertexConstantOffset",24,24,88,cb),
	HX_("set_vertexConstantOffset",98,a5,62,de),
	HX_("get_vertexAttributesOffset",17,81,a6,c6),
	HX_("set_vertexAttributesOffset",8b,47,3b,26),
	HX_("get_varyingsOffset",bf,f6,57,be),
	HX_("set_varyingsOffset",33,29,07,9b),
	HX_("get_fragmentConstantOffset",d0,41,d5,5e),
	HX_("set_fragmentConstantOffset",44,08,6a,be),
	HX_("get_fragmentOutputRegister",3d,2c,a5,3b),
	HX_("get_numUsedVertexConstants",f1,1f,5d,dd),
	HX_("get_numUsedFragmentConstants",85,53,95,ee),
	HX_("get_numUsedStreams",59,37,65,a1),
	HX_("get_numUsedTextures",12,95,fe,76),
	HX_("get_numUsedVaryings",dd,c3,f8,b5),
	::String(null()) };

::hx::Class ShaderRegisterCache_obj::__mClass;

void ShaderRegisterCache_obj::__register()
{
	ShaderRegisterCache_obj _hx_dummy;
	ShaderRegisterCache_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.materials.compilation.ShaderRegisterCache",3e,89,17,a7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ShaderRegisterCache_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ShaderRegisterCache_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShaderRegisterCache_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShaderRegisterCache_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace materials
} // end namespace compilation
