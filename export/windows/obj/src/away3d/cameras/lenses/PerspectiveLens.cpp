#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_away3d_cameras_lenses_LensBase
#include <away3d/cameras/lenses/LensBase.h>
#endif
#ifndef INCLUDED_away3d_cameras_lenses_PerspectiveLens
#include <away3d/cameras/lenses/PerspectiveLens.h>
#endif
#ifndef INCLUDED_away3d_core_math_Matrix3DUtils
#include <away3d/core/math/Matrix3DUtils.h>
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
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_64bef08c33d96394_30_new,"away3d.cameras.lenses.PerspectiveLens","new",0x8c8ccd79,"away3d.cameras.lenses.PerspectiveLens.new","away3d/cameras/lenses/PerspectiveLens.hx",30,0x26b09b16)
HX_LOCAL_STACK_FRAME(_hx_pos_64bef08c33d96394_42_get_fieldOfView,"away3d.cameras.lenses.PerspectiveLens","get_fieldOfView",0x273a5da6,"away3d.cameras.lenses.PerspectiveLens.get_fieldOfView","away3d/cameras/lenses/PerspectiveLens.hx",42,0x26b09b16)
HX_LOCAL_STACK_FRAME(_hx_pos_64bef08c33d96394_46_set_fieldOfView,"away3d.cameras.lenses.PerspectiveLens","set_fieldOfView",0x2305dab2,"away3d.cameras.lenses.PerspectiveLens.set_fieldOfView","away3d/cameras/lenses/PerspectiveLens.hx",46,0x26b09b16)
HX_LOCAL_STACK_FRAME(_hx_pos_64bef08c33d96394_64_get_focalLength,"away3d.cameras.lenses.PerspectiveLens","get_focalLength",0x23fa275b,"away3d.cameras.lenses.PerspectiveLens.get_focalLength","away3d/cameras/lenses/PerspectiveLens.hx",64,0x26b09b16)
HX_LOCAL_STACK_FRAME(_hx_pos_64bef08c33d96394_68_set_focalLength,"away3d.cameras.lenses.PerspectiveLens","set_focalLength",0x1fc5a467,"away3d.cameras.lenses.PerspectiveLens.set_focalLength","away3d/cameras/lenses/PerspectiveLens.hx",68,0x26b09b16)
HX_LOCAL_STACK_FRAME(_hx_pos_64bef08c33d96394_91_unproject,"away3d.cameras.lenses.PerspectiveLens","unproject",0x3e1a6f79,"away3d.cameras.lenses.PerspectiveLens.unproject","away3d/cameras/lenses/PerspectiveLens.hx",91,0x26b09b16)
HX_LOCAL_STACK_FRAME(_hx_pos_64bef08c33d96394_110_clone,"away3d.cameras.lenses.PerspectiveLens","clone",0x12a848b6,"away3d.cameras.lenses.PerspectiveLens.clone","away3d/cameras/lenses/PerspectiveLens.hx",110,0x26b09b16)
HX_LOCAL_STACK_FRAME(_hx_pos_64bef08c33d96394_124_get_coordinateSystem,"away3d.cameras.lenses.PerspectiveLens","get_coordinateSystem",0x8d640757,"away3d.cameras.lenses.PerspectiveLens.get_coordinateSystem","away3d/cameras/lenses/PerspectiveLens.hx",124,0x26b09b16)
HX_LOCAL_STACK_FRAME(_hx_pos_64bef08c33d96394_128_set_coordinateSystem,"away3d.cameras.lenses.PerspectiveLens","set_coordinateSystem",0x5a1bbecb,"away3d.cameras.lenses.PerspectiveLens.set_coordinateSystem","away3d/cameras/lenses/PerspectiveLens.hx",128,0x26b09b16)
HX_LOCAL_STACK_FRAME(_hx_pos_64bef08c33d96394_142_updateMatrix,"away3d.cameras.lenses.PerspectiveLens","updateMatrix",0x4810f4f1,"away3d.cameras.lenses.PerspectiveLens.updateMatrix","away3d/cameras/lenses/PerspectiveLens.hx",142,0x26b09b16)
namespace away3d{
namespace cameras{
namespace lenses{

void PerspectiveLens_obj::__construct(::hx::Null< Float >  __o_fieldOfView,::hx::Null< int >  __o_coordinateSystem){
            		Float fieldOfView = __o_fieldOfView.Default(60);
            		int coordinateSystem = __o_coordinateSystem.Default(0);
            	HX_STACKFRAME(&_hx_pos_64bef08c33d96394_30_new)
HXLINE(  31)		super::__construct();
HXLINE(  33)		this->set_fieldOfView(fieldOfView);
HXLINE(  34)		this->set_coordinateSystem(coordinateSystem);
            	}

Dynamic PerspectiveLens_obj::__CreateEmpty() { return new PerspectiveLens_obj; }

void *PerspectiveLens_obj::_hx_vtable = 0;

Dynamic PerspectiveLens_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PerspectiveLens_obj > _hx_result = new PerspectiveLens_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool PerspectiveLens_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x19f65503) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x19f65503;
		}
	} else {
		return inClassId==(int)0x3a7a0cde;
	}
}

