#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_away3d_errors_AbstractMethodError
#include <away3d/errors/AbstractMethodError.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_textures_TextureProxyBase
#include <away3d/textures/TextureProxyBase.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bdc552a39fc6f6ba_14_new,"away3d.textures.TextureProxyBase","new",0xbe10e25d,"away3d.textures.TextureProxyBase.new","away3d/textures/TextureProxyBase.hx",14,0x70cc4bd3)
HX_LOCAL_STACK_FRAME(_hx_pos_bdc552a39fc6f6ba_40_get_hasMipMaps,"away3d.textures.TextureProxyBase","get_hasMipMaps",0x62b02b3d,"away3d.textures.TextureProxyBase.get_hasMipMaps","away3d/textures/TextureProxyBase.hx",40,0x70cc4bd3)
HX_LOCAL_STACK_FRAME(_hx_pos_bdc552a39fc6f6ba_45_get_format,"away3d.textures.TextureProxyBase","get_format",0xf267d6a3,"away3d.textures.TextureProxyBase.get_format","away3d/textures/TextureProxyBase.hx",45,0x70cc4bd3)
HX_LOCAL_STACK_FRAME(_hx_pos_bdc552a39fc6f6ba_50_get_assetType,"away3d.textures.TextureProxyBase","get_assetType",0xbfff64de,"away3d.textures.TextureProxyBase.get_assetType","away3d/textures/TextureProxyBase.hx",50,0x70cc4bd3)
HX_LOCAL_STACK_FRAME(_hx_pos_bdc552a39fc6f6ba_55_get_width,"away3d.textures.TextureProxyBase","get_width",0x3d22401a,"away3d.textures.TextureProxyBase.get_width","away3d/textures/TextureProxyBase.hx",55,0x70cc4bd3)
HX_LOCAL_STACK_FRAME(_hx_pos_bdc552a39fc6f6ba_60_set_width,"away3d.textures.TextureProxyBase","set_width",0x20732c26,"away3d.textures.TextureProxyBase.set_width","away3d/textures/TextureProxyBase.hx",60,0x70cc4bd3)
HX_LOCAL_STACK_FRAME(_hx_pos_bdc552a39fc6f6ba_65_get_height,"away3d.textures.TextureProxyBase","get_height",0xf7254f53,"away3d.textures.TextureProxyBase.get_height","away3d/textures/TextureProxyBase.hx",65,0x70cc4bd3)
HX_LOCAL_STACK_FRAME(_hx_pos_bdc552a39fc6f6ba_70_set_height,"away3d.textures.TextureProxyBase","set_height",0xfaa2edc7,"away3d.textures.TextureProxyBase.set_height","away3d/textures/TextureProxyBase.hx",70,0x70cc4bd3)
HX_LOCAL_STACK_FRAME(_hx_pos_bdc552a39fc6f6ba_74_getTextureForStage3D,"away3d.textures.TextureProxyBase","getTextureForStage3D",0x6c442b8e,"away3d.textures.TextureProxyBase.getTextureForStage3D","away3d/textures/TextureProxyBase.hx",74,0x70cc4bd3)
HX_LOCAL_STACK_FRAME(_hx_pos_bdc552a39fc6f6ba_92_uploadContent,"away3d.textures.TextureProxyBase","uploadContent",0xdbbaed75,"away3d.textures.TextureProxyBase.uploadContent","away3d/textures/TextureProxyBase.hx",92,0x70cc4bd3)
HX_LOCAL_STACK_FRAME(_hx_pos_bdc552a39fc6f6ba_96_setSize,"away3d.textures.TextureProxyBase","setSize",0x6e523600,"away3d.textures.TextureProxyBase.setSize","away3d/textures/TextureProxyBase.hx",96,0x70cc4bd3)
HX_LOCAL_STACK_FRAME(_hx_pos_bdc552a39fc6f6ba_106_invalidateContent,"away3d.textures.TextureProxyBase","invalidateContent",0xc20643bb,"away3d.textures.TextureProxyBase.invalidateContent","away3d/textures/TextureProxyBase.hx",106,0x70cc4bd3)
HX_LOCAL_STACK_FRAME(_hx_pos_bdc552a39fc6f6ba_111_invalidateSize,"away3d.textures.TextureProxyBase","invalidateSize",0x73faa4ff,"away3d.textures.TextureProxyBase.invalidateSize","away3d/textures/TextureProxyBase.hx",111,0x70cc4bd3)
HX_LOCAL_STACK_FRAME(_hx_pos_bdc552a39fc6f6ba_125_createTexture,"away3d.textures.TextureProxyBase","createTexture",0xd40ff17c,"away3d.textures.TextureProxyBase.createTexture","away3d/textures/TextureProxyBase.hx",125,0x70cc4bd3)
HX_LOCAL_STACK_FRAME(_hx_pos_bdc552a39fc6f6ba_134_dispose,"away3d.textures.TextureProxyBase","dispose",0x17c6d51c,"away3d.textures.TextureProxyBase.dispose","away3d/textures/TextureProxyBase.hx",134,0x70cc4bd3)
namespace away3d{
namespace textures{

void TextureProxyBase_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_bdc552a39fc6f6ba_14_new)
HXLINE(  23)		this->_hasMipmaps = true;
HXLINE(  22)		this->_format = 1;
HXLINE(  33)		bool fixed = null();
HXDLIN(  33)		::Array< ::Dynamic> array = null();
HXDLIN(  33)		this->_textures =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,8,fixed,array,true);
HXLINE(  34)		bool fixed1 = null();
HXDLIN(  34)		::Array< ::Dynamic> array1 = null();
HXDLIN(  34)		this->_dirty =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,8,fixed1,array1,true);
HXLINE(  35)		super::__construct(null());
            	}

