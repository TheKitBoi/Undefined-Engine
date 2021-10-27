#include <hxcpp.h>

#ifndef INCLUDED_away3d_animators_IAnimator
#include <away3d/animators/IAnimator.h>
#endif
#ifndef INCLUDED_away3d_animators_data_AnimationSubGeometry
#include <away3d/animators/data/AnimationSubGeometry.h>
#endif
#ifndef INCLUDED_away3d_bounds_BoundingVolumeBase
#include <away3d/bounds/BoundingVolumeBase.h>
#endif
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
#ifndef INCLUDED_away3d_core_base_ISubGeometry
#include <away3d/core/base/ISubGeometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_SubMesh
#include <away3d/core/base/SubMesh.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_entities_Mesh
#include <away3d/entities/Mesh.h>
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
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_5051657cb209e527_23_new,"away3d.core.base.SubMesh","new",0xeeda7302,"away3d.core.base.SubMesh.new","away3d/core/base/SubMesh.hx",23,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_106_get_shaderPickingDetails,"away3d.core.base.SubMesh","get_shaderPickingDetails",0x1af659cd,"away3d.core.base.SubMesh.get_shaderPickingDetails","away3d/core/base/SubMesh.hx",106,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_111_get_offsetU,"away3d.core.base.SubMesh","get_offsetU",0x831c7e1b,"away3d.core.base.SubMesh.get_offsetU","away3d/core/base/SubMesh.hx",111,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_115_set_offsetU,"away3d.core.base.SubMesh","set_offsetU",0x8d898527,"away3d.core.base.SubMesh.set_offsetU","away3d/core/base/SubMesh.hx",115,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_125_get_offsetV,"away3d.core.base.SubMesh","get_offsetV",0x831c7e1c,"away3d.core.base.SubMesh.get_offsetV","away3d/core/base/SubMesh.hx",125,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_129_set_offsetV,"away3d.core.base.SubMesh","set_offsetV",0x8d898528,"away3d.core.base.SubMesh.set_offsetV","away3d/core/base/SubMesh.hx",129,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_139_get_scaleU,"away3d.core.base.SubMesh","get_scaleU",0xd90b2ff2,"away3d.core.base.SubMesh.get_scaleU","away3d/core/base/SubMesh.hx",139,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_143_set_scaleU,"away3d.core.base.SubMesh","set_scaleU",0xdc88ce66,"away3d.core.base.SubMesh.set_scaleU","away3d/core/base/SubMesh.hx",143,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_153_get_scaleV,"away3d.core.base.SubMesh","get_scaleV",0xd90b2ff3,"away3d.core.base.SubMesh.get_scaleV","away3d/core/base/SubMesh.hx",153,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_157_set_scaleV,"away3d.core.base.SubMesh","set_scaleV",0xdc88ce67,"away3d.core.base.SubMesh.set_scaleV","away3d/core/base/SubMesh.hx",157,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_167_get_uvRotation,"away3d.core.base.SubMesh","get_uvRotation",0x6738ada6,"away3d.core.base.SubMesh.get_uvRotation","away3d/core/base/SubMesh.hx",167,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_171_set_uvRotation,"away3d.core.base.SubMesh","set_uvRotation",0x8758961a,"away3d.core.base.SubMesh.set_uvRotation","away3d/core/base/SubMesh.hx",171,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_181_get_offsetU2,"away3d.core.base.SubMesh","get_offsetU2",0x35d1d9b7,"away3d.core.base.SubMesh.get_offsetU2","away3d/core/base/SubMesh.hx",181,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_185_set_offsetU2,"away3d.core.base.SubMesh","set_offsetU2",0x4acafd2b,"away3d.core.base.SubMesh.set_offsetU2","away3d/core/base/SubMesh.hx",185,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_195_get_offsetV2,"away3d.core.base.SubMesh","get_offsetV2",0x35d1da96,"away3d.core.base.SubMesh.get_offsetV2","away3d/core/base/SubMesh.hx",195,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_199_set_offsetV2,"away3d.core.base.SubMesh","set_offsetV2",0x4acafe0a,"away3d.core.base.SubMesh.set_offsetV2","away3d/core/base/SubMesh.hx",199,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_209_get_scaleU2,"away3d.core.base.SubMesh","get_scaleU2",0x10bec400,"away3d.core.base.SubMesh.get_scaleU2","away3d/core/base/SubMesh.hx",209,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_213_set_scaleU2,"away3d.core.base.SubMesh","set_scaleU2",0x1b2bcb0c,"away3d.core.base.SubMesh.set_scaleU2","away3d/core/base/SubMesh.hx",213,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_223_get_scaleV2,"away3d.core.base.SubMesh","get_scaleV2",0x10bec4df,"away3d.core.base.SubMesh.get_scaleV2","away3d/core/base/SubMesh.hx",223,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_227_set_scaleV2,"away3d.core.base.SubMesh","set_scaleV2",0x1b2bcbeb,"away3d.core.base.SubMesh.set_scaleV2","away3d/core/base/SubMesh.hx",227,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_237_get_uvRotation2,"away3d.core.base.SubMesh","get_uvRotation2",0xea5f43cc,"away3d.core.base.SubMesh.get_uvRotation2","away3d/core/base/SubMesh.hx",237,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_241_set_uvRotation2,"away3d.core.base.SubMesh","set_uvRotation2",0xe62ac0d8,"away3d.core.base.SubMesh.set_uvRotation2","away3d/core/base/SubMesh.hx",241,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_254_get_sourceEntity,"away3d.core.base.SubMesh","get_sourceEntity",0xd5ec9b05,"away3d.core.base.SubMesh.get_sourceEntity","away3d/core/base/SubMesh.hx",254,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_262_get_subGeometry,"away3d.core.base.SubMesh","get_subGeometry",0x865aad8b,"away3d.core.base.SubMesh.get_subGeometry","away3d/core/base/SubMesh.hx",262,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_266_set_subGeometry,"away3d.core.base.SubMesh","set_subGeometry",0x82262a97,"away3d.core.base.SubMesh.set_subGeometry","away3d/core/base/SubMesh.hx",266,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_275_get_material,"away3d.core.base.SubMesh","get_material",0x857409ce,"away3d.core.base.SubMesh.get_material","away3d/core/base/SubMesh.hx",275,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_282_set_material,"away3d.core.base.SubMesh","set_material",0x9a6d2d42,"away3d.core.base.SubMesh.set_material","away3d/core/base/SubMesh.hx",282,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_298_get_sceneTransform,"away3d.core.base.SubMesh","get_sceneTransform",0xfc802ee7,"away3d.core.base.SubMesh.get_sceneTransform","away3d/core/base/SubMesh.hx",298,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_306_get_inverseSceneTransform,"away3d.core.base.SubMesh","get_inverseSceneTransform",0x7f2f84c9,"away3d.core.base.SubMesh.get_inverseSceneTransform","away3d/core/base/SubMesh.hx",306,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_314_activateVertexBuffer,"away3d.core.base.SubMesh","activateVertexBuffer",0x3e5c9ef5,"away3d.core.base.SubMesh.activateVertexBuffer","away3d/core/base/SubMesh.hx",314,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_322_activateVertexNormalBuffer,"away3d.core.base.SubMesh","activateVertexNormalBuffer",0x756a823c,"away3d.core.base.SubMesh.activateVertexNormalBuffer","away3d/core/base/SubMesh.hx",322,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_330_activateVertexTangentBuffer,"away3d.core.base.SubMesh","activateVertexTangentBuffer",0xe8c5a650,"away3d.core.base.SubMesh.activateVertexTangentBuffer","away3d/core/base/SubMesh.hx",330,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_338_activateUVBuffer,"away3d.core.base.SubMesh","activateUVBuffer",0x37d56112,"away3d.core.base.SubMesh.activateUVBuffer","away3d/core/base/SubMesh.hx",338,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_346_activateSecondaryUVBuffer,"away3d.core.base.SubMesh","activateSecondaryUVBuffer",0x02c254a4,"away3d.core.base.SubMesh.activateSecondaryUVBuffer","away3d/core/base/SubMesh.hx",346,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_354_getIndexBuffer,"away3d.core.base.SubMesh","getIndexBuffer",0x6f00b55a,"away3d.core.base.SubMesh.getIndexBuffer","away3d/core/base/SubMesh.hx",354,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_362_get_numTriangles,"away3d.core.base.SubMesh","get_numTriangles",0x017b062c,"away3d.core.base.SubMesh.get_numTriangles","away3d/core/base/SubMesh.hx",362,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_370_get_animator,"away3d.core.base.SubMesh","get_animator",0x1dc1288e,"away3d.core.base.SubMesh.get_animator","away3d/core/base/SubMesh.hx",370,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_378_get_mouseEnabled,"away3d.core.base.SubMesh","get_mouseEnabled",0x3aa02183,"away3d.core.base.SubMesh.get_mouseEnabled","away3d/core/base/SubMesh.hx",378,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_383_get_castsShadows,"away3d.core.base.SubMesh","get_castsShadows",0xf177cac6,"away3d.core.base.SubMesh.get_castsShadows","away3d/core/base/SubMesh.hx",383,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_393_get_parentMesh,"away3d.core.base.SubMesh","get_parentMesh",0x4f1cdd1e,"away3d.core.base.SubMesh.get_parentMesh","away3d/core/base/SubMesh.hx",393,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_397_set_parentMesh,"away3d.core.base.SubMesh","set_parentMesh",0x6f3cc592,"away3d.core.base.SubMesh.set_parentMesh","away3d/core/base/SubMesh.hx",397,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_403_get_uvTransform,"away3d.core.base.SubMesh","get_uvTransform",0xc3031804,"away3d.core.base.SubMesh.get_uvTransform","away3d/core/base/SubMesh.hx",403,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_410_get_uvTransform2,"away3d.core.base.SubMesh","get_uvTransform2",0xdfb1ebae,"away3d.core.base.SubMesh.get_uvTransform2","away3d/core/base/SubMesh.hx",410,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_417_updateUVTransform,"away3d.core.base.SubMesh","updateUVTransform",0x59d43d84,"away3d.core.base.SubMesh.updateUVTransform","away3d/core/base/SubMesh.hx",417,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_430_updateUVTransform2,"away3d.core.base.SubMesh","updateUVTransform2",0x3fe1962e,"away3d.core.base.SubMesh.updateUVTransform2","away3d/core/base/SubMesh.hx",430,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_444_dispose,"away3d.core.base.SubMesh","dispose",0x95b61c41,"away3d.core.base.SubMesh.dispose","away3d/core/base/SubMesh.hx",444,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_449_get_vertexData,"away3d.core.base.SubMesh","get_vertexData",0x3ad16495,"away3d.core.base.SubMesh.get_vertexData","away3d/core/base/SubMesh.hx",449,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_454_get_indexData,"away3d.core.base.SubMesh","get_indexData",0x9e79e355,"away3d.core.base.SubMesh.get_indexData","away3d/core/base/SubMesh.hx",454,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_459_get_UVData,"away3d.core.base.SubMesh","get_UVData",0x4aed5692,"away3d.core.base.SubMesh.get_UVData","away3d/core/base/SubMesh.hx",459,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_464_get_bounds,"away3d.core.base.SubMesh","get_bounds",0x0302cbdc,"away3d.core.base.SubMesh.get_bounds","away3d/core/base/SubMesh.hx",464,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_469_get_visible,"away3d.core.base.SubMesh","get_visible",0x4edbed2b,"away3d.core.base.SubMesh.get_visible","away3d/core/base/SubMesh.hx",469,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_474_get_numVertices,"away3d.core.base.SubMesh","get_numVertices",0xa9ced598,"away3d.core.base.SubMesh.get_numVertices","away3d/core/base/SubMesh.hx",474,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_479_get_vertexStride,"away3d.core.base.SubMesh","get_vertexStride",0x8c0edf44,"away3d.core.base.SubMesh.get_vertexStride","away3d/core/base/SubMesh.hx",479,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_484_get_UVStride,"away3d.core.base.SubMesh","get_UVStride",0xd0890a81,"away3d.core.base.SubMesh.get_UVStride","away3d/core/base/SubMesh.hx",484,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_489_get_vertexNormalData,"away3d.core.base.SubMesh","get_vertexNormalData",0xf5ccc49c,"away3d.core.base.SubMesh.get_vertexNormalData","away3d/core/base/SubMesh.hx",489,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_494_get_vertexTangentData,"away3d.core.base.SubMesh","get_vertexTangentData",0xfe9dca84,"away3d.core.base.SubMesh.get_vertexTangentData","away3d/core/base/SubMesh.hx",494,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_499_get_UVOffset,"away3d.core.base.SubMesh","get_UVOffset",0x1f9881fb,"away3d.core.base.SubMesh.get_UVOffset","away3d/core/base/SubMesh.hx",499,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_504_get_vertexOffset,"away3d.core.base.SubMesh","get_vertexOffset",0xdb1e56be,"away3d.core.base.SubMesh.get_vertexOffset","away3d/core/base/SubMesh.hx",504,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_509_get_vertexNormalOffset,"away3d.core.base.SubMesh","get_vertexNormalOffset",0xd3b70685,"away3d.core.base.SubMesh.get_vertexNormalOffset","away3d/core/base/SubMesh.hx",509,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_514_get_vertexTangentOffset,"away3d.core.base.SubMesh","get_vertexTangentOffset",0x7743566d,"away3d.core.base.SubMesh.get_vertexTangentOffset","away3d/core/base/SubMesh.hx",514,0xdb3a5d8f)
HX_LOCAL_STACK_FRAME(_hx_pos_5051657cb209e527_519_getRenderSceneTransform,"away3d.core.base.SubMesh","getRenderSceneTransform",0x76fb0fce,"away3d.core.base.SubMesh.getRenderSceneTransform","away3d/core/base/SubMesh.hx",519,0xdb3a5d8f)
namespace away3d{
namespace core{
namespace base{

void SubMesh_obj::__construct(::Dynamic subGeometry, ::away3d::entities::Mesh parentMesh, ::away3d::materials::MaterialBase material){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_23_new)
HXLINE(  85)		this->_offsetV2 = ((Float)0);
HXLINE(  84)		this->_offsetU2 = ((Float)0);
HXLINE(  83)		this->_scaleV2 = ((Float)1);
HXLINE(  82)		this->_scaleU2 = ((Float)1);
HXLINE(  81)		this->_uvRotation2 = ((Float)0);
HXLINE(  77)		this->_offsetV = ((Float)0);
HXLINE(  76)		this->_offsetU = ((Float)0);
HXLINE(  75)		this->_scaleV = ((Float)1);
HXLINE(  74)		this->_scaleU = ((Float)1);
HXLINE(  73)		this->_uvRotation = ((Float)0);
HXLINE(  99)		this->_parentMesh = parentMesh;
HXLINE( 100)		this->_subGeometry = subGeometry;
HXLINE( 101)		this->set_material(material);
            	}

Dynamic SubMesh_obj::__CreateEmpty() { return new SubMesh_obj; }

void *SubMesh_obj::_hx_vtable = 0;

Dynamic SubMesh_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SubMesh_obj > _hx_result = new SubMesh_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool SubMesh_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1a1b2eba;
}

static ::away3d::core::base::IMaterialOwner_obj _hx_away3d_core_base_SubMesh__hx_away3d_core_base_IMaterialOwner= {
	(  ::away3d::materials::MaterialBase (::hx::Object::*)())&::away3d::core::base::SubMesh_obj::get_material,
	(  ::away3d::materials::MaterialBase (::hx::Object::*)( ::away3d::materials::MaterialBase))&::away3d::core::base::SubMesh_obj::set_material,
	( ::Dynamic (::hx::Object::*)())&::away3d::core::base::SubMesh_obj::get_animator,
};

static ::away3d::core::base::IRenderable_obj _hx_away3d_core_base_SubMesh__hx_away3d_core_base_IRenderable= {
	(  ::away3d::materials::MaterialBase (::hx::Object::*)())&::away3d::core::base::SubMesh_obj::get_material,
	(  ::away3d::materials::MaterialBase (::hx::Object::*)( ::away3d::materials::MaterialBase))&::away3d::core::base::SubMesh_obj::set_material,
	( ::Dynamic (::hx::Object::*)())&::away3d::core::base::SubMesh_obj::get_animator,
	(  ::openfl::geom::Matrix3D (::hx::Object::*)())&::away3d::core::base::SubMesh_obj::get_sceneTransform,
	(  ::openfl::geom::Matrix3D (::hx::Object::*)())&::away3d::core::base::SubMesh_obj::get_inverseSceneTransform,
	( bool (::hx::Object::*)())&::away3d::core::base::SubMesh_obj::get_mouseEnabled,
	(  ::away3d::entities::Entity (::hx::Object::*)())&::away3d::core::base::SubMesh_obj::get_sourceEntity,
	( bool (::hx::Object::*)())&::away3d::core::base::SubMesh_obj::get_castsShadows,
	(  ::openfl::geom::Matrix (::hx::Object::*)())&::away3d::core::base::SubMesh_obj::get_uvTransform,
	(  ::openfl::geom::Matrix (::hx::Object::*)())&::away3d::core::base::SubMesh_obj::get_uvTransform2,
	( bool (::hx::Object::*)())&::away3d::core::base::SubMesh_obj::get_shaderPickingDetails,
	( int (::hx::Object::*)())&::away3d::core::base::SubMesh_obj::get_numVertices,
	( int (::hx::Object::*)())&::away3d::core::base::SubMesh_obj::get_numTriangles,
	( int (::hx::Object::*)())&::away3d::core::base::SubMesh_obj::get_vertexStride,
	(  ::openfl::_Vector::FloatVector (::hx::Object::*)())&::away3d::core::base::SubMesh_obj::get_vertexData,
	(  ::openfl::_Vector::FloatVector (::hx::Object::*)())&::away3d::core::base::SubMesh_obj::get_vertexNormalData,
	(  ::openfl::_Vector::FloatVector (::hx::Object::*)())&::away3d::core::base::SubMesh_obj::get_vertexTangentData,
	(  ::openfl::_Vector::IntVector (::hx::Object::*)())&::away3d::core::base::SubMesh_obj::get_indexData,
	(  ::openfl::_Vector::FloatVector (::hx::Object::*)())&::away3d::core::base::SubMesh_obj::get_UVData,
	(  ::openfl::geom::Matrix3D (::hx::Object::*)( ::away3d::cameras::Camera3D))&::away3d::core::base::SubMesh_obj::getRenderSceneTransform,
	( void (::hx::Object::*)(int, ::away3d::core::managers::Stage3DProxy))&::away3d::core::base::SubMesh_obj::activateVertexBuffer,
	( void (::hx::Object::*)(int, ::away3d::core::managers::Stage3DProxy))&::away3d::core::base::SubMesh_obj::activateUVBuffer,
	( void (::hx::Object::*)(int, ::away3d::core::managers::Stage3DProxy))&::away3d::core::base::SubMesh_obj::activateSecondaryUVBuffer,
	( void (::hx::Object::*)(int, ::away3d::core::managers::Stage3DProxy))&::away3d::core::base::SubMesh_obj::activateVertexNormalBuffer,
	( void (::hx::Object::*)(int, ::away3d::core::managers::Stage3DProxy))&::away3d::core::base::SubMesh_obj::activateVertexTangentBuffer,
	(  ::openfl::display3D::IndexBuffer3D (::hx::Object::*)( ::away3d::core::managers::Stage3DProxy))&::away3d::core::base::SubMesh_obj::getIndexBuffer,
};

void *SubMesh_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xcf5e1b32: return &_hx_away3d_core_base_SubMesh__hx_away3d_core_base_IMaterialOwner;
		case (int)0x1ea67b0a: return &_hx_away3d_core_base_SubMesh__hx_away3d_core_base_IRenderable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

bool SubMesh_obj::get_shaderPickingDetails(){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_106_get_shaderPickingDetails)
HXDLIN( 106)		return this->get_sourceEntity()->get_shaderPickingDetails();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_shaderPickingDetails,return )

