#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_away3d_controllers_ControllerBase
#include <away3d/controllers/ControllerBase.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_math_MathConsts
#include <away3d/core/math/MathConsts.h>
#endif
#ifndef INCLUDED_away3d_core_math_Matrix3DUtils
#include <away3d/core/math/Matrix3DUtils.h>
#endif
#ifndef INCLUDED_away3d_events_Object3DEvent
#include <away3d/events/Object3DEvent.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
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
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_55_new,"away3d.core.base.Object3D","new",0x48906cbf,"away3d.core.base.Object3D.new","away3d/core/base/Object3D.hx",55,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_110_invalidatePivot,"away3d.core.base.Object3D","invalidatePivot",0x91759226,"away3d.core.base.Object3D.invalidatePivot","away3d/core/base/Object3D.hx",110,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_117_invalidatePosition,"away3d.core.base.Object3D","invalidatePosition",0xf2470fc5,"away3d.core.base.Object3D.invalidatePosition","away3d/core/base/Object3D.hx",117,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_130_notifyPositionChanged,"away3d.core.base.Object3D","notifyPositionChanged",0xf11b66a1,"away3d.core.base.Object3D.notifyPositionChanged","away3d/core/base/Object3D.hx",130,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_138_addEventListener,"away3d.core.base.Object3D","addEventListener",0x10c7e00e,"away3d.core.base.Object3D.addEventListener","away3d/core/base/Object3D.hx",138,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_151_removeEventListener,"away3d.core.base.Object3D","removeEventListener",0x02251229,"away3d.core.base.Object3D.removeEventListener","away3d/core/base/Object3D.hx",151,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_168_invalidateRotation,"away3d.core.base.Object3D","invalidateRotation",0x2fd2ac5a,"away3d.core.base.Object3D.invalidateRotation","away3d/core/base/Object3D.hx",168,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_181_notifyRotationChanged,"away3d.core.base.Object3D","notifyRotationChanged",0x52d7b6ac,"away3d.core.base.Object3D.notifyRotationChanged","away3d/core/base/Object3D.hx",181,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_189_invalidateScale,"away3d.core.base.Object3D","invalidateScale",0x47a215ee,"away3d.core.base.Object3D.invalidateScale","away3d/core/base/Object3D.hx",189,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_202_notifyScaleChanged,"away3d.core.base.Object3D","notifyScaleChanged",0x60152674,"away3d.core.base.Object3D.notifyScaleChanged","away3d/core/base/Object3D.hx",202,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_233_get_x,"away3d.core.base.Object3D","get_x",0xd744576e,"away3d.core.base.Object3D.get_x","away3d/core/base/Object3D.hx",233,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_237_set_x,"away3d.core.base.Object3D","set_x",0xc0134d7a,"away3d.core.base.Object3D.set_x","away3d/core/base/Object3D.hx",237,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_252_get_y,"away3d.core.base.Object3D","get_y",0xd744576f,"away3d.core.base.Object3D.get_y","away3d/core/base/Object3D.hx",252,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_256_set_y,"away3d.core.base.Object3D","set_y",0xc0134d7b,"away3d.core.base.Object3D.set_y","away3d/core/base/Object3D.hx",256,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_271_get_z,"away3d.core.base.Object3D","get_z",0xd7445770,"away3d.core.base.Object3D.get_z","away3d/core/base/Object3D.hx",271,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_275_set_z,"away3d.core.base.Object3D","set_z",0xc0134d7c,"away3d.core.base.Object3D.set_z","away3d/core/base/Object3D.hx",275,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_290_get_rotationX,"away3d.core.base.Object3D","get_rotationX",0xf5749650,"away3d.core.base.Object3D.get_rotationX","away3d/core/base/Object3D.hx",290,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_294_set_rotationX,"away3d.core.base.Object3D","set_rotationX",0x3a7a785c,"away3d.core.base.Object3D.set_rotationX","away3d/core/base/Object3D.hx",294,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_309_get_rotationY,"away3d.core.base.Object3D","get_rotationY",0xf5749651,"away3d.core.base.Object3D.get_rotationY","away3d/core/base/Object3D.hx",309,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_313_set_rotationY,"away3d.core.base.Object3D","set_rotationY",0x3a7a785d,"away3d.core.base.Object3D.set_rotationY","away3d/core/base/Object3D.hx",313,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_328_get_rotationZ,"away3d.core.base.Object3D","get_rotationZ",0xf5749652,"away3d.core.base.Object3D.get_rotationZ","away3d/core/base/Object3D.hx",328,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_332_set_rotationZ,"away3d.core.base.Object3D","set_rotationZ",0x3a7a785e,"away3d.core.base.Object3D.set_rotationZ","away3d/core/base/Object3D.hx",332,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_347_get_scaleX,"away3d.core.base.Object3D","get_scaleX",0x9b3497d8,"away3d.core.base.Object3D.get_scaleX","away3d/core/base/Object3D.hx",347,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_351_set_scaleX,"away3d.core.base.Object3D","set_scaleX",0x9eb2364c,"away3d.core.base.Object3D.set_scaleX","away3d/core/base/Object3D.hx",351,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_366_get_scaleY,"away3d.core.base.Object3D","get_scaleY",0x9b3497d9,"away3d.core.base.Object3D.get_scaleY","away3d/core/base/Object3D.hx",366,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_370_set_scaleY,"away3d.core.base.Object3D","set_scaleY",0x9eb2364d,"away3d.core.base.Object3D.set_scaleY","away3d/core/base/Object3D.hx",370,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_385_get_scaleZ,"away3d.core.base.Object3D","get_scaleZ",0x9b3497da,"away3d.core.base.Object3D.get_scaleZ","away3d/core/base/Object3D.hx",385,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_389_set_scaleZ,"away3d.core.base.Object3D","set_scaleZ",0x9eb2364e,"away3d.core.base.Object3D.set_scaleZ","away3d/core/base/Object3D.hx",389,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_403_get_eulers,"away3d.core.base.Object3D","get_eulers",0x66ac1034,"away3d.core.base.Object3D.get_eulers","away3d/core/base/Object3D.hx",403,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_412_set_eulers,"away3d.core.base.Object3D","set_eulers",0x6a29aea8,"away3d.core.base.Object3D.set_eulers","away3d/core/base/Object3D.hx",412,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_425_get_transform,"away3d.core.base.Object3D","get_transform",0xce186a62,"away3d.core.base.Object3D.get_transform","away3d/core/base/Object3D.hx",425,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_433_set_transform,"away3d.core.base.Object3D","set_transform",0x131e4c6e,"away3d.core.base.Object3D.set_transform","away3d/core/base/Object3D.hx",433,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_482_get_pivotPoint,"away3d.core.base.Object3D","get_pivotPoint",0xb1dab478,"away3d.core.base.Object3D.get_pivotPoint","away3d/core/base/Object3D.hx",482,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_486_set_pivotPoint,"away3d.core.base.Object3D","set_pivotPoint",0xd1fa9cec,"away3d.core.base.Object3D.set_pivotPoint","away3d/core/base/Object3D.hx",486,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_500_get_position,"away3d.core.base.Object3D","get_position",0x0d06b473,"away3d.core.base.Object3D.get_position","away3d/core/base/Object3D.hx",500,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_507_set_position,"away3d.core.base.Object3D","set_position",0x21ffd7e7,"away3d.core.base.Object3D.set_position","away3d/core/base/Object3D.hx",507,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_521_getPosition,"away3d.core.base.Object3D","getPosition",0x38bcf6be,"away3d.core.base.Object3D.getPosition","away3d/core/base/Object3D.hx",521,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_532_get_forwardVector,"away3d.core.base.Object3D","get_forwardVector",0xe106185e,"away3d.core.base.Object3D.get_forwardVector","away3d/core/base/Object3D.hx",532,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_540_get_rightVector,"away3d.core.base.Object3D","get_rightVector",0xa2e96435,"away3d.core.base.Object3D.get_rightVector","away3d/core/base/Object3D.hx",540,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_548_get_upVector,"away3d.core.base.Object3D","get_upVector",0x63705548,"away3d.core.base.Object3D.get_upVector","away3d/core/base/Object3D.hx",548,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_555_get_backVector,"away3d.core.base.Object3D","get_backVector",0xc1f7b094,"away3d.core.base.Object3D.get_backVector","away3d/core/base/Object3D.hx",555,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_566_get_leftVector,"away3d.core.base.Object3D","get_leftVector",0xb27e8674,"away3d.core.base.Object3D.get_leftVector","away3d/core/base/Object3D.hx",566,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_577_get_downVector,"away3d.core.base.Object3D","get_downVector",0xc071ad0f,"away3d.core.base.Object3D.get_downVector","away3d/core/base/Object3D.hx",577,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_607_scale,"away3d.core.base.Object3D","scale",0xbeb280a9,"away3d.core.base.Object3D.scale","away3d/core/base/Object3D.hx",607,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_622_moveForward,"away3d.core.base.Object3D","moveForward",0x0615ae13,"away3d.core.base.Object3D.moveForward","away3d/core/base/Object3D.hx",622,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_632_moveBackward,"away3d.core.base.Object3D","moveBackward",0x4840d3d5,"away3d.core.base.Object3D.moveBackward","away3d/core/base/Object3D.hx",632,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_642_moveLeft,"away3d.core.base.Object3D","moveLeft",0xf0dc9ef9,"away3d.core.base.Object3D.moveLeft","away3d/core/base/Object3D.hx",642,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_652_moveRight,"away3d.core.base.Object3D","moveRight",0x473b88aa,"away3d.core.base.Object3D.moveRight","away3d/core/base/Object3D.hx",652,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_662_moveUp,"away3d.core.base.Object3D","moveUp",0xae04fccd,"away3d.core.base.Object3D.moveUp","away3d/core/base/Object3D.hx",662,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_672_moveDown,"away3d.core.base.Object3D","moveDown",0xeb9a8f54,"away3d.core.base.Object3D.moveDown","away3d/core/base/Object3D.hx",672,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_683_moveTo,"away3d.core.base.Object3D","moveTo",0xae04fbed,"away3d.core.base.Object3D.moveTo","away3d/core/base/Object3D.hx",683,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_701_movePivot,"away3d.core.base.Object3D","movePivot",0x2079c790,"away3d.core.base.Object3D.movePivot","away3d/core/base/Object3D.hx",701,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_717_translate,"away3d.core.base.Object3D","translate",0xe99084ed,"away3d.core.base.Object3D.translate","away3d/core/base/Object3D.hx",717,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_735_translateLocal,"away3d.core.base.Object3D","translateLocal",0x56c3b93e,"away3d.core.base.Object3D.translateLocal","away3d/core/base/Object3D.hx",735,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_757_pitch,"away3d.core.base.Object3D","pitch",0x08846ddf,"away3d.core.base.Object3D.pitch","away3d/core/base/Object3D.hx",757,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_767_yaw,"away3d.core.base.Object3D","yaw",0x4898c20e,"away3d.core.base.Object3D.yaw","away3d/core/base/Object3D.hx",767,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_777_roll,"away3d.core.base.Object3D","roll",0x387b223e,"away3d.core.base.Object3D.roll","away3d/core/base/Object3D.hx",777,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_781_clone,"away3d.core.base.Object3D","clone",0x8e46c57c,"away3d.core.base.Object3D.clone","away3d/core/base/Object3D.hx",781,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_798_rotateTo,"away3d.core.base.Object3D","rotateTo",0x0ef847f7,"away3d.core.base.Object3D.rotateTo","away3d/core/base/Object3D.hx",798,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_813_rotate,"away3d.core.base.Object3D","rotate",0xac786f5c,"away3d.core.base.Object3D.rotate","away3d/core/base/Object3D.hx",813,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_836_lookAt,"away3d.core.base.Object3D","lookAt",0x430d9e33,"away3d.core.base.Object3D.lookAt","away3d/core/base/Object3D.hx",836,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_910_dispose,"away3d.core.base.Object3D","dispose",0x0718387e,"away3d.core.base.Object3D.dispose","away3d/core/base/Object3D.hx",910,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_918_disposeAsset,"away3d.core.base.Object3D","disposeAsset",0x587b1892,"away3d.core.base.Object3D.disposeAsset","away3d/core/base/Object3D.hx",918,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_926_invalidateTransform,"away3d.core.base.Object3D","invalidateTransform",0x8127f6d0,"away3d.core.base.Object3D.invalidateTransform","away3d/core/base/Object3D.hx",926,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_930_updateTransform,"away3d.core.base.Object3D","updateTransform",0x76432d02,"away3d.core.base.Object3D.updateTransform","away3d/core/base/Object3D.hx",930,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_968_get_zOffset,"away3d.core.base.Object3D","get_zOffset",0x33d79723,"away3d.core.base.Object3D.get_zOffset","away3d/core/base/Object3D.hx",968,0x406f3990)
HX_LOCAL_STACK_FRAME(_hx_pos_0a48ad64e7d132bb_972_set_zOffset,"away3d.core.base.Object3D","set_zOffset",0x3e449e2f,"away3d.core.base.Object3D.set_zOffset","away3d/core/base/Object3D.hx",972,0x406f3990)
namespace away3d{
namespace core{
namespace base{

void Object3D_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_55_new)
HXLINE( 220)		this->_sca =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 219)		this->_rot =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 218)		this->_pos =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 217)		this->_pivotZero = true;
HXLINE( 216)		this->_pivotPoint =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 215)		this->_z = ((Float)0);
HXLINE( 214)		this->_y = ((Float)0);
HXLINE( 213)		this->_x = ((Float)0);
HXLINE( 212)		this->_scaleZ = ((Float)1);
HXLINE( 211)		this->_scaleY = ((Float)1);
HXLINE( 210)		this->_scaleX = ((Float)1);
HXLINE( 209)		this->_transform =  ::openfl::geom::Matrix3D_obj::__alloc( HX_CTX ,null());
HXLINE( 107)		this->_zOffset = 0;
HXLINE( 102)		this->_flipY =  ::openfl::geom::Matrix3D_obj::__alloc( HX_CTX ,null());
HXLINE( 100)		this->_eulers =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  99)		this->_rotationZ = ((Float)0);
HXLINE(  98)		this->_rotationY = ((Float)0);
HXLINE(  97)		this->_rotationX = ((Float)0);
HXLINE(  82)		this->_transformDirty = true;
HXLINE(  81)		this->_smallestNumber = ((Float)0.0000000000000000000001);
HXLINE( 591)		::Array< ::Dynamic> array = null();
HXDLIN( 591)		this->_transformComponents =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,3,true,array,true);
HXLINE( 592)		this->_transformComponents->set(0,this->_pos).StaticCast<  ::openfl::geom::Vector3D >();
HXLINE( 593)		this->_transformComponents->set(1,this->_rot).StaticCast<  ::openfl::geom::Vector3D >();
HXLINE( 594)		this->_transformComponents->set(2,this->_sca).StaticCast<  ::openfl::geom::Vector3D >();
HXLINE( 596)		this->_transform->identity();
HXLINE( 598)		this->_flipY->appendScale(( (Float)(1) ),( (Float)(-1) ),( (Float)(1) ));
HXLINE( 599)		super::__construct(null());
            	}