Dynamic TextureProxyBase_obj::__CreateEmpty() { return new TextureProxyBase_obj; }

void *TextureProxyBase_obj::_hx_vtable = 0;

Dynamic TextureProxyBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextureProxyBase_obj > _hx_result = new TextureProxyBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TextureProxyBase_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37f46043) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x37f46043;
		}
	} else {
		return inClassId==(int)0x6775b71b;
	}
}

static ::openfl::events::IEventDispatcher_obj _hx_away3d_textures_TextureProxyBase__hx_openfl_events_IEventDispatcher= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::away3d::textures::TextureProxyBase_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::away3d::textures::TextureProxyBase_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::away3d::textures::TextureProxyBase_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::away3d::textures::TextureProxyBase_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::away3d::textures::TextureProxyBase_obj::willTrigger,
};

static ::away3d::library::assets::IAsset_obj _hx_away3d_textures_TextureProxyBase__hx_away3d_library_assets_IAsset= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::away3d::textures::TextureProxyBase_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::away3d::textures::TextureProxyBase_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::away3d::textures::TextureProxyBase_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::away3d::textures::TextureProxyBase_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::away3d::textures::TextureProxyBase_obj::willTrigger,
	( ::String (::hx::Object::*)())&::away3d::textures::TextureProxyBase_obj::get_name,
	( ::String (::hx::Object::*)(::String))&::away3d::textures::TextureProxyBase_obj::set_name,
	( ::String (::hx::Object::*)())&::away3d::textures::TextureProxyBase_obj::get_id,
	( ::String (::hx::Object::*)(::String))&::away3d::textures::TextureProxyBase_obj::set_id,
	( ::String (::hx::Object::*)())&::away3d::textures::TextureProxyBase_obj::get_assetNamespace,
	( ::String (::hx::Object::*)())&::away3d::textures::TextureProxyBase_obj::get_assetType,
	( ::cpp::VirtualArray (::hx::Object::*)())&::away3d::textures::TextureProxyBase_obj::get_assetFullPath,
	( bool (::hx::Object::*)(::String,::String))&::away3d::textures::TextureProxyBase_obj::assetPathEquals,
	( void (::hx::Object::*)(::String,::String, ::Dynamic))&::away3d::textures::TextureProxyBase_obj::resetAssetPath,
	( void (::hx::Object::*)())&::away3d::textures::TextureProxyBase_obj::dispose,
};

void *TextureProxyBase_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x87530281: return &_hx_away3d_textures_TextureProxyBase__hx_openfl_events_IEventDispatcher;
		case (int)0xa8241686: return &_hx_away3d_textures_TextureProxyBase__hx_away3d_library_assets_IAsset;
	}
	return super::_hx_getInterface(inHash);
}

bool TextureProxyBase_obj::get_hasMipMaps(){
            	HX_STACKFRAME(&_hx_pos_bdc552a39fc6f6ba_40_get_hasMipMaps)
HXDLIN(  40)		return this->_hasMipmaps;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextureProxyBase_obj,get_hasMipMaps,return )

 ::Dynamic TextureProxyBase_obj::get_format(){
            	HX_STACKFRAME(&_hx_pos_bdc552a39fc6f6ba_45_get_format)
HXDLIN(  45)		return this->_format;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextureProxyBase_obj,get_format,return )

