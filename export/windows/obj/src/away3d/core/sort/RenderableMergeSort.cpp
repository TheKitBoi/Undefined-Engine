#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_data_RenderableListItem
#include <away3d/core/data/RenderableListItem.h>
#endif
#ifndef INCLUDED_away3d_core_sort_IEntitySorter
#include <away3d/core/sort/IEntitySorter.h>
#endif
#ifndef INCLUDED_away3d_core_sort_RenderableMergeSort
#include <away3d/core/sort/RenderableMergeSort.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_EntityCollector
#include <away3d/core/traverse/EntityCollector.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_PartitionTraverser
#include <away3d/core/traverse/PartitionTraverser.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c0fe78ae804b3d2a_18_new,"away3d.core.sort.RenderableMergeSort","new",0xa9b522e8,"away3d.core.sort.RenderableMergeSort.new","away3d/core/sort/RenderableMergeSort.hx",18,0x7fa1f9e9)
HX_LOCAL_STACK_FRAME(_hx_pos_c0fe78ae804b3d2a_25_sort,"away3d.core.sort.RenderableMergeSort","sort",0xd81f0bd6,"away3d.core.sort.RenderableMergeSort.sort","away3d/core/sort/RenderableMergeSort.hx",25,0x7fa1f9e9)
HX_LOCAL_STACK_FRAME(_hx_pos_c0fe78ae804b3d2a_31_mergeSortByDepth,"away3d.core.sort.RenderableMergeSort","mergeSortByDepth",0x0e89008e,"away3d.core.sort.RenderableMergeSort.mergeSortByDepth","away3d/core/sort/RenderableMergeSort.hx",31,0x7fa1f9e9)
HX_LOCAL_STACK_FRAME(_hx_pos_c0fe78ae804b3d2a_93_mergeSortByMaterial,"away3d.core.sort.RenderableMergeSort","mergeSortByMaterial",0xa4ba55fc,"away3d.core.sort.RenderableMergeSort.mergeSortByMaterial","away3d/core/sort/RenderableMergeSort.hx",93,0x7fa1f9e9)
namespace away3d{
namespace core{
namespace sort{

void RenderableMergeSort_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c0fe78ae804b3d2a_18_new)
            	}

Dynamic RenderableMergeSort_obj::__CreateEmpty() { return new RenderableMergeSort_obj; }

void *RenderableMergeSort_obj::_hx_vtable = 0;

Dynamic RenderableMergeSort_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RenderableMergeSort_obj > _hx_result = new RenderableMergeSort_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool RenderableMergeSort_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x54af334a;
}

static ::away3d::core::sort::IEntitySorter_obj _hx_away3d_core_sort_RenderableMergeSort__hx_away3d_core_sort_IEntitySorter= {
	( void (::hx::Object::*)( ::away3d::core::traverse::EntityCollector))&::away3d::core::sort::RenderableMergeSort_obj::sort,
};

