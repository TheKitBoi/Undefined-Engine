#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_away3d_core_math_Matrix3DUtils
#include <away3d/core/math/Matrix3DUtils.h>
#endif
#ifndef INCLUDED_away3d_core_math_Plane3D
#include <away3d/core/math/Plane3D.h>
#endif
#ifndef INCLUDED_away3d_core_math_Quaternion
#include <away3d/core/math/Quaternion.h>
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
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_0380d8eaa131cb6b_26_quaternion2matrix,"away3d.core.math.Matrix3DUtils","quaternion2matrix",0x1f71db40,"away3d.core.math.Matrix3DUtils.quaternion2matrix","away3d/core/math/Matrix3DUtils.hx",26,0xcca64fa6)
HX_LOCAL_STACK_FRAME(_hx_pos_0380d8eaa131cb6b_71_getForward,"away3d.core.math.Matrix3DUtils","getForward",0x09b6ffc4,"away3d.core.math.Matrix3DUtils.getForward","away3d/core/math/Matrix3DUtils.hx",71,0xcca64fa6)
HX_LOCAL_STACK_FRAME(_hx_pos_0380d8eaa131cb6b_88_getUp,"away3d.core.math.Matrix3DUtils","getUp",0x636708bc,"away3d.core.math.Matrix3DUtils.getUp","away3d/core/math/Matrix3DUtils.hx",88,0xcca64fa6)
HX_LOCAL_STACK_FRAME(_hx_pos_0380d8eaa131cb6b_105_getRight,"away3d.core.math.Matrix3DUtils","getRight",0x7e6c5c1b,"away3d.core.math.Matrix3DUtils.getRight","away3d/core/math/Matrix3DUtils.hx",105,0xcca64fa6)
HX_LOCAL_STACK_FRAME(_hx_pos_0380d8eaa131cb6b_119_compare,"away3d.core.math.Matrix3DUtils","compare",0xb5032590,"away3d.core.math.Matrix3DUtils.compare","away3d/core/math/Matrix3DUtils.hx",119,0xcca64fa6)
HX_LOCAL_STACK_FRAME(_hx_pos_0380d8eaa131cb6b_132_lookAt,"away3d.core.math.Matrix3DUtils","lookAt",0x554daea7,"away3d.core.math.Matrix3DUtils.lookAt","away3d/core/math/Matrix3DUtils.hx",132,0xcca64fa6)
HX_LOCAL_STACK_FRAME(_hx_pos_0380d8eaa131cb6b_170_reflection,"away3d.core.math.Matrix3DUtils","reflection",0xb3cda5a0,"away3d.core.math.Matrix3DUtils.reflection","away3d/core/math/Matrix3DUtils.hx",170,0xcca64fa6)
HX_LOCAL_STACK_FRAME(_hx_pos_0380d8eaa131cb6b_202_decompose,"away3d.core.math.Matrix3DUtils","decompose",0xd08f215c,"away3d.core.math.Matrix3DUtils.decompose","away3d/core/math/Matrix3DUtils.hx",202,0xcca64fa6)
HX_LOCAL_STACK_FRAME(_hx_pos_0380d8eaa131cb6b_296_transformVector,"away3d.core.math.Matrix3DUtils","transformVector",0x22d49b3a,"away3d.core.math.Matrix3DUtils.transformVector","away3d/core/math/Matrix3DUtils.hx",296,0xcca64fa6)
HX_LOCAL_STACK_FRAME(_hx_pos_0380d8eaa131cb6b_328_deltaTransformVector,"away3d.core.math.Matrix3DUtils","deltaTransformVector",0xedc5fe6c,"away3d.core.math.Matrix3DUtils.deltaTransformVector","away3d/core/math/Matrix3DUtils.hx",328,0xcca64fa6)
HX_LOCAL_STACK_FRAME(_hx_pos_0380d8eaa131cb6b_355_getTranslation,"away3d.core.math.Matrix3DUtils","getTranslation",0x868eba70,"away3d.core.math.Matrix3DUtils.getTranslation","away3d/core/math/Matrix3DUtils.hx",355,0xcca64fa6)
HX_LOCAL_STACK_FRAME(_hx_pos_0380d8eaa131cb6b_362_deltaTransformVectors,"away3d.core.math.Matrix3DUtils","deltaTransformVectors",0x1f78a087,"away3d.core.math.Matrix3DUtils.deltaTransformVectors","away3d/core/math/Matrix3DUtils.hx",362,0xcca64fa6)
HX_LOCAL_STACK_FRAME(_hx_pos_0380d8eaa131cb6b_14_boot,"away3d.core.math.Matrix3DUtils","boot",0x79270667,"away3d.core.math.Matrix3DUtils.boot","away3d/core/math/Matrix3DUtils.hx",14,0xcca64fa6)
HX_LOCAL_STACK_FRAME(_hx_pos_0380d8eaa131cb6b_16_boot,"away3d.core.math.Matrix3DUtils","boot",0x79270667,"away3d.core.math.Matrix3DUtils.boot","away3d/core/math/Matrix3DUtils.hx",16,0xcca64fa6)
HX_LOCAL_STACK_FRAME(_hx_pos_0380d8eaa131cb6b_17_boot,"away3d.core.math.Matrix3DUtils","boot",0x79270667,"away3d.core.math.Matrix3DUtils.boot","away3d/core/math/Matrix3DUtils.hx",17,0xcca64fa6)
HX_LOCAL_STACK_FRAME(_hx_pos_0380d8eaa131cb6b_18_boot,"away3d.core.math.Matrix3DUtils","boot",0x79270667,"away3d.core.math.Matrix3DUtils.boot","away3d/core/math/Matrix3DUtils.hx",18,0xcca64fa6)
namespace away3d{
namespace core{
namespace math{

void Matrix3DUtils_obj::__construct() { }

Dynamic Matrix3DUtils_obj::__CreateEmpty() { return new Matrix3DUtils_obj; }

void *Matrix3DUtils_obj::_hx_vtable = 0;

Dynamic Matrix3DUtils_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Matrix3DUtils_obj > _hx_result = new Matrix3DUtils_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Matrix3DUtils_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x57772499;
}