Float PerspectiveLens_obj::get_fieldOfView(){
            	HX_STACKFRAME(&_hx_pos_64bef08c33d96394_42_get_fieldOfView)
HXDLIN(  42)		return this->_fieldOfView;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PerspectiveLens_obj,get_fieldOfView,return )

Float PerspectiveLens_obj::set_fieldOfView(Float value){
            	HX_STACKFRAME(&_hx_pos_64bef08c33d96394_46_set_fieldOfView)
HXLINE(  47)		if ((value == this->_fieldOfView)) {
HXLINE(  48)			return value;
            		}
HXLINE(  50)		this->_fieldOfView = value;
HXLINE(  52)		this->_focalLengthInv = ::Math_obj::tan(((this->_fieldOfView * ::Math_obj::PI) / ( (Float)(360) )));
HXLINE(  53)		this->_focalLength = (( (Float)(1) ) / this->_focalLengthInv);
HXLINE(  55)		this->invalidateMatrix();
HXLINE(  56)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PerspectiveLens_obj,set_fieldOfView,return )

Float PerspectiveLens_obj::get_focalLength(){
            	HX_STACKFRAME(&_hx_pos_64bef08c33d96394_64_get_focalLength)
HXDLIN(  64)		return this->_focalLength;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PerspectiveLens_obj,get_focalLength,return )

Float PerspectiveLens_obj::set_focalLength(Float value){
            	HX_STACKFRAME(&_hx_pos_64bef08c33d96394_68_set_focalLength)
HXLINE(  69)		if ((value == this->_focalLength)) {
HXLINE(  70)			return value;
            		}
HXLINE(  72)		this->_focalLength = value;
HXLINE(  74)		this->_focalLengthInv = (( (Float)(1) ) / this->_focalLength);
HXLINE(  75)		this->_fieldOfView = ((::Math_obj::atan(this->_focalLengthInv) * ( (Float)(360) )) / ::Math_obj::PI);
HXLINE(  77)		this->invalidateMatrix();
HXLINE(  78)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PerspectiveLens_obj,set_focalLength,return )

 ::openfl::geom::Vector3D PerspectiveLens_obj::unproject(Float nX,Float nY,Float sZ, ::openfl::geom::Vector3D v){
            	HX_GC_STACKFRAME(&_hx_pos_64bef08c33d96394_91_unproject)
HXLINE(  92)		if (::hx::IsNull( v )) {
HXLINE(  92)			v =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE(  93)		v->x = nX;
HXLINE(  94)		v->y = -(nY);
HXLINE(  95)		v->z = sZ;
HXLINE(  96)		v->w = ( (Float)(1) );
HXLINE(  98)		 ::openfl::geom::Vector3D v1 = v;
HXDLIN(  98)		v1->x = (v1->x * sZ);
HXLINE(  99)		 ::openfl::geom::Vector3D v2 = v;
HXDLIN(  99)		v2->y = (v2->y * sZ);
HXLINE( 101)		::away3d::core::math::Matrix3DUtils_obj::transformVector(this->get_unprojectionMatrix(),v,v);
HXLINE( 104)		v->z = sZ;
HXLINE( 106)		return v;
            	}


 ::away3d::cameras::lenses::LensBase PerspectiveLens_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_64bef08c33d96394_110_clone)
