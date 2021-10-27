#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_away3d_core_math_Matrix3DUtils
#include <away3d/core/math/Matrix3DUtils.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_aabe1fb0ce0ef0e2_43_new,"away3d.core.math.Quaternion","new",0xc3d7bd16,"away3d.core.math.Quaternion.new","away3d/core/math/Quaternion.hx",43,0x247c3ed9)
HX_LOCAL_STACK_FRAME(_hx_pos_aabe1fb0ce0ef0e2_55_get_magnitude,"away3d.core.math.Quaternion","get_magnitude",0xc50b33dd,"away3d.core.math.Quaternion.get_magnitude","away3d/core/math/Quaternion.hx",55,0x247c3ed9)
HX_LOCAL_STACK_FRAME(_hx_pos_aabe1fb0ce0ef0e2_65_multiply,"away3d.core.math.Quaternion","multiply",0x3a4521ae,"away3d.core.math.Quaternion.multiply","away3d/core/math/Quaternion.hx",65,0x247c3ed9)
HX_LOCAL_STACK_FRAME(_hx_pos_aabe1fb0ce0ef0e2_76_multiplyVector,"away3d.core.math.Quaternion","multiplyVector",0x0fdcbd11,"away3d.core.math.Quaternion.multiplyVector","away3d/core/math/Quaternion.hx",76,0x247c3ed9)
HX_LOCAL_STACK_FRAME(_hx_pos_aabe1fb0ce0ef0e2_99_fromAxisAngle,"away3d.core.math.Quaternion","fromAxisAngle",0xfeb298de,"away3d.core.math.Quaternion.fromAxisAngle","away3d/core/math/Quaternion.hx",99,0x247c3ed9)
HX_LOCAL_STACK_FRAME(_hx_pos_aabe1fb0ce0ef0e2_117_slerp,"away3d.core.math.Quaternion","slerp",0x1ca5cea0,"away3d.core.math.Quaternion.slerp","away3d/core/math/Quaternion.hx",117,0x247c3ed9)
HX_LOCAL_STACK_FRAME(_hx_pos_aabe1fb0ce0ef0e2_162_lerp,"away3d.core.math.Quaternion","lerp",0x979b4501,"away3d.core.math.Quaternion.lerp","away3d/core/math/Quaternion.hx",162,0x247c3ed9)
HX_LOCAL_STACK_FRAME(_hx_pos_aabe1fb0ce0ef0e2_195_fromEulerAngles,"away3d.core.math.Quaternion","fromEulerAngles",0x19ef73f5,"away3d.core.math.Quaternion.fromEulerAngles","away3d/core/math/Quaternion.hx",195,0x247c3ed9)
HX_LOCAL_STACK_FRAME(_hx_pos_aabe1fb0ce0ef0e2_213_toEulerAngles,"away3d.core.math.Quaternion","toEulerAngles",0x74740204,"away3d.core.math.Quaternion.toEulerAngles","away3d/core/math/Quaternion.hx",213,0x247c3ed9)
HX_LOCAL_STACK_FRAME(_hx_pos_aabe1fb0ce0ef0e2_226_normalize,"away3d.core.math.Quaternion","normalize",0xcd2090c3,"away3d.core.math.Quaternion.normalize","away3d/core/math/Quaternion.hx",226,0x247c3ed9)
HX_LOCAL_STACK_FRAME(_hx_pos_aabe1fb0ce0ef0e2_242_toString,"away3d.core.math.Quaternion","toString",0xd8271036,"away3d.core.math.Quaternion.toString","away3d/core/math/Quaternion.hx",242,0x247c3ed9)
HX_LOCAL_STACK_FRAME(_hx_pos_aabe1fb0ce0ef0e2_251_toMatrix3D,"away3d.core.math.Quaternion","toMatrix3D",0x06fe7fd7,"away3d.core.math.Quaternion.toMatrix3D","away3d/core/math/Quaternion.hx",251,0x247c3ed9)
HX_LOCAL_STACK_FRAME(_hx_pos_aabe1fb0ce0ef0e2_287_fromMatrix,"away3d.core.math.Quaternion","fromMatrix",0x2cfaf155,"away3d.core.math.Quaternion.fromMatrix","away3d/core/math/Quaternion.hx",287,0x247c3ed9)
HX_LOCAL_STACK_FRAME(_hx_pos_aabe1fb0ce0ef0e2_301_toRawData,"away3d.core.math.Quaternion","toRawData",0x502bfd2d,"away3d.core.math.Quaternion.toRawData","away3d/core/math/Quaternion.hx",301,0x247c3ed9)
HX_LOCAL_STACK_FRAME(_hx_pos_aabe1fb0ce0ef0e2_329_clone,"away3d.core.math.Quaternion","clone",0xe6441993,"away3d.core.math.Quaternion.clone","away3d/core/math/Quaternion.hx",329,0x247c3ed9)
HX_LOCAL_STACK_FRAME(_hx_pos_aabe1fb0ce0ef0e2_339_rotatePoint,"away3d.core.math.Quaternion","rotatePoint",0x9b4986ab,"away3d.core.math.Quaternion.rotatePoint","away3d/core/math/Quaternion.hx",339,0x247c3ed9)
HX_LOCAL_STACK_FRAME(_hx_pos_aabe1fb0ce0ef0e2_364_copyFrom,"away3d.core.math.Quaternion","copyFrom",0x68194b49,"away3d.core.math.Quaternion.copyFrom","away3d/core/math/Quaternion.hx",364,0x247c3ed9)
namespace away3d{
namespace core{
namespace math{

void Quaternion_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z,::hx::Null< Float >  __o_w){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            		Float z = __o_z.Default(0);
            		Float w = __o_w.Default(1);
            	HX_STACKFRAME(&_hx_pos_aabe1fb0ce0ef0e2_43_new)
HXLINE(  44)		this->x = x;
HXLINE(  45)		this->y = y;
HXLINE(  46)		this->z = z;
HXLINE(  47)		this->w = w;
            	}

Dynamic Quaternion_obj::__CreateEmpty() { return new Quaternion_obj; }

void *Quaternion_obj::_hx_vtable = 0;

Dynamic Quaternion_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Quaternion_obj > _hx_result = new Quaternion_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Quaternion_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x325a37e4;
}

Float Quaternion_obj::get_magnitude(){
            	HX_STACKFRAME(&_hx_pos_aabe1fb0ce0ef0e2_55_get_magnitude)
HXDLIN(  55)		return ::Math_obj::sqrt(((((this->w * this->w) + (this->x * this->x)) + (this->y * this->y)) + (this->z * this->z)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,get_magnitude,return )

void Quaternion_obj::multiply( ::away3d::core::math::Quaternion qa, ::away3d::core::math::Quaternion qb){
            	HX_STACKFRAME(&_hx_pos_aabe1fb0ce0ef0e2_65_multiply)
HXLINE(  66)		Float w1 = qa->w;
HXDLIN(  66)		Float x1 = qa->x;
HXDLIN(  66)		Float y1 = qa->y;
HXDLIN(  66)		Float z1 = qa->z;
HXLINE(  67)		Float w2 = qb->w;
HXDLIN(  67)		Float x2 = qb->x;
HXDLIN(  67)		Float y2 = qb->y;
HXDLIN(  67)		Float z2 = qb->z;
HXLINE(  69)		this->w = ((((w1 * w2) - (x1 * x2)) - (y1 * y2)) - (z1 * z2));
HXLINE(  70)		this->x = ((((w1 * x2) + (x1 * w2)) + (y1 * z2)) - (z1 * y2));
HXLINE(  71)		this->y = ((((w1 * y2) - (x1 * z2)) + (y1 * w2)) + (z1 * x2));
HXLINE(  72)		this->z = ((((w1 * z2) + (x1 * y2)) - (y1 * x2)) + (z1 * w2));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,multiply,(void))

 ::away3d::core::math::Quaternion Quaternion_obj::multiplyVector( ::openfl::geom::Vector3D vector, ::away3d::core::math::Quaternion target){
            	HX_GC_STACKFRAME(&_hx_pos_aabe1fb0ce0ef0e2_76_multiplyVector)
HXLINE(  77)		if (::hx::IsNull( target )) {
HXLINE(  78)			target =  ::away3d::core::math::Quaternion_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE(  80)		Float x2 = vector->x;
HXLINE(  81)		Float y2 = vector->y;
HXLINE(  82)		Float z2 = vector->z;
HXLINE(  84)		target->w = (((-(this->x) * x2) - (this->y * y2)) - (this->z * z2));
HXLINE(  85)		target->x = (((this->w * x2) + (this->y * z2)) - (this->z * y2));
HXLINE(  86)		target->y = (((this->w * y2) - (this->x * z2)) + (this->z * x2));
HXLINE(  87)		target->z = (((this->w * z2) + (this->x * y2)) - (this->y * x2));
HXLINE(  89)		return target;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,multiplyVector,return )

void Quaternion_obj::fromAxisAngle( ::openfl::geom::Vector3D axis,Float angle){
            	HX_STACKFRAME(&_hx_pos_aabe1fb0ce0ef0e2_99_fromAxisAngle)
HXLINE( 100)		Float sin_a = ::Math_obj::sin((angle / ( (Float)(2) )));
HXLINE( 101)		Float cos_a = ::Math_obj::cos((angle / ( (Float)(2) )));
HXLINE( 103)		this->x = (axis->x * sin_a);
HXLINE( 104)		this->y = (axis->y * sin_a);
HXLINE( 105)		this->z = (axis->z * sin_a);
HXLINE( 106)		this->w = cos_a;
HXLINE( 107)		this->normalize(null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,fromAxisAngle,(void))

void Quaternion_obj::slerp( ::away3d::core::math::Quaternion qa, ::away3d::core::math::Quaternion qb,Float t){
            	HX_STACKFRAME(&_hx_pos_aabe1fb0ce0ef0e2_117_slerp)
HXLINE( 118)		Float w1 = qa->w;
HXDLIN( 118)		Float x1 = qa->x;
HXDLIN( 118)		Float y1 = qa->y;
HXDLIN( 118)		Float z1 = qa->z;
HXLINE( 119)		Float w2 = qb->w;
HXDLIN( 119)		Float x2 = qb->x;
HXDLIN( 119)		Float y2 = qb->y;
HXDLIN( 119)		Float z2 = qb->z;
HXLINE( 120)		Float dot = ((((w1 * w2) + (x1 * x2)) + (y1 * y2)) + (z1 * z2));
HXLINE( 123)		if ((dot < 0)) {
HXLINE( 124)			dot = -(dot);
HXLINE( 125)			w2 = -(w2);
HXLINE( 126)			x2 = -(x2);
HXLINE( 127)			y2 = -(y2);
HXLINE( 128)			z2 = -(z2);
            		}
HXLINE( 131)		if ((dot < ((Float)0.95))) {
HXLINE( 133)			Float angle = ::Math_obj::acos(dot);
HXLINE( 134)			Float s = (( (Float)(1) ) / ::Math_obj::sin(angle));
HXLINE( 135)			Float s1 = (::Math_obj::sin((angle * (( (Float)(1) ) - t))) * s);
HXLINE( 136)			Float s2 = (::Math_obj::sin((angle * t)) * s);
HXLINE( 137)			this->w = ((w1 * s1) + (w2 * s2));
HXLINE( 138)			this->x = ((x1 * s1) + (x2 * s2));
HXLINE( 139)			this->y = ((y1 * s1) + (y2 * s2));
HXLINE( 140)			this->z = ((z1 * s1) + (z2 * s2));
            		}
            		else {
HXLINE( 143)			this->w = (w1 + (t * (w2 - w1)));
HXLINE( 144)			this->x = (x1 + (t * (x2 - x1)));
HXLINE( 145)			this->y = (y1 + (t * (y2 - y1)));
HXLINE( 146)			this->z = (z1 + (t * (z2 - z1)));
HXLINE( 147)			Float len = (((Float)1.0) / ::Math_obj::sqrt(((((this->w * this->w) + (this->x * this->x)) + (this->y * this->y)) + (this->z * this->z))));
HXLINE( 148)			 ::away3d::core::math::Quaternion _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 148)			_hx_tmp->w = (_hx_tmp->w * len);
HXLINE( 149)			 ::away3d::core::math::Quaternion _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 149)			_hx_tmp1->x = (_hx_tmp1->x * len);
HXLINE( 150)			 ::away3d::core::math::Quaternion _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 150)			_hx_tmp2->y = (_hx_tmp2->y * len);
HXLINE( 151)			 ::away3d::core::math::Quaternion _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 151)			_hx_tmp3->z = (_hx_tmp3->z * len);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Quaternion_obj,slerp,(void))

void Quaternion_obj::lerp( ::away3d::core::math::Quaternion qa, ::away3d::core::math::Quaternion qb,Float t){
            	HX_STACKFRAME(&_hx_pos_aabe1fb0ce0ef0e2_162_lerp)
HXLINE( 163)		Float w1 = qa->w;
HXDLIN( 163)		Float x1 = qa->x;
HXDLIN( 163)		Float y1 = qa->y;
HXDLIN( 163)		Float z1 = qa->z;
HXLINE( 164)		Float w2 = qb->w;
HXDLIN( 164)		Float x2 = qb->x;
HXDLIN( 164)		Float y2 = qb->y;
HXDLIN( 164)		Float z2 = qb->z;
HXLINE( 168)		if ((((((w1 * w2) + (x1 * x2)) + (y1 * y2)) + (z1 * z2)) < 0)) {
HXLINE( 169)			w2 = -(w2);
HXLINE( 170)			x2 = -(x2);
HXLINE( 171)			y2 = -(y2);
HXLINE( 172)			z2 = -(z2);
            		}
HXLINE( 175)		this->w = (w1 + (t * (w2 - w1)));
HXLINE( 176)		this->x = (x1 + (t * (x2 - x1)));
HXLINE( 177)		this->y = (y1 + (t * (y2 - y1)));
HXLINE( 178)		this->z = (z1 + (t * (z2 - z1)));
HXLINE( 165)		Float len = (((Float)1.0) / ::Math_obj::sqrt(((((this->w * this->w) + (this->x * this->x)) + (this->y * this->y)) + (this->z * this->z))));
HXLINE( 181)		 ::away3d::core::math::Quaternion _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 181)		_hx_tmp->w = (_hx_tmp->w * len);
HXLINE( 182)		 ::away3d::core::math::Quaternion _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 182)		_hx_tmp1->x = (_hx_tmp1->x * len);
HXLINE( 183)		 ::away3d::core::math::Quaternion _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 183)		_hx_tmp2->y = (_hx_tmp2->y * len);
HXLINE( 184)		 ::away3d::core::math::Quaternion _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 184)		_hx_tmp3->z = (_hx_tmp3->z * len);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Quaternion_obj,lerp,(void))