Float SubMesh_obj::get_offsetU(){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_111_get_offsetU)
HXDLIN( 111)		return this->_offsetU;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_offsetU,return )

Float SubMesh_obj::set_offsetU(Float value){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_115_set_offsetU)
HXLINE( 116)		if ((value == this->_offsetU)) {
HXLINE( 117)			return value;
            		}
HXLINE( 118)		this->_offsetU = value;
HXLINE( 119)		this->_uvTransformDirty = true;
HXLINE( 120)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SubMesh_obj,set_offsetU,return )

Float SubMesh_obj::get_offsetV(){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_125_get_offsetV)
HXDLIN( 125)		return this->_offsetV;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_offsetV,return )

Float SubMesh_obj::set_offsetV(Float value){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_129_set_offsetV)
HXLINE( 130)		if ((value == this->_offsetV)) {
HXLINE( 131)			return value;
            		}
HXLINE( 132)		this->_offsetV = value;
HXLINE( 133)		this->_uvTransformDirty = true;
HXLINE( 134)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SubMesh_obj,set_offsetV,return )

Float SubMesh_obj::get_scaleU(){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_139_get_scaleU)
HXDLIN( 139)		return this->_scaleU;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_scaleU,return )

Float SubMesh_obj::set_scaleU(Float value){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_143_set_scaleU)
HXLINE( 144)		if ((value == this->_scaleU)) {
HXLINE( 145)			return value;
            		}
