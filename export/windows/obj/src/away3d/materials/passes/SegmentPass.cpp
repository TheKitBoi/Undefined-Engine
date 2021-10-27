#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_away3d_cameras_Camera3D
#include <away3d/cameras/Camera3D.h>
#endif
#ifndef INCLUDED_away3d_cameras_lenses_LensBase
#include <away3d/cameras/lenses/LensBase.h>
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
#ifndef INCLUDED_away3d_core_managers_RTTBufferManager
#include <away3d/core/managers/RTTBufferManager.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_entities_SegmentSet
#include <away3d/entities/SegmentSet.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_MaterialPassBase
#include <away3d/materials/passes/MaterialPassBase.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_SegmentPass
#include <away3d/materials/passes/SegmentPass.h>
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
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b320e2e69d323804_17_new,"away3d.materials.passes.SegmentPass","new",0x30536bd8,"away3d.materials.passes.SegmentPass.new","away3d/materials/passes/SegmentPass.hx",17,0xc78f57d7)
HX_LOCAL_STACK_FRAME(_hx_pos_b320e2e69d323804_46_getVertexCode,"away3d.materials.passes.SegmentPass","getVertexCode",0x06e5385f,"away3d.materials.passes.SegmentPass.getVertexCode","away3d/materials/passes/SegmentPass.hx",46,0xc78f57d7)
HX_LOCAL_STACK_FRAME(_hx_pos_b320e2e69d323804_112_getFragmentCode,"away3d.materials.passes.SegmentPass","getFragmentCode",0x1918aa4b,"away3d.materials.passes.SegmentPass.getFragmentCode","away3d/materials/passes/SegmentPass.hx",112,0xc78f57d7)
HX_LOCAL_STACK_FRAME(_hx_pos_b320e2e69d323804_120_render,"away3d.materials.passes.SegmentPass","render",0x61ee4ade,"away3d.materials.passes.SegmentPass.render","away3d/materials/passes/SegmentPass.hx",120,0xc78f57d7)
HX_LOCAL_STACK_FRAME(_hx_pos_b320e2e69d323804_140_activate,"away3d.materials.passes.SegmentPass","activate",0xa50ded3b,"away3d.materials.passes.SegmentPass.activate","away3d/materials/passes/SegmentPass.hx",140,0xc78f57d7)
HX_LOCAL_STACK_FRAME(_hx_pos_b320e2e69d323804_173_deactivate,"away3d.materials.passes.SegmentPass","deactivate",0xf4a09fbc,"away3d.materials.passes.SegmentPass.deactivate","away3d/materials/passes/SegmentPass.hx",173,0xc78f57d7)
HX_LOCAL_STACK_FRAME(_hx_pos_b320e2e69d323804_19_boot,"away3d.materials.passes.SegmentPass","boot",0x10c3f1ba,"away3d.materials.passes.SegmentPass.boot","away3d/materials/passes/SegmentPass.hx",19,0xc78f57d7)
static const Float _hx_array_data_5712dfe6_9[] = {
	1.0,1.0,1.0,1.0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_b320e2e69d323804_20_boot,"away3d.materials.passes.SegmentPass","boot",0x10c3f1ba,"away3d.materials.passes.SegmentPass.boot","away3d/materials/passes/SegmentPass.hx",20,0xc78f57d7)
static const Float _hx_array_data_5712dfe6_13[] = {
	0.0,0.0,-1.0,0.0,
};
namespace away3d{
namespace materials{
namespace passes{

void SegmentPass_obj::__construct(Float thickness){
            	HX_GC_STACKFRAME(&_hx_pos_b320e2e69d323804_17_new)
HXLINE(  22)		::Array< Float > array = null();
HXDLIN(  22)		this->_constants =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,4,true,array,true);
HXLINE(  33)		this->_calcMatrix =  ::openfl::geom::Matrix3D_obj::__alloc( HX_CTX ,null());
HXLINE(  35)		this->_thickness = thickness;
HXLINE(  36)		this->_constants->set(1,((Float)0.00392156862745098));
HXLINE(  38)		super::__construct(null());
            	}

Dynamic SegmentPass_obj::__CreateEmpty() { return new SegmentPass_obj; }

void *SegmentPass_obj::_hx_vtable = 0;

Dynamic SegmentPass_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SegmentPass_obj > _hx_result = new SegmentPass_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SegmentPass_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		if (inClassId<=(int)0x0a9dd578) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0a9dd578;
		} else {
			return inClassId==(int)0x0c89e854;
		}
	} else {
		return inClassId==(int)0x5a0f1d75;
	}
}