void Quaternion_obj::fromEulerAngles(Float ax,Float ay,Float az){
            	HX_STACKFRAME(&_hx_pos_aabe1fb0ce0ef0e2_195_fromEulerAngles)
HXLINE( 196)		Float halfX = (ax * ((Float).5));
HXDLIN( 196)		Float halfY = (ay * ((Float).5));
HXDLIN( 196)		Float halfZ = (az * ((Float).5));
HXLINE( 197)		Float cosX = ::Math_obj::cos(halfX);
HXDLIN( 197)		Float sinX = ::Math_obj::sin(halfX);
HXLINE( 198)		Float cosY = ::Math_obj::cos(halfY);
HXDLIN( 198)		Float sinY = ::Math_obj::sin(halfY);
HXLINE( 199)		Float cosZ = ::Math_obj::cos(halfZ);
HXDLIN( 199)		Float sinZ = ::Math_obj::sin(halfZ);
HXLINE( 201)		this->w = (((cosX * cosY) * cosZ) + ((sinX * sinY) * sinZ));
HXLINE( 202)		this->x = (((sinX * cosY) * cosZ) - ((cosX * sinY) * sinZ));
HXLINE( 203)		this->y = (((cosX * sinY) * cosZ) + ((sinX * cosY) * sinZ));
HXLINE( 204)		this->z = (((cosX * cosY) * sinZ) - ((sinX * sinY) * cosZ));
            	}