HXLINE( 146)		this->_scaleU = value;
HXLINE( 147)		this->_uvTransformDirty = true;
HXLINE( 148)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SubMesh_obj,set_scaleU,return )

Float SubMesh_obj::get_scaleV(){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_153_get_scaleV)
HXDLIN( 153)		return this->_scaleV;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_scaleV,return )

Float SubMesh_obj::set_scaleV(Float value){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_157_set_scaleV)
HXLINE( 158)		if ((value == this->_scaleV)) {
HXLINE( 159)			return value;
            		}
HXLINE( 160)		this->_scaleV = value;
HXLINE( 161)		this->_uvTransformDirty = true;
HXLINE( 162)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SubMesh_obj,set_scaleV,return )

Float SubMesh_obj::get_uvRotation(){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_167_get_uvRotation)
HXDLIN( 167)		return this->_uvRotation;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_uvRotation,return )

Float SubMesh_obj::set_uvRotation(Float value){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_171_set_uvRotation)
HXLINE( 172)		if ((value == this->_uvRotation)) {
HXLINE( 173)			return value;
            		}
HXLINE( 174)		this->_uvRotation = value;
HXLINE( 175)		this->_uvTransformDirty = true;
HXLINE( 176)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SubMesh_obj,set_uvRotation,return )

Float SubMesh_obj::get_offsetU2(){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_181_get_offsetU2)
HXDLIN( 181)		return this->_offsetU2;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_offsetU2,return )

Float SubMesh_obj::set_offsetU2(Float value){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_185_set_offsetU2)
HXLINE( 186)		if ((value == this->_offsetU2)) {
HXLINE( 187)			return value;
            		}
HXLINE( 188)		this->_offsetU2 = value;
HXLINE( 189)		this->_uvTransformDirty2 = true;
HXLINE( 190)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SubMesh_obj,set_offsetU2,return )

Float SubMesh_obj::get_offsetV2(){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_195_get_offsetV2)
HXDLIN( 195)		return this->_offsetV2;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_offsetV2,return )

Float SubMesh_obj::set_offsetV2(Float value){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_199_set_offsetV2)
HXLINE( 200)		if ((value == this->_offsetV2)) {
HXLINE( 201)			return value;
            		}
HXLINE( 202)		this->_offsetV2 = value;
HXLINE( 203)		this->_uvTransformDirty2 = true;
HXLINE( 204)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SubMesh_obj,set_offsetV2,return )

Float SubMesh_obj::get_scaleU2(){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_209_get_scaleU2)
HXDLIN( 209)		return this->_scaleU2;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_scaleU2,return )

Float SubMesh_obj::set_scaleU2(Float value){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_213_set_scaleU2)
HXLINE( 214)		if ((value == this->_scaleU2)) {
HXLINE( 215)			return value;
            		}
HXLINE( 216)		this->_scaleU2 = value;
HXLINE( 217)		this->_uvTransformDirty2 = true;
HXLINE( 218)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SubMesh_obj,set_scaleU2,return )

Float SubMesh_obj::get_scaleV2(){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_223_get_scaleV2)
HXDLIN( 223)		return this->_scaleV2;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_scaleV2,return )

Float SubMesh_obj::set_scaleV2(Float value){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_227_set_scaleV2)
HXLINE( 228)		if ((value == this->_scaleV2)) {
HXLINE( 229)			return value;
            		}