Dynamic Object3D_obj::__CreateEmpty() { return new Object3D_obj; }

void *Object3D_obj::_hx_vtable = 0;

Dynamic Object3D_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Object3D_obj > _hx_result = new Object3D_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Object3D_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x13fff02b) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x13fff02b;
		}
	} else {
		return inClassId==(int)0x37f46043;
	}
}

void Object3D_obj::invalidatePivot(){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_110_invalidatePivot)
HXLINE( 111)		bool _hx_tmp;
HXDLIN( 111)		bool _hx_tmp1;
HXDLIN( 111)		if ((this->_pivotPoint->x == 0)) {
HXLINE( 111)			_hx_tmp1 = (this->_pivotPoint->y == 0);
            		}
            		else {
HXLINE( 111)			_hx_tmp1 = false;
            		}
HXDLIN( 111)		if (_hx_tmp1) {
HXLINE( 111)			_hx_tmp = (this->_pivotPoint->z == 0);
            		}
            		else {
HXLINE( 111)			_hx_tmp = false;
            		}
HXDLIN( 111)		this->_pivotZero = _hx_tmp;
HXLINE( 113)		this->invalidateTransform();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,invalidatePivot,(void))

void Object3D_obj::invalidatePosition(){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_117_invalidatePosition)
HXLINE( 118)		if (this->_positionDirty) {
HXLINE( 119)			return;
            		}
HXLINE( 121)		this->_positionDirty = true;
HXLINE( 123)		this->invalidateTransform();
HXLINE( 125)		if (this->_listenToPositionChanged) {
HXLINE( 126)			this->notifyPositionChanged();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,invalidatePosition,(void))

void Object3D_obj::notifyPositionChanged(){
            	HX_GC_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_130_notifyPositionChanged)
HXLINE( 131)		if (::hx::IsNull( this->_positionChanged )) {
HXLINE( 132)			this->_positionChanged =  ::away3d::events::Object3DEvent_obj::__alloc( HX_CTX ,HX_("positionChanged",4b,8f,04,cc),::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 134)		this->dispatchEvent(this->_positionChanged);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,notifyPositionChanged,(void))

void Object3D_obj::addEventListener(::String _tmp_type, ::Dynamic _tmp_listener,::hx::Null< bool >  __o_useCapture,::hx::Null< int >  __o_priority,::hx::Null< bool >  __o_useWeakReference){
            		bool useCapture = __o_useCapture.Default(false);
            		int priority = __o_priority.Default(0);
            		bool useWeakReference = __o_useWeakReference.Default(false);
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_138_addEventListener)
HXLINE( 139)		::String type = _tmp_type;
HXDLIN( 139)		 ::Dynamic listener = _tmp_listener;
HXDLIN( 139)		this->super::addEventListener(type,listener,useCapture,priority,useWeakReference);
HXLINE( 140)		::String _hx_switch_0 = type;
            		if (  (_hx_switch_0==HX_("positionChanged",4b,8f,04,cc)) ){
HXLINE( 142)			this->_listenToPositionChanged = true;
HXDLIN( 142)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("rotationChanged",56,df,c0,2d)) ){
HXLINE( 144)			this->_listenToRotationChanged = true;
HXDLIN( 144)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("scaleChanged",8a,4f,16,64)) ){
HXLINE( 146)			this->_listenToScaleChanged = true;
HXDLIN( 146)			goto _hx_goto_4;
            		}
            		_hx_goto_4:;
            	}


void Object3D_obj::removeEventListener(::String _tmp_type, ::Dynamic _tmp_listener,::hx::Null< bool >  __o_useCapture){
            		bool useCapture = __o_useCapture.Default(false);
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_151_removeEventListener)
HXLINE( 152)		::String type = _tmp_type;
HXDLIN( 152)		 ::Dynamic listener = _tmp_listener;
HXDLIN( 152)		this->super::removeEventListener(type,listener,useCapture);
HXLINE( 154)		if (this->hasEventListener(type)) {
HXLINE( 155)			return;
            		}
HXLINE( 157)		::String _hx_switch_0 = type;
            		if (  (_hx_switch_0==HX_("positionChanged",4b,8f,04,cc)) ){
HXLINE( 159)			this->_listenToPositionChanged = false;
HXDLIN( 159)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("rotationChanged",56,df,c0,2d)) ){
HXLINE( 161)			this->_listenToRotationChanged = false;
HXDLIN( 161)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("scaleChanged",8a,4f,16,64)) ){
HXLINE( 163)			this->_listenToScaleChanged = false;
HXDLIN( 163)			goto _hx_goto_6;
            		}
            		_hx_goto_6:;
            	}


void Object3D_obj::invalidateRotation(){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_168_invalidateRotation)
HXLINE( 169)		if (this->_rotationDirty) {
HXLINE( 170)			return;
            		}
HXLINE( 172)		this->_rotationDirty = true;
HXLINE( 174)		this->invalidateTransform();
HXLINE( 176)		if (this->_listenToRotationChanged) {
HXLINE( 177)			this->notifyRotationChanged();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,invalidateRotation,(void))

void Object3D_obj::notifyRotationChanged(){
            	HX_GC_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_181_notifyRotationChanged)
HXLINE( 182)		if (::hx::IsNull( this->_rotationChanged )) {
HXLINE( 183)			this->_rotationChanged =  ::away3d::events::Object3DEvent_obj::__alloc( HX_CTX ,HX_("rotationChanged",56,df,c0,2d),::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 185)		this->dispatchEvent(this->_rotationChanged);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,notifyRotationChanged,(void))

void Object3D_obj::invalidateScale(){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_189_invalidateScale)
HXLINE( 190)		if (this->_scaleDirty) {
HXLINE( 191)			return;
            		}
HXLINE( 193)		this->_scaleDirty = true;
HXLINE( 195)		this->invalidateTransform();
HXLINE( 197)		if (this->_listenToScaleChanged) {
HXLINE( 198)			this->notifyScaleChanged();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,invalidateScale,(void))

void Object3D_obj::notifyScaleChanged(){
            	HX_GC_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_202_notifyScaleChanged)
