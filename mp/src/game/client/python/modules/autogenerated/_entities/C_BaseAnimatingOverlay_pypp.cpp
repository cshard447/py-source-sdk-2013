// This file has been generated by Py++.

#include "cbase.h"
// This file has been generated by Py++.

#include "cbase.h"
#include "npcevent.h"
#include "srcpy_entities.h"
#include "bone_setup.h"
#include "baseprojectile.h"
#include "basegrenade_shared.h"
#include "takedamageinfo.h"
#include "c_ai_basenpc.h"
#include "soundinfo.h"
#include "saverestore.h"
#include "vcollide_parse.h"
#include "iclientvehicle.h"
#include "steam/steamclientpublic.h"
#include "view_shared.h"
#include "c_playerresource.h"
#include "tier0/valve_minmax_off.h"
#include "srcpy.h"
#include "tier0/valve_minmax_on.h"
#include "tier0/memdbgon.h"
#include "C_BaseAnimatingOverlay_pypp.hpp"

namespace bp = boost::python;

struct C_BaseAnimatingOverlay_wrapper : C_BaseAnimatingOverlay, bp::wrapper< C_BaseAnimatingOverlay > {

    C_BaseAnimatingOverlay_wrapper( )
    : C_BaseAnimatingOverlay( )
      , bp::wrapper< C_BaseAnimatingOverlay >(){
        // null constructor
    
    }

