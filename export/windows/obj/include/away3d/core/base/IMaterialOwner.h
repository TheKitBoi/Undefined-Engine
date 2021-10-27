#ifndef INCLUDED_away3d_core_base_IMaterialOwner
#define INCLUDED_away3d_core_base_IMaterialOwner

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(away3d,animators,IAnimator)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,materials,MaterialBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace core{
namespace base{


class HXCPP_CLASS_ATTRIBUTES IMaterialOwner_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		 ::away3d::materials::MaterialBase (::hx::Object :: *_hx_get_material)(); 
		static inline  ::away3d::materials::MaterialBase get_material( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::IMaterialOwner_obj *>(_hx_.mPtr->_hx_getInterface(0xcf5e1b32)))->_hx_get_material)();
		}
		 ::away3d::materials::MaterialBase (::hx::Object :: *_hx_set_material)( ::away3d::materials::MaterialBase value); 
		static inline  ::away3d::materials::MaterialBase set_material( ::Dynamic _hx_, ::away3d::materials::MaterialBase value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::IMaterialOwner_obj *>(_hx_.mPtr->_hx_getInterface(0xcf5e1b32)))->_hx_set_material)(value);
		}
		::Dynamic (::hx::Object :: *_hx_get_animator)(); 
		static inline ::Dynamic get_animator( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::IMaterialOwner_obj *>(_hx_.mPtr->_hx_getInterface(0xcf5e1b32)))->_hx_get_animator)();
		}
};

} // end namespace away3d
} // end namespace core
} // end namespace base

#endif /* INCLUDED_away3d_core_base_IMaterialOwner */ 
