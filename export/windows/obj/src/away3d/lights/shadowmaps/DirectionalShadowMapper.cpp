#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_cameras_Camera3D
#include <away3d/cameras/Camera3D.h>
#endif
#ifndef INCLUDED_away3d_cameras_lenses_FreeMatrixLens
#include <away3d/cameras/lenses/FreeMatrixLens.h>
#endif
#ifndef INCLUDED_away3d_cameras_lenses_LensBase
#include <away3d/cameras/lenses/LensBase.h>
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
#ifndef INCLUDED_away3d_core_math_Matrix3DUtils
#include <away3d/core/math/Matrix3DUtils.h>
#endif
#ifndef INCLUDED_away3d_core_math_Plane3D
#include <away3d/core/math/Plane3D.h>
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
#ifndef INCLUDED_away3d_lights_DirectionalLight
#include <away3d/lights/DirectionalLight.h>
#endif
#ifndef INCLUDED_away3d_lights_LightBase
#include <away3d/lights/LightBase.h>
#endif
#ifndef INCLUDED_away3d_lights_shadowmaps_DirectionalShadowMapper
#include <away3d/lights/shadowmaps/DirectionalShadowMapper.h>
#endif
#ifndef INCLUDED_away3d_lights_shadowmaps_ShadowMapperBase
#include <away3d/lights/shadowmaps/ShadowMapperBase.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
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
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0401a75ecf403976_16_new,"away3d.lights.shadowmaps.DirectionalShadowMapper","new",0x5726d7e8,"away3d.lights.shadowmaps.DirectionalShadowMapper.new","away3d/lights/shadowmaps/DirectionalShadowMapper.hx",16,0x1c82b3a9)
HX_LOCAL_STACK_FRAME(_hx_pos_0401a75ecf403976_47_get_snap,"away3d.lights.shadowmaps.DirectionalShadowMapper","get_snap",0xb86ebd4b,"away3d.lights.shadowmaps.DirectionalShadowMapper.get_snap","away3d/lights/shadowmaps/DirectionalShadowMapper.hx",47,0x1c82b3a9)
HX_LOCAL_STACK_FRAME(_hx_pos_0401a75ecf403976_51_set_snap,"away3d.lights.shadowmaps.DirectionalShadowMapper","set_snap",0x66cc16bf,"away3d.lights.shadowmaps.DirectionalShadowMapper.set_snap","away3d/lights/shadowmaps/DirectionalShadowMapper.hx",51,0x1c82b3a9)
HX_LOCAL_STACK_FRAME(_hx_pos_0401a75ecf403976_58_get_lightOffset,"away3d.lights.shadowmaps.DirectionalShadowMapper","get_lightOffset",0x9e73cc28,"away3d.lights.shadowmaps.DirectionalShadowMapper.get_lightOffset","away3d/lights/shadowmaps/DirectionalShadowMapper.hx",58,0x1c82b3a9)
HX_LOCAL_STACK_FRAME(_hx_pos_0401a75ecf403976_62_set_lightOffset,"away3d.lights.shadowmaps.DirectionalShadowMapper","set_lightOffset",0x9a3f4934,"away3d.lights.shadowmaps.DirectionalShadowMapper.set_lightOffset","away3d/lights/shadowmaps/DirectionalShadowMapper.hx",62,0x1c82b3a9)
HX_LOCAL_STACK_FRAME(_hx_pos_0401a75ecf403976_72_get_depthProjection,"away3d.lights.shadowmaps.DirectionalShadowMapper","get_depthProjection",0x995c6611,"away3d.lights.shadowmaps.DirectionalShadowMapper.get_depthProjection","away3d/lights/shadowmaps/DirectionalShadowMapper.hx",72,0x1c82b3a9)
HX_LOCAL_STACK_FRAME(_hx_pos_0401a75ecf403976_80_get_depth,"away3d.lights.shadowmaps.DirectionalShadowMapper","get_depth",0xff8caae2,"away3d.lights.shadowmaps.DirectionalShadowMapper.get_depth","away3d/lights/shadowmaps/DirectionalShadowMapper.hx",80,0x1c82b3a9)
HX_LOCAL_STACK_FRAME(_hx_pos_0401a75ecf403976_84_drawDepthMap,"away3d.lights.shadowmaps.DirectionalShadowMapper","drawDepthMap",0x54b068f5,"away3d.lights.shadowmaps.DirectionalShadowMapper.drawDepthMap","away3d/lights/shadowmaps/DirectionalShadowMapper.hx",84,0x1c82b3a9)
HX_LOCAL_STACK_FRAME(_hx_pos_0401a75ecf403976_94_updateCullPlanes,"away3d.lights.shadowmaps.DirectionalShadowMapper","updateCullPlanes",0xf25150ca,"away3d.lights.shadowmaps.DirectionalShadowMapper.updateCullPlanes","away3d/lights/shadowmaps/DirectionalShadowMapper.hx",94,0x1c82b3a9)
HX_LOCAL_STACK_FRAME(_hx_pos_0401a75ecf403976_117_updateDepthProjection,"away3d.lights.shadowmaps.DirectionalShadowMapper","updateDepthProjection",0xb4ab3cf1,"away3d.lights.shadowmaps.DirectionalShadowMapper.updateDepthProjection","away3d/lights/shadowmaps/DirectionalShadowMapper.hx",117,0x1c82b3a9)
HX_LOCAL_STACK_FRAME(_hx_pos_0401a75ecf403976_124_updateProjectionFromFrustumCorners,"away3d.lights.shadowmaps.DirectionalShadowMapper","updateProjectionFromFrustumCorners",0x4fed2656,"away3d.lights.shadowmaps.DirectionalShadowMapper.updateProjectionFromFrustumCorners","away3d/lights/shadowmaps/DirectionalShadowMapper.hx",124,0x1c82b3a9)
namespace away3d{
namespace lights{
namespace shadowmaps{

void DirectionalShadowMapper_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_0401a75ecf403976_16_new)
HXLINE(  29)		this->_snap = ((Float)64);
HXLINE(  26)		this->_lightOffset = ((Float)10000);
HXLINE(  37)		super::__construct();
HXLINE(  38)		int length = null();
HXDLIN(  38)		bool fixed = null();
HXDLIN(  38)		::Array< ::Dynamic> array = null();
HXDLIN(  38)		this->_cullPlanes =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE(  39)		this->_overallDepthLens =  ::away3d::cameras::lenses::FreeMatrixLens_obj::__alloc( HX_CTX );
HXLINE(  40)		this->_overallDepthCamera =  ::away3d::cameras::Camera3D_obj::__alloc( HX_CTX ,this->_overallDepthLens);
HXLINE(  41)		bool fixed1 = null();
HXDLIN(  41)		::Array< Float > array1 = null();
HXDLIN(  41)		this->_localFrustum =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,24,fixed1,array1,true);
HXLINE(  42)		this->_matrix =  ::openfl::geom::Matrix3D_obj::__alloc( HX_CTX ,null());
            	}

