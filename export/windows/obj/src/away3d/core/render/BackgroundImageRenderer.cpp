#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_away3d_core_render_BackgroundImageRenderer
#include <away3d/core/render/BackgroundImageRenderer.h>
#endif
#ifndef INCLUDED_away3d_debug_Debug
#include <away3d/debug/Debug.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_textures_Texture2DBase
#include <away3d/textures/Texture2DBase.h>
#endif
#ifndef INCLUDED_away3d_textures_TextureProxyBase
#include <away3d/textures/TextureProxyBase.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Program3D
#include <openfl/display3D/Program3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D__Context3DProgramType_Context3DProgramType_Impl_
#include <openfl/display3D/_Context3DProgramType/Context3DProgramType_Impl_.h>
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
#ifndef INCLUDED_openfl_utils_AGALMiniAssembler
#include <openfl/utils/AGALMiniAssembler.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_87eb658338a1849d_32_new,"away3d.core.render.BackgroundImageRenderer","new",0x7f25baaa,"away3d.core.render.BackgroundImageRenderer.new","away3d/core/render/BackgroundImageRenderer.hx",32,0xd8927ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_87eb658338a1849d_37_get_stage3DProxy,"away3d.core.render.BackgroundImageRenderer","get_stage3DProxy",0x9a4bf4fe,"away3d.core.render.BackgroundImageRenderer.get_stage3DProxy","away3d/core/render/BackgroundImageRenderer.hx",37,0xd8927ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_87eb658338a1849d_41_set_stage3DProxy,"away3d.core.render.BackgroundImageRenderer","set_stage3DProxy",0xf08de272,"away3d.core.render.BackgroundImageRenderer.set_stage3DProxy","away3d/core/render/BackgroundImageRenderer.hx",41,0xd8927ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_87eb658338a1849d_52_removeBuffers,"away3d.core.render.BackgroundImageRenderer","removeBuffers",0xa6b06a59,"away3d.core.render.BackgroundImageRenderer.removeBuffers","away3d/core/render/BackgroundImageRenderer.hx",52,0xd8927ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_87eb658338a1849d_64_getVertexCode,"away3d.core.render.BackgroundImageRenderer","getVertexCode",0x4b5901b1,"away3d.core.render.BackgroundImageRenderer.getVertexCode","away3d/core/render/BackgroundImageRenderer.hx",64,0xd8927ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_87eb658338a1849d_69_getFragmentCode,"away3d.core.render.BackgroundImageRenderer","getFragmentCode",0x390eec1d,"away3d.core.render.BackgroundImageRenderer.getFragmentCode","away3d/core/render/BackgroundImageRenderer.hx",69,0xd8927ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_87eb658338a1849d_85_dispose,"away3d.core.render.BackgroundImageRenderer","dispose",0xd60257e9,"away3d.core.render.BackgroundImageRenderer.dispose","away3d/core/render/BackgroundImageRenderer.hx",85,0xd8927ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_87eb658338a1849d_89_render,"away3d.core.render.BackgroundImageRenderer","render",0xbbcf8b4c,"away3d.core.render.BackgroundImageRenderer.render","away3d/core/render/BackgroundImageRenderer.hx",89,0xd8927ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_87eb658338a1849d_115_initBuffers,"away3d.core.render.BackgroundImageRenderer","initBuffers",0x458f568d,"away3d.core.render.BackgroundImageRenderer.initBuffers","away3d/core/render/BackgroundImageRenderer.hx",115,0xd8927ce7)
static const int _hx_array_data_f27cddb8_12[] = {
	(int)2,(int)1,(int)0,(int)3,(int)2,(int)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_87eb658338a1849d_146_get_texture,"away3d.core.render.BackgroundImageRenderer","get_texture",0x006f6d3c,"away3d.core.render.BackgroundImageRenderer.get_texture","away3d/core/render/BackgroundImageRenderer.hx",146,0xd8927ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_87eb658338a1849d_150_set_texture,"away3d.core.render.BackgroundImageRenderer","set_texture",0x0adc7448,"away3d.core.render.BackgroundImageRenderer.set_texture","away3d/core/render/BackgroundImageRenderer.hx",150,0xd8927ce7)
