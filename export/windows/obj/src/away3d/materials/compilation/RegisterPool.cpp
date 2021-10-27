#include <hxcpp.h>

#ifndef INCLUDED_away3d_materials_compilation_RegisterPool
#include <away3d/materials/compilation/RegisterPool.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterElement
#include <away3d/materials/compilation/ShaderRegisterElement.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b34af30f998f0728_36_new,"away3d.materials.compilation.RegisterPool","new",0x83a6ac0d,"away3d.materials.compilation.RegisterPool.new","away3d/materials/compilation/RegisterPool.hx",36,0x1b0d9120)
HX_LOCAL_STACK_FRAME(_hx_pos_b34af30f998f0728_47_requestFreeVectorReg,"away3d.materials.compilation.RegisterPool","requestFreeVectorReg",0xfbb0c6e9,"away3d.materials.compilation.RegisterPool.requestFreeVectorReg","away3d/materials/compilation/RegisterPool.hx",47,0x1b0d9120)
HX_LOCAL_STACK_FRAME(_hx_pos_b34af30f998f0728_64_requestFreeRegComponent,"away3d.materials.compilation.RegisterPool","requestFreeRegComponent",0x7c419131,"away3d.materials.compilation.RegisterPool.requestFreeRegComponent","away3d/materials/compilation/RegisterPool.hx",64,0x1b0d9120)
HX_LOCAL_STACK_FRAME(_hx_pos_b34af30f998f0728_89_addUsage,"away3d.materials.compilation.RegisterPool","addUsage",0xaabd3473,"away3d.materials.compilation.RegisterPool.addUsage","away3d/materials/compilation/RegisterPool.hx",89,0x1b0d9120)
HX_LOCAL_STACK_FRAME(_hx_pos_b34af30f998f0728_101_removeUsage,"away3d.materials.compilation.RegisterPool","removeUsage",0xdfad0aea,"away3d.materials.compilation.RegisterPool.removeUsage","away3d/materials/compilation/RegisterPool.hx",101,0x1b0d9120)
HX_LOCAL_STACK_FRAME(_hx_pos_b34af30f998f0728_116_dispose,"away3d.materials.compilation.RegisterPool","dispose",0xacfb36cc,"away3d.materials.compilation.RegisterPool.dispose","away3d/materials/compilation/RegisterPool.hx",116,0x1b0d9120)
HX_LOCAL_STACK_FRAME(_hx_pos_b34af30f998f0728_127_hasRegisteredRegs,"away3d.materials.compilation.RegisterPool","hasRegisteredRegs",0xe07d50a8,"away3d.materials.compilation.RegisterPool.hasRegisteredRegs","away3d/materials/compilation/RegisterPool.hx",127,0x1b0d9120)
HX_LOCAL_STACK_FRAME(_hx_pos_b34af30f998f0728_140_initRegisters,"away3d.materials.compilation.RegisterPool","initRegisters",0x2ff2c96d,"away3d.materials.compilation.RegisterPool.initRegisters","away3d/materials/compilation/RegisterPool.hx",140,0x1b0d9120)
HX_LOCAL_STACK_FRAME(_hx_pos_b34af30f998f0728_188_isRegisterUsed,"away3d.materials.compilation.RegisterPool","isRegisterUsed",0x6b50cabd,"away3d.materials.compilation.RegisterPool.isRegisterUsed","away3d/materials/compilation/RegisterPool.hx",188,0x1b0d9120)
HX_LOCAL_STACK_FRAME(_hx_pos_b34af30f998f0728_158__initPool,"away3d.materials.compilation.RegisterPool","_initPool",0x5a1402d8,"away3d.materials.compilation.RegisterPool._initPool","away3d/materials/compilation/RegisterPool.hx",158,0x1b0d9120)
HX_LOCAL_STACK_FRAME(_hx_pos_b34af30f998f0728_16_boot,"away3d.materials.compilation.RegisterPool","boot",0xa648dfe5,"away3d.materials.compilation.RegisterPool.boot","away3d/materials/compilation/RegisterPool.hx",16,0x1b0d9120)
HX_LOCAL_STACK_FRAME(_hx_pos_b34af30f998f0728_17_boot,"away3d.materials.compilation.RegisterPool","boot",0xa648dfe5,"away3d.materials.compilation.RegisterPool.boot","away3d/materials/compilation/RegisterPool.hx",17,0x1b0d9120)
namespace away3d{
namespace materials{
namespace compilation{

void RegisterPool_obj::__construct(::String regName,int regCount,::hx::Null< bool >  __o_persistent){
            		bool persistent = __o_persistent.Default(true);
            	HX_STACKFRAME(&_hx_pos_b34af30f998f0728_36_new)
HXLINE(  37)		this->_regName = regName;
HXLINE(  38)		this->_regCount = regCount;
HXLINE(  39)		this->_persistent = persistent;
HXLINE(  40)		this->initRegisters(regName,regCount);
            	}

Dynamic RegisterPool_obj::__CreateEmpty() { return new RegisterPool_obj; }

void *RegisterPool_obj::_hx_vtable = 0;

Dynamic RegisterPool_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RegisterPool_obj > _hx_result = new RegisterPool_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool RegisterPool_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6a480f15;
}