    virtual void Activate(  ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, Activate )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, Activate )
        bp::override func_Activate = this->get_override( "Activate" );
        if( func_Activate.ptr() != Py_None )
            try {
                func_Activate(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseEntity::Activate(  );
            }
        else
            this->C_BaseEntity::Activate(  );
    }
    
    void default_Activate(  ) {
        C_BaseEntity::Activate( );
    }

    virtual void ClientThink(  ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, ClientThink )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, ClientThink )
        bp::override func_ClientThink = this->get_override( "ClientThink" );
        if( func_ClientThink.ptr() != Py_None )
            try {
                func_ClientThink(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseEntity::ClientThink(  );
            }
        else
            this->C_BaseEntity::ClientThink(  );
    }
    
    void default_ClientThink(  ) {
        C_BaseEntity::ClientThink( );
    }

    virtual void ComputeWorldSpaceSurroundingBox( ::Vector * pVecWorldMins, ::Vector * pVecWorldMaxs ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, ComputeWorldSpaceSurroundingBox )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, ComputeWorldSpaceSurroundingBox )
        bp::override func_ComputeWorldSpaceSurroundingBox = this->get_override( "ComputeWorldSpaceSurroundingBox" );
        if( func_ComputeWorldSpaceSurroundingBox.ptr() != Py_None )
            try {
                func_ComputeWorldSpaceSurroundingBox( boost::python::ptr(pVecWorldMins), boost::python::ptr(pVecWorldMaxs) );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseEntity::ComputeWorldSpaceSurroundingBox( pVecWorldMins, pVecWorldMaxs );
            }
        else
            this->C_BaseEntity::ComputeWorldSpaceSurroundingBox( pVecWorldMins, pVecWorldMaxs );
    }
    
    void default_ComputeWorldSpaceSurroundingBox( ::Vector * pVecWorldMins, ::Vector * pVecWorldMaxs ) {
        C_BaseEntity::ComputeWorldSpaceSurroundingBox( pVecWorldMins, pVecWorldMaxs );
    }

    virtual bool CreateVPhysics(  ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, CreateVPhysics )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, CreateVPhysics )
        bp::override func_CreateVPhysics = this->get_override( "CreateVPhysics" );
        if( func_CreateVPhysics.ptr() != Py_None )
            try {
                return func_CreateVPhysics(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_BaseEntity::CreateVPhysics(  );
            }
        else
            return this->C_BaseEntity::CreateVPhysics(  );
    }
    
    bool default_CreateVPhysics(  ) {
        return C_BaseEntity::CreateVPhysics( );
    }

    virtual void DoImpactEffect( ::trace_t & tr, int nDamageType ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, DoImpactEffect )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, DoImpactEffect )
        bp::override func_DoImpactEffect = this->get_override( "DoImpactEffect" );
        if( func_DoImpactEffect.ptr() != Py_None )
            try {
                func_DoImpactEffect( boost::ref(tr), nDamageType );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseEntity::DoImpactEffect( tr, nDamageType );
            }
        else
            this->C_BaseEntity::DoImpactEffect( tr, nDamageType );
    }
    
    void default_DoImpactEffect( ::trace_t & tr, int nDamageType ) {
        C_BaseEntity::DoImpactEffect( tr, nDamageType );
    }

    virtual void EndTouch( ::C_BaseEntity * pOther ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, EndTouch )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, EndTouch )
        bp::override func_EndTouch = this->get_override( "EndTouch" );
        if( func_EndTouch.ptr() != Py_None )
            try {
                func_EndTouch( pOther ? pOther->GetPyHandle() : boost::python::object() );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseEntity::EndTouch( pOther );
            }
        else
            this->C_BaseEntity::EndTouch( pOther );
    }
    
    void default_EndTouch( ::C_BaseEntity * pOther ) {
        C_BaseEntity::EndTouch( pOther );
    }

    virtual ::CollideType_t GetCollideType(  ) {
        PY_OVERRIDE_CHECK( C_BaseAnimating, GetCollideType )
        PY_OVERRIDE_LOG( _entities, C_BaseAnimating, GetCollideType )
        bp::override func_GetCollideType = this->get_override( "GetCollideType" );
        if( func_GetCollideType.ptr() != Py_None )
            try {
                return func_GetCollideType(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_BaseAnimating::GetCollideType(  );
            }
        else
            return this->C_BaseAnimating::GetCollideType(  );
    }
    
    ::CollideType_t default_GetCollideType(  ) {
        return C_BaseAnimating::GetCollideType( );
    }

    virtual char const * GetTracerType(  ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, GetTracerType )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, GetTracerType )
        bp::override func_GetTracerType = this->get_override( "GetTracerType" );
        if( func_GetTracerType.ptr() != Py_None )
            try {
                return func_GetTracerType(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_BaseEntity::GetTracerType(  );
            }
        else
            return this->C_BaseEntity::GetTracerType(  );
    }
    
    char const * default_GetTracerType(  ) {
        return C_BaseEntity::GetTracerType( );
    }

    virtual bool KeyValue( char const * szKeyName, char const * szValue ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, KeyValue )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, KeyValue )
        bp::override func_KeyValue = this->get_override( "KeyValue" );
        if( func_KeyValue.ptr() != Py_None )
            try {
                return func_KeyValue( szKeyName, szValue );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_BaseEntity::KeyValue( szKeyName, szValue );
            }
        else
            return this->C_BaseEntity::KeyValue( szKeyName, szValue );
    }
    
    bool default_KeyValue( char const * szKeyName, char const * szValue ) {
        return C_BaseEntity::KeyValue( szKeyName, szValue );
    }

    virtual bool KeyValue( char const * szKeyName, float flValue ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, KeyValue )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, KeyValue )
        bp::override func_KeyValue = this->get_override( "KeyValue" );
        if( func_KeyValue.ptr() != Py_None )
            try {
                return func_KeyValue( szKeyName, flValue );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_BaseEntity::KeyValue( szKeyName, flValue );
            }
        else
            return this->C_BaseEntity::KeyValue( szKeyName, flValue );
    }
    
    bool default_KeyValue( char const * szKeyName, float flValue ) {
        return C_BaseEntity::KeyValue( szKeyName, flValue );
    }

    virtual bool KeyValue( char const * szKeyName, ::Vector const & vecValue ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, KeyValue )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, KeyValue )
        bp::override func_KeyValue = this->get_override( "KeyValue" );
        if( func_KeyValue.ptr() != Py_None )
            try {
                return func_KeyValue( szKeyName, boost::ref(vecValue) );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_BaseEntity::KeyValue( szKeyName, vecValue );
            }
        else
            return this->C_BaseEntity::KeyValue( szKeyName, vecValue );
    }
    
    bool default_KeyValue( char const * szKeyName, ::Vector const & vecValue ) {
        return C_BaseEntity::KeyValue( szKeyName, vecValue );
    }

    virtual void MakeTracer( ::Vector const & vecTracerSrc, ::trace_t const & tr, int iTracerType ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, MakeTracer )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, MakeTracer )
        bp::override func_MakeTracer = this->get_override( "MakeTracer" );
        if( func_MakeTracer.ptr() != Py_None )
            try {
                func_MakeTracer( boost::ref(vecTracerSrc), boost::ref(tr), iTracerType );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseEntity::MakeTracer( vecTracerSrc, tr, iTracerType );
            }
        else
            this->C_BaseEntity::MakeTracer( vecTracerSrc, tr, iTracerType );
    }
    
    void default_MakeTracer( ::Vector const & vecTracerSrc, ::trace_t const & tr, int iTracerType ) {
        C_BaseEntity::MakeTracer( vecTracerSrc, tr, iTracerType );
    }

    virtual void NotifyShouldTransmit( ::ShouldTransmitState_t state ) {
        PY_OVERRIDE_CHECK( C_BaseAnimating, NotifyShouldTransmit )
        PY_OVERRIDE_LOG( _entities, C_BaseAnimating, NotifyShouldTransmit )
        bp::override func_NotifyShouldTransmit = this->get_override( "NotifyShouldTransmit" );
        if( func_NotifyShouldTransmit.ptr() != Py_None )
            try {
                func_NotifyShouldTransmit( state );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseAnimating::NotifyShouldTransmit( state );
            }
        else
            this->C_BaseAnimating::NotifyShouldTransmit( state );
    }
    
    void default_NotifyShouldTransmit( ::ShouldTransmitState_t state ) {
        C_BaseAnimating::NotifyShouldTransmit( state );
    }

    virtual void OnDataChanged( ::DataUpdateType_t updateType ) {
        PY_OVERRIDE_CHECK( C_BaseAnimating, OnDataChanged )
        PY_OVERRIDE_LOG( _entities, C_BaseAnimating, OnDataChanged )
        bp::override func_OnDataChanged = this->get_override( "OnDataChanged" );
        if( func_OnDataChanged.ptr() != Py_None )
            try {
                func_OnDataChanged( updateType );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseAnimating::OnDataChanged( updateType );
            }
        else
            this->C_BaseAnimating::OnDataChanged( updateType );
    }
    
    void default_OnDataChanged( ::DataUpdateType_t updateType ) {
        C_BaseAnimating::OnDataChanged( updateType );
    }

    virtual void OnRestore(  ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, OnRestore )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, OnRestore )
        bp::override func_OnRestore = this->get_override( "OnRestore" );
        if( func_OnRestore.ptr() != Py_None )
            try {
                func_OnRestore(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseEntity::OnRestore(  );
            }
        else
            this->C_BaseEntity::OnRestore(  );
    }
    
    void default_OnRestore(  ) {
        C_BaseEntity::OnRestore( );
    }

    virtual void Precache(  ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, Precache )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, Precache )
        bp::override func_Precache = this->get_override( "Precache" );
        if( func_Precache.ptr() != Py_None )
            try {
                func_Precache(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseEntity::Precache(  );
            }
        else
            this->C_BaseEntity::Precache(  );
    }
    
    void default_Precache(  ) {
        C_BaseEntity::Precache( );
    }

    virtual void PyReceiveMessage( ::boost::python::list msg ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, PyReceiveMessage )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, PyReceiveMessage )
        bp::override func_ReceiveMessage = this->get_override( "ReceiveMessage" );
        if( func_ReceiveMessage.ptr() != Py_None )
            try {
                func_ReceiveMessage( msg );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseEntity::PyReceiveMessage( msg );
            }
        else
            this->C_BaseEntity::PyReceiveMessage( msg );
    }
    
    void default_ReceiveMessage( ::boost::python::list msg ) {
        C_BaseEntity::PyReceiveMessage( msg );
    }

    virtual bool ShouldDraw(  ) {
        PY_OVERRIDE_CHECK( C_BaseAnimating, ShouldDraw )
        PY_OVERRIDE_LOG( _entities, C_BaseAnimating, ShouldDraw )
        bp::override func_ShouldDraw = this->get_override( "ShouldDraw" );
        if( func_ShouldDraw.ptr() != Py_None )
            try {
                return func_ShouldDraw(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_BaseAnimating::ShouldDraw(  );
            }
        else
            return this->C_BaseAnimating::ShouldDraw(  );
    }
    
    bool default_ShouldDraw(  ) {
        return C_BaseAnimating::ShouldDraw( );
    }

    virtual void Simulate(  ) {
        PY_OVERRIDE_CHECK( C_BaseAnimating, Simulate )
        PY_OVERRIDE_LOG( _entities, C_BaseAnimating, Simulate )
        bp::override func_Simulate = this->get_override( "Simulate" );
        if( func_Simulate.ptr() != Py_None )
            try {
                func_Simulate(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseAnimating::Simulate(  );
            }
        else
            this->C_BaseAnimating::Simulate(  );
    }
    
    void default_Simulate(  ) {
        C_BaseAnimating::Simulate( );
    }

    virtual void Spawn(  ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, Spawn )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, Spawn )
        bp::override func_Spawn = this->get_override( "Spawn" );
        if( func_Spawn.ptr() != Py_None )
            try {
                func_Spawn(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseEntity::Spawn(  );
            }
        else
            this->C_BaseEntity::Spawn(  );
    }
    
    void default_Spawn(  ) {
        C_BaseEntity::Spawn( );
    }

    virtual void StartTouch( ::C_BaseEntity * pOther ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, StartTouch )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, StartTouch )
        bp::override func_StartTouch = this->get_override( "StartTouch" );
        if( func_StartTouch.ptr() != Py_None )
            try {
                func_StartTouch( pOther ? pOther->GetPyHandle() : boost::python::object() );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseEntity::StartTouch( pOther );
            }
        else
            this->C_BaseEntity::StartTouch( pOther );
    }
    
    void default_StartTouch( ::C_BaseEntity * pOther ) {
        C_BaseEntity::StartTouch( pOther );
    }

    virtual void UpdateOnRemove(  ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, UpdateOnRemove )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, UpdateOnRemove )
        bp::override func_UpdateOnRemove = this->get_override( "UpdateOnRemove" );
        if( func_UpdateOnRemove.ptr() != Py_None )
            try {
                func_UpdateOnRemove(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseEntity::UpdateOnRemove(  );
            }
        else
            this->C_BaseEntity::UpdateOnRemove(  );
    }
    
    void default_UpdateOnRemove(  ) {
        C_BaseEntity::UpdateOnRemove( );
    }

    virtual PyObject *GetPySelf() const { return bp::detail::wrapper_base_::get_owner(*this); }

    virtual ClientClass* GetClientClass() {
#if defined(_WIN32) // POSIX: TODO
        if( GetCurrentThreadId() != g_hPythonThreadID )
            return C_BaseAnimatingOverlay::GetClientClass();
#endif // _WIN32
        PY_OVERRIDE_LOG( _entities, C_BaseAnimatingOverlay, GetClientClass )
        ClientClass *pClientClass = SrcPySystem()->Get<ClientClass *>( "pyClientClass", GetPyInstance(), NULL, true );
        if( pClientClass )
            return pClientClass;
        return C_BaseAnimatingOverlay::GetClientClass();
    }

    static int m_lifeState_Get( C_BaseAnimatingOverlay const & inst ) { return inst.m_lifeState; }

    static void m_lifeState_Set( C_BaseAnimatingOverlay & inst, int val ) { inst.m_lifeState = val; }

    static int m_takedamage_Get( C_BaseAnimatingOverlay const & inst ) { return inst.m_takedamage; }

    static void m_takedamage_Set( C_BaseAnimatingOverlay & inst, int val ) { inst.m_takedamage = val; }

    static int m_nSkin_Get( C_BaseAnimatingOverlay const & inst ) { return inst.m_nSkin; }

    static void m_nSkin_Set( C_BaseAnimatingOverlay & inst, int val ) { inst.m_nSkin = val; }

};

