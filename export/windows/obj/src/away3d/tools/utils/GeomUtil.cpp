#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_CompactSubGeometry
#include <away3d/core/base/CompactSubGeometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_Geometry
#include <away3d/core/base/Geometry.h>
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
#ifndef INCLUDED_away3d_core_base_SkinnedSubGeometry
#include <away3d/core/base/SkinnedSubGeometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_SubGeometryBase
#include <away3d/core/base/SubGeometryBase.h>
#endif
#ifndef INCLUDED_away3d_core_base_SubMesh
#include <away3d/core/base/SubMesh.h>
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
#ifndef INCLUDED_away3d_tools_utils_GeomUtil
#include <away3d/tools/utils/GeomUtil.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_8605ad05873dc753_20_fromVectors,"away3d.tools.utils.GeomUtil","fromVectors",0x06a924f5,"away3d.tools.utils.GeomUtil.fromVectors","away3d/tools/utils/GeomUtil.hx",20,0xe4856a9e)
HX_LOCAL_STACK_FRAME(_hx_pos_8605ad05873dc753_171_constructSubGeometry,"away3d.tools.utils.GeomUtil","constructSubGeometry",0x2b5064ac,"away3d.tools.utils.GeomUtil.constructSubGeometry","away3d/tools/utils/GeomUtil.hx",171,0xe4856a9e)
HX_LOCAL_STACK_FRAME(_hx_pos_8605ad05873dc753_196_interleaveBuffers,"away3d.tools.utils.GeomUtil","interleaveBuffers",0xd3085087,"away3d.tools.utils.GeomUtil.interleaveBuffers","away3d/tools/utils/GeomUtil.hx",196,0xe4856a9e)
HX_LOCAL_STACK_FRAME(_hx_pos_8605ad05873dc753_236_getMeshSubgeometryIndex,"away3d.tools.utils.GeomUtil","getMeshSubgeometryIndex",0x2f9de6b2,"away3d.tools.utils.GeomUtil.getMeshSubgeometryIndex","away3d/tools/utils/GeomUtil.hx",236,0xe4856a9e)
HX_LOCAL_STACK_FRAME(_hx_pos_8605ad05873dc753_253_getMeshSubMeshIndex,"away3d.tools.utils.GeomUtil","getMeshSubMeshIndex",0x03a12877,"away3d.tools.utils.GeomUtil.getMeshSubMeshIndex","away3d/tools/utils/GeomUtil.hx",253,0xe4856a9e)
HX_LOCAL_STACK_FRAME(_hx_pos_8605ad05873dc753_12_boot,"away3d.tools.utils.GeomUtil","boot",0x164fb563,"away3d.tools.utils.GeomUtil.boot","away3d/tools/utils/GeomUtil.hx",12,0xe4856a9e)
HX_LOCAL_STACK_FRAME(_hx_pos_8605ad05873dc753_13_boot,"away3d.tools.utils.GeomUtil","boot",0x164fb563,"away3d.tools.utils.GeomUtil.boot","away3d/tools/utils/GeomUtil.hx",13,0xe4856a9e)
namespace away3d{
namespace tools{
namespace utils{

void GeomUtil_obj::__construct() { }

Dynamic GeomUtil_obj::__CreateEmpty() { return new GeomUtil_obj; }

void *GeomUtil_obj::_hx_vtable = 0;

Dynamic GeomUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GeomUtil_obj > _hx_result = new GeomUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GeomUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x72923833;
}

int GeomUtil_obj::LIMIT_VERTS;

int GeomUtil_obj::LIMIT_INDICES;