 ::openfl::_Vector::FloatVector Matrix3DUtils_obj::RAW_DATA_CONTAINER;

 ::openfl::geom::Matrix3D Matrix3DUtils_obj::CALCULATION_MATRIX;

 ::openfl::geom::Vector3D Matrix3DUtils_obj::CALCULATION_VECTOR3D;

 ::openfl::_Vector::ObjectVector Matrix3DUtils_obj::CALCULATION_DECOMPOSE;

 ::openfl::geom::Matrix3D Matrix3DUtils_obj::quaternion2matrix( ::away3d::core::math::Quaternion quarternion, ::openfl::geom::Matrix3D m){
            	HX_GC_STACKFRAME(&_hx_pos_0380d8eaa131cb6b_26_quaternion2matrix)
HXLINE(  27)		Float x = quarternion->x;
HXLINE(  28)		Float y = quarternion->y;
HXLINE(  29)		Float z = quarternion->z;
HXLINE(  30)		Float w = quarternion->w;
HXLINE(  32)		Float xx = (x * x);
HXLINE(  33)		Float xy = (x * y);
HXLINE(  34)		Float xz = (x * z);
HXLINE(  35)		Float xw = (x * w);
HXLINE(  37)		Float yy = (y * y);
HXLINE(  38)		Float yz = (y * z);
HXLINE(  39)		Float yw = (y * w);
HXLINE(  41)		Float zz = (z * z);
HXLINE(  42)		Float zw = (z * w);
HXLINE(  44)		 ::openfl::_Vector::FloatVector raw = ::away3d::core::math::Matrix3DUtils_obj::RAW_DATA_CONTAINER;
HXLINE(  45)		raw->set(0,(( (Float)(1) ) - (( (Float)(2) ) * (yy + zz))));
HXLINE(  46)		raw->set(1,(( (Float)(2) ) * (xy + zw)));
HXLINE(  47)		raw->set(2,(( (Float)(2) ) * (xz - yw)));
HXLINE(  48)		raw->set(4,(( (Float)(2) ) * (xy - zw)));
HXLINE(  49)		raw->set(5,(( (Float)(1) ) - (( (Float)(2) ) * (xx + zz))));
HXLINE(  50)		raw->set(6,(( (Float)(2) ) * (yz + xw)));
HXLINE(  51)		raw->set(8,(( (Float)(2) ) * (xz + yw)));
HXLINE(  52)		raw->set(9,(( (Float)(2) ) * (yz - xw)));
HXLINE(  53)		raw->set(10,(( (Float)(1) ) - (( (Float)(2) ) * (xx + yy))));
HXLINE(  54)		raw->set(3,raw->set(7,raw->set(11,raw->set(12,raw->set(13,raw->set(14,( (Float)(0) )))))));
HXLINE(  55)		raw->set(15,( (Float)(1) ));
HXLINE(  57)		if (::hx::IsNotNull( m )) {
HXLINE(  58)			m->copyRawDataFrom(raw,null(),null());
HXLINE(  59)			return m;
            		}
            		else {
HXLINE(  61)			return  ::openfl::geom::Matrix3D_obj::__alloc( HX_CTX ,raw);
            		}
HXLINE(  57)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix3DUtils_obj,quaternion2matrix,return )

 ::openfl::geom::Vector3D Matrix3DUtils_obj::getForward( ::openfl::geom::Matrix3D m, ::openfl::geom::Vector3D v){
            	HX_GC_STACKFRAME(&_hx_pos_0380d8eaa131cb6b_71_getForward)
HXLINE(  72)		if (::hx::IsNull( v )) {
HXLINE(  73)			v =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,((Float)0.0),((Float)0.0),((Float)0.0),null());
            		}
HXLINE(  75)		m->copyColumnTo(2,v);
HXLINE(  76)		v->normalize();
HXLINE(  78)		return v;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix3DUtils_obj,getForward,return )

 ::openfl::geom::Vector3D Matrix3DUtils_obj::getUp( ::openfl::geom::Matrix3D m, ::openfl::geom::Vector3D v){
            	HX_GC_STACKFRAME(&_hx_pos_0380d8eaa131cb6b_88_getUp)
HXLINE(  89)		if (::hx::IsNull( v )) {
HXLINE(  90)			v =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,((Float)0.0),((Float)0.0),((Float)0.0),null());
            		}
HXLINE(  92)		m->copyColumnTo(1,v);
HXLINE(  93)		v->normalize();
HXLINE(  95)		return v;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix3DUtils_obj,getUp,return )

 ::openfl::geom::Vector3D Matrix3DUtils_obj::getRight( ::openfl::geom::Matrix3D m, ::openfl::geom::Vector3D v){
            	HX_GC_STACKFRAME(&_hx_pos_0380d8eaa131cb6b_105_getRight)
HXLINE( 106)		if (::hx::IsNull( v )) {
HXLINE( 107)			v =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,((Float)0.0),((Float)0.0),((Float)0.0),null());
            		}