void register_C_BaseAnimatingOverlay_class(){

    { //::C_BaseAnimatingOverlay
        typedef bp::class_< C_BaseAnimatingOverlay_wrapper, bp::bases< C_BaseAnimating >, boost::noncopyable > C_BaseAnimatingOverlay_exposer_t;
        C_BaseAnimatingOverlay_exposer_t C_BaseAnimatingOverlay_exposer = C_BaseAnimatingOverlay_exposer_t( "C_BaseAnimatingOverlay", bp::no_init );
        bp::scope C_BaseAnimatingOverlay_scope( C_BaseAnimatingOverlay_exposer );
        bp::scope().attr("MAX_OVERLAYS") = (int)C_BaseAnimatingOverlay::MAX_OVERLAYS;
        C_BaseAnimatingOverlay_exposer.def( bp::init< >() );
        { //::C_BaseAnimatingOverlay::AccumulateLayers
        
            typedef void ( ::C_BaseAnimatingOverlay::*AccumulateLayers_function_type )( ::IBoneSetup &,::Vector *,::Quaternion *,float ) ;
            
            C_BaseAnimatingOverlay_exposer.def( 
                "AccumulateLayers"
                , AccumulateLayers_function_type( &::C_BaseAnimatingOverlay::AccumulateLayers )
                , ( bp::arg("boneSetup"), bp::arg("pos"), bp::arg("q"), bp::arg("currentTime") ) );
        
        }
        { //::C_BaseAnimatingOverlay::CheckForLayerChanges
        
            typedef void ( ::C_BaseAnimatingOverlay::*CheckForLayerChanges_function_type )( ::CStudioHdr *,float ) ;
            
            C_BaseAnimatingOverlay_exposer.def( 
                "CheckForLayerChanges"
                , CheckForLayerChanges_function_type( &::C_BaseAnimatingOverlay::CheckForLayerChanges )
                , ( bp::arg("hdr"), bp::arg("currentTime") ) );
        
        }
        { //::C_BaseAnimatingOverlay::DoAnimationEvents
        
            typedef void ( ::C_BaseAnimatingOverlay::*DoAnimationEvents_function_type )( ::CStudioHdr * ) ;
            
            C_BaseAnimatingOverlay_exposer.def( 
                "DoAnimationEvents"
                , DoAnimationEvents_function_type( &::C_BaseAnimatingOverlay::DoAnimationEvents )
                , ( bp::arg("pStudioHdr") ) );
        
        }
        { //::C_BaseAnimatingOverlay::GetNumAnimOverlays
        
            typedef int ( ::C_BaseAnimatingOverlay::*GetNumAnimOverlays_function_type )(  ) const;
            
            C_BaseAnimatingOverlay_exposer.def( 
                "GetNumAnimOverlays"
                , GetNumAnimOverlays_function_type( &::C_BaseAnimatingOverlay::GetNumAnimOverlays ) );
        
        }
        { //::C_BaseAnimatingOverlay::GetPyNetworkType
        
            typedef int ( *GetPyNetworkType_function_type )(  );
            
            C_BaseAnimatingOverlay_exposer.def( 
                "GetPyNetworkType"
                , GetPyNetworkType_function_type( &::C_BaseAnimatingOverlay::GetPyNetworkType ) );
        
        }
        { //::C_BaseAnimatingOverlay::GetRenderBounds
        
            typedef void ( ::C_BaseAnimatingOverlay::*GetRenderBounds_function_type )( ::Vector &,::Vector & ) ;
            
            C_BaseAnimatingOverlay_exposer.def( 
                "GetRenderBounds"
                , GetRenderBounds_function_type( &::C_BaseAnimatingOverlay::GetRenderBounds )
                , ( bp::arg("theMins"), bp::arg("theMaxs") ) );
        
        }
        { //::C_BaseAnimatingOverlay::SetNumAnimOverlays
        
            typedef void ( ::C_BaseAnimatingOverlay::*SetNumAnimOverlays_function_type )( int ) ;
            
            C_BaseAnimatingOverlay_exposer.def( 
                "SetNumAnimOverlays"
                , SetNumAnimOverlays_function_type( &::C_BaseAnimatingOverlay::SetNumAnimOverlays )
                , ( bp::arg("num") ) );
        
        }
        { //::C_BaseEntity::Activate
        
            typedef void ( ::C_BaseEntity::*Activate_function_type )(  ) ;
            typedef void ( C_BaseAnimatingOverlay_wrapper::*default_Activate_function_type )(  ) ;
            
            C_BaseAnimatingOverlay_exposer.def( 
                "Activate"
                , Activate_function_type(&::C_BaseEntity::Activate)
                , default_Activate_function_type(&C_BaseAnimatingOverlay_wrapper::default_Activate) );
        
        }
        { //::C_BaseEntity::ClientThink
        
            typedef void ( ::C_BaseEntity::*ClientThink_function_type )(  ) ;
            typedef void ( C_BaseAnimatingOverlay_wrapper::*default_ClientThink_function_type )(  ) ;
            
            C_BaseAnimatingOverlay_exposer.def( 
                "ClientThink"
                , ClientThink_function_type(&::C_BaseEntity::ClientThink)
                , default_ClientThink_function_type(&C_BaseAnimatingOverlay_wrapper::default_ClientThink) );
        
        }
        { //::C_BaseEntity::ComputeWorldSpaceSurroundingBox
        
            typedef void ( ::C_BaseEntity::*ComputeWorldSpaceSurroundingBox_function_type )( ::Vector *,::Vector * ) ;
            typedef void ( C_BaseAnimatingOverlay_wrapper::*default_ComputeWorldSpaceSurroundingBox_function_type )( ::Vector *,::Vector * ) ;
            
            C_BaseAnimatingOverlay_exposer.def( 
                "ComputeWorldSpaceSurroundingBox"
                , ComputeWorldSpaceSurroundingBox_function_type(&::C_BaseEntity::ComputeWorldSpaceSurroundingBox)
                , default_ComputeWorldSpaceSurroundingBox_function_type(&C_BaseAnimatingOverlay_wrapper::default_ComputeWorldSpaceSurroundingBox)
                , ( bp::arg("pVecWorldMins"), bp::arg("pVecWorldMaxs") ) );
        
        }
        { //::C_BaseEntity::CreateVPhysics
        
            typedef bool ( ::C_BaseEntity::*CreateVPhysics_function_type )(  ) ;
            typedef bool ( C_BaseAnimatingOverlay_wrapper::*default_CreateVPhysics_function_type )(  ) ;
            
            C_BaseAnimatingOverlay_exposer.def( 
                "CreateVPhysics"
                , CreateVPhysics_function_type(&::C_BaseEntity::CreateVPhysics)
                , default_CreateVPhysics_function_type(&C_BaseAnimatingOverlay_wrapper::default_CreateVPhysics) );
        
        }
        { //::C_BaseEntity::DoImpactEffect
        
            typedef void ( ::C_BaseEntity::*DoImpactEffect_function_type )( ::trace_t &,int ) ;
            typedef void ( C_BaseAnimatingOverlay_wrapper::*default_DoImpactEffect_function_type )( ::trace_t &,int ) ;
            
            C_BaseAnimatingOverlay_exposer.def( 
                "DoImpactEffect"
                , DoImpactEffect_function_type(&::C_BaseEntity::DoImpactEffect)
                , default_DoImpactEffect_function_type(&C_BaseAnimatingOverlay_wrapper::default_DoImpactEffect)
                , ( bp::arg("tr"), bp::arg("nDamageType") ) );
        
        }
        { //::C_BaseEntity::EndTouch
        
            typedef void ( ::C_BaseEntity::*EndTouch_function_type )( ::C_BaseEntity * ) ;
            typedef void ( C_BaseAnimatingOverlay_wrapper::*default_EndTouch_function_type )( ::C_BaseEntity * ) ;
            
            C_BaseAnimatingOverlay_exposer.def( 
                "EndTouch"
                , EndTouch_function_type(&::C_BaseEntity::EndTouch)
                , default_EndTouch_function_type(&C_BaseAnimatingOverlay_wrapper::default_EndTouch)
                , ( bp::arg("pOther") ) );
        
        }
        { //::C_BaseAnimating::GetCollideType
        
            typedef ::CollideType_t ( ::C_BaseAnimating::*GetCollideType_function_type )(  ) ;
            typedef ::CollideType_t ( C_BaseAnimatingOverlay_wrapper::*default_GetCollideType_function_type )(  ) ;
            
            C_BaseAnimatingOverlay_exposer.def( 
                "GetCollideType"
                , GetCollideType_function_type(&::C_BaseAnimating::GetCollideType)
                , default_GetCollideType_function_type(&C_BaseAnimatingOverlay_wrapper::default_GetCollideType) );
        
        }
        { //::C_BaseEntity::GetTracerType
        
            typedef char const * ( ::C_BaseEntity::*GetTracerType_function_type )(  ) ;
            typedef char const * ( C_BaseAnimatingOverlay_wrapper::*default_GetTracerType_function_type )(  ) ;
            
            C_BaseAnimatingOverlay_exposer.def( 
                "GetTracerType"
                , GetTracerType_function_type(&::C_BaseEntity::GetTracerType)
                , default_GetTracerType_function_type(&C_BaseAnimatingOverlay_wrapper::default_GetTracerType) );
        
        }
        { //::C_BaseEntity::KeyValue
        
            typedef bool ( ::C_BaseEntity::*KeyValue_function_type )( char const *,char const * ) ;
            typedef bool ( C_BaseAnimatingOverlay_wrapper::*default_KeyValue_function_type )( char const *,char const * ) ;
            
            C_BaseAnimatingOverlay_exposer.def( 
                "KeyValue"
                , KeyValue_function_type(&::C_BaseEntity::KeyValue)
                , default_KeyValue_function_type(&C_BaseAnimatingOverlay_wrapper::default_KeyValue)
                , ( bp::arg("szKeyName"), bp::arg("szValue") ) );
        
        }
        { //::C_BaseEntity::KeyValue
        
            typedef bool ( ::C_BaseEntity::*KeyValue_function_type )( char const *,float ) ;
            typedef bool ( C_BaseAnimatingOverlay_wrapper::*default_KeyValue_function_type )( char const *,float ) ;
            
            C_BaseAnimatingOverlay_exposer.def( 
                "KeyValue"
                , KeyValue_function_type(&::C_BaseEntity::KeyValue)
                , default_KeyValue_function_type(&C_BaseAnimatingOverlay_wrapper::default_KeyValue)
                , ( bp::arg("szKeyName"), bp::arg("flValue") ) );
        
        }
        { //::C_BaseEntity::KeyValue
        
            typedef bool ( ::C_BaseEntity::*KeyValue_function_type )( char const *,::Vector const & ) ;
            typedef bool ( C_BaseAnimatingOverlay_wrapper::*default_KeyValue_function_type )( char const *,::Vector const & ) ;
            
            C_BaseAnimatingOverlay_exposer.def( 
                "KeyValue"
                , KeyValue_function_type(&::C_BaseEntity::KeyValue)
                , default_KeyValue_function_type(&C_BaseAnimatingOverlay_wrapper::default_KeyValue)
                , ( bp::arg("szKeyName"), bp::arg("vecValue") ) );
        
        }
        { //::C_BaseEntity::MakeTracer
        
            typedef void ( ::C_BaseEntity::*MakeTracer_function_type )( ::Vector const &,::trace_t const &,int ) ;
            typedef void ( C_BaseAnimatingOverlay_wrapper::*default_MakeTracer_function_type )( ::Vector const &,::trace_t const &,int ) ;
            
            C_BaseAnimatingOverlay_exposer.def( 
                "MakeTracer"
                , MakeTracer_function_type(&::C_BaseEntity::MakeTracer)
                , default_MakeTracer_function_type(&C_BaseAnimatingOverlay_wrapper::default_MakeTracer)
                , ( bp::arg("vecTracerSrc"), bp::arg("tr"), bp::arg("iTracerType") ) );
        
        }
        { //::C_BaseAnimating::NotifyShouldTransmit
        
            typedef void ( ::C_BaseAnimating::*NotifyShouldTransmit_function_type )( ::ShouldTransmitState_t ) ;
            typedef void ( C_BaseAnimatingOverlay_wrapper::*default_NotifyShouldTransmit_function_type )( ::ShouldTransmitState_t ) ;
            
            C_BaseAnimatingOverlay_exposer.def( 
                "NotifyShouldTransmit"
                , NotifyShouldTransmit_function_type(&::C_BaseAnimating::NotifyShouldTransmit)
                , default_NotifyShouldTransmit_function_type(&C_BaseAnimatingOverlay_wrapper::default_NotifyShouldTransmit)
                , ( bp::arg("state") ) );
        
        }
        { //::C_BaseAnimating::OnDataChanged
        
            typedef void ( ::C_BaseAnimating::*OnDataChanged_function_type )( ::DataUpdateType_t ) ;
            typedef void ( C_BaseAnimatingOverlay_wrapper::*default_OnDataChanged_function_type )( ::DataUpdateType_t ) ;
            
            C_BaseAnimatingOverlay_exposer.def( 
                "OnDataChanged"
                , OnDataChanged_function_type(&::C_BaseAnimating::OnDataChanged)
                , default_OnDataChanged_function_type(&C_BaseAnimatingOverlay_wrapper::default_OnDataChanged)
                , ( bp::arg("updateType") ) );
        
        }
        { //::C_BaseEntity::OnRestore
        
            typedef void ( ::C_BaseEntity::*OnRestore_function_type )(  ) ;
            typedef void ( C_BaseAnimatingOverlay_wrapper::*default_OnRestore_function_type )(  ) ;
            
            C_BaseAnimatingOverlay_exposer.def( 
                "OnRestore"
                , OnRestore_function_type(&::C_BaseEntity::OnRestore)
                , default_OnRestore_function_type(&C_BaseAnimatingOverlay_wrapper::default_OnRestore) );
        
        }
        { //::C_BaseEntity::Precache
        
            typedef void ( ::C_BaseEntity::*Precache_function_type )(  ) ;
            typedef void ( C_BaseAnimatingOverlay_wrapper::*default_Precache_function_type )(  ) ;
            
            C_BaseAnimatingOverlay_exposer.def( 
                "Precache"
                , Precache_function_type(&::C_BaseEntity::Precache)
                , default_Precache_function_type(&C_BaseAnimatingOverlay_wrapper::default_Precache) );
        
        }
        { //::C_BaseEntity::PyReceiveMessage
        
            typedef void ( ::C_BaseEntity::*ReceiveMessage_function_type )( ::boost::python::list ) ;
            typedef void ( C_BaseAnimatingOverlay_wrapper::*default_ReceiveMessage_function_type )( ::boost::python::list ) ;
            
            C_BaseAnimatingOverlay_exposer.def( 
                "ReceiveMessage"
                , ReceiveMessage_function_type(&::C_BaseEntity::PyReceiveMessage)
                , default_ReceiveMessage_function_type(&C_BaseAnimatingOverlay_wrapper::default_ReceiveMessage)
                , ( bp::arg("msg") ) );
        
        }
        { //::C_BaseAnimating::ShouldDraw
        
            typedef bool ( ::C_BaseAnimating::*ShouldDraw_function_type )(  ) ;
            typedef bool ( C_BaseAnimatingOverlay_wrapper::*default_ShouldDraw_function_type )(  ) ;
            
            C_BaseAnimatingOverlay_exposer.def( 
                "ShouldDraw"
                , ShouldDraw_function_type(&::C_BaseAnimating::ShouldDraw)
                , default_ShouldDraw_function_type(&C_BaseAnimatingOverlay_wrapper::default_ShouldDraw) );
        
        }
        { //::C_BaseAnimating::Simulate
        
            typedef void ( ::C_BaseAnimating::*Simulate_function_type )(  ) ;
            typedef void ( C_BaseAnimatingOverlay_wrapper::*default_Simulate_function_type )(  ) ;
            
            C_BaseAnimatingOverlay_exposer.def( 
                "Simulate"
                , Simulate_function_type(&::C_BaseAnimating::Simulate)
                , default_Simulate_function_type(&C_BaseAnimatingOverlay_wrapper::default_Simulate) );
        
        }
        { //::C_BaseEntity::Spawn
        
            typedef void ( ::C_BaseEntity::*Spawn_function_type )(  ) ;
            typedef void ( C_BaseAnimatingOverlay_wrapper::*default_Spawn_function_type )(  ) ;
            
            C_BaseAnimatingOverlay_exposer.def( 
                "Spawn"
                , Spawn_function_type(&::C_BaseEntity::Spawn)
                , default_Spawn_function_type(&C_BaseAnimatingOverlay_wrapper::default_Spawn) );
        
        }
        { //::C_BaseEntity::StartTouch
        
            typedef void ( ::C_BaseEntity::*StartTouch_function_type )( ::C_BaseEntity * ) ;
            typedef void ( C_BaseAnimatingOverlay_wrapper::*default_StartTouch_function_type )( ::C_BaseEntity * ) ;
            
            C_BaseAnimatingOverlay_exposer.def( 
                "StartTouch"
                , StartTouch_function_type(&::C_BaseEntity::StartTouch)
                , default_StartTouch_function_type(&C_BaseAnimatingOverlay_wrapper::default_StartTouch)
                , ( bp::arg("pOther") ) );
        
        }
        { //::C_BaseEntity::UpdateOnRemove
        
            typedef void ( ::C_BaseEntity::*UpdateOnRemove_function_type )(  ) ;
            typedef void ( C_BaseAnimatingOverlay_wrapper::*default_UpdateOnRemove_function_type )(  ) ;
            
            C_BaseAnimatingOverlay_exposer.def( 
                "UpdateOnRemove"
                , UpdateOnRemove_function_type(&::C_BaseEntity::UpdateOnRemove)
                , default_UpdateOnRemove_function_type(&C_BaseAnimatingOverlay_wrapper::default_UpdateOnRemove) );
        
        }
        C_BaseAnimatingOverlay_exposer.staticmethod( "GetPyNetworkType" );
        C_BaseAnimatingOverlay_exposer.add_property( "lifestate", &C_BaseAnimatingOverlay_wrapper::m_lifeState_Get, &C_BaseAnimatingOverlay_wrapper::m_lifeState_Set );
        C_BaseAnimatingOverlay_exposer.add_property( "takedamage", &C_BaseAnimatingOverlay_wrapper::m_takedamage_Get, &C_BaseAnimatingOverlay_wrapper::m_takedamage_Set );
        C_BaseAnimatingOverlay_exposer.add_property( "skin", &C_BaseAnimatingOverlay_wrapper::m_nSkin_Get, &C_BaseAnimatingOverlay_wrapper::m_nSkin_Set );
    }

}

