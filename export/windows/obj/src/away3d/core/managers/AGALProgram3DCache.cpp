#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_managers_AGALProgram3DCache
#include <away3d/core/managers/AGALProgram3DCache.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_away3d_debug_Debug
#include <away3d/debug/Debug.h>
#endif
#ifndef INCLUDED_away3d_events_Stage3DEvent
#include <away3d/events/Stage3DEvent.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_MaterialPassBase
#include <away3d/materials/passes/MaterialPassBase.h>
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
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
#ifndef INCLUDED_openfl_display3D_Program3D
#include <openfl/display3D/Program3D.h>
#endif
#ifndef INCLUDED_openfl_display3D__Context3DProgramType_Context3DProgramType_Impl_
#include <openfl/display3D/_Context3DProgramType/Context3DProgramType_Impl_.h>
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
#ifndef INCLUDED_openfl_utils_AGALMiniAssembler
#include <openfl/utils/AGALMiniAssembler.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b73f5ed5e520386c_28_new,"away3d.core.managers.AGALProgram3DCache","new",0xc868aaf8,"away3d.core.managers.AGALProgram3DCache.new","away3d/core/managers/AGALProgram3DCache.hx",28,0x92e12a37)
HX_LOCAL_STACK_FRAME(_hx_pos_b73f5ed5e520386c_73_dispose,"away3d.core.managers.AGALProgram3DCache","dispose",0xfcbe8737,"away3d.core.managers.AGALProgram3DCache.dispose","away3d/core/managers/AGALProgram3DCache.hx",73,0x92e12a37)
HX_LOCAL_STACK_FRAME(_hx_pos_b73f5ed5e520386c_84_setProgram3D,"away3d.core.managers.AGALProgram3DCache","setProgram3D",0x2ccaf29b,"away3d.core.managers.AGALProgram3DCache.setProgram3D","away3d/core/managers/AGALProgram3DCache.hx",84,0x92e12a37)
HX_LOCAL_STACK_FRAME(_hx_pos_b73f5ed5e520386c_118_freeProgram3D,"away3d.core.managers.AGALProgram3DCache","freeProgram3D",0x5a227681,"away3d.core.managers.AGALProgram3DCache.freeProgram3D","away3d/core/managers/AGALProgram3DCache.hx",118,0x92e12a37)
HX_LOCAL_STACK_FRAME(_hx_pos_b73f5ed5e520386c_125_destroyProgram,"away3d.core.managers.AGALProgram3DCache","destroyProgram",0x35d3b512,"away3d.core.managers.AGALProgram3DCache.destroyProgram","away3d/core/managers/AGALProgram3DCache.hx",125,0x92e12a37)
HX_LOCAL_STACK_FRAME(_hx_pos_b73f5ed5e520386c_133_getKey,"away3d.core.managers.AGALProgram3DCache","getKey",0x9c889711,"away3d.core.managers.AGALProgram3DCache.getKey","away3d/core/managers/AGALProgram3DCache.hx",133,0x92e12a37)
HX_LOCAL_STACK_FRAME(_hx_pos_b73f5ed5e520386c_38_getInstance,"away3d.core.managers.AGALProgram3DCache","getInstance",0x4eaa14e3,"away3d.core.managers.AGALProgram3DCache.getInstance","away3d/core/managers/AGALProgram3DCache.hx",38,0x92e12a37)
HX_LOCAL_STACK_FRAME(_hx_pos_b73f5ed5e520386c_55_getInstanceFromIndex,"away3d.core.managers.AGALProgram3DCache","getInstanceFromIndex",0xf3ec1be5,"away3d.core.managers.AGALProgram3DCache.getInstanceFromIndex","away3d/core/managers/AGALProgram3DCache.hx",55,0x92e12a37)
HX_LOCAL_STACK_FRAME(_hx_pos_b73f5ed5e520386c_62_onContext3DDisposed,"away3d.core.managers.AGALProgram3DCache","onContext3DDisposed",0x9b6539de,"away3d.core.managers.AGALProgram3DCache.onContext3DDisposed","away3d/core/managers/AGALProgram3DCache.hx",62,0x92e12a37)
HX_LOCAL_STACK_FRAME(_hx_pos_b73f5ed5e520386c_25_boot,"away3d.core.managers.AGALProgram3DCache","boot",0x8b45ee9a,"away3d.core.managers.AGALProgram3DCache.boot","away3d/core/managers/AGALProgram3DCache.hx",25,0x92e12a37)
namespace away3d{
namespace core{
namespace managers{

void AGALProgram3DCache_obj::__construct( ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_GC_STACKFRAME(&_hx_pos_b73f5ed5e520386c_28_new)
HXLINE(  29)		this->_stage3DProxy = stage3DProxy;
HXLINE(  31)		this->_program3Ds =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  32)		this->_ids =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  33)		this->_usages = ::Array_obj< int >::__new(0);
HXLINE(  34)		this->_keys = ::Array_obj< ::String >::__new(0);
            	}

Dynamic AGALProgram3DCache_obj::__CreateEmpty() { return new AGALProgram3DCache_obj; }

void *AGALProgram3DCache_obj::_hx_vtable = 0;

Dynamic AGALProgram3DCache_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AGALProgram3DCache_obj > _hx_result = new AGALProgram3DCache_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool AGALProgram3DCache_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x75661342;
}