HXLINE( 109)		m->copyColumnTo(0,v);
HXLINE( 110)		v->normalize();
HXLINE( 112)		return v;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix3DUtils_obj,getRight,return )

bool Matrix3DUtils_obj::compare( ::openfl::geom::Matrix3D m1, ::openfl::geom::Matrix3D m2){
            	HX_STACKFRAME(&_hx_pos_0380d8eaa131cb6b_119_compare)
HXLINE( 120)		 ::openfl::_Vector::FloatVector r1 = ::away3d::core::math::Matrix3DUtils_obj::RAW_DATA_CONTAINER;
HXLINE( 121)		 ::openfl::_Vector::FloatVector r2 = m2->rawData;
HXLINE( 122)		m1->copyRawDataTo(r1,null(),null());
HXLINE( 124)		{
HXLINE( 125)			Float _hx_tmp = r1->get(0);
HXDLIN( 125)			if ((_hx_tmp != r2->get(0))) {
HXLINE( 126)				return false;
            			}
HXLINE( 125)			Float _hx_tmp1 = r1->get(1);
HXDLIN( 125)			if ((_hx_tmp1 != r2->get(1))) {
HXLINE( 126)				return false;
            			}
HXLINE( 125)			Float _hx_tmp2 = r1->get(2);
HXDLIN( 125)			if ((_hx_tmp2 != r2->get(2))) {
HXLINE( 126)				return false;
            			}
HXLINE( 125)			Float _hx_tmp3 = r1->get(3);
HXDLIN( 125)			if ((_hx_tmp3 != r2->get(3))) {
HXLINE( 126)				return false;
            			}
HXLINE( 125)			Float _hx_tmp4 = r1->get(4);
HXDLIN( 125)			if ((_hx_tmp4 != r2->get(4))) {
HXLINE( 126)				return false;
            			}
HXLINE( 125)			Float _hx_tmp5 = r1->get(5);
HXDLIN( 125)			if ((_hx_tmp5 != r2->get(5))) {
HXLINE( 126)				return false;
            			}
HXLINE( 125)			Float _hx_tmp6 = r1->get(6);
HXDLIN( 125)			if ((_hx_tmp6 != r2->get(6))) {
HXLINE( 126)				return false;
            			}
HXLINE( 125)			Float _hx_tmp7 = r1->get(7);
HXDLIN( 125)			if ((_hx_tmp7 != r2->get(7))) {
HXLINE( 126)				return false;
            			}
HXLINE( 125)			Float _hx_tmp8 = r1->get(8);
HXDLIN( 125)			if ((_hx_tmp8 != r2->get(8))) {
HXLINE( 126)				return false;
            			}
HXLINE( 125)			Float _hx_tmp9 = r1->get(9);
HXDLIN( 125)			if ((_hx_tmp9 != r2->get(9))) {
HXLINE( 126)				return false;
            			}
HXLINE( 125)			Float _hx_tmp10 = r1->get(10);
HXDLIN( 125)			if ((_hx_tmp10 != r2->get(10))) {
HXLINE( 126)				return false;
            			}
HXLINE( 125)			Float _hx_tmp11 = r1->get(11);
HXDLIN( 125)			if ((_hx_tmp11 != r2->get(11))) {
HXLINE( 126)				return false;
            			}
HXLINE( 125)			Float _hx_tmp12 = r1->get(12);
HXDLIN( 125)			if ((_hx_tmp12 != r2->get(12))) {
HXLINE( 126)				return false;
            			}
HXLINE( 125)			Float _hx_tmp13 = r1->get(13);
HXDLIN( 125)			if ((_hx_tmp13 != r2->get(13))) {
HXLINE( 126)				return false;
            			}
HXLINE( 125)			Float _hx_tmp14 = r1->get(14);
HXDLIN( 125)			if ((_hx_tmp14 != r2->get(14))) {
HXLINE( 126)				return false;
            			}
HXLINE( 125)			Float _hx_tmp15 = r1->get(15);
HXDLIN( 125)			if ((_hx_tmp15 != r2->get(15))) {
HXLINE( 126)				return false;
            			}
            		}
HXLINE( 129)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix3DUtils_obj,compare,return )