namespace away3d{
namespace core{
namespace render{

void BackgroundImageRenderer_obj::__construct( ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_87eb658338a1849d_32_new)
HXDLIN(  32)		this->set_stage3DProxy(stage3DProxy);
            	}

Dynamic BackgroundImageRenderer_obj::__CreateEmpty() { return new BackgroundImageRenderer_obj; }

void *BackgroundImageRenderer_obj::_hx_vtable = 0;

Dynamic BackgroundImageRenderer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BackgroundImageRenderer_obj > _hx_result = new BackgroundImageRenderer_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool BackgroundImageRenderer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0d222a0c;
}

 ::away3d::core::managers::Stage3DProxy BackgroundImageRenderer_obj::get_stage3DProxy(){
            	HX_STACKFRAME(&_hx_pos_87eb658338a1849d_37_get_stage3DProxy)
HXDLIN(  37)		return this->_stage3DProxy;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BackgroundImageRenderer_obj,get_stage3DProxy,return )

 ::away3d::core::managers::Stage3DProxy BackgroundImageRenderer_obj::set_stage3DProxy( ::away3d::core::managers::Stage3DProxy value){
            	HX_STACKFRAME(&_hx_pos_87eb658338a1849d_41_set_stage3DProxy)
HXLINE(  42)		if (::hx::IsInstanceEq( value,this->_stage3DProxy )) {
HXLINE(  43)			return value;
            		}
HXLINE(  44)		this->_stage3DProxy = value;
HXLINE(  46)		this->removeBuffers();
HXLINE(  47)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BackgroundImageRenderer_obj,set_stage3DProxy,return )

void BackgroundImageRenderer_obj::removeBuffers(){
            	HX_STACKFRAME(&_hx_pos_87eb658338a1849d_52_removeBuffers)
HXDLIN(  52)		if (::hx::IsNotNull( this->_vertexBuffer )) {
HXLINE(  53)			::away3d::core::managers::Stage3DProxy_obj::disposeVertexBuffer(this->_vertexBuffer);
HXLINE(  54)			this->_vertexBuffer = null();
HXLINE(  55)			this->_program3d->dispose();
HXLINE(  56)			this->_program3d = null();
HXLINE(  57)			::away3d::core::managers::Stage3DProxy_obj::disposeIndexBuffer(this->_indexBuffer);
HXLINE(  58)			this->_indexBuffer = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BackgroundImageRenderer_obj,removeBuffers,(void))

::String BackgroundImageRenderer_obj::getVertexCode(){
            	HX_STACKFRAME(&_hx_pos_87eb658338a1849d_64_getVertexCode)
HXDLIN(  64)		return (HX_("mov op, va0\n",e6,60,85,30) + HX_("mov v0, va1",2c,96,ba,67));
            	}


HX_DEFINE_DYNAMIC_FUNC0(BackgroundImageRenderer_obj,getVertexCode,return )

::String BackgroundImageRenderer_obj::getFragmentCode(){
            	HX_STACKFRAME(&_hx_pos_87eb658338a1849d_69_getFragmentCode)
HXLINE(  70)		::String format;
HXLINE(  71)		 ::Dynamic _hx_switch_0 = this->_texture->get_format();
            		if (  (_hx_switch_0==3) ){
HXLINE(  73)			format = HX_("dxt1,",3b,cd,bb,e3);
HXDLIN(  73)			goto _hx_goto_5;
            		}
            		if (  (_hx_switch_0==4) ){
HXLINE(  75)			format = HX_("dxt5,",b7,d0,bb,e3);
HXDLIN(  75)			goto _hx_goto_5;
            		}
            		/* default */{
HXLINE(  77)			format = HX_("",00,00,00,00);
            		}
            		_hx_goto_5:;
HXLINE(  79)		return (((HX_("tex ft0, v0, fs0 <2d, ",9a,00,fd,cd) + format) + HX_("linear>\t\n",da,3e,35,d9)) + HX_("mov oc, ft0",4e,aa,cb,a8));
            	}


HX_DEFINE_DYNAMIC_FUNC0(BackgroundImageRenderer_obj,getFragmentCode,return )

void BackgroundImageRenderer_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_87eb658338a1849d_85_dispose)
HXDLIN(  85)		this->removeBuffers();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BackgroundImageRenderer_obj,dispose,(void))

