// This file is generated by omniidl (C++ backend)- omniORB_4_2. Do not edit.
#ifndef __bio__runtimeStats_hh__
#define __bio__runtimeStats_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_bio__runtimeStats
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_bio__runtimeStats
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_bio__runtimeStats
#endif



#ifndef __DataType_hh_EXTERNAL_GUARD__
#define __DataType_hh_EXTERNAL_GUARD__
#include <ossie/CF/DataType.h>
#endif
#ifndef __PortTypes_hh_EXTERNAL_GUARD__
#define __PortTypes_hh_EXTERNAL_GUARD__
#include <ossie/CF/PortTypes.h>
#endif
#ifndef __Port_hh_EXTERNAL_GUARD__
#define __Port_hh_EXTERNAL_GUARD__
#include <ossie/CF/Port.h>
#endif
#ifndef __QueryablePort_hh_EXTERNAL_GUARD__
#define __QueryablePort_hh_EXTERNAL_GUARD__
#include <ossie/CF/QueryablePort.h>
#endif
#ifndef __bulkioDataTypes_hh_EXTERNAL_GUARD__
#define __bulkioDataTypes_hh_EXTERNAL_GUARD__
#include <ossie/BULKIO/bulkioDataTypes.h>
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



_CORBA_MODULE BULKIO