 ::openfl::_Vector::ObjectVector GeomUtil_obj::fromVectors( ::openfl::_Vector::FloatVector verts, ::openfl::_Vector::IntVector indices, ::openfl::_Vector::FloatVector uvs, ::openfl::_Vector::FloatVector normals, ::openfl::_Vector::FloatVector tangents, ::openfl::_Vector::FloatVector weights, ::openfl::_Vector::FloatVector jointIndices,::hx::Null< int >  __o_triangleOffset){
            		int triangleOffset = __o_triangleOffset.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_8605ad05873dc753_20_fromVectors)
HXLINE(  23)		int length = null();
HXDLIN(  23)		bool fixed = null();
HXDLIN(  23)		::Array< ::Dynamic> array = null();
HXDLIN(  23)		 ::openfl::_Vector::ObjectVector subs =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE(  25)		bool _hx_tmp;
HXDLIN(  25)		if (::hx::IsNotNull( uvs )) {
HXLINE(  25)			_hx_tmp = (uvs->get_length() == 0);
            		}
            		else {
HXLINE(  25)			_hx_tmp = false;
            		}
HXDLIN(  25)		if (_hx_tmp) {
HXLINE(  26)			uvs = null();
            		}
HXLINE(  28)		bool _hx_tmp1;
HXDLIN(  28)		if (::hx::IsNotNull( normals )) {
HXLINE(  28)			_hx_tmp1 = (normals->get_length() == 0);
            		}
            		else {
HXLINE(  28)			_hx_tmp1 = false;
            		}
HXDLIN(  28)		if (_hx_tmp1) {
HXLINE(  29)			normals = null();
            		}
HXLINE(  31)		bool _hx_tmp2;
HXDLIN(  31)		if (::hx::IsNotNull( tangents )) {
HXLINE(  31)			_hx_tmp2 = (tangents->get_length() == 0);
            		}
            		else {
HXLINE(  31)			_hx_tmp2 = false;
            		}
HXDLIN(  31)		if (_hx_tmp2) {
HXLINE(  32)			tangents = null();
            		}
HXLINE(  34)		bool _hx_tmp3;
HXDLIN(  34)		if (::hx::IsNotNull( weights )) {
HXLINE(  34)			_hx_tmp3 = (weights->get_length() == 0);
            		}
            		else {
HXLINE(  34)			_hx_tmp3 = false;
            		}
HXDLIN(  34)		if (_hx_tmp3) {
HXLINE(  35)			weights = null();
            		}
HXLINE(  37)		bool _hx_tmp4;
HXDLIN(  37)		if (::hx::IsNotNull( jointIndices )) {
HXLINE(  37)			_hx_tmp4 = (jointIndices->get_length() == 0);
            		}
            		else {
HXLINE(  37)			_hx_tmp4 = false;
            		}
HXDLIN(  37)		if (_hx_tmp4) {
HXLINE(  38)			jointIndices = null();
            		}
HXLINE(  40)		bool _hx_tmp5;
HXDLIN(  40)		if ((indices->get_length() < 983025)) {
HXLINE(  40)			_hx_tmp5 = (verts->get_length() >= 196605);
            		}
            		else {
HXLINE(  40)			_hx_tmp5 = true;
            		}
HXDLIN(  40)		if (_hx_tmp5) {
HXLINE(  41)			int i = 0;
HXDLIN(  41)			int j;
HXLINE(  42)			int length = null();
HXDLIN(  42)			bool fixed = null();
HXDLIN(  42)			::Array< Float > array = null();
HXDLIN(  42)			 ::openfl::_Vector::FloatVector splitVerts =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE(  43)			int length1 = null();
HXDLIN(  43)			bool fixed1 = null();
HXDLIN(  43)			::Array< int > array1 = null();
HXDLIN(  43)			 ::openfl::_Vector::IntVector splitIndices =  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,length1,fixed1,array1);
HXLINE(  44)			 ::openfl::_Vector::FloatVector splitUvs;
HXDLIN(  44)			if (::hx::IsNotNull( uvs )) {
HXLINE(  44)				int length = null();
HXDLIN(  44)				bool fixed = null();
HXDLIN(  44)				::Array< Float > array = null();
HXDLIN(  44)				splitUvs =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
            			}
            			else {
HXLINE(  44)				splitUvs = null();
            			}
HXLINE(  45)			 ::openfl::_Vector::FloatVector splitNormals;
HXDLIN(  45)			if (::hx::IsNotNull( normals )) {
HXLINE(  45)				int length = null();
HXDLIN(  45)				bool fixed = null();
HXDLIN(  45)				::Array< Float > array = null();
HXDLIN(  45)				splitNormals =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
            			}
            			else {
HXLINE(  45)				splitNormals = null();
            			}
HXLINE(  46)			 ::openfl::_Vector::FloatVector splitTangents;
HXDLIN(  46)			if (::hx::IsNotNull( tangents )) {
HXLINE(  46)				int length = null();
HXDLIN(  46)				bool fixed = null();
HXDLIN(  46)				::Array< Float > array = null();
HXDLIN(  46)				splitTangents =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
            			}
            			else {
HXLINE(  46)				splitTangents = null();
            			}
HXLINE(  47)			 ::openfl::_Vector::FloatVector splitWeights;
HXDLIN(  47)			if (::hx::IsNotNull( weights )) {
HXLINE(  47)				int length = null();
HXDLIN(  47)				bool fixed = null();
HXDLIN(  47)				::Array< Float > array = null();
HXDLIN(  47)				splitWeights =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
            			}
            			else {
HXLINE(  47)				splitWeights = null();
            			}
HXLINE(  48)			 ::openfl::_Vector::FloatVector splitJointIndices;
HXDLIN(  48)			if (::hx::IsNotNull( jointIndices )) {
HXLINE(  48)				int length = null();
HXDLIN(  48)				bool fixed = null();
HXDLIN(  48)				::Array< Float > array = null();
HXDLIN(  48)				splitJointIndices =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
            			}
            			else {
HXLINE(  48)				splitJointIndices = null();
            			}
HXLINE(  50)			::Array< int > array2 = null();
HXDLIN(  50)			 ::openfl::_Vector::IntVector mappings =  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,::Std_obj::_hx_int((( (Float)(::openfl::_Vector::IVector_obj::get_length(verts)) ) / ( (Float)(3) ))),true,array2);
HXLINE(  51)			i = mappings->get_length();
HXLINE(  52)			while(true){
HXLINE(  52)				i = (i - 1);
HXDLIN(  52)				if (!(((i + 1) > 0))) {
HXLINE(  52)					goto _hx_goto_0;
            				}
HXLINE(  53)				mappings->set(i,-1);
            			}
            			_hx_goto_0:;
HXLINE(  55)			int originalIndex;
HXLINE(  56)			int splitIndex;
HXLINE(  57)			int o0;
HXDLIN(  57)			int o1;
HXDLIN(  57)			int o2;
HXDLIN(  57)			int s0;
HXDLIN(  57)			int s1;
HXDLIN(  57)			int s2;
HXDLIN(  57)			int su;
HXDLIN(  57)			int ou;
HXDLIN(  57)			int sv;
HXDLIN(  57)			int ov;
HXLINE(  41)			int outIndex = 0;
HXDLIN(  41)			int len = indices->get_length();
HXLINE(  63)			i = 0;
HXLINE(  64)			while((i < len)){
HXLINE(  65)				splitIndex = (splitVerts->get_length() + 6);
HXLINE(  67)				bool _hx_tmp;
HXDLIN(  67)				if (((outIndex + 2) < 983025)) {
HXLINE(  67)					_hx_tmp = (splitIndex >= 196605);
            				}
            				else {
HXLINE(  67)					_hx_tmp = true;
            				}
HXDLIN(  67)				if (_hx_tmp) {
HXLINE(  68)					subs->push(::away3d::tools::utils::GeomUtil_obj::constructSubGeometry(splitVerts,splitIndices,splitUvs,splitNormals,splitTangents,splitWeights,splitJointIndices,triangleOffset));
HXLINE(  69)					int length = null();
HXDLIN(  69)					bool fixed = null();
HXDLIN(  69)					::Array< Float > array = null();
HXDLIN(  69)					splitVerts =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE(  70)					int length1 = null();
HXDLIN(  70)					bool fixed1 = null();
HXDLIN(  70)					::Array< int > array1 = null();
HXDLIN(  70)					splitIndices =  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,length1,fixed1,array1);
HXLINE(  71)					if (::hx::IsNotNull( uvs )) {
HXLINE(  71)						int length = null();
HXDLIN(  71)						bool fixed = null();
HXDLIN(  71)						::Array< Float > array = null();
HXDLIN(  71)						splitUvs =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
            					}
            					else {
HXLINE(  71)						splitUvs = null();
            					}
HXLINE(  72)					if (::hx::IsNotNull( normals )) {
HXLINE(  72)						int length = null();
HXDLIN(  72)						bool fixed = null();
HXDLIN(  72)						::Array< Float > array = null();
HXDLIN(  72)						splitNormals =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
            					}
            					else {
HXLINE(  72)						splitNormals = null();
            					}
HXLINE(  73)					if (::hx::IsNotNull( tangents )) {
HXLINE(  73)						int length = null();
HXDLIN(  73)						bool fixed = null();
HXDLIN(  73)						::Array< Float > array = null();
HXDLIN(  73)						splitTangents =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
            					}
            					else {
HXLINE(  73)						splitTangents = null();
            					}
HXLINE(  74)					if (::hx::IsNotNull( weights )) {
HXLINE(  74)						int length = null();
HXDLIN(  74)						bool fixed = null();
HXDLIN(  74)						::Array< Float > array = null();
HXDLIN(  74)						splitWeights =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
            					}
            					else {
HXLINE(  74)						splitWeights = null();
            					}
HXLINE(  75)					if (::hx::IsNotNull( jointIndices )) {
HXLINE(  75)						int length = null();
HXDLIN(  75)						bool fixed = null();
HXDLIN(  75)						::Array< Float > array = null();
HXDLIN(  75)						splitJointIndices =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
            					}
            					else {
HXLINE(  75)						splitJointIndices = null();
            					}
HXLINE(  76)					splitIndex = 0;
HXLINE(  77)					j = mappings->get_length();
HXLINE(  78)					while(true){
HXLINE(  78)						j = (j - 1);
HXDLIN(  78)						if (!(((j + 1) > 0))) {
HXLINE(  78)							goto _hx_goto_2;
            						}
HXLINE(  79)						mappings->set(j,-1);
            					}
            					_hx_goto_2:;
HXLINE(  81)					outIndex = 0;
            				}
HXLINE(  85)				{
HXLINE(  85)					int _g = 0;
HXDLIN(  85)					while((_g < 3)){
HXLINE(  85)						_g = (_g + 1);
HXDLIN(  85)						int j = (_g - 1);
HXLINE(  87)						originalIndex = indices->get((i + j));
HXLINE(  89)						if ((mappings->get(originalIndex) >= 0)) {
HXLINE(  90)							splitIndex = mappings->get(originalIndex);
            						}
            						else {
HXLINE(  94)							o0 = (originalIndex * 3);
HXLINE(  95)							o1 = ((originalIndex * 3) + 1);
HXLINE(  96)							o2 = ((originalIndex * 3) + 2);
HXLINE( 100)							splitIndex = ::Std_obj::_hx_int((( (Float)(splitVerts->get_length()) ) / ( (Float)(3) )));
HXLINE( 102)							s0 = (splitIndex * 3);
HXLINE( 103)							s1 = ((splitIndex * 3) + 1);
HXLINE( 104)							s2 = ((splitIndex * 3) + 2);
HXLINE( 106)							splitVerts->set(s0,verts->get(o0));
HXLINE( 107)							splitVerts->set(s1,verts->get(o1));
HXLINE( 108)							splitVerts->set(s2,verts->get(o2));
HXLINE( 110)							if (::hx::IsNotNull( uvs )) {
HXLINE( 111)								su = (splitIndex * 2);
HXLINE( 112)								sv = ((splitIndex * 2) + 1);
HXLINE( 113)								ou = (originalIndex * 2);
HXLINE( 114)								ov = ((originalIndex * 2) + 1);
HXLINE( 116)								splitUvs->set(su,uvs->get(ou));
HXLINE( 117)								splitUvs->set(sv,uvs->get(ov));
            							}
HXLINE( 120)							if (::hx::IsNotNull( normals )) {
HXLINE( 121)								splitNormals->set(s0,normals->get(o0));
HXLINE( 122)								splitNormals->set(s1,normals->get(o1));
HXLINE( 123)								splitNormals->set(s2,normals->get(o2));
            							}
HXLINE( 126)							if (::hx::IsNotNull( tangents )) {
HXLINE( 127)								splitTangents->set(s0,tangents->get(o0));
HXLINE( 128)								splitTangents->set(s1,tangents->get(o1));
HXLINE( 129)								splitTangents->set(s2,tangents->get(o2));
            							}
HXLINE( 132)							if (::hx::IsNotNull( weights )) {
HXLINE( 133)								splitWeights->set(s0,weights->get(o0));
HXLINE( 134)								splitWeights->set(s1,weights->get(o1));
HXLINE( 135)								splitWeights->set(s2,weights->get(o2));
            							}
HXLINE( 138)							if (::hx::IsNotNull( jointIndices )) {
HXLINE( 139)								splitJointIndices->set(s0,jointIndices->get(o0));
HXLINE( 140)								splitJointIndices->set(s1,jointIndices->get(o1));
HXLINE( 141)								splitJointIndices->set(s2,jointIndices->get(o2));
            							}
HXLINE( 144)							mappings->set(originalIndex,splitIndex);
            						}
HXLINE( 149)						splitIndices->set((outIndex + j),splitIndex);
            					}
            				}
HXLINE( 152)				outIndex = (outIndex + 3);
HXLINE( 153)				i = (i + 3);
            			}
