#include <hxcpp.h>

#ifndef INCLUDED_away3d_cameras_Camera3D
#include <away3d/cameras/Camera3D.h>
#endif
#ifndef INCLUDED_away3d_cameras_lenses_LensBase
#include <away3d/cameras/lenses/LensBase.h>
#endif
#ifndef INCLUDED_away3d_cameras_lenses_PerspectiveLens
#include <away3d/cameras/lenses/PerspectiveLens.h>
#endif
#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_containers_Scene3D
#include <away3d/containers/Scene3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_render_DepthRenderer
#include <away3d/core/render/DepthRenderer.h>
#endif
#ifndef INCLUDED_away3d_core_render_RendererBase
#include <away3d/core/render/RendererBase.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_EntityCollector
#include <away3d/core/traverse/EntityCollector.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_PartitionTraverser
#include <away3d/core/traverse/PartitionTraverser.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_ShadowCasterCollector
#include <away3d/core/traverse/ShadowCasterCollector.h>
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
#ifndef INCLUDED_away3d_lights_LightBase
#include <away3d/lights/LightBase.h>
#endif
#ifndef INCLUDED_away3d_lights_PointLight
#include <away3d/lights/PointLight.h>
#endif
#ifndef INCLUDED_away3d_lights_shadowmaps_CubeMapShadowMapper
#include <away3d/lights/shadowmaps/CubeMapShadowMapper.h>
#endif
#ifndef INCLUDED_away3d_lights_shadowmaps_ShadowMapperBase
#include <away3d/lights/shadowmaps/ShadowMapperBase.h>
#endif
#ifndef INCLUDED_away3d_textures_CubeTextureBase
#include <away3d/textures/CubeTextureBase.h>
#endif
#ifndef INCLUDED_away3d_textures_RenderCubeTexture
#include <away3d/textures/RenderCubeTexture.h>
#endif
#ifndef INCLUDED_away3d_textures_TextureProxyBase
#include <away3d/textures/TextureProxyBase.h>
#endif
#ifndef INCLUDED_openfl__Vector_BoolVector
#include <openfl/_Vector/BoolVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3345c939301b0023_22_new,"away3d.lights.shadowmaps.CubeMapShadowMapper","new",0xee7d3825,"away3d.lights.shadowmaps.CubeMapShadowMapper.new","away3d/lights/shadowmaps/CubeMapShadowMapper.hx",22,0xc8f7858c)
HX_LOCAL_STACK_FRAME(_hx_pos_3345c939301b0023_32_initCameras,"away3d.lights.shadowmaps.CubeMapShadowMapper","initCameras",0xcfca2dc3,"away3d.lights.shadowmaps.CubeMapShadowMapper.initCameras","away3d/lights/shadowmaps/CubeMapShadowMapper.hx",32,0xc8f7858c)
HX_LOCAL_STACK_FRAME(_hx_pos_3345c939301b0023_45_addCamera,"away3d.lights.shadowmaps.CubeMapShadowMapper","addCamera",0x0565852b,"away3d.lights.shadowmaps.CubeMapShadowMapper.addCamera","away3d/lights/shadowmaps/CubeMapShadowMapper.hx",45,0xc8f7858c)
HX_LOCAL_STACK_FRAME(_hx_pos_3345c939301b0023_59_createDepthTexture,"away3d.lights.shadowmaps.CubeMapShadowMapper","createDepthTexture",0xefdfd10f,"away3d.lights.shadowmaps.CubeMapShadowMapper.createDepthTexture","away3d/lights/shadowmaps/CubeMapShadowMapper.hx",59,0xc8f7858c)
HX_LOCAL_STACK_FRAME(_hx_pos_3345c939301b0023_63_updateDepthProjection,"away3d.lights.shadowmaps.CubeMapShadowMapper","updateDepthProjection",0xf537706e,"away3d.lights.shadowmaps.CubeMapShadowMapper.updateDepthProjection","away3d/lights/shadowmaps/CubeMapShadowMapper.hx",63,0xc8f7858c)
HX_LOCAL_STACK_FRAME(_hx_pos_3345c939301b0023_77_drawDepthMap,"away3d.lights.shadowmaps.CubeMapShadowMapper","drawDepthMap",0xe14c9918,"away3d.lights.shadowmaps.CubeMapShadowMapper.drawDepthMap","away3d/lights/shadowmaps/CubeMapShadowMapper.hx",77,0xc8f7858c)
namespace away3d{
namespace lights{
namespace shadowmaps{

void CubeMapShadowMapper_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_3345c939301b0023_22_new)
HXLINE(  23)		super::__construct();
HXLINE(  25)		this->_depthMapSize = 512;
HXLINE(  27)		::Array< bool > array = null();
HXDLIN(  27)		this->_needsRender =  ::openfl::_Vector::BoolVector_obj::__alloc( HX_CTX ,6,true,array);
HXLINE(  28)		this->initCameras();
            	}

Dynamic CubeMapShadowMapper_obj::__CreateEmpty() { return new CubeMapShadowMapper_obj; }

void *CubeMapShadowMapper_obj::_hx_vtable = 0;

Dynamic CubeMapShadowMapper_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CubeMapShadowMapper_obj > _hx_result = new CubeMapShadowMapper_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CubeMapShadowMapper_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x507f9f35) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x507f9f35;
	} else {
		return inClassId==(int)0x7bcfe5e1;
	}
}