_CORBA_MODULE_BEG

  enum PortUsageType { IDLE, ACTIVE, BUSY /*, __max_PortUsageType=0xffffffff */ };
  typedef PortUsageType& PortUsageType_out;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_PortUsageType;

  struct PortStatistics {
    typedef _CORBA_ConstrType_Variable_Var<PortStatistics> _var_type;

    
    ::CORBA::String_member portName;

    ::CORBA::Float elementsPerSecond;

    ::CORBA::Float bitsPerSecond;

    ::CORBA::Float callsPerSecond;

    CF::StringSequence streamIDs;

    ::CORBA::Float averageQueueDepth;

    ::CORBA::Float timeSinceLastCall;

    typedef _CORBA_Unbounded_Sequence< CF::DataType >  _keywords_seq;
    _keywords_seq keywords;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef PortStatistics::_var_type PortStatistics_var;

  typedef _CORBA_ConstrType_Variable_OUT_arg< PortStatistics,PortStatistics_var > PortStatistics_out;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_PortStatistics;

#ifndef __BULKIO_mProvidesPortStatisticsProvider__
#define __BULKIO_mProvidesPortStatisticsProvider__
  class ProvidesPortStatisticsProvider;
  class _objref_ProvidesPortStatisticsProvider;
  class _impl_ProvidesPortStatisticsProvider;
  
  typedef _objref_ProvidesPortStatisticsProvider* ProvidesPortStatisticsProvider_ptr;
  typedef ProvidesPortStatisticsProvider_ptr ProvidesPortStatisticsProviderRef;

  class ProvidesPortStatisticsProvider_Helper {
  public:
    typedef ProvidesPortStatisticsProvider_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_ProvidesPortStatisticsProvider, ProvidesPortStatisticsProvider_Helper> ProvidesPortStatisticsProvider_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_ProvidesPortStatisticsProvider,ProvidesPortStatisticsProvider_Helper > ProvidesPortStatisticsProvider_out;

#endif

  // interface ProvidesPortStatisticsProvider
  class ProvidesPortStatisticsProvider {
  public:
    // Declarations for this interface type.
    typedef ProvidesPortStatisticsProvider_ptr _ptr_type;
    typedef ProvidesPortStatisticsProvider_var _var_type;

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
    
  };

  class _objref_ProvidesPortStatisticsProvider :
    public virtual ::CORBA::Object,
    public virtual omniObjRef
  {
  public:
    // IDL operations
    PortUsageType state();
    PortStatistics* statistics();

    // Constructors
    inline _objref_ProvidesPortStatisticsProvider()  { _PR_setobj(0); }  // nil
    _objref_ProvidesPortStatisticsProvider(omniIOR*, omniIdentity*);

  protected:
    virtual ~_objref_ProvidesPortStatisticsProvider();

    
  private:
    virtual void* _ptrToObjRef(const char*);

    _objref_ProvidesPortStatisticsProvider(const _objref_ProvidesPortStatisticsProvider&);
    _objref_ProvidesPortStatisticsProvider& operator = (const _objref_ProvidesPortStatisticsProvider&);
    // not implemented

    friend class ProvidesPortStatisticsProvider;
  };

  class _pof_ProvidesPortStatisticsProvider : public _OMNI_NS(proxyObjectFactory) {
  public:
    inline _pof_ProvidesPortStatisticsProvider() : _OMNI_NS(proxyObjectFactory)(ProvidesPortStatisticsProvider::_PD_repoId) {}
    virtual ~_pof_ProvidesPortStatisticsProvider();

    virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
    virtual _CORBA_Boolean is_a(const char*) const;
  };

  class _impl_ProvidesPortStatisticsProvider :
    public virtual omniServant
  {
  public:
    virtual ~_impl_ProvidesPortStatisticsProvider();

    virtual PortUsageType state() = 0;
    virtual PortStatistics* statistics() = 0;
    
  public:  // Really protected, workaround for xlC
    virtual _CORBA_Boolean _dispatch(omniCallHandle&);

  private:
    virtual void* _ptrToInterface(const char*);
    virtual const char* _mostDerivedRepoId();
    
  };


  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_ProvidesPortStatisticsProvider;

  struct UsesPortStatistics {
    typedef _CORBA_ConstrType_Variable_Var<UsesPortStatistics> _var_type;

    
    ::CORBA::String_member connectionId;

    PortStatistics statistics;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef UsesPortStatistics::_var_type UsesPortStatistics_var;

  typedef _CORBA_ConstrType_Variable_OUT_arg< UsesPortStatistics,UsesPortStatistics_var > UsesPortStatistics_out;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_UsesPortStatistics;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_UsesPortStatisticsSequence;

  class UsesPortStatisticsSequence_var;

  class UsesPortStatisticsSequence : public _CORBA_Unbounded_Sequence< UsesPortStatistics >  {
  public:
    typedef UsesPortStatisticsSequence_var _var_type;
    inline UsesPortStatisticsSequence() {}
    inline UsesPortStatisticsSequence(const UsesPortStatisticsSequence& _s)
      : _CORBA_Unbounded_Sequence< UsesPortStatistics > (_s) {}

    inline UsesPortStatisticsSequence(_CORBA_ULong _max)
      : _CORBA_Unbounded_Sequence< UsesPortStatistics > (_max) {}
    inline UsesPortStatisticsSequence(_CORBA_ULong _max, _CORBA_ULong _len, UsesPortStatistics* _val, _CORBA_Boolean _rel=0)
      : _CORBA_Unbounded_Sequence< UsesPortStatistics > (_max, _len, _val, _rel) {}

  

    inline UsesPortStatisticsSequence& operator = (const UsesPortStatisticsSequence& _s) {
      _CORBA_Unbounded_Sequence< UsesPortStatistics > ::operator=(_s);
      return *this;
    }
  };

  class UsesPortStatisticsSequence_out;

  class UsesPortStatisticsSequence_var {
  public:
    inline UsesPortStatisticsSequence_var() : _pd_seq(0) {}
    inline UsesPortStatisticsSequence_var(UsesPortStatisticsSequence* _s) : _pd_seq(_s) {}
    inline UsesPortStatisticsSequence_var(const UsesPortStatisticsSequence_var& _s) {
      if (_s._pd_seq)  _pd_seq = new UsesPortStatisticsSequence(*_s._pd_seq);
      else             _pd_seq = 0;
    }
    inline ~UsesPortStatisticsSequence_var() { if (_pd_seq)  delete _pd_seq; }
      
    inline UsesPortStatisticsSequence_var& operator = (UsesPortStatisticsSequence* _s) {
      if (_pd_seq)  delete _pd_seq;
      _pd_seq = _s;
      return *this;
    }
    inline UsesPortStatisticsSequence_var& operator = (const UsesPortStatisticsSequence_var& _s) {
      if (&_s != this) {
        if (_s._pd_seq) {
          if (!_pd_seq)  _pd_seq = new UsesPortStatisticsSequence;
          *_pd_seq = *_s._pd_seq;
        }
        else if (_pd_seq) {
          delete _pd_seq;
          _pd_seq = 0;
        }
      }
      return *this;
    }
    inline UsesPortStatistics& operator [] (_CORBA_ULong _s) {
      return (*_pd_seq)[_s];
    }

  

    inline UsesPortStatisticsSequence* operator -> () { return _pd_seq; }
    inline const UsesPortStatisticsSequence* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
    inline operator UsesPortStatisticsSequence& () const { return *_pd_seq; }
#else
    inline operator const UsesPortStatisticsSequence& () const { return *_pd_seq; }
    inline operator UsesPortStatisticsSequence& () { return *_pd_seq; }
#endif
      
    inline const UsesPortStatisticsSequence& in() const { return *_pd_seq; }
    inline UsesPortStatisticsSequence&       inout()    { return *_pd_seq; }
    inline UsesPortStatisticsSequence*&      out() {
      if (_pd_seq) { delete _pd_seq; _pd_seq = 0; }
      return _pd_seq;
    }
    inline UsesPortStatisticsSequence* _retn() { UsesPortStatisticsSequence* tmp = _pd_seq; _pd_seq = 0; return tmp; }
      
    friend class UsesPortStatisticsSequence_out;
    
  private:
    UsesPortStatisticsSequence* _pd_seq;
  };

  class UsesPortStatisticsSequence_out {
  public:
    inline UsesPortStatisticsSequence_out(UsesPortStatisticsSequence*& _s) : _data(_s) { _data = 0; }
    inline UsesPortStatisticsSequence_out(UsesPortStatisticsSequence_var& _s)
      : _data(_s._pd_seq) { _s = (UsesPortStatisticsSequence*) 0; }
    inline UsesPortStatisticsSequence_out(const UsesPortStatisticsSequence_out& _s) : _data(_s._data) {}
    inline UsesPortStatisticsSequence_out& operator = (const UsesPortStatisticsSequence_out& _s) {
      _data = _s._data;
      return *this;
    }
    inline UsesPortStatisticsSequence_out& operator = (UsesPortStatisticsSequence* _s) {
      _data = _s;
      return *this;
    }
    inline operator UsesPortStatisticsSequence*&()  { return _data; }
    inline UsesPortStatisticsSequence*& ptr()       { return _data; }
    inline UsesPortStatisticsSequence* operator->() { return _data; }

    inline UsesPortStatistics& operator [] (_CORBA_ULong _i) {
      return (*_data)[_i];
    }

  

    UsesPortStatisticsSequence*& _data;

  private:
    UsesPortStatisticsSequence_out();
    UsesPortStatisticsSequence_out& operator=(const UsesPortStatisticsSequence_var&);
  };

#ifndef __BULKIO_mUsesPortStatisticsProvider__
#define __BULKIO_mUsesPortStatisticsProvider__
  class UsesPortStatisticsProvider;
  class _objref_UsesPortStatisticsProvider;
  class _impl_UsesPortStatisticsProvider;
  
  typedef _objref_UsesPortStatisticsProvider* UsesPortStatisticsProvider_ptr;
  typedef UsesPortStatisticsProvider_ptr UsesPortStatisticsProviderRef;

  class UsesPortStatisticsProvider_Helper {
  public:
    typedef UsesPortStatisticsProvider_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_UsesPortStatisticsProvider, UsesPortStatisticsProvider_Helper> UsesPortStatisticsProvider_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_UsesPortStatisticsProvider,UsesPortStatisticsProvider_Helper > UsesPortStatisticsProvider_out;

#endif

  // interface UsesPortStatisticsProvider
  class UsesPortStatisticsProvider {
  public:
    // Declarations for this interface type.
    typedef UsesPortStatisticsProvider_ptr _ptr_type;
    typedef UsesPortStatisticsProvider_var _var_type;

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
    
  };

  class _objref_UsesPortStatisticsProvider :
    public virtual ExtendedCF::_objref_QueryablePort
  {
  public:
    // IDL operations
    UsesPortStatisticsSequence* statistics();

    // Constructors
    inline _objref_UsesPortStatisticsProvider()  { _PR_setobj(0); }  // nil
    _objref_UsesPortStatisticsProvider(omniIOR*, omniIdentity*);

  protected:
    virtual ~_objref_UsesPortStatisticsProvider();

    
  private:
    virtual void* _ptrToObjRef(const char*);

    _objref_UsesPortStatisticsProvider(const _objref_UsesPortStatisticsProvider&);
    _objref_UsesPortStatisticsProvider& operator = (const _objref_UsesPortStatisticsProvider&);
    // not implemented

    friend class UsesPortStatisticsProvider;
  };

  class _pof_UsesPortStatisticsProvider : public _OMNI_NS(proxyObjectFactory) {
  public:
    inline _pof_UsesPortStatisticsProvider() : _OMNI_NS(proxyObjectFactory)(UsesPortStatisticsProvider::_PD_repoId) {}
    virtual ~_pof_UsesPortStatisticsProvider();

    virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
    virtual _CORBA_Boolean is_a(const char*) const;
  };

  class _impl_UsesPortStatisticsProvider :
    public virtual ExtendedCF::_impl_QueryablePort
  {
  public:
    virtual ~_impl_UsesPortStatisticsProvider();

    virtual UsesPortStatisticsSequence* statistics() = 0;
    
  public:  // Really protected, workaround for xlC
    virtual _CORBA_Boolean _dispatch(omniCallHandle&);

  private:
    virtual void* _ptrToInterface(const char*);
    virtual const char* _mostDerivedRepoId();
    
  };


  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_UsesPortStatisticsProvider;

_CORBA_MODULE_END



_CORBA_MODULE POA_BULKIO
_CORBA_MODULE_BEG

  class ProvidesPortStatisticsProvider :
    public virtual BULKIO::_impl_ProvidesPortStatisticsProvider,
    public virtual ::PortableServer::ServantBase
  {
  public:
    virtual ~ProvidesPortStatisticsProvider();

    inline ::BULKIO::ProvidesPortStatisticsProvider_ptr _this() {
      return (::BULKIO::ProvidesPortStatisticsProvider_ptr) _do_this(::BULKIO::ProvidesPortStatisticsProvider::_PD_repoId);
    }
  };

  class UsesPortStatisticsProvider :
    public virtual BULKIO::_impl_UsesPortStatisticsProvider,
    public virtual POA_ExtendedCF::QueryablePort
  {
  public:
    virtual ~UsesPortStatisticsProvider();

    inline ::BULKIO::UsesPortStatisticsProvider_ptr _this() {
      return (::BULKIO::UsesPortStatisticsProvider_ptr) _do_this(::BULKIO::UsesPortStatisticsProvider::_PD_repoId);
    }
  };

_CORBA_MODULE_END



_CORBA_MODULE OBV_BULKIO
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr

inline void operator >>=(BULKIO::PortUsageType _e, cdrStream& s) {
  ::operator>>=((::CORBA::ULong)_e, s);
}

inline void operator <<= (BULKIO::PortUsageType& _e, cdrStream& s) {
  ::CORBA::ULong _0RL_e;
  ::operator<<=(_0RL_e,s);
  if (_0RL_e <= BULKIO::BUSY) {
    _e = (BULKIO::PortUsageType) _0RL_e;
  }
  else {
    OMNIORB_THROW(MARSHAL,_OMNI_NS(MARSHAL_InvalidEnumValue),
                  (::CORBA::CompletionStatus)s.completion());
  }
}

void operator<<=(::CORBA::Any& _a, BULKIO::PortUsageType _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, BULKIO::PortUsageType& _s);

extern void operator<<=(::CORBA::Any& _a, const BULKIO::PortStatistics& _s);
extern void operator<<=(::CORBA::Any& _a, BULKIO::PortStatistics* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, BULKIO::PortStatistics*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const BULKIO::PortStatistics*& _sp);

void operator<<=(::CORBA::Any& _a, BULKIO::ProvidesPortStatisticsProvider_ptr _s);
void operator<<=(::CORBA::Any& _a, BULKIO::ProvidesPortStatisticsProvider_ptr* _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, BULKIO::ProvidesPortStatisticsProvider_ptr& _s);

extern void operator<<=(::CORBA::Any& _a, const BULKIO::UsesPortStatistics& _s);
extern void operator<<=(::CORBA::Any& _a, BULKIO::UsesPortStatistics* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, BULKIO::UsesPortStatistics*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const BULKIO::UsesPortStatistics*& _sp);

void operator<<=(::CORBA::Any& _a, const BULKIO::UsesPortStatisticsSequence& _s);
void operator<<=(::CORBA::Any& _a, BULKIO::UsesPortStatisticsSequence* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, BULKIO::UsesPortStatisticsSequence*& _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const BULKIO::UsesPortStatisticsSequence*& _sp);

void operator<<=(::CORBA::Any& _a, BULKIO::UsesPortStatisticsProvider_ptr _s);
void operator<<=(::CORBA::Any& _a, BULKIO::UsesPortStatisticsProvider_ptr* _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, BULKIO::UsesPortStatisticsProvider_ptr& _s);



inline void
BULKIO::ProvidesPortStatisticsProvider::_marshalObjRef(::BULKIO::ProvidesPortStatisticsProvider_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}

inline void
BULKIO::UsesPortStatisticsProvider::_marshalObjRef(::BULKIO::UsesPortStatisticsProvider_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}



#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_bio__runtimeStats
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_bio__runtimeStats
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_bio__runtimeStats
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_bio__runtimeStats
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_bio__runtimeStats
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_bio__runtimeStats
#endif

#endif  // __bio__runtimeStats_hh__
