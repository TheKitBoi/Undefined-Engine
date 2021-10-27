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
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_DepthMapPass
#include <away3d/materials/passes/DepthMapPass.h>
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
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_dbe532790bbb8cd0_19_new,"away3d.materials.passes.DepthMapPass","new",0x45efcbba,"away3d.materials.passes.DepthMapPass.new","away3d/materials/passes/DepthMapPass.hx",19,0xca9b1ed7)
static const Float _hx_array_data_9e8526c8_2[] = {
	1.0,255.0,65025.0,16581375.0,0.00392156862745098,0.00392156862745098,0.00392156862745098,0.0,0.0,0.0,0.0,0.0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_dbe532790bbb8cd0_45_get_alphaThreshold,"away3d.materials.passes.DepthMapPass","get_alphaThreshold",0x1d49db1c,"away3d.materials.passes.DepthMapPass.get_alphaThreshold","away3d/materials/passes/DepthMapPass.hx",45,0xca9b1ed7)
HX_LOCAL_STACK_FRAME(_hx_pos_dbe532790bbb8cd0_49_set_alphaThreshold,"away3d.materials.passes.DepthMapPass","set_alphaThreshold",0xf9f90d90,"away3d.materials.passes.DepthMapPass.set_alphaThreshold","away3d/materials/passes/DepthMapPass.hx",49,0xca9b1ed7)
HX_LOCAL_STACK_FRAME(_hx_pos_dbe532790bbb8cd0_73_get_alphaMask,"away3d.materials.passes.DepthMapPass","get_alphaMask",0x7a695f1b,"away3d.materials.passes.DepthMapPass.get_alphaMask","away3d/materials/passes/DepthMapPass.hx",73,0xca9b1ed7)
HX_LOCAL_STACK_FRAME(_hx_pos_dbe532790bbb8cd0_77_set_alphaMask,"away3d.materials.passes.DepthMapPass","set_alphaMask",0xbf6f4127,"away3d.materials.passes.DepthMapPass.set_alphaMask","away3d/materials/passes/DepthMapPass.hx",77,0xca9b1ed7)
HX_LOCAL_STACK_FRAME(_hx_pos_dbe532790bbb8cd0_86_getVertexCode,"away3d.materials.passes.DepthMapPass","getVertexCode",0x05a906c1,"away3d.materials.passes.DepthMapPass.getVertexCode","away3d/materials/passes/DepthMapPass.hx",86,0xca9b1ed7)
HX_LOCAL_STACK_FRAME(_hx_pos_dbe532790bbb8cd0_111_getFragmentCode,"away3d.materials.passes.DepthMapPass","getFragmentCode",0x2b36552d,"away3d.materials.passes.DepthMapPass.getFragmentCode","away3d/materials/passes/DepthMapPass.hx",111,0xca9b1ed7)
HX_LOCAL_STACK_FRAME(_hx_pos_dbe532790bbb8cd0_150_render,"away3d.materials.passes.DepthMapPass","render",0x1679843c,"away3d.materials.passes.DepthMapPass.render","away3d/materials/passes/DepthMapPass.hx",150,0xca9b1ed7)
HX_LOCAL_STACK_FRAME(_hx_pos_dbe532790bbb8cd0_167_activate,"away3d.materials.passes.DepthMapPass","activate",0xfde0ba19,"away3d.materials.passes.DepthMapPass.activate","away3d/materials/passes/DepthMapPass.hx",167,0xca9b1ed7)
namespace away3d{
namespace materials{
namespace passes{

void DepthMapPass_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_dbe532790bbb8cd0_19_new)
HXLINE(  22)		this->_alphaThreshold = ((Float)0);
HXLINE(  30)		super::__construct(null());
HXLINE(  31)		::Array< Float > array = ::Array_obj< Float >::fromData( _hx_array_data_9e8526c8_2,12);
HXDLIN(  31)		int length = null();
HXDLIN(  31)		bool fixed = null();
HXDLIN(  31)		::Array< Float > array1 = null();
HXDLIN(  31)		 ::openfl::_Vector::FloatVector vector =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array1,true);
HXDLIN(  31)		{
HXLINE(  31)			int _g = 0;
HXDLIN(  31)			int _g1 = array->length;
HXDLIN(  31)			while((_g < _g1)){
HXLINE(  31)				_g = (_g + 1);
HXDLIN(  31)				int i = (_g - 1);
HXDLIN(  31)				vector->set(i,array->__get(i));
            			}
            		}
HXDLIN(  31)		this->_data = vector;
            	}