HXLINE( 203)		if (::hx::IsNull( this->_scaleChanged )) {
HXLINE( 204)			this->_scaleChanged =  ::away3d::events::Object3DEvent_obj::__alloc( HX_CTX ,HX_("scaleChanged",8a,4f,16,64),::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 206)		this->dispatchEvent(this->_scaleChanged);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,notifyScaleChanged,(void))

Float Object3D_obj::get_x(){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_233_get_x)
HXDLIN( 233)		return this->_x;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,get_x,return )

Float Object3D_obj::set_x(Float val){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_237_set_x)
HXLINE( 238)		if ((this->_x == val)) {
HXLINE( 239)			return val;
            		}
HXLINE( 241)		this->_x = val;
HXLINE( 243)		this->invalidatePosition();
HXLINE( 244)		return val;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,set_x,return )

Float Object3D_obj::get_y(){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_252_get_y)
HXDLIN( 252)		return this->_y;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,get_y,return )

Float Object3D_obj::set_y(Float val){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_256_set_y)
HXLINE( 257)		if ((this->_y == val)) {
HXLINE( 258)			return val;
            		}
HXLINE( 260)		this->_y = val;
HXLINE( 262)		this->invalidatePosition();
HXLINE( 263)		return val;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,set_y,return )

Float Object3D_obj::get_z(){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_271_get_z)
HXDLIN( 271)		return this->_z;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,get_z,return )

Float Object3D_obj::set_z(Float val){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_275_set_z)
HXLINE( 276)		if ((this->_z == val)) {
HXLINE( 277)			return val;
            		}
HXLINE( 279)		this->_z = val;
HXLINE( 281)		this->invalidatePosition();
HXLINE( 282)		return val;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,set_z,return )

Float Object3D_obj::get_rotationX(){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_290_get_rotationX)
HXDLIN( 290)		return (this->_rotationX * ::away3d::core::math::MathConsts_obj::RADIANS_TO_DEGREES);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,get_rotationX,return )

Float Object3D_obj::set_rotationX(Float val){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_294_set_rotationX)
HXLINE( 295)		if ((this->get_rotationX() == val)) {
HXLINE( 296)			return val;
            		}
HXLINE( 298)		this->_rotationX = (val * ::away3d::core::math::MathConsts_obj::DEGREES_TO_RADIANS);
HXLINE( 300)		this->invalidateRotation();
HXLINE( 301)		return val;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,set_rotationX,return )

Float Object3D_obj::get_rotationY(){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_309_get_rotationY)
HXDLIN( 309)		return (this->_rotationY * ::away3d::core::math::MathConsts_obj::RADIANS_TO_DEGREES);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,get_rotationY,return )

Float Object3D_obj::set_rotationY(Float val){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_313_set_rotationY)
HXLINE( 314)		if ((this->get_rotationY() == val)) {
HXLINE( 315)			return val;
            		}
HXLINE( 317)		this->_rotationY = (val * ::away3d::core::math::MathConsts_obj::DEGREES_TO_RADIANS);
HXLINE( 319)		this->invalidateRotation();
HXLINE( 320)		return val;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,set_rotationY,return )

Float Object3D_obj::get_rotationZ(){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_328_get_rotationZ)
HXDLIN( 328)		return (this->_rotationZ * ::away3d::core::math::MathConsts_obj::RADIANS_TO_DEGREES);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,get_rotationZ,return )

Float Object3D_obj::set_rotationZ(Float val){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_332_set_rotationZ)
HXLINE( 333)		if ((this->get_rotationZ() == val)) {
HXLINE( 334)			return val;
            		}
HXLINE( 336)		this->_rotationZ = (val * ::away3d::core::math::MathConsts_obj::DEGREES_TO_RADIANS);
HXLINE( 338)		this->invalidateRotation();
HXLINE( 339)		return val;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,set_rotationZ,return )

Float Object3D_obj::get_scaleX(){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_347_get_scaleX)
HXDLIN( 347)		return this->_scaleX;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,get_scaleX,return )

Float Object3D_obj::set_scaleX(Float val){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_351_set_scaleX)
HXLINE( 352)		if ((this->_scaleX == val)) {
HXLINE( 353)			return val;
            		}
HXLINE( 355)		this->_scaleX = val;
HXLINE( 357)		this->invalidateScale();
HXLINE( 358)		return val;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,set_scaleX,return )

Float Object3D_obj::get_scaleY(){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_366_get_scaleY)
HXDLIN( 366)		return this->_scaleY;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,get_scaleY,return )

Float Object3D_obj::set_scaleY(Float val){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_370_set_scaleY)
HXLINE( 371)		if ((this->_scaleY == val)) {
HXLINE( 372)			return val;
            		}
HXLINE( 374)		this->_scaleY = val;
HXLINE( 376)		this->invalidateScale();
HXLINE( 377)		return val;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,set_scaleY,return )

Float Object3D_obj::get_scaleZ(){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_385_get_scaleZ)
HXDLIN( 385)		return this->_scaleZ;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,get_scaleZ,return )

Float Object3D_obj::set_scaleZ(Float val){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_389_set_scaleZ)
HXLINE( 390)		if ((this->_scaleZ == val)) {
HXLINE( 391)			return val;
            		}
HXLINE( 393)		this->_scaleZ = val;
HXLINE( 395)		this->invalidateScale();
HXLINE( 396)		return val;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,set_scaleZ,return )

 ::openfl::geom::Vector3D Object3D_obj::get_eulers(){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_403_get_eulers)
HXLINE( 404)		this->_eulers->x = (this->_rotationX * ::away3d::core::math::MathConsts_obj::RADIANS_TO_DEGREES);
HXLINE( 405)		this->_eulers->y = (this->_rotationY * ::away3d::core::math::MathConsts_obj::RADIANS_TO_DEGREES);
HXLINE( 406)		this->_eulers->z = (this->_rotationZ * ::away3d::core::math::MathConsts_obj::RADIANS_TO_DEGREES);
HXLINE( 408)		return this->_eulers;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,get_eulers,return )

 ::openfl::geom::Vector3D Object3D_obj::set_eulers( ::openfl::geom::Vector3D value){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_412_set_eulers)
HXLINE( 413)		this->_rotationX = (value->x * ::away3d::core::math::MathConsts_obj::DEGREES_TO_RADIANS);
HXLINE( 414)		this->_rotationY = (value->y * ::away3d::core::math::MathConsts_obj::DEGREES_TO_RADIANS);
HXLINE( 415)		this->_rotationZ = (value->z * ::away3d::core::math::MathConsts_obj::DEGREES_TO_RADIANS);
HXLINE( 417)		this->invalidateRotation();
HXLINE( 418)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,set_eulers,return )

 ::openfl::geom::Matrix3D Object3D_obj::get_transform(){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_425_get_transform)
HXLINE( 426)		if (this->_transformDirty) {
HXLINE( 427)			this->updateTransform();
            		}
HXLINE( 429)		return this->_transform;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,get_transform,return )

 ::openfl::geom::Matrix3D Object3D_obj::set_transform( ::openfl::geom::Matrix3D val){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_433_set_transform)
HXLINE( 435)		if ((val->rawData->get(0) == 0)) {
HXLINE( 436)			 ::openfl::_Vector::FloatVector raw = ::away3d::core::math::Matrix3DUtils_obj::RAW_DATA_CONTAINER;
HXLINE( 437)			val->copyRawDataTo(raw,null(),null());
HXLINE( 438)			raw->set(0,this->_smallestNumber);
HXLINE( 439)			val->copyRawDataFrom(raw,null(),null());
            		}
HXLINE( 442)		 ::openfl::_Vector::ObjectVector elements = ::away3d::core::math::Matrix3DUtils_obj::decompose(val,null());
HXLINE( 443)		 ::openfl::geom::Vector3D vec = elements->get(0).StaticCast<  ::openfl::geom::Vector3D >();
HXLINE( 447)		bool _hx_tmp;
HXDLIN( 447)		bool _hx_tmp1;
HXDLIN( 447)		if ((this->_x == vec->x)) {
HXLINE( 447)			_hx_tmp1 = (this->_y != vec->y);
            		}
            		else {
HXLINE( 447)			_hx_tmp1 = true;
            		}
HXDLIN( 447)		if (!(_hx_tmp1)) {
HXLINE( 447)			_hx_tmp = (this->_z != vec->z);
            		}
            		else {
HXLINE( 447)			_hx_tmp = true;
            		}
HXDLIN( 447)		if (_hx_tmp) {
HXLINE( 448)			this->_x = vec->x;
HXLINE( 449)			this->_y = vec->y;
HXLINE( 450)			this->_z = vec->z;
HXLINE( 452)			this->invalidatePosition();
            		}
HXLINE( 455)		vec = elements->get(1).StaticCast<  ::openfl::geom::Vector3D >();
HXLINE( 457)		bool _hx_tmp2;
HXDLIN( 457)		bool _hx_tmp3;
HXDLIN( 457)		if ((this->_rotationX == vec->x)) {
HXLINE( 457)			_hx_tmp3 = (this->_rotationY != vec->y);
            		}
            		else {
HXLINE( 457)			_hx_tmp3 = true;
            		}
HXDLIN( 457)		if (!(_hx_tmp3)) {
HXLINE( 457)			_hx_tmp2 = (this->_rotationZ != vec->z);
            		}
            		else {
HXLINE( 457)			_hx_tmp2 = true;
            		}
HXDLIN( 457)		if (_hx_tmp2) {
HXLINE( 458)			this->_rotationX = vec->x;
HXLINE( 459)			this->_rotationY = vec->y;
HXLINE( 460)			this->_rotationZ = vec->z;
HXLINE( 462)			this->invalidateRotation();
            		}
HXLINE( 465)		vec = elements->get(2).StaticCast<  ::openfl::geom::Vector3D >();
HXLINE( 467)		bool _hx_tmp4;
HXDLIN( 467)		bool _hx_tmp5;
HXDLIN( 467)		if ((this->_scaleX == vec->x)) {
HXLINE( 467)			_hx_tmp5 = (this->_scaleY != vec->y);
            		}
            		else {
HXLINE( 467)			_hx_tmp5 = true;
            		}
HXDLIN( 467)		if (!(_hx_tmp5)) {
HXLINE( 467)			_hx_tmp4 = (this->_scaleZ != vec->z);
            		}
            		else {
HXLINE( 467)			_hx_tmp4 = true;
            		}
HXDLIN( 467)		if (_hx_tmp4) {
HXLINE( 468)			this->_scaleX = vec->x;
HXLINE( 469)			this->_scaleY = vec->y;
HXLINE( 470)			this->_scaleZ = vec->z;
HXLINE( 472)			this->invalidateScale();
            		}
HXLINE( 474)		return val;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,set_transform,return )

 ::openfl::geom::Vector3D Object3D_obj::get_pivotPoint(){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_482_get_pivotPoint)
