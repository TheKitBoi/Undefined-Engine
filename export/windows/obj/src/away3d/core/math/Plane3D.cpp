#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_away3d_core_math_Plane3D
#include <away3d/core/math/Plane3D.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a8d56548bf0af7a7_39_new,"away3d.core.math.Plane3D","new",0x07ecddb9,"away3d.core.math.Plane3D.new","away3d/core/math/Plane3D.hx",39,0xd34df6b8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8d56548bf0af7a7_61_fromPoints,"away3d.core.math.Plane3D","fromPoints",0xba4e56f4,"away3d.core.math.Plane3D.fromPoints","away3d/core/math/Plane3D.hx",61,0xd34df6b8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8d56548bf0af7a7_92_fromNormalAndPoint,"away3d.core.math.Plane3D","fromNormalAndPoint",0xd882a911,"away3d.core.math.Plane3D.fromNormalAndPoint","away3d/core/math/Plane3D.hx",92,0xd34df6b8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8d56548bf0af7a7_112_normalize,"away3d.core.math.Plane3D","normalize",0xf7f84da6,"away3d.core.math.Plane3D.normalize","away3d/core/math/Plane3D.hx",112,0xd34df6b8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8d56548bf0af7a7_128_distance,"away3d.core.math.Plane3D","distance",0x7334833c,"away3d.core.math.Plane3D.distance","away3d/core/math/Plane3D.hx",128,0xd34df6b8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8d56548bf0af7a7_144_classifyPoint,"away3d.core.math.Plane3D","classifyPoint",0x6a27f385,"away3d.core.math.Plane3D.classifyPoint","away3d/core/math/Plane3D.hx",144,0xd34df6b8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8d56548bf0af7a7_169_toString,"away3d.core.math.Plane3D","toString",0x3fa9c0b3,"away3d.core.math.Plane3D.toString","away3d/core/math/Plane3D.hx",169,0xd34df6b8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8d56548bf0af7a7_30_boot,"away3d.core.math.Plane3D","boot",0xdf6e24b9,"away3d.core.math.Plane3D.boot","away3d/core/math/Plane3D.hx",30,0xd34df6b8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8d56548bf0af7a7_31_boot,"away3d.core.math.Plane3D","boot",0xdf6e24b9,"away3d.core.math.Plane3D.boot","away3d/core/math/Plane3D.hx",31,0xd34df6b8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8d56548bf0af7a7_32_boot,"away3d.core.math.Plane3D","boot",0xdf6e24b9,"away3d.core.math.Plane3D.boot","away3d/core/math/Plane3D.hx",32,0xd34df6b8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8d56548bf0af7a7_33_boot,"away3d.core.math.Plane3D","boot",0xdf6e24b9,"away3d.core.math.Plane3D.boot","away3d/core/math/Plane3D.hx",33,0xd34df6b8)
namespace away3d{
namespace core{
namespace math{

void Plane3D_obj::__construct(::hx::Null< Float >  __o_a,::hx::Null< Float >  __o_b,::hx::Null< Float >  __o_c,::hx::Null< Float >  __o_d){
            		Float a = __o_a.Default(0);
            		Float b = __o_b.Default(0);
            		Float c = __o_c.Default(0);
            		Float d = __o_d.Default(0);
            	HX_STACKFRAME(&_hx_pos_a8d56548bf0af7a7_39_new)
HXLINE(  40)		this->a = a;
HXLINE(  41)		this->b = b;
HXLINE(  42)		this->c = c;
HXLINE(  43)		this->d = d;
HXLINE(  44)		bool _hx_tmp;
HXDLIN(  44)		if ((a == 0)) {
HXLINE(  44)			_hx_tmp = (b == 0);
            		}
            		else {
HXLINE(  44)			_hx_tmp = false;
            		}
HXDLIN(  44)		if (_hx_tmp) {
HXLINE(  45)			this->_alignment = 1;
            		}
            		else {
HXLINE(  46)			bool _hx_tmp;
HXDLIN(  46)			if ((b == 0)) {
HXLINE(  46)				_hx_tmp = (c == 0);
            			}
            			else {
HXLINE(  46)				_hx_tmp = false;
            			}
HXDLIN(  46)			if (_hx_tmp) {
HXLINE(  47)				this->_alignment = 2;
            			}
            			else {
HXLINE(  48)				bool _hx_tmp;
HXDLIN(  48)				if ((a == 0)) {
HXLINE(  48)					_hx_tmp = (c == 0);
            				}
            				else {
HXLINE(  48)					_hx_tmp = false;
            				}
HXDLIN(  48)				if (_hx_tmp) {
HXLINE(  49)					this->_alignment = 3;
            				}
            				else {
HXLINE(  51)					this->_alignment = 0;
            				}
            			}
            		}
            	}

Dynamic Plane3D_obj::__CreateEmpty() { return new Plane3D_obj; }

void *Plane3D_obj::_hx_vtable = 0;

Dynamic Plane3D_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Plane3D_obj > _hx_result = new Plane3D_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Plane3D_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x273f7787;
}

void Plane3D_obj::fromPoints( ::openfl::geom::Vector3D p0, ::openfl::geom::Vector3D p1, ::openfl::geom::Vector3D p2){
            	HX_STACKFRAME(&_hx_pos_a8d56548bf0af7a7_61_fromPoints)
HXLINE(  62)		Float d1x = (p1->x - p0->x);
HXLINE(  63)		Float d1y = (p1->y - p0->y);
HXLINE(  64)		Float d1z = (p1->z - p0->z);
HXLINE(  66)		Float d2x = (p2->x - p0->x);
HXLINE(  67)		Float d2y = (p2->y - p0->y);
HXLINE(  68)		Float d2z = (p2->z - p0->z);
HXLINE(  70)		this->a = ((d1y * d2z) - (d1z * d2y));
HXLINE(  71)		this->b = ((d1z * d2x) - (d1x * d2z));
HXLINE(  72)		this->c = ((d1x * d2y) - (d1y * d2x));
HXLINE(  73)		this->d = (((this->a * p0->x) + (this->b * p0->y)) + (this->c * p0->z));
HXLINE(  76)		bool _hx_tmp;
HXDLIN(  76)		if ((this->a == 0)) {
HXLINE(  76)			_hx_tmp = (this->b == 0);
            		}
            		else {
HXLINE(  76)			_hx_tmp = false;
            		}
HXDLIN(  76)		if (_hx_tmp) {
HXLINE(  77)			this->_alignment = 1;
            		}
            		else {
HXLINE(  78)			bool _hx_tmp;
HXDLIN(  78)			if ((this->b == 0)) {
HXLINE(  78)				_hx_tmp = (this->c == 0);
            			}
            			else {
HXLINE(  78)				_hx_tmp = false;
            			}
HXDLIN(  78)			if (_hx_tmp) {
HXLINE(  79)				this->_alignment = 2;
            			}
            			else {
HXLINE(  80)				bool _hx_tmp;
HXDLIN(  80)				if ((this->a == 0)) {
HXLINE(  80)					_hx_tmp = (this->c == 0);
            				}
            				else {
HXLINE(  80)					_hx_tmp = false;
            				}
HXDLIN(  80)				if (_hx_tmp) {
HXLINE(  81)					this->_alignment = 3;
            				}
            				else {
HXLINE(  83)					this->_alignment = 0;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Plane3D_obj,fromPoints,(void))

void Plane3D_obj::fromNormalAndPoint( ::openfl::geom::Vector3D normal, ::openfl::geom::Vector3D point){
            	HX_STACKFRAME(&_hx_pos_a8d56548bf0af7a7_92_fromNormalAndPoint)
HXLINE(  93)		this->a = normal->x;
HXLINE(  94)		this->b = normal->y;
HXLINE(  95)		this->c = normal->z;
HXLINE(  96)		this->d = (((this->a * point->x) + (this->b * point->y)) + (this->c * point->z));
HXLINE(  97)		bool _hx_tmp;
HXDLIN(  97)		if ((this->a == 0)) {
HXLINE(  97)			_hx_tmp = (this->b == 0);
            		}
            		else {
HXLINE(  97)			_hx_tmp = false;
            		}
HXDLIN(  97)		if (_hx_tmp) {
HXLINE(  98)			this->_alignment = 1;
            		}
            		else {
HXLINE(  99)			bool _hx_tmp;
HXDLIN(  99)			if ((this->b == 0)) {
HXLINE(  99)				_hx_tmp = (this->c == 0);
            			}
            			else {
HXLINE(  99)				_hx_tmp = false;
            			}
HXDLIN(  99)			if (_hx_tmp) {
HXLINE( 100)				this->_alignment = 2;
            			}
            			else {
HXLINE( 101)				bool _hx_tmp;
HXDLIN( 101)				if ((this->a == 0)) {
HXLINE( 101)					_hx_tmp = (this->c == 0);
            				}
            				else {
HXLINE( 101)					_hx_tmp = false;
            				}
HXDLIN( 101)				if (_hx_tmp) {
HXLINE( 102)					this->_alignment = 3;
            				}
            				else {
HXLINE( 104)					this->_alignment = 0;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Plane3D_obj,fromNormalAndPoint,(void))

 ::away3d::core::math::Plane3D Plane3D_obj::normalize(){
            	HX_STACKFRAME(&_hx_pos_a8d56548bf0af7a7_112_normalize)
HXLINE( 113)		Float len = (( (Float)(1) ) / ::Math_obj::sqrt((((this->a * this->a) + (this->b * this->b)) + (this->c * this->c))));
HXLINE( 114)		 ::away3d::core::math::Plane3D _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 114)		_hx_tmp->a = (_hx_tmp->a * len);
HXLINE( 115)		 ::away3d::core::math::Plane3D _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 115)		_hx_tmp1->b = (_hx_tmp1->b * len);
HXLINE( 116)		 ::away3d::core::math::Plane3D _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 116)		_hx_tmp2->c = (_hx_tmp2->c * len);
HXLINE( 117)		 ::away3d::core::math::Plane3D _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 117)		_hx_tmp3->d = (_hx_tmp3->d * len);
HXLINE( 118)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Plane3D_obj,normalize,return )

Float Plane3D_obj::distance( ::openfl::geom::Vector3D p){
            	HX_STACKFRAME(&_hx_pos_a8d56548bf0af7a7_128_distance)
HXDLIN( 128)		if ((this->_alignment == 2)) {
HXLINE( 129)			return ((this->a * p->x) - this->d);
            		}
            		else {
HXLINE( 130)			if ((this->_alignment == 3)) {
HXLINE( 131)				return ((this->b * p->y) - this->d);
            			}
            			else {
HXLINE( 132)				if ((this->_alignment == 1)) {
HXLINE( 133)					return ((this->c * p->z) - this->d);
            				}
            				else {
HXLINE( 135)					return ((((this->a * p->x) + (this->b * p->y)) + (this->c * p->z)) - this->d);
            				}
            			}
            		}
HXLINE( 128)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Plane3D_obj,distance,return )

int Plane3D_obj::classifyPoint( ::openfl::geom::Vector3D p,::hx::Null< Float >  __o_epsilon){
            		Float epsilon = __o_epsilon.Default(((Float)0.01));
            	HX_STACKFRAME(&_hx_pos_a8d56548bf0af7a7_144_classifyPoint)
HXLINE( 146)		if ((this->d != this->d)) {
HXLINE( 147)			return 1;
            		}
HXLINE( 149)		Float len;
HXLINE( 150)		if ((this->_alignment == 2)) {
HXLINE( 151)			len = ((this->a * p->x) - this->d);
            		}
            		else {
HXLINE( 152)			if ((this->_alignment == 3)) {
HXLINE( 153)				len = ((this->b * p->y) - this->d);
            			}
            			else {
HXLINE( 154)				if ((this->_alignment == 1)) {
HXLINE( 155)					len = ((this->c * p->z) - this->d);
            				}
            				else {
HXLINE( 157)					len = ((((this->a * p->x) + (this->b * p->y)) + (this->c * p->z)) - this->d);
            				}
            			}
            		}
HXLINE( 159)		if ((len < -(epsilon))) {
HXLINE( 160)			return 0;
            		}
            		else {
HXLINE( 161)			if ((len > epsilon)) {
HXLINE( 162)				return 1;
            			}
            			else {
HXLINE( 164)				return 2;
            			}
            		}
HXLINE( 159)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Plane3D_obj,classifyPoint,return )

::String Plane3D_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_a8d56548bf0af7a7_169_toString)
HXDLIN( 169)		return ((((((((HX_("Plane3D [a:",21,d2,e8,ee) + this->a) + HX_(", b:",0c,01,2e,1d)) + this->b) + HX_(", c:",eb,01,2e,1d)) + this->c) + HX_(", d:",ca,02,2e,1d)) + this->d) + HX_("].",31,51,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Plane3D_obj,toString,return )

int Plane3D_obj::ALIGN_ANY;

int Plane3D_obj::ALIGN_XY_AXIS;

int Plane3D_obj::ALIGN_YZ_AXIS;

int Plane3D_obj::ALIGN_XZ_AXIS;


::hx::ObjectPtr< Plane3D_obj > Plane3D_obj::__new(::hx::Null< Float >  __o_a,::hx::Null< Float >  __o_b,::hx::Null< Float >  __o_c,::hx::Null< Float >  __o_d) {
	::hx::ObjectPtr< Plane3D_obj > __this = new Plane3D_obj();
	__this->__construct(__o_a,__o_b,__o_c,__o_d);
	return __this;
}

::hx::ObjectPtr< Plane3D_obj > Plane3D_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_a,::hx::Null< Float >  __o_b,::hx::Null< Float >  __o_c,::hx::Null< Float >  __o_d) {
	Plane3D_obj *__this = (Plane3D_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Plane3D_obj), false, "away3d.core.math.Plane3D"));
	*(void **)__this = Plane3D_obj::_hx_vtable;
	__this->__construct(__o_a,__o_b,__o_c,__o_d);
	return __this;
}

Plane3D_obj::Plane3D_obj()
{
}

::hx::Val Plane3D_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { return ::hx::Val( a ); }
		if (HX_FIELD_EQ(inName,"b") ) { return ::hx::Val( b ); }
		if (HX_FIELD_EQ(inName,"c") ) { return ::hx::Val( c ); }
		if (HX_FIELD_EQ(inName,"d") ) { return ::hx::Val( d ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { return ::hx::Val( distance_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normalize") ) { return ::hx::Val( normalize_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_alignment") ) { return ::hx::Val( _alignment ); }
		if (HX_FIELD_EQ(inName,"fromPoints") ) { return ::hx::Val( fromPoints_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"classifyPoint") ) { return ::hx::Val( classifyPoint_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"fromNormalAndPoint") ) { return ::hx::Val( fromNormalAndPoint_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Plane3D_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"c") ) { c=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"d") ) { d=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_alignment") ) { _alignment=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Plane3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("a",61,00,00,00));
	outFields->push(HX_("b",62,00,00,00));
	outFields->push(HX_("c",63,00,00,00));
	outFields->push(HX_("d",64,00,00,00));
	outFields->push(HX_("_alignment",a4,5e,e0,45));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Plane3D_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Plane3D_obj,a),HX_("a",61,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Plane3D_obj,b),HX_("b",62,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Plane3D_obj,c),HX_("c",63,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Plane3D_obj,d),HX_("d",64,00,00,00)},
	{::hx::fsInt,(int)offsetof(Plane3D_obj,_alignment),HX_("_alignment",a4,5e,e0,45)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Plane3D_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Plane3D_obj::ALIGN_ANY,HX_("ALIGN_ANY",f2,20,79,f1)},
	{::hx::fsInt,(void *) &Plane3D_obj::ALIGN_XY_AXIS,HX_("ALIGN_XY_AXIS",05,85,7d,8d)},
	{::hx::fsInt,(void *) &Plane3D_obj::ALIGN_YZ_AXIS,HX_("ALIGN_YZ_AXIS",25,58,6e,1d)},
	{::hx::fsInt,(void *) &Plane3D_obj::ALIGN_XZ_AXIS,HX_("ALIGN_XZ_AXIS",64,e1,d8,f3)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Plane3D_obj_sMemberFields[] = {
	HX_("a",61,00,00,00),
	HX_("b",62,00,00,00),
	HX_("c",63,00,00,00),
	HX_("d",64,00,00,00),
	HX_("_alignment",a4,5e,e0,45),
	HX_("fromPoints",2d,17,72,3a),
	HX_("fromNormalAndPoint",4a,ca,26,ba),
	HX_("normalize",8d,37,a1,ab),
	HX_("distance",35,93,f9,6b),
	HX_("classifyPoint",ec,5c,89,70),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

static void Plane3D_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Plane3D_obj::ALIGN_ANY,"ALIGN_ANY");
	HX_MARK_MEMBER_NAME(Plane3D_obj::ALIGN_XY_AXIS,"ALIGN_XY_AXIS");
	HX_MARK_MEMBER_NAME(Plane3D_obj::ALIGN_YZ_AXIS,"ALIGN_YZ_AXIS");
	HX_MARK_MEMBER_NAME(Plane3D_obj::ALIGN_XZ_AXIS,"ALIGN_XZ_AXIS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Plane3D_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Plane3D_obj::ALIGN_ANY,"ALIGN_ANY");
	HX_VISIT_MEMBER_NAME(Plane3D_obj::ALIGN_XY_AXIS,"ALIGN_XY_AXIS");
	HX_VISIT_MEMBER_NAME(Plane3D_obj::ALIGN_YZ_AXIS,"ALIGN_YZ_AXIS");
	HX_VISIT_MEMBER_NAME(Plane3D_obj::ALIGN_XZ_AXIS,"ALIGN_XZ_AXIS");
};

#endif

::hx::Class Plane3D_obj::__mClass;

static ::String Plane3D_obj_sStaticFields[] = {
	HX_("ALIGN_ANY",f2,20,79,f1),
	HX_("ALIGN_XY_AXIS",05,85,7d,8d),
	HX_("ALIGN_YZ_AXIS",25,58,6e,1d),
	HX_("ALIGN_XZ_AXIS",64,e1,d8,f3),
	::String(null())
};

void Plane3D_obj::__register()
{
	Plane3D_obj _hx_dummy;
	Plane3D_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.math.Plane3D",47,8d,73,d2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Plane3D_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Plane3D_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Plane3D_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Plane3D_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Plane3D_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Plane3D_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Plane3D_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Plane3D_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a8d56548bf0af7a7_30_boot)
HXDLIN(  30)		ALIGN_ANY = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a8d56548bf0af7a7_31_boot)
HXDLIN(  31)		ALIGN_XY_AXIS = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a8d56548bf0af7a7_32_boot)
HXDLIN(  32)		ALIGN_YZ_AXIS = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a8d56548bf0af7a7_33_boot)
HXDLIN(  33)		ALIGN_XZ_AXIS = 3;
            	}
}

} // end namespace away3d
} // end namespace core
} // end namespace math