::String SegmentPass_obj::getVertexCode(){
            	HX_STACKFRAME(&_hx_pos_b320e2e69d323804_46_getVertexCode)
HXDLIN(  46)		return (((((((((((((((((((((((((((((HX_("m44 vt0, va0, vc8\t\t\t\n",e6,23,b9,9d) + HX_("m44 vt1, va1, vc8\t\t\t\n",86,3b,ff,f2)) + HX_("sub vt2, vt1, vt0 \t\t\t\n",ce,d5,73,bf)) + HX_("slt vt5.x, vt0.z, vc7.z\t\t\t\n",95,f6,d0,2a)) + HX_("sub vt5.y, vc5.x, vt5.x\t\t\t\n",f2,20,9b,0c)) + HX_("add vt4.x, vt0.z, vc7.z\t\t\t\n",7a,62,69,9a)) + HX_("sub vt4.y, vt0.z, vt1.z\t\t\t\n",a3,de,38,f6)) + HX_("seq vt4.z, vt4.y vc6.x\t\t\t\n",c0,cb,ba,56)) + HX_("add vt4.y, vt4.y, vt4.z\t\t\t\n",64,86,05,b8)) + HX_("div vt4.z, vt4.x, vt4.y\t\t\t\n",b5,f3,92,2d)) + HX_("mul vt4.xyz, vt4.zzz, vt2.xyz\t\n",83,d8,5e,13)) + HX_("add vt3.xyz, vt0.xyz, vt4.xyz\t\n",e6,99,86,cb)) + HX_("mov vt3.w, vc5.x\t\t\t\n",4d,37,1f,7d)) + HX_("mul vt0, vt0, vt5.yyyy\t\t\t\n",74,d6,69,4d)) + HX_("mul vt3, vt3, vt5.xxxx\t\t\t\n",d4,c9,00,e3)) + HX_("add vt0, vt0, vt3\t\t\t\t\n",d4,15,f6,57)) + HX_("sub vt2, vt1, vt0 \t\t\t\n",ce,d5,73,bf)) + HX_("nrm vt2.xyz, vt2.xyz\t\t\t\n",c4,0f,e2,ea)) + HX_("nrm vt5.xyz, vt0.xyz\t\t\t\n",5f,0a,2b,7c)) + HX_("mov vt5.w, vc5.x\t\t\t\t\n",c0,6a,28,28)) + HX_("crs vt3.xyz, vt2, vt5\t\t\t\n",a8,e5,5c,61)) + HX_("nrm vt3.xyz, vt3.xyz\t\t\t\n",a4,67,37,d0)) + HX_("mul vt3.xyz, vt3.xyz, va2.xxx\t\n",b6,1c,a3,38)) + HX_("mov vt3.w, vc5.x\t\t\t\n",4d,37,1f,7d)) + HX_("dp3 vt4.x, vt0, vc6\t\t\t\n",7f,f5,b9,bf)) + HX_("mul vt4.x, vt4.x, vc7.x\t\t\t\n",99,26,b8,37)) + HX_("mul vt3.xyz, vt3.xyz, vt4.xxx\t\n",85,82,8c,ca)) + HX_("add vt0.xyz, vt0.xyz, vt3.xyz\t\n",22,72,db,86)) + HX_("m44 op, vt0, vc0\t\t\t\n",e6,b7,51,06)) + HX_("mov v0, va3\t\t\t\t\n",5c,43,25,77));
            	}


::String SegmentPass_obj::getFragmentCode(::String animationCode){
            	HX_STACKFRAME(&_hx_pos_b320e2e69d323804_112_getFragmentCode)
HXDLIN( 112)		return HX_("mov oc, v0\n",fc,92,d7,a8);
            	}