HXDLIN( 482)		return this->_pivotPoint;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,get_pivotPoint,return )

 ::openfl::geom::Vector3D Object3D_obj::set_pivotPoint( ::openfl::geom::Vector3D pivot){
            	HX_GC_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_486_set_pivotPoint)
HXLINE( 487)		if (::hx::IsNull( this->_pivotPoint )) {
HXLINE( 487)			this->_pivotPoint =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE( 488)		this->_pivotPoint->x = pivot->x;
HXLINE( 489)		this->_pivotPoint->y = pivot->y;
HXLINE( 490)		this->_pivotPoint->z = pivot->z;
HXLINE( 492)		this->invalidatePivot();
HXLINE( 493)		return pivot;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,set_pivotPoint,return )

 ::openfl::geom::Vector3D Object3D_obj::get_position(){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_500_get_position)
HXLINE( 501)		this->get_transform()->copyColumnTo(3,this->_pos);
HXLINE( 503)		return this->_pos->clone();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,get_position,return )

 ::openfl::geom::Vector3D Object3D_obj::set_position( ::openfl::geom::Vector3D value){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_507_set_position)
HXLINE( 508)		this->_x = value->x;
HXLINE( 509)		this->_y = value->y;
HXLINE( 510)		this->_z = value->z;
HXLINE( 512)		this->invalidatePosition();
HXLINE( 513)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,set_position,return )

 ::openfl::geom::Vector3D Object3D_obj::getPosition( ::openfl::geom::Vector3D v){
            	HX_GC_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_521_getPosition)
HXLINE( 522)		if (::hx::IsNull( v )) {
HXLINE( 522)			v =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE( 523)		this->get_transform()->copyColumnTo(3,v);
HXLINE( 524)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,getPosition,return )

 ::openfl::geom::Vector3D Object3D_obj::get_forwardVector(){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_532_get_forwardVector)
HXDLIN( 532)		return ::away3d::core::math::Matrix3DUtils_obj::getForward(this->get_transform(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,get_forwardVector,return )

 ::openfl::geom::Vector3D Object3D_obj::get_rightVector(){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_540_get_rightVector)
HXDLIN( 540)		return ::away3d::core::math::Matrix3DUtils_obj::getRight(this->get_transform(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,get_rightVector,return )

 ::openfl::geom::Vector3D Object3D_obj::get_upVector(){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_548_get_upVector)
HXDLIN( 548)		return ::away3d::core::math::Matrix3DUtils_obj::getUp(this->get_transform(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,get_upVector,return )

 ::openfl::geom::Vector3D Object3D_obj::get_backVector(){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_555_get_backVector)
HXLINE( 556)		 ::openfl::geom::Vector3D director = ::away3d::core::math::Matrix3DUtils_obj::getForward(this->get_transform(),null());
HXLINE( 557)		director->negate();
HXLINE( 559)		return director;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,get_backVector,return )

 ::openfl::geom::Vector3D Object3D_obj::get_leftVector(){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_566_get_leftVector)
HXLINE( 567)		 ::openfl::geom::Vector3D director = ::away3d::core::math::Matrix3DUtils_obj::getRight(this->get_transform(),null());
HXLINE( 568)		director->negate();
HXLINE( 570)		return director;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,get_leftVector,return )

 ::openfl::geom::Vector3D Object3D_obj::get_downVector(){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_577_get_downVector)
HXLINE( 578)		 ::openfl::geom::Vector3D director = ::away3d::core::math::Matrix3DUtils_obj::getUp(this->get_transform(),null());
HXLINE( 579)		director->negate();
HXLINE( 581)		return director;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,get_downVector,return )

void Object3D_obj::scale(Float value){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_607_scale)
HXLINE( 608)		 ::away3d::core::base::Object3D _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 608)		_hx_tmp->_scaleX = (_hx_tmp->_scaleX * value);
HXLINE( 609)		 ::away3d::core::base::Object3D _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 609)		_hx_tmp1->_scaleY = (_hx_tmp1->_scaleY * value);
HXLINE( 610)		 ::away3d::core::base::Object3D _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 610)		_hx_tmp2->_scaleZ = (_hx_tmp2->_scaleZ * value);
HXLINE( 612)		this->invalidateScale();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,scale,(void))

void Object3D_obj::moveForward(Float distance){
            	HX_GC_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_622_moveForward)
HXDLIN( 622)		this->translateLocal( ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,0,0,1,null()),distance);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,moveForward,(void))

void Object3D_obj::moveBackward(Float distance){
            	HX_GC_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_632_moveBackward)
HXDLIN( 632)		this->translateLocal( ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,0,0,1,null()),-(distance));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,moveBackward,(void))

void Object3D_obj::moveLeft(Float distance){
            	HX_GC_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_642_moveLeft)
HXDLIN( 642)		this->translateLocal( ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,1,0,0,null()),-(distance));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,moveLeft,(void))

void Object3D_obj::moveRight(Float distance){
            	HX_GC_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_652_moveRight)
HXDLIN( 652)		this->translateLocal( ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,1,0,0,null()),distance);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,moveRight,(void))

void Object3D_obj::moveUp(Float distance){
            	HX_GC_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_662_moveUp)
HXDLIN( 662)		this->translateLocal( ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,0,1,0,null()),distance);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,moveUp,(void))

void Object3D_obj::moveDown(Float distance){
            	HX_GC_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_672_moveDown)
HXDLIN( 672)		this->translateLocal( ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,0,1,0,null()),-(distance));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,moveDown,(void))

void Object3D_obj::moveTo(Float dx,Float dy,Float dz){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_683_moveTo)
HXLINE( 684)		bool _hx_tmp;
HXDLIN( 684)		bool _hx_tmp1;
HXDLIN( 684)		if ((this->_x == dx)) {
HXLINE( 684)			_hx_tmp1 = (this->_y == dy);
            		}
            		else {
HXLINE( 684)			_hx_tmp1 = false;
            		}
HXDLIN( 684)		if (_hx_tmp1) {
HXLINE( 684)			_hx_tmp = (this->_z == dz);
            		}
            		else {
HXLINE( 684)			_hx_tmp = false;
            		}
HXDLIN( 684)		if (_hx_tmp) {
HXLINE( 685)			return;
            		}
HXLINE( 686)		this->_x = dx;
HXLINE( 687)		this->_y = dy;
HXLINE( 688)		this->_z = dz;
HXLINE( 690)		this->invalidatePosition();
            	}


HX_DEFINE_DYNAMIC_FUNC3(Object3D_obj,moveTo,(void))

void Object3D_obj::movePivot(Float dx,Float dy,Float dz){
            	HX_GC_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_701_movePivot)
HXLINE( 702)		if (::hx::IsNull( this->_pivotPoint )) {
HXLINE( 702)			this->_pivotPoint =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE( 703)		 ::openfl::geom::Vector3D fh = this->_pivotPoint;
HXDLIN( 703)		fh->x = (fh->x + dx);
HXLINE( 704)		 ::openfl::geom::Vector3D fh1 = this->_pivotPoint;
HXDLIN( 704)		fh1->y = (fh1->y + dy);
HXLINE( 705)		 ::openfl::geom::Vector3D fh2 = this->_pivotPoint;
HXDLIN( 705)		fh2->z = (fh2->z + dz);
HXLINE( 707)		this->invalidatePivot();
            	}


HX_DEFINE_DYNAMIC_FUNC3(Object3D_obj,movePivot,(void))

void Object3D_obj::translate( ::openfl::geom::Vector3D axis,Float distance){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_717_translate)
HXLINE( 718)		Float x = axis->x;
HXDLIN( 718)		Float y = axis->y;
HXDLIN( 718)		Float z = axis->z;
HXLINE( 719)		Float len = (distance / ::Math_obj::sqrt((((x * x) + (y * y)) + (z * z))));
HXLINE( 721)		 ::away3d::core::base::Object3D _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 721)		_hx_tmp->_x = (_hx_tmp->_x + (x * len));
HXLINE( 722)		 ::away3d::core::base::Object3D _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 722)		_hx_tmp1->_y = (_hx_tmp1->_y + (y * len));
HXLINE( 723)		 ::away3d::core::base::Object3D _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 723)		_hx_tmp2->_z = (_hx_tmp2->_z + (z * len));
HXLINE( 725)		this->invalidatePosition();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Object3D_obj,translate,(void))

void Object3D_obj::translateLocal( ::openfl::geom::Vector3D axis,Float distance){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_735_translateLocal)
HXLINE( 736)		Float x = axis->x;
HXDLIN( 736)		Float y = axis->y;
HXDLIN( 736)		Float z = axis->z;
HXLINE( 737)		Float len = (distance / ::Math_obj::sqrt((((x * x) + (y * y)) + (z * z))));
HXLINE( 739)		this->get_transform()->prependTranslation((x * len),(y * len),(z * len));
HXLINE( 741)		this->_transform->copyColumnTo(3,this->_pos);
HXLINE( 743)		this->_x = this->_pos->x;
HXLINE( 744)		this->_y = this->_pos->y;
HXLINE( 745)		this->_z = this->_pos->z;
HXLINE( 747)		this->invalidatePosition();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Object3D_obj,translateLocal,(void))

void Object3D_obj::pitch(Float angle){
            	HX_GC_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_757_pitch)
HXDLIN( 757)		this->rotate( ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,1,0,0,null()),angle);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,pitch,(void))

void Object3D_obj::yaw(Float angle){
            	HX_GC_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_767_yaw)
HXDLIN( 767)		this->rotate( ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,0,1,0,null()),angle);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,yaw,(void))

void Object3D_obj::roll(Float angle){
            	HX_GC_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_777_roll)
HXDLIN( 777)		this->rotate( ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,0,0,1,null()),angle);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,roll,(void))

 ::away3d::core::base::Object3D Object3D_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_781_clone)
HXLINE( 782)		 ::away3d::core::base::Object3D clone =  ::away3d::core::base::Object3D_obj::__alloc( HX_CTX );
HXLINE( 783)		clone->set_pivotPoint(this->get_pivotPoint());
HXLINE( 784)		clone->set_transform(this->get_transform());
HXLINE( 785)		clone->set_name(this->get_name());
HXLINE( 787)		return clone;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,clone,return )

void Object3D_obj::rotateTo(Float ax,Float ay,Float az){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_798_rotateTo)
HXLINE( 799)		this->_rotationX = (ax * ::away3d::core::math::MathConsts_obj::DEGREES_TO_RADIANS);
HXLINE( 800)		this->_rotationY = (ay * ::away3d::core::math::MathConsts_obj::DEGREES_TO_RADIANS);
HXLINE( 801)		this->_rotationZ = (az * ::away3d::core::math::MathConsts_obj::DEGREES_TO_RADIANS);
HXLINE( 803)		this->invalidateRotation();
            	}