HXLINE( 156)			if ((splitVerts->get_length() > 0)) {
HXLINE( 158)				subs->push(::away3d::tools::utils::GeomUtil_obj::constructSubGeometry(splitVerts,splitIndices,splitUvs,splitNormals,splitTangents,splitWeights,splitJointIndices,triangleOffset));
            			}
            		}
            		else {
HXLINE( 162)			subs->push(::away3d::tools::utils::GeomUtil_obj::constructSubGeometry(verts,indices,uvs,normals,tangents,weights,jointIndices,triangleOffset));
            		}
HXLINE( 164)		return subs;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(GeomUtil_obj,fromVectors,return )

 ::away3d::core::base::CompactSubGeometry GeomUtil_obj::constructSubGeometry( ::openfl::_Vector::FloatVector verts, ::openfl::_Vector::IntVector indices, ::openfl::_Vector::FloatVector uvs, ::openfl::_Vector::FloatVector normals, ::openfl::_Vector::FloatVector tangents, ::openfl::_Vector::FloatVector weights, ::openfl::_Vector::FloatVector jointIndices,int triangleOffset){
            	HX_GC_STACKFRAME(&_hx_pos_8605ad05873dc753_171_constructSubGeometry)
HXLINE( 172)		 ::away3d::core::base::CompactSubGeometry sub;
HXLINE( 174)		bool _hx_tmp;
HXDLIN( 174)		if (::hx::IsNotNull( weights )) {
HXLINE( 174)			_hx_tmp = ::hx::IsNotNull( jointIndices );
            		}
            		else {
HXLINE( 174)			_hx_tmp = false;
            		}
HXDLIN( 174)		if (_hx_tmp) {
HXLINE( 178)			int sub1 = weights->get_length();
HXDLIN( 178)			sub =  ::away3d::core::base::SkinnedSubGeometry_obj::__alloc( HX_CTX ,::Std_obj::_hx_int((( (Float)(sub1) ) / (( (Float)(verts->get_length()) ) / ( (Float)(3) )))));
HXLINE( 179)			::hx::TCast<  ::away3d::core::base::SkinnedSubGeometry >::cast(sub)->updateJointWeightsData(weights);
HXLINE( 180)			::hx::TCast<  ::away3d::core::base::SkinnedSubGeometry >::cast(sub)->updateJointIndexData(jointIndices);
            		}
            		else {
HXLINE( 183)			sub =  ::away3d::core::base::CompactSubGeometry_obj::__alloc( HX_CTX );
            		}
HXLINE( 185)		sub->updateIndexData(indices);
HXLINE( 186)		sub->fromVectors(verts,uvs,normals,tangents);
HXLINE( 187)		return sub;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(GeomUtil_obj,constructSubGeometry,return )

 ::openfl::_Vector::FloatVector GeomUtil_obj::interleaveBuffers(int numVertices, ::openfl::_Vector::FloatVector vertices, ::openfl::_Vector::FloatVector normals, ::openfl::_Vector::FloatVector tangents, ::openfl::_Vector::FloatVector uvs, ::openfl::_Vector::FloatVector suvs){
            	HX_GC_STACKFRAME(&_hx_pos_8605ad05873dc753_196_interleaveBuffers)
HXLINE( 198)		int i = 0;
HXDLIN( 198)		int compIndex;
HXDLIN( 198)		int uvCompIndex;
HXDLIN( 198)		int interleavedCompIndex;
HXLINE( 201)		int length = null();
HXDLIN( 201)		bool fixed = null();
HXDLIN( 201)		::Array< Float > array = null();
HXLINE( 199)		 ::openfl::_Vector::FloatVector interleavedBuffer =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE( 210)		{
HXLINE( 210)			int _g = 0;
HXDLIN( 210)			int _g1 = numVertices;
HXDLIN( 210)			while((_g < _g1)){
HXLINE( 210)				_g = (_g + 1);
HXDLIN( 210)				int i = (_g - 1);
HXLINE( 211)				uvCompIndex = (i * 2);
HXLINE( 212)				compIndex = (i * 3);
HXLINE( 213)				interleavedCompIndex = (i * 13);
HXLINE( 214)				{
HXLINE( 214)					Float value;
HXDLIN( 214)					if (::hx::IsNotNull( vertices )) {
HXLINE( 214)						value = vertices->get(compIndex);
            					}
            					else {
HXLINE( 214)						value = ( (Float)(0) );
            					}
HXDLIN( 214)					interleavedBuffer->set(interleavedCompIndex,value);
            				}
HXLINE( 215)				{
HXLINE( 215)					Float value1;
HXDLIN( 215)					if (::hx::IsNotNull( vertices )) {
HXLINE( 215)						value1 = vertices->get((compIndex + 1));
            					}
            					else {
HXLINE( 215)						value1 = ( (Float)(0) );
            					}
HXDLIN( 215)					interleavedBuffer->set((interleavedCompIndex + 1),value1);
            				}
HXLINE( 216)				{
HXLINE( 216)					Float value2;
HXDLIN( 216)					if (::hx::IsNotNull( vertices )) {
HXLINE( 216)						value2 = vertices->get((compIndex + 2));
            					}
            					else {
HXLINE( 216)						value2 = ( (Float)(0) );
            					}
HXDLIN( 216)					interleavedBuffer->set((interleavedCompIndex + 2),value2);
            				}
HXLINE( 217)				{
HXLINE( 217)					Float value3;
HXDLIN( 217)					if (::hx::IsNotNull( normals )) {
HXLINE( 217)						value3 = normals->get(compIndex);
            					}
            					else {
HXLINE( 217)						value3 = ( (Float)(0) );
            					}
HXDLIN( 217)					interleavedBuffer->set((interleavedCompIndex + 3),value3);
            				}
HXLINE( 218)				{
HXLINE( 218)					Float value4;
HXDLIN( 218)					if (::hx::IsNotNull( normals )) {
HXLINE( 218)						value4 = normals->get((compIndex + 1));
            					}
            					else {
HXLINE( 218)						value4 = ( (Float)(0) );
            					}
HXDLIN( 218)					interleavedBuffer->set((interleavedCompIndex + 4),value4);
            				}
HXLINE( 219)				{
HXLINE( 219)					Float value5;
HXDLIN( 219)					if (::hx::IsNotNull( normals )) {
HXLINE( 219)						value5 = normals->get((compIndex + 2));
            					}
            					else {
HXLINE( 219)						value5 = ( (Float)(0) );
            					}
HXDLIN( 219)					interleavedBuffer->set((interleavedCompIndex + 5),value5);
            				}
HXLINE( 220)				{
HXLINE( 220)					Float value6;
HXDLIN( 220)					if (::hx::IsNotNull( tangents )) {
HXLINE( 220)						value6 = tangents->get(compIndex);
            					}
            					else {
HXLINE( 220)						value6 = ( (Float)(0) );
            					}
HXDLIN( 220)					interleavedBuffer->set((interleavedCompIndex + 6),value6);
            				}
HXLINE( 221)				{
HXLINE( 221)					Float value7;
HXDLIN( 221)					if (::hx::IsNotNull( tangents )) {
HXLINE( 221)						value7 = tangents->get((compIndex + 1));
            					}
            					else {
HXLINE( 221)						value7 = ( (Float)(0) );
            					}
HXDLIN( 221)					interleavedBuffer->set((interleavedCompIndex + 7),value7);
            				}
HXLINE( 222)				{
HXLINE( 222)					Float value8;
HXDLIN( 222)					if (::hx::IsNotNull( tangents )) {
HXLINE( 222)						value8 = tangents->get((compIndex + 2));
            					}
            					else {
HXLINE( 222)						value8 = ( (Float)(0) );
            					}
HXDLIN( 222)					interleavedBuffer->set((interleavedCompIndex + 8),value8);
            				}
HXLINE( 223)				{
HXLINE( 223)					Float value9;
HXDLIN( 223)					if (::hx::IsNotNull( uvs )) {
HXLINE( 223)						value9 = uvs->get(uvCompIndex);
            					}
            					else {
HXLINE( 223)						value9 = ( (Float)(0) );
            					}
HXDLIN( 223)					interleavedBuffer->set((interleavedCompIndex + 9),value9);
            				}
HXLINE( 224)				{
HXLINE( 224)					Float value10;
HXDLIN( 224)					if (::hx::IsNotNull( uvs )) {
HXLINE( 224)						value10 = uvs->get((uvCompIndex + 1));
            					}
            					else {
HXLINE( 224)						value10 = ( (Float)(0) );
            					}
HXDLIN( 224)					interleavedBuffer->set((interleavedCompIndex + 10),value10);
            				}
HXLINE( 225)				{
HXLINE( 225)					Float value11;
HXDLIN( 225)					if (::hx::IsNotNull( suvs )) {
HXLINE( 225)						value11 = suvs->get(uvCompIndex);
            					}
            					else {
HXLINE( 225)						value11 = ( (Float)(0) );
            					}
HXDLIN( 225)					interleavedBuffer->set((interleavedCompIndex + 11),value11);
            				}
HXLINE( 226)				{
HXLINE( 226)					Float value12;
HXDLIN( 226)					if (::hx::IsNotNull( suvs )) {
HXLINE( 226)						value12 = suvs->get((uvCompIndex + 1));
            					}
            					else {
HXLINE( 226)						value12 = ( (Float)(0) );
            					}
HXDLIN( 226)					interleavedBuffer->set((interleavedCompIndex + 12),value12);
            				}
            			}
            		}
HXLINE( 229)		return interleavedBuffer;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(GeomUtil_obj,interleaveBuffers,return )

int GeomUtil_obj::getMeshSubgeometryIndex(::Dynamic subGeometry){
            	HX_STACKFRAME(&_hx_pos_8605ad05873dc753_236_getMeshSubgeometryIndex)
HXLINE( 237)		int index = 0;
HXLINE( 238)		 ::openfl::_Vector::ObjectVector subGeometries = ::away3d::core::base::ISubGeometry_obj::get_parentGeometry(subGeometry)->get_subGeometries();
HXLINE( 239)		{
HXLINE( 239)			int _g = 0;
HXDLIN( 239)			int _g1 = subGeometries->get_length();
HXDLIN( 239)			while((_g < _g1)){
HXLINE( 239)				_g = (_g + 1);
HXDLIN( 239)				int i = (_g - 1);
HXLINE( 240)				if (::hx::IsInstanceEq( subGeometries->get(i),subGeometry )) {
HXLINE( 241)					index = i;
HXLINE( 242)					goto _hx_goto_8;
            				}
            			}
            			_hx_goto_8:;
            		}
HXLINE( 246)		return index;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GeomUtil_obj,getMeshSubgeometryIndex,return )

int GeomUtil_obj::getMeshSubMeshIndex( ::away3d::core::base::SubMesh subMesh){
            	HX_STACKFRAME(&_hx_pos_8605ad05873dc753_253_getMeshSubMeshIndex)
HXLINE( 254)		int index = 0;
HXLINE( 255)		 ::openfl::_Vector::ObjectVector subMeshes = subMesh->get_parentMesh()->get_subMeshes();
HXLINE( 256)		{
HXLINE( 256)			int _g = 0;
HXDLIN( 256)			int _g1 = subMeshes->get_length();
HXDLIN( 256)			while((_g < _g1)){
HXLINE( 256)				_g = (_g + 1);
HXDLIN( 256)				int i = (_g - 1);
HXLINE( 257)				if (::hx::IsInstanceEq( subMeshes->get(i).StaticCast<  ::away3d::core::base::SubMesh >(),subMesh )) {
HXLINE( 258)					index = i;
HXLINE( 259)					goto _hx_goto_10;
            				}
            			}
            			_hx_goto_10:;
            		}
HXLINE( 263)		return index;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GeomUtil_obj,getMeshSubMeshIndex,return )


GeomUtil_obj::GeomUtil_obj()
{
}

bool GeomUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"fromVectors") ) { outValue = fromVectors_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"interleaveBuffers") ) { outValue = interleaveBuffers_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getMeshSubMeshIndex") ) { outValue = getMeshSubMeshIndex_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"constructSubGeometry") ) { outValue = constructSubGeometry_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getMeshSubgeometryIndex") ) { outValue = getMeshSubgeometryIndex_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GeomUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo GeomUtil_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &GeomUtil_obj::LIMIT_VERTS,HX_("LIMIT_VERTS",1e,83,85,2c)},
	{::hx::fsInt,(void *) &GeomUtil_obj::LIMIT_INDICES,HX_("LIMIT_INDICES",a3,de,f4,e0)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void GeomUtil_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GeomUtil_obj::LIMIT_VERTS,"LIMIT_VERTS");
	HX_MARK_MEMBER_NAME(GeomUtil_obj::LIMIT_INDICES,"LIMIT_INDICES");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GeomUtil_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GeomUtil_obj::LIMIT_VERTS,"LIMIT_VERTS");
	HX_VISIT_MEMBER_NAME(GeomUtil_obj::LIMIT_INDICES,"LIMIT_INDICES");
};