Dynamic DirectionalShadowMapper_obj::__CreateEmpty() { return new DirectionalShadowMapper_obj; }

void *DirectionalShadowMapper_obj::_hx_vtable = 0;

Dynamic DirectionalShadowMapper_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DirectionalShadowMapper_obj > _hx_result = new DirectionalShadowMapper_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DirectionalShadowMapper_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2aaf44b0) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2aaf44b0;
	} else {
		return inClassId==(int)0x7bcfe5e1;
	}
}

Float DirectionalShadowMapper_obj::get_snap(){
            	HX_STACKFRAME(&_hx_pos_0401a75ecf403976_47_get_snap)
HXDLIN(  47)		return this->_snap;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DirectionalShadowMapper_obj,get_snap,return )

Float DirectionalShadowMapper_obj::set_snap(Float value){
            	HX_STACKFRAME(&_hx_pos_0401a75ecf403976_51_set_snap)
HXLINE(  52)		this->_snap = value;
HXLINE(  53)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DirectionalShadowMapper_obj,set_snap,return )

Float DirectionalShadowMapper_obj::get_lightOffset(){
            	HX_STACKFRAME(&_hx_pos_0401a75ecf403976_58_get_lightOffset)
HXDLIN(  58)		return this->_lightOffset;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DirectionalShadowMapper_obj,get_lightOffset,return )