 ::away3d::materials::compilation::ShaderRegisterElement RegisterPool_obj::requestFreeVectorReg(){
            	HX_GC_STACKFRAME(&_hx_pos_b34af30f998f0728_47_requestFreeVectorReg)
HXLINE(  48)		{
HXLINE(  48)			int _g = 0;
HXDLIN(  48)			int _g1 = this->_regCount;
HXDLIN(  48)			while((_g < _g1)){
HXLINE(  48)				_g = (_g + 1);
HXDLIN(  48)				int i = (_g - 1);
HXLINE(  49)				if (!(this->isRegisterUsed(i))) {
HXLINE(  50)					if (this->_persistent) {
HXLINE(  51)						int _g = i;
HXDLIN(  51)						 ::openfl::_Vector::IntVector _g1 = this->_usedVectorCount;
HXDLIN(  51)						_g1->set(_g,(_g1->get(_g) + 1));
            					}
HXLINE(  52)					return this->_vectorRegisters->get(i).StaticCast<  ::away3d::materials::compilation::ShaderRegisterElement >();
            				}
            			}
            		}
HXLINE(  56)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("Register overflow!",c2,b6,ea,0c),null())));
HXDLIN(  56)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(RegisterPool_obj,requestFreeVectorReg,return )

 ::away3d::materials::compilation::ShaderRegisterElement RegisterPool_obj::requestFreeRegComponent(){
            	HX_GC_STACKFRAME(&_hx_pos_b34af30f998f0728_64_requestFreeRegComponent)
HXLINE(  65)		{
HXLINE(  65)			int _g = 0;
HXDLIN(  65)			int _g1 = this->_regCount;
HXDLIN(  65)			while((_g < _g1)){
HXLINE(  65)				_g = (_g + 1);
HXDLIN(  65)				int i = (_g - 1);
HXLINE(  66)				int a = this->_usedVectorCount->get(i);
HXDLIN(  66)				bool aNeg = (a < 0);
HXDLIN(  66)				bool bNeg = (0 < 0);
HXDLIN(  66)				bool _hx_tmp;
HXDLIN(  66)				if ((aNeg != bNeg)) {
HXLINE(  66)					_hx_tmp = aNeg;
            				}
            				else {
HXLINE(  66)					_hx_tmp = (a > 0);
            				}
HXDLIN(  66)				if (_hx_tmp) {
HXLINE(  67)					continue;
            				}
HXLINE(  68)				{
HXLINE(  69)					if ((this->_usedSingleCount->get(0).StaticCast<  ::openfl::_Vector::IntVector >()->get(i) == 0)) {
HXLINE(  70)						if (this->_persistent) {
HXLINE(  71)							int _g = i;
HXDLIN(  71)							 ::openfl::_Vector::IntVector _g1 = this->_usedSingleCount->get(0).StaticCast<  ::openfl::_Vector::IntVector >();
HXDLIN(  71)							_g1->set(_g,(_g1->get(_g) + 1));
            						}
HXLINE(  72)						return Dynamic( this->_registerComponents->__get(0)->__GetItem(i)).StaticCast<  ::away3d::materials::compilation::ShaderRegisterElement >();
            					}
HXLINE(  69)					if ((this->_usedSingleCount->get(1).StaticCast<  ::openfl::_Vector::IntVector >()->get(i) == 0)) {
HXLINE(  70)						if (this->_persistent) {
HXLINE(  71)							int _g = i;
HXDLIN(  71)							 ::openfl::_Vector::IntVector _g1 = this->_usedSingleCount->get(1).StaticCast<  ::openfl::_Vector::IntVector >();
HXDLIN(  71)							_g1->set(_g,(_g1->get(_g) + 1));
            						}
HXLINE(  72)						return Dynamic( this->_registerComponents->__get(1)->__GetItem(i)).StaticCast<  ::away3d::materials::compilation::ShaderRegisterElement >();
            					}
HXLINE(  69)					if ((this->_usedSingleCount->get(2).StaticCast<  ::openfl::_Vector::IntVector >()->get(i) == 0)) {
HXLINE(  70)						if (this->_persistent) {
HXLINE(  71)							int _g = i;
HXDLIN(  71)							 ::openfl::_Vector::IntVector _g1 = this->_usedSingleCount->get(2).StaticCast<  ::openfl::_Vector::IntVector >();
HXDLIN(  71)							_g1->set(_g,(_g1->get(_g) + 1));
            						}
HXLINE(  72)						return Dynamic( this->_registerComponents->__get(2)->__GetItem(i)).StaticCast<  ::away3d::materials::compilation::ShaderRegisterElement >();
            					}
HXLINE(  69)					if ((this->_usedSingleCount->get(3).StaticCast<  ::openfl::_Vector::IntVector >()->get(i) == 0)) {
HXLINE(  70)						if (this->_persistent) {
HXLINE(  71)							int _g = i;
HXDLIN(  71)							 ::openfl::_Vector::IntVector _g1 = this->_usedSingleCount->get(3).StaticCast<  ::openfl::_Vector::IntVector >();
HXDLIN(  71)							_g1->set(_g,(_g1->get(_g) + 1));
            						}
HXLINE(  72)						return Dynamic( this->_registerComponents->__get(3)->__GetItem(i)).StaticCast<  ::away3d::materials::compilation::ShaderRegisterElement >();
            					}
            				}
            			}
            		}
HXLINE(  77)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("Register overflow!",c2,b6,ea,0c),null())));
HXDLIN(  77)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(RegisterPool_obj,requestFreeRegComponent,return )