HXLINE( 111)		 ::away3d::cameras::lenses::PerspectiveLens clone =  ::away3d::cameras::lenses::PerspectiveLens_obj::__alloc( HX_CTX ,this->_fieldOfView,null());
HXLINE( 112)		clone->_near = this->_near;
HXLINE( 113)		clone->_far = this->_far;
HXLINE( 114)		clone->_aspectRatio = this->_aspectRatio;
HXLINE( 115)		clone->_coordinateSystem = this->_coordinateSystem;
HXLINE( 116)		return clone;
            	}


int PerspectiveLens_obj::get_coordinateSystem(){
            	HX_STACKFRAME(&_hx_pos_64bef08c33d96394_124_get_coordinateSystem)
HXDLIN( 124)		return this->_coordinateSystem;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PerspectiveLens_obj,get_coordinateSystem,return )

int PerspectiveLens_obj::set_coordinateSystem(int value){
            	HX_STACKFRAME(&_hx_pos_64bef08c33d96394_128_set_coordinateSystem)
HXLINE( 129)		if ((value == this->_coordinateSystem)) {
HXLINE( 130)			return value;
            		}
HXLINE( 132)		this->_coordinateSystem = value;
HXLINE( 134)		this->invalidateMatrix();
HXLINE( 135)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PerspectiveLens_obj,set_coordinateSystem,return )

