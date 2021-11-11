// This file is generated by omniidl (C++ backend)- omniORB_4_2. Do not edit.
#ifndef __Port_hh__
#define __Port_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_Port
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_Port
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_Port
#endif






#ifdef USE_stub_in_nt_dll
# ifndef USE_core_stub_in_nt_dll
#  define USE_core_stub_in_nt_dll
# endif
# ifndef USE_dyn_stub_in_nt_dll
#  define USE_dyn_stub_in_nt_dll
# endif
#endif

#ifdef _core_attr
# error "A local CPP macro _core_attr has already been defined."
#else
# ifdef  USE_core_stub_in_nt_dll
#  define _core_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _core_attr
# endif
#endif

#ifdef _dyn_attr
# error "A local CPP macro _dyn_attr has already been defined."
#else
# ifdef  USE_dyn_stub_in_nt_dll
#  define _dyn_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _dyn_attr
# endif
#endif



_CORBA_MODULE CF

_CORBA_MODULE_BEG

#ifndef __CF_mPort__
#define __CF_mPort__
  class Port;
  class _objref_Port;
  class _impl_Port;
  
  typedef _objref_Port* Port_ptr;
  typedef Port_ptr PortRef;

  class Port_Helper {
  public:
    typedef Port_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_Port, Port_Helper> Port_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_Port,Port_Helper > Port_out;

#endif

  // interface Port
  class Port {
  public:
    // Declarations for this interface type.
    typedef Port_ptr _ptr_type;
    typedef Port_var _var_type;

    static _ptr_type _duplicate(_ptr_type);
    static _ptr_type _narrow(::CORBA::Object_ptr);
    static _ptr_type _unchecked_narrow(::CORBA::Object_ptr);
    
    static _ptr_type _nil();

    static inline void _marshalObjRef(_ptr_type, cdrStream&);

    static inline _ptr_type _unmarshalObjRef(cdrStream& s) {
      omniObjRef* o = omniObjRef::_unMarshal(_PD_repoId,s);
      if (o)
        return (_ptr_type) o->_ptrToObjRef(_PD_repoId);
      else
        return _nil();
    }

    static inline _ptr_type _fromObjRef(omniObjRef* o) {
      if (o)
        return (_ptr_type) o->_ptrToObjRef(_PD_repoId);
      else
        return _nil();
    }

    static _core_attr const char* _PD_repoId;

    // Other IDL defined within this scope.
    class InvalidPort : public ::CORBA::UserException {
    public:
      
      ::CORBA::UShort errorCode;

      ::CORBA::String_member msg;

    

      inline InvalidPort() {
        pd_insertToAnyFn    = insertToAnyFn;
        pd_insertToAnyFnNCP = insertToAnyFnNCP;
      }
      InvalidPort(const InvalidPort&);
      InvalidPort(::CORBA::UShort i_errorCode, const char* i_msg);
      InvalidPort& operator=(const InvalidPort&);
      virtual ~InvalidPort();
      virtual void _raise() const;
      static InvalidPort* _downcast(::CORBA::Exception*);
      static const InvalidPort* _downcast(const ::CORBA::Exception*);
      static inline InvalidPort* _narrow(::CORBA::Exception* _e) {
        return _downcast(_e);
      }
      
      void operator>>=(cdrStream&) const ;
      void operator<<=(cdrStream&) ;

      static _core_attr insertExceptionToAny    insertToAnyFn;
      static _core_attr insertExceptionToAnyNCP insertToAnyFnNCP;

      virtual ::CORBA::Exception* _NP_duplicate() const;

      static _core_attr const char* _PD_repoId;
      static _core_attr const char* _PD_typeId;

    private:
      virtual const char* _NP_typeId() const;
      virtual const char* _NP_repoId(int*) const;
      virtual void _NP_marshal(cdrStream&) const;
    };

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_InvalidPort;

    class OccupiedPort : public ::CORBA::UserException {
    public:
      
      

      inline OccupiedPort() {
        pd_insertToAnyFn    = insertToAnyFn;
        pd_insertToAnyFnNCP = insertToAnyFnNCP;
      }
      OccupiedPort(const OccupiedPort&);
      
      OccupiedPort& operator=(const OccupiedPort&);
      virtual ~OccupiedPort();
      virtual void _raise() const;
      static OccupiedPort* _downcast(::CORBA::Exception*);
      static const OccupiedPort* _downcast(const ::CORBA::Exception*);
      static inline OccupiedPort* _narrow(::CORBA::Exception* _e) {
        return _downcast(_e);
      }
      
      inline void operator>>=(cdrStream&) const { }
      inline void operator<<=(cdrStream&) { }

      static _core_attr insertExceptionToAny    insertToAnyFn;
      static _core_attr insertExceptionToAnyNCP insertToAnyFnNCP;

      virtual ::CORBA::Exception* _NP_duplicate() const;

      static _core_attr const char* _PD_repoId;
      static _core_attr const char* _PD_typeId;

    private:
      virtual const char* _NP_typeId() const;
      virtual const char* _NP_repoId(int*) const;
      virtual void _NP_marshal(cdrStream&) const;
    };

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_OccupiedPort;

  
  };

  class _objref_Port :
    public virtual ::CORBA::Object,
    public virtual omniObjRef
  {
  public:
    // IDL operations
    void connectPort(::CORBA::Object_ptr connection, const char* connectionId);
    void disconnectPort(const char* connectionId);

    // Constructors
    inline _objref_Port()  { _PR_setobj(0); }  // nil
    _objref_Port(omniIOR*, omniIdentity*);

  protected:
    virtual ~_objref_Port();

    
  private:
    virtual void* _ptrToObjRef(const char*);

    _objref_Port(const _objref_Port&);
    _objref_Port& operator = (const _objref_Port&);
    // not implemented

    friend class Port;
  };

  class _pof_Port : public _OMNI_NS(proxyObjectFactory) {
  public:
    inline _pof_Port() : _OMNI_NS(proxyObjectFactory)(Port::_PD_repoId) {}
    virtual ~_pof_Port();

    virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
    virtual _CORBA_Boolean is_a(const char*) const;
  };

  class _impl_Port :
    public virtual omniServant
  {
  public:
    virtual ~_impl_Port();

    virtual void connectPort(::CORBA::Object_ptr connection, const char* connectionId) = 0;
    virtual void disconnectPort(const char* connectionId) = 0;
    
  public:  // Really protected, workaround for xlC
    virtual _CORBA_Boolean _dispatch(omniCallHandle&);

  private:
    virtual void* _ptrToInterface(const char*);
    virtual const char* _mostDerivedRepoId();
    
  };


  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_Port;

_CORBA_MODULE_END



_CORBA_MODULE POA_CF
_CORBA_MODULE_BEG

  class Port :
    public virtual CF::_impl_Port,
    public virtual ::PortableServer::ServantBase
  {
  public:
    virtual ~Port();

    inline ::CF::Port_ptr _this() {
      return (::CF::Port_ptr) _do_this(::CF::Port::_PD_repoId);
    }
  };

_CORBA_MODULE_END



_CORBA_MODULE OBV_CF
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr

void operator<<=(::CORBA::Any& _a, const CF::Port::InvalidPort& _s);
void operator<<=(::CORBA::Any& _a, const CF::Port::InvalidPort* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const CF::Port::InvalidPort*& _sp);

void operator<<=(::CORBA::Any& _a, const CF::Port::OccupiedPort& _s);
void operator<<=(::CORBA::Any& _a, const CF::Port::OccupiedPort* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const CF::Port::OccupiedPort*& _sp);

void operator<<=(::CORBA::Any& _a, CF::Port_ptr _s);
void operator<<=(::CORBA::Any& _a, CF::Port_ptr* _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, CF::Port_ptr& _s);



inline void
CF::Port::_marshalObjRef(::CF::Port_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}



#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_Port
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_Port
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_Port
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_Port
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_Port
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_Port
#endif

#endif  // __Port_hh__