HX_DEFINE_DYNAMIC_FUNC3(Quaternion_obj,fromEulerAngles,(void))

 ::openfl::geom::Vector3D Quaternion_obj::toEulerAngles( ::openfl::geom::Vector3D target){
            	HX_GC_STACKFRAME(&_hx_pos_aabe1fb0ce0ef0e2_213_toEulerAngles)
HXLINE( 214)		if (::hx::IsNull( target )) {
HXLINE( 215)			target =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE( 216)		target->x = ::Math_obj::atan2((( (Float)(2) ) * ((this->w * this->x) + (this->y * this->z))),(( (Float)(1) ) - (( (Float)(2) ) * ((this->x * this->x) + (this->y * this->y)))));
HXLINE( 217)		target->y = ::Math_obj::asin((( (Float)(2) ) * ((this->w * this->y) - (this->z * this->x))));
HXLINE( 218)		target->z = ::Math_obj::atan2((( (Float)(2) ) * ((this->w * this->z) + (this->x * this->y))),(( (Float)(1) ) - (( (Float)(2) ) * ((this->y * this->y) + (this->z * this->z)))));
HXLINE( 219)		return target;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,toEulerAngles,return )

void Quaternion_obj::normalize(::hx::Null< Float >  __o_val){
            		Float val = __o_val.Default(1);
            	HX_STACKFRAME(&_hx_pos_aabe1fb0ce0ef0e2_226_normalize)
HXLINE( 227)		Float mag = (val / ::Math_obj::sqrt(((((this->x * this->x) + (this->y * this->y)) + (this->z * this->z)) + (this->w * this->w))));
HXLINE( 229)		 ::away3d::core::math::Quaternion _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 229)		_hx_tmp->x = (_hx_tmp->x * mag);
HXLINE( 230)		 ::away3d::core::math::Quaternion _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 230)		_hx_tmp1->y = (_hx_tmp1->y * mag);
HXLINE( 231)		 ::away3d::core::math::Quaternion _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 231)		_hx_tmp2->z = (_hx_tmp2->z * mag);
HXLINE( 232)		 ::away3d::core::math::Quaternion _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 232)		_hx_tmp3->w = (_hx_tmp3->w * mag);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,normalize,(void))

