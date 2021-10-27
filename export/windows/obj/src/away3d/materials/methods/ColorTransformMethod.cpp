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
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterElement
#include <away3d/materials/compilation/ShaderRegisterElement.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_ColorTransformMethod
#include <away3d/materials/methods/ColorTransformMethod.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_EffectMethodBase
#include <away3d/materials/methods/EffectMethodBase.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_MethodVO
#include <away3d/materials/methods/MethodVO.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_ShadingMethodBase
#include <away3d/materials/methods/ShadingMethodBase.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_cb986db717601abd_25_new,"away3d.materials.methods.ColorTransformMethod","new",0x78c657e9,"away3d.materials.methods.ColorTransformMethod.new","away3d/materials/methods/ColorTransformMethod.hx",25,0x1fdaa2c4)
HX_LOCAL_STACK_FRAME(_hx_pos_cb986db717601abd_33_get_colorTransform,"away3d.materials.methods.ColorTransformMethod","get_colorTransform",0x1f1d12e9,"away3d.materials.methods.ColorTransformMethod.get_colorTransform","away3d/materials/methods/ColorTransformMethod.hx",33,0x1fdaa2c4)
HX_LOCAL_STACK_FRAME(_hx_pos_cb986db717601abd_37_set_colorTransform,"away3d.materials.methods.ColorTransformMethod","set_colorTransform",0xfbcc455d,"away3d.materials.methods.ColorTransformMethod.set_colorTransform","away3d/materials/methods/ColorTransformMethod.hx",37,0x1fdaa2c4)
HX_LOCAL_STACK_FRAME(_hx_pos_cb986db717601abd_46_getFragmentCode,"away3d.materials.methods.ColorTransformMethod","getFragmentCode",0x5a05ebdc,"away3d.materials.methods.ColorTransformMethod.getFragmentCode","away3d/materials/methods/ColorTransformMethod.hx",46,0x1fdaa2c4)
HX_LOCAL_STACK_FRAME(_hx_pos_cb986db717601abd_60_activate,"away3d.materials.methods.ColorTransformMethod","activate",0x8494a38a,"away3d.materials.methods.ColorTransformMethod.activate","away3d/materials/methods/ColorTransformMethod.hx",60,0x1fdaa2c4)
namespace away3d{
namespace materials{
namespace methods{

void ColorTransformMethod_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_cb986db717601abd_25_new)
HXDLIN(  25)		super::__construct();
            	}

Dynamic ColorTransformMethod_obj::__CreateEmpty() { return new ColorTransformMethod_obj; }

void *ColorTransformMethod_obj::_hx_vtable = 0;

Dynamic ColorTransformMethod_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ColorTransformMethod_obj > _hx_result = new ColorTransformMethod_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ColorTransformMethod_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x12886923) {
		if (inClassId<=(int)0x0efad0ef) {
			if (inClassId<=(int)0x0c89e854) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
			} else {
				return inClassId==(int)0x0efad0ef;
			}
		} else {
			return inClassId==(int)0x12886923;
		}
	} else {
		return inClassId==(int)0x37f46043 || inClassId==(int)0x781a5ed4;
	}
}

 ::openfl::geom::ColorTransform ColorTransformMethod_obj::get_colorTransform(){
            	HX_STACKFRAME(&_hx_pos_cb986db717601abd_33_get_colorTransform)
HXDLIN(  33)		return this->_colorTransform;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransformMethod_obj,get_colorTransform,return )

 ::openfl::geom::ColorTransform ColorTransformMethod_obj::set_colorTransform( ::openfl::geom::ColorTransform value){
            	HX_STACKFRAME(&_hx_pos_cb986db717601abd_37_set_colorTransform)
HXLINE(  38)		this->_colorTransform = value;
HXLINE(  39)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ColorTransformMethod_obj,set_colorTransform,return )

::String ColorTransformMethod_obj::getFragmentCode( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterCache regCache, ::away3d::materials::compilation::ShaderRegisterElement targetReg){
            	HX_STACKFRAME(&_hx_pos_cb986db717601abd_46_getFragmentCode)
HXLINE(  47)		::String code = HX_("",00,00,00,00);
HXLINE(  48)		 ::away3d::materials::compilation::ShaderRegisterElement colorMultReg = regCache->getFreeFragmentConstant();
HXLINE(  49)		 ::away3d::materials::compilation::ShaderRegisterElement colorOffsReg = regCache->getFreeFragmentConstant();
HXLINE(  50)		vo->fragmentConstantsIndex = (colorMultReg->get_index() * 4);
HXLINE(  51)		::String code1 = ((HX_("mul ",9c,67,65,48) + ::Std_obj::string(targetReg)) + HX_(", ",74,26,00,00));
HXDLIN(  51)		::String code2 = ((code1 + targetReg->toString()) + HX_(", ",74,26,00,00));
HXDLIN(  51)		::String code3 = (((code2 + ::Std_obj::string(colorMultReg)) + HX_("\n",0a,00,00,00)) + HX_("add ",df,ea,69,40));
HXDLIN(  51)		::String code4 = ((code3 + ::Std_obj::string(targetReg)) + HX_(", ",74,26,00,00));
HXDLIN(  51)		::String code5 = ((code4 + targetReg->toString()) + HX_(", ",74,26,00,00));
HXDLIN(  51)		code = (code + ((code5 + ::Std_obj::string(colorOffsReg)) + HX_("\n",0a,00,00,00)));
HXLINE(  53)		return code;
            	}