void BackgroundImageRenderer_obj::render(){
            	HX_STACKFRAME(&_hx_pos_87eb658338a1849d_89_render)
HXLINE(  90)		 ::openfl::display3D::Context3D context = this->_stage3DProxy->get_context3D();
HXLINE(  92)		if (::hx::IsInstanceNotEq( context,this->_context )) {
HXLINE(  93)			this->removeBuffers();
HXLINE(  94)			this->_context = context;
            		}
HXLINE(  97)		if (::hx::IsNull( context )) {
HXLINE(  98)			return;
            		}
HXLINE( 100)		if (::hx::IsNull( this->_vertexBuffer )) {
HXLINE( 101)			this->initBuffers(context);
            		}
HXLINE( 103)		context->setBlendFactors(2,9);
HXLINE( 104)		context->setProgram(this->_program3d);
HXLINE( 105)		context->setTextureAt(0,this->_texture->getTextureForStage3D(this->_stage3DProxy));
HXLINE( 106)		context->setVertexBufferAt(0,this->_vertexBuffer,0,2);
HXLINE( 107)		context->setVertexBufferAt(1,this->_vertexBuffer,2,2);
HXLINE( 108)		context->drawTriangles(this->_indexBuffer,0,2);
HXLINE( 109)		context->setVertexBufferAt(0,null(),null(),null());
HXLINE( 110)		context->setVertexBufferAt(1,null(),null(),null());
HXLINE( 111)		context->setTextureAt(0,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(BackgroundImageRenderer_obj,render,(void))

void BackgroundImageRenderer_obj::initBuffers( ::openfl::display3D::Context3D context){
            	HX_GC_STACKFRAME(&_hx_pos_87eb658338a1849d_115_initBuffers)
HXLINE( 116)		this->_vertexBuffer = this->_stage3DProxy->createVertexBuffer(4,4);
HXLINE( 117)		this->_program3d = context->createProgram(null());
HXLINE( 118)		this->_indexBuffer = this->_stage3DProxy->createIndexBuffer(6);
HXLINE( 119)		::Array< int > array = ::Array_obj< int >::fromData( _hx_array_data_f27cddb8_12,6);
HXDLIN( 119)		int length = null();
HXDLIN( 119)		bool fixed = null();
HXDLIN( 119)		::Array< int > array1 = null();
HXDLIN( 119)		 ::openfl::_Vector::IntVector vector =  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,length,fixed,array1);
HXDLIN( 119)		{
HXLINE( 119)			int _g = 0;
HXDLIN( 119)			int _g1 = array->length;
HXDLIN( 119)			while((_g < _g1)){
HXLINE( 119)				_g = (_g + 1);
HXDLIN( 119)				int i = (_g - 1);
HXDLIN( 119)				vector->set(i,array->__get(i));
            			}
            		}
HXDLIN( 119)		 ::openfl::_Vector::IntVector v = vector;
HXLINE( 120)		this->_indexBuffer->uploadFromVector(v,0,6);
HXLINE( 121)		 ::openfl::display3D::Program3D _hx_tmp = this->_program3d;
HXDLIN( 121)		 ::openfl::utils::AGALMiniAssembler _hx_tmp1 =  ::openfl::utils::AGALMiniAssembler_obj::__alloc( HX_CTX ,::away3d::debug::Debug_obj::active);
HXDLIN( 121)		::String _hx_tmp2 = ::openfl::display3D::_Context3DProgramType::Context3DProgramType_Impl__obj::toString(1);
HXDLIN( 121)		 ::openfl::utils::ByteArrayData _hx_tmp3 = _hx_tmp1->assemble(_hx_tmp2,this->getVertexCode(),null(),null());
HXLINE( 122)		 ::openfl::utils::AGALMiniAssembler _hx_tmp4 =  ::openfl::utils::AGALMiniAssembler_obj::__alloc( HX_CTX ,::away3d::debug::Debug_obj::active);
HXDLIN( 122)		::String _hx_tmp5 = ::openfl::display3D::_Context3DProgramType::Context3DProgramType_Impl__obj::toString(0);
HXLINE( 121)		_hx_tmp->upload(_hx_tmp3,_hx_tmp4->assemble(_hx_tmp5,this->getFragmentCode(),null(),null()));
HXLINE( 125)		Float w = ( (Float)(2) );
HXLINE( 126)		Float h = ( (Float)(2) );
HXLINE( 127)		Float x = ( (Float)(-1) );
HXLINE( 128)		Float y = ( (Float)(1) );
HXLINE( 130)		if (::hx::IsNotNull( this->_stage3DProxy->get_scissorRect() )) {
HXLINE( 131)			Float x1 = (this->_stage3DProxy->get_scissorRect()->x * ( (Float)(2) ));
HXDLIN( 131)			Float x2 = (x1 - this->_stage3DProxy->get_viewPort()->width);
HXDLIN( 131)			x = (x2 / this->_stage3DProxy->get_viewPort()->width);
HXLINE( 132)			Float y1 = (this->_stage3DProxy->get_scissorRect()->y * ( (Float)(2) ));
HXDLIN( 132)			Float y2 = (y1 - this->_stage3DProxy->get_viewPort()->height);
HXDLIN( 132)			y = ((y2 / this->_stage3DProxy->get_viewPort()->height) * ( (Float)(-1) ));
HXLINE( 133)			Float w1 = this->_stage3DProxy->get_viewPort()->width;
HXDLIN( 133)			w = (( (Float)(2) ) / (w1 / this->_stage3DProxy->get_scissorRect()->width));
HXLINE( 134)			Float h1 = this->_stage3DProxy->get_viewPort()->height;
HXDLIN( 134)			h = (( (Float)(2) ) / (h1 / this->_stage3DProxy->get_scissorRect()->height));
            		}
HXLINE( 137)		 ::openfl::display3D::VertexBuffer3D _hx_tmp6 = this->_vertexBuffer;
HXDLIN( 137)		::Array< Float > array2 = ::Array_obj< Float >::__new(16)->init(0,x)->init(1,(y - h))->init(2,0)->init(3,1)->init(4,(x + w))->init(5,(y - h))->init(6,1)->init(7,1)->init(8,(x + w))->init(9,y)->init(10,1)->init(11,0)->init(12,x)->init(13,y)->init(14,0)->init(15,0);
HXDLIN( 137)		int length1 = null();
HXDLIN( 137)		bool fixed1 = null();
HXDLIN( 137)		::Array< Float > array3 = null();
HXDLIN( 137)		 ::openfl::_Vector::FloatVector vector1 =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length1,fixed1,array3,true);
HXDLIN( 137)		{
HXLINE( 137)			int _g2 = 0;
HXDLIN( 137)			int _g3 = array2->length;
HXDLIN( 137)			while((_g2 < _g3)){
HXLINE( 137)				_g2 = (_g2 + 1);
HXDLIN( 137)				int i = (_g2 - 1);
HXDLIN( 137)				vector1->set(i,array2->__get(i));
            			}
            		}
HXDLIN( 137)		_hx_tmp6->uploadFromVector(vector1,0,4);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BackgroundImageRenderer_obj,initBuffers,(void))

 ::away3d::textures::Texture2DBase BackgroundImageRenderer_obj::get_texture(){
            	HX_STACKFRAME(&_hx_pos_87eb658338a1849d_146_get_texture)
HXDLIN( 146)		return this->_texture;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BackgroundImageRenderer_obj,get_texture,return )

 ::away3d::textures::Texture2DBase BackgroundImageRenderer_obj::set_texture( ::away3d::textures::Texture2DBase value){
            	HX_STACKFRAME(&_hx_pos_87eb658338a1849d_150_set_texture)
HXLINE( 151)		this->_texture = value;
HXLINE( 152)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BackgroundImageRenderer_obj,set_texture,return )