::String Quaternion_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_aabe1fb0ce0ef0e2_242_toString)
HXDLIN( 242)		return ((((((((HX_("{x:",fd,bd,5d,00) + this->x) + HX_(" y:",c1,b1,18,00)) + this->y) + HX_(" z:",a0,b2,18,00)) + this->z) + HX_(" w:",03,b0,18,00)) + this->w) + HX_("}",7d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,toString,return )

 ::openfl::geom::Matrix3D Quaternion_obj::toMatrix3D( ::openfl::geom::Matrix3D target){
            	HX_GC_STACKFRAME(&_hx_pos_aabe1fb0ce0ef0e2_251_toMatrix3D)
HXLINE( 252)		 ::openfl::_Vector::FloatVector rawData = ::away3d::core::math::Matrix3DUtils_obj::RAW_DATA_CONTAINER;
HXLINE( 253)		Float xy2 = ((((Float)2.0) * this->x) * this->y);
HXDLIN( 253)		Float xz2 = ((((Float)2.0) * this->x) * this->z);
HXDLIN( 253)		Float xw2 = ((((Float)2.0) * this->x) * this->w);
HXLINE( 254)		Float yz2 = ((((Float)2.0) * this->y) * this->z);
HXDLIN( 254)		Float yw2 = ((((Float)2.0) * this->y) * this->w);
HXDLIN( 254)		Float zw2 = ((((Float)2.0) * this->z) * this->w);
HXLINE( 255)		Float xx = (this->x * this->x);
HXDLIN( 255)		Float yy = (this->y * this->y);
HXDLIN( 255)		Float zz = (this->z * this->z);
HXDLIN( 255)		Float ww = (this->w * this->w);
HXLINE( 257)		rawData->set(0,(((xx - yy) - zz) + ww));
HXLINE( 258)		rawData->set(4,(xy2 - zw2));
HXLINE( 259)		rawData->set(8,(xz2 + yw2));
HXLINE( 260)		rawData->set(12,( (Float)(0) ));
HXLINE( 261)		rawData->set(1,(xy2 + zw2));
HXLINE( 262)		rawData->set(5,(((-(xx) + yy) - zz) + ww));
HXLINE( 263)		rawData->set(9,(yz2 - xw2));
HXLINE( 264)		rawData->set(13,( (Float)(0) ));
HXLINE( 265)		rawData->set(2,(xz2 - yw2));
HXLINE( 266)		rawData->set(6,(yz2 + xw2));
HXLINE( 267)		rawData->set(10,(((-(xx) - yy) + zz) + ww));
HXLINE( 268)		rawData->set(14,( (Float)(0) ));
HXLINE( 269)		rawData->set(3,((Float)0.0));
HXLINE( 270)		rawData->set(7,((Float)0.0));
HXLINE( 271)		rawData->set(11,( (Float)(0) ));
HXLINE( 272)		rawData->set(15,( (Float)(1) ));
HXLINE( 274)		if (::hx::IsNull( target )) {
HXLINE( 275)			return  ::openfl::geom::Matrix3D_obj::__alloc( HX_CTX ,rawData);
            		}
HXLINE( 277)		target->copyRawDataFrom(rawData,null(),null());
HXLINE( 279)		return target;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,toMatrix3D,return )

void Quaternion_obj::fromMatrix( ::openfl::geom::Matrix3D matrix){
            	HX_STACKFRAME(&_hx_pos_aabe1fb0ce0ef0e2_287_fromMatrix)
HXLINE( 288)		 ::openfl::geom::Vector3D v = matrix->decompose(2)->get(1).StaticCast<  ::openfl::geom::Vector3D >();
HXLINE( 289)		this->x = v->x;
HXLINE( 290)		this->y = v->y;
HXLINE( 291)		this->z = v->z;
HXLINE( 292)		this->w = v->w;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,fromMatrix,(void))

void Quaternion_obj::toRawData( ::openfl::_Vector::FloatVector target,::hx::Null< bool >  __o_exclude4thRow){
            		bool exclude4thRow = __o_exclude4thRow.Default(false);
            	HX_STACKFRAME(&_hx_pos_aabe1fb0ce0ef0e2_301_toRawData)
HXLINE( 302)		Float xy2 = ((((Float)2.0) * this->x) * this->y);
HXDLIN( 302)		Float xz2 = ((((Float)2.0) * this->x) * this->z);
HXDLIN( 302)		Float xw2 = ((((Float)2.0) * this->x) * this->w);
HXLINE( 303)		Float yz2 = ((((Float)2.0) * this->y) * this->z);
HXDLIN( 303)		Float yw2 = ((((Float)2.0) * this->y) * this->w);
HXDLIN( 303)		Float zw2 = ((((Float)2.0) * this->z) * this->w);
HXLINE( 304)		Float xx = (this->x * this->x);
HXDLIN( 304)		Float yy = (this->y * this->y);
HXDLIN( 304)		Float zz = (this->z * this->z);
HXDLIN( 304)		Float ww = (this->w * this->w);
HXLINE( 306)		target->set(0,(((xx - yy) - zz) + ww));
HXLINE( 307)		target->set(1,(xy2 - zw2));
HXLINE( 308)		target->set(2,(xz2 + yw2));
HXLINE( 309)		target->set(4,(xy2 + zw2));
HXLINE( 310)		target->set(5,(((-(xx) + yy) - zz) + ww));
HXLINE( 311)		target->set(6,(yz2 - xw2));
HXLINE( 312)		target->set(8,(xz2 - yw2));
HXLINE( 313)		target->set(9,(yz2 + xw2));
HXLINE( 314)		target->set(10,(((-(xx) - yy) + zz) + ww));
HXLINE( 315)		target->set(3,target->set(7,target->set(11,( (Float)(0) ))));
HXLINE( 317)		if (!(exclude4thRow)) {
HXLINE( 318)			target->set(12,target->set(13,target->set(14,( (Float)(0) ))));
HXLINE( 319)			target->set(15,( (Float)(1) ));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,toRawData,(void))

 ::away3d::core::math::Quaternion Quaternion_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_aabe1fb0ce0ef0e2_329_clone)
HXDLIN( 329)		return  ::away3d::core::math::Quaternion_obj::__alloc( HX_CTX ,this->x,this->y,this->z,this->w);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,clone,return )

 ::openfl::geom::Vector3D Quaternion_obj::rotatePoint( ::openfl::geom::Vector3D vector, ::openfl::geom::Vector3D target){
            	HX_GC_STACKFRAME(&_hx_pos_aabe1fb0ce0ef0e2_339_rotatePoint)
HXLINE( 341)		Float x2 = vector->x;
HXDLIN( 341)		Float y2 = vector->y;
HXDLIN( 341)		Float z2 = vector->z;
HXLINE( 343)		if (::hx::IsNull( target )) {
HXLINE( 344)			target =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE( 340)		Float w1 = (((-(this->x) * x2) - (this->y * y2)) - (this->z * z2));
HXDLIN( 340)		Float x1 = (((this->w * x2) + (this->y * z2)) - (this->z * y2));
HXDLIN( 340)		Float y1 = (((this->w * y2) - (this->x * z2)) + (this->z * x2));
HXDLIN( 340)		Float z1 = (((this->w * z2) + (this->x * y2)) - (this->y * x2));
HXLINE( 352)		target->x = ((((-(w1) * this->x) + (x1 * this->w)) - (y1 * this->z)) + (z1 * this->y));
HXLINE( 353)		target->y = ((((-(w1) * this->y) + (x1 * this->z)) + (y1 * this->w)) - (z1 * this->x));
HXLINE( 354)		target->z = ((((-(w1) * this->z) - (x1 * this->y)) + (y1 * this->x)) + (z1 * this->w));
HXLINE( 356)		return target;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,rotatePoint,return )

void Quaternion_obj::copyFrom( ::away3d::core::math::Quaternion q){
            	HX_STACKFRAME(&_hx_pos_aabe1fb0ce0ef0e2_364_copyFrom)
HXLINE( 365)		this->x = q->x;
HXLINE( 366)		this->y = q->y;
HXLINE( 367)		this->z = q->z;
HXLINE( 368)		this->w = q->w;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,copyFrom,(void))


::hx::ObjectPtr< Quaternion_obj > Quaternion_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z,::hx::Null< Float >  __o_w) {
	::hx::ObjectPtr< Quaternion_obj > __this = new Quaternion_obj();
	__this->__construct(__o_x,__o_y,__o_z,__o_w);
	return __this;
}