void Matrix3DUtils_obj::lookAt( ::openfl::geom::Matrix3D matrix, ::openfl::geom::Vector3D pos, ::openfl::geom::Vector3D dir, ::openfl::geom::Vector3D up){
            	HX_STACKFRAME(&_hx_pos_0380d8eaa131cb6b_132_lookAt)
HXLINE( 136)		 ::openfl::_Vector::FloatVector raw = ::away3d::core::math::Matrix3DUtils_obj::RAW_DATA_CONTAINER;
HXLINE( 135)		 ::openfl::geom::Vector3D lftN = dir->crossProduct(up);
HXLINE( 139)		lftN->normalize();
HXLINE( 134)		 ::openfl::geom::Vector3D upN = lftN->crossProduct(dir);
HXLINE( 142)		upN->normalize();
HXLINE( 133)		 ::openfl::geom::Vector3D dirN = dir->clone();
HXLINE( 144)		dirN->normalize();
HXLINE( 146)		raw->set(0,lftN->x);
HXLINE( 147)		raw->set(1,upN->x);
HXLINE( 148)		raw->set(2,-(dirN->x));
HXLINE( 149)		raw->set(3,((Float)0.0));
HXLINE( 151)		raw->set(4,lftN->y);
HXLINE( 152)		raw->set(5,upN->y);
HXLINE( 153)		raw->set(6,-(dirN->y));
HXLINE( 154)		raw->set(7,((Float)0.0));
HXLINE( 156)		raw->set(8,lftN->z);
HXLINE( 157)		raw->set(9,upN->z);
HXLINE( 158)		raw->set(10,-(dirN->z));
HXLINE( 159)		raw->set(11,((Float)0.0));
HXLINE( 161)		raw->set(12,-(lftN->dotProduct(pos)));
HXLINE( 162)		raw->set(13,-(upN->dotProduct(pos)));
HXLINE( 163)		raw->set(14,dirN->dotProduct(pos));
HXLINE( 164)		raw->set(15,((Float)1.0));
HXLINE( 166)		matrix->copyRawDataFrom(raw,null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix3DUtils_obj,lookAt,(void))

 ::openfl::geom::Matrix3D Matrix3DUtils_obj::reflection( ::away3d::core::math::Plane3D plane, ::openfl::geom::Matrix3D target){
            	HX_GC_STACKFRAME(&_hx_pos_0380d8eaa131cb6b_170_reflection)
HXLINE( 171)		if (::hx::IsNull( target )) {
HXLINE( 172)			target =  ::openfl::geom::Matrix3D_obj::__alloc( HX_CTX ,null());
            		}
HXLINE( 174)		Float a = plane->a;
HXDLIN( 174)		Float b = plane->b;
HXDLIN( 174)		Float c = plane->c;
HXDLIN( 174)		Float d = plane->d;
HXLINE( 175)		 ::openfl::_Vector::FloatVector rawData = ::away3d::core::math::Matrix3DUtils_obj::RAW_DATA_CONTAINER;
HXLINE( 176)		Float ab2 = ((( (Float)(-2) ) * a) * b);
HXLINE( 177)		Float ac2 = ((( (Float)(-2) ) * a) * c);
HXLINE( 178)		Float bc2 = ((( (Float)(-2) ) * b) * c);
HXLINE( 180)		rawData->set(0,(( (Float)(1) ) - ((( (Float)(2) ) * a) * a)));
HXLINE( 181)		rawData->set(4,ab2);
HXLINE( 182)		rawData->set(8,ac2);
HXLINE( 183)		rawData->set(12,((( (Float)(-2) ) * a) * d));
HXLINE( 184)		rawData->set(1,ab2);
HXLINE( 185)		rawData->set(5,(( (Float)(1) ) - ((( (Float)(2) ) * b) * b)));
HXLINE( 186)		rawData->set(9,bc2);
HXLINE( 187)		rawData->set(13,((( (Float)(-2) ) * b) * d));
HXLINE( 188)		rawData->set(2,ac2);
HXLINE( 189)		rawData->set(6,bc2);
HXLINE( 190)		rawData->set(10,(( (Float)(1) ) - ((( (Float)(2) ) * c) * c)));
HXLINE( 191)		rawData->set(14,((( (Float)(-2) ) * c) * d));
HXLINE( 192)		rawData->set(3,( (Float)(0) ));
HXLINE( 193)		rawData->set(7,( (Float)(0) ));
HXLINE( 194)		rawData->set(11,( (Float)(0) ));
HXLINE( 195)		rawData->set(15,( (Float)(1) ));
HXLINE( 196)		target->copyRawDataFrom(rawData,null(),null());
HXLINE( 198)		return target;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix3DUtils_obj,reflection,return )

 ::openfl::_Vector::ObjectVector Matrix3DUtils_obj::decompose( ::openfl::geom::Matrix3D sourceMatrix, ::Dynamic __o_orientationStyle){
            		 ::Dynamic orientationStyle = __o_orientationStyle;
            		if (::hx::IsNull(__o_orientationStyle)) orientationStyle = 1;
            	HX_STACKFRAME(&_hx_pos_0380d8eaa131cb6b_202_decompose)
HXLINE( 203)		 ::openfl::_Vector::FloatVector raw = ::away3d::core::math::Matrix3DUtils_obj::RAW_DATA_CONTAINER;
HXLINE( 204)		sourceMatrix->copyRawDataTo(raw,null(),null());
HXLINE( 206)		Float a = raw->get(0);
HXLINE( 207)		Float e = raw->get(1);
HXLINE( 208)		Float i = raw->get(2);
HXLINE( 209)		Float b = raw->get(4);
HXLINE( 210)		Float f = raw->get(5);
HXLINE( 211)		Float j = raw->get(6);
HXLINE( 212)		Float c = raw->get(8);
HXLINE( 213)		Float g = raw->get(9);
HXLINE( 214)		Float k = raw->get(10);
HXLINE( 216)		Float x = raw->get(12);
HXLINE( 217)		Float y = raw->get(13);
HXLINE( 218)		Float z = raw->get(14);
HXLINE( 220)		Float tx = ::Math_obj::sqrt((((a * a) + (e * e)) + (i * i)));
HXLINE( 221)		Float ty = ::Math_obj::sqrt((((b * b) + (f * f)) + (j * j)));
HXLINE( 222)		Float tz = ::Math_obj::sqrt((((c * c) + (g * g)) + (k * k)));
HXLINE( 223)		Float tw = ( (Float)(0) );
HXLINE( 225)		Float scaleX = tx;
HXLINE( 226)		Float scaleY = ty;
HXLINE( 227)		Float scaleZ = tz;
HXLINE( 229)		if (((((a * ((f * k) - (j * g))) - (e * ((b * k) - (j * c)))) + (i * ((b * g) - (f * c)))) < 0)) {
HXLINE( 230)			scaleZ = -(scaleZ);
            		}
HXLINE( 233)		a = (a / scaleX);
HXLINE( 234)		e = (e / scaleX);
HXLINE( 235)		i = (i / scaleX);
HXLINE( 236)		b = (b / scaleY);
HXLINE( 237)		f = (f / scaleY);
HXLINE( 238)		j = (j / scaleY);
HXLINE( 239)		c = (c / scaleZ);
HXLINE( 240)		g = (g / scaleZ);
HXLINE( 241)		k = (k / scaleZ);
HXLINE( 244)		if (::hx::IsEq( orientationStyle,1 )) {
HXLINE( 245)			tx = ::Math_obj::atan2(j,k);
HXLINE( 246)			ty = ::Math_obj::atan2(-(i),::Math_obj::sqrt(((a * a) + (e * e))));
HXLINE( 247)			Float s1 = ::Math_obj::sin(tx);
HXLINE( 248)			Float c1 = ::Math_obj::cos(tx);
HXLINE( 249)			tz = ::Math_obj::atan2(((s1 * c) - (c1 * b)),((c1 * f) - (s1 * g)));
            		}
            		else {
HXLINE( 250)			if (::hx::IsEq( orientationStyle,0 )) {
HXLINE( 251)				tw = ::Math_obj::acos(((((a + f) + k) - ( (Float)(1) )) / ( (Float)(2) )));
HXLINE( 252)				Float len = ::Math_obj::sqrt(((((j - g) * (j - g)) + ((c - i) * (c - i))) + ((e - b) * (e - b))));
HXLINE( 253)				tx = ((j - g) / len);
HXLINE( 254)				ty = ((c - i) / len);
HXLINE( 255)				tz = ((e - b) / len);
            			}
            			else {
HXLINE( 257)				Float tr = ((a + f) + k);
HXLINE( 258)				if ((tr > 0)) {
HXLINE( 259)					tw = (::Math_obj::sqrt((1 + tr)) / ( (Float)(2) ));
HXLINE( 260)					tx = ((j - g) / (( (Float)(4) ) * tw));
HXLINE( 261)					ty = ((c - i) / (( (Float)(4) ) * tw));
HXLINE( 262)					tz = ((e - b) / (( (Float)(4) ) * tw));
            				}
            				else {
HXLINE( 263)					bool _hx_tmp;
HXDLIN( 263)					if ((a > f)) {
HXLINE( 263)						_hx_tmp = (a > k);
            					}
            					else {
HXLINE( 263)						_hx_tmp = false;
            					}
HXDLIN( 263)					if (_hx_tmp) {
HXLINE( 264)						tx = (::Math_obj::sqrt((((1 + a) - f) - k)) / ( (Float)(2) ));
HXLINE( 265)						tw = ((j - g) / (( (Float)(4) ) * tx));
HXLINE( 266)						ty = ((e + b) / (( (Float)(4) ) * tx));
HXLINE( 267)						tz = ((c + i) / (( (Float)(4) ) * tx));
            					}
            					else {
HXLINE( 268)						if ((f > k)) {
HXLINE( 269)							ty = (::Math_obj::sqrt((((1 + f) - a) - k)) / ( (Float)(2) ));
HXLINE( 270)							tx = ((e + b) / (( (Float)(4) ) * ty));
HXLINE( 271)							tw = ((c - i) / (( (Float)(4) ) * ty));
HXLINE( 272)							tz = ((j + g) / (( (Float)(4) ) * ty));
            						}
            						else {
HXLINE( 274)							tz = (::Math_obj::sqrt((((1 + k) - a) - f)) / ( (Float)(2) ));
HXLINE( 275)							tx = ((c + i) / (( (Float)(4) ) * tz));
HXLINE( 276)							ty = ((j + g) / (( (Float)(4) ) * tz));
HXLINE( 277)							tw = ((e - b) / (( (Float)(4) ) * tz));
            						}
            					}
            				}
            			}
            		}
HXLINE( 281)		 ::openfl::_Vector::ObjectVector v = ::away3d::core::math::Matrix3DUtils_obj::CALCULATION_DECOMPOSE;
HXLINE( 282)		v->get(0).StaticCast<  ::openfl::geom::Vector3D >()->x = x;
HXLINE( 283)		v->get(0).StaticCast<  ::openfl::geom::Vector3D >()->y = y;
HXLINE( 284)		v->get(0).StaticCast<  ::openfl::geom::Vector3D >()->z = z;
HXLINE( 285)		v->get(1).StaticCast<  ::openfl::geom::Vector3D >()->x = tx;
HXLINE( 286)		v->get(1).StaticCast<  ::openfl::geom::Vector3D >()->y = ty;
HXLINE( 287)		v->get(1).StaticCast<  ::openfl::geom::Vector3D >()->z = tz;
HXLINE( 288)		v->get(1).StaticCast<  ::openfl::geom::Vector3D >()->w = tw;
HXLINE( 289)		v->get(2).StaticCast<  ::openfl::geom::Vector3D >()->x = scaleX;
HXLINE( 290)		v->get(2).StaticCast<  ::openfl::geom::Vector3D >()->y = scaleY;
HXLINE( 291)		v->get(2).StaticCast<  ::openfl::geom::Vector3D >()->z = scaleZ;
HXLINE( 292)		return v;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix3DUtils_obj,decompose,return )

 ::openfl::geom::Vector3D Matrix3DUtils_obj::transformVector( ::openfl::geom::Matrix3D matrix, ::openfl::geom::Vector3D vector, ::openfl::geom::Vector3D result){
            	HX_GC_STACKFRAME(&_hx_pos_0380d8eaa131cb6b_296_transformVector)
HXLINE( 297)		if (::hx::IsNull( result )) {
HXLINE( 297)			result =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE( 298)		 ::openfl::_Vector::FloatVector raw = ::away3d::core::math::Matrix3DUtils_obj::RAW_DATA_CONTAINER;
HXLINE( 299)		matrix->copyRawDataTo(raw,null(),null());
HXLINE( 300)		Float a = raw->get(0);
HXLINE( 301)		Float e = raw->get(1);
HXLINE( 302)		Float i = raw->get(2);
HXLINE( 303)		Float m = raw->get(3);
HXLINE( 304)		Float b = raw->get(4);
HXLINE( 305)		Float f = raw->get(5);
HXLINE( 306)		Float j = raw->get(6);
HXLINE( 307)		Float n = raw->get(7);
HXLINE( 308)		Float c = raw->get(8);
HXLINE( 309)		Float g = raw->get(9);
HXLINE( 310)		Float k = raw->get(10);
HXLINE( 311)		Float o = raw->get(11);
HXLINE( 312)		Float d = raw->get(12);
HXLINE( 313)		Float h = raw->get(13);
HXLINE( 314)		Float l = raw->get(14);
HXLINE( 315)		Float p = raw->get(15);
HXLINE( 317)		Float x = vector->x;
HXLINE( 318)		Float y = vector->y;
HXLINE( 319)		Float z = vector->z;
HXLINE( 320)		result->x = ((((a * x) + (b * y)) + (c * z)) + d);
HXLINE( 321)		result->y = ((((e * x) + (f * y)) + (g * z)) + h);
HXLINE( 322)		result->z = ((((i * x) + (j * y)) + (k * z)) + l);
HXLINE( 323)		result->w = ((((m * x) + (n * y)) + (o * z)) + p);
HXLINE( 324)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix3DUtils_obj,transformVector,return )

 ::openfl::geom::Vector3D Matrix3DUtils_obj::deltaTransformVector( ::openfl::geom::Matrix3D matrix, ::openfl::geom::Vector3D vector, ::openfl::geom::Vector3D result){
            	HX_GC_STACKFRAME(&_hx_pos_0380d8eaa131cb6b_328_deltaTransformVector)
HXLINE( 329)		if (::hx::IsNull( result )) {
HXLINE( 329)			result =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE( 330)		 ::openfl::_Vector::FloatVector raw = ::away3d::core::math::Matrix3DUtils_obj::RAW_DATA_CONTAINER;
HXLINE( 331)		matrix->copyRawDataTo(raw,null(),null());
HXLINE( 332)		Float a = raw->get(0);
HXLINE( 333)		Float e = raw->get(1);
HXLINE( 334)		Float i = raw->get(2);
HXLINE( 335)		Float m = raw->get(3);
HXLINE( 336)		Float b = raw->get(4);
HXLINE( 337)		Float f = raw->get(5);
HXLINE( 338)		Float j = raw->get(6);
HXLINE( 339)		Float n = raw->get(7);
HXLINE( 340)		Float c = raw->get(8);
HXLINE( 341)		Float g = raw->get(9);
HXLINE( 342)		Float k = raw->get(10);
HXLINE( 343)		Float o = raw->get(11);
HXLINE( 344)		Float x = vector->x;
HXLINE( 345)		Float y = vector->y;
HXLINE( 346)		Float z = vector->z;
HXLINE( 347)		result->x = (((a * x) + (b * y)) + (c * z));
HXLINE( 348)		result->y = (((e * x) + (f * y)) + (g * z));
HXLINE( 349)		result->z = (((i * x) + (j * y)) + (k * z));
HXLINE( 350)		result->w = (((m * x) + (n * y)) + (o * z));
HXLINE( 351)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix3DUtils_obj,deltaTransformVector,return )

 ::openfl::geom::Vector3D Matrix3DUtils_obj::getTranslation( ::openfl::geom::Matrix3D transform, ::openfl::geom::Vector3D result){
            	HX_GC_STACKFRAME(&_hx_pos_0380d8eaa131cb6b_355_getTranslation)
HXLINE( 356)		if (::hx::IsNull( result )) {
HXLINE( 356)			result =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE( 357)		transform->copyColumnTo(3,result);
HXLINE( 358)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix3DUtils_obj,getTranslation,return )

void Matrix3DUtils_obj::deltaTransformVectors( ::openfl::geom::Matrix3D matrix, ::openfl::_Vector::FloatVector vin, ::openfl::_Vector::FloatVector vout){
            	HX_STACKFRAME(&_hx_pos_0380d8eaa131cb6b_362_deltaTransformVectors)
HXLINE( 363)		 ::openfl::_Vector::FloatVector raw = ::away3d::core::math::Matrix3DUtils_obj::RAW_DATA_CONTAINER;
HXLINE( 364)		matrix->copyRawDataTo(raw,null(),null());
HXLINE( 365)		Float a = raw->get(0);
HXLINE( 366)		Float e = raw->get(1);
HXLINE( 367)		Float i = raw->get(2);
HXLINE( 368)		Float m = raw->get(3);
HXLINE( 369)		Float b = raw->get(4);
HXLINE( 370)		Float f = raw->get(5);
HXLINE( 371)		Float j = raw->get(6);
HXLINE( 372)		Float n = raw->get(7);
HXLINE( 373)		Float c = raw->get(8);
HXLINE( 374)		Float g = raw->get(9);
HXLINE( 375)		Float k = raw->get(10);
HXLINE( 376)		Float o = raw->get(11);
HXLINE( 377)		int outIndex = 0;
HXLINE( 378)		Float length = ( (Float)(vin->get_length()) );
HXLINE( 379)		int index = 0;
HXLINE( 380)		while((index < length)){
HXLINE( 381)			Float x = vin->get(index);
HXLINE( 382)			Float y = vin->get((index + 1));
HXLINE( 383)			Float z = vin->get((index + 2));
HXLINE( 384)			{
HXLINE( 384)				outIndex = (outIndex + 1);
HXDLIN( 384)				vout->set((outIndex - 1),(((a * x) + (b * y)) + (c * z)));
            			}
HXLINE( 385)			{
HXLINE( 385)				outIndex = (outIndex + 1);
HXDLIN( 385)				vout->set((outIndex - 1),(((e * x) + (f * y)) + (g * z)));
            			}
HXLINE( 386)			{
HXLINE( 386)				outIndex = (outIndex + 1);
HXDLIN( 386)				vout->set((outIndex - 1),(((i * x) + (j * y)) + (k * z)));
            			}
HXLINE( 387)			index = (index + 3);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix3DUtils_obj,deltaTransformVectors,(void))


Matrix3DUtils_obj::Matrix3DUtils_obj()
{
}

bool Matrix3DUtils_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"getUp") ) { outValue = getUp_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"lookAt") ) { outValue = lookAt_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { outValue = compare_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getRight") ) { outValue = getRight_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"decompose") ) { outValue = decompose_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getForward") ) { outValue = getForward_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"reflection") ) { outValue = reflection_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getTranslation") ) { outValue = getTranslation_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"transformVector") ) { outValue = transformVector_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"quaternion2matrix") ) { outValue = quaternion2matrix_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"RAW_DATA_CONTAINER") ) { outValue = ( RAW_DATA_CONTAINER ); return true; }
		if (HX_FIELD_EQ(inName,"CALCULATION_MATRIX") ) { outValue = ( CALCULATION_MATRIX ); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"CALCULATION_VECTOR3D") ) { outValue = ( CALCULATION_VECTOR3D ); return true; }
		if (HX_FIELD_EQ(inName,"deltaTransformVector") ) { outValue = deltaTransformVector_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"CALCULATION_DECOMPOSE") ) { outValue = ( CALCULATION_DECOMPOSE ); return true; }
		if (HX_FIELD_EQ(inName,"deltaTransformVectors") ) { outValue = deltaTransformVectors_dyn(); return true; }
	}
	return false;
}