::hx::ObjectPtr< BackgroundImageRenderer_obj > BackgroundImageRenderer_obj::__new( ::away3d::core::managers::Stage3DProxy stage3DProxy) {
	::hx::ObjectPtr< BackgroundImageRenderer_obj > __this = new BackgroundImageRenderer_obj();
	__this->__construct(stage3DProxy);
	return __this;
}

::hx::ObjectPtr< BackgroundImageRenderer_obj > BackgroundImageRenderer_obj::__alloc(::hx::Ctx *_hx_ctx, ::away3d::core::managers::Stage3DProxy stage3DProxy) {
	BackgroundImageRenderer_obj *__this = (BackgroundImageRenderer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BackgroundImageRenderer_obj), true, "away3d.core.render.BackgroundImageRenderer"));
	*(void **)__this = BackgroundImageRenderer_obj::_hx_vtable;
	__this->__construct(stage3DProxy);
	return __this;
}

BackgroundImageRenderer_obj::BackgroundImageRenderer_obj()
{
}

void BackgroundImageRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BackgroundImageRenderer);
	HX_MARK_MEMBER_NAME(_program3d,"_program3d");
	HX_MARK_MEMBER_NAME(_texture,"_texture");
	HX_MARK_MEMBER_NAME(_indexBuffer,"_indexBuffer");
	HX_MARK_MEMBER_NAME(_vertexBuffer,"_vertexBuffer");
	HX_MARK_MEMBER_NAME(_stage3DProxy,"_stage3DProxy");
	HX_MARK_MEMBER_NAME(_context,"_context");
	HX_MARK_END_CLASS();
}

void BackgroundImageRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_program3d,"_program3d");
	HX_VISIT_MEMBER_NAME(_texture,"_texture");
	HX_VISIT_MEMBER_NAME(_indexBuffer,"_indexBuffer");
	HX_VISIT_MEMBER_NAME(_vertexBuffer,"_vertexBuffer");
	HX_VISIT_MEMBER_NAME(_stage3DProxy,"_stage3DProxy");
	HX_VISIT_MEMBER_NAME(_context,"_context");
}

::hx::Val BackgroundImageRenderer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_texture() ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_texture") ) { return ::hx::Val( _texture ); }
		if (HX_FIELD_EQ(inName,"_context") ) { return ::hx::Val( _context ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_program3d") ) { return ::hx::Val( _program3d ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initBuffers") ) { return ::hx::Val( initBuffers_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_texture") ) { return ::hx::Val( get_texture_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_texture") ) { return ::hx::Val( set_texture_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"stage3DProxy") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_stage3DProxy() ); }
		if (HX_FIELD_EQ(inName,"_indexBuffer") ) { return ::hx::Val( _indexBuffer ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_vertexBuffer") ) { return ::hx::Val( _vertexBuffer ); }
		if (HX_FIELD_EQ(inName,"_stage3DProxy") ) { return ::hx::Val( _stage3DProxy ); }
		if (HX_FIELD_EQ(inName,"removeBuffers") ) { return ::hx::Val( removeBuffers_dyn() ); }
		if (HX_FIELD_EQ(inName,"getVertexCode") ) { return ::hx::Val( getVertexCode_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getFragmentCode") ) { return ::hx::Val( getFragmentCode_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_stage3DProxy") ) { return ::hx::Val( get_stage3DProxy_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_stage3DProxy") ) { return ::hx::Val( set_stage3DProxy_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BackgroundImageRenderer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_texture(inValue.Cast<  ::away3d::textures::Texture2DBase >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_texture") ) { _texture=inValue.Cast<  ::away3d::textures::Texture2DBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_context") ) { _context=inValue.Cast<  ::openfl::display3D::Context3D >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_program3d") ) { _program3d=inValue.Cast<  ::openfl::display3D::Program3D >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"stage3DProxy") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_stage3DProxy(inValue.Cast<  ::away3d::core::managers::Stage3DProxy >()) ); }
		if (HX_FIELD_EQ(inName,"_indexBuffer") ) { _indexBuffer=inValue.Cast<  ::openfl::display3D::IndexBuffer3D >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_vertexBuffer") ) { _vertexBuffer=inValue.Cast<  ::openfl::display3D::VertexBuffer3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_stage3DProxy") ) { _stage3DProxy=inValue.Cast<  ::away3d::core::managers::Stage3DProxy >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BackgroundImageRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("stage3DProxy",ff,18,cf,0e));
	outFields->push(HX_("texture",db,c8,e0,9e));
	outFields->push(HX_("_program3d",16,9c,66,38));
	outFields->push(HX_("_texture",5c,22,99,d8));
	outFields->push(HX_("_indexBuffer",b3,13,b0,5b));
	outFields->push(HX_("_vertexBuffer",63,42,18,53));
	outFields->push(HX_("_stage3DProxy",de,ab,3d,f1));
	outFields->push(HX_("_context",70,ef,2f,53));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BackgroundImageRenderer_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display3D::Program3D */ ,(int)offsetof(BackgroundImageRenderer_obj,_program3d),HX_("_program3d",16,9c,66,38)},
	{::hx::fsObject /*  ::away3d::textures::Texture2DBase */ ,(int)offsetof(BackgroundImageRenderer_obj,_texture),HX_("_texture",5c,22,99,d8)},
	{::hx::fsObject /*  ::openfl::display3D::IndexBuffer3D */ ,(int)offsetof(BackgroundImageRenderer_obj,_indexBuffer),HX_("_indexBuffer",b3,13,b0,5b)},
	{::hx::fsObject /*  ::openfl::display3D::VertexBuffer3D */ ,(int)offsetof(BackgroundImageRenderer_obj,_vertexBuffer),HX_("_vertexBuffer",63,42,18,53)},
	{::hx::fsObject /*  ::away3d::core::managers::Stage3DProxy */ ,(int)offsetof(BackgroundImageRenderer_obj,_stage3DProxy),HX_("_stage3DProxy",de,ab,3d,f1)},
	{::hx::fsObject /*  ::openfl::display3D::Context3D */ ,(int)offsetof(BackgroundImageRenderer_obj,_context),HX_("_context",70,ef,2f,53)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BackgroundImageRenderer_obj_sStaticStorageInfo = 0;
#endif

static ::String BackgroundImageRenderer_obj_sMemberFields[] = {
	HX_("_program3d",16,9c,66,38),
	HX_("_texture",5c,22,99,d8),
	HX_("_indexBuffer",b3,13,b0,5b),
	HX_("_vertexBuffer",63,42,18,53),
	HX_("_stage3DProxy",de,ab,3d,f1),
	HX_("_context",70,ef,2f,53),
	HX_("get_stage3DProxy",88,05,6e,13),
	HX_("set_stage3DProxy",fc,f2,af,69),
	HX_("removeBuffers",8f,ff,4a,8a),
	HX_("getVertexCode",e7,96,f3,2e),
	HX_("getFragmentCode",d3,ba,61,28),
	HX_("dispose",9f,80,4c,bb),
	HX_("render",56,6b,29,05),
	HX_("initBuffers",43,12,fb,69),
	HX_("get_texture",f2,28,db,24),
	HX_("set_texture",fe,2f,48,2f),
	::String(null()) };

::hx::Class BackgroundImageRenderer_obj::__mClass;

void BackgroundImageRenderer_obj::__register()
{
	BackgroundImageRenderer_obj _hx_dummy;
	BackgroundImageRenderer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.render.BackgroundImageRenderer",b8,dd,7c,f2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BackgroundImageRenderer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BackgroundImageRenderer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BackgroundImageRenderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BackgroundImageRenderer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace core
} // end namespace render