void RegisterPool_obj::addUsage( ::away3d::materials::compilation::ShaderRegisterElement _hx_register,int usageCount){
            	HX_STACKFRAME(&_hx_pos_b34af30f998f0728_89_addUsage)
HXDLIN(  89)		if ((_hx_register->_component > -1)) {
HXLINE(  90)			int _g = _hx_register->get_index();
HXDLIN(  90)			 ::openfl::_Vector::IntVector _g1 = this->_usedSingleCount->get(_hx_register->_component).StaticCast<  ::openfl::_Vector::IntVector >();
HXDLIN(  90)			_g1->set(_g,(_g1->get(_g) + usageCount));
            		}
            		else {
HXLINE(  92)			int _g = _hx_register->get_index();
HXDLIN(  92)			 ::openfl::_Vector::IntVector _g1 = this->_usedVectorCount;
HXDLIN(  92)			_g1->set(_g,(_g1->get(_g) + usageCount));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(RegisterPool_obj,addUsage,(void))

void RegisterPool_obj::removeUsage( ::away3d::materials::compilation::ShaderRegisterElement _hx_register){
            	HX_GC_STACKFRAME(&_hx_pos_b34af30f998f0728_101_removeUsage)
HXDLIN( 101)		if ((_hx_register->_component > -1)) {
HXLINE( 102)			int _g = _hx_register->get_index();
HXDLIN( 102)			 ::openfl::_Vector::IntVector _g1 = this->_usedSingleCount->get(_hx_register->_component).StaticCast<  ::openfl::_Vector::IntVector >();
HXDLIN( 102)			int count = _g1->set(_g,(_g1->get(_g) - 1));
HXLINE( 103)			bool aNeg = (0 < 0);
HXDLIN( 103)			bool bNeg = (count < 0);
HXDLIN( 103)			bool _hx_tmp;
HXDLIN( 103)			if ((aNeg != bNeg)) {
HXLINE( 103)				_hx_tmp = aNeg;
            			}
            			else {
HXLINE( 103)				_hx_tmp = (0 > count);
            			}
HXDLIN( 103)			if (_hx_tmp) {
HXLINE( 104)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("More usages removed than exist!",86,55,6e,99),null())));
            			}
            		}
            		else {
HXLINE( 106)			int _g = _hx_register->get_index();
HXDLIN( 106)			 ::openfl::_Vector::IntVector _g1 = this->_usedVectorCount;
HXDLIN( 106)			int count = _g1->set(_g,(_g1->get(_g) - 1));
HXLINE( 107)			bool aNeg = (0 < 0);
HXDLIN( 107)			bool bNeg = (count < 0);
HXDLIN( 107)			bool _hx_tmp;
HXDLIN( 107)			if ((aNeg != bNeg)) {
HXLINE( 107)				_hx_tmp = aNeg;
            			}
            			else {
HXLINE( 107)				_hx_tmp = (0 > count);
            			}
HXDLIN( 107)			if (_hx_tmp) {
HXLINE( 108)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("More usages removed than exist!",86,55,6e,99),null())));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(RegisterPool_obj,removeUsage,(void))