HX_DEFINE_DYNAMIC_FUNC3(Object3D_obj,rotateTo,(void))

void Object3D_obj::rotate( ::openfl::geom::Vector3D axis,Float angle){
            	HX_GC_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_813_rotate)
HXLINE( 814)		 ::openfl::geom::Matrix3D m =  ::openfl::geom::Matrix3D_obj::__alloc( HX_CTX ,null());
HXLINE( 815)		m->prependRotation(angle,axis,null());
HXLINE( 817)		 ::openfl::geom::Vector3D vec = m->decompose(null())->get(1).StaticCast<  ::openfl::geom::Vector3D >();
HXLINE( 819)		 ::away3d::core::base::Object3D _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 819)		_hx_tmp->_rotationX = (_hx_tmp->_rotationX + vec->x);
HXLINE( 820)		 ::away3d::core::base::Object3D _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 820)		_hx_tmp1->_rotationY = (_hx_tmp1->_rotationY + vec->y);
HXLINE( 821)		 ::away3d::core::base::Object3D _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 821)		_hx_tmp2->_rotationZ = (_hx_tmp2->_rotationZ + vec->z);
HXLINE( 823)		this->invalidateRotation();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Object3D_obj,rotate,(void))

void Object3D_obj::lookAt( ::openfl::geom::Vector3D target, ::openfl::geom::Vector3D upAxis){
            	HX_GC_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_836_lookAt)
HXLINE( 837)		if (::hx::IsNull( ::away3d::core::base::Object3D_obj::tempAxeX )) {
HXLINE( 837)			::away3d::core::base::Object3D_obj::tempAxeX =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE( 838)		if (::hx::IsNull( ::away3d::core::base::Object3D_obj::tempAxeY )) {
HXLINE( 838)			::away3d::core::base::Object3D_obj::tempAxeY =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE( 839)		if (::hx::IsNull( ::away3d::core::base::Object3D_obj::tempAxeZ )) {
HXLINE( 839)			::away3d::core::base::Object3D_obj::tempAxeZ =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE( 840)		 ::openfl::geom::Vector3D xAxis = ::away3d::core::base::Object3D_obj::tempAxeX;
HXLINE( 841)		 ::openfl::geom::Vector3D yAxis = ::away3d::core::base::Object3D_obj::tempAxeY;
HXLINE( 842)		 ::openfl::geom::Vector3D zAxis = ::away3d::core::base::Object3D_obj::tempAxeZ;
HXLINE( 846)		if (::hx::IsNull( upAxis )) {
HXLINE( 846)			upAxis =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,0,1,0,null());
            		}
HXLINE( 848)		if (this->_transformDirty) {
HXLINE( 849)			this->updateTransform();
            		}
HXLINE( 852)		zAxis->x = (target->x - this->_x);
HXLINE( 853)		zAxis->y = (target->y - this->_y);
HXLINE( 854)		zAxis->z = (target->z - this->_z);
HXLINE( 855)		zAxis->normalize();
HXLINE( 857)		xAxis->x = ((upAxis->y * zAxis->z) - (upAxis->z * zAxis->y));
HXLINE( 858)		xAxis->y = ((upAxis->z * zAxis->x) - (upAxis->x * zAxis->z));
HXLINE( 859)		xAxis->z = ((upAxis->x * zAxis->y) - (upAxis->y * zAxis->x));
HXLINE( 860)		xAxis->normalize();
HXLINE( 862)		if ((xAxis->get_length() < ((Float).05))) {
HXLINE( 863)			xAxis->x = upAxis->y;
HXLINE( 864)			xAxis->y = upAxis->x;
HXLINE( 865)			xAxis->z = ( (Float)(0) );
HXLINE( 866)			xAxis->normalize();
            		}
HXLINE( 869)		yAxis->x = ((zAxis->y * xAxis->z) - (zAxis->z * xAxis->y));
HXLINE( 870)		yAxis->y = ((zAxis->z * xAxis->x) - (zAxis->x * xAxis->z));
HXLINE( 871)		yAxis->z = ((zAxis->x * xAxis->y) - (zAxis->y * xAxis->x));
HXLINE( 844)		 ::openfl::_Vector::FloatVector raw = ::away3d::core::math::Matrix3DUtils_obj::RAW_DATA_CONTAINER;
HXLINE( 875)		raw->set(0,(this->_scaleX * xAxis->x));
HXLINE( 876)		raw->set(1,(this->_scaleX * xAxis->y));
HXLINE( 877)		raw->set(2,(this->_scaleX * xAxis->z));
HXLINE( 878)		raw->set(3,( (Float)(0) ));
HXLINE( 880)		raw->set(4,(this->_scaleY * yAxis->x));
HXLINE( 881)		raw->set(5,(this->_scaleY * yAxis->y));
HXLINE( 882)		raw->set(6,(this->_scaleY * yAxis->z));
HXLINE( 883)		raw->set(7,( (Float)(0) ));
HXLINE( 885)		raw->set(8,(this->_scaleZ * zAxis->x));
HXLINE( 886)		raw->set(9,(this->_scaleZ * zAxis->y));
HXLINE( 887)		raw->set(10,(this->_scaleZ * zAxis->z));
HXLINE( 888)		raw->set(11,( (Float)(0) ));
HXLINE( 890)		raw->set(12,this->_x);
HXLINE( 891)		raw->set(13,this->_y);
HXLINE( 892)		raw->set(14,this->_z);
HXLINE( 893)		raw->set(15,( (Float)(1) ));
HXLINE( 895)		this->_transform->copyRawDataFrom(raw,null(),null());
HXLINE( 897)		this->set_transform(this->get_transform());
HXLINE( 899)		if ((zAxis->z < 0)) {
HXLINE( 900)			this->set_rotationY((( (Float)(180) ) - this->get_rotationY()));
HXLINE( 901)			this->set_rotationX((this->get_rotationX() - ( (Float)(180) )));
HXLINE( 902)			this->set_rotationZ((this->get_rotationZ() - ( (Float)(180) )));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Object3D_obj,lookAt,(void))

void Object3D_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_910_dispose)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,dispose,(void))

void Object3D_obj::disposeAsset(){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_918_disposeAsset)
HXDLIN( 918)		this->dispose();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,disposeAsset,(void))

void Object3D_obj::invalidateTransform(){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_926_invalidateTransform)
HXDLIN( 926)		this->_transformDirty = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,invalidateTransform,(void))

void Object3D_obj::updateTransform(){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_930_updateTransform)
HXLINE( 931)		this->_pos->x = this->_x;
HXLINE( 932)		this->_pos->y = this->_y;
HXLINE( 933)		this->_pos->z = this->_z;
HXLINE( 935)		this->_rot->x = this->_rotationX;
HXLINE( 936)		this->_rot->y = this->_rotationY;
HXLINE( 937)		this->_rot->z = this->_rotationZ;
HXLINE( 939)		if (!(this->_pivotZero)) {
HXLINE( 940)			this->_sca->x = ( (Float)(1) );
HXLINE( 941)			this->_sca->y = ( (Float)(1) );
HXLINE( 942)			this->_sca->z = ( (Float)(1) );
HXLINE( 944)			this->_transform->recompose(this->_transformComponents,null());
HXLINE( 945)			this->_transform->appendTranslation(this->_pivotPoint->x,this->_pivotPoint->y,this->_pivotPoint->z);
HXLINE( 946)			this->_transform->prependTranslation(-(this->_pivotPoint->x),-(this->_pivotPoint->y),-(this->_pivotPoint->z));
HXLINE( 947)			this->_transform->prependScale(this->_scaleX,this->_scaleY,this->_scaleZ);
HXLINE( 949)			this->_sca->x = this->_scaleX;
HXLINE( 950)			this->_sca->y = this->_scaleY;
HXLINE( 951)			this->_sca->z = this->_scaleZ;
            		}
            		else {
HXLINE( 953)			this->_sca->x = this->_scaleX;
HXLINE( 954)			this->_sca->y = this->_scaleY;
HXLINE( 955)			this->_sca->z = this->_scaleZ;
HXLINE( 957)			this->_transform->recompose(this->_transformComponents,null());
            		}
HXLINE( 960)		this->_transformDirty = false;
HXLINE( 961)		this->_positionDirty = false;
HXLINE( 962)		this->_rotationDirty = false;
HXLINE( 963)		this->_scaleDirty = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,updateTransform,(void))

int Object3D_obj::get_zOffset(){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_968_get_zOffset)
HXDLIN( 968)		return this->_zOffset;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,get_zOffset,return )

int Object3D_obj::set_zOffset(int value){
            	HX_STACKFRAME(&_hx_pos_0a48ad64e7d132bb_972_set_zOffset)
HXLINE( 973)		this->_zOffset = value;
HXLINE( 974)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,set_zOffset,return )

 ::openfl::geom::Vector3D Object3D_obj::tempAxeX;

 ::openfl::geom::Vector3D Object3D_obj::tempAxeY;

 ::openfl::geom::Vector3D Object3D_obj::tempAxeZ;


::hx::ObjectPtr< Object3D_obj > Object3D_obj::__new() {
	::hx::ObjectPtr< Object3D_obj > __this = new Object3D_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Object3D_obj > Object3D_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Object3D_obj *__this = (Object3D_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Object3D_obj), true, "away3d.core.base.Object3D"));
	*(void **)__this = Object3D_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Object3D_obj::Object3D_obj()
{
}