void PerspectiveLens_obj::updateMatrix(){
            	HX_STACKFRAME(&_hx_pos_64bef08c33d96394_142_updateMatrix)
HXLINE( 143)		 ::openfl::_Vector::FloatVector raw = ::away3d::core::math::Matrix3DUtils_obj::RAW_DATA_CONTAINER;
HXLINE( 145)		this->_yMax = (this->_near * this->_focalLengthInv);
HXLINE( 146)		this->_xMax = (this->_yMax * this->_aspectRatio);
HXLINE( 148)		Float left;
HXDLIN( 148)		Float right;
HXDLIN( 148)		Float top;
HXDLIN( 148)		Float bottom;
HXLINE( 150)		bool _hx_tmp;
HXDLIN( 150)		bool _hx_tmp1;
HXDLIN( 150)		bool _hx_tmp2;
HXDLIN( 150)		if ((this->_scissorRect->x == 0)) {
HXLINE( 150)			_hx_tmp2 = (this->_scissorRect->y == 0);
            		}
            		else {
HXLINE( 150)			_hx_tmp2 = false;
            		}
HXDLIN( 150)		if (_hx_tmp2) {
HXLINE( 150)			_hx_tmp1 = (this->_scissorRect->width == this->_viewPort->width);
            		}
            		else {
HXLINE( 150)			_hx_tmp1 = false;
            		}
HXDLIN( 150)		if (_hx_tmp1) {
HXLINE( 150)			_hx_tmp = (this->_scissorRect->height == this->_viewPort->height);
            		}
            		else {
HXLINE( 150)			_hx_tmp = false;
            		}
HXDLIN( 150)		if (_hx_tmp) {
HXLINE( 152)			left = -(this->_xMax);
HXLINE( 153)			right = this->_xMax;
HXLINE( 154)			top = -(this->_yMax);
HXLINE( 155)			bottom = this->_yMax;
HXLINE( 158)			raw->set(0,(this->_near / this->_xMax));
HXLINE( 159)			raw->set(5,(this->_near / this->_yMax));
HXLINE( 160)			raw->set(10,(this->_far / (this->_far - this->_near)));
HXLINE( 161)			raw->set(11,( (Float)(1) ));
HXLINE( 162)			raw->set(1,raw->set(2,raw->set(3,raw->set(4,raw->set(6,raw->set(7,raw->set(8,raw->set(9,raw->set(12,raw->set(13,raw->set(15,( (Float)(0) ))))))))))));
HXLINE( 165)			{
HXLINE( 165)				Float value = -(this->_near);
HXDLIN( 165)				raw->set(14,(value * raw->get(10)));
            			}
            		}
            		else {
HXLINE( 168)			Float xWidth = (this->_xMax * (this->_viewPort->width / this->_scissorRect->width));
HXLINE( 169)			Float yHgt = (this->_yMax * (this->_viewPort->height / this->_scissorRect->height));
HXLINE( 170)			Float center = (((this->_xMax * ((this->_scissorRect->x * ( (Float)(2) )) - this->_viewPort->width)) / this->_scissorRect->width) + this->_xMax);
HXLINE( 171)			Float middle = (((-(this->_yMax) * ((this->_scissorRect->y * ( (Float)(2) )) - this->_viewPort->height)) / this->_scissorRect->height) - this->_yMax);
HXLINE( 173)			left = (center - xWidth);
HXLINE( 174)			right = (center + xWidth);
HXLINE( 175)			top = (middle - yHgt);
HXLINE( 176)			bottom = (middle + yHgt);
HXLINE( 178)			raw->set(0,((( (Float)(2) ) * this->_near) / (right - left)));
HXLINE( 179)			raw->set(5,((( (Float)(2) ) * this->_near) / (bottom - top)));
HXLINE( 180)			raw->set(8,((right + left) / (right - left)));
HXLINE( 181)			raw->set(9,((bottom + top) / (bottom - top)));
HXLINE( 182)			raw->set(10,((this->_far + this->_near) / (this->_far - this->_near)));
HXLINE( 183)			raw->set(11,( (Float)(1) ));
HXLINE( 184)			raw->set(1,raw->set(2,raw->set(3,raw->set(4,raw->set(6,raw->set(7,raw->set(12,raw->set(13,raw->set(15,( (Float)(0) ))))))))));
HXLINE( 186)			raw->set(14,(((( (Float)(-2) ) * this->_far) * this->_near) / (this->_far - this->_near)));
            		}
HXLINE( 190)		if ((this->_coordinateSystem == 1)) {
HXLINE( 191)			raw->set(5,-(raw->get(5)));
            		}
HXLINE( 193)		this->_matrix->copyRawDataFrom(raw,null(),null());
HXLINE( 195)		Float yMaxFar = (this->_far * this->_focalLengthInv);
HXLINE( 196)		Float xMaxFar = (yMaxFar * this->_aspectRatio);
HXLINE( 198)		{
HXLINE( 198)			::Dynamic this1 = this->_frustumCorners;
HXDLIN( 198)			( ( ::openfl::_Vector::FloatVector)(this1) )->set(0,this->_frustumCorners->set(9,left));
            		}
HXLINE( 199)		{
HXLINE( 199)			::Dynamic this2 = this->_frustumCorners;
HXDLIN( 199)			( ( ::openfl::_Vector::FloatVector)(this2) )->set(3,this->_frustumCorners->set(6,right));
            		}
HXLINE( 200)		{
HXLINE( 200)			::Dynamic this3 = this->_frustumCorners;
HXDLIN( 200)			( ( ::openfl::_Vector::FloatVector)(this3) )->set(1,this->_frustumCorners->set(4,top));
            		}
HXLINE( 201)		{
HXLINE( 201)			::Dynamic this4 = this->_frustumCorners;
HXDLIN( 201)			( ( ::openfl::_Vector::FloatVector)(this4) )->set(7,this->_frustumCorners->set(10,bottom));
            		}
HXLINE( 203)		{
HXLINE( 203)			::Dynamic this5 = this->_frustumCorners;
HXDLIN( 203)			( ( ::openfl::_Vector::FloatVector)(this5) )->set(12,this->_frustumCorners->set(21,-(xMaxFar)));
            		}
HXLINE( 204)		{
HXLINE( 204)			::Dynamic this6 = this->_frustumCorners;
HXDLIN( 204)			( ( ::openfl::_Vector::FloatVector)(this6) )->set(15,this->_frustumCorners->set(18,xMaxFar));
            		}
HXLINE( 205)		{
HXLINE( 205)			::Dynamic this7 = this->_frustumCorners;
HXDLIN( 205)			( ( ::openfl::_Vector::FloatVector)(this7) )->set(13,this->_frustumCorners->set(16,-(yMaxFar)));
            		}
HXLINE( 206)		{
HXLINE( 206)			::Dynamic this8 = this->_frustumCorners;
HXDLIN( 206)			( ( ::openfl::_Vector::FloatVector)(this8) )->set(19,this->_frustumCorners->set(22,yMaxFar));
            		}
HXLINE( 208)		{
HXLINE( 208)			::Dynamic this9 = this->_frustumCorners;
HXDLIN( 208)			::Dynamic this10 = this->_frustumCorners;
HXDLIN( 208)			::Dynamic this11 = this->_frustumCorners;
HXDLIN( 208)			( ( ::openfl::_Vector::FloatVector)(this9) )->set(2,( ( ::openfl::_Vector::FloatVector)(this10) )->set(5,( ( ::openfl::_Vector::FloatVector)(this11) )->set(8,this->_frustumCorners->set(11,this->_near))));
            		}
HXLINE( 209)		{
HXLINE( 209)			::Dynamic this12 = this->_frustumCorners;
HXDLIN( 209)			::Dynamic this13 = this->_frustumCorners;
HXDLIN( 209)			::Dynamic this14 = this->_frustumCorners;
HXDLIN( 209)			( ( ::openfl::_Vector::FloatVector)(this12) )->set(14,( ( ::openfl::_Vector::FloatVector)(this13) )->set(17,( ( ::openfl::_Vector::FloatVector)(this14) )->set(20,this->_frustumCorners->set(23,this->_far))));
            		}
HXLINE( 211)		this->_matrixInvalid = false;
            	}



