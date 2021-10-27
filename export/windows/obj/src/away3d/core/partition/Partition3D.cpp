#include <hxcpp.h>

#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_partition_EntityNode
#include <away3d/core/partition/EntityNode.h>
#endif
#ifndef INCLUDED_away3d_core_partition_NodeBase
#include <away3d/core/partition/NodeBase.h>
#endif
#ifndef INCLUDED_away3d_core_partition_NullNode
#include <away3d/core/partition/NullNode.h>
#endif
#ifndef INCLUDED_away3d_core_partition_Partition3D
#include <away3d/core/partition/Partition3D.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_PartitionTraverser
#include <away3d/core/traverse/PartitionTraverser.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ad9f8f685ad8f83c_24_new,"away3d.core.partition.Partition3D","new",0xc48148e9,"away3d.core.partition.Partition3D.new","away3d/core/partition/Partition3D.hx",24,0xa7aa22c8)
HX_LOCAL_STACK_FRAME(_hx_pos_ad9f8f685ad8f83c_31_get_showDebugBounds,"away3d.core.partition.Partition3D","get_showDebugBounds",0xbccb90cb,"away3d.core.partition.Partition3D.get_showDebugBounds","away3d/core/partition/Partition3D.hx",31,0xa7aa22c8)
HX_LOCAL_STACK_FRAME(_hx_pos_ad9f8f685ad8f83c_35_set_showDebugBounds,"away3d.core.partition.Partition3D","set_showDebugBounds",0xf96883d7,"away3d.core.partition.Partition3D.set_showDebugBounds","away3d/core/partition/Partition3D.hx",35,0xa7aa22c8)
HX_LOCAL_STACK_FRAME(_hx_pos_ad9f8f685ad8f83c_47_traverse,"away3d.core.partition.Partition3D","traverse",0xff4e7489,"away3d.core.partition.Partition3D.traverse","away3d/core/partition/Partition3D.hx",47,0xa7aa22c8)
HX_LOCAL_STACK_FRAME(_hx_pos_ad9f8f685ad8f83c_62_markForUpdate,"away3d.core.partition.Partition3D","markForUpdate",0xf16fc1ee,"away3d.core.partition.Partition3D.markForUpdate","away3d/core/partition/Partition3D.hx",62,0xa7aa22c8)
HX_LOCAL_STACK_FRAME(_hx_pos_ad9f8f685ad8f83c_86_removeEntity,"away3d.core.partition.Partition3D","removeEntity",0x12875cde,"away3d.core.partition.Partition3D.removeEntity","away3d/core/partition/Partition3D.hx",86,0xa7aa22c8)
HX_LOCAL_STACK_FRAME(_hx_pos_ad9f8f685ad8f83c_114_updateEntities,"away3d.core.partition.Partition3D","updateEntities",0xb386bb81,"away3d.core.partition.Partition3D.updateEntities","away3d/core/partition/Partition3D.hx",114,0xa7aa22c8)
namespace away3d{
namespace core{
namespace partition{

void Partition3D_obj::__construct( ::away3d::core::partition::NodeBase rootNode){
            	HX_GC_STACKFRAME(&_hx_pos_ad9f8f685ad8f83c_24_new)
HXLINE(  25)		this->_rootNode = rootNode;
HXLINE(  26)		if (::hx::IsNull( rootNode )) {
HXLINE(  26)			this->_rootNode =  ::away3d::core::partition::NullNode_obj::__alloc( HX_CTX );
            		}
            	}

Dynamic Partition3D_obj::__CreateEmpty() { return new Partition3D_obj; }

void *Partition3D_obj::_hx_vtable = 0;

Dynamic Partition3D_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Partition3D_obj > _hx_result = new Partition3D_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Partition3D_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0fde0eaf;
}

bool Partition3D_obj::get_showDebugBounds(){
            	HX_STACKFRAME(&_hx_pos_ad9f8f685ad8f83c_31_get_showDebugBounds)
HXDLIN(  31)		return this->_rootNode->get_showDebugBounds();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Partition3D_obj,get_showDebugBounds,return )

bool Partition3D_obj::set_showDebugBounds(bool value){
            	HX_STACKFRAME(&_hx_pos_ad9f8f685ad8f83c_35_set_showDebugBounds)
HXLINE(  36)		this->_rootNode->set_showDebugBounds(value);
HXLINE(  37)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Partition3D_obj,set_showDebugBounds,return )

void Partition3D_obj::traverse( ::away3d::core::traverse::PartitionTraverser traverser){
            	HX_STACKFRAME(&_hx_pos_ad9f8f685ad8f83c_47_traverse)
HXLINE(  48)		if (this->_updatesMade) {
HXLINE(  49)			this->updateEntities();
            		}
HXLINE(  51)		++::away3d::core::traverse::PartitionTraverser_obj::_collectionMark;
HXLINE(  53)		this->_rootNode->acceptTraverser(traverser);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Partition3D_obj,traverse,(void))

void Partition3D_obj::markForUpdate( ::away3d::entities::Entity entity){
            	HX_STACKFRAME(&_hx_pos_ad9f8f685ad8f83c_62_markForUpdate)
HXLINE(  63)		 ::away3d::core::partition::EntityNode node = entity->getEntityPartitionNode();
HXLINE(  65)		 ::away3d::core::partition::EntityNode t = this->_updateQueue;
HXLINE(  68)		while(::hx::IsNotNull( t )){
HXLINE(  69)			if (::hx::IsInstanceEq( node,t )) {
HXLINE(  70)				return;
            			}
HXLINE(  72)			t = t->_updateQueueNext;
            		}
HXLINE(  75)		node->_updateQueueNext = this->_updateQueue;
HXLINE(  77)		this->_updateQueue = node;
HXLINE(  78)		this->_updatesMade = true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Partition3D_obj,markForUpdate,(void))

void Partition3D_obj::removeEntity( ::away3d::entities::Entity entity){
            	HX_STACKFRAME(&_hx_pos_ad9f8f685ad8f83c_86_removeEntity)
HXLINE(  87)		 ::away3d::core::partition::EntityNode node = entity->getEntityPartitionNode();
HXLINE(  88)		 ::away3d::core::partition::EntityNode t;
HXLINE(  90)		node->removeFromParent();
HXLINE(  93)		if (::hx::IsInstanceEq( node,this->_updateQueue )) {
HXLINE(  94)			this->_updateQueue = node->_updateQueueNext;
            		}
            		else {
HXLINE(  96)			t = this->_updateQueue;
HXLINE(  97)			while(true){
HXLINE(  97)				bool _hx_tmp;
HXDLIN(  97)				if (::hx::IsNotNull( t )) {
HXLINE(  97)					_hx_tmp = ::hx::IsInstanceNotEq( t->_updateQueueNext,node );
            				}
            				else {
HXLINE(  97)					_hx_tmp = false;
            				}
HXDLIN(  97)				if (!(_hx_tmp)) {
HXLINE(  97)					goto _hx_goto_6;
            				}
HXLINE(  98)				t = t->_updateQueueNext;
            			}
            			_hx_goto_6:;
HXLINE(  99)			if (::hx::IsNotNull( t )) {
HXLINE( 100)				t->_updateQueueNext = node->_updateQueueNext;
            			}
            		}
HXLINE( 103)		node->_updateQueueNext = null();
HXLINE( 106)		if (::hx::IsNull( this->_updateQueue )) {
HXLINE( 107)			this->_updatesMade = false;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Partition3D_obj,removeEntity,(void))

void Partition3D_obj::updateEntities(){
            	HX_STACKFRAME(&_hx_pos_ad9f8f685ad8f83c_114_updateEntities)
HXLINE( 115)		 ::away3d::core::partition::EntityNode node = this->_updateQueue;
HXLINE( 116)		 ::away3d::core::partition::NodeBase targetNode;
HXLINE( 117)		 ::away3d::core::partition::EntityNode t;
HXLINE( 120)		this->_updateQueue = null();
HXLINE( 121)		this->_updatesMade = false;
HXLINE( 123)		while(true){
HXLINE( 124)			 ::away3d::core::partition::NodeBase targetNode1 = this->_rootNode;
HXDLIN( 124)			targetNode = targetNode1->findPartitionForEntity(node->get_entity());
HXLINE( 127)			if (::hx::IsInstanceNotEq( node->get_parent(),targetNode )) {
HXLINE( 128)				if (::hx::IsNotNull( node )) {
HXLINE( 129)					node->removeFromParent();
            				}
HXLINE( 131)				targetNode->addNode(node);
            			}
HXLINE( 134)			t = node->_updateQueueNext;
HXLINE( 135)			node->_updateQueueNext = null();
HXLINE( 138)			node->get_entity()->internalUpdate();
HXLINE( 140)			node = t;
HXLINE( 123)			if (!(::hx::IsNotNull( node ))) {
HXLINE( 123)				goto _hx_goto_8;
            			}
            		}
            		_hx_goto_8:;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Partition3D_obj,updateEntities,(void))


::hx::ObjectPtr< Partition3D_obj > Partition3D_obj::__new( ::away3d::core::partition::NodeBase rootNode) {
	::hx::ObjectPtr< Partition3D_obj > __this = new Partition3D_obj();
	__this->__construct(rootNode);
	return __this;
}

::hx::ObjectPtr< Partition3D_obj > Partition3D_obj::__alloc(::hx::Ctx *_hx_ctx, ::away3d::core::partition::NodeBase rootNode) {
	Partition3D_obj *__this = (Partition3D_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Partition3D_obj), true, "away3d.core.partition.Partition3D"));
	*(void **)__this = Partition3D_obj::_hx_vtable;
	__this->__construct(rootNode);
	return __this;
}

Partition3D_obj::Partition3D_obj()
{
}

void Partition3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Partition3D);
	HX_MARK_MEMBER_NAME(_rootNode,"_rootNode");
	HX_MARK_MEMBER_NAME(_updatesMade,"_updatesMade");
	HX_MARK_MEMBER_NAME(_updateQueue,"_updateQueue");
	HX_MARK_END_CLASS();
}

