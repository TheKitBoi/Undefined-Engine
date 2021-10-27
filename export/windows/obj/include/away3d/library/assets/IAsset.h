#ifndef INCLUDED_away3d_library_assets_IAsset
#define INCLUDED_away3d_library_assets_IAsset

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace library{
namespace assets{


class HXCPP_CLASS_ATTRIBUTES IAsset_obj {
	public:
		typedef  ::openfl::events::IEventDispatcher_obj super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_addEventListener)(::String type, ::Dynamic listener,::hx::Null< bool >  useCapture,::hx::Null< int >  priority,::hx::Null< bool >  useWeakReference); 
		static inline void addEventListener( ::Dynamic _hx_,::String type, ::Dynamic listener,::hx::Null< bool >  useCapture,::hx::Null< int >  priority,::hx::Null< bool >  useWeakReference) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::away3d::library::assets::IAsset_obj *>(_hx_.mPtr->_hx_getInterface(0xa8241686)))->_hx_addEventListener)(type,listener,useCapture,priority,useWeakReference);
		}
		bool (::hx::Object :: *_hx_dispatchEvent)( ::openfl::events::Event event); 
		static inline bool dispatchEvent( ::Dynamic _hx_, ::openfl::events::Event event) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::library::assets::IAsset_obj *>(_hx_.mPtr->_hx_getInterface(0xa8241686)))->_hx_dispatchEvent)(event);
		}
		bool (::hx::Object :: *_hx_hasEventListener)(::String type); 
		static inline bool hasEventListener( ::Dynamic _hx_,::String type) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::library::assets::IAsset_obj *>(_hx_.mPtr->_hx_getInterface(0xa8241686)))->_hx_hasEventListener)(type);
		}
		void (::hx::Object :: *_hx_removeEventListener)(::String type, ::Dynamic listener,::hx::Null< bool >  useCapture); 
		static inline void removeEventListener( ::Dynamic _hx_,::String type, ::Dynamic listener,::hx::Null< bool >  useCapture) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::away3d::library::assets::IAsset_obj *>(_hx_.mPtr->_hx_getInterface(0xa8241686)))->_hx_removeEventListener)(type,listener,useCapture);
		}
		bool (::hx::Object :: *_hx_willTrigger)(::String type); 
		static inline bool willTrigger( ::Dynamic _hx_,::String type) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::library::assets::IAsset_obj *>(_hx_.mPtr->_hx_getInterface(0xa8241686)))->_hx_willTrigger)(type);
		}
		::String (::hx::Object :: *_hx_get_name)(); 
		static inline ::String get_name( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::library::assets::IAsset_obj *>(_hx_.mPtr->_hx_getInterface(0xa8241686)))->_hx_get_name)();
		}
		::String (::hx::Object :: *_hx_set_name)(::String val); 
		static inline ::String set_name( ::Dynamic _hx_,::String val) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::library::assets::IAsset_obj *>(_hx_.mPtr->_hx_getInterface(0xa8241686)))->_hx_set_name)(val);
		}
		::String (::hx::Object :: *_hx_get_id)(); 
		static inline ::String get_id( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::library::assets::IAsset_obj *>(_hx_.mPtr->_hx_getInterface(0xa8241686)))->_hx_get_id)();
		}
		::String (::hx::Object :: *_hx_set_id)(::String val); 
		static inline ::String set_id( ::Dynamic _hx_,::String val) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::library::assets::IAsset_obj *>(_hx_.mPtr->_hx_getInterface(0xa8241686)))->_hx_set_id)(val);
		}
		::String (::hx::Object :: *_hx_get_assetNamespace)(); 
		static inline ::String get_assetNamespace( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::library::assets::IAsset_obj *>(_hx_.mPtr->_hx_getInterface(0xa8241686)))->_hx_get_assetNamespace)();
		}
		::String (::hx::Object :: *_hx_get_assetType)(); 
		static inline ::String get_assetType( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::library::assets::IAsset_obj *>(_hx_.mPtr->_hx_getInterface(0xa8241686)))->_hx_get_assetType)();
		}
		::cpp::VirtualArray (::hx::Object :: *_hx_get_assetFullPath)(); 
		static inline ::cpp::VirtualArray get_assetFullPath( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::library::assets::IAsset_obj *>(_hx_.mPtr->_hx_getInterface(0xa8241686)))->_hx_get_assetFullPath)();
		}
		bool (::hx::Object :: *_hx_assetPathEquals)(::String name,::String ns); 
		static inline bool assetPathEquals( ::Dynamic _hx_,::String name,::String ns) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::library::assets::IAsset_obj *>(_hx_.mPtr->_hx_getInterface(0xa8241686)))->_hx_assetPathEquals)(name,ns);
		}
		void (::hx::Object :: *_hx_resetAssetPath)(::String name,::String ns, ::Dynamic overrideOriginal); 
		static inline void resetAssetPath( ::Dynamic _hx_,::String name,::String ns, ::Dynamic overrideOriginal) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::away3d::library::assets::IAsset_obj *>(_hx_.mPtr->_hx_getInterface(0xa8241686)))->_hx_resetAssetPath)(name,ns,overrideOriginal);
		}
		void (::hx::Object :: *_hx_dispose)(); 
		static inline void dispose( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::away3d::library::assets::IAsset_obj *>(_hx_.mPtr->_hx_getInterface(0xa8241686)))->_hx_dispose)();
		}
};

} // end namespace away3d
} // end namespace library
} // end namespace assets

#endif /* INCLUDED_away3d_library_assets_IAsset */ 