::String TextureProxyBase_obj::get_assetType(){
            	HX_STACKFRAME(&_hx_pos_bdc552a39fc6f6ba_50_get_assetType)
HXDLIN(  50)		return HX_("texture",db,c8,e0,9e);
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextureProxyBase_obj,get_assetType,return )

int TextureProxyBase_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_bdc552a39fc6f6ba_55_get_width)
HXDLIN(  55)		return this->_width;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextureProxyBase_obj,get_width,return )

int TextureProxyBase_obj::set_width(int value){
            	HX_STACKFRAME(&_hx_pos_bdc552a39fc6f6ba_60_set_width)
HXDLIN(  60)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextureProxyBase_obj,set_width,return )

int TextureProxyBase_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_bdc552a39fc6f6ba_65_get_height)
HXDLIN(  65)		return this->_height;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextureProxyBase_obj,get_height,return )

int TextureProxyBase_obj::set_height(int value){
            	HX_STACKFRAME(&_hx_pos_bdc552a39fc6f6ba_70_set_height)
HXDLIN(  70)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextureProxyBase_obj,set_height,return )

 ::openfl::display3D::textures::TextureBase TextureProxyBase_obj::getTextureForStage3D( ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_bdc552a39fc6f6ba_74_getTextureForStage3D)
HXLINE(  75)		int contextIndex = stage3DProxy->_stage3DIndex;
HXLINE(  76)		 ::openfl::display3D::textures::TextureBase tex = this->_textures->get(contextIndex).StaticCast<  ::openfl::display3D::textures::TextureBase >();
HXLINE(  77)		 ::openfl::display3D::Context3D context = stage3DProxy->_context3D;
HXLINE(  79)		if (::hx::IsNull( context )) {
HXLINE(  79)			return null();
            		}
HXLINE(  81)		bool _hx_tmp;
HXDLIN(  81)		if (::hx::IsNotNull( tex )) {
HXLINE(  81)			_hx_tmp = ::hx::IsInstanceNotEq( this->_dirty->get(contextIndex).StaticCast<  ::openfl::display3D::Context3D >(),context );
            		}
            		else {
HXLINE(  81)			_hx_tmp = true;
            		}
HXDLIN(  81)		if (_hx_tmp) {
HXLINE(  82)			{
HXLINE(  82)				::Dynamic this1 = this->_textures;
HXDLIN(  82)				tex = this->createTexture(context);
HXDLIN(  82)				( ( ::openfl::_Vector::ObjectVector)(this1) )->set(contextIndex,tex).StaticCast<  ::openfl::display3D::textures::TextureBase >();
            			}
HXLINE(  83)			this->_dirty->set(contextIndex,context).StaticCast<  ::openfl::display3D::Context3D >();
HXLINE(  84)			this->uploadContent(tex);
            		}
HXLINE(  87)		return tex;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextureProxyBase_obj,getTextureForStage3D,return )

void TextureProxyBase_obj::uploadContent( ::openfl::display3D::textures::TextureBase texture){
            	HX_GC_STACKFRAME(&_hx_pos_bdc552a39fc6f6ba_92_uploadContent)
HXDLIN(  92)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::away3d::errors::AbstractMethodError_obj::__alloc( HX_CTX ,null(),null())));
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextureProxyBase_obj,uploadContent,(void))

void TextureProxyBase_obj::setSize(int width,int height){
            	HX_STACKFRAME(&_hx_pos_bdc552a39fc6f6ba_96_setSize)
HXLINE(  97)		bool _hx_tmp;
HXDLIN(  97)		if ((this->_width == width)) {
HXLINE(  97)			_hx_tmp = (this->_height != height);
            		}
            		else {
HXLINE(  97)			_hx_tmp = true;
            		}
HXDLIN(  97)		if (_hx_tmp) {
HXLINE(  98)			this->invalidateSize();
            		}
HXLINE( 100)		this->_width = width;
HXLINE( 101)		this->_height = height;
            	}


HX_DEFINE_DYNAMIC_FUNC2(TextureProxyBase_obj,setSize,(void))