void ColorTransformMethod_obj::activate( ::away3d::materials::methods::MethodVO vo, ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_cb986db717601abd_60_activate)
HXLINE(  61)		Float inv = ((Float)0.00392156862745098);
HXLINE(  62)		int index = vo->fragmentConstantsIndex;
HXLINE(  63)		 ::openfl::_Vector::FloatVector data = vo->fragmentData;
HXLINE(  64)		data->set(index,this->_colorTransform->redMultiplier);
HXLINE(  65)		data->set((index + 1),this->_colorTransform->greenMultiplier);
HXLINE(  66)		data->set((index + 2),this->_colorTransform->blueMultiplier);
HXLINE(  67)		data->set((index + 3),this->_colorTransform->alphaMultiplier);
HXLINE(  68)		data->set((index + 4),(this->_colorTransform->redOffset * inv));
HXLINE(  69)		data->set((index + 5),(this->_colorTransform->greenOffset * inv));
HXLINE(  70)		data->set((index + 6),(this->_colorTransform->blueOffset * inv));
HXLINE(  71)		data->set((index + 7),(this->_colorTransform->alphaOffset * inv));
            	}



::hx::ObjectPtr< ColorTransformMethod_obj > ColorTransformMethod_obj::__new() {
	::hx::ObjectPtr< ColorTransformMethod_obj > __this = new ColorTransformMethod_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ColorTransformMethod_obj > ColorTransformMethod_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ColorTransformMethod_obj *__this = (ColorTransformMethod_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ColorTransformMethod_obj), true, "away3d.materials.methods.ColorTransformMethod"));
	*(void **)__this = ColorTransformMethod_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ColorTransformMethod_obj::ColorTransformMethod_obj()
{
}

void ColorTransformMethod_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColorTransformMethod);
	HX_MARK_MEMBER_NAME(_colorTransform,"_colorTransform");
	 ::away3d::materials::methods::ShadingMethodBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ColorTransformMethod_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_colorTransform,"_colorTransform");
	 ::away3d::materials::methods::ShadingMethodBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ColorTransformMethod_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"activate") ) { return ::hx::Val( activate_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_colorTransform() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_colorTransform") ) { return ::hx::Val( _colorTransform ); }
		if (HX_FIELD_EQ(inName,"getFragmentCode") ) { return ::hx::Val( getFragmentCode_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_colorTransform") ) { return ::hx::Val( get_colorTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_colorTransform") ) { return ::hx::Val( set_colorTransform_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ColorTransformMethod_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_colorTransform(inValue.Cast<  ::openfl::geom::ColorTransform >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_colorTransform") ) { _colorTransform=inValue.Cast<  ::openfl::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ColorTransformMethod_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("colorTransform",89,d7,3f,ad));
	outFields->push(HX_("_colorTransform",28,20,a0,f6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ColorTransformMethod_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::geom::ColorTransform */ ,(int)offsetof(ColorTransformMethod_obj,_colorTransform),HX_("_colorTransform",28,20,a0,f6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ColorTransformMethod_obj_sStaticStorageInfo = 0;
#endif

static ::String ColorTransformMethod_obj_sMemberFields[] = {
	HX_("_colorTransform",28,20,a0,f6),
	HX_("get_colorTransform",52,b8,d9,48),
	HX_("set_colorTransform",c6,ea,88,25),
	HX_("getFragmentCode",d3,ba,61,28),
	HX_("activate",b3,1b,ac,e5),
	::String(null()) };

::hx::Class ColorTransformMethod_obj::__mClass;

void ColorTransformMethod_obj::__register()
{
	ColorTransformMethod_obj _hx_dummy;
	ColorTransformMethod_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.materials.methods.ColorTransformMethod",77,2f,18,14);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ColorTransformMethod_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ColorTransformMethod_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ColorTransformMethod_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ColorTransformMethod_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace materials
} // end namespace methods