void SegmentPass_obj::render(::Dynamic renderable, ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera, ::openfl::geom::Matrix3D viewProjection){
            	HX_STACKFRAME(&_hx_pos_b320e2e69d323804_120_render)
HXLINE( 121)		 ::openfl::display3D::Context3D context = stage3DProxy->_context3D;
HXLINE( 122)		 ::openfl::geom::Matrix3D _hx_tmp = this->_calcMatrix;
HXDLIN( 122)		_hx_tmp->copyFrom(::away3d::core::base::IRenderable_obj::get_sourceEntity(renderable)->get_sceneTransform());
HXLINE( 123)		 ::openfl::geom::Matrix3D _hx_tmp1 = this->_calcMatrix;
HXDLIN( 123)		_hx_tmp1->append(camera->get_inverseSceneTransform());
HXLINE( 125)		int subSetCount = ::hx::TCast<  ::away3d::entities::SegmentSet >::cast(renderable)->get_subSetCount();
HXLINE( 127)		if (::hx::TCast<  ::away3d::entities::SegmentSet >::cast(renderable)->get_hasData()) {
HXLINE( 128)			int _g = 0;
HXDLIN( 128)			int _g1 = subSetCount;
HXDLIN( 128)			while((_g < _g1)){
HXLINE( 128)				_g = (_g + 1);
HXDLIN( 128)				int i = (_g - 1);
HXLINE( 129)				::away3d::core::base::IRenderable_obj::activateVertexBuffer(renderable,i,stage3DProxy);
HXLINE( 130)				context->setProgramConstantsFromMatrix(1,8,this->_calcMatrix,true);
HXLINE( 131)				 ::openfl::display3D::IndexBuffer3D _hx_tmp = ::away3d::core::base::IRenderable_obj::getIndexBuffer(renderable,stage3DProxy);
HXDLIN( 131)				stage3DProxy->drawTriangles(_hx_tmp,0,::away3d::core::base::IRenderable_obj::get_numTriangles(renderable));
            			}
            		}
            	}


void SegmentPass_obj::activate( ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera){
            	HX_STACKFRAME(&_hx_pos_b320e2e69d323804_140_activate)
HXLINE( 141)		 ::openfl::display3D::Context3D context = stage3DProxy->_context3D;
HXLINE( 142)		this->super::activate(stage3DProxy,camera);
HXLINE( 144)		if (::hx::IsNotNull( stage3DProxy->get_scissorRect() )) {
HXLINE( 145)			::Dynamic this1 = this->_constants;
HXDLIN( 145)			Float value = this->_thickness;
HXDLIN( 145)			Float value1 = stage3DProxy->get_scissorRect()->width;
HXDLIN( 145)			( ( ::openfl::_Vector::FloatVector)(this1) )->set(0,(value / ::Math_obj::min(value1,stage3DProxy->get_scissorRect()->height)));
            		}
            		else {
HXLINE( 147)			::Dynamic this1 = this->_constants;
HXDLIN( 147)			Float value = this->_thickness;
HXDLIN( 147)			int value1 = stage3DProxy->get_width();
HXDLIN( 147)			( ( ::openfl::_Vector::FloatVector)(this1) )->set(0,(value / ::Math_obj::min(( (Float)(value1) ),( (Float)(stage3DProxy->get_height()) ))));
            		}
HXLINE( 150)		{
HXLINE( 150)			::Dynamic this1 = this->_constants;
HXDLIN( 150)			( ( ::openfl::_Vector::FloatVector)(this1) )->set(2,camera->get_lens()->get_near());
            		}
HXLINE( 152)		context->setProgramConstantsFromVector(1,5,::away3d::materials::passes::SegmentPass_obj::ONE_VECTOR,null());
HXLINE( 153)		context->setProgramConstantsFromVector(1,6,::away3d::materials::passes::SegmentPass_obj::FRONT_VECTOR,null());
HXLINE( 154)		context->setProgramConstantsFromVector(1,7,this->_constants,null());
HXLINE( 157)		if (::hx::IsNull( stage3DProxy->get_renderTarget() )) {
HXLINE( 158)			context->setProgramConstantsFromMatrix(1,0,camera->get_lens()->get_matrix(),true);
            		}
            		else {
HXLINE( 162)			 ::openfl::geom::Matrix3D _hx_tmp = this->_calcMatrix;
HXDLIN( 162)			_hx_tmp->copyFrom(camera->get_lens()->get_matrix());
HXLINE( 163)			 ::away3d::core::managers::RTTBufferManager rttBufferManager = ::away3d::core::managers::RTTBufferManager_obj::getInstance(stage3DProxy);
HXLINE( 164)			 ::openfl::geom::Matrix3D _hx_tmp1 = this->_calcMatrix;
HXDLIN( 164)			Float _hx_tmp2 = rttBufferManager->get_textureRatioX();
HXDLIN( 164)			_hx_tmp1->appendScale(_hx_tmp2,rttBufferManager->get_textureRatioY(),( (Float)(1) ));
HXLINE( 165)			context->setProgramConstantsFromMatrix(1,0,this->_calcMatrix,true);
            		}
            	}