void RegisterPool_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_b34af30f998f0728_116_dispose)
HXLINE( 117)		this->_vectorRegisters = null();
HXLINE( 118)		this->_registerComponents = null();
HXLINE( 119)		this->_usedSingleCount = null();
HXLINE( 120)		this->_usedVectorCount = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(RegisterPool_obj,dispose,(void))

bool RegisterPool_obj::hasRegisteredRegs(){
            	HX_STACKFRAME(&_hx_pos_b34af30f998f0728_127_hasRegisteredRegs)
HXLINE( 128)		{
HXLINE( 128)			int _g = 0;
HXDLIN( 128)			int _g1 = this->_regCount;
HXDLIN( 128)			while((_g < _g1)){
HXLINE( 128)				_g = (_g + 1);
HXDLIN( 128)				int i = (_g - 1);
HXLINE( 129)				if (this->isRegisterUsed(i)) {
HXLINE( 130)					return true;
            				}
            			}
            		}
HXLINE( 133)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RegisterPool_obj,hasRegisteredRegs,return )

void RegisterPool_obj::initRegisters(::String regName,int regCount){
            	HX_GC_STACKFRAME(&_hx_pos_b34af30f998f0728_140_initRegisters)
HXLINE( 142)		::String hash = ::away3d::materials::compilation::RegisterPool_obj::_initPool(regName,regCount);
HXLINE( 144)		this->_vectorRegisters = ( ( ::openfl::_Vector::ObjectVector)(::away3d::materials::compilation::RegisterPool_obj::_regPool->get(hash)) );
HXLINE( 145)		this->_registerComponents = ( (::cpp::VirtualArray)(::away3d::materials::compilation::RegisterPool_obj::_regCompsPool->get(hash)) );
HXLINE( 147)		::Array< int > array = null();
HXDLIN( 147)		this->_usedVectorCount =  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,regCount,true,array);
HXLINE( 148)		::Array< ::Dynamic> array1 = null();
HXDLIN( 148)		this->_usedSingleCount =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,4,true,array1,true);
HXLINE( 150)		{
HXLINE( 150)			::Dynamic this1 = this->_usedSingleCount;
HXDLIN( 150)			::Array< int > array2 = null();
HXDLIN( 150)			( ( ::openfl::_Vector::ObjectVector)(this1) )->set(0, ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,regCount,true,array2)).StaticCast<  ::openfl::_Vector::IntVector >();
            		}
