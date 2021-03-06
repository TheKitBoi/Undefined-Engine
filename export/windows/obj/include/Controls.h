#ifndef INCLUDED_Controls
#define INCLUDED_Controls

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Controls)



class HXCPP_CLASS_ATTRIBUTES Controls_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Controls_obj OBJ_;
		Controls_obj();

	public:
		enum { _hx_ClassId = 0x6cff3556 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="Controls")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"Controls"); }

		inline static ::hx::ObjectPtr< Controls_obj > __new() {
			::hx::ObjectPtr< Controls_obj > __this = new Controls_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Controls_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Controls_obj *__this = (Controls_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Controls_obj), false, "Controls"));
			*(void **)__this = Controls_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Controls_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Controls",96,42,6e,11); }

		static void __boot();
		static bool up;
		static bool down;
		static bool left;
		static bool right;
		static bool confirmMenu;
		static bool confirmDialogue;
};


#endif /* INCLUDED_Controls */ 