void CubeMapShadowMapper_obj::initCameras(){
            	HX_GC_STACKFRAME(&_hx_pos_3345c939301b0023_32_initCameras)
HXLINE(  33)		int length = null();
HXDLIN(  33)		bool fixed = null();
HXDLIN(  33)		::Array< ::Dynamic> array = null();
HXDLIN(  33)		this->_depthCameras =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE(  34)		int length1 = null();
HXDLIN(  34)		bool fixed1 = null();
HXDLIN(  34)		::Array< ::Dynamic> array1 = null();
HXDLIN(  34)		this->_lenses =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length1,fixed1,array1,true);
HXLINE(  36)		this->addCamera(( (Float)(0) ),( (Float)(90) ),( (Float)(0) ));
HXLINE(  37)		this->addCamera(( (Float)(0) ),( (Float)(-90) ),( (Float)(0) ));
HXLINE(  38)		this->addCamera(( (Float)(-90) ),( (Float)(0) ),( (Float)(0) ));
HXLINE(  39)		this->addCamera(( (Float)(90) ),( (Float)(0) ),( (Float)(0) ));
HXLINE(  40)		this->addCamera(( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXLINE(  41)		this->addCamera(( (Float)(0) ),( (Float)(180) ),( (Float)(0) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(CubeMapShadowMapper_obj,initCameras,(void))

void CubeMapShadowMapper_obj::addCamera(Float rotationX,Float rotationY,Float rotationZ){
            	HX_GC_STACKFRAME(&_hx_pos_3345c939301b0023_45_addCamera)
HXLINE(  46)		 ::away3d::cameras::Camera3D cam =  ::away3d::cameras::Camera3D_obj::__alloc( HX_CTX ,null());
HXLINE(  47)		cam->set_rotationX(rotationX);
HXLINE(  48)		cam->set_rotationY(rotationY);
HXLINE(  49)		cam->set_rotationZ(rotationZ);
HXLINE(  50)		cam->get_lens()->set_near(((Float).01));
HXLINE(  51)		::hx::TCast<  ::away3d::cameras::lenses::PerspectiveLens >::cast(cam->get_lens())->set_fieldOfView(( (Float)(90) ));
HXLINE(  52)		{
HXLINE(  52)			::Dynamic this1 = this->_lenses;
HXDLIN(  52)			( ( ::openfl::_Vector::ObjectVector)(this1) )->push(cam->get_lens());
            		}
HXLINE(  53)		cam->get_lens()->set_aspectRatio(( (Float)(1) ));
HXLINE(  54)		this->_depthCameras->push(cam);
            	}


HX_DEFINE_DYNAMIC_FUNC3(CubeMapShadowMapper_obj,addCamera,(void))

 ::away3d::textures::TextureProxyBase CubeMapShadowMapper_obj::createDepthTexture(){
            	HX_GC_STACKFRAME(&_hx_pos_3345c939301b0023_59_createDepthTexture)
HXDLIN(  59)		return  ::away3d::textures::RenderCubeTexture_obj::__alloc( HX_CTX ,this->_depthMapSize);
            	}


void CubeMapShadowMapper_obj::updateDepthProjection( ::away3d::cameras::Camera3D viewCamera){
            	HX_STACKFRAME(&_hx_pos_3345c939301b0023_63_updateDepthProjection)
HXLINE(  64)		Float maxDistance = ::hx::TCast<  ::away3d::lights::PointLight >::cast(this->_light)->_fallOff;
HXLINE(  65)		 ::openfl::geom::Vector3D pos = this->_light->get_scenePosition();
HXLINE(  68)		{
HXLINE(  68)			{
HXLINE(  69)				this->_lenses->get(0).StaticCast<  ::away3d::cameras::lenses::PerspectiveLens >()->set_far(maxDistance);
HXLINE(  70)				this->_depthCameras->get(0).StaticCast<  ::away3d::cameras::Camera3D >()->set_position(pos);
HXLINE(  71)				this->_needsRender->set(0,true);
            			}
HXLINE(  68)			{
HXLINE(  69)				this->_lenses->get(1).StaticCast<  ::away3d::cameras::lenses::PerspectiveLens >()->set_far(maxDistance);
HXLINE(  70)				this->_depthCameras->get(1).StaticCast<  ::away3d::cameras::Camera3D >()->set_position(pos);
HXLINE(  71)				this->_needsRender->set(1,true);
            			}
HXLINE(  68)			{
HXLINE(  69)				this->_lenses->get(2).StaticCast<  ::away3d::cameras::lenses::PerspectiveLens >()->set_far(maxDistance);
HXLINE(  70)				this->_depthCameras->get(2).StaticCast<  ::away3d::cameras::Camera3D >()->set_position(pos);
HXLINE(  71)				this->_needsRender->set(2,true);
            			}
HXLINE(  68)			{
HXLINE(  69)				this->_lenses->get(3).StaticCast<  ::away3d::cameras::lenses::PerspectiveLens >()->set_far(maxDistance);
HXLINE(  70)				this->_depthCameras->get(3).StaticCast<  ::away3d::cameras::Camera3D >()->set_position(pos);
HXLINE(  71)				this->_needsRender->set(3,true);
            			}
HXLINE(  68)			{
HXLINE(  69)				this->_lenses->get(4).StaticCast<  ::away3d::cameras::lenses::PerspectiveLens >()->set_far(maxDistance);
HXLINE(  70)				this->_depthCameras->get(4).StaticCast<  ::away3d::cameras::Camera3D >()->set_position(pos);
HXLINE(  71)				this->_needsRender->set(4,true);
            			}
HXLINE(  68)			{
HXLINE(  69)				this->_lenses->get(5).StaticCast<  ::away3d::cameras::lenses::PerspectiveLens >()->set_far(maxDistance);
HXLINE(  70)				this->_depthCameras->get(5).StaticCast<  ::away3d::cameras::Camera3D >()->set_position(pos);
HXLINE(  71)				this->_needsRender->set(5,true);
            			}
            		}
            	}


void CubeMapShadowMapper_obj::drawDepthMap( ::openfl::display3D::textures::TextureBase target, ::away3d::containers::Scene3D scene, ::away3d::core::render::DepthRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_3345c939301b0023_77_drawDepthMap)
HXLINE(  78)		if (this->_needsRender->get(0)) {
HXLINE(  79)			 ::away3d::core::traverse::ShadowCasterCollector _hx_tmp = this->_casterCollector;
HXDLIN(  79)			_hx_tmp->set_camera(this->_depthCameras->get(0).StaticCast<  ::away3d::cameras::Camera3D >());
HXLINE(  80)			this->_casterCollector->clear();
HXLINE(  81)			scene->traversePartitions(this->_casterCollector);
HXLINE(  82)			renderer->render(this->_casterCollector,target,null(),0);
HXLINE(  83)			this->_casterCollector->cleanUp();
            		}
HXLINE(  78)		if (this->_needsRender->get(1)) {
HXLINE(  79)			 ::away3d::core::traverse::ShadowCasterCollector _hx_tmp = this->_casterCollector;
HXDLIN(  79)			_hx_tmp->set_camera(this->_depthCameras->get(1).StaticCast<  ::away3d::cameras::Camera3D >());
HXLINE(  80)			this->_casterCollector->clear();
HXLINE(  81)			scene->traversePartitions(this->_casterCollector);
HXLINE(  82)			renderer->render(this->_casterCollector,target,null(),1);
HXLINE(  83)			this->_casterCollector->cleanUp();
            		}
HXLINE(  78)		if (this->_needsRender->get(2)) {
HXLINE(  79)			 ::away3d::core::traverse::ShadowCasterCollector _hx_tmp = this->_casterCollector;
HXDLIN(  79)			_hx_tmp->set_camera(this->_depthCameras->get(2).StaticCast<  ::away3d::cameras::Camera3D >());
HXLINE(  80)			this->_casterCollector->clear();
HXLINE(  81)			scene->traversePartitions(this->_casterCollector);
HXLINE(  82)			renderer->render(this->_casterCollector,target,null(),2);
HXLINE(  83)			this->_casterCollector->cleanUp();
            		}
HXLINE(  78)		if (this->_needsRender->get(3)) {
HXLINE(  79)			 ::away3d::core::traverse::ShadowCasterCollector _hx_tmp = this->_casterCollector;
HXDLIN(  79)			_hx_tmp->set_camera(this->_depthCameras->get(3).StaticCast<  ::away3d::cameras::Camera3D >());
HXLINE(  80)			this->_casterCollector->clear();
HXLINE(  81)			scene->traversePartitions(this->_casterCollector);
HXLINE(  82)			renderer->render(this->_casterCollector,target,null(),3);
HXLINE(  83)			this->_casterCollector->cleanUp();
            		}
HXLINE(  78)		if (this->_needsRender->get(4)) {
HXLINE(  79)			 ::away3d::core::traverse::ShadowCasterCollector _hx_tmp = this->_casterCollector;
HXDLIN(  79)			_hx_tmp->set_camera(this->_depthCameras->get(4).StaticCast<  ::away3d::cameras::Camera3D >());
HXLINE(  80)			this->_casterCollector->clear();
HXLINE(  81)			scene->traversePartitions(this->_casterCollector);
HXLINE(  82)			renderer->render(this->_casterCollector,target,null(),4);
HXLINE(  83)			this->_casterCollector->cleanUp();
            		}
HXLINE(  78)		if (this->_needsRender->get(5)) {
HXLINE(  79)			 ::away3d::core::traverse::ShadowCasterCollector _hx_tmp = this->_casterCollector;
HXDLIN(  79)			_hx_tmp->set_camera(this->_depthCameras->get(5).StaticCast<  ::away3d::cameras::Camera3D >());
HXLINE(  80)			this->_casterCollector->clear();
HXLINE(  81)			scene->traversePartitions(this->_casterCollector);
HXLINE(  82)			renderer->render(this->_casterCollector,target,null(),5);
HXLINE(  83)			this->_casterCollector->cleanUp();
            		}
            	}



::hx::ObjectPtr< CubeMapShadowMapper_obj > CubeMapShadowMapper_obj::__new() {
	::hx::ObjectPtr< CubeMapShadowMapper_obj > __this = new CubeMapShadowMapper_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< CubeMapShadowMapper_obj > CubeMapShadowMapper_obj::__alloc(::hx::Ctx *_hx_ctx) {
	CubeMapShadowMapper_obj *__this = (CubeMapShadowMapper_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CubeMapShadowMapper_obj), true, "away3d.lights.shadowmaps.CubeMapShadowMapper"));
	*(void **)__this = CubeMapShadowMapper_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

CubeMapShadowMapper_obj::CubeMapShadowMapper_obj()
{
}

void CubeMapShadowMapper_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CubeMapShadowMapper);
	HX_MARK_MEMBER_NAME(_depthCameras,"_depthCameras");
	HX_MARK_MEMBER_NAME(_lenses,"_lenses");
	HX_MARK_MEMBER_NAME(_needsRender,"_needsRender");
	 ::away3d::lights::shadowmaps::ShadowMapperBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CubeMapShadowMapper_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_depthCameras,"_depthCameras");
	HX_VISIT_MEMBER_NAME(_lenses,"_lenses");
	HX_VISIT_MEMBER_NAME(_needsRender,"_needsRender");
	 ::away3d::lights::shadowmaps::ShadowMapperBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CubeMapShadowMapper_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_lenses") ) { return ::hx::Val( _lenses ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addCamera") ) { return ::hx::Val( addCamera_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initCameras") ) { return ::hx::Val( initCameras_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_needsRender") ) { return ::hx::Val( _needsRender ); }
		if (HX_FIELD_EQ(inName,"drawDepthMap") ) { return ::hx::Val( drawDepthMap_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_depthCameras") ) { return ::hx::Val( _depthCameras ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createDepthTexture") ) { return ::hx::Val( createDepthTexture_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"updateDepthProjection") ) { return ::hx::Val( updateDepthProjection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CubeMapShadowMapper_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_lenses") ) { _lenses=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_needsRender") ) { _needsRender=inValue.Cast<  ::openfl::_Vector::BoolVector >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_depthCameras") ) { _depthCameras=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CubeMapShadowMapper_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_depthCameras",4a,ca,ee,0b));
	outFields->push(HX_("_lenses",8b,b4,87,0d));
	outFields->push(HX_("_needsRender",94,48,d2,1b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CubeMapShadowMapper_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(CubeMapShadowMapper_obj,_depthCameras),HX_("_depthCameras",4a,ca,ee,0b)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(CubeMapShadowMapper_obj,_lenses),HX_("_lenses",8b,b4,87,0d)},
	{::hx::fsObject /*  ::openfl::_Vector::BoolVector */ ,(int)offsetof(CubeMapShadowMapper_obj,_needsRender),HX_("_needsRender",94,48,d2,1b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CubeMapShadowMapper_obj_sStaticStorageInfo = 0;
#endif

static ::String CubeMapShadowMapper_obj_sMemberFields[] = {
	HX_("_depthCameras",4a,ca,ee,0b),
	HX_("_lenses",8b,b4,87,0d),
	HX_("_needsRender",94,48,d2,1b),
	HX_("initCameras",fe,f8,9b,9b),
	HX_("addCamera",a6,7b,b0,6f),
	HX_("createDepthTexture",34,b3,4d,df),
	HX_("updateDepthProjection",69,b3,97,22),
	HX_("drawDepthMap",7d,a1,0c,6d),
	::String(null()) };

::hx::Class CubeMapShadowMapper_obj::__mClass;

void CubeMapShadowMapper_obj::__register()
{
	CubeMapShadowMapper_obj _hx_dummy;
	CubeMapShadowMapper_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.lights.shadowmaps.CubeMapShadowMapper",b3,41,d3,cd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CubeMapShadowMapper_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CubeMapShadowMapper_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CubeMapShadowMapper_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CubeMapShadowMapper_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace lights
} // end namespace shadowmaps