Dynamic DepthMapPass_obj::__CreateEmpty() { return new DepthMapPass_obj; }

void *DepthMapPass_obj::_hx_vtable = 0;

Dynamic DepthMapPass_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DepthMapPass_obj > _hx_result = new DepthMapPass_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DepthMapPass_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		if (inClassId<=(int)0x049110f6) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x049110f6;
		} else {
			return inClassId==(int)0x0c89e854;
		}
	} else {
		return inClassId==(int)0x5a0f1d75;
	}
}

Float DepthMapPass_obj::get_alphaThreshold(){
            	HX_STACKFRAME(&_hx_pos_dbe532790bbb8cd0_45_get_alphaThreshold)
HXDLIN(  45)		return this->_alphaThreshold;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DepthMapPass_obj,get_alphaThreshold,return )

Float DepthMapPass_obj::set_alphaThreshold(Float value){
            	HX_STACKFRAME(&_hx_pos_dbe532790bbb8cd0_49_set_alphaThreshold)
HXLINE(  50)		if ((value < 0)) {
HXLINE(  51)			value = ( (Float)(0) );
            		}
            		else {
HXLINE(  52)			if ((value > 1)) {
HXLINE(  53)				value = ( (Float)(1) );
            			}
            		}
HXLINE(  54)		if ((value == this->_alphaThreshold)) {
HXLINE(  55)			return value;
            		}
HXLINE(  57)		bool _hx_tmp;
HXDLIN(  57)		if ((value != 0)) {
HXLINE(  57)			_hx_tmp = (this->_alphaThreshold == 0);
            		}
            		else {
HXLINE(  57)			_hx_tmp = true;
            		}
HXDLIN(  57)		if (_hx_tmp) {
HXLINE(  58)			this->invalidateShaderProgram(null());
            		}
HXLINE(  60)		this->_alphaThreshold = value;
HXLINE(  61)		this->_data->set(8,this->_alphaThreshold);
HXLINE(  62)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DepthMapPass_obj,set_alphaThreshold,return )

 ::away3d::textures::Texture2DBase DepthMapPass_obj::get_alphaMask(){
            	HX_STACKFRAME(&_hx_pos_dbe532790bbb8cd0_73_get_alphaMask)
HXDLIN(  73)		return this->_alphaMask;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DepthMapPass_obj,get_alphaMask,return )

 ::away3d::textures::Texture2DBase DepthMapPass_obj::set_alphaMask( ::away3d::textures::Texture2DBase value){
            	HX_STACKFRAME(&_hx_pos_dbe532790bbb8cd0_77_set_alphaMask)
HXLINE(  78)		this->_alphaMask = value;
HXLINE(  79)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DepthMapPass_obj,set_alphaMask,return )

::String DepthMapPass_obj::getVertexCode(){
            	HX_STACKFRAME(&_hx_pos_dbe532790bbb8cd0_86_getVertexCode)
HXLINE(  87)		::String code = (HX_("m44 vt1, vt0, vc0\t\t\n",99,8f,1b,f0) + HX_("mov op, vt1\t\n",93,37,bf,50));
HXLINE(  92)		if ((this->_alphaThreshold > 0)) {
HXLINE(  93)			this->_numUsedTextures = 1;
HXLINE(  94)			this->_numUsedStreams = 2;
HXLINE(  95)			code = (code + (HX_("mov v0, vt1\n",31,3b,97,5b) + HX_("mov v1, va1\n",1f,47,1e,85)));
            		}
            		else {
HXLINE(  99)			this->_numUsedTextures = 0;
HXLINE( 100)			this->_numUsedStreams = 1;
HXLINE( 101)			code = (code + HX_("mov v0, vt1\n",31,3b,97,5b));
            		}
HXLINE( 104)		return code;
            	}


