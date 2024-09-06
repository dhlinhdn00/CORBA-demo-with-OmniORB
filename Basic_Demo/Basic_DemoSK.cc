// This file is generated by omniidl (C++ backend) - omniORB_4_3. Do not edit.

#include "Basic_Demo.hh"
#include <omniORB4/IOP_S.h>
#include <omniORB4/IOP_C.h>
#include <omniORB4/callDescriptor.h>
#include <omniORB4/callHandle.h>
#include <omniORB4/objTracker.h>


OMNI_USING_NAMESPACE(omni)

OMNI_MAYBE_UNUSED static const char* _0RL_library_version = omniORB_4_3;



Basic_Demo::Add_Operator_ptr Basic_Demo::Add_Operator_Helper::_nil() {
  return ::Basic_Demo::Add_Operator::_nil();
}

::CORBA::Boolean Basic_Demo::Add_Operator_Helper::is_nil(::Basic_Demo::Add_Operator_ptr p) {
  return ::CORBA::is_nil(p);

}

void Basic_Demo::Add_Operator_Helper::release(::Basic_Demo::Add_Operator_ptr p) {
  ::CORBA::release(p);
}

void Basic_Demo::Add_Operator_Helper::marshalObjRef(::Basic_Demo::Add_Operator_ptr obj, cdrStream& s) {
  ::Basic_Demo::Add_Operator::_marshalObjRef(obj, s);
}

Basic_Demo::Add_Operator_ptr Basic_Demo::Add_Operator_Helper::unmarshalObjRef(cdrStream& s) {
  return ::Basic_Demo::Add_Operator::_unmarshalObjRef(s);
}

void Basic_Demo::Add_Operator_Helper::duplicate(::Basic_Demo::Add_Operator_ptr obj) {
  if (obj && !obj->_NP_is_nil())  omni::duplicateObjRef(obj);
}

Basic_Demo::Add_Operator_ptr
Basic_Demo::Add_Operator::_duplicate(::Basic_Demo::Add_Operator_ptr obj)
{
  if (obj && !obj->_NP_is_nil())  omni::duplicateObjRef(obj);
  return obj;
}

Basic_Demo::Add_Operator_ptr
Basic_Demo::Add_Operator::_narrow(::CORBA::Object_ptr obj)
{
  if (!obj || obj->_NP_is_nil() || obj->_NP_is_pseudo()) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_realNarrow(_PD_repoId);
  return e ? e : _nil();
}


Basic_Demo::Add_Operator_ptr
Basic_Demo::Add_Operator::_unchecked_narrow(::CORBA::Object_ptr obj)
{
  if (!obj || obj->_NP_is_nil() || obj->_NP_is_pseudo()) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_uncheckedNarrow(_PD_repoId);
  return e ? e : _nil();
}

Basic_Demo::Add_Operator_ptr
Basic_Demo::Add_Operator::_nil()
{
#ifdef OMNI_UNLOADABLE_STUBS
  static _objref_Add_Operator _the_nil_obj;
  return &_the_nil_obj;
#else
  static _objref_Add_Operator* _the_nil_ptr = 0;
  if (!_the_nil_ptr) {
    omni::nilRefLock().lock();
    if (!_the_nil_ptr) {
      _the_nil_ptr = new _objref_Add_Operator;
      registerNilCorbaObject(_the_nil_ptr);
    }
    omni::nilRefLock().unlock();
  }
  return _the_nil_ptr;
#endif
}

const char* Basic_Demo::Add_Operator::_PD_repoId = "IDL:Basic_Demo/Add_Operator:1.0";


Basic_Demo::_objref_Add_Operator::~_objref_Add_Operator() {
  
}


Basic_Demo::_objref_Add_Operator::_objref_Add_Operator(omniIOR* ior, omniIdentity* id) :
   omniObjRef(::Basic_Demo::Add_Operator::_PD_repoId, ior, id, 1)
   
   
{
  _PR_setobj(this);
}

void*
Basic_Demo::_objref_Add_Operator::_ptrToObjRef(const char* id)
{
  if (id == ::Basic_Demo::Add_Operator::_PD_repoId)
    return (::Basic_Demo::Add_Operator_ptr) this;
  
  if (id == ::CORBA::Object::_PD_repoId)
    return (::CORBA::Object_ptr) this;

  if (omni::strMatch(id, ::Basic_Demo::Add_Operator::_PD_repoId))
    return (::Basic_Demo::Add_Operator_ptr) this;
  
  if (omni::strMatch(id, ::CORBA::Object::_PD_repoId))
    return (::CORBA::Object_ptr) this;

  return 0;
}