HXLINE( 230)		this->_scaleV2 = value;
HXLINE( 231)		this->_uvTransformDirty2 = true;
HXLINE( 232)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SubMesh_obj,set_scaleV2,return )

Float SubMesh_obj::get_uvRotation2(){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_237_get_uvRotation2)
HXDLIN( 237)		return this->_uvRotation2;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_uvRotation2,return )

Float SubMesh_obj::set_uvRotation2(Float value){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_241_set_uvRotation2)
HXLINE( 242)		if ((value == this->_uvRotation2)) {
HXLINE( 243)			return value;
            		}
HXLINE( 244)		this->_uvRotation2 = value;
HXLINE( 245)		this->_uvTransformDirty2 = true;
HXLINE( 246)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SubMesh_obj,set_uvRotation2,return )

 ::away3d::entities::Entity SubMesh_obj::get_sourceEntity(){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_254_get_sourceEntity)
HXDLIN( 254)		return this->_parentMesh;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_sourceEntity,return )

::Dynamic SubMesh_obj::get_subGeometry(){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_262_get_subGeometry)
HXDLIN( 262)		return this->_subGeometry;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_subGeometry,return )

::Dynamic SubMesh_obj::set_subGeometry(::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_266_set_subGeometry)
HXLINE( 267)		this->_subGeometry = value;
HXLINE( 268)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SubMesh_obj,set_subGeometry,return )

 ::away3d::materials::MaterialBase SubMesh_obj::get_material(){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_275_get_material)
HXLINE( 276)		if (::hx::IsNotNull( this->_material )) {
HXLINE( 277)			return this->_material;
            		}
HXLINE( 278)		return this->_parentMesh->get_material();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_material,return )

 ::away3d::materials::MaterialBase SubMesh_obj::set_material( ::away3d::materials::MaterialBase value){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_282_set_material)
HXLINE( 283)		if (::hx::IsNotNull( this->_material )) {
HXLINE( 284)			this->_material->removeOwner(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 286)		this->_material = value;
HXLINE( 288)		if (::hx::IsNotNull( this->_material )) {
HXLINE( 289)			this->_material->addOwner(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 290)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SubMesh_obj,set_material,return )

 ::openfl::geom::Matrix3D SubMesh_obj::get_sceneTransform(){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_298_get_sceneTransform)
HXDLIN( 298)		return this->_parentMesh->get_sceneTransform();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_sceneTransform,return )

 ::openfl::geom::Matrix3D SubMesh_obj::get_inverseSceneTransform(){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_306_get_inverseSceneTransform)
HXDLIN( 306)		return this->_parentMesh->get_inverseSceneTransform();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_inverseSceneTransform,return )

void SubMesh_obj::activateVertexBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_314_activateVertexBuffer)
HXDLIN( 314)		::away3d::core::base::ISubGeometry_obj::activateVertexBuffer(this->_subGeometry,index,stage3DProxy);
            	}


HX_DEFINE_DYNAMIC_FUNC2(SubMesh_obj,activateVertexBuffer,(void))

void SubMesh_obj::activateVertexNormalBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_322_activateVertexNormalBuffer)
HXDLIN( 322)		::away3d::core::base::ISubGeometry_obj::activateVertexNormalBuffer(this->_subGeometry,index,stage3DProxy);
            	}


HX_DEFINE_DYNAMIC_FUNC2(SubMesh_obj,activateVertexNormalBuffer,(void))

void SubMesh_obj::activateVertexTangentBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_330_activateVertexTangentBuffer)
HXDLIN( 330)		::away3d::core::base::ISubGeometry_obj::activateVertexTangentBuffer(this->_subGeometry,index,stage3DProxy);
            	}


HX_DEFINE_DYNAMIC_FUNC2(SubMesh_obj,activateVertexTangentBuffer,(void))

void SubMesh_obj::activateUVBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_338_activateUVBuffer)
HXDLIN( 338)		::away3d::core::base::ISubGeometry_obj::activateUVBuffer(this->_subGeometry,index,stage3DProxy);
            	}


HX_DEFINE_DYNAMIC_FUNC2(SubMesh_obj,activateUVBuffer,(void))

void SubMesh_obj::activateSecondaryUVBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_346_activateSecondaryUVBuffer)
HXDLIN( 346)		::away3d::core::base::ISubGeometry_obj::activateSecondaryUVBuffer(this->_subGeometry,index,stage3DProxy);
            	}


HX_DEFINE_DYNAMIC_FUNC2(SubMesh_obj,activateSecondaryUVBuffer,(void))

 ::openfl::display3D::IndexBuffer3D SubMesh_obj::getIndexBuffer( ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_354_getIndexBuffer)
HXDLIN( 354)		return ::away3d::core::base::ISubGeometry_obj::getIndexBuffer(this->_subGeometry,stage3DProxy);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SubMesh_obj,getIndexBuffer,return )

int SubMesh_obj::get_numTriangles(){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_362_get_numTriangles)
HXDLIN( 362)		return ::away3d::core::base::ISubGeometry_obj::get_numTriangles(this->_subGeometry);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_numTriangles,return )

::Dynamic SubMesh_obj::get_animator(){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_370_get_animator)
HXDLIN( 370)		return this->_parentMesh->get_animator();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_animator,return )

bool SubMesh_obj::get_mouseEnabled(){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_378_get_mouseEnabled)
HXDLIN( 378)		if (!(this->_parentMesh->get_mouseEnabled())) {
HXDLIN( 378)			return this->_parentMesh->_ancestorsAllowMouseEnabled;
            		}
            		else {
HXDLIN( 378)			return true;
            		}
HXDLIN( 378)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_mouseEnabled,return )

bool SubMesh_obj::get_castsShadows(){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_383_get_castsShadows)
HXDLIN( 383)		return this->_parentMesh->get_castsShadows();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_castsShadows,return )

 ::away3d::entities::Mesh SubMesh_obj::get_parentMesh(){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_393_get_parentMesh)
HXDLIN( 393)		return this->_parentMesh;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_parentMesh,return )

 ::away3d::entities::Mesh SubMesh_obj::set_parentMesh( ::away3d::entities::Mesh value){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_397_set_parentMesh)
HXLINE( 398)		this->_parentMesh = value;
HXLINE( 399)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SubMesh_obj,set_parentMesh,return )

 ::openfl::geom::Matrix SubMesh_obj::get_uvTransform(){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_403_get_uvTransform)
HXLINE( 404)		if (this->_uvTransformDirty) {
HXLINE( 405)			this->updateUVTransform();
            		}
HXLINE( 406)		return this->_uvTransform;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_uvTransform,return )

 ::openfl::geom::Matrix SubMesh_obj::get_uvTransform2(){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_410_get_uvTransform2)
HXLINE( 411)		if (this->_uvTransformDirty2) {
HXLINE( 412)			this->updateUVTransform2();
            		}
HXLINE( 413)		return this->_uvTransform2;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_uvTransform2,return )

void SubMesh_obj::updateUVTransform(){
            	HX_GC_STACKFRAME(&_hx_pos_5051657cb209e527_417_updateUVTransform)
HXLINE( 418)		if (::hx::IsNull( this->_uvTransform )) {
HXLINE( 419)			this->_uvTransform =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            		}
HXLINE( 420)		this->_uvTransform->identity();
HXLINE( 421)		if ((this->_uvRotation != 0)) {
HXLINE( 422)			this->_uvTransform->rotate(this->_uvRotation);
            		}
HXLINE( 423)		bool _hx_tmp;
HXDLIN( 423)		if ((this->_scaleU == 1)) {
HXLINE( 423)			_hx_tmp = (this->_scaleV != 1);
            		}
            		else {
HXLINE( 423)			_hx_tmp = true;
            		}
HXDLIN( 423)		if (_hx_tmp) {
HXLINE( 424)			this->_uvTransform->scale(this->_scaleU,this->_scaleV);
            		}
HXLINE( 425)		this->_uvTransform->translate(this->_offsetU,this->_offsetV);
HXLINE( 426)		this->_uvTransformDirty = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,updateUVTransform,(void))