HXLINE( 151)		{
HXLINE( 151)			::Dynamic this2 = this->_usedSingleCount;
HXDLIN( 151)			::Array< int > array3 = null();
HXDLIN( 151)			( ( ::openfl::_Vector::ObjectVector)(this2) )->set(1, ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,regCount,true,array3)).StaticCast<  ::openfl::_Vector::IntVector >();
            		}
HXLINE( 152)		{
HXLINE( 152)			::Dynamic this3 = this->_usedSingleCount;
HXDLIN( 152)			::Array< int > array4 = null();
HXDLIN( 152)			( ( ::openfl::_Vector::ObjectVector)(this3) )->set(2, ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,regCount,true,array4)).StaticCast<  ::openfl::_Vector::IntVector >();
            		}
HXLINE( 153)		{
HXLINE( 153)			::Dynamic this4 = this->_usedSingleCount;
HXDLIN( 153)			::Array< int > array5 = null();
HXDLIN( 153)			( ( ::openfl::_Vector::ObjectVector)(this4) )->set(3, ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,regCount,true,array5)).StaticCast<  ::openfl::_Vector::IntVector >();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(RegisterPool_obj,initRegisters,(void))

bool RegisterPool_obj::isRegisterUsed(int index){
            	HX_STACKFRAME(&_hx_pos_b34af30f998f0728_188_isRegisterUsed)
HXLINE( 189)		int a = this->_usedVectorCount->get(index);
HXDLIN( 189)		bool aNeg = (a < 0);
HXDLIN( 189)		bool bNeg = (0 < 0);
HXDLIN( 189)		bool _hx_tmp;
HXDLIN( 189)		if ((aNeg != bNeg)) {
HXLINE( 189)			_hx_tmp = aNeg;
            		}
            		else {
HXLINE( 189)			_hx_tmp = (a > 0);
            		}
HXDLIN( 189)		if (_hx_tmp) {
HXLINE( 190)			return true;
            		}
HXLINE( 191)		{
HXLINE( 192)			int a1 = this->_usedSingleCount->get(0).StaticCast<  ::openfl::_Vector::IntVector >()->get(index);
HXDLIN( 192)			bool aNeg1 = (a1 < 0);
HXDLIN( 192)			bool bNeg1 = (0 < 0);
HXDLIN( 192)			bool _hx_tmp1;
HXDLIN( 192)			if ((aNeg1 != bNeg1)) {
HXLINE( 192)				_hx_tmp1 = aNeg1;
            			}
            			else {
HXLINE( 192)				_hx_tmp1 = (a1 > 0);
            			}
HXDLIN( 192)			if (_hx_tmp1) {
HXLINE( 193)				return true;
            			}
HXLINE( 192)			int a2 = this->_usedSingleCount->get(1).StaticCast<  ::openfl::_Vector::IntVector >()->get(index);
HXDLIN( 192)			bool aNeg2 = (a2 < 0);
HXDLIN( 192)			bool bNeg2 = (0 < 0);
HXDLIN( 192)			bool _hx_tmp2;
HXDLIN( 192)			if ((aNeg2 != bNeg2)) {
HXLINE( 192)				_hx_tmp2 = aNeg2;
            			}
            			else {
HXLINE( 192)				_hx_tmp2 = (a2 > 0);
            			}
HXDLIN( 192)			if (_hx_tmp2) {
HXLINE( 193)				return true;
            			}
HXLINE( 192)			int a3 = this->_usedSingleCount->get(2).StaticCast<  ::openfl::_Vector::IntVector >()->get(index);
HXDLIN( 192)			bool aNeg3 = (a3 < 0);
HXDLIN( 192)			bool bNeg3 = (0 < 0);
HXDLIN( 192)			bool _hx_tmp3;
HXDLIN( 192)			if ((aNeg3 != bNeg3)) {
HXLINE( 192)				_hx_tmp3 = aNeg3;
            			}
            			else {
HXLINE( 192)				_hx_tmp3 = (a3 > 0);
            			}
HXDLIN( 192)			if (_hx_tmp3) {
HXLINE( 193)				return true;
            			}
HXLINE( 192)			int a4 = this->_usedSingleCount->get(3).StaticCast<  ::openfl::_Vector::IntVector >()->get(index);
HXDLIN( 192)			bool aNeg4 = (a4 < 0);
HXDLIN( 192)			bool bNeg4 = (0 < 0);
HXDLIN( 192)			bool _hx_tmp4;
HXDLIN( 192)			if ((aNeg4 != bNeg4)) {
HXLINE( 192)				_hx_tmp4 = aNeg4;
            			}
            			else {
HXLINE( 192)				_hx_tmp4 = (a4 > 0);
            			}
HXDLIN( 192)			if (_hx_tmp4) {
HXLINE( 193)				return true;
            			}
            		}
HXLINE( 196)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(RegisterPool_obj,isRegisterUsed,return )

 ::haxe::ds::StringMap RegisterPool_obj::_regPool;

 ::haxe::ds::StringMap RegisterPool_obj::_regCompsPool;

::String RegisterPool_obj::_initPool(::String regName,int regCount){
            	HX_GC_STACKFRAME(&_hx_pos_b34af30f998f0728_158__initPool)
HXLINE( 159)		::String hash = (regName + regCount);
HXLINE( 161)		if (::away3d::materials::compilation::RegisterPool_obj::_regPool->exists(hash)) {
HXLINE( 162)			return hash;
            		}
HXLINE( 164)		::Array< ::Dynamic> array = null();
HXDLIN( 164)		 ::openfl::_Vector::ObjectVector vectorRegisters =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,regCount,true,array,true);
HXLINE( 165)		::away3d::materials::compilation::RegisterPool_obj::_regPool->set(hash,vectorRegisters);
HXLINE( 167)		::Array< ::Dynamic> registerComponents = ::Array_obj< ::Dynamic>::__new(4)->init(0,::Array_obj< ::Dynamic>::__new(0))->init(1,::Array_obj< ::Dynamic>::__new(0))->init(2,::Array_obj< ::Dynamic>::__new(0))->init(3,::Array_obj< ::Dynamic>::__new(0));
HXLINE( 173)		::away3d::materials::compilation::RegisterPool_obj::_regCompsPool->set(hash,registerComponents);
HXLINE( 175)		{
HXLINE( 175)			int _g = 0;
HXDLIN( 175)			int _g1 = regCount;
HXDLIN( 175)			while((_g < _g1)){
HXLINE( 175)				_g = (_g + 1);
HXDLIN( 175)				int i = (_g - 1);
HXLINE( 176)				vectorRegisters->set(i, ::away3d::materials::compilation::ShaderRegisterElement_obj::__alloc( HX_CTX ,regName,i,null())).StaticCast<  ::away3d::materials::compilation::ShaderRegisterElement >();
HXLINE( 178)				{
HXLINE( 179)					registerComponents->__get(0).StaticCast< ::Array< ::Dynamic> >()[i] =  ::away3d::materials::compilation::ShaderRegisterElement_obj::__alloc( HX_CTX ,regName,i,0);
HXDLIN( 179)					registerComponents->__get(1).StaticCast< ::Array< ::Dynamic> >()[i] =  ::away3d::materials::compilation::ShaderRegisterElement_obj::__alloc( HX_CTX ,regName,i,1);
HXDLIN( 179)					registerComponents->__get(2).StaticCast< ::Array< ::Dynamic> >()[i] =  ::away3d::materials::compilation::ShaderRegisterElement_obj::__alloc( HX_CTX ,regName,i,2);
HXDLIN( 179)					registerComponents->__get(3).StaticCast< ::Array< ::Dynamic> >()[i] =  ::away3d::materials::compilation::ShaderRegisterElement_obj::__alloc( HX_CTX ,regName,i,3);
            				}
            			}
            		}
HXLINE( 181)		return hash;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(RegisterPool_obj,_initPool,return )


::hx::ObjectPtr< RegisterPool_obj > RegisterPool_obj::__new(::String regName,int regCount,::hx::Null< bool >  __o_persistent) {
	::hx::ObjectPtr< RegisterPool_obj > __this = new RegisterPool_obj();
	__this->__construct(regName,regCount,__o_persistent);
	return __this;
}

::hx::ObjectPtr< RegisterPool_obj > RegisterPool_obj::__alloc(::hx::Ctx *_hx_ctx,::String regName,int regCount,::hx::Null< bool >  __o_persistent) {
	RegisterPool_obj *__this = (RegisterPool_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RegisterPool_obj), true, "away3d.materials.compilation.RegisterPool"));
	*(void **)__this = RegisterPool_obj::_hx_vtable;
	__this->__construct(regName,regCount,__o_persistent);
	return __this;
}