void SegmentPass_obj::deactivate( ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_b320e2e69d323804_173_deactivate)
HXLINE( 174)		 ::openfl::display3D::Context3D context = stage3DProxy->_context3D;
HXLINE( 175)		context->setVertexBufferAt(0,null(),null(),null());
HXLINE( 176)		context->setVertexBufferAt(1,null(),null(),null());
HXLINE( 177)		context->setVertexBufferAt(2,null(),null(),null());
HXLINE( 178)		context->setVertexBufferAt(3,null(),null(),null());
            	}


 ::openfl::_Vector::FloatVector SegmentPass_obj::ONE_VECTOR;

 ::openfl::_Vector::FloatVector SegmentPass_obj::FRONT_VECTOR;


::hx::ObjectPtr< SegmentPass_obj > SegmentPass_obj::__new(Float thickness) {
	::hx::ObjectPtr< SegmentPass_obj > __this = new SegmentPass_obj();
	__this->__construct(thickness);
	return __this;
}

::hx::ObjectPtr< SegmentPass_obj > SegmentPass_obj::__alloc(::hx::Ctx *_hx_ctx,Float thickness) {
	SegmentPass_obj *__this = (SegmentPass_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SegmentPass_obj), true, "away3d.materials.passes.SegmentPass"));
	*(void **)__this = SegmentPass_obj::_hx_vtable;
	__this->__construct(thickness);
	return __this;
}

SegmentPass_obj::SegmentPass_obj()
{
}

void SegmentPass_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SegmentPass);
	HX_MARK_MEMBER_NAME(_constants,"_constants");
	HX_MARK_MEMBER_NAME(_calcMatrix,"_calcMatrix");
	HX_MARK_MEMBER_NAME(_thickness,"_thickness");
	 ::away3d::materials::passes::MaterialPassBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SegmentPass_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_constants,"_constants");
	HX_VISIT_MEMBER_NAME(_calcMatrix,"_calcMatrix");
	HX_VISIT_MEMBER_NAME(_thickness,"_thickness");
	 ::away3d::materials::passes::MaterialPassBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val SegmentPass_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"activate") ) { return ::hx::Val( activate_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_constants") ) { return ::hx::Val( _constants ); }
		if (HX_FIELD_EQ(inName,"_thickness") ) { return ::hx::Val( _thickness ); }
		if (HX_FIELD_EQ(inName,"deactivate") ) { return ::hx::Val( deactivate_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_calcMatrix") ) { return ::hx::Val( _calcMatrix ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getVertexCode") ) { return ::hx::Val( getVertexCode_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getFragmentCode") ) { return ::hx::Val( getFragmentCode_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool SegmentPass_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"ONE_VECTOR") ) { outValue = ( ONE_VECTOR ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"FRONT_VECTOR") ) { outValue = ( FRONT_VECTOR ); return true; }
	}
	return false;
}

::hx::Val SegmentPass_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_constants") ) { _constants=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_thickness") ) { _thickness=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_calcMatrix") ) { _calcMatrix=inValue.Cast<  ::openfl::geom::Matrix3D >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SegmentPass_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"ONE_VECTOR") ) { ONE_VECTOR=ioValue.Cast<  ::openfl::_Vector::FloatVector >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"FRONT_VECTOR") ) { FRONT_VECTOR=ioValue.Cast<  ::openfl::_Vector::FloatVector >(); return true; }
	}
	return false;
}