::String DepthMapPass_obj::getFragmentCode(::String code){
            	HX_STACKFRAME(&_hx_pos_dbe532790bbb8cd0_111_getFragmentCode)
HXLINE( 112)		::String codeF = (((HX_("div ft2, v0, v0.w\t\t\n",f0,83,b6,07) + HX_("mul ft0, fc0, ft2.z\t\n",e4,19,c9,45)) + HX_("frc ft0, ft0\t\t\t\n",b6,50,4e,5f)) + HX_("mul ft1, ft0.yzww, fc1\t\n",f9,e3,cb,8c));
HXLINE( 118)		if ((this->_alphaThreshold > 0)) {
HXLINE( 119)			::String wrap;
HXDLIN( 119)			if (this->_repeat) {
HXLINE( 119)				wrap = HX_("wrap",ca,39,ff,4e);
            			}
            			else {
HXLINE( 119)				wrap = HX_("clamp",fb,72,58,48);
            			}
HXLINE( 120)			::String filter;
HXDLIN( 120)			::String format;
HXLINE( 121)			bool enableMipMaps;
HXDLIN( 121)			if (this->_mipmap) {
HXLINE( 121)				enableMipMaps = this->_alphaMask->get_hasMipMaps();
            			}
            			else {
HXLINE( 121)				enableMipMaps = false;
            			}
HXLINE( 123)			if (this->_smooth) {
HXLINE( 124)				if (enableMipMaps) {
HXLINE( 124)					filter = HX_("linear,miplinear",f2,e6,d0,0c);
            				}
            				else {
HXLINE( 124)					filter = HX_("linear",e5,51,a0,ec);
            				}
            			}
            			else {
HXLINE( 126)				if (enableMipMaps) {
HXLINE( 126)					filter = HX_("nearest,mipnearest",d8,b8,d6,47);
            				}
            				else {
HXLINE( 126)					filter = HX_("nearest",5e,18,ca,65);
            				}
            			}
HXLINE( 128)			 ::Dynamic _hx_switch_0 = this->_alphaMask->get_format();
            			if (  (_hx_switch_0==3) ){
HXLINE( 130)				format = HX_("dxt1,",3b,cd,bb,e3);
HXDLIN( 130)				goto _hx_goto_8;
            			}
            			if (  (_hx_switch_0==4) ){
HXLINE( 132)				format = HX_("dxt5,",b7,d0,bb,e3);
HXDLIN( 132)				goto _hx_goto_8;
            			}
            			/* default */{
HXLINE( 134)				format = HX_("",00,00,00,00);
            			}
            			_hx_goto_8:;
HXLINE( 136)			codeF = (codeF + (((((((HX_("tex ft3, v1, fs0 <2d,",4a,77,bb,7e) + filter) + HX_(",",2c,00,00,00)) + format) + wrap) + HX_(">\n",0c,36,00,00)) + HX_("sub ft3.w, ft3.w, fc2.x\n",eb,dd,f4,f0)) + HX_("kil ft3.w\n",2e,72,d6,ec)));
            		}
HXLINE( 141)		codeF = (codeF + HX_("sub oc, ft0, ft1\t\t\n",55,31,54,8d));
HXLINE( 143)		return codeF;
            	}


void DepthMapPass_obj::render(::Dynamic renderable, ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera, ::openfl::geom::Matrix3D viewProjection){
            	HX_STACKFRAME(&_hx_pos_dbe532790bbb8cd0_150_render)
HXLINE( 151)		if ((this->_alphaThreshold > 0)) {
HXLINE( 152)			::away3d::core::base::IRenderable_obj::activateUVBuffer(renderable,1,stage3DProxy);
            		}
HXLINE( 154)		 ::openfl::display3D::Context3D context = stage3DProxy->_context3D;
HXLINE( 155)		 ::openfl::geom::Matrix3D matrix = ::away3d::core::math::Matrix3DUtils_obj::CALCULATION_MATRIX;
HXLINE( 156)		matrix->copyFrom(::away3d::core::base::IRenderable_obj::getRenderSceneTransform(renderable,camera));
HXLINE( 157)		matrix->append(viewProjection);
HXLINE( 158)		context->setProgramConstantsFromMatrix(1,0,matrix,true);
HXLINE( 159)		::away3d::core::base::IRenderable_obj::activateVertexBuffer(renderable,0,stage3DProxy);
HXLINE( 160)		 ::openfl::display3D::IndexBuffer3D _hx_tmp = ::away3d::core::base::IRenderable_obj::getIndexBuffer(renderable,stage3DProxy);
HXDLIN( 160)		stage3DProxy->drawTriangles(_hx_tmp,0,::away3d::core::base::IRenderable_obj::get_numTriangles(renderable));
            	}


void DepthMapPass_obj::activate( ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera){
            	HX_STACKFRAME(&_hx_pos_dbe532790bbb8cd0_167_activate)
HXLINE( 168)		 ::openfl::display3D::Context3D context = stage3DProxy->_context3D;
HXLINE( 169)		this->super::activate(stage3DProxy,camera);
HXLINE( 171)		if ((this->_alphaThreshold > 0)) {
HXLINE( 172)			context->setTextureAt(0,this->_alphaMask->getTextureForStage3D(stage3DProxy));
HXLINE( 173)			context->setProgramConstantsFromVector(0,0,this->_data,3);
            		}
            		else {
HXLINE( 175)			context->setProgramConstantsFromVector(0,0,this->_data,2);
            		}
            	}