void TextureProxyBase_obj::invalidateContent(){
            	HX_STACKFRAME(&_hx_pos_bdc552a39fc6f6ba_106_invalidateContent)
HXLINE( 107)		{
HXLINE( 107)			 ::openfl::display3D::Context3D value = null();
HXDLIN( 107)			this->_dirty->set(0,value).StaticCast<  ::openfl::display3D::Context3D >();
            		}
HXDLIN( 107)		{
HXLINE( 107)			 ::openfl::display3D::Context3D value1 = null();
HXDLIN( 107)			this->_dirty->set(1,value1).StaticCast<  ::openfl::display3D::Context3D >();
            		}
HXDLIN( 107)		{
HXLINE( 107)			 ::openfl::display3D::Context3D value2 = null();
HXDLIN( 107)			this->_dirty->set(2,value2).StaticCast<  ::openfl::display3D::Context3D >();
            		}
HXDLIN( 107)		{
HXLINE( 107)			 ::openfl::display3D::Context3D value3 = null();
HXDLIN( 107)			this->_dirty->set(3,value3).StaticCast<  ::openfl::display3D::Context3D >();
            		}
HXDLIN( 107)		{
HXLINE( 107)			 ::openfl::display3D::Context3D value4 = null();
HXDLIN( 107)			this->_dirty->set(4,value4).StaticCast<  ::openfl::display3D::Context3D >();
            		}
HXDLIN( 107)		{
HXLINE( 107)			 ::openfl::display3D::Context3D value5 = null();
HXDLIN( 107)			this->_dirty->set(5,value5).StaticCast<  ::openfl::display3D::Context3D >();
            		}
HXDLIN( 107)		{
HXLINE( 107)			 ::openfl::display3D::Context3D value6 = null();
HXDLIN( 107)			this->_dirty->set(6,value6).StaticCast<  ::openfl::display3D::Context3D >();
            		}
HXDLIN( 107)		{
HXLINE( 107)			 ::openfl::display3D::Context3D value7 = null();
HXDLIN( 107)			this->_dirty->set(7,value7).StaticCast<  ::openfl::display3D::Context3D >();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextureProxyBase_obj,invalidateContent,(void))

void TextureProxyBase_obj::invalidateSize(){
            	HX_STACKFRAME(&_hx_pos_bdc552a39fc6f6ba_111_invalidateSize)
HXLINE( 112)		 ::openfl::display3D::textures::TextureBase tex;
HXLINE( 113)		{
HXLINE( 113)			{
HXLINE( 114)				tex = this->_textures->get(0).StaticCast<  ::openfl::display3D::textures::TextureBase >();
HXLINE( 115)				if (::hx::IsNotNull( tex )) {
HXLINE( 116)					tex->dispose();
HXLINE( 117)					{
HXLINE( 117)						 ::openfl::display3D::textures::TextureBase value = null();
HXDLIN( 117)						this->_textures->set(0,value).StaticCast<  ::openfl::display3D::textures::TextureBase >();
            					}
HXLINE( 118)					{
HXLINE( 118)						 ::openfl::display3D::Context3D value1 = null();
HXDLIN( 118)						this->_dirty->set(0,value1).StaticCast<  ::openfl::display3D::Context3D >();
            					}
            				}
            			}
HXLINE( 113)			{
HXLINE( 114)				tex = this->_textures->get(1).StaticCast<  ::openfl::display3D::textures::TextureBase >();
HXLINE( 115)				if (::hx::IsNotNull( tex )) {
HXLINE( 116)					tex->dispose();
HXLINE( 117)					{
HXLINE( 117)						 ::openfl::display3D::textures::TextureBase value = null();
HXDLIN( 117)						this->_textures->set(1,value).StaticCast<  ::openfl::display3D::textures::TextureBase >();
            					}
HXLINE( 118)					{
HXLINE( 118)						 ::openfl::display3D::Context3D value1 = null();
HXDLIN( 118)						this->_dirty->set(1,value1).StaticCast<  ::openfl::display3D::Context3D >();
            					}
            				}
            			}
HXLINE( 113)			{
HXLINE( 114)				tex = this->_textures->get(2).StaticCast<  ::openfl::display3D::textures::TextureBase >();
HXLINE( 115)				if (::hx::IsNotNull( tex )) {
HXLINE( 116)					tex->dispose();
HXLINE( 117)					{
HXLINE( 117)						 ::openfl::display3D::textures::TextureBase value = null();
HXDLIN( 117)						this->_textures->set(2,value).StaticCast<  ::openfl::display3D::textures::TextureBase >();
            					}
HXLINE( 118)					{
HXLINE( 118)						 ::openfl::display3D::Context3D value1 = null();
HXDLIN( 118)						this->_dirty->set(2,value1).StaticCast<  ::openfl::display3D::Context3D >();
            					}
            				}
            			}
HXLINE( 113)			{
HXLINE( 114)				tex = this->_textures->get(3).StaticCast<  ::openfl::display3D::textures::TextureBase >();
HXLINE( 115)				if (::hx::IsNotNull( tex )) {
HXLINE( 116)					tex->dispose();
HXLINE( 117)					{
HXLINE( 117)						 ::openfl::display3D::textures::TextureBase value = null();
HXDLIN( 117)						this->_textures->set(3,value).StaticCast<  ::openfl::display3D::textures::TextureBase >();
            					}
HXLINE( 118)					{
HXLINE( 118)						 ::openfl::display3D::Context3D value1 = null();
HXDLIN( 118)						this->_dirty->set(3,value1).StaticCast<  ::openfl::display3D::Context3D >();
            					}
            				}
            			}
HXLINE( 113)			{
HXLINE( 114)				tex = this->_textures->get(4).StaticCast<  ::openfl::display3D::textures::TextureBase >();
HXLINE( 115)				if (::hx::IsNotNull( tex )) {
HXLINE( 116)					tex->dispose();
HXLINE( 117)					{
HXLINE( 117)						 ::openfl::display3D::textures::TextureBase value = null();
HXDLIN( 117)						this->_textures->set(4,value).StaticCast<  ::openfl::display3D::textures::TextureBase >();
            					}
HXLINE( 118)					{
HXLINE( 118)						 ::openfl::display3D::Context3D value1 = null();
HXDLIN( 118)						this->_dirty->set(4,value1).StaticCast<  ::openfl::display3D::Context3D >();
            					}
            				}
            			}
HXLINE( 113)			{
HXLINE( 114)				tex = this->_textures->get(5).StaticCast<  ::openfl::display3D::textures::TextureBase >();
HXLINE( 115)				if (::hx::IsNotNull( tex )) {
HXLINE( 116)					tex->dispose();
HXLINE( 117)					{
HXLINE( 117)						 ::openfl::display3D::textures::TextureBase value = null();
HXDLIN( 117)						this->_textures->set(5,value).StaticCast<  ::openfl::display3D::textures::TextureBase >();
            					}
HXLINE( 118)					{
HXLINE( 118)						 ::openfl::display3D::Context3D value1 = null();
HXDLIN( 118)						this->_dirty->set(5,value1).StaticCast<  ::openfl::display3D::Context3D >();
            					}
            				}
            			}
HXLINE( 113)			{
HXLINE( 114)				tex = this->_textures->get(6).StaticCast<  ::openfl::display3D::textures::TextureBase >();
HXLINE( 115)				if (::hx::IsNotNull( tex )) {
HXLINE( 116)					tex->dispose();
HXLINE( 117)					{
HXLINE( 117)						 ::openfl::display3D::textures::TextureBase value = null();
HXDLIN( 117)						this->_textures->set(6,value).StaticCast<  ::openfl::display3D::textures::TextureBase >();
            					}
HXLINE( 118)					{
HXLINE( 118)						 ::openfl::display3D::Context3D value1 = null();
HXDLIN( 118)						this->_dirty->set(6,value1).StaticCast<  ::openfl::display3D::Context3D >();
            					}
            				}
            			}
HXLINE( 113)			{
HXLINE( 114)				tex = this->_textures->get(7).StaticCast<  ::openfl::display3D::textures::TextureBase >();
HXLINE( 115)				if (::hx::IsNotNull( tex )) {
HXLINE( 116)					tex->dispose();
HXLINE( 117)					{
HXLINE( 117)						 ::openfl::display3D::textures::TextureBase value = null();
HXDLIN( 117)						this->_textures->set(7,value).StaticCast<  ::openfl::display3D::textures::TextureBase >();
            					}
HXLINE( 118)					{
HXLINE( 118)						 ::openfl::display3D::Context3D value1 = null();
HXDLIN( 118)						this->_dirty->set(7,value1).StaticCast<  ::openfl::display3D::Context3D >();
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextureProxyBase_obj,invalidateSize,(void))

 ::openfl::display3D::textures::TextureBase TextureProxyBase_obj::createTexture( ::openfl::display3D::Context3D context){
            	HX_GC_STACKFRAME(&_hx_pos_bdc552a39fc6f6ba_125_createTexture)
HXDLIN( 125)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::away3d::errors::AbstractMethodError_obj::__alloc( HX_CTX ,null(),null())));
HXDLIN( 125)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextureProxyBase_obj,createTexture,return )

void TextureProxyBase_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_bdc552a39fc6f6ba_134_dispose)
HXLINE( 135)		if (::hx::IsNotNull( this->_textures->get(0).StaticCast<  ::openfl::display3D::textures::TextureBase >() )) {
HXLINE( 136)			this->_textures->get(0).StaticCast<  ::openfl::display3D::textures::TextureBase >()->dispose();
            		}
HXLINE( 135)		if (::hx::IsNotNull( this->_textures->get(1).StaticCast<  ::openfl::display3D::textures::TextureBase >() )) {
HXLINE( 136)			this->_textures->get(1).StaticCast<  ::openfl::display3D::textures::TextureBase >()->dispose();
            		}
HXLINE( 135)		if (::hx::IsNotNull( this->_textures->get(2).StaticCast<  ::openfl::display3D::textures::TextureBase >() )) {
HXLINE( 136)			this->_textures->get(2).StaticCast<  ::openfl::display3D::textures::TextureBase >()->dispose();
            		}
HXLINE( 135)		if (::hx::IsNotNull( this->_textures->get(3).StaticCast<  ::openfl::display3D::textures::TextureBase >() )) {
HXLINE( 136)			this->_textures->get(3).StaticCast<  ::openfl::display3D::textures::TextureBase >()->dispose();
            		}
HXLINE( 135)		if (::hx::IsNotNull( this->_textures->get(4).StaticCast<  ::openfl::display3D::textures::TextureBase >() )) {
HXLINE( 136)			this->_textures->get(4).StaticCast<  ::openfl::display3D::textures::TextureBase >()->dispose();
            		}
HXLINE( 135)		if (::hx::IsNotNull( this->_textures->get(5).StaticCast<  ::openfl::display3D::textures::TextureBase >() )) {
HXLINE( 136)			this->_textures->get(5).StaticCast<  ::openfl::display3D::textures::TextureBase >()->dispose();
            		}
HXLINE( 135)		if (::hx::IsNotNull( this->_textures->get(6).StaticCast<  ::openfl::display3D::textures::TextureBase >() )) {
HXLINE( 136)			this->_textures->get(6).StaticCast<  ::openfl::display3D::textures::TextureBase >()->dispose();
            		}
HXLINE( 135)		if (::hx::IsNotNull( this->_textures->get(7).StaticCast<  ::openfl::display3D::textures::TextureBase >() )) {
HXLINE( 136)			this->_textures->get(7).StaticCast<  ::openfl::display3D::textures::TextureBase >()->dispose();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextureProxyBase_obj,dispose,(void))


::hx::ObjectPtr< TextureProxyBase_obj > TextureProxyBase_obj::__new() {
	::hx::ObjectPtr< TextureProxyBase_obj > __this = new TextureProxyBase_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TextureProxyBase_obj > TextureProxyBase_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TextureProxyBase_obj *__this = (TextureProxyBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextureProxyBase_obj), true, "away3d.textures.TextureProxyBase"));
	*(void **)__this = TextureProxyBase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TextureProxyBase_obj::TextureProxyBase_obj()
{
}

void TextureProxyBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextureProxyBase);
	HX_MARK_MEMBER_NAME(_format,"_format");
	HX_MARK_MEMBER_NAME(_hasMipmaps,"_hasMipmaps");
	HX_MARK_MEMBER_NAME(_textures,"_textures");
	HX_MARK_MEMBER_NAME(_dirty,"_dirty");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	 ::away3d::library::assets::NamedAssetBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextureProxyBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_format,"_format");
	HX_VISIT_MEMBER_NAME(_hasMipmaps,"_hasMipmaps");
	HX_VISIT_MEMBER_NAME(_textures,"_textures");
	HX_VISIT_MEMBER_NAME(_dirty,"_dirty");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	 ::away3d::library::assets::NamedAssetBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TextureProxyBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_width() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_format() ); }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_height() ); }
		if (HX_FIELD_EQ(inName,"_dirty") ) { return ::hx::Val( _dirty ); }
		if (HX_FIELD_EQ(inName,"_width") ) { return ::hx::Val( _width ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_format") ) { return ::hx::Val( _format ); }
		if (HX_FIELD_EQ(inName,"_height") ) { return ::hx::Val( _height ); }
		if (HX_FIELD_EQ(inName,"setSize") ) { return ::hx::Val( setSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"assetType") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_assetType() ); }
		if (HX_FIELD_EQ(inName,"_textures") ) { return ::hx::Val( _textures ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hasMipMaps") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_hasMipMaps() ); }
		if (HX_FIELD_EQ(inName,"get_format") ) { return ::hx::Val( get_format_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_hasMipmaps") ) { return ::hx::Val( _hasMipmaps ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_assetType") ) { return ::hx::Val( get_assetType_dyn() ); }
		if (HX_FIELD_EQ(inName,"uploadContent") ) { return ::hx::Val( uploadContent_dyn() ); }
		if (HX_FIELD_EQ(inName,"createTexture") ) { return ::hx::Val( createTexture_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_hasMipMaps") ) { return ::hx::Val( get_hasMipMaps_dyn() ); }
		if (HX_FIELD_EQ(inName,"invalidateSize") ) { return ::hx::Val( invalidateSize_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"invalidateContent") ) { return ::hx::Val( invalidateContent_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getTextureForStage3D") ) { return ::hx::Val( getTextureForStage3D_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TextureProxyBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_width(inValue.Cast< int >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_height(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"_dirty") ) { _dirty=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_format") ) { _format=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_textures") ) { _textures=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_hasMipmaps") ) { _hasMipmaps=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextureProxyBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("hasMipMaps",d1,bd,e0,ea));
	outFields->push(HX_("format",37,8f,8e,fd));
	outFields->push(HX_("assetType",ca,40,af,b1));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("_format",d6,a0,05,6c));
	outFields->push(HX_("_hasMipmaps",d0,5e,91,d2));
	outFields->push(HX_("_textures",97,ee,64,ad));
	outFields->push(HX_("_dirty",53,97,b7,d5));
	outFields->push(HX_("_width",47,fd,49,c6));
	outFields->push(HX_("_height",86,19,c3,70));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TextureProxyBase_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextureProxyBase_obj,_format),HX_("_format",d6,a0,05,6c)},
	{::hx::fsBool,(int)offsetof(TextureProxyBase_obj,_hasMipmaps),HX_("_hasMipmaps",d0,5e,91,d2)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(TextureProxyBase_obj,_textures),HX_("_textures",97,ee,64,ad)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(TextureProxyBase_obj,_dirty),HX_("_dirty",53,97,b7,d5)},
	{::hx::fsInt,(int)offsetof(TextureProxyBase_obj,_width),HX_("_width",47,fd,49,c6)},
	{::hx::fsInt,(int)offsetof(TextureProxyBase_obj,_height),HX_("_height",86,19,c3,70)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TextureProxyBase_obj_sStaticStorageInfo = 0;
#endif

static ::String TextureProxyBase_obj_sMemberFields[] = {
	HX_("_format",d6,a0,05,6c),
	HX_("_hasMipmaps",d0,5e,91,d2),
	HX_("_textures",97,ee,64,ad),
	HX_("_dirty",53,97,b7,d5),
	HX_("_width",47,fd,49,c6),
	HX_("_height",86,19,c3,70),
	HX_("get_hasMipMaps",1a,46,d6,60),
	HX_("get_format",00,ff,15,ee),
	HX_("get_assetType",a1,14,13,73),
	HX_("get_width",5d,12,0c,0e),
	HX_("set_width",69,fe,5c,f1),
	HX_("get_height",b0,77,d3,f2),
	HX_("set_height",24,16,51,f6),
	HX_("getTextureForStage3D",2b,4a,01,9f),
	HX_("uploadContent",38,9d,ce,8e),
	HX_("setSize",83,e1,d7,11),
	HX_("invalidateContent",fe,90,40,61),
	HX_("invalidateSize",dc,bf,20,72),
	HX_("createTexture",3f,a1,23,87),
	HX_("dispose",9f,80,4c,bb),
	::String(null()) };

::hx::Class TextureProxyBase_obj::__mClass;

void TextureProxyBase_obj::__register()
{
	TextureProxyBase_obj _hx_dummy;
	TextureProxyBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.textures.TextureProxyBase",eb,6f,47,a6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextureProxyBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextureProxyBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextureProxyBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextureProxyBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace textures