void SegmentPass_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_constants",50,f2,0d,a0));
	outFields->push(HX_("_calcMatrix",d5,ad,40,43));
	outFields->push(HX_("_thickness",35,6d,09,b6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SegmentPass_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(SegmentPass_obj,_constants),HX_("_constants",50,f2,0d,a0)},
	{::hx::fsObject /*  ::openfl::geom::Matrix3D */ ,(int)offsetof(SegmentPass_obj,_calcMatrix),HX_("_calcMatrix",d5,ad,40,43)},
	{::hx::fsFloat,(int)offsetof(SegmentPass_obj,_thickness),HX_("_thickness",35,6d,09,b6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo SegmentPass_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(void *) &SegmentPass_obj::ONE_VECTOR,HX_("ONE_VECTOR",dc,2c,79,bf)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(void *) &SegmentPass_obj::FRONT_VECTOR,HX_("FRONT_VECTOR",f9,30,04,5b)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String SegmentPass_obj_sMemberFields[] = {
	HX_("_constants",50,f2,0d,a0),
	HX_("_calcMatrix",d5,ad,40,43),
	HX_("_thickness",35,6d,09,b6),
	HX_("getVertexCode",e7,96,f3,2e),
	HX_("getFragmentCode",d3,ba,61,28),
	HX_("render",56,6b,29,05),
	HX_("activate",b3,1b,ac,e5),
	HX_("deactivate",34,5c,01,3c),
	::String(null()) };

static void SegmentPass_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SegmentPass_obj::ONE_VECTOR,"ONE_VECTOR");
	HX_MARK_MEMBER_NAME(SegmentPass_obj::FRONT_VECTOR,"FRONT_VECTOR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SegmentPass_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SegmentPass_obj::ONE_VECTOR,"ONE_VECTOR");
	HX_VISIT_MEMBER_NAME(SegmentPass_obj::FRONT_VECTOR,"FRONT_VECTOR");
};

#endif

::hx::Class SegmentPass_obj::__mClass;

static ::String SegmentPass_obj_sStaticFields[] = {
	HX_("ONE_VECTOR",dc,2c,79,bf),
	HX_("FRONT_VECTOR",f9,30,04,5b),
	::String(null())
};

void SegmentPass_obj::__register()
{
	SegmentPass_obj _hx_dummy;
	SegmentPass_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.materials.passes.SegmentPass",e6,df,12,57);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SegmentPass_obj::__GetStatic;
	__mClass->mSetStaticField = &SegmentPass_obj::__SetStatic;
	__mClass->mMarkFunc = SegmentPass_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SegmentPass_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SegmentPass_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SegmentPass_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SegmentPass_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SegmentPass_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SegmentPass_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SegmentPass_obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::openfl::_Vector::FloatVector _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_b320e2e69d323804_19_boot)
HXDLIN(  19)			::Array< Float > array = ::Array_obj< Float >::fromData( _hx_array_data_5712dfe6_9,4);
HXDLIN(  19)			int length = null();
HXDLIN(  19)			bool fixed = null();
HXDLIN(  19)			::Array< Float > array1 = null();
HXDLIN(  19)			 ::openfl::_Vector::FloatVector vector =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array1,true);
HXDLIN(  19)			{
HXDLIN(  19)				int _g = 0;
HXDLIN(  19)				int _g1 = array->length;
HXDLIN(  19)				while((_g < _g1)){
HXDLIN(  19)					_g = (_g + 1);
HXDLIN(  19)					int i = (_g - 1);
HXDLIN(  19)					vector->set(i,array->__get(i));
            				}
            			}
HXDLIN(  19)			return vector;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_b320e2e69d323804_19_boot)
HXDLIN(  19)		ONE_VECTOR = ( ( ::openfl::_Vector::FloatVector)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::openfl::_Vector::FloatVector _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_b320e2e69d323804_20_boot)
HXDLIN(  20)			::Array< Float > array = ::Array_obj< Float >::fromData( _hx_array_data_5712dfe6_13,4);
HXDLIN(  20)			int length = null();
HXDLIN(  20)			bool fixed = null();
HXDLIN(  20)			::Array< Float > array1 = null();
HXDLIN(  20)			 ::openfl::_Vector::FloatVector vector =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array1,true);
HXDLIN(  20)			{
HXDLIN(  20)				int _g = 0;
HXDLIN(  20)				int _g1 = array->length;
HXDLIN(  20)				while((_g < _g1)){
HXDLIN(  20)					_g = (_g + 1);
HXDLIN(  20)					int i = (_g - 1);
HXDLIN(  20)					vector->set(i,array->__get(i));
            				}
            			}
HXDLIN(  20)			return vector;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_b320e2e69d323804_20_boot)
HXDLIN(  20)		FRONT_VECTOR = ( ( ::openfl::_Vector::FloatVector)( ::Dynamic(new _hx_Closure_0())()) );
            	}
}

} // end namespace away3d
} // end namespace materials
} // end namespace passes