bool Matrix3DUtils_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"RAW_DATA_CONTAINER") ) { RAW_DATA_CONTAINER=ioValue.Cast<  ::openfl::_Vector::FloatVector >(); return true; }
		if (HX_FIELD_EQ(inName,"CALCULATION_MATRIX") ) { CALCULATION_MATRIX=ioValue.Cast<  ::openfl::geom::Matrix3D >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"CALCULATION_VECTOR3D") ) { CALCULATION_VECTOR3D=ioValue.Cast<  ::openfl::geom::Vector3D >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"CALCULATION_DECOMPOSE") ) { CALCULATION_DECOMPOSE=ioValue.Cast<  ::openfl::_Vector::ObjectVector >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Matrix3DUtils_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Matrix3DUtils_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(void *) &Matrix3DUtils_obj::RAW_DATA_CONTAINER,HX_("RAW_DATA_CONTAINER",63,af,4a,ec)},
	{::hx::fsObject /*  ::openfl::geom::Matrix3D */ ,(void *) &Matrix3DUtils_obj::CALCULATION_MATRIX,HX_("CALCULATION_MATRIX",17,22,5b,bb)},
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(void *) &Matrix3DUtils_obj::CALCULATION_VECTOR3D,HX_("CALCULATION_VECTOR3D",8a,e1,c3,a9)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(void *) &Matrix3DUtils_obj::CALCULATION_DECOMPOSE,HX_("CALCULATION_DECOMPOSE",7b,fd,d4,e4)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Matrix3DUtils_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Matrix3DUtils_obj::RAW_DATA_CONTAINER,"RAW_DATA_CONTAINER");
	HX_MARK_MEMBER_NAME(Matrix3DUtils_obj::CALCULATION_MATRIX,"CALCULATION_MATRIX");
	HX_MARK_MEMBER_NAME(Matrix3DUtils_obj::CALCULATION_VECTOR3D,"CALCULATION_VECTOR3D");
	HX_MARK_MEMBER_NAME(Matrix3DUtils_obj::CALCULATION_DECOMPOSE,"CALCULATION_DECOMPOSE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Matrix3DUtils_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Matrix3DUtils_obj::RAW_DATA_CONTAINER,"RAW_DATA_CONTAINER");
	HX_VISIT_MEMBER_NAME(Matrix3DUtils_obj::CALCULATION_MATRIX,"CALCULATION_MATRIX");
	HX_VISIT_MEMBER_NAME(Matrix3DUtils_obj::CALCULATION_VECTOR3D,"CALCULATION_VECTOR3D");
	HX_VISIT_MEMBER_NAME(Matrix3DUtils_obj::CALCULATION_DECOMPOSE,"CALCULATION_DECOMPOSE");
};