void AGALProgram3DCache_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_b73f5ed5e520386c_73_dispose)
HXLINE(  74)		 ::Dynamic keys = this->_program3Ds->keys();
HXLINE(  75)		{
HXLINE(  75)			 ::Dynamic key = keys;
HXDLIN(  75)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  75)				::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  76)				this->destroyProgram(key1);
            			}
            		}
HXLINE(  78)		this->_keys = null();
HXLINE(  79)		this->_program3Ds = null();
HXLINE(  80)		this->_usages = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AGALProgram3DCache_obj,dispose,(void))

void AGALProgram3DCache_obj::setProgram3D( ::away3d::materials::passes::MaterialPassBase pass,::String vertexCode,::String fragmentCode,::hx::Null< int >  __o_agalVersion){
            		int agalVersion = __o_agalVersion.Default(1);
            	HX_GC_STACKFRAME(&_hx_pos_b73f5ed5e520386c_84_setProgram3D)
HXLINE(  85)		int stageIndex = this->_stage3DProxy->_stage3DIndex;
HXLINE(  86)		 ::openfl::display3D::Program3D program;
HXLINE(  87)		::String key = ((vertexCode + HX_("---",cd,4c,22,00)) + fragmentCode);
HXLINE(  89)		if (!(this->_program3Ds->exists(key))) {
HXLINE(  90)			this->_keys[::away3d::core::managers::AGALProgram3DCache_obj::_currentId] = key;
HXLINE(  91)			this->_usages[::away3d::core::managers::AGALProgram3DCache_obj::_currentId] = 0;
HXLINE(  92)			{
HXLINE(  92)				int v = ::away3d::core::managers::AGALProgram3DCache_obj::_currentId;
HXDLIN(  92)				this->_ids->set(key,v);
            			}
HXLINE(  93)			++::away3d::core::managers::AGALProgram3DCache_obj::_currentId;
HXLINE(  94)			program = this->_stage3DProxy->_context3D->createProgram(null());
HXLINE(  96)			 ::openfl::utils::AGALMiniAssembler vertexByteCode =  ::openfl::utils::AGALMiniAssembler_obj::__alloc( HX_CTX ,::away3d::debug::Debug_obj::active);
HXDLIN(  96)			 ::openfl::utils::ByteArrayData vertexByteCode1 = vertexByteCode->assemble(::openfl::display3D::_Context3DProgramType::Context3DProgramType_Impl__obj::toString(1),vertexCode,agalVersion,null());
HXLINE(  97)			 ::openfl::utils::AGALMiniAssembler fragmentByteCode =  ::openfl::utils::AGALMiniAssembler_obj::__alloc( HX_CTX ,::away3d::debug::Debug_obj::active);
HXDLIN(  97)			 ::openfl::utils::ByteArrayData fragmentByteCode1 = fragmentByteCode->assemble(::openfl::display3D::_Context3DProgramType::Context3DProgramType_Impl__obj::toString(0),fragmentCode,agalVersion,null());
HXLINE(  99)			program->upload(vertexByteCode1,fragmentByteCode1);
HXLINE( 101)			this->_program3Ds->set(key,program);
            		}
HXLINE( 104)		int oldId = pass->_program3Dids->get(stageIndex);
HXLINE( 105)		int newId = this->_ids->get_int(key);
HXLINE( 107)		if ((oldId != newId)) {
HXLINE( 108)			if ((oldId >= 0)) {
HXLINE( 109)				this->freeProgram3D(oldId);
            			}
HXLINE( 110)			this->_usages[newId]++;
            		}
HXLINE( 113)		pass->_program3Dids->set(stageIndex,newId);
HXLINE( 114)		{
HXLINE( 114)			::Dynamic this1 = pass->_program3Ds;
HXDLIN( 114)			( ( ::openfl::_Vector::ObjectVector)(this1) )->set(stageIndex,this->_program3Ds->get(key)).StaticCast<  ::openfl::display3D::Program3D >();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(AGALProgram3DCache_obj,setProgram3D,(void))

void AGALProgram3DCache_obj::freeProgram3D(int programId){
            	HX_STACKFRAME(&_hx_pos_b73f5ed5e520386c_118_freeProgram3D)
HXLINE( 119)		this->_usages[programId]--;
HXLINE( 120)		if ((this->_usages->__get(programId) == 0)) {
HXLINE( 121)			this->destroyProgram(this->_keys->__get(programId));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(AGALProgram3DCache_obj,freeProgram3D,(void))

void AGALProgram3DCache_obj::destroyProgram(::String key){
            	HX_STACKFRAME(&_hx_pos_b73f5ed5e520386c_125_destroyProgram)
HXLINE( 126)		( ( ::openfl::display3D::Program3D)(this->_program3Ds->get(key)) )->dispose();
HXLINE( 127)		this->_program3Ds->remove(key);
HXLINE( 128)		this->_ids->set(key,-1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AGALProgram3DCache_obj,destroyProgram,(void))

::String AGALProgram3DCache_obj::getKey(::String vertexCode,::String fragmentCode){
            	HX_STACKFRAME(&_hx_pos_b73f5ed5e520386c_133_getKey)
HXDLIN( 133)		return ((vertexCode + HX_("---",cd,4c,22,00)) + fragmentCode);
            	}


HX_DEFINE_DYNAMIC_FUNC2(AGALProgram3DCache_obj,getKey,return )

 ::openfl::_Vector::ObjectVector AGALProgram3DCache_obj::_instances;

int AGALProgram3DCache_obj::_currentId;

 ::away3d::core::managers::AGALProgram3DCache AGALProgram3DCache_obj::getInstance( ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_GC_STACKFRAME(&_hx_pos_b73f5ed5e520386c_38_getInstance)
HXLINE(  39)		int index = stage3DProxy->get_stage3DIndex();
HXLINE(  41)		if (::hx::IsNull( ::away3d::core::managers::AGALProgram3DCache_obj::_instances )) {
HXLINE(  42)			::Array< ::Dynamic> array = null();
HXDLIN(  42)			::away3d::core::managers::AGALProgram3DCache_obj::_instances =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,8,true,array,true);
            		}
HXLINE(  44)		if (::hx::IsNull( ::away3d::core::managers::AGALProgram3DCache_obj::_instances->get(index).StaticCast<  ::away3d::core::managers::AGALProgram3DCache >() )) {
HXLINE(  45)			{
HXLINE(  45)				::Dynamic this1 = ::away3d::core::managers::AGALProgram3DCache_obj::_instances;
HXDLIN(  45)				( ( ::openfl::_Vector::ObjectVector)(this1) )->set(index, ::away3d::core::managers::AGALProgram3DCache_obj::__alloc( HX_CTX ,stage3DProxy)).StaticCast<  ::away3d::core::managers::AGALProgram3DCache >();
            			}
HXLINE(  46)			stage3DProxy->addEventListener(HX_("Context3DDisposed",45,43,1b,f2),::away3d::core::managers::AGALProgram3DCache_obj::onContext3DDisposed_dyn(),false,0,true);
HXLINE(  47)			stage3DProxy->addEventListener(HX_("Context3DCreated",88,a9,28,8d),::away3d::core::managers::AGALProgram3DCache_obj::onContext3DDisposed_dyn(),false,0,true);
HXLINE(  48)			stage3DProxy->addEventListener(HX_("Context3DRecreated",35,9a,ac,ef),::away3d::core::managers::AGALProgram3DCache_obj::onContext3DDisposed_dyn(),false,0,true);
            		}
HXLINE(  51)		return ::away3d::core::managers::AGALProgram3DCache_obj::_instances->get(index).StaticCast<  ::away3d::core::managers::AGALProgram3DCache >();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AGALProgram3DCache_obj,getInstance,return )

 ::away3d::core::managers::AGALProgram3DCache AGALProgram3DCache_obj::getInstanceFromIndex(int index){
            	HX_GC_STACKFRAME(&_hx_pos_b73f5ed5e520386c_55_getInstanceFromIndex)
HXLINE(  56)		if (::hx::IsNull( ::away3d::core::managers::AGALProgram3DCache_obj::_instances->get(index).StaticCast<  ::away3d::core::managers::AGALProgram3DCache >() )) {
HXLINE(  57)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("Instance not created yet!",29,9b,99,49),null())));
            		}
HXLINE(  58)		return ::away3d::core::managers::AGALProgram3DCache_obj::_instances->get(index).StaticCast<  ::away3d::core::managers::AGALProgram3DCache >();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AGALProgram3DCache_obj,getInstanceFromIndex,return )

void AGALProgram3DCache_obj::onContext3DDisposed( ::away3d::events::Stage3DEvent event){
            	HX_STACKFRAME(&_hx_pos_b73f5ed5e520386c_62_onContext3DDisposed)
HXLINE(  63)		 ::away3d::core::managers::Stage3DProxy stage3DProxy = ::hx::TCast<  ::away3d::core::managers::Stage3DProxy >::cast(event->target);
HXLINE(  64)		int index = stage3DProxy->_stage3DIndex;
HXLINE(  65)		::away3d::core::managers::AGALProgram3DCache_obj::_instances->get(index).StaticCast<  ::away3d::core::managers::AGALProgram3DCache >()->dispose();
HXLINE(  66)		{
HXLINE(  66)			 ::away3d::core::managers::AGALProgram3DCache value = null();
HXDLIN(  66)			::away3d::core::managers::AGALProgram3DCache_obj::_instances->set(index,value).StaticCast<  ::away3d::core::managers::AGALProgram3DCache >();
            		}
HXLINE(  67)		stage3DProxy->removeEventListener(HX_("Context3DDisposed",45,43,1b,f2),::away3d::core::managers::AGALProgram3DCache_obj::onContext3DDisposed_dyn(),null());
HXLINE(  68)		stage3DProxy->removeEventListener(HX_("Context3DCreated",88,a9,28,8d),::away3d::core::managers::AGALProgram3DCache_obj::onContext3DDisposed_dyn(),null());
HXLINE(  69)		stage3DProxy->removeEventListener(HX_("Context3DRecreated",35,9a,ac,ef),::away3d::core::managers::AGALProgram3DCache_obj::onContext3DDisposed_dyn(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AGALProgram3DCache_obj,onContext3DDisposed,(void))


::hx::ObjectPtr< AGALProgram3DCache_obj > AGALProgram3DCache_obj::__new( ::away3d::core::managers::Stage3DProxy stage3DProxy) {
	::hx::ObjectPtr< AGALProgram3DCache_obj > __this = new AGALProgram3DCache_obj();
	__this->__construct(stage3DProxy);
	return __this;
}

::hx::ObjectPtr< AGALProgram3DCache_obj > AGALProgram3DCache_obj::__alloc(::hx::Ctx *_hx_ctx, ::away3d::core::managers::Stage3DProxy stage3DProxy) {
	AGALProgram3DCache_obj *__this = (AGALProgram3DCache_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AGALProgram3DCache_obj), true, "away3d.core.managers.AGALProgram3DCache"));
	*(void **)__this = AGALProgram3DCache_obj::_hx_vtable;
	__this->__construct(stage3DProxy);
	return __this;
}

AGALProgram3DCache_obj::AGALProgram3DCache_obj()
{
}

void AGALProgram3DCache_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AGALProgram3DCache);
	HX_MARK_MEMBER_NAME(_stage3DProxy,"_stage3DProxy");
	HX_MARK_MEMBER_NAME(_program3Ds,"_program3Ds");
	HX_MARK_MEMBER_NAME(_ids,"_ids");
	HX_MARK_MEMBER_NAME(_usages,"_usages");
	HX_MARK_MEMBER_NAME(_keys,"_keys");
	HX_MARK_END_CLASS();
}