void SubMesh_obj::updateUVTransform2(){
            	HX_GC_STACKFRAME(&_hx_pos_5051657cb209e527_430_updateUVTransform2)
HXLINE( 431)		if (::hx::IsNull( this->_uvTransform2 )) {
HXLINE( 432)			this->_uvTransform2 =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            		}
HXLINE( 433)		this->_uvTransform2->identity();
HXLINE( 434)		if ((this->_uvRotation2 != 0)) {
HXLINE( 435)			this->_uvTransform2->rotate(this->_uvRotation2);
            		}
HXLINE( 436)		bool _hx_tmp;
HXDLIN( 436)		if ((this->_scaleU2 == 1)) {
HXLINE( 436)			_hx_tmp = (this->_scaleV2 != 1);
            		}
            		else {
HXLINE( 436)			_hx_tmp = true;
            		}
HXDLIN( 436)		if (_hx_tmp) {
HXLINE( 437)			this->_uvTransform2->scale(this->_scaleU2,this->_scaleV2);
            		}
HXLINE( 438)		this->_uvTransform2->translate(this->_offsetU2,this->_offsetV2);
HXLINE( 439)		this->_uvTransformDirty2 = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,updateUVTransform2,(void))

void SubMesh_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_444_dispose)
HXDLIN( 444)		this->set_material(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,dispose,(void))

 ::openfl::_Vector::FloatVector SubMesh_obj::get_vertexData(){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_449_get_vertexData)
HXDLIN( 449)		return ::away3d::core::base::ISubGeometry_obj::get_vertexData(this->_subGeometry);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_vertexData,return )

 ::openfl::_Vector::IntVector SubMesh_obj::get_indexData(){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_454_get_indexData)
HXDLIN( 454)		return ::away3d::core::base::ISubGeometry_obj::get_indexData(this->_subGeometry);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_indexData,return )

 ::openfl::_Vector::FloatVector SubMesh_obj::get_UVData(){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_459_get_UVData)
HXDLIN( 459)		return ::away3d::core::base::ISubGeometry_obj::get_UVData(this->_subGeometry);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_UVData,return )

 ::away3d::bounds::BoundingVolumeBase SubMesh_obj::get_bounds(){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_464_get_bounds)
HXDLIN( 464)		return this->_parentMesh->get_bounds();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_bounds,return )

bool SubMesh_obj::get_visible(){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_469_get_visible)
HXDLIN( 469)		return this->_parentMesh->get_visible();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_visible,return )

int SubMesh_obj::get_numVertices(){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_474_get_numVertices)
HXDLIN( 474)		return ::away3d::core::base::ISubGeometry_obj::get_numVertices(this->_subGeometry);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_numVertices,return )

int SubMesh_obj::get_vertexStride(){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_479_get_vertexStride)
HXDLIN( 479)		return ::away3d::core::base::ISubGeometry_obj::get_vertexStride(this->_subGeometry);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_vertexStride,return )

int SubMesh_obj::get_UVStride(){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_484_get_UVStride)
HXDLIN( 484)		return ::away3d::core::base::ISubGeometry_obj::get_UVStride(this->_subGeometry);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_UVStride,return )

 ::openfl::_Vector::FloatVector SubMesh_obj::get_vertexNormalData(){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_489_get_vertexNormalData)
HXDLIN( 489)		return ::away3d::core::base::ISubGeometry_obj::get_vertexNormalData(this->_subGeometry);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_vertexNormalData,return )

 ::openfl::_Vector::FloatVector SubMesh_obj::get_vertexTangentData(){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_494_get_vertexTangentData)
HXDLIN( 494)		return ::away3d::core::base::ISubGeometry_obj::get_vertexTangentData(this->_subGeometry);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_vertexTangentData,return )

int SubMesh_obj::get_UVOffset(){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_499_get_UVOffset)
HXDLIN( 499)		return ::away3d::core::base::ISubGeometry_obj::get_UVOffset(this->_subGeometry);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_UVOffset,return )

int SubMesh_obj::get_vertexOffset(){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_504_get_vertexOffset)
HXDLIN( 504)		return ::away3d::core::base::ISubGeometry_obj::get_vertexOffset(this->_subGeometry);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_vertexOffset,return )

int SubMesh_obj::get_vertexNormalOffset(){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_509_get_vertexNormalOffset)
HXDLIN( 509)		return ::away3d::core::base::ISubGeometry_obj::get_vertexNormalOffset(this->_subGeometry);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_vertexNormalOffset,return )

int SubMesh_obj::get_vertexTangentOffset(){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_514_get_vertexTangentOffset)
HXDLIN( 514)		return ::away3d::core::base::ISubGeometry_obj::get_vertexTangentOffset(this->_subGeometry);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_vertexTangentOffset,return )

 ::openfl::geom::Matrix3D SubMesh_obj::getRenderSceneTransform( ::away3d::cameras::Camera3D camera){
            	HX_STACKFRAME(&_hx_pos_5051657cb209e527_519_getRenderSceneTransform)
HXDLIN( 519)		return this->_parentMesh->get_sceneTransform();
            	}


HX_DEFINE_DYNAMIC_FUNC1(SubMesh_obj,getRenderSceneTransform,return )


::hx::ObjectPtr< SubMesh_obj > SubMesh_obj::__new(::Dynamic subGeometry, ::away3d::entities::Mesh parentMesh, ::away3d::materials::MaterialBase material) {
	::hx::ObjectPtr< SubMesh_obj > __this = new SubMesh_obj();
	__this->__construct(subGeometry,parentMesh,material);
	return __this;
}

::hx::ObjectPtr< SubMesh_obj > SubMesh_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic subGeometry, ::away3d::entities::Mesh parentMesh, ::away3d::materials::MaterialBase material) {
	SubMesh_obj *__this = (SubMesh_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SubMesh_obj), true, "away3d.core.base.SubMesh"));
	*(void **)__this = SubMesh_obj::_hx_vtable;
	__this->__construct(subGeometry,parentMesh,material);
	return __this;
}

SubMesh_obj::SubMesh_obj()
{
}

void SubMesh_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SubMesh);
	HX_MARK_MEMBER_NAME(_material,"_material");
	HX_MARK_MEMBER_NAME(_parentMesh,"_parentMesh");
	HX_MARK_MEMBER_NAME(_subGeometry,"_subGeometry");
	HX_MARK_MEMBER_NAME(_index,"_index");
	HX_MARK_MEMBER_NAME(_uvTransform,"_uvTransform");
	HX_MARK_MEMBER_NAME(_uvTransformDirty,"_uvTransformDirty");
	HX_MARK_MEMBER_NAME(_uvRotation,"_uvRotation");
	HX_MARK_MEMBER_NAME(_scaleU,"_scaleU");
	HX_MARK_MEMBER_NAME(_scaleV,"_scaleV");
	HX_MARK_MEMBER_NAME(_offsetU,"_offsetU");
	HX_MARK_MEMBER_NAME(_offsetV,"_offsetV");
	HX_MARK_MEMBER_NAME(_uvTransform2,"_uvTransform2");
	HX_MARK_MEMBER_NAME(_uvTransformDirty2,"_uvTransformDirty2");
	HX_MARK_MEMBER_NAME(_uvRotation2,"_uvRotation2");
	HX_MARK_MEMBER_NAME(_scaleU2,"_scaleU2");
	HX_MARK_MEMBER_NAME(_scaleV2,"_scaleV2");
	HX_MARK_MEMBER_NAME(_offsetU2,"_offsetU2");
	HX_MARK_MEMBER_NAME(_offsetV2,"_offsetV2");
	HX_MARK_MEMBER_NAME(animationSubGeometry,"animationSubGeometry");
	HX_MARK_MEMBER_NAME(animatorSubGeometry,"animatorSubGeometry");
	HX_MARK_END_CLASS();
}

void SubMesh_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_material,"_material");
	HX_VISIT_MEMBER_NAME(_parentMesh,"_parentMesh");
	HX_VISIT_MEMBER_NAME(_subGeometry,"_subGeometry");
	HX_VISIT_MEMBER_NAME(_index,"_index");
	HX_VISIT_MEMBER_NAME(_uvTransform,"_uvTransform");
	HX_VISIT_MEMBER_NAME(_uvTransformDirty,"_uvTransformDirty");
	HX_VISIT_MEMBER_NAME(_uvRotation,"_uvRotation");
	HX_VISIT_MEMBER_NAME(_scaleU,"_scaleU");
	HX_VISIT_MEMBER_NAME(_scaleV,"_scaleV");
	HX_VISIT_MEMBER_NAME(_offsetU,"_offsetU");
	HX_VISIT_MEMBER_NAME(_offsetV,"_offsetV");
	HX_VISIT_MEMBER_NAME(_uvTransform2,"_uvTransform2");
	HX_VISIT_MEMBER_NAME(_uvTransformDirty2,"_uvTransformDirty2");
	HX_VISIT_MEMBER_NAME(_uvRotation2,"_uvRotation2");
	HX_VISIT_MEMBER_NAME(_scaleU2,"_scaleU2");
	HX_VISIT_MEMBER_NAME(_scaleV2,"_scaleV2");
	HX_VISIT_MEMBER_NAME(_offsetU2,"_offsetU2");
	HX_VISIT_MEMBER_NAME(_offsetV2,"_offsetV2");
	HX_VISIT_MEMBER_NAME(animationSubGeometry,"animationSubGeometry");
	HX_VISIT_MEMBER_NAME(animatorSubGeometry,"animatorSubGeometry");
}