#endif

::hx::Class Matrix3DUtils_obj::__mClass;

static ::String Matrix3DUtils_obj_sStaticFields[] = {
	HX_("RAW_DATA_CONTAINER",63,af,4a,ec),
	HX_("CALCULATION_MATRIX",17,22,5b,bb),
	HX_("CALCULATION_VECTOR3D",8a,e1,c3,a9),
	HX_("CALCULATION_DECOMPOSE",7b,fd,d4,e4),
	HX_("quaternion2matrix",95,5a,24,70),
	HX_("getForward",cf,67,2c,35),
	HX_("getUp",91,9c,60,91),
	HX_("getRight",66,1b,3b,49),
	HX_("compare",a5,18,69,83),
	HX_("lookAt",32,75,b5,61),
	HX_("reflection",ab,0d,43,df),
	HX_("decompose",b1,c3,a7,7a),
	HX_("transformVector",4f,2b,b3,d2),
	HX_("deltaTransformVector",37,02,9c,c2),
	HX_("getTranslation",fb,83,40,12),
	HX_("deltaTransformVectors",5c,ee,e5,85),
	::String(null())
};

void Matrix3DUtils_obj::__register()
{
	Matrix3DUtils_obj _hx_dummy;
	Matrix3DUtils_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.math.Matrix3DUtils",59,0a,82,d4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Matrix3DUtils_obj::__GetStatic;
	__mClass->mSetStaticField = &Matrix3DUtils_obj::__SetStatic;
	__mClass->mMarkFunc = Matrix3DUtils_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Matrix3DUtils_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Matrix3DUtils_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Matrix3DUtils_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Matrix3DUtils_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Matrix3DUtils_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Matrix3DUtils_obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::openfl::_Vector::FloatVector _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_0380d8eaa131cb6b_14_boot)