Float DirectionalShadowMapper_obj::set_lightOffset(Float value){
            	HX_STACKFRAME(&_hx_pos_0401a75ecf403976_62_set_lightOffset)
HXLINE(  63)		this->_lightOffset = value;
HXLINE(  64)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DirectionalShadowMapper_obj,set_lightOffset,return )

 ::openfl::geom::Matrix3D DirectionalShadowMapper_obj::get_depthProjection(){
            	HX_STACKFRAME(&_hx_pos_0401a75ecf403976_72_get_depthProjection)
HXDLIN(  72)		return this->_overallDepthCamera->get_viewProjection();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DirectionalShadowMapper_obj,get_depthProjection,return )

Float DirectionalShadowMapper_obj::get_depth(){
            	HX_STACKFRAME(&_hx_pos_0401a75ecf403976_80_get_depth)
HXDLIN(  80)		return (this->_maxZ - this->_minZ);
            	}


HX_DEFINE_DYNAMIC_FUNC0(DirectionalShadowMapper_obj,get_depth,return )

void DirectionalShadowMapper_obj::drawDepthMap( ::openfl::display3D::textures::TextureBase target, ::away3d::containers::Scene3D scene, ::away3d::core::render::DepthRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_0401a75ecf403976_84_drawDepthMap)
HXLINE(  85)		this->_casterCollector->set_camera(this->_overallDepthCamera);
HXLINE(  86)		this->_casterCollector->set_cullPlanes(this->_cullPlanes);
HXLINE(  87)		this->_casterCollector->clear();
HXLINE(  88)		scene->traversePartitions(this->_casterCollector);
HXLINE(  89)		renderer->render(this->_casterCollector,target,null(),null());
HXLINE(  90)		this->_casterCollector->cleanUp();
            	}