::hx::Val SubMesh_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"scaleU") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scaleU() ); }
		if (HX_FIELD_EQ(inName,"scaleV") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scaleV() ); }
		if (HX_FIELD_EQ(inName,"UVData") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UVData() ); }
		if (HX_FIELD_EQ(inName,"bounds") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_bounds() ); }
		if (HX_FIELD_EQ(inName,"_index") ) { return ::hx::Val( _index ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetU") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_offsetU() ); }
		if (HX_FIELD_EQ(inName,"offsetV") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_offsetV() ); }
		if (HX_FIELD_EQ(inName,"scaleU2") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scaleU2() ); }
		if (HX_FIELD_EQ(inName,"scaleV2") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scaleV2() ); }
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_visible() ); }
		if (HX_FIELD_EQ(inName,"_scaleU") ) { return ::hx::Val( _scaleU ); }
		if (HX_FIELD_EQ(inName,"_scaleV") ) { return ::hx::Val( _scaleV ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"offsetU2") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_offsetU2() ); }
		if (HX_FIELD_EQ(inName,"offsetV2") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_offsetV2() ); }
		if (HX_FIELD_EQ(inName,"material") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_material() ); }
		if (HX_FIELD_EQ(inName,"animator") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_animator() ); }
		if (HX_FIELD_EQ(inName,"UVStride") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UVStride() ); }
		if (HX_FIELD_EQ(inName,"UVOffset") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UVOffset() ); }
		if (HX_FIELD_EQ(inName,"_offsetU") ) { return ::hx::Val( _offsetU ); }
		if (HX_FIELD_EQ(inName,"_offsetV") ) { return ::hx::Val( _offsetV ); }
		if (HX_FIELD_EQ(inName,"_scaleU2") ) { return ::hx::Val( _scaleU2 ); }
		if (HX_FIELD_EQ(inName,"_scaleV2") ) { return ::hx::Val( _scaleV2 ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"indexData") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_indexData() ); }
		if (HX_FIELD_EQ(inName,"_material") ) { return ::hx::Val( _material ); }
		if (HX_FIELD_EQ(inName,"_offsetU2") ) { return ::hx::Val( _offsetU2 ); }
		if (HX_FIELD_EQ(inName,"_offsetV2") ) { return ::hx::Val( _offsetV2 ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"uvRotation") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_uvRotation() ); }
		if (HX_FIELD_EQ(inName,"parentMesh") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_parentMesh() ); }
		if (HX_FIELD_EQ(inName,"vertexData") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_vertexData() ); }
		if (HX_FIELD_EQ(inName,"get_scaleU") ) { return ::hx::Val( get_scaleU_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scaleU") ) { return ::hx::Val( set_scaleU_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_scaleV") ) { return ::hx::Val( get_scaleV_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scaleV") ) { return ::hx::Val( set_scaleV_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_UVData") ) { return ::hx::Val( get_UVData_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_bounds") ) { return ::hx::Val( get_bounds_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"uvRotation2") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_uvRotation2() ); }
		if (HX_FIELD_EQ(inName,"subGeometry") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_subGeometry() ); }
		if (HX_FIELD_EQ(inName,"uvTransform") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_uvTransform() ); }
		if (HX_FIELD_EQ(inName,"numVertices") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numVertices() ); }
		if (HX_FIELD_EQ(inName,"_parentMesh") ) { return ::hx::Val( _parentMesh ); }
		if (HX_FIELD_EQ(inName,"_uvRotation") ) { return ::hx::Val( _uvRotation ); }
		if (HX_FIELD_EQ(inName,"get_offsetU") ) { return ::hx::Val( get_offsetU_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_offsetU") ) { return ::hx::Val( set_offsetU_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_offsetV") ) { return ::hx::Val( get_offsetV_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_offsetV") ) { return ::hx::Val( set_offsetV_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_scaleU2") ) { return ::hx::Val( get_scaleU2_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scaleU2") ) { return ::hx::Val( set_scaleU2_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_scaleV2") ) { return ::hx::Val( get_scaleV2_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scaleV2") ) { return ::hx::Val( set_scaleV2_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_visible") ) { return ::hx::Val( get_visible_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sourceEntity") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_sourceEntity() ); }
		if (HX_FIELD_EQ(inName,"numTriangles") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numTriangles() ); }
		if (HX_FIELD_EQ(inName,"mouseEnabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_mouseEnabled() ); }
		if (HX_FIELD_EQ(inName,"castsShadows") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_castsShadows() ); }
		if (HX_FIELD_EQ(inName,"uvTransform2") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_uvTransform2() ); }
		if (HX_FIELD_EQ(inName,"vertexStride") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_vertexStride() ); }
		if (HX_FIELD_EQ(inName,"vertexOffset") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_vertexOffset() ); }
		if (HX_FIELD_EQ(inName,"_subGeometry") ) { return ::hx::Val( _subGeometry ); }
		if (HX_FIELD_EQ(inName,"_uvTransform") ) { return ::hx::Val( _uvTransform ); }
		if (HX_FIELD_EQ(inName,"_uvRotation2") ) { return ::hx::Val( _uvRotation2 ); }
		if (HX_FIELD_EQ(inName,"get_offsetU2") ) { return ::hx::Val( get_offsetU2_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_offsetU2") ) { return ::hx::Val( set_offsetU2_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_offsetV2") ) { return ::hx::Val( get_offsetV2_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_offsetV2") ) { return ::hx::Val( set_offsetV2_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_material") ) { return ::hx::Val( get_material_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_material") ) { return ::hx::Val( set_material_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_animator") ) { return ::hx::Val( get_animator_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_UVStride") ) { return ::hx::Val( get_UVStride_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_UVOffset") ) { return ::hx::Val( get_UVOffset_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_uvTransform2") ) { return ::hx::Val( _uvTransform2 ); }
		if (HX_FIELD_EQ(inName,"get_indexData") ) { return ::hx::Val( get_indexData_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"sceneTransform") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_sceneTransform() ); }
		if (HX_FIELD_EQ(inName,"get_uvRotation") ) { return ::hx::Val( get_uvRotation_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_uvRotation") ) { return ::hx::Val( set_uvRotation_dyn() ); }
		if (HX_FIELD_EQ(inName,"getIndexBuffer") ) { return ::hx::Val( getIndexBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_parentMesh") ) { return ::hx::Val( get_parentMesh_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_parentMesh") ) { return ::hx::Val( set_parentMesh_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_vertexData") ) { return ::hx::Val( get_vertexData_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_uvRotation2") ) { return ::hx::Val( get_uvRotation2_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_uvRotation2") ) { return ::hx::Val( set_uvRotation2_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_subGeometry") ) { return ::hx::Val( get_subGeometry_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_subGeometry") ) { return ::hx::Val( set_subGeometry_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_uvTransform") ) { return ::hx::Val( get_uvTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numVertices") ) { return ::hx::Val( get_numVertices_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"vertexNormalData") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_vertexNormalData() ); }
		if (HX_FIELD_EQ(inName,"get_sourceEntity") ) { return ::hx::Val( get_sourceEntity_dyn() ); }
		if (HX_FIELD_EQ(inName,"activateUVBuffer") ) { return ::hx::Val( activateUVBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numTriangles") ) { return ::hx::Val( get_numTriangles_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_mouseEnabled") ) { return ::hx::Val( get_mouseEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_castsShadows") ) { return ::hx::Val( get_castsShadows_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_uvTransform2") ) { return ::hx::Val( get_uvTransform2_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_vertexStride") ) { return ::hx::Val( get_vertexStride_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_vertexOffset") ) { return ::hx::Val( get_vertexOffset_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"vertexTangentData") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_vertexTangentData() ); }
		if (HX_FIELD_EQ(inName,"_uvTransformDirty") ) { return ::hx::Val( _uvTransformDirty ); }
		if (HX_FIELD_EQ(inName,"updateUVTransform") ) { return ::hx::Val( updateUVTransform_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"vertexNormalOffset") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_vertexNormalOffset() ); }
		if (HX_FIELD_EQ(inName,"_uvTransformDirty2") ) { return ::hx::Val( _uvTransformDirty2 ); }
		if (HX_FIELD_EQ(inName,"get_sceneTransform") ) { return ::hx::Val( get_sceneTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateUVTransform2") ) { return ::hx::Val( updateUVTransform2_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"vertexTangentOffset") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_vertexTangentOffset() ); }
		if (HX_FIELD_EQ(inName,"animatorSubGeometry") ) { return ::hx::Val( animatorSubGeometry ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"shaderPickingDetails") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_shaderPickingDetails() ); }
		if (HX_FIELD_EQ(inName,"animationSubGeometry") ) { return ::hx::Val( animationSubGeometry ); }
		if (HX_FIELD_EQ(inName,"activateVertexBuffer") ) { return ::hx::Val( activateVertexBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_vertexNormalData") ) { return ::hx::Val( get_vertexNormalData_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"inverseSceneTransform") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_inverseSceneTransform() ); }
		if (HX_FIELD_EQ(inName,"get_vertexTangentData") ) { return ::hx::Val( get_vertexTangentData_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_vertexNormalOffset") ) { return ::hx::Val( get_vertexNormalOffset_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_vertexTangentOffset") ) { return ::hx::Val( get_vertexTangentOffset_dyn() ); }
		if (HX_FIELD_EQ(inName,"getRenderSceneTransform") ) { return ::hx::Val( getRenderSceneTransform_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_shaderPickingDetails") ) { return ::hx::Val( get_shaderPickingDetails_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"get_inverseSceneTransform") ) { return ::hx::Val( get_inverseSceneTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"activateSecondaryUVBuffer") ) { return ::hx::Val( activateSecondaryUVBuffer_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"activateVertexNormalBuffer") ) { return ::hx::Val( activateVertexNormalBuffer_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"activateVertexTangentBuffer") ) { return ::hx::Val( activateVertexTangentBuffer_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SubMesh_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"scaleU") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scaleU(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"scaleV") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scaleV(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"_index") ) { _index=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetU") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_offsetU(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"offsetV") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_offsetV(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"scaleU2") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scaleU2(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"scaleV2") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scaleV2(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"_scaleU") ) { _scaleU=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scaleV") ) { _scaleV=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"offsetU2") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_offsetU2(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"offsetV2") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_offsetV2(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"material") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_material(inValue.Cast<  ::away3d::materials::MaterialBase >()) ); }
		if (HX_FIELD_EQ(inName,"_offsetU") ) { _offsetU=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_offsetV") ) { _offsetV=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scaleU2") ) { _scaleU2=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scaleV2") ) { _scaleV2=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_material") ) { _material=inValue.Cast<  ::away3d::materials::MaterialBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_offsetU2") ) { _offsetU2=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_offsetV2") ) { _offsetV2=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"uvRotation") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_uvRotation(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"parentMesh") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_parentMesh(inValue.Cast<  ::away3d::entities::Mesh >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"uvRotation2") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_uvRotation2(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"subGeometry") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_subGeometry(inValue.Cast< ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"_parentMesh") ) { _parentMesh=inValue.Cast<  ::away3d::entities::Mesh >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_uvRotation") ) { _uvRotation=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_subGeometry") ) { _subGeometry=inValue.Cast< ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_uvTransform") ) { _uvTransform=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_uvRotation2") ) { _uvRotation2=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_uvTransform2") ) { _uvTransform2=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_uvTransformDirty") ) { _uvTransformDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_uvTransformDirty2") ) { _uvTransformDirty2=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"animatorSubGeometry") ) { animatorSubGeometry=inValue.Cast<  ::away3d::animators::data::AnimationSubGeometry >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"animationSubGeometry") ) { animationSubGeometry=inValue.Cast<  ::away3d::animators::data::AnimationSubGeometry >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SubMesh_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shaderPickingDetails",26,0e,05,d4));
	outFields->push(HX_("offsetU",62,09,65,d7));
	outFields->push(HX_("offsetV",63,09,65,d7));
	outFields->push(HX_("scaleU",8b,ea,25,3c));
	outFields->push(HX_("scaleV",8c,ea,25,3c));
	outFields->push(HX_("uvRotation",bf,28,87,ff));
	outFields->push(HX_("offsetU2",90,2c,03,a1));
	outFields->push(HX_("offsetV2",6f,2d,03,a1));
	outFields->push(HX_("scaleU2",47,4f,07,65));
	outFields->push(HX_("scaleV2",26,50,07,65));
	outFields->push(HX_("uvRotation2",93,7e,bc,96));
	outFields->push(HX_("sourceEntity",5e,ce,22,fb));
	outFields->push(HX_("subGeometry",52,e8,b7,32));
	outFields->push(HX_("material",a7,5c,a5,f0));
	outFields->push(HX_("sceneTransform",80,aa,2c,82));
	outFields->push(HX_("inverseSceneTransform",50,9e,fe,b2));
	outFields->push(HX_("numTriangles",85,39,b1,26));
	outFields->push(HX_("animator",67,7b,f2,88));
	outFields->push(HX_("mouseEnabled",dc,54,d6,5f));
	outFields->push(HX_("castsShadows",1f,fe,ad,16));
	outFields->push(HX_("parentMesh",37,58,6b,e7));
	outFields->push(HX_("uvTransform",cb,52,60,6f));
	outFields->push(HX_("uvTransform2",07,1f,e8,04));
	outFields->push(HX_("vertexData",ae,df,1f,d3));
	outFields->push(HX_("indexData",5c,0e,71,fe));
	outFields->push(HX_("UVData",2b,11,08,ae));
	outFields->push(HX_("bounds",75,86,1d,66));
	outFields->push(HX_("visible",72,78,24,a3));
	outFields->push(HX_("numVertices",5f,10,2c,56));
	outFields->push(HX_("vertexStride",9d,12,45,b1));
	outFields->push(HX_("UVStride",5a,5d,ba,3b));
	outFields->push(HX_("vertexNormalData",75,18,42,9c));
	outFields->push(HX_("vertexTangentData",8b,d4,d1,fe));
	outFields->push(HX_("UVOffset",d4,d4,c9,8a));
	outFields->push(HX_("vertexOffset",17,8a,54,00));
	outFields->push(HX_("vertexNormalOffset",9e,c2,0b,01));
	outFields->push(HX_("vertexTangentOffset",34,30,13,f4));
	outFields->push(HX_("_material",06,54,3b,38));
	outFields->push(HX_("_parentMesh",56,25,f5,b9));
	outFields->push(HX_("_subGeometry",53,96,c1,98));
	outFields->push(HX_("_index",53,e2,fb,b9));
	outFields->push(HX_("_uvTransform",cc,00,6a,d5));
	outFields->push(HX_("_uvTransformDirty",a6,5b,21,48));
	outFields->push(HX_("_uvRotation",de,f5,10,d2));
	outFields->push(HX_("_scaleU",2a,fc,9c,aa));
	outFields->push(HX_("_scaleV",2b,fc,9c,aa));
	outFields->push(HX_("_offsetU",e3,62,1d,11));
	outFields->push(HX_("_offsetV",e4,62,1d,11));
	outFields->push(HX_("_uvTransform2",e6,b1,56,e7));
	outFields->push(HX_("_uvTransformDirty2",cc,d5,0e,d5));
	outFields->push(HX_("_uvRotation2",94,2c,c6,fc));
	outFields->push(HX_("_scaleU2",c8,a8,bf,9e));
	outFields->push(HX_("_scaleV2",a7,a9,bf,9e));
	outFields->push(HX_("_offsetU2",ef,23,99,e8));
	outFields->push(HX_("_offsetV2",ce,24,99,e8));
	outFields->push(HX_("animationSubGeometry",ae,a7,8b,ae));
	outFields->push(HX_("animatorSubGeometry",2b,00,e9,9c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SubMesh_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::away3d::materials::MaterialBase */ ,(int)offsetof(SubMesh_obj,_material),HX_("_material",06,54,3b,38)},
	{::hx::fsObject /*  ::away3d::entities::Mesh */ ,(int)offsetof(SubMesh_obj,_parentMesh),HX_("_parentMesh",56,25,f5,b9)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(SubMesh_obj,_subGeometry),HX_("_subGeometry",53,96,c1,98)},
	{::hx::fsInt,(int)offsetof(SubMesh_obj,_index),HX_("_index",53,e2,fb,b9)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(int)offsetof(SubMesh_obj,_uvTransform),HX_("_uvTransform",cc,00,6a,d5)},
	{::hx::fsBool,(int)offsetof(SubMesh_obj,_uvTransformDirty),HX_("_uvTransformDirty",a6,5b,21,48)},
	{::hx::fsFloat,(int)offsetof(SubMesh_obj,_uvRotation),HX_("_uvRotation",de,f5,10,d2)},
	{::hx::fsFloat,(int)offsetof(SubMesh_obj,_scaleU),HX_("_scaleU",2a,fc,9c,aa)},
	{::hx::fsFloat,(int)offsetof(SubMesh_obj,_scaleV),HX_("_scaleV",2b,fc,9c,aa)},
	{::hx::fsFloat,(int)offsetof(SubMesh_obj,_offsetU),HX_("_offsetU",e3,62,1d,11)},
	{::hx::fsFloat,(int)offsetof(SubMesh_obj,_offsetV),HX_("_offsetV",e4,62,1d,11)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(int)offsetof(SubMesh_obj,_uvTransform2),HX_("_uvTransform2",e6,b1,56,e7)},
	{::hx::fsBool,(int)offsetof(SubMesh_obj,_uvTransformDirty2),HX_("_uvTransformDirty2",cc,d5,0e,d5)},
	{::hx::fsFloat,(int)offsetof(SubMesh_obj,_uvRotation2),HX_("_uvRotation2",94,2c,c6,fc)},
	{::hx::fsFloat,(int)offsetof(SubMesh_obj,_scaleU2),HX_("_scaleU2",c8,a8,bf,9e)},
	{::hx::fsFloat,(int)offsetof(SubMesh_obj,_scaleV2),HX_("_scaleV2",a7,a9,bf,9e)},
	{::hx::fsFloat,(int)offsetof(SubMesh_obj,_offsetU2),HX_("_offsetU2",ef,23,99,e8)},
	{::hx::fsFloat,(int)offsetof(SubMesh_obj,_offsetV2),HX_("_offsetV2",ce,24,99,e8)},
	{::hx::fsObject /*  ::away3d::animators::data::AnimationSubGeometry */ ,(int)offsetof(SubMesh_obj,animationSubGeometry),HX_("animationSubGeometry",ae,a7,8b,ae)},
	{::hx::fsObject /*  ::away3d::animators::data::AnimationSubGeometry */ ,(int)offsetof(SubMesh_obj,animatorSubGeometry),HX_("animatorSubGeometry",2b,00,e9,9c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SubMesh_obj_sStaticStorageInfo = 0;
#endif

static ::String SubMesh_obj_sMemberFields[] = {
	HX_("_material",06,54,3b,38),
	HX_("_parentMesh",56,25,f5,b9),
	HX_("_subGeometry",53,96,c1,98),
	HX_("_index",53,e2,fb,b9),
	HX_("_uvTransform",cc,00,6a,d5),
	HX_("_uvTransformDirty",a6,5b,21,48),
	HX_("_uvRotation",de,f5,10,d2),
	HX_("_scaleU",2a,fc,9c,aa),
	HX_("_scaleV",2b,fc,9c,aa),
	HX_("_offsetU",e3,62,1d,11),
	HX_("_offsetV",e4,62,1d,11),
	HX_("_uvTransform2",e6,b1,56,e7),
	HX_("_uvTransformDirty2",cc,d5,0e,d5),
	HX_("_uvRotation2",94,2c,c6,fc),
	HX_("_scaleU2",c8,a8,bf,9e),
	HX_("_scaleV2",a7,a9,bf,9e),
	HX_("_offsetU2",ef,23,99,e8),
	HX_("_offsetV2",ce,24,99,e8),
	HX_("animationSubGeometry",ae,a7,8b,ae),
	HX_("animatorSubGeometry",2b,00,e9,9c),
	HX_("get_shaderPickingDetails",af,2b,a1,16),
	HX_("get_offsetU",79,69,5f,5d),
	HX_("set_offsetU",85,70,cc,67),
	HX_("get_offsetV",7a,69,5f,5d),
	HX_("set_offsetV",86,70,cc,67),
	HX_("get_scaleU",54,5a,ad,2c),
	HX_("set_scaleU",c8,f8,2a,30),
	HX_("get_scaleV",55,5a,ad,2c),
	HX_("set_scaleV",c9,f8,2a,30),
	HX_("get_uvRotation",08,b1,7c,75),
	HX_("set_uvRotation",7c,99,9c,95),
	HX_("get_offsetU2",99,e0,1c,56),
	HX_("set_offsetU2",0d,04,16,6b),
	HX_("get_offsetV2",78,e1,1c,56),
	HX_("set_offsetV2",ec,04,16,6b),
	HX_("get_scaleU2",5e,af,01,eb),
	HX_("set_scaleU2",6a,b6,6e,f5),
	HX_("get_scaleV2",3d,b0,01,eb),
	HX_("set_scaleV2",49,b7,6e,f5),
	HX_("get_uvRotation2",2a,36,9e,57),
	HX_("set_uvRotation2",36,b3,69,53),
	HX_("get_sourceEntity",e7,ba,c1,ff),
	HX_("get_subGeometry",e9,9f,99,f3),
	HX_("set_subGeometry",f5,1c,65,ef),
	HX_("get_material",b0,10,bf,a5),
	HX_("set_material",24,34,b8,ba),
	HX_("get_sceneTransform",49,8b,c6,1d),
	HX_("get_inverseSceneTransform",a7,58,fc,b8),
	HX_("activateVertexBuffer",d7,57,3c,03),
	HX_("activateVertexNormalBuffer",9e,10,d7,ce),
	HX_("activateVertexTangentBuffer",ae,ad,55,ce),
	HX_("activateUVBuffer",f4,80,aa,61),
	HX_("activateSecondaryUVBuffer",82,28,8f,3c),
	HX_("getIndexBuffer",bc,b8,44,7d),
	HX_("get_numTriangles",0e,26,50,2b),
	HX_("get_animator",70,2f,0c,3e),
	HX_("get_mouseEnabled",65,41,75,64),
	HX_("get_castsShadows",a8,ea,4c,1b),
	HX_("get_parentMesh",80,e0,60,5d),
	HX_("set_parentMesh",f4,c8,80,7d),
	HX_("get_uvTransform",62,0a,42,30),
	HX_("get_uvTransform2",90,0b,87,09),
	HX_("updateUVTransform",62,03,7b,ca),
	HX_("updateUVTransform2",90,f2,27,61),
	HX_("dispose",9f,80,4c,bb),
	HX_("get_vertexData",f7,67,15,49),
	HX_("get_indexData",33,e2,d4,bf),
	HX_("get_UVData",f4,80,8f,9e),
	HX_("get_bounds",3e,f6,a4,56),
	HX_("get_visible",89,d8,1e,29),
	HX_("get_numVertices",f6,c7,0d,17),
	HX_("get_vertexStride",26,ff,e3,b5),
	HX_("get_UVStride",63,11,d4,f0),
	HX_("get_vertexNormalData",7e,7d,ac,ba),
	HX_("get_vertexTangentData",62,d7,7f,7d),
	HX_("get_UVOffset",dd,88,e3,3f),
	HX_("get_vertexOffset",a0,76,f3,04),
	HX_("get_vertexNormalOffset",e7,3b,a0,5a),
	HX_("get_vertexTangentOffset",cb,d6,68,fc),
	HX_("getRenderSceneTransform",2c,90,20,fc),
	::String(null()) };

::hx::Class SubMesh_obj::__mClass;

void SubMesh_obj::__register()
{
	SubMesh_obj _hx_dummy;
	SubMesh_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.base.SubMesh",10,8a,a8,59);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SubMesh_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SubMesh_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SubMesh_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SubMesh_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace core
} // end namespace base