::hx::ObjectPtr< Quaternion_obj > Quaternion_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z,::hx::Null< Float >  __o_w) {
	Quaternion_obj *__this = (Quaternion_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Quaternion_obj), false, "away3d.core.math.Quaternion"));
	*(void **)__this = Quaternion_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y,__o_z,__o_w);
	return __this;
}

Quaternion_obj::Quaternion_obj()
{
}

::hx::Val Quaternion_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		if (HX_FIELD_EQ(inName,"z") ) { return ::hx::Val( z ); }
		if (HX_FIELD_EQ(inName,"w") ) { return ::hx::Val( w ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"lerp") ) { return ::hx::Val( lerp_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"slerp") ) { return ::hx::Val( slerp_dyn() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"multiply") ) { return ::hx::Val( multiply_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return ::hx::Val( copyFrom_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"magnitude") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_magnitude() ); }
		if (HX_FIELD_EQ(inName,"normalize") ) { return ::hx::Val( normalize_dyn() ); }
		if (HX_FIELD_EQ(inName,"toRawData") ) { return ::hx::Val( toRawData_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"toMatrix3D") ) { return ::hx::Val( toMatrix3D_dyn() ); }
		if (HX_FIELD_EQ(inName,"fromMatrix") ) { return ::hx::Val( fromMatrix_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"rotatePoint") ) { return ::hx::Val( rotatePoint_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_magnitude") ) { return ::hx::Val( get_magnitude_dyn() ); }
		if (HX_FIELD_EQ(inName,"fromAxisAngle") ) { return ::hx::Val( fromAxisAngle_dyn() ); }
		if (HX_FIELD_EQ(inName,"toEulerAngles") ) { return ::hx::Val( toEulerAngles_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"multiplyVector") ) { return ::hx::Val( multiplyVector_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"fromEulerAngles") ) { return ::hx::Val( fromEulerAngles_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Quaternion_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Quaternion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("magnitude",d0,33,64,f5));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("z",7a,00,00,00));
	outFields->push(HX_("w",77,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Quaternion_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Quaternion_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Quaternion_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Quaternion_obj,z),HX_("z",7a,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Quaternion_obj,w),HX_("w",77,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Quaternion_obj_sStaticStorageInfo = 0;
#endif

static ::String Quaternion_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("z",7a,00,00,00),
	HX_("w",77,00,00,00),
	HX_("get_magnitude",a7,07,c8,b6),
	HX_("multiply",24,e2,8c,9a),
	HX_("multiplyVector",07,3a,59,a3),
	HX_("fromAxisAngle",a8,6c,6f,f0),
	HX_("slerp",6a,c8,c4,7e),
	HX_("lerp",77,12,b0,47),
	HX_("fromEulerAngles",3f,4e,60,93),
	HX_("toEulerAngles",ce,d5,30,66),
	HX_("normalize",8d,37,a1,ab),
	HX_("toString",ac,d0,6e,38),
	HX_("toMatrix3D",cd,c9,0f,d9),
	HX_("fromMatrix",4b,3b,0c,ff),
	HX_("toRawData",f7,a3,ac,2e),
	HX_("clone",5d,13,63,48),
	HX_("rotatePoint",f5,f3,58,98),
	HX_("copyFrom",bf,0b,61,c8),
	::String(null()) };

::hx::Class Quaternion_obj::__mClass;

void Quaternion_obj::__register()
{
	Quaternion_obj _hx_dummy;
	Quaternion_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.math.Quaternion",24,3a,0a,e0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Quaternion_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Quaternion_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Quaternion_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Quaternion_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace core
} // end namespace math