void AGALProgram3DCache_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_stage3DProxy,"_stage3DProxy");
	HX_VISIT_MEMBER_NAME(_program3Ds,"_program3Ds");
	HX_VISIT_MEMBER_NAME(_ids,"_ids");
	HX_VISIT_MEMBER_NAME(_usages,"_usages");
	HX_VISIT_MEMBER_NAME(_keys,"_keys");
}

::hx::Val AGALProgram3DCache_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ids") ) { return ::hx::Val( _ids ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_keys") ) { return ::hx::Val( _keys ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getKey") ) { return ::hx::Val( getKey_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_usages") ) { return ::hx::Val( _usages ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_program3Ds") ) { return ::hx::Val( _program3Ds ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setProgram3D") ) { return ::hx::Val( setProgram3D_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_stage3DProxy") ) { return ::hx::Val( _stage3DProxy ); }
		if (HX_FIELD_EQ(inName,"freeProgram3D") ) { return ::hx::Val( freeProgram3D_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"destroyProgram") ) { return ::hx::Val( destroyProgram_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool AGALProgram3DCache_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_instances") ) { outValue = ( _instances ); return true; }
		if (HX_FIELD_EQ(inName,"_currentId") ) { outValue = ( _currentId ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getInstance") ) { outValue = getInstance_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onContext3DDisposed") ) { outValue = onContext3DDisposed_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getInstanceFromIndex") ) { outValue = getInstanceFromIndex_dyn(); return true; }
	}
	return false;
}

::hx::Val AGALProgram3DCache_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ids") ) { _ids=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_keys") ) { _keys=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_usages") ) { _usages=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_program3Ds") ) { _program3Ds=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_stage3DProxy") ) { _stage3DProxy=inValue.Cast<  ::away3d::core::managers::Stage3DProxy >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool AGALProgram3DCache_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_instances") ) { _instances=ioValue.Cast<  ::openfl::_Vector::ObjectVector >(); return true; }
		if (HX_FIELD_EQ(inName,"_currentId") ) { _currentId=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void AGALProgram3DCache_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_stage3DProxy",de,ab,3d,f1));
	outFields->push(HX_("_program3Ds",bd,db,61,21));
	outFields->push(HX_("_ids",39,49,1b,3f));
	outFields->push(HX_("_usages",d1,31,b9,ad));
	outFields->push(HX_("_keys",d3,fd,17,fa));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AGALProgram3DCache_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::away3d::core::managers::Stage3DProxy */ ,(int)offsetof(AGALProgram3DCache_obj,_stage3DProxy),HX_("_stage3DProxy",de,ab,3d,f1)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(AGALProgram3DCache_obj,_program3Ds),HX_("_program3Ds",bd,db,61,21)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(AGALProgram3DCache_obj,_ids),HX_("_ids",39,49,1b,3f)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(AGALProgram3DCache_obj,_usages),HX_("_usages",d1,31,b9,ad)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(AGALProgram3DCache_obj,_keys),HX_("_keys",d3,fd,17,fa)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo AGALProgram3DCache_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(void *) &AGALProgram3DCache_obj::_instances,HX_("_instances",ff,fe,bc,a6)},
	{::hx::fsInt,(void *) &AGALProgram3DCache_obj::_currentId,HX_("_currentId",35,98,d0,9c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String AGALProgram3DCache_obj_sMemberFields[] = {
	HX_("_stage3DProxy",de,ab,3d,f1),
	HX_("_program3Ds",bd,db,61,21),
	HX_("_ids",39,49,1b,3f),
	HX_("_usages",d1,31,b9,ad),
	HX_("_keys",d3,fd,17,fa),
	HX_("dispose",9f,80,4c,bb),
	HX_("setProgram3D",33,e0,13,01),
	HX_("freeProgram3D",e9,6d,a9,45),
	HX_("destroyProgram",aa,38,65,60),
	HX_("getKey",a9,c2,20,a3),
	::String(null()) };

static void AGALProgram3DCache_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AGALProgram3DCache_obj::_instances,"_instances");
	HX_MARK_MEMBER_NAME(AGALProgram3DCache_obj::_currentId,"_currentId");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AGALProgram3DCache_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AGALProgram3DCache_obj::_instances,"_instances");
	HX_VISIT_MEMBER_NAME(AGALProgram3DCache_obj::_currentId,"_currentId");
};

#endif

::hx::Class AGALProgram3DCache_obj::__mClass;

static ::String AGALProgram3DCache_obj_sStaticFields[] = {
	HX_("_instances",ff,fe,bc,a6),
	HX_("_currentId",35,98,d0,9c),
	HX_("getInstance",4b,e2,d4,7f),
	HX_("getInstanceFromIndex",7d,61,c0,0d),
	HX_("onContext3DDisposed",46,af,b7,09),
	::String(null())
};

void AGALProgram3DCache_obj::__register()
{
	AGALProgram3DCache_obj _hx_dummy;
	AGALProgram3DCache_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.managers.AGALProgram3DCache",06,0f,92,01);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AGALProgram3DCache_obj::__GetStatic;
	__mClass->mSetStaticField = &AGALProgram3DCache_obj::__SetStatic;
	__mClass->mMarkFunc = AGALProgram3DCache_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AGALProgram3DCache_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AGALProgram3DCache_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AGALProgram3DCache_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AGALProgram3DCache_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AGALProgram3DCache_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AGALProgram3DCache_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void AGALProgram3DCache_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b73f5ed5e520386c_25_boot)
HXDLIN(  25)		_currentId = 0;
            	}
}

} // end namespace away3d
} // end namespace core
} // end namespace managers