void Object3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Object3D);
	HX_MARK_MEMBER_NAME(_controller,"_controller");
	HX_MARK_MEMBER_NAME(_smallestNumber,"_smallestNumber");
	HX_MARK_MEMBER_NAME(_transformDirty,"_transformDirty");
	HX_MARK_MEMBER_NAME(_positionDirty,"_positionDirty");
	HX_MARK_MEMBER_NAME(_rotationDirty,"_rotationDirty");
	HX_MARK_MEMBER_NAME(_scaleDirty,"_scaleDirty");
	HX_MARK_MEMBER_NAME(_positionChanged,"_positionChanged");
	HX_MARK_MEMBER_NAME(_rotationChanged,"_rotationChanged");
	HX_MARK_MEMBER_NAME(_scaleChanged,"_scaleChanged");
	HX_MARK_MEMBER_NAME(_rotationX,"_rotationX");
	HX_MARK_MEMBER_NAME(_rotationY,"_rotationY");
	HX_MARK_MEMBER_NAME(_rotationZ,"_rotationZ");
	HX_MARK_MEMBER_NAME(_eulers,"_eulers");
	HX_MARK_MEMBER_NAME(_flipY,"_flipY");
	HX_MARK_MEMBER_NAME(_listenToPositionChanged,"_listenToPositionChanged");
	HX_MARK_MEMBER_NAME(_listenToRotationChanged,"_listenToRotationChanged");
	HX_MARK_MEMBER_NAME(_listenToScaleChanged,"_listenToScaleChanged");
	HX_MARK_MEMBER_NAME(_zOffset,"_zOffset");
	HX_MARK_MEMBER_NAME(_transform,"_transform");
	HX_MARK_MEMBER_NAME(_scaleX,"_scaleX");
	HX_MARK_MEMBER_NAME(_scaleY,"_scaleY");
	HX_MARK_MEMBER_NAME(_scaleZ,"_scaleZ");
	HX_MARK_MEMBER_NAME(_x,"_x");
	HX_MARK_MEMBER_NAME(_y,"_y");
	HX_MARK_MEMBER_NAME(_z,"_z");
	HX_MARK_MEMBER_NAME(_pivotPoint,"_pivotPoint");
	HX_MARK_MEMBER_NAME(_pivotZero,"_pivotZero");
	HX_MARK_MEMBER_NAME(_pos,"_pos");
	HX_MARK_MEMBER_NAME(_rot,"_rot");
	HX_MARK_MEMBER_NAME(_sca,"_sca");
	HX_MARK_MEMBER_NAME(_transformComponents,"_transformComponents");
	HX_MARK_MEMBER_NAME(extra,"extra");
	 ::away3d::library::assets::NamedAssetBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Object3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_controller,"_controller");
	HX_VISIT_MEMBER_NAME(_smallestNumber,"_smallestNumber");
	HX_VISIT_MEMBER_NAME(_transformDirty,"_transformDirty");
	HX_VISIT_MEMBER_NAME(_positionDirty,"_positionDirty");
	HX_VISIT_MEMBER_NAME(_rotationDirty,"_rotationDirty");
	HX_VISIT_MEMBER_NAME(_scaleDirty,"_scaleDirty");
	HX_VISIT_MEMBER_NAME(_positionChanged,"_positionChanged");
	HX_VISIT_MEMBER_NAME(_rotationChanged,"_rotationChanged");
	HX_VISIT_MEMBER_NAME(_scaleChanged,"_scaleChanged");
	HX_VISIT_MEMBER_NAME(_rotationX,"_rotationX");
	HX_VISIT_MEMBER_NAME(_rotationY,"_rotationY");
	HX_VISIT_MEMBER_NAME(_rotationZ,"_rotationZ");
	HX_VISIT_MEMBER_NAME(_eulers,"_eulers");
	HX_VISIT_MEMBER_NAME(_flipY,"_flipY");
	HX_VISIT_MEMBER_NAME(_listenToPositionChanged,"_listenToPositionChanged");
	HX_VISIT_MEMBER_NAME(_listenToRotationChanged,"_listenToRotationChanged");
	HX_VISIT_MEMBER_NAME(_listenToScaleChanged,"_listenToScaleChanged");
	HX_VISIT_MEMBER_NAME(_zOffset,"_zOffset");
	HX_VISIT_MEMBER_NAME(_transform,"_transform");
	HX_VISIT_MEMBER_NAME(_scaleX,"_scaleX");
	HX_VISIT_MEMBER_NAME(_scaleY,"_scaleY");
	HX_VISIT_MEMBER_NAME(_scaleZ,"_scaleZ");
	HX_VISIT_MEMBER_NAME(_x,"_x");
	HX_VISIT_MEMBER_NAME(_y,"_y");
	HX_VISIT_MEMBER_NAME(_z,"_z");
	HX_VISIT_MEMBER_NAME(_pivotPoint,"_pivotPoint");
	HX_VISIT_MEMBER_NAME(_pivotZero,"_pivotZero");
	HX_VISIT_MEMBER_NAME(_pos,"_pos");
	HX_VISIT_MEMBER_NAME(_rot,"_rot");
	HX_VISIT_MEMBER_NAME(_sca,"_sca");
	HX_VISIT_MEMBER_NAME(_transformComponents,"_transformComponents");
	HX_VISIT_MEMBER_NAME(extra,"extra");
	 ::away3d::library::assets::NamedAssetBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Object3D_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_x() ); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_y() ); }
		if (HX_FIELD_EQ(inName,"z") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_z() ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"_x") ) { return ::hx::Val( _x ); }
		if (HX_FIELD_EQ(inName,"_y") ) { return ::hx::Val( _y ); }
		if (HX_FIELD_EQ(inName,"_z") ) { return ::hx::Val( _z ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"yaw") ) { return ::hx::Val( yaw_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_pos") ) { return ::hx::Val( _pos ); }
		if (HX_FIELD_EQ(inName,"_rot") ) { return ::hx::Val( _rot ); }
		if (HX_FIELD_EQ(inName,"_sca") ) { return ::hx::Val( _sca ); }
		if (HX_FIELD_EQ(inName,"roll") ) { return ::hx::Val( roll_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"extra") ) { return ::hx::Val( extra ); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return ::hx::Val( get_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return ::hx::Val( set_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return ::hx::Val( get_y_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return ::hx::Val( set_y_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_z") ) { return ::hx::Val( get_z_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_z") ) { return ::hx::Val( set_z_dyn() ); }
		if (HX_FIELD_EQ(inName,"scale") ) { return ::hx::Val( scale_dyn() ); }
		if (HX_FIELD_EQ(inName,"pitch") ) { return ::hx::Val( pitch_dyn() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scaleX() ); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scaleY() ); }
		if (HX_FIELD_EQ(inName,"scaleZ") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scaleZ() ); }
		if (HX_FIELD_EQ(inName,"eulers") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_eulers() ); }
		if (HX_FIELD_EQ(inName,"_flipY") ) { return ::hx::Val( _flipY ); }
		if (HX_FIELD_EQ(inName,"moveUp") ) { return ::hx::Val( moveUp_dyn() ); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return ::hx::Val( moveTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return ::hx::Val( rotate_dyn() ); }
		if (HX_FIELD_EQ(inName,"lookAt") ) { return ::hx::Val( lookAt_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"zOffset") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_zOffset() ); }
		if (HX_FIELD_EQ(inName,"_eulers") ) { return ::hx::Val( _eulers ); }
		if (HX_FIELD_EQ(inName,"_scaleX") ) { return ::hx::Val( _scaleX ); }
		if (HX_FIELD_EQ(inName,"_scaleY") ) { return ::hx::Val( _scaleY ); }
		if (HX_FIELD_EQ(inName,"_scaleZ") ) { return ::hx::Val( _scaleZ ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_position() ); }
		if (HX_FIELD_EQ(inName,"upVector") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_upVector() ); }
		if (HX_FIELD_EQ(inName,"_zOffset") ) { return ::hx::Val( _zOffset ); }
		if (HX_FIELD_EQ(inName,"moveLeft") ) { return ::hx::Val( moveLeft_dyn() ); }
		if (HX_FIELD_EQ(inName,"moveDown") ) { return ::hx::Val( moveDown_dyn() ); }
		if (HX_FIELD_EQ(inName,"rotateTo") ) { return ::hx::Val( rotateTo_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rotationX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_rotationX() ); }
		if (HX_FIELD_EQ(inName,"rotationY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_rotationY() ); }
		if (HX_FIELD_EQ(inName,"rotationZ") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_rotationZ() ); }
		if (HX_FIELD_EQ(inName,"transform") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_transform() ); }
		if (HX_FIELD_EQ(inName,"moveRight") ) { return ::hx::Val( moveRight_dyn() ); }
		if (HX_FIELD_EQ(inName,"movePivot") ) { return ::hx::Val( movePivot_dyn() ); }
		if (HX_FIELD_EQ(inName,"translate") ) { return ::hx::Val( translate_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pivotPoint") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_pivotPoint() ); }
		if (HX_FIELD_EQ(inName,"backVector") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_backVector() ); }
		if (HX_FIELD_EQ(inName,"leftVector") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_leftVector() ); }
		if (HX_FIELD_EQ(inName,"downVector") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_downVector() ); }
		if (HX_FIELD_EQ(inName,"_rotationX") ) { return ::hx::Val( _rotationX ); }
		if (HX_FIELD_EQ(inName,"_rotationY") ) { return ::hx::Val( _rotationY ); }
		if (HX_FIELD_EQ(inName,"_rotationZ") ) { return ::hx::Val( _rotationZ ); }
		if (HX_FIELD_EQ(inName,"_transform") ) { return ::hx::Val( _transform ); }
		if (HX_FIELD_EQ(inName,"_pivotZero") ) { return ::hx::Val( _pivotZero ); }
		if (HX_FIELD_EQ(inName,"get_scaleX") ) { return ::hx::Val( get_scaleX_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scaleX") ) { return ::hx::Val( set_scaleX_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_scaleY") ) { return ::hx::Val( get_scaleY_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scaleY") ) { return ::hx::Val( set_scaleY_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_scaleZ") ) { return ::hx::Val( get_scaleZ_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scaleZ") ) { return ::hx::Val( set_scaleZ_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_eulers") ) { return ::hx::Val( get_eulers_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_eulers") ) { return ::hx::Val( set_eulers_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"rightVector") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_rightVector() ); }
		if (HX_FIELD_EQ(inName,"_controller") ) { return ::hx::Val( _controller ); }
		if (HX_FIELD_EQ(inName,"_scaleDirty") ) { return ::hx::Val( _scaleDirty ); }
		if (HX_FIELD_EQ(inName,"_pivotPoint") ) { return ::hx::Val( _pivotPoint ); }
		if (HX_FIELD_EQ(inName,"getPosition") ) { return ::hx::Val( getPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"moveForward") ) { return ::hx::Val( moveForward_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_zOffset") ) { return ::hx::Val( get_zOffset_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_zOffset") ) { return ::hx::Val( set_zOffset_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_position") ) { return ::hx::Val( get_position_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return ::hx::Val( set_position_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_upVector") ) { return ::hx::Val( get_upVector_dyn() ); }
		if (HX_FIELD_EQ(inName,"moveBackward") ) { return ::hx::Val( moveBackward_dyn() ); }
		if (HX_FIELD_EQ(inName,"disposeAsset") ) { return ::hx::Val( disposeAsset_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"forwardVector") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_forwardVector() ); }
		if (HX_FIELD_EQ(inName,"_scaleChanged") ) { return ::hx::Val( _scaleChanged ); }
		if (HX_FIELD_EQ(inName,"get_rotationX") ) { return ::hx::Val( get_rotationX_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_rotationX") ) { return ::hx::Val( set_rotationX_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_rotationY") ) { return ::hx::Val( get_rotationY_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_rotationY") ) { return ::hx::Val( set_rotationY_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_rotationZ") ) { return ::hx::Val( get_rotationZ_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_rotationZ") ) { return ::hx::Val( set_rotationZ_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_transform") ) { return ::hx::Val( get_transform_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_transform") ) { return ::hx::Val( set_transform_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_positionDirty") ) { return ::hx::Val( _positionDirty ); }
		if (HX_FIELD_EQ(inName,"_rotationDirty") ) { return ::hx::Val( _rotationDirty ); }
		if (HX_FIELD_EQ(inName,"get_pivotPoint") ) { return ::hx::Val( get_pivotPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_pivotPoint") ) { return ::hx::Val( set_pivotPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_backVector") ) { return ::hx::Val( get_backVector_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_leftVector") ) { return ::hx::Val( get_leftVector_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_downVector") ) { return ::hx::Val( get_downVector_dyn() ); }
		if (HX_FIELD_EQ(inName,"translateLocal") ) { return ::hx::Val( translateLocal_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_smallestNumber") ) { return ::hx::Val( _smallestNumber ); }
		if (HX_FIELD_EQ(inName,"_transformDirty") ) { return ::hx::Val( _transformDirty ); }
		if (HX_FIELD_EQ(inName,"invalidatePivot") ) { return ::hx::Val( invalidatePivot_dyn() ); }
		if (HX_FIELD_EQ(inName,"invalidateScale") ) { return ::hx::Val( invalidateScale_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_rightVector") ) { return ::hx::Val( get_rightVector_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateTransform") ) { return ::hx::Val( updateTransform_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_positionChanged") ) { return ::hx::Val( _positionChanged ); }
		if (HX_FIELD_EQ(inName,"_rotationChanged") ) { return ::hx::Val( _rotationChanged ); }
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return ::hx::Val( addEventListener_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_forwardVector") ) { return ::hx::Val( get_forwardVector_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"invalidatePosition") ) { return ::hx::Val( invalidatePosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"invalidateRotation") ) { return ::hx::Val( invalidateRotation_dyn() ); }
		if (HX_FIELD_EQ(inName,"notifyScaleChanged") ) { return ::hx::Val( notifyScaleChanged_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { return ::hx::Val( removeEventListener_dyn() ); }
		if (HX_FIELD_EQ(inName,"invalidateTransform") ) { return ::hx::Val( invalidateTransform_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_transformComponents") ) { return ::hx::Val( _transformComponents ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_listenToScaleChanged") ) { return ::hx::Val( _listenToScaleChanged ); }
		if (HX_FIELD_EQ(inName,"notifyPositionChanged") ) { return ::hx::Val( notifyPositionChanged_dyn() ); }
		if (HX_FIELD_EQ(inName,"notifyRotationChanged") ) { return ::hx::Val( notifyRotationChanged_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_listenToPositionChanged") ) { return ::hx::Val( _listenToPositionChanged ); }
		if (HX_FIELD_EQ(inName,"_listenToRotationChanged") ) { return ::hx::Val( _listenToRotationChanged ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Object3D_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"tempAxeX") ) { outValue = ( tempAxeX ); return true; }
		if (HX_FIELD_EQ(inName,"tempAxeY") ) { outValue = ( tempAxeY ); return true; }
		if (HX_FIELD_EQ(inName,"tempAxeZ") ) { outValue = ( tempAxeZ ); return true; }
	}
	return false;
}

::hx::Val Object3D_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_x(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_y(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"z") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_z(inValue.Cast< Float >()) ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"_x") ) { _x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_y") ) { _y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_z") ) { _z=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_pos") ) { _pos=inValue.Cast<  ::openfl::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rot") ) { _rot=inValue.Cast<  ::openfl::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sca") ) { _sca=inValue.Cast<  ::openfl::geom::Vector3D >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"extra") ) { extra=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scaleX(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scaleY(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"scaleZ") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scaleZ(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"eulers") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_eulers(inValue.Cast<  ::openfl::geom::Vector3D >()) ); }
		if (HX_FIELD_EQ(inName,"_flipY") ) { _flipY=inValue.Cast<  ::openfl::geom::Matrix3D >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"zOffset") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_zOffset(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"_eulers") ) { _eulers=inValue.Cast<  ::openfl::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scaleX") ) { _scaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scaleY") ) { _scaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scaleZ") ) { _scaleZ=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_position(inValue.Cast<  ::openfl::geom::Vector3D >()) ); }
		if (HX_FIELD_EQ(inName,"_zOffset") ) { _zOffset=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rotationX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_rotationX(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"rotationY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_rotationY(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"rotationZ") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_rotationZ(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"transform") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_transform(inValue.Cast<  ::openfl::geom::Matrix3D >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pivotPoint") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_pivotPoint(inValue.Cast<  ::openfl::geom::Vector3D >()) ); }
		if (HX_FIELD_EQ(inName,"_rotationX") ) { _rotationX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rotationY") ) { _rotationY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rotationZ") ) { _rotationZ=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_transform") ) { _transform=inValue.Cast<  ::openfl::geom::Matrix3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pivotZero") ) { _pivotZero=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_controller") ) { _controller=inValue.Cast<  ::away3d::controllers::ControllerBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scaleDirty") ) { _scaleDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pivotPoint") ) { _pivotPoint=inValue.Cast<  ::openfl::geom::Vector3D >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_scaleChanged") ) { _scaleChanged=inValue.Cast<  ::away3d::events::Object3DEvent >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_positionDirty") ) { _positionDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rotationDirty") ) { _rotationDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_smallestNumber") ) { _smallestNumber=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_transformDirty") ) { _transformDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_positionChanged") ) { _positionChanged=inValue.Cast<  ::away3d::events::Object3DEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rotationChanged") ) { _rotationChanged=inValue.Cast<  ::away3d::events::Object3DEvent >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_transformComponents") ) { _transformComponents=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_listenToScaleChanged") ) { _listenToScaleChanged=inValue.Cast< bool >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_listenToPositionChanged") ) { _listenToPositionChanged=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_listenToRotationChanged") ) { _listenToRotationChanged=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Object3D_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"tempAxeX") ) { tempAxeX=ioValue.Cast<  ::openfl::geom::Vector3D >(); return true; }
		if (HX_FIELD_EQ(inName,"tempAxeY") ) { tempAxeY=ioValue.Cast<  ::openfl::geom::Vector3D >(); return true; }
		if (HX_FIELD_EQ(inName,"tempAxeZ") ) { tempAxeZ=ioValue.Cast<  ::openfl::geom::Vector3D >(); return true; }
	}
	return false;
}