#endif

::hx::Class GeomUtil_obj::__mClass;

static ::String GeomUtil_obj_sStaticFields[] = {
	HX_("LIMIT_VERTS",1e,83,85,2c),
	HX_("LIMIT_INDICES",a3,de,f4,e0),
	HX_("fromVectors",06,5e,dd,72),
	HX_("constructSubGeometry",7b,01,3f,f2),
	HX_("interleaveBuffers",58,2c,9a,68),
	HX_("getMeshSubgeometryIndex",43,f5,8b,97),
	HX_("getMeshSubMeshIndex",88,5a,3e,86),
	::String(null())
};

void GeomUtil_obj::__register()
{
	GeomUtil_obj _hx_dummy;
	GeomUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.tools.utils.GeomUtil",dd,bc,8f,95);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GeomUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GeomUtil_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GeomUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GeomUtil_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GeomUtil_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GeomUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GeomUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GeomUtil_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_8605ad05873dc753_12_boot)
HXDLIN(  12)		LIMIT_VERTS = 196605;
            	}
{
            	HX_STACKFRAME(&_hx_pos_8605ad05873dc753_13_boot)
HXDLIN(  13)		LIMIT_INDICES = 983025;
            	}
}

} // end namespace away3d
} // end namespace tools
} // end namespace utils
