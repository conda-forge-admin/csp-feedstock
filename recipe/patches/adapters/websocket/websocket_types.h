
#ifndef _IN_CSP_AUTOGEN_CSP_ADAPTERS_WEBSOCKET_TYPES
#define _IN_CSP_AUTOGEN_CSP_ADAPTERS_WEBSOCKET_TYPES

#include <csp/core/Exception.h>
#include <csp/engine/Struct.h>
#include <cstddef>

namespace csp::autogen
{

class WebsocketStatus : public csp::CspEnum
{
public:
    // Raw value quick access
    enum class enum_
    {
        ACTIVE = 0,
        GENERIC_ERROR = 1,
        CONNECTION_FAILED = 2,
        CLOSED = 3,
        MESSAGE_SEND_FAIL = 4
    };

    // CspEnum types
    static WebsocketStatus ACTIVE;
    static WebsocketStatus GENERIC_ERROR;
    static WebsocketStatus CONNECTION_FAILED;
    static WebsocketStatus CLOSED;
    static WebsocketStatus MESSAGE_SEND_FAIL;

    const char * asCString() const                { return name().c_str(); }
    const std::string & asString() const          { return name(); }

    static WebsocketStatus create( enum_ v )          { return s_meta -> create( ( int64_t ) v ); }
    static WebsocketStatus create( const char * name) { return s_meta -> fromString( name ); }
    static WebsocketStatus create( const std::string & s ) { return create( s.c_str() ); }

    enum_ enum_value() const { return ( enum_ ) value(); }

    static constexpr uint32_t num_types() { return 5; }

    static bool static_init();

    WebsocketStatus( const csp::CspEnum & v ) : csp::CspEnum( v ) { CSP_TRUE_OR_THROW( v.meta() == s_meta.get(), AssertionError, "Mismatched enum meta" ); }

private:

    static std::shared_ptr<csp::CspEnumMeta> s_meta;
};

class WebsocketHeaderUpdate : public csp::Struct
{
public:

    using Ptr = csp::TypedStructPtr<WebsocketHeaderUpdate>;

    WebsocketHeaderUpdate()  = delete;
    ~WebsocketHeaderUpdate() = delete;
    WebsocketHeaderUpdate( const WebsocketHeaderUpdate & ) = delete;
    WebsocketHeaderUpdate( WebsocketHeaderUpdate && ) = delete;

    Ptr copy() const { return csp::structptr_cast<WebsocketHeaderUpdate>( Struct::copy() ); }

    static WebsocketHeaderUpdate::Ptr create()
    {
        return Ptr( static_cast<WebsocketHeaderUpdate *>( s_meta -> createRaw() ) );
    }

    static const csp::StructMetaPtr & meta() { return s_meta; }


    const std::string & key() const
    {
        static_assert( offsetof( WebsocketHeaderUpdate,m_key ) == 0 );
        static_assert( alignof( std::string ) == 8 );
        static_assert( sizeof( std::string ) == 24 );

        if( !key_isSet() )
            CSP_THROW( csp::ValueError, "field key on struct WebsocketHeaderUpdate is not set" );

        return m_key;
    }

    void set_key( const std::string & value )
    {
        
        static_assert( offsetof( WebsocketHeaderUpdate,m_key ) == 0 );
        static_assert( alignof( std::string ) == 8 );
        static_assert( sizeof( std::string ) == 24 );

        m_WebsocketHeaderUpdate_mask[0] |= 1;


        //TODO employ move semantics where it makes sense
        m_key = value;
    }

    
    void set_key( const char * value )
    {
        
        static_assert( offsetof( WebsocketHeaderUpdate,m_key ) == 0 );
        static_assert( alignof( std::string ) == 8 );
        static_assert( sizeof( std::string ) == 24 );

        m_WebsocketHeaderUpdate_mask[0] |= 1;

        m_key = value;
    }

    void set_key( std::string_view value )
    {
        
        static_assert( offsetof( WebsocketHeaderUpdate,m_key ) == 0 );
        static_assert( alignof( std::string ) == 8 );
        static_assert( sizeof( std::string ) == 24 );

        m_WebsocketHeaderUpdate_mask[0] |= 1;

        m_key = value;
    }


    bool key_isSet() const
    {
        static_assert(( offsetof( WebsocketHeaderUpdate,m_WebsocketHeaderUpdate_mask) + 0 ) == 48 );
        return m_WebsocketHeaderUpdate_mask[0] & 1;
    }

    void clear_key()
    {
        static_assert(( offsetof( WebsocketHeaderUpdate,m_WebsocketHeaderUpdate_mask) + 0 ) == 48 );
        m_WebsocketHeaderUpdate_mask[0] &= ~1;
    }

    const std::string & value() const
    {
        static_assert( offsetof( WebsocketHeaderUpdate,m_value ) == 24 );
        static_assert( alignof( std::string ) == 8 );
        static_assert( sizeof( std::string ) == 24 );

        if( !value_isSet() )
            CSP_THROW( csp::ValueError, "field value on struct WebsocketHeaderUpdate is not set" );

        return m_value;
    }

    void set_value( const std::string & value )
    {
        
        static_assert( offsetof( WebsocketHeaderUpdate,m_value ) == 24 );
        static_assert( alignof( std::string ) == 8 );
        static_assert( sizeof( std::string ) == 24 );

        m_WebsocketHeaderUpdate_mask[0] |= 2;


        //TODO employ move semantics where it makes sense
        m_value = value;
    }

    
    void set_value( const char * value )
    {
        
        static_assert( offsetof( WebsocketHeaderUpdate,m_value ) == 24 );
        static_assert( alignof( std::string ) == 8 );
        static_assert( sizeof( std::string ) == 24 );

        m_WebsocketHeaderUpdate_mask[0] |= 2;

        m_value = value;
    }

    void set_value( std::string_view value )
    {
        
        static_assert( offsetof( WebsocketHeaderUpdate,m_value ) == 24 );
        static_assert( alignof( std::string ) == 8 );
        static_assert( sizeof( std::string ) == 24 );

        m_WebsocketHeaderUpdate_mask[0] |= 2;

        m_value = value;
    }


    bool value_isSet() const
    {
        static_assert(( offsetof( WebsocketHeaderUpdate,m_WebsocketHeaderUpdate_mask) + 0 ) == 48 );
        return m_WebsocketHeaderUpdate_mask[0] & 2;
    }

    void clear_value()
    {
        static_assert(( offsetof( WebsocketHeaderUpdate,m_WebsocketHeaderUpdate_mask) + 0 ) == 48 );
        m_WebsocketHeaderUpdate_mask[0] &= ~2;
    }


    static bool static_init();

private:

    std::string m_key;
    std::string m_value;
    char m_WebsocketHeaderUpdate_mask[1];


    static csp::StructMetaPtr s_meta;

    static void assert_mask()
    {
        static_assert( offsetof( WebsocketHeaderUpdate, m_WebsocketHeaderUpdate_mask ) == 48 );
    }
};

}
#endif