RegisterPool_obj::RegisterPool_obj()
{
}

void RegisterPool_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RegisterPool);
	HX_MARK_MEMBER_NAME(_vectorRegisters,"_vectorRegisters");
	HX_MARK_MEMBER_NAME(_registerComponents,"_registerComponents");
	HX_MARK_MEMBER_NAME(_regName,"_regName");
	HX_MARK_MEMBER_NAME(_usedSingleCount,"_usedSingleCount");
	HX_MARK_MEMBER_NAME(_usedVectorCount,"_usedVectorCount");
	HX_MARK_MEMBER_NAME(_regCount,"_regCount");
	HX_MARK_MEMBER_NAME(_persistent,"_persistent");
	HX_MARK_END_CLASS();
}

void RegisterPool_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_vectorRegisters,"_vectorRegisters");
	HX_VISIT_MEMBER_NAME(_registerComponents,"_registerComponents");
	HX_VISIT_MEMBER_NAME(_regName,"_regName");
	HX_VISIT_MEMBER_NAME(_usedSingleCount,"_usedSingleCount");
	HX_VISIT_MEMBER_NAME(_usedVectorCount,"_usedVectorCount");
	HX_VISIT_MEMBER_NAME(_regCount,"_regCount");
	HX_VISIT_MEMBER_NAME(_persistent,"_persistent");
}