void Object3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("z",7a,00,00,00));
	outFields->push(HX_("rotationX",5a,59,ef,6c));
	outFields->push(HX_("rotationY",5b,59,ef,6c));
	outFields->push(HX_("rotationZ",5c,59,ef,6c));
	outFields->push(HX_("scaleX",8e,ea,25,3c));
	outFields->push(HX_("scaleY",8f,ea,25,3c));
	outFields->push(HX_("scaleZ",90,ea,25,3c));
	outFields->push(HX_("eulers",ea,62,9d,07));
	outFields->push(HX_("transform",6c,2d,93,45));
	outFields->push(HX_("pivotPoint",2e,9a,ca,c5));
	outFields->push(HX_("position",a9,a0,fa,ca));
	outFields->push(HX_("forwardVector",68,28,a0,82));
	outFields->push(HX_("rightVector",bf,7d,e2,00));
	outFields->push(HX_("upVector",7e,41,64,21));
	outFields->push(HX_("backVector",4a,96,e7,d5));
	outFields->push(HX_("leftVector",2a,6c,6e,c6));
	outFields->push(HX_("downVector",c5,92,61,d4));
	outFields->push(HX_("zOffset",ad,a3,0e,66));
	outFields->push(HX_("_controller",bb,65,48,d7));
	outFields->push(HX_("_smallestNumber",a7,02,ab,6f));
	outFields->push(HX_("_transformDirty",a5,b3,b2,99));
	outFields->push(HX_("_positionDirty",ea,0a,21,82));
	outFields->push(HX_("_rotationDirty",35,b2,2c,8c));
	outFields->push(HX_("_scaleDirty",47,ca,8d,cd));
	outFields->push(HX_("_positionChanged",cc,d1,e3,b6));
	outFields->push(HX_("_rotationChanged",d7,21,a0,18));
	outFields->push(HX_("_scaleChanged",69,e2,84,46));
	outFields->push(HX_("_rotationX",1b,d5,91,c8));
	outFields->push(HX_("_rotationY",1c,d5,91,c8));
	outFields->push(HX_("_rotationZ",1d,d5,91,c8));
	outFields->push(HX_("_eulers",89,74,14,76));
	outFields->push(HX_("_flipY",4d,8c,79,fe));
	outFields->push(HX_("_listenToPositionChanged",4a,f7,46,21));
	outFields->push(HX_("_listenToRotationChanged",55,47,03,83));
	outFields->push(HX_("_listenToScaleChanged",2b,82,6a,32));
	outFields->push(HX_("_zOffset",2e,fd,c6,9f));
	outFields->push(HX_("_transform",2d,a9,35,a1));
	outFields->push(HX_("_scaleX",2d,fc,9c,aa));
	outFields->push(HX_("_scaleY",2e,fc,9c,aa));
	outFields->push(HX_("_scaleZ",2f,fc,9c,aa));
	outFields->push(HX_("_x",39,53,00,00));
	outFields->push(HX_("_y",3a,53,00,00));
	outFields->push(HX_("_z",3b,53,00,00));
	outFields->push(HX_("_pivotPoint",4d,67,54,98));
	outFields->push(HX_("_pivotZero",cb,8a,b8,ad));
	outFields->push(HX_("_pos",95,a2,20,3f));
	outFields->push(HX_("_rot",18,27,22,3f));
	outFields->push(HX_("_sca",d2,de,22,3f));
	outFields->push(HX_("_transformComponents",a3,7c,2b,e2));
	outFields->push(HX_("extra",90,9a,22,77));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Object3D_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::away3d::controllers::ControllerBase */ ,(int)offsetof(Object3D_obj,_controller),HX_("_controller",bb,65,48,d7)},
	{::hx::fsFloat,(int)offsetof(Object3D_obj,_smallestNumber),HX_("_smallestNumber",a7,02,ab,6f)},
	{::hx::fsBool,(int)offsetof(Object3D_obj,_transformDirty),HX_("_transformDirty",a5,b3,b2,99)},
	{::hx::fsBool,(int)offsetof(Object3D_obj,_positionDirty),HX_("_positionDirty",ea,0a,21,82)},
	{::hx::fsBool,(int)offsetof(Object3D_obj,_rotationDirty),HX_("_rotationDirty",35,b2,2c,8c)},
	{::hx::fsBool,(int)offsetof(Object3D_obj,_scaleDirty),HX_("_scaleDirty",47,ca,8d,cd)},
	{::hx::fsObject /*  ::away3d::events::Object3DEvent */ ,(int)offsetof(Object3D_obj,_positionChanged),HX_("_positionChanged",cc,d1,e3,b6)},
	{::hx::fsObject /*  ::away3d::events::Object3DEvent */ ,(int)offsetof(Object3D_obj,_rotationChanged),HX_("_rotationChanged",d7,21,a0,18)},
	{::hx::fsObject /*  ::away3d::events::Object3DEvent */ ,(int)offsetof(Object3D_obj,_scaleChanged),HX_("_scaleChanged",69,e2,84,46)},
	{::hx::fsFloat,(int)offsetof(Object3D_obj,_rotationX),HX_("_rotationX",1b,d5,91,c8)},
	{::hx::fsFloat,(int)offsetof(Object3D_obj,_rotationY),HX_("_rotationY",1c,d5,91,c8)},
	{::hx::fsFloat,(int)offsetof(Object3D_obj,_rotationZ),HX_("_rotationZ",1d,d5,91,c8)},
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(int)offsetof(Object3D_obj,_eulers),HX_("_eulers",89,74,14,76)},
	{::hx::fsObject /*  ::openfl::geom::Matrix3D */ ,(int)offsetof(Object3D_obj,_flipY),HX_("_flipY",4d,8c,79,fe)},
	{::hx::fsBool,(int)offsetof(Object3D_obj,_listenToPositionChanged),HX_("_listenToPositionChanged",4a,f7,46,21)},
	{::hx::fsBool,(int)offsetof(Object3D_obj,_listenToRotationChanged),HX_("_listenToRotationChanged",55,47,03,83)},
	{::hx::fsBool,(int)offsetof(Object3D_obj,_listenToScaleChanged),HX_("_listenToScaleChanged",2b,82,6a,32)},
	{::hx::fsInt,(int)offsetof(Object3D_obj,_zOffset),HX_("_zOffset",2e,fd,c6,9f)},
	{::hx::fsObject /*  ::openfl::geom::Matrix3D */ ,(int)offsetof(Object3D_obj,_transform),HX_("_transform",2d,a9,35,a1)},
	{::hx::fsFloat,(int)offsetof(Object3D_obj,_scaleX),HX_("_scaleX",2d,fc,9c,aa)},
	{::hx::fsFloat,(int)offsetof(Object3D_obj,_scaleY),HX_("_scaleY",2e,fc,9c,aa)},
	{::hx::fsFloat,(int)offsetof(Object3D_obj,_scaleZ),HX_("_scaleZ",2f,fc,9c,aa)},
	{::hx::fsFloat,(int)offsetof(Object3D_obj,_x),HX_("_x",39,53,00,00)},
	{::hx::fsFloat,(int)offsetof(Object3D_obj,_y),HX_("_y",3a,53,00,00)},
	{::hx::fsFloat,(int)offsetof(Object3D_obj,_z),HX_("_z",3b,53,00,00)},
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(int)offsetof(Object3D_obj,_pivotPoint),HX_("_pivotPoint",4d,67,54,98)},
	{::hx::fsBool,(int)offsetof(Object3D_obj,_pivotZero),HX_("_pivotZero",cb,8a,b8,ad)},
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(int)offsetof(Object3D_obj,_pos),HX_("_pos",95,a2,20,3f)},
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(int)offsetof(Object3D_obj,_rot),HX_("_rot",18,27,22,3f)},
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(int)offsetof(Object3D_obj,_sca),HX_("_sca",d2,de,22,3f)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(Object3D_obj,_transformComponents),HX_("_transformComponents",a3,7c,2b,e2)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Object3D_obj,extra),HX_("extra",90,9a,22,77)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Object3D_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(void *) &Object3D_obj::tempAxeX,HX_("tempAxeX",3e,22,ed,8f)},
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(void *) &Object3D_obj::tempAxeY,HX_("tempAxeY",3f,22,ed,8f)},
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(void *) &Object3D_obj::tempAxeZ,HX_("tempAxeZ",40,22,ed,8f)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Object3D_obj_sMemberFields[] = {
	HX_("_controller",bb,65,48,d7),
	HX_("_smallestNumber",a7,02,ab,6f),
	HX_("_transformDirty",a5,b3,b2,99),
	HX_("_positionDirty",ea,0a,21,82),
	HX_("_rotationDirty",35,b2,2c,8c),
	HX_("_scaleDirty",47,ca,8d,cd),
	HX_("_positionChanged",cc,d1,e3,b6),
	HX_("_rotationChanged",d7,21,a0,18),
	HX_("_scaleChanged",69,e2,84,46),
	HX_("_rotationX",1b,d5,91,c8),
	HX_("_rotationY",1c,d5,91,c8),
	HX_("_rotationZ",1d,d5,91,c8),
	HX_("_eulers",89,74,14,76),
	HX_("_flipY",4d,8c,79,fe),
	HX_("_listenToPositionChanged",4a,f7,46,21),
	HX_("_listenToRotationChanged",55,47,03,83),
	HX_("_listenToScaleChanged",2b,82,6a,32),
	HX_("_zOffset",2e,fd,c6,9f),
	HX_("invalidatePivot",47,63,50,b0),
	HX_("invalidatePosition",44,e9,14,53),
	HX_("notifyPositionChanged",82,46,ad,11),
	HX_("addEventListener",cd,0b,64,f1),
	HX_("removeEventListener",ca,87,75,55),
	HX_("invalidateRotation",d9,85,a0,90),
	HX_("notifyRotationChanged",8d,96,69,73),
	HX_("invalidateScale",0f,e7,7c,66),
	HX_("notifyScaleChanged",f3,ff,e2,c0),
	HX_("_transform",2d,a9,35,a1),
	HX_("_scaleX",2d,fc,9c,aa),
	HX_("_scaleY",2e,fc,9c,aa),
	HX_("_scaleZ",2f,fc,9c,aa),
	HX_("_x",39,53,00,00),
	HX_("_y",3a,53,00,00),
	HX_("_z",3b,53,00,00),
	HX_("_pivotPoint",4d,67,54,98),
	HX_("_pivotZero",cb,8a,b8,ad),
	HX_("_pos",95,a2,20,3f),
	HX_("_rot",18,27,22,3f),
	HX_("_sca",d2,de,22,3f),
	HX_("_transformComponents",a3,7c,2b,e2),
	HX_("extra",90,9a,22,77),
	HX_("get_x",4f,a5,60,91),
	HX_("set_x",5b,9b,2f,7a),
	HX_("get_y",50,a5,60,91),
	HX_("set_y",5c,9b,2f,7a),
	HX_("get_z",51,a5,60,91),
	HX_("set_z",5d,9b,2f,7a),
	HX_("get_rotationX",31,2d,53,2e),
	HX_("set_rotationX",3d,0f,59,73),
	HX_("get_rotationY",32,2d,53,2e),
	HX_("set_rotationY",3e,0f,59,73),
	HX_("get_rotationZ",33,2d,53,2e),
	HX_("set_rotationZ",3f,0f,59,73),
	HX_("get_scaleX",57,5a,ad,2c),
	HX_("set_scaleX",cb,f8,2a,30),
	HX_("get_scaleY",58,5a,ad,2c),
	HX_("set_scaleY",cc,f8,2a,30),
	HX_("get_scaleZ",59,5a,ad,2c),
	HX_("set_scaleZ",cd,f8,2a,30),
	HX_("get_eulers",b3,d2,24,f8),
	HX_("set_eulers",27,71,a2,fb),
	HX_("get_transform",43,01,f7,06),
	HX_("set_transform",4f,e3,fc,4b),
	HX_("get_pivotPoint",77,22,c0,3b),
	HX_("set_pivotPoint",eb,0a,e0,5b),
	HX_("get_position",b2,54,14,80),
	HX_("set_position",26,78,0d,95),
	HX_("getPosition",5f,63,ee,f0),
	HX_("get_forwardVector",bf,33,10,89),
	HX_("get_rightVector",56,35,c4,c1),
	HX_("get_upVector",87,f5,7d,d6),
	HX_("get_backVector",93,1e,dd,4b),
	HX_("get_leftVector",73,f4,63,3c),
	HX_("get_downVector",0e,1b,57,4a),
	HX_("scale",8a,ce,ce,78),
	HX_("moveForward",b4,1a,47,be),
	HX_("moveBackward",14,74,4e,bb),
	HX_("moveLeft",b8,73,67,ea),
	HX_("moveRight",0b,db,2a,a7),
	HX_("moveUp",cc,d3,ac,cc),
	HX_("moveDown",13,64,25,e5),
	HX_("moveTo",ec,d2,ac,cc),
	HX_("movePivot",f1,19,69,80),
	HX_("translate",4e,d7,7f,49),
	HX_("translateLocal",3d,27,a9,e0),
	HX_("pitch",c0,bb,a0,c2),
	HX_("yaw",af,25,5c,00),
	HX_("roll",7d,eb,ae,4b),
	HX_("clone",5d,13,63,48),
	HX_("rotateTo",b6,1c,83,08),
	HX_("rotate",5b,46,20,cb),
	HX_("lookAt",32,75,b5,61),
	HX_("dispose",9f,80,4c,bb),
	HX_("disposeAsset",d1,b8,88,cb),
	HX_("invalidateTransform",71,6c,78,d4),
	HX_("updateTransform",23,fe,1d,95),
	HX_("get_zOffset",c4,03,09,ec),
	HX_("set_zOffset",d0,0a,76,f6),
	::String(null()) };