void Partition3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_rootNode,"_rootNode");
	HX_VISIT_MEMBER_NAME(_updatesMade,"_updatesMade");
	HX_VISIT_MEMBER_NAME(_updateQueue,"_updateQueue");
}

::hx::Val Partition3D_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"traverse") ) { return ::hx::Val( traverse_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_rootNode") ) { return ::hx::Val( _rootNode ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_updatesMade") ) { return ::hx::Val( _updatesMade ); }
		if (HX_FIELD_EQ(inName,"_updateQueue") ) { return ::hx::Val( _updateQueue ); }
		if (HX_FIELD_EQ(inName,"removeEntity") ) { return ::hx::Val( removeEntity_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"markForUpdate") ) { return ::hx::Val( markForUpdate_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateEntities") ) { return ::hx::Val( updateEntities_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"showDebugBounds") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_showDebugBounds() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_showDebugBounds") ) { return ::hx::Val( get_showDebugBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_showDebugBounds") ) { return ::hx::Val( set_showDebugBounds_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Partition3D_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_rootNode") ) { _rootNode=inValue.Cast<  ::away3d::core::partition::NodeBase >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_updatesMade") ) { _updatesMade=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_updateQueue") ) { _updateQueue=inValue.Cast<  ::away3d::core::partition::EntityNode >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"showDebugBounds") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_showDebugBounds(inValue.Cast< bool >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Partition3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("showDebugBounds",2b,e7,a7,24));
	outFields->push(HX_("_rootNode",a3,d4,d6,27));
	outFields->push(HX_("_updatesMade",40,bd,b8,22));
	outFields->push(HX_("_updateQueue",c9,a4,8c,a9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Partition3D_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::away3d::core::partition::NodeBase */ ,(int)offsetof(Partition3D_obj,_rootNode),HX_("_rootNode",a3,d4,d6,27)},
	{::hx::fsBool,(int)offsetof(Partition3D_obj,_updatesMade),HX_("_updatesMade",40,bd,b8,22)},
	{::hx::fsObject /*  ::away3d::core::partition::EntityNode */ ,(int)offsetof(Partition3D_obj,_updateQueue),HX_("_updateQueue",c9,a4,8c,a9)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Partition3D_obj_sStaticStorageInfo = 0;
#endif

static ::String Partition3D_obj_sMemberFields[] = {
	HX_("_rootNode",a3,d4,d6,27),
	HX_("_updatesMade",40,bd,b8,22),
	HX_("_updateQueue",c9,a4,8c,a9),
	HX_("get_showDebugBounds",42,b6,b2,af),
	HX_("set_showDebugBounds",4e,a9,4f,ec),
	HX_("traverse",b2,7d,6a,6c),
	HX_("markForUpdate",25,e4,b4,19),
	HX_("removeEntity",87,ae,49,74),
	HX_("updateEntities",6a,89,bf,c7),
	::String(null()) };

::hx::Class Partition3D_obj::__mClass;

void Partition3D_obj::__register()
{
	Partition3D_obj _hx_dummy;
	Partition3D_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.partition.Partition3D",77,a0,46,e9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Partition3D_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Partition3D_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Partition3D_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Partition3D_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace core
} // end namespace partition