::hx::Val RegisterPool_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_regName") ) { return ::hx::Val( _regName ); }
		if (HX_FIELD_EQ(inName,"addUsage") ) { return ::hx::Val( addUsage_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_regCount") ) { return ::hx::Val( _regCount ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_persistent") ) { return ::hx::Val( _persistent ); }
		if (HX_FIELD_EQ(inName,"removeUsage") ) { return ::hx::Val( removeUsage_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"initRegisters") ) { return ::hx::Val( initRegisters_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"isRegisterUsed") ) { return ::hx::Val( isRegisterUsed_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_vectorRegisters") ) { return ::hx::Val( _vectorRegisters ); }
		if (HX_FIELD_EQ(inName,"_usedSingleCount") ) { return ::hx::Val( _usedSingleCount ); }
		if (HX_FIELD_EQ(inName,"_usedVectorCount") ) { return ::hx::Val( _usedVectorCount ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hasRegisteredRegs") ) { return ::hx::Val( hasRegisteredRegs_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_registerComponents") ) { return ::hx::Val( _registerComponents ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"requestFreeVectorReg") ) { return ::hx::Val( requestFreeVectorReg_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"requestFreeRegComponent") ) { return ::hx::Val( requestFreeRegComponent_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool RegisterPool_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_regPool") ) { outValue = ( _regPool ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_initPool") ) { outValue = _initPool_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_regCompsPool") ) { outValue = ( _regCompsPool ); return true; }
	}
	return false;
}

::hx::Val RegisterPool_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_regName") ) { _regName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_regCount") ) { _regCount=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_persistent") ) { _persistent=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_vectorRegisters") ) { _vectorRegisters=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_usedSingleCount") ) { _usedSingleCount=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_usedVectorCount") ) { _usedVectorCount=inValue.Cast<  ::openfl::_Vector::IntVector >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_registerComponents") ) { _registerComponents=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool RegisterPool_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_regPool") ) { _regPool=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_regCompsPool") ) { _regCompsPool=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void RegisterPool_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_vectorRegisters",ee,b1,e9,07));
	outFields->push(HX_("_registerComponents",78,dd,98,ad));
	outFields->push(HX_("_regName",40,0b,71,a2));
	outFields->push(HX_("_usedSingleCount",6b,48,cd,c1));
	outFields->push(HX_("_usedVectorCount",50,08,d3,c9));
	outFields->push(HX_("_regCount",3a,82,57,34));
	outFields->push(HX_("_persistent",76,33,7f,d2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo RegisterPool_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(RegisterPool_obj,_vectorRegisters),HX_("_vectorRegisters",ee,b1,e9,07)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(RegisterPool_obj,_registerComponents),HX_("_registerComponents",78,dd,98,ad)},
	{::hx::fsString,(int)offsetof(RegisterPool_obj,_regName),HX_("_regName",40,0b,71,a2)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(RegisterPool_obj,_usedSingleCount),HX_("_usedSingleCount",6b,48,cd,c1)},
	{::hx::fsObject /*  ::openfl::_Vector::IntVector */ ,(int)offsetof(RegisterPool_obj,_usedVectorCount),HX_("_usedVectorCount",50,08,d3,c9)},
	{::hx::fsInt,(int)offsetof(RegisterPool_obj,_regCount),HX_("_regCount",3a,82,57,34)},
	{::hx::fsBool,(int)offsetof(RegisterPool_obj,_persistent),HX_("_persistent",76,33,7f,d2)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo RegisterPool_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &RegisterPool_obj::_regPool,HX_("_regPool",d1,19,ce,a3)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &RegisterPool_obj::_regCompsPool,HX_("_regCompsPool",6b,42,58,4a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String RegisterPool_obj_sMemberFields[] = {
	HX_("_vectorRegisters",ee,b1,e9,07),
	HX_("_registerComponents",78,dd,98,ad),
	HX_("_regName",40,0b,71,a2),
	HX_("_usedSingleCount",6b,48,cd,c1),
	HX_("_usedVectorCount",50,08,d3,c9),
	HX_("_regCount",3a,82,57,34),
	HX_("_persistent",76,33,7f,d2),
	HX_("requestFreeVectorReg",36,95,61,70),
	HX_("requestFreeRegComponent",04,f1,6a,72),
	HX_("addUsage",40,83,8c,23),
	HX_("removeUsage",3d,3a,63,a8),
	HX_("dispose",9f,80,4c,bb),
	HX_("hasRegisteredRegs",3b,40,f6,01),
	HX_("initRegisters",80,b3,11,36),
	HX_("isRegisterUsed",4a,b1,3e,c0),
	::String(null()) };

static void RegisterPool_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RegisterPool_obj::_regPool,"_regPool");
	HX_MARK_MEMBER_NAME(RegisterPool_obj::_regCompsPool,"_regCompsPool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void RegisterPool_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RegisterPool_obj::_regPool,"_regPool");
	HX_VISIT_MEMBER_NAME(RegisterPool_obj::_regCompsPool,"_regCompsPool");
};

#endif

::hx::Class RegisterPool_obj::__mClass;

static ::String RegisterPool_obj_sStaticFields[] = {
	HX_("_regPool",d1,19,ce,a3),
	HX_("_regCompsPool",6b,42,58,4a),
	HX_("_initPool",6b,a7,a9,96),
	::String(null())
};

void RegisterPool_obj::__register()
{
	RegisterPool_obj _hx_dummy;
	RegisterPool_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.materials.compilation.RegisterPool",9b,a1,6a,a5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &RegisterPool_obj::__GetStatic;
	__mClass->mSetStaticField = &RegisterPool_obj::__SetStatic;
	__mClass->mMarkFunc = RegisterPool_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(RegisterPool_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RegisterPool_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RegisterPool_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = RegisterPool_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RegisterPool_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RegisterPool_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void RegisterPool_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_b34af30f998f0728_16_boot)
HXDLIN(  16)		_regPool =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_b34af30f998f0728_17_boot)
HXDLIN(  17)		_regCompsPool =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace away3d
} // end namespace materials
} // end namespace compilation