HXDLIN(  14)			bool fixed = null();
HXDLIN(  14)			::Array< Float > array = null();
HXDLIN(  14)			return  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,16,fixed,array,true);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_0380d8eaa131cb6b_14_boot)
HXDLIN(  14)		RAW_DATA_CONTAINER = ( ( ::openfl::_Vector::FloatVector)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_0380d8eaa131cb6b_16_boot)
HXDLIN(  16)		CALCULATION_MATRIX =  ::openfl::geom::Matrix3D_obj::__alloc( HX_CTX ,null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_0380d8eaa131cb6b_17_boot)
HXDLIN(  17)		CALCULATION_VECTOR3D =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::openfl::_Vector::ObjectVector _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_0380d8eaa131cb6b_18_boot)
HXDLIN(  18)			 ::openfl::geom::Vector3D array =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXDLIN(  18)			 ::openfl::geom::Vector3D array1 =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXDLIN(  18)			::Array< ::Dynamic> array2 = ::Array_obj< ::Dynamic>::__new(3)->init(0,array)->init(1,array1)->init(2, ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null()));
HXDLIN(  18)			int length = null();
HXDLIN(  18)			bool fixed = null();
HXDLIN(  18)			::Array< ::Dynamic> array3 = null();
HXDLIN(  18)			 ::openfl::_Vector::ObjectVector vector =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,array3,true);
HXDLIN(  18)			{
HXDLIN(  18)				int _g = 0;
HXDLIN(  18)				int _g1 = array2->length;
HXDLIN(  18)				while((_g < _g1)){
HXDLIN(  18)					_g = (_g + 1);
HXDLIN(  18)					int i = (_g - 1);
HXDLIN(  18)					vector->set(i,array2->__get(i).StaticCast<  ::openfl::geom::Vector3D >()).StaticCast<  ::openfl::geom::Vector3D >();
            				}
            			}
HXDLIN(  18)			return vector;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_0380d8eaa131cb6b_18_boot)
HXDLIN(  18)		CALCULATION_DECOMPOSE = ( ( ::openfl::_Vector::ObjectVector)( ::Dynamic(new _hx_Closure_0())()) );
            	}
}

} // end namespace away3d
} // end namespace core
} // end namespace math