void *RenderableMergeSort_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xa78a4fbb: return &_hx_away3d_core_sort_RenderableMergeSort__hx_away3d_core_sort_IEntitySorter;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void RenderableMergeSort_obj::sort( ::away3d::core::traverse::EntityCollector collector){
            	HX_STACKFRAME(&_hx_pos_c0fe78ae804b3d2a_25_sort)
HXLINE(  26)		collector->set_opaqueRenderableHead(this->mergeSortByMaterial(collector->get_opaqueRenderableHead()));
HXLINE(  27)		collector->set_blendedRenderableHead(this->mergeSortByDepth(collector->get_blendedRenderableHead()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(RenderableMergeSort_obj,sort,(void))

 ::away3d::core::data::RenderableListItem RenderableMergeSort_obj::mergeSortByDepth( ::away3d::core::data::RenderableListItem head){
            	HX_STACKFRAME(&_hx_pos_c0fe78ae804b3d2a_31_mergeSortByDepth)
HXLINE(  35)		bool _hx_tmp;
HXDLIN(  35)		if (::hx::IsNotNull( head )) {
HXLINE(  35)			_hx_tmp = ::hx::IsNull( head->next );
            		}
            		else {
HXLINE(  35)			_hx_tmp = true;
            		}
HXDLIN(  35)		if (_hx_tmp) {
HXLINE(  36)			return head;
            		}
HXLINE(  33)		 ::away3d::core::data::RenderableListItem slow = head;
HXDLIN(  33)		 ::away3d::core::data::RenderableListItem fast = head->next;
HXLINE(  42)		while(::hx::IsNotNull( fast )){
HXLINE(  43)			fast = fast->next;
HXLINE(  44)			if (::hx::IsNotNull( fast )) {
HXLINE(  45)				slow = slow->next;
HXLINE(  46)				fast = fast->next;
            			}
            		}
HXLINE(  32)		 ::away3d::core::data::RenderableListItem headB = slow->next;
HXLINE(  51)		slow->next = null();
HXLINE(  54)		head = this->mergeSortByDepth(head);
HXLINE(  55)		headB = this->mergeSortByDepth(headB);
HXLINE(  58)		 ::away3d::core::data::RenderableListItem result = null();
HXLINE(  59)		 ::away3d::core::data::RenderableListItem curr = null();
HXLINE(  60)		 ::away3d::core::data::RenderableListItem l = null();
HXLINE(  62)		if (::hx::IsNull( head )) {
HXLINE(  63)			return headB;
            		}
HXLINE(  64)		if (::hx::IsNull( headB )) {
HXLINE(  65)			return head;
            		}
HXLINE(  67)		while(true){
HXLINE(  67)			bool _hx_tmp;
HXDLIN(  67)			if (::hx::IsNotNull( head )) {
HXLINE(  67)				_hx_tmp = ::hx::IsNotNull( headB );
            			}
            			else {
HXLINE(  67)				_hx_tmp = false;
            			}
HXDLIN(  67)			if (!(_hx_tmp)) {
HXLINE(  67)				goto _hx_goto_3;
            			}
HXLINE(  68)			if ((head->zIndex < headB->zIndex)) {
HXLINE(  69)				l = head;
HXLINE(  70)				head = head->next;
            			}
            			else {
HXLINE(  72)				l = headB;
HXLINE(  73)				headB = headB->next;
            			}
HXLINE(  76)			if (::hx::IsNull( result )) {
HXLINE(  77)				result = l;
            			}
            			else {
HXLINE(  79)				curr->next = l;
            			}
HXLINE(  81)			curr = l;
            		}
            		_hx_goto_3:;
HXLINE(  84)		if (::hx::IsNotNull( head )) {
HXLINE(  85)			curr->next = head;
            		}
            		else {
HXLINE(  86)			if (::hx::IsNotNull( headB )) {
HXLINE(  87)				curr->next = headB;
            			}
            		}
HXLINE(  89)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(RenderableMergeSort_obj,mergeSortByDepth,return )

 ::away3d::core::data::RenderableListItem RenderableMergeSort_obj::mergeSortByMaterial( ::away3d::core::data::RenderableListItem head){
            	HX_STACKFRAME(&_hx_pos_c0fe78ae804b3d2a_93_mergeSortByMaterial)
HXLINE(  97)		bool _hx_tmp;
HXDLIN(  97)		if (::hx::IsNotNull( head )) {
HXLINE(  97)			_hx_tmp = ::hx::IsNull( head->next );
            		}
            		else {
HXLINE(  97)			_hx_tmp = true;
            		}
HXDLIN(  97)		if (_hx_tmp) {
HXLINE(  98)			return head;
            		}
HXLINE(  95)		 ::away3d::core::data::RenderableListItem slow = head;
HXDLIN(  95)		 ::away3d::core::data::RenderableListItem fast = head->next;
HXLINE( 104)		while(::hx::IsNotNull( fast )){
HXLINE( 105)			fast = fast->next;
HXLINE( 106)			if (::hx::IsNotNull( fast )) {
HXLINE( 107)				slow = slow->next;
HXLINE( 108)				fast = fast->next;
            			}
            		}
HXLINE(  94)		 ::away3d::core::data::RenderableListItem headB = slow->next;
HXLINE( 113)		slow->next = null();
HXLINE( 116)		head = this->mergeSortByMaterial(head);
HXLINE( 117)		headB = this->mergeSortByMaterial(headB);
HXLINE( 120)		 ::away3d::core::data::RenderableListItem result = null();
HXLINE( 121)		 ::away3d::core::data::RenderableListItem curr = null();
HXLINE( 122)		 ::away3d::core::data::RenderableListItem l = null();
HXLINE( 123)		int cmp;
HXLINE( 125)		if (::hx::IsNull( head )) {
HXLINE( 126)			return headB;
            		}
HXLINE( 127)		if (::hx::IsNull( headB )) {
HXLINE( 128)			return head;
            		}
HXLINE( 130)		while(true){
HXLINE( 130)			bool _hx_tmp;
HXDLIN( 130)			bool _hx_tmp1;
HXDLIN( 130)			bool _hx_tmp2;
HXDLIN( 130)			if (::hx::IsNotNull( head )) {
HXLINE( 130)				_hx_tmp2 = ::hx::IsNotNull( headB );
            			}
            			else {
HXLINE( 130)				_hx_tmp2 = false;
            			}
HXDLIN( 130)			if (_hx_tmp2) {
HXLINE( 130)				_hx_tmp1 = ::hx::IsNotNull( head );
            			}
            			else {
HXLINE( 130)				_hx_tmp1 = false;
            			}
HXDLIN( 130)			if (_hx_tmp1) {
HXLINE( 130)				_hx_tmp = ::hx::IsNotNull( headB );
            			}
            			else {
HXLINE( 130)				_hx_tmp = false;
            			}
HXDLIN( 130)			if (!(_hx_tmp)) {
HXLINE( 130)				goto _hx_goto_6;
            			}
HXLINE( 135)			int aid = head->renderOrderId;
HXLINE( 136)			int bid = headB->renderOrderId;
HXLINE( 138)			if ((aid == bid)) {
HXLINE( 139)				int ma = head->materialId;
HXLINE( 140)				int mb = headB->materialId;
HXLINE( 142)				if ((ma == mb)) {
HXLINE( 143)					if ((head->zIndex < headB->zIndex)) {
HXLINE( 144)						cmp = 1;
            					}
            					else {
HXLINE( 146)						cmp = -1;
            					}
            				}
            				else {
HXLINE( 147)					if ((ma > mb)) {
HXLINE( 148)						cmp = 1;
            					}
            					else {
HXLINE( 150)						cmp = -1;
            					}
            				}
            			}
            			else {
HXLINE( 151)				if ((aid > bid)) {
HXLINE( 152)					cmp = 1;
            				}
            				else {
HXLINE( 154)					cmp = -1;
            				}
            			}
HXLINE( 156)			if ((cmp < 0)) {
HXLINE( 157)				l = head;
HXLINE( 158)				head = head->next;
            			}
            			else {
HXLINE( 160)				l = headB;
HXLINE( 161)				headB = headB->next;
            			}
HXLINE( 164)			if (::hx::IsNull( result )) {
HXLINE( 165)				result = l;
HXLINE( 166)				curr = l;
            			}
            			else {
HXLINE( 168)				curr->next = l;
HXLINE( 169)				curr = l;
            			}
            		}
            		_hx_goto_6:;
HXLINE( 173)		if (::hx::IsNotNull( head )) {
HXLINE( 174)			curr->next = head;
            		}
            		else {
HXLINE( 175)			if (::hx::IsNotNull( headB )) {
HXLINE( 176)				curr->next = headB;
            			}
            		}
HXLINE( 178)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(RenderableMergeSort_obj,mergeSortByMaterial,return )


::hx::ObjectPtr< RenderableMergeSort_obj > RenderableMergeSort_obj::__new() {
	::hx::ObjectPtr< RenderableMergeSort_obj > __this = new RenderableMergeSort_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< RenderableMergeSort_obj > RenderableMergeSort_obj::__alloc(::hx::Ctx *_hx_ctx) {
	RenderableMergeSort_obj *__this = (RenderableMergeSort_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RenderableMergeSort_obj), false, "away3d.core.sort.RenderableMergeSort"));
	*(void **)__this = RenderableMergeSort_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

RenderableMergeSort_obj::RenderableMergeSort_obj()
{
}

::hx::Val RenderableMergeSort_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"sort") ) { return ::hx::Val( sort_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"mergeSortByDepth") ) { return ::hx::Val( mergeSortByDepth_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"mergeSortByMaterial") ) { return ::hx::Val( mergeSortByMaterial_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *RenderableMergeSort_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *RenderableMergeSort_obj_sStaticStorageInfo = 0;
#endif

static ::String RenderableMergeSort_obj_sMemberFields[] = {
	HX_("sort",5e,27,58,4c),
	HX_("mergeSortByDepth",16,48,c1,cf),
	HX_("mergeSortByMaterial",74,73,8d,be),
	::String(null()) };

::hx::Class RenderableMergeSort_obj::__mClass;

void RenderableMergeSort_obj::__register()
{
	RenderableMergeSort_obj _hx_dummy;
	RenderableMergeSort_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.sort.RenderableMergeSort",f6,ce,67,1b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RenderableMergeSort_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RenderableMergeSort_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RenderableMergeSort_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RenderableMergeSort_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace core
} // end namespace sort