void DirectionalShadowMapper_obj::updateCullPlanes( ::away3d::cameras::Camera3D viewCamera){
            	HX_STACKFRAME(&_hx_pos_0401a75ecf403976_94_updateCullPlanes)
HXLINE(  95)		 ::openfl::_Vector::ObjectVector lightFrustumPlanes = this->_overallDepthCamera->get_frustumPlanes();
HXLINE(  96)		 ::openfl::_Vector::ObjectVector viewFrustumPlanes = viewCamera->get_frustumPlanes();
HXLINE(  97)		this->_cullPlanes->set_length(4);
HXLINE(  99)		{
HXLINE(  99)			::Dynamic this1 = this->_cullPlanes;
HXDLIN(  99)			( ( ::openfl::_Vector::ObjectVector)(this1) )->set(0,lightFrustumPlanes->get(0).StaticCast<  ::away3d::core::math::Plane3D >()).StaticCast<  ::away3d::core::math::Plane3D >();
            		}
HXLINE( 100)		{
HXLINE( 100)			::Dynamic this2 = this->_cullPlanes;
HXDLIN( 100)			( ( ::openfl::_Vector::ObjectVector)(this2) )->set(1,lightFrustumPlanes->get(1).StaticCast<  ::away3d::core::math::Plane3D >()).StaticCast<  ::away3d::core::math::Plane3D >();
            		}
HXLINE( 101)		{
HXLINE( 101)			::Dynamic this3 = this->_cullPlanes;
HXDLIN( 101)			( ( ::openfl::_Vector::ObjectVector)(this3) )->set(2,lightFrustumPlanes->get(2).StaticCast<  ::away3d::core::math::Plane3D >()).StaticCast<  ::away3d::core::math::Plane3D >();
            		}
HXLINE( 102)		{
HXLINE( 102)			::Dynamic this4 = this->_cullPlanes;
HXDLIN( 102)			( ( ::openfl::_Vector::ObjectVector)(this4) )->set(3,lightFrustumPlanes->get(3).StaticCast<  ::away3d::core::math::Plane3D >()).StaticCast<  ::away3d::core::math::Plane3D >();
            		}
HXLINE( 104)		 ::openfl::geom::Vector3D dir = ::hx::TCast<  ::away3d::lights::DirectionalLight >::cast(this->_light)->get_sceneDirection();
HXLINE( 105)		Float dirX = dir->x;
HXLINE( 106)		Float dirY = dir->y;
HXLINE( 107)		Float dirZ = dir->z;
HXLINE( 108)		int j = 4;
HXLINE( 109)		{
HXLINE( 109)			{
HXLINE( 110)				 ::away3d::core::math::Plane3D plane = viewFrustumPlanes->get(0).StaticCast<  ::away3d::core::math::Plane3D >();
HXLINE( 111)				if (((((plane->a * dirX) + (plane->b * dirY)) + (plane->c * dirZ)) < 0)) {
HXLINE( 112)					j = (j + 1);
HXDLIN( 112)					this->_cullPlanes->set((j - 1),plane).StaticCast<  ::away3d::core::math::Plane3D >();
            				}
            			}
HXLINE( 109)			{
HXLINE( 110)				 ::away3d::core::math::Plane3D plane1 = viewFrustumPlanes->get(1).StaticCast<  ::away3d::core::math::Plane3D >();
HXLINE( 111)				if (((((plane1->a * dirX) + (plane1->b * dirY)) + (plane1->c * dirZ)) < 0)) {
HXLINE( 112)					j = (j + 1);
HXDLIN( 112)					this->_cullPlanes->set((j - 1),plane1).StaticCast<  ::away3d::core::math::Plane3D >();
            				}
            			}
HXLINE( 109)			{
HXLINE( 110)				 ::away3d::core::math::Plane3D plane2 = viewFrustumPlanes->get(2).StaticCast<  ::away3d::core::math::Plane3D >();
HXLINE( 111)				if (((((plane2->a * dirX) + (plane2->b * dirY)) + (plane2->c * dirZ)) < 0)) {
HXLINE( 112)					j = (j + 1);
HXDLIN( 112)					this->_cullPlanes->set((j - 1),plane2).StaticCast<  ::away3d::core::math::Plane3D >();
            				}
            			}
HXLINE( 109)			{
HXLINE( 110)				 ::away3d::core::math::Plane3D plane3 = viewFrustumPlanes->get(3).StaticCast<  ::away3d::core::math::Plane3D >();
HXLINE( 111)				if (((((plane3->a * dirX) + (plane3->b * dirY)) + (plane3->c * dirZ)) < 0)) {
HXLINE( 112)					j = (j + 1);
HXDLIN( 112)					this->_cullPlanes->set((j - 1),plane3).StaticCast<  ::away3d::core::math::Plane3D >();
            				}
            			}
HXLINE( 109)			{
HXLINE( 110)				 ::away3d::core::math::Plane3D plane4 = viewFrustumPlanes->get(4).StaticCast<  ::away3d::core::math::Plane3D >();
HXLINE( 111)				if (((((plane4->a * dirX) + (plane4->b * dirY)) + (plane4->c * dirZ)) < 0)) {
HXLINE( 112)					j = (j + 1);
HXDLIN( 112)					this->_cullPlanes->set((j - 1),plane4).StaticCast<  ::away3d::core::math::Plane3D >();
            				}
            			}
HXLINE( 109)			{
HXLINE( 110)				 ::away3d::core::math::Plane3D plane5 = viewFrustumPlanes->get(5).StaticCast<  ::away3d::core::math::Plane3D >();
HXLINE( 111)				if (((((plane5->a * dirX) + (plane5->b * dirY)) + (plane5->c * dirZ)) < 0)) {
HXLINE( 112)					j = (j + 1);
HXDLIN( 112)					this->_cullPlanes->set((j - 1),plane5).StaticCast<  ::away3d::core::math::Plane3D >();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(DirectionalShadowMapper_obj,updateCullPlanes,(void))

void DirectionalShadowMapper_obj::updateDepthProjection( ::away3d::cameras::Camera3D viewCamera){
            	HX_STACKFRAME(&_hx_pos_0401a75ecf403976_117_updateDepthProjection)
HXLINE( 118)		 ::openfl::_Vector::FloatVector _hx_tmp = viewCamera->get_lens()->get_frustumCorners();
HXDLIN( 118)		this->updateProjectionFromFrustumCorners(viewCamera,_hx_tmp,this->_matrix);
HXLINE( 119)		this->_overallDepthLens->set_matrix(this->_matrix);
HXLINE( 120)		this->updateCullPlanes(viewCamera);
            	}


void DirectionalShadowMapper_obj::updateProjectionFromFrustumCorners( ::away3d::cameras::Camera3D viewCamera, ::openfl::_Vector::FloatVector corners, ::openfl::geom::Matrix3D matrix){
            	HX_STACKFRAME(&_hx_pos_0401a75ecf403976_124_updateProjectionFromFrustumCorners)
HXLINE( 125)		 ::openfl::_Vector::FloatVector raw = ::away3d::core::math::Matrix3DUtils_obj::RAW_DATA_CONTAINER;
HXLINE( 126)		 ::openfl::geom::Vector3D dir = ::hx::TCast<  ::away3d::lights::DirectionalLight >::cast(this->_light)->get_sceneDirection();
HXLINE( 133)		 ::away3d::cameras::Camera3D _hx_tmp = this->_overallDepthCamera;
HXDLIN( 133)		_hx_tmp->set_transform(this->_light->get_sceneTransform());
HXLINE( 134)		Float x = viewCamera->get_x();
HXDLIN( 134)		int x1 = ::Std_obj::_hx_int(((x - (dir->x * this->_lightOffset)) / this->_snap));
HXLINE( 127)		Float x2 = (( (Float)(x1) ) * this->_snap);
HXLINE( 135)		Float y = viewCamera->get_y();
HXDLIN( 135)		int y1 = ::Std_obj::_hx_int(((y - (dir->y * this->_lightOffset)) / this->_snap));
HXLINE( 127)		Float y2 = (( (Float)(y1) ) * this->_snap);
HXLINE( 136)		Float z = viewCamera->get_z();
HXDLIN( 136)		int z1 = ::Std_obj::_hx_int(((z - (dir->z * this->_lightOffset)) / this->_snap));
HXLINE( 127)		Float z2 = (( (Float)(z1) ) * this->_snap);
HXLINE( 137)		this->_overallDepthCamera->set_x(x2);
HXLINE( 138)		this->_overallDepthCamera->set_y(y2);
HXLINE( 139)		this->_overallDepthCamera->set_z(z2);
HXLINE( 141)		 ::openfl::geom::Matrix3D _hx_tmp1 = this->_matrix;
HXDLIN( 141)		_hx_tmp1->copyFrom(this->_overallDepthCamera->get_inverseSceneTransform());
HXLINE( 142)		 ::openfl::geom::Matrix3D _hx_tmp2 = this->_matrix;
HXDLIN( 142)		_hx_tmp2->prepend(viewCamera->get_sceneTransform());
HXLINE( 143)		this->_matrix->transformVectors(corners,this->_localFrustum);
HXLINE( 129)		Float maxX = this->_localFrustum->get(0);
HXLINE( 128)		Float minX = maxX;
HXLINE( 129)		Float maxY = this->_localFrustum->get(1);
HXLINE( 128)		Float minY = maxY;
HXLINE( 147)		this->_maxZ = this->_localFrustum->get(2);
HXLINE( 130)		int i = 3;
HXLINE( 150)		while((i < 24)){
HXLINE( 151)			x2 = this->_localFrustum->get(i);
HXLINE( 152)			y2 = this->_localFrustum->get((i + 1));
HXLINE( 153)			z2 = this->_localFrustum->get((i + 2));
HXLINE( 154)			if ((x2 < minX)) {
HXLINE( 155)				minX = x2;
            			}
HXLINE( 156)			if ((x2 > maxX)) {
HXLINE( 157)				maxX = x2;
            			}
HXLINE( 158)			if ((y2 < minY)) {
HXLINE( 159)				minY = y2;
            			}
HXLINE( 160)			if ((y2 > maxY)) {
HXLINE( 161)				maxY = y2;
            			}
HXLINE( 162)			if ((z2 > this->_maxZ)) {
HXLINE( 163)				this->_maxZ = z2;
            			}
HXLINE( 164)			i = (i + 3);
            		}
HXLINE( 166)		this->_minZ = ( (Float)(1) );
HXLINE( 168)		Float w = (maxX - minX);
HXLINE( 169)		Float h = (maxY - minY);
HXLINE( 170)		Float d = (( (Float)(1) ) / (this->_maxZ - this->_minZ));
HXLINE( 172)		if ((minX < 0)) {
HXLINE( 173)			minX = (minX - this->_snap);
            		}
HXLINE( 174)		if ((minY < 0)) {
HXLINE( 175)			minY = (minY - this->_snap);
            		}
HXLINE( 176)		int minX1 = ::Std_obj::_hx_int((minX / this->_snap));
HXDLIN( 176)		minX = (( (Float)(minX1) ) * this->_snap);
HXLINE( 177)		int minY1 = ::Std_obj::_hx_int((minY / this->_snap));
HXDLIN( 177)		minY = (( (Float)(minY1) ) * this->_snap);
HXLINE( 179)		Float snap2 = (( (Float)(2) ) * this->_snap);
HXLINE( 180)		w = (( (Float)(::Std_obj::_hx_int(((w / snap2) + 2))) ) * snap2);
HXLINE( 181)		h = (( (Float)(::Std_obj::_hx_int(((h / snap2) + 2))) ) * snap2);
HXLINE( 183)		maxX = (minX + w);
HXLINE( 184)		maxY = (minY + h);
HXLINE( 186)		w = (( (Float)(1) ) / w);
HXLINE( 187)		h = (( (Float)(1) ) / h);
HXLINE( 189)		raw->set(0,(( (Float)(2) ) * w));
HXLINE( 190)		raw->set(5,(( (Float)(2) ) * h));
HXLINE( 191)		raw->set(10,d);
HXLINE( 192)		raw->set(12,(-((maxX + minX)) * w));
HXLINE( 193)		raw->set(13,(-((maxY + minY)) * h));
HXLINE( 194)		raw->set(14,(-(this->_minZ) * d));
HXLINE( 195)		raw->set(15,( (Float)(1) ));
HXLINE( 196)		raw->set(1,raw->set(2,raw->set(3,raw->set(4,raw->set(6,raw->set(7,raw->set(8,raw->set(9,raw->set(11,( (Float)(0) ))))))))));
HXLINE( 198)		matrix->copyRawDataFrom(raw,null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC3(DirectionalShadowMapper_obj,updateProjectionFromFrustumCorners,(void))


::hx::ObjectPtr< DirectionalShadowMapper_obj > DirectionalShadowMapper_obj::__new() {
	::hx::ObjectPtr< DirectionalShadowMapper_obj > __this = new DirectionalShadowMapper_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DirectionalShadowMapper_obj > DirectionalShadowMapper_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DirectionalShadowMapper_obj *__this = (DirectionalShadowMapper_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DirectionalShadowMapper_obj), true, "away3d.lights.shadowmaps.DirectionalShadowMapper"));
	*(void **)__this = DirectionalShadowMapper_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DirectionalShadowMapper_obj::DirectionalShadowMapper_obj()
{
}

void DirectionalShadowMapper_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DirectionalShadowMapper);
	HX_MARK_MEMBER_NAME(_overallDepthCamera,"_overallDepthCamera");
	HX_MARK_MEMBER_NAME(_localFrustum,"_localFrustum");
	HX_MARK_MEMBER_NAME(_lightOffset,"_lightOffset");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(_overallDepthLens,"_overallDepthLens");
	HX_MARK_MEMBER_NAME(_snap,"_snap");
	HX_MARK_MEMBER_NAME(_cullPlanes,"_cullPlanes");
	HX_MARK_MEMBER_NAME(_minZ,"_minZ");
	HX_MARK_MEMBER_NAME(_maxZ,"_maxZ");
	 ::away3d::lights::shadowmaps::ShadowMapperBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DirectionalShadowMapper_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_overallDepthCamera,"_overallDepthCamera");
	HX_VISIT_MEMBER_NAME(_localFrustum,"_localFrustum");
	HX_VISIT_MEMBER_NAME(_lightOffset,"_lightOffset");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(_overallDepthLens,"_overallDepthLens");
	HX_VISIT_MEMBER_NAME(_snap,"_snap");
	HX_VISIT_MEMBER_NAME(_cullPlanes,"_cullPlanes");
	HX_VISIT_MEMBER_NAME(_minZ,"_minZ");
	HX_VISIT_MEMBER_NAME(_maxZ,"_maxZ");
	 ::away3d::lights::shadowmaps::ShadowMapperBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DirectionalShadowMapper_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"snap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_snap() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_depth() ); }
		if (HX_FIELD_EQ(inName,"_snap") ) { return ::hx::Val( _snap ); }
		if (HX_FIELD_EQ(inName,"_minZ") ) { return ::hx::Val( _minZ ); }
		if (HX_FIELD_EQ(inName,"_maxZ") ) { return ::hx::Val( _maxZ ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matrix") ) { return ::hx::Val( _matrix ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_snap") ) { return ::hx::Val( get_snap_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_snap") ) { return ::hx::Val( set_snap_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_depth") ) { return ::hx::Val( get_depth_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lightOffset") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_lightOffset() ); }
		if (HX_FIELD_EQ(inName,"_cullPlanes") ) { return ::hx::Val( _cullPlanes ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_lightOffset") ) { return ::hx::Val( _lightOffset ); }
		if (HX_FIELD_EQ(inName,"drawDepthMap") ) { return ::hx::Val( drawDepthMap_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_localFrustum") ) { return ::hx::Val( _localFrustum ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"depthProjection") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_depthProjection() ); }
		if (HX_FIELD_EQ(inName,"get_lightOffset") ) { return ::hx::Val( get_lightOffset_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_lightOffset") ) { return ::hx::Val( set_lightOffset_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateCullPlanes") ) { return ::hx::Val( updateCullPlanes_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_overallDepthLens") ) { return ::hx::Val( _overallDepthLens ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_overallDepthCamera") ) { return ::hx::Val( _overallDepthCamera ); }
		if (HX_FIELD_EQ(inName,"get_depthProjection") ) { return ::hx::Val( get_depthProjection_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"updateDepthProjection") ) { return ::hx::Val( updateDepthProjection_dyn() ); }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"updateProjectionFromFrustumCorners") ) { return ::hx::Val( updateProjectionFromFrustumCorners_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DirectionalShadowMapper_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"snap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_snap(inValue.Cast< Float >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_snap") ) { _snap=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_minZ") ) { _minZ=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_maxZ") ) { _maxZ=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast<  ::openfl::geom::Matrix3D >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lightOffset") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_lightOffset(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"_cullPlanes") ) { _cullPlanes=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_lightOffset") ) { _lightOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_localFrustum") ) { _localFrustum=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_overallDepthLens") ) { _overallDepthLens=inValue.Cast<  ::away3d::cameras::lenses::FreeMatrixLens >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_overallDepthCamera") ) { _overallDepthCamera=inValue.Cast<  ::away3d::cameras::Camera3D >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DirectionalShadowMapper_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("snap",4a,56,57,4c));
	outFields->push(HX_("lightOffset",09,e1,8d,c4));
	outFields->push(HX_("depthProjection",72,ff,38,65));
	outFields->push(HX_("depth",03,f1,29,d7));
	outFields->push(HX_("_overallDepthCamera",da,70,0b,2f));
	outFields->push(HX_("_localFrustum",16,0c,fa,88));
	outFields->push(HX_("_lightOffset",0a,8f,97,2a));
	outFields->push(HX_("_matrix",e0,47,3f,2a));
	outFields->push(HX_("_overallDepthLens",f3,d1,40,27));
	outFields->push(HX_("_snap",29,72,68,ff));
	outFields->push(HX_("_cullPlanes",08,6b,46,b0));
	outFields->push(HX_("_minZ",67,6a,6d,fb));
	outFields->push(HX_("_maxZ",15,61,67,fb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DirectionalShadowMapper_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::away3d::cameras::Camera3D */ ,(int)offsetof(DirectionalShadowMapper_obj,_overallDepthCamera),HX_("_overallDepthCamera",da,70,0b,2f)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(DirectionalShadowMapper_obj,_localFrustum),HX_("_localFrustum",16,0c,fa,88)},
	{::hx::fsFloat,(int)offsetof(DirectionalShadowMapper_obj,_lightOffset),HX_("_lightOffset",0a,8f,97,2a)},
	{::hx::fsObject /*  ::openfl::geom::Matrix3D */ ,(int)offsetof(DirectionalShadowMapper_obj,_matrix),HX_("_matrix",e0,47,3f,2a)},
	{::hx::fsObject /*  ::away3d::cameras::lenses::FreeMatrixLens */ ,(int)offsetof(DirectionalShadowMapper_obj,_overallDepthLens),HX_("_overallDepthLens",f3,d1,40,27)},
	{::hx::fsFloat,(int)offsetof(DirectionalShadowMapper_obj,_snap),HX_("_snap",29,72,68,ff)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(DirectionalShadowMapper_obj,_cullPlanes),HX_("_cullPlanes",08,6b,46,b0)},
	{::hx::fsFloat,(int)offsetof(DirectionalShadowMapper_obj,_minZ),HX_("_minZ",67,6a,6d,fb)},
	{::hx::fsFloat,(int)offsetof(DirectionalShadowMapper_obj,_maxZ),HX_("_maxZ",15,61,67,fb)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DirectionalShadowMapper_obj_sStaticStorageInfo = 0;
#endif

static ::String DirectionalShadowMapper_obj_sMemberFields[] = {
	HX_("_overallDepthCamera",da,70,0b,2f),
	HX_("_localFrustum",16,0c,fa,88),
	HX_("_lightOffset",0a,8f,97,2a),
	HX_("_matrix",e0,47,3f,2a),
	HX_("_overallDepthLens",f3,d1,40,27),
	HX_("_snap",29,72,68,ff),
	HX_("_cullPlanes",08,6b,46,b0),
	HX_("_minZ",67,6a,6d,fb),
	HX_("_maxZ",15,61,67,fb),
	HX_("get_snap",d3,11,12,cc),
	HX_("set_snap",47,6b,6f,7a),
	HX_("get_lightOffset",a0,98,6f,85),
	HX_("set_lightOffset",ac,15,3b,81),
	HX_("get_depthProjection",89,ce,43,f0),
	HX_("get_depth",5a,4d,d3,1a),
	HX_("drawDepthMap",7d,a1,0c,6d),
	HX_("updateCullPlanes",52,6d,a8,27),
	HX_("updateDepthProjection",69,b3,97,22),
	HX_("updateProjectionFromFrustumCorners",de,04,2e,c4),
	::String(null()) };

::hx::Class DirectionalShadowMapper_obj::__mClass;

void DirectionalShadowMapper_obj::__register()
{
	DirectionalShadowMapper_obj _hx_dummy;
	DirectionalShadowMapper_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.lights.shadowmaps.DirectionalShadowMapper",f6,03,9b,76);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DirectionalShadowMapper_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DirectionalShadowMapper_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DirectionalShadowMapper_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DirectionalShadowMapper_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace lights
} // end namespace shadowmaps