::hx::ObjectPtr< DepthMapPass_obj > DepthMapPass_obj::__new() {
	::hx::ObjectPtr< DepthMapPass_obj > __this = new DepthMapPass_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DepthMapPass_obj > DepthMapPass_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DepthMapPass_obj *__this = (DepthMapPass_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DepthMapPass_obj), true, "away3d.materials.passes.DepthMapPass"));
	*(void **)__this = DepthMapPass_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DepthMapPass_obj::DepthMapPass_obj()
{
}

void DepthMapPass_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DepthMapPass);
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(_alphaThreshold,"_alphaThreshold");
	HX_MARK_MEMBER_NAME(_alphaMask,"_alphaMask");
	 ::away3d::materials::passes::MaterialPassBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DepthMapPass_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(_alphaThreshold,"_alphaThreshold");
	HX_VISIT_MEMBER_NAME(_alphaMask,"_alphaMask");
	 ::away3d::materials::passes::MaterialPassBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DepthMapPass_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { return ::hx::Val( _data ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"activate") ) { return ::hx::Val( activate_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alphaMask") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_alphaMask() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_alphaMask") ) { return ::hx::Val( _alphaMask ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_alphaMask") ) { return ::hx::Val( get_alphaMask_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alphaMask") ) { return ::hx::Val( set_alphaMask_dyn() ); }
		if (HX_FIELD_EQ(inName,"getVertexCode") ) { return ::hx::Val( getVertexCode_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"alphaThreshold") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_alphaThreshold() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_alphaThreshold") ) { return ::hx::Val( _alphaThreshold ); }
		if (HX_FIELD_EQ(inName,"getFragmentCode") ) { return ::hx::Val( getFragmentCode_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_alphaThreshold") ) { return ::hx::Val( get_alphaThreshold_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alphaThreshold") ) { return ::hx::Val( set_alphaThreshold_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DepthMapPass_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alphaMask") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alphaMask(inValue.Cast<  ::away3d::textures::Texture2DBase >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_alphaMask") ) { _alphaMask=inValue.Cast<  ::away3d::textures::Texture2DBase >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"alphaThreshold") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alphaThreshold(inValue.Cast< Float >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_alphaThreshold") ) { _alphaThreshold=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DepthMapPass_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_data",09,72,74,f5));
	outFields->push(HX_("_alphaThreshold",0c,69,0b,4b));
	outFields->push(HX_("_alphaMask",2b,97,f2,3d));
	outFields->push(HX_("alphaThreshold",6d,20,ab,01));
	outFields->push(HX_("alphaMask",6a,1b,50,e2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DepthMapPass_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(DepthMapPass_obj,_data),HX_("_data",09,72,74,f5)},
	{::hx::fsFloat,(int)offsetof(DepthMapPass_obj,_alphaThreshold),HX_("_alphaThreshold",0c,69,0b,4b)},
	{::hx::fsObject /*  ::away3d::textures::Texture2DBase */ ,(int)offsetof(DepthMapPass_obj,_alphaMask),HX_("_alphaMask",2b,97,f2,3d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DepthMapPass_obj_sStaticStorageInfo = 0;
#endif

static ::String DepthMapPass_obj_sMemberFields[] = {
	HX_("_data",09,72,74,f5),
	HX_("_alphaThreshold",0c,69,0b,4b),
	HX_("_alphaMask",2b,97,f2,3d),
	HX_("get_alphaThreshold",36,01,45,9d),
	HX_("set_alphaThreshold",aa,33,f4,79),
	HX_("get_alphaMask",41,ef,b3,a3),
	HX_("set_alphaMask",4d,d1,b9,e8),
	HX_("getVertexCode",e7,96,f3,2e),
	HX_("getFragmentCode",d3,ba,61,28),
	HX_("render",56,6b,29,05),
	HX_("activate",b3,1b,ac,e5),
	::String(null()) };

::hx::Class DepthMapPass_obj::__mClass;

void DepthMapPass_obj::__register()
{
	DepthMapPass_obj _hx_dummy;
	DepthMapPass_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.materials.passes.DepthMapPass",c8,26,85,9e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DepthMapPass_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DepthMapPass_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DepthMapPass_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DepthMapPass_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace materials
} // end namespace passes