static void Object3D_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Object3D_obj::tempAxeX,"tempAxeX");
	HX_MARK_MEMBER_NAME(Object3D_obj::tempAxeY,"tempAxeY");
	HX_MARK_MEMBER_NAME(Object3D_obj::tempAxeZ,"tempAxeZ");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Object3D_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Object3D_obj::tempAxeX,"tempAxeX");
	HX_VISIT_MEMBER_NAME(Object3D_obj::tempAxeY,"tempAxeY");
	HX_VISIT_MEMBER_NAME(Object3D_obj::tempAxeZ,"tempAxeZ");
};

#endif

::hx::Class Object3D_obj::__mClass;

static ::String Object3D_obj_sStaticFields[] = {
	HX_("tempAxeX",3e,22,ed,8f),
	HX_("tempAxeY",3f,22,ed,8f),
	HX_("tempAxeZ",40,22,ed,8f),
	::String(null())
};

void Object3D_obj::__register()
{
	Object3D_obj _hx_dummy;
	Object3D_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.base.Object3D",4d,a1,15,22);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Object3D_obj::__GetStatic;
	__mClass->mSetStaticField = &Object3D_obj::__SetStatic;
	__mClass->mMarkFunc = Object3D_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Object3D_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Object3D_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Object3D_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Object3D_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Object3D_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Object3D_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace core
} // end namespace base
