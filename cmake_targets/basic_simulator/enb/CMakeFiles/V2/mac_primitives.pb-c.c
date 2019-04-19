/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: mac_primitives.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "mac_primitives.pb-c.h"
void   protocol__flex_dl_dci__init
                     (Protocol__FlexDlDci         *message)
{
  static const Protocol__FlexDlDci init_value = PROTOCOL__FLEX_DL_DCI__INIT;
  *message = init_value;
}
size_t protocol__flex_dl_dci__get_packed_size
                     (const Protocol__FlexDlDci *message)
{
  assert(message->base.descriptor == &protocol__flex_dl_dci__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t protocol__flex_dl_dci__pack
                     (const Protocol__FlexDlDci *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &protocol__flex_dl_dci__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t protocol__flex_dl_dci__pack_to_buffer
                     (const Protocol__FlexDlDci *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &protocol__flex_dl_dci__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Protocol__FlexDlDci *
       protocol__flex_dl_dci__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Protocol__FlexDlDci *)
     protobuf_c_message_unpack (&protocol__flex_dl_dci__descriptor,
                                allocator, len, data);
}
void   protocol__flex_dl_dci__free_unpacked
                     (Protocol__FlexDlDci *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &protocol__flex_dl_dci__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   protocol__flex_ul_dci__init
                     (Protocol__FlexUlDci         *message)
{
  static const Protocol__FlexUlDci init_value = PROTOCOL__FLEX_UL_DCI__INIT;
  *message = init_value;
}
size_t protocol__flex_ul_dci__get_packed_size
                     (const Protocol__FlexUlDci *message)
{
  assert(message->base.descriptor == &protocol__flex_ul_dci__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t protocol__flex_ul_dci__pack
                     (const Protocol__FlexUlDci *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &protocol__flex_ul_dci__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t protocol__flex_ul_dci__pack_to_buffer
                     (const Protocol__FlexUlDci *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &protocol__flex_ul_dci__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Protocol__FlexUlDci *
       protocol__flex_ul_dci__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Protocol__FlexUlDci *)
     protobuf_c_message_unpack (&protocol__flex_ul_dci__descriptor,
                                allocator, len, data);
}
void   protocol__flex_ul_dci__free_unpacked
                     (Protocol__FlexUlDci *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &protocol__flex_ul_dci__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   protocol__flex_rlc_pdu__init
                     (Protocol__FlexRlcPdu         *message)
{
  static const Protocol__FlexRlcPdu init_value = PROTOCOL__FLEX_RLC_PDU__INIT;
  *message = init_value;
}
size_t protocol__flex_rlc_pdu__get_packed_size
                     (const Protocol__FlexRlcPdu *message)
{
  assert(message->base.descriptor == &protocol__flex_rlc_pdu__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t protocol__flex_rlc_pdu__pack
                     (const Protocol__FlexRlcPdu *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &protocol__flex_rlc_pdu__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t protocol__flex_rlc_pdu__pack_to_buffer
                     (const Protocol__FlexRlcPdu *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &protocol__flex_rlc_pdu__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Protocol__FlexRlcPdu *
       protocol__flex_rlc_pdu__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Protocol__FlexRlcPdu *)
     protobuf_c_message_unpack (&protocol__flex_rlc_pdu__descriptor,
                                allocator, len, data);
}
void   protocol__flex_rlc_pdu__free_unpacked
                     (Protocol__FlexRlcPdu *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &protocol__flex_rlc_pdu__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   protocol__flex_rlc_pdu_tb__init
                     (Protocol__FlexRlcPduTb         *message)
{
  static const Protocol__FlexRlcPduTb init_value = PROTOCOL__FLEX_RLC_PDU_TB__INIT;
  *message = init_value;
}
size_t protocol__flex_rlc_pdu_tb__get_packed_size
                     (const Protocol__FlexRlcPduTb *message)
{
  assert(message->base.descriptor == &protocol__flex_rlc_pdu_tb__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t protocol__flex_rlc_pdu_tb__pack
                     (const Protocol__FlexRlcPduTb *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &protocol__flex_rlc_pdu_tb__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t protocol__flex_rlc_pdu_tb__pack_to_buffer
                     (const Protocol__FlexRlcPduTb *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &protocol__flex_rlc_pdu_tb__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Protocol__FlexRlcPduTb *
       protocol__flex_rlc_pdu_tb__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Protocol__FlexRlcPduTb *)
     protobuf_c_message_unpack (&protocol__flex_rlc_pdu_tb__descriptor,
                                allocator, len, data);
}
void   protocol__flex_rlc_pdu_tb__free_unpacked
                     (Protocol__FlexRlcPduTb *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &protocol__flex_rlc_pdu_tb__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor protocol__flex_dl_dci__field_descriptors[27] =
{
  {
    "rnti",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexDlDci, has_rnti),
    offsetof(Protocol__FlexDlDci, rnti),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "res_alloc",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexDlDci, has_res_alloc),
    offsetof(Protocol__FlexDlDci, res_alloc),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "rb_bitmap",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexDlDci, has_rb_bitmap),
    offsetof(Protocol__FlexDlDci, rb_bitmap),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "rb_shift",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexDlDci, has_rb_shift),
    offsetof(Protocol__FlexDlDci, rb_shift),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "tbs_size",
    5,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexDlDci, n_tbs_size),
    offsetof(Protocol__FlexDlDci, tbs_size),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "mcs",
    6,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexDlDci, n_mcs),
    offsetof(Protocol__FlexDlDci, mcs),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ndi",
    7,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexDlDci, n_ndi),
    offsetof(Protocol__FlexDlDci, ndi),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "rv",
    8,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexDlDci, n_rv),
    offsetof(Protocol__FlexDlDci, rv),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cce_index",
    9,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexDlDci, has_cce_index),
    offsetof(Protocol__FlexDlDci, cce_index),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "aggr_level",
    10,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexDlDci, has_aggr_level),
    offsetof(Protocol__FlexDlDci, aggr_level),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "precoding_info",
    11,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexDlDci, has_precoding_info),
    offsetof(Protocol__FlexDlDci, precoding_info),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "format",
    12,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexDlDci, has_format),
    offsetof(Protocol__FlexDlDci, format),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "tpc",
    13,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexDlDci, has_tpc),
    offsetof(Protocol__FlexDlDci, tpc),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "harq_process",
    14,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexDlDci, has_harq_process),
    offsetof(Protocol__FlexDlDci, harq_process),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "dai",
    15,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexDlDci, has_dai),
    offsetof(Protocol__FlexDlDci, dai),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "vrb_format",
    16,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexDlDci, has_vrb_format),
    offsetof(Protocol__FlexDlDci, vrb_format),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "tb_swap",
    17,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexDlDci, has_tb_swap),
    offsetof(Protocol__FlexDlDci, tb_swap),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sps_release",
    18,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexDlDci, has_sps_release),
    offsetof(Protocol__FlexDlDci, sps_release),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "pdcch_order",
    19,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexDlDci, has_pdcch_order),
    offsetof(Protocol__FlexDlDci, pdcch_order),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "preamble_index",
    20,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexDlDci, has_preamble_index),
    offsetof(Protocol__FlexDlDci, preamble_index),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "prach_mask_index",
    21,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexDlDci, has_prach_mask_index),
    offsetof(Protocol__FlexDlDci, prach_mask_index),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "n_gap",
    22,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexDlDci, has_n_gap),
    offsetof(Protocol__FlexDlDci, n_gap),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "tbs_idx",
    23,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexDlDci, has_tbs_idx),
    offsetof(Protocol__FlexDlDci, tbs_idx),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "dl_power_offset",
    24,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexDlDci, has_dl_power_offset),
    offsetof(Protocol__FlexDlDci, dl_power_offset),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "pdcch_power_offset",
    25,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexDlDci, has_pdcch_power_offset),
    offsetof(Protocol__FlexDlDci, pdcch_power_offset),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cif_present",
    26,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexDlDci, has_cif_present),
    offsetof(Protocol__FlexDlDci, cif_present),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cif",
    27,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexDlDci, has_cif),
    offsetof(Protocol__FlexDlDci, cif),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned protocol__flex_dl_dci__field_indices_by_name[] = {
  9,   /* field[9] = aggr_level */
  8,   /* field[8] = cce_index */
  26,   /* field[26] = cif */
  25,   /* field[25] = cif_present */
  14,   /* field[14] = dai */
  23,   /* field[23] = dl_power_offset */
  11,   /* field[11] = format */
  13,   /* field[13] = harq_process */
  5,   /* field[5] = mcs */
  21,   /* field[21] = n_gap */
  6,   /* field[6] = ndi */
  18,   /* field[18] = pdcch_order */
  24,   /* field[24] = pdcch_power_offset */
  20,   /* field[20] = prach_mask_index */
  19,   /* field[19] = preamble_index */
  10,   /* field[10] = precoding_info */
  2,   /* field[2] = rb_bitmap */
  3,   /* field[3] = rb_shift */
  1,   /* field[1] = res_alloc */
  0,   /* field[0] = rnti */
  7,   /* field[7] = rv */
  17,   /* field[17] = sps_release */
  16,   /* field[16] = tb_swap */
  22,   /* field[22] = tbs_idx */
  4,   /* field[4] = tbs_size */
  12,   /* field[12] = tpc */
  15,   /* field[15] = vrb_format */
};
static const ProtobufCIntRange protocol__flex_dl_dci__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 27 }
};
const ProtobufCMessageDescriptor protocol__flex_dl_dci__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "protocol.flex_dl_dci",
  "FlexDlDci",
  "Protocol__FlexDlDci",
  "protocol",
  sizeof(Protocol__FlexDlDci),
  27,
  protocol__flex_dl_dci__field_descriptors,
  protocol__flex_dl_dci__field_indices_by_name,
  1,  protocol__flex_dl_dci__number_ranges,
  (ProtobufCMessageInit) protocol__flex_dl_dci__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor protocol__flex_ul_dci__field_descriptors[16] =
{
  {
    "rnti",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexUlDci, has_rnti),
    offsetof(Protocol__FlexUlDci, rnti),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "rb_start",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexUlDci, has_rb_start),
    offsetof(Protocol__FlexUlDci, rb_start),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "rb_len",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexUlDci, has_rb_len),
    offsetof(Protocol__FlexUlDci, rb_len),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "mcs",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexUlDci, has_mcs),
    offsetof(Protocol__FlexUlDci, mcs),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cyclic_shift2",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexUlDci, has_cyclic_shift2),
    offsetof(Protocol__FlexUlDci, cyclic_shift2),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "freq_hop_flag",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexUlDci, has_freq_hop_flag),
    offsetof(Protocol__FlexUlDci, freq_hop_flag),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "freq_hop_map",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexUlDci, has_freq_hop_map),
    offsetof(Protocol__FlexUlDci, freq_hop_map),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ndi",
    8,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexUlDci, has_ndi),
    offsetof(Protocol__FlexUlDci, ndi),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "rv",
    9,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexUlDci, has_rv),
    offsetof(Protocol__FlexUlDci, rv),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "harq_pid",
    10,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexUlDci, has_harq_pid),
    offsetof(Protocol__FlexUlDci, harq_pid),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ultx_mode",
    11,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexUlDci, has_ultx_mode),
    offsetof(Protocol__FlexUlDci, ultx_mode),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "tbs_size",
    12,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexUlDci, has_tbs_size),
    offsetof(Protocol__FlexUlDci, tbs_size),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "n_srs",
    13,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexUlDci, has_n_srs),
    offsetof(Protocol__FlexUlDci, n_srs),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "res_alloc",
    14,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexUlDci, has_res_alloc),
    offsetof(Protocol__FlexUlDci, res_alloc),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "size",
    15,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexUlDci, has_size),
    offsetof(Protocol__FlexUlDci, size),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "dai",
    16,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexUlDci, has_dai),
    offsetof(Protocol__FlexUlDci, dai),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned protocol__flex_ul_dci__field_indices_by_name[] = {
  4,   /* field[4] = cyclic_shift2 */
  15,   /* field[15] = dai */
  5,   /* field[5] = freq_hop_flag */
  6,   /* field[6] = freq_hop_map */
  9,   /* field[9] = harq_pid */
  3,   /* field[3] = mcs */
  12,   /* field[12] = n_srs */
  7,   /* field[7] = ndi */
  2,   /* field[2] = rb_len */
  1,   /* field[1] = rb_start */
  13,   /* field[13] = res_alloc */
  0,   /* field[0] = rnti */
  8,   /* field[8] = rv */
  14,   /* field[14] = size */
  11,   /* field[11] = tbs_size */
  10,   /* field[10] = ultx_mode */
};
static const ProtobufCIntRange protocol__flex_ul_dci__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 16 }
};
const ProtobufCMessageDescriptor protocol__flex_ul_dci__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "protocol.flex_ul_dci",
  "FlexUlDci",
  "Protocol__FlexUlDci",
  "protocol",
  sizeof(Protocol__FlexUlDci),
  16,
  protocol__flex_ul_dci__field_descriptors,
  protocol__flex_ul_dci__field_indices_by_name,
  1,  protocol__flex_ul_dci__number_ranges,
  (ProtobufCMessageInit) protocol__flex_ul_dci__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor protocol__flex_rlc_pdu__field_descriptors[1] =
{
  {
    "rlc_pdu_tb",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Protocol__FlexRlcPdu, n_rlc_pdu_tb),
    offsetof(Protocol__FlexRlcPdu, rlc_pdu_tb),
    &protocol__flex_rlc_pdu_tb__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned protocol__flex_rlc_pdu__field_indices_by_name[] = {
  0,   /* field[0] = rlc_pdu_tb */
};
static const ProtobufCIntRange protocol__flex_rlc_pdu__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor protocol__flex_rlc_pdu__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "protocol.flex_rlc_pdu",
  "FlexRlcPdu",
  "Protocol__FlexRlcPdu",
  "protocol",
  sizeof(Protocol__FlexRlcPdu),
  1,
  protocol__flex_rlc_pdu__field_descriptors,
  protocol__flex_rlc_pdu__field_indices_by_name,
  1,  protocol__flex_rlc_pdu__number_ranges,
  (ProtobufCMessageInit) protocol__flex_rlc_pdu__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor protocol__flex_rlc_pdu_tb__field_descriptors[2] =
{
  {
    "logical_channel_id",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexRlcPduTb, has_logical_channel_id),
    offsetof(Protocol__FlexRlcPduTb, logical_channel_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "size",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexRlcPduTb, has_size),
    offsetof(Protocol__FlexRlcPduTb, size),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned protocol__flex_rlc_pdu_tb__field_indices_by_name[] = {
  0,   /* field[0] = logical_channel_id */
  1,   /* field[1] = size */
};
static const ProtobufCIntRange protocol__flex_rlc_pdu_tb__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor protocol__flex_rlc_pdu_tb__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "protocol.flex_rlc_pdu_tb",
  "FlexRlcPduTb",
  "Protocol__FlexRlcPduTb",
  "protocol",
  sizeof(Protocol__FlexRlcPduTb),
  2,
  protocol__flex_rlc_pdu_tb__field_descriptors,
  protocol__flex_rlc_pdu_tb__field_indices_by_name,
  1,  protocol__flex_rlc_pdu_tb__number_ranges,
  (ProtobufCMessageInit) protocol__flex_rlc_pdu_tb__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue protocol__flex_dci_format__enum_values_by_number[10] =
{
  { "FLDCIF_1", "PROTOCOL__FLEX_DCI_FORMAT__FLDCIF_1", 0 },
  { "FLDCIF_1A", "PROTOCOL__FLEX_DCI_FORMAT__FLDCIF_1A", 1 },
  { "FLDCIF_1B", "PROTOCOL__FLEX_DCI_FORMAT__FLDCIF_1B", 2 },
  { "FLDCIF_1C", "PROTOCOL__FLEX_DCI_FORMAT__FLDCIF_1C", 3 },
  { "FLDCIF_1D", "PROTOCOL__FLEX_DCI_FORMAT__FLDCIF_1D", 4 },
  { "FLDCIF_2", "PROTOCOL__FLEX_DCI_FORMAT__FLDCIF_2", 5 },
  { "FLDCIF_2A", "PROTOCOL__FLEX_DCI_FORMAT__FLDCIF_2A", 6 },
  { "FLDCIF_2B", "PROTOCOL__FLEX_DCI_FORMAT__FLDCIF_2B", 7 },
  { "FLDCIF_3", "PROTOCOL__FLEX_DCI_FORMAT__FLDCIF_3", 8 },
  { "FLDCIF_3A", "PROTOCOL__FLEX_DCI_FORMAT__FLDCIF_3A", 9 },
};
static const ProtobufCIntRange protocol__flex_dci_format__value_ranges[] = {
{0, 0},{0, 10}
};
static const ProtobufCEnumValueIndex protocol__flex_dci_format__enum_values_by_name[10] =
{
  { "FLDCIF_1", 0 },
  { "FLDCIF_1A", 1 },
  { "FLDCIF_1B", 2 },
  { "FLDCIF_1C", 3 },
  { "FLDCIF_1D", 4 },
  { "FLDCIF_2", 5 },
  { "FLDCIF_2A", 6 },
  { "FLDCIF_2B", 7 },
  { "FLDCIF_3", 8 },
  { "FLDCIF_3A", 9 },
};
const ProtobufCEnumDescriptor protocol__flex_dci_format__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "protocol.flex_dci_format",
  "flex_dci_format",
  "Protocol__FlexDciFormat",
  "protocol",
  10,
  protocol__flex_dci_format__enum_values_by_number,
  10,
  protocol__flex_dci_format__enum_values_by_name,
  1,
  protocol__flex_dci_format__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCEnumValue protocol__flex_vrb_format__enum_values_by_number[2] =
{
  { "FLVRBF_LOCALIZED", "PROTOCOL__FLEX_VRB_FORMAT__FLVRBF_LOCALIZED", 0 },
  { "FLVRBF_DISTRIBUTED", "PROTOCOL__FLEX_VRB_FORMAT__FLVRBF_DISTRIBUTED", 1 },
};
static const ProtobufCIntRange protocol__flex_vrb_format__value_ranges[] = {
{0, 0},{0, 2}
};
static const ProtobufCEnumValueIndex protocol__flex_vrb_format__enum_values_by_name[2] =
{
  { "FLVRBF_DISTRIBUTED", 1 },
  { "FLVRBF_LOCALIZED", 0 },
};
const ProtobufCEnumDescriptor protocol__flex_vrb_format__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "protocol.flex_vrb_format",
  "flex_vrb_format",
  "Protocol__FlexVrbFormat",
  "protocol",
  2,
  protocol__flex_vrb_format__enum_values_by_number,
  2,
  protocol__flex_vrb_format__enum_values_by_name,
  1,
  protocol__flex_vrb_format__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCEnumValue protocol__flex_ngap_val__enum_values_by_number[2] =
{
  { "FLNGV_1", "PROTOCOL__FLEX_NGAP_VAL__FLNGV_1", 0 },
  { "FLNGV_2", "PROTOCOL__FLEX_NGAP_VAL__FLNGV_2", 1 },
};
static const ProtobufCIntRange protocol__flex_ngap_val__value_ranges[] = {
{0, 0},{0, 2}
};
static const ProtobufCEnumValueIndex protocol__flex_ngap_val__enum_values_by_name[2] =
{
  { "FLNGV_1", 0 },
  { "FLNGV_2", 1 },
};
const ProtobufCEnumDescriptor protocol__flex_ngap_val__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "protocol.flex_ngap_val",
  "flex_ngap_val",
  "Protocol__FlexNgapVal",
  "protocol",
  2,
  protocol__flex_ngap_val__enum_values_by_number,
  2,
  protocol__flex_ngap_val__enum_values_by_name,
  1,
  protocol__flex_ngap_val__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
