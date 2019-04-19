/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: header.proto */

#ifndef PROTOBUF_C_header_2eproto__INCLUDED
#define PROTOBUF_C_header_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1002001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Protocol__FlexHeader Protocol__FlexHeader;


/* --- enums --- */

typedef enum _Protocol__FlexType {
  /*
   * Discovery and maintenance messages
   */
  PROTOCOL__FLEX_TYPE__FLPT_HELLO = 0,
  PROTOCOL__FLEX_TYPE__FLPT_ECHO_REQUEST = 1,
  PROTOCOL__FLEX_TYPE__FLPT_ECHO_REPLY = 2,
  /*
   * Statistics and measurement messages
   */
  PROTOCOL__FLEX_TYPE__FLPT_STATS_REQUEST = 3,
  PROTOCOL__FLEX_TYPE__FLPT_STATS_REPLY = 4,
  /*
   * Time indication messages
   */
  PROTOCOL__FLEX_TYPE__FLPT_SF_TRIGGER = 5,
  /*
   * Asynchronous messages
   */
  PROTOCOL__FLEX_TYPE__FLPT_UL_SR_INFO = 6,
  /*
   * eNB configuration messages
   */
  PROTOCOL__FLEX_TYPE__FLPT_GET_ENB_CONFIG_REQUEST = 7,
  PROTOCOL__FLEX_TYPE__FLPT_GET_ENB_CONFIG_REPLY = 8,
  PROTOCOL__FLEX_TYPE__FLPT_GET_UE_CONFIG_REQUEST = 9,
  PROTOCOL__FLEX_TYPE__FLPT_GET_UE_CONFIG_REPLY = 10,
  PROTOCOL__FLEX_TYPE__FLPT_GET_LC_CONFIG_REQUEST = 11,
  PROTOCOL__FLEX_TYPE__FLPT_GET_LC_CONFIG_REPLY = 12,
  /*
   *Controller command messages
   */
  PROTOCOL__FLEX_TYPE__FLPT_DL_MAC_CONFIG = 13,
  /*
   * UE state change messages
   */
  PROTOCOL__FLEX_TYPE__FLPT_UE_STATE_CHANGE = 14,
  /*
   * Control delegation messages
   */
  PROTOCOL__FLEX_TYPE__FLPT_DELEGATE_CONTROL = 15,
  PROTOCOL__FLEX_TYPE__FLPT_RECONFIGURE_AGENT = 16,
  PROTOCOL__FLEX_TYPE__FLPT_RRC_TRIGGERING = 17,
  PROTOCOL__FLEX_TYPE__FLPT_UL_MAC_CONFIG = 18
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(PROTOCOL__FLEX_TYPE)
} Protocol__FlexType;

/* --- messages --- */

struct  _Protocol__FlexHeader
{
  ProtobufCMessage base;
  protobuf_c_boolean has_version;
  uint32_t version;
  protobuf_c_boolean has_type;
  uint32_t type;
  protobuf_c_boolean has_xid;
  uint32_t xid;
};
#define PROTOCOL__FLEX_HEADER__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__flex_header__descriptor) \
    , 0, 0, 0, 0, 0, 0 }


/* Protocol__FlexHeader methods */
void   protocol__flex_header__init
                     (Protocol__FlexHeader         *message);
size_t protocol__flex_header__get_packed_size
                     (const Protocol__FlexHeader   *message);
size_t protocol__flex_header__pack
                     (const Protocol__FlexHeader   *message,
                      uint8_t             *out);
size_t protocol__flex_header__pack_to_buffer
                     (const Protocol__FlexHeader   *message,
                      ProtobufCBuffer     *buffer);
Protocol__FlexHeader *
       protocol__flex_header__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__flex_header__free_unpacked
                     (Protocol__FlexHeader *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Protocol__FlexHeader_Closure)
                 (const Protocol__FlexHeader *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    protocol__flex_type__descriptor;
extern const ProtobufCMessageDescriptor protocol__flex_header__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_header_2eproto__INCLUDED */