//
// Code for Basic_Demo::Add_Operator::add

// Proxy call descriptor class. Mangled signature:
//  _cfloat_i_cfloat_i_cfloat
class _0RL_cd_269a2e93bdf93279_00000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_269a2e93bdf93279_00000000(LocalCallFn lcfn, const char* op_, size_t oplen, _CORBA_Boolean upcall=0)
    : omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  void marshalArguments(cdrStream&);
  void unmarshalArguments(cdrStream&);

  void unmarshalReturnedValues(cdrStream&);
  void marshalReturnedValues(cdrStream&);
  
  
  static const char* const _user_exns[];

  ::CORBA::Float arg_0;
  ::CORBA::Float arg_1;
  ::CORBA::Float result;
};

void _0RL_cd_269a2e93bdf93279_00000000::marshalArguments(cdrStream& _n)
{
  arg_0 >>= _n;
  arg_1 >>= _n;

}

void _0RL_cd_269a2e93bdf93279_00000000::unmarshalArguments(cdrStream& _n)
{
  (::CORBA::Float&)arg_0 <<= _n;
  (::CORBA::Float&)arg_1 <<= _n;

}

void _0RL_cd_269a2e93bdf93279_00000000::marshalReturnedValues(cdrStream& _n)
{
  result >>= _n;

}

void _0RL_cd_269a2e93bdf93279_00000000::unmarshalReturnedValues(cdrStream& _n)
{
  (::CORBA::Float&)result <<= _n;

}

const char* const _0RL_cd_269a2e93bdf93279_00000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_269a2e93bdf93279_10000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_269a2e93bdf93279_00000000* tcd = (_0RL_cd_269a2e93bdf93279_00000000*)cd;
  Basic_Demo::_impl_Add_Operator* impl = (Basic_Demo::_impl_Add_Operator*) svnt->_ptrToInterface(Basic_Demo::Add_Operator::_PD_repoId);
  tcd->result = impl->add(tcd->arg_0, tcd->arg_1);


}

::CORBA::Float Basic_Demo::_objref_Add_Operator::add(::CORBA::Float a, ::CORBA::Float b)
{
  _0RL_cd_269a2e93bdf93279_00000000 _call_desc(_0RL_lcfn_269a2e93bdf93279_10000000, "add", 4);
  _call_desc.arg_0 = a;
  _call_desc.arg_1 = b;

  _invoke(_call_desc);
  return _call_desc.result;


}

Basic_Demo::_pof_Add_Operator::~_pof_Add_Operator() {}


omniObjRef*
Basic_Demo::_pof_Add_Operator::newObjRef(omniIOR* ior, omniIdentity* id)
{
  return new ::Basic_Demo::_objref_Add_Operator(ior, id);
}


::CORBA::Boolean
Basic_Demo::_pof_Add_Operator::is_a(const char* id) const
{
  if (omni::ptrStrMatch(id, ::Basic_Demo::Add_Operator::_PD_repoId))
    return 1;
  
  return 0;
}

const Basic_Demo::_pof_Add_Operator _the_pof_Basic__Demo_mAdd__Operator;

Basic_Demo::_impl_Add_Operator::~_impl_Add_Operator() {}


::CORBA::Boolean
Basic_Demo::_impl_Add_Operator::_dispatch(omniCallHandle& _handle)
{
  const char* op = _handle.operation_name();

  if (omni::strMatch(op, "add")) {

    _0RL_cd_269a2e93bdf93279_00000000 _call_desc(_0RL_lcfn_269a2e93bdf93279_10000000, "add", 4, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }


  return 0;
}

void*
Basic_Demo::_impl_Add_Operator::_ptrToInterface(const char* id)
{
  if (id == ::Basic_Demo::Add_Operator::_PD_repoId)
    return (::Basic_Demo::_impl_Add_Operator*) this;
  
  if (id == ::CORBA::Object::_PD_repoId)
    return (void*) 1;

  if (omni::strMatch(id, ::Basic_Demo::Add_Operator::_PD_repoId))
    return (::Basic_Demo::_impl_Add_Operator*) this;
  
  if (omni::strMatch(id, ::CORBA::Object::_PD_repoId))
    return (void*) 1;
  return 0;
}

const char*
Basic_Demo::_impl_Add_Operator::_mostDerivedRepoId()
{
  return ::Basic_Demo::Add_Operator::_PD_repoId;
}

POA_Basic_Demo::Add_Operator::~Add_Operator() {}