::hx::ObjectPtr< PerspectiveLens_obj > PerspectiveLens_obj::__new(::hx::Null< Float >  __o_fieldOfView,::hx::Null< int >  __o_coordinateSystem) {
	::hx::ObjectPtr< PerspectiveLens_obj > __this = new PerspectiveLens_obj();
	__this->__construct(__o_fieldOfView,__o_coordinateSystem);
	return __this;
}

::hx::ObjectPtr< PerspectiveLens_obj > PerspectiveLens_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_fieldOfView,::hx::Null< int >  __o_coordinateSystem) {
	PerspectiveLens_obj *__this = (PerspectiveLens_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PerspectiveLens_obj), true, "away3d.cameras.lenses.PerspectiveLens"));
	*(void **)__this = PerspectiveLens_obj::_hx_vtable;
	__this->__construct(__o_fieldOfView,__o_coordinateSystem);
	return __this;
}

PerspectiveLens_obj::PerspectiveLens_obj()
{
}

::hx::Val PerspectiveLens_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_yMax") ) { return ::hx::Val( _yMax ); }
		if (HX_FIELD_EQ(inName,"_xMax") ) { return ::hx::Val( _xMax ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"unproject") ) { return ::hx::Val( unproject_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fieldOfView") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_fieldOfView() ); }
		if (HX_FIELD_EQ(inName,"focalLength") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_focalLength() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_fieldOfView") ) { return ::hx::Val( _fieldOfView ); }
		if (HX_FIELD_EQ(inName,"_focalLength") ) { return ::hx::Val( _focalLength ); }
		if (HX_FIELD_EQ(inName,"updateMatrix") ) { return ::hx::Val( updateMatrix_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_focalLengthInv") ) { return ::hx::Val( _focalLengthInv ); }
		if (HX_FIELD_EQ(inName,"get_fieldOfView") ) { return ::hx::Val( get_fieldOfView_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_fieldOfView") ) { return ::hx::Val( set_fieldOfView_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_focalLength") ) { return ::hx::Val( get_focalLength_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_focalLength") ) { return ::hx::Val( set_focalLength_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"coordinateSystem") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_coordinateSystem() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_coordinateSystem") ) { return ::hx::Val( _coordinateSystem ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_coordinateSystem") ) { return ::hx::Val( get_coordinateSystem_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_coordinateSystem") ) { return ::hx::Val( set_coordinateSystem_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PerspectiveLens_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_yMax") ) { _yMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_xMax") ) { _xMax=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fieldOfView") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_fieldOfView(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"focalLength") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_focalLength(inValue.Cast< Float >()) ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_fieldOfView") ) { _fieldOfView=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_focalLength") ) { _focalLength=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_focalLengthInv") ) { _focalLengthInv=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"coordinateSystem") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_coordinateSystem(inValue.Cast< int >()) ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_coordinateSystem") ) { _coordinateSystem=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PerspectiveLens_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("coordinateSystem",87,eb,5c,ab));
	outFields->push(HX_("fieldOfView",76,e7,4b,5a));
	outFields->push(HX_("focalLength",2b,b1,0b,57));
	outFields->push(HX_("_fieldOfView",77,95,55,c0));
	outFields->push(HX_("_focalLength",2c,5f,15,bd));
	outFields->push(HX_("_focalLengthInv",25,29,9d,c6));
	outFields->push(HX_("_yMax",8a,af,46,03));
	outFields->push(HX_("_xMax",eb,78,9d,02));
	outFields->push(HX_("_coordinateSystem",e6,d9,d7,43));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PerspectiveLens_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(PerspectiveLens_obj,_fieldOfView),HX_("_fieldOfView",77,95,55,c0)},
	{::hx::fsFloat,(int)offsetof(PerspectiveLens_obj,_focalLength),HX_("_focalLength",2c,5f,15,bd)},
	{::hx::fsFloat,(int)offsetof(PerspectiveLens_obj,_focalLengthInv),HX_("_focalLengthInv",25,29,9d,c6)},
	{::hx::fsFloat,(int)offsetof(PerspectiveLens_obj,_yMax),HX_("_yMax",8a,af,46,03)},
	{::hx::fsFloat,(int)offsetof(PerspectiveLens_obj,_xMax),HX_("_xMax",eb,78,9d,02)},
	{::hx::fsInt,(int)offsetof(PerspectiveLens_obj,_coordinateSystem),HX_("_coordinateSystem",e6,d9,d7,43)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PerspectiveLens_obj_sStaticStorageInfo = 0;
#endif

static ::String PerspectiveLens_obj_sMemberFields[] = {
	HX_("_fieldOfView",77,95,55,c0),
	HX_("_focalLength",2c,5f,15,bd),
	HX_("_focalLengthInv",25,29,9d,c6),
	HX_("_yMax",8a,af,46,03),
	HX_("_xMax",eb,78,9d,02),
	HX_("_coordinateSystem",e6,d9,d7,43),
	HX_("get_fieldOfView",0d,9f,2d,1b),
	HX_("set_fieldOfView",19,1c,f9,16),
	HX_("get_focalLength",c2,68,ed,17),
	HX_("set_focalLength",ce,e5,b8,13),
	HX_("unproject",a0,19,ed,f1),
	HX_("clone",5d,13,63,48),
	HX_("get_coordinateSystem",90,50,c7,c9),
	HX_("set_coordinateSystem",04,08,7f,96),
	HX_("updateMatrix",2a,dd,8b,bb),
	::String(null()) };

::hx::Class PerspectiveLens_obj::__mClass;

void PerspectiveLens_obj::__register()
{
	PerspectiveLens_obj _hx_dummy;
	PerspectiveLens_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.cameras.lenses.PerspectiveLens",07,9d,f0,44);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PerspectiveLens_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PerspectiveLens_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PerspectiveLens_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PerspectiveLens_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace cameras
} // end namespace lenses
