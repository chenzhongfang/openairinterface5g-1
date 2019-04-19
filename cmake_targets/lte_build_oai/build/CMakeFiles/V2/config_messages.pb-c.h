/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: config_messages.proto */

#ifndef PROTOBUF_C_config_5fmessages_2eproto__INCLUDED
#define PROTOBUF_C_config_5fmessages_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1002001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "config_common.pb-c.h"

typedef struct _Protocol__FlexCellConfig Protocol__FlexCellConfig;
typedef struct _Protocol__FlexSliceConfig Protocol__FlexSliceConfig;
typedef struct _Protocol__FlexUeConfig Protocol__FlexUeConfig;
typedef struct _Protocol__FlexLcUeConfig Protocol__FlexLcUeConfig;


/* --- enums --- */


/* --- messages --- */

struct  _Protocol__FlexCellConfig
{
  ProtobufCMessage base;
  /*
   * The PCI of this cell
   */
  protobuf_c_boolean has_phy_cell_id;
  uint32_t phy_cell_id;
  /*
   * The PLMN cell id of this cell
   */
  protobuf_c_boolean has_cell_id;
  uint32_t cell_id;
  /*
   * PUSCH resources in RBs for hopping
   */
  protobuf_c_boolean has_pusch_hopping_offset;
  uint32_t pusch_hopping_offset;
  /*
   * One of the FLHM_* enum values
   */
  protobuf_c_boolean has_hopping_mode;
  uint32_t hopping_mode;
  /*
   * The number of subbands
   */
  protobuf_c_boolean has_n_sb;
  uint32_t n_sb;
  /*
   * The number of REGs used for PHICH
   */
  protobuf_c_boolean has_phich_resource;
  uint32_t phich_resource;
  /*
   * One of the FLPR_* enum values
   */
  /*
   * One of the FLPD_* enum values
   */
  protobuf_c_boolean has_phich_duration;
  uint32_t phich_duration;
  /*
   * See TS 36.211, section 6.9
   */
  protobuf_c_boolean has_init_nr_pdcch_ofdm_sym;
  uint32_t init_nr_pdcch_ofdm_sym;
  /*
   * The SI configuration
   */
  Protocol__FlexSiConfig *si_config;
  /*
   * The DL transmission bandwidth in RBs
   */
  protobuf_c_boolean has_dl_bandwidth;
  uint32_t dl_bandwidth;
  /*
   * The UL transmission bandwidth in RBs
   */
  protobuf_c_boolean has_ul_bandwidth;
  uint32_t ul_bandwidth;
  /*
   * One of the FLUCPL_* enum values
   */
  protobuf_c_boolean has_ul_cyclic_prefix_length;
  uint32_t ul_cyclic_prefix_length;
  /*
   * One of the FLDCPL_* enum values
   */
  protobuf_c_boolean has_dl_cyclic_prefix_length;
  uint32_t dl_cyclic_prefix_length;
  /*
   * Number of cell specific antenna ports
   */
  protobuf_c_boolean has_antenna_ports_count;
  uint32_t antenna_ports_count;
  /*
   * One of the FLDM_* enum values
   */
  protobuf_c_boolean has_duplex_mode;
  uint32_t duplex_mode;
  /*
   * DL/UL subframe assignment. TDD only
   */
  protobuf_c_boolean has_subframe_assignment;
  uint32_t subframe_assignment;
  /*
   * TDD only. See TS 36.211, table 4.2.1
   */
  protobuf_c_boolean has_special_subframe_patterns;
  uint32_t special_subframe_patterns;
  /*
   * The MBSFN radio frame period (Optional)
   */
  size_t n_mbsfn_subframe_config_rfperiod;
  uint32_t *mbsfn_subframe_config_rfperiod;
  /*
   * The radio frame offset (Optional)
   */
  size_t n_mbsfn_subframe_config_rfoffset;
  uint32_t *mbsfn_subframe_config_rfoffset;
  /*
   * Bitmap indicating the MBSFN subframes (Optional)
   */
  size_t n_mbsfn_subframe_config_sfalloc;
  uint32_t *mbsfn_subframe_config_sfalloc;
  /*
   * See TS 36.211, section 5.7.1
   */
  protobuf_c_boolean has_prach_config_index;
  uint32_t prach_config_index;
  /*
   * See TS 36.211, section 5.7.1
   */
  protobuf_c_boolean has_prach_freq_offset;
  uint32_t prach_freq_offset;
  /*
   * The duration of the RA response window in SF
   */
  protobuf_c_boolean has_ra_response_window_size;
  uint32_t ra_response_window_size;
  /*
   * Timer for RA
   */
  protobuf_c_boolean has_mac_contention_resolution_timer;
  uint32_t mac_contention_resolution_timer;
  /*
   * See TS 36.321
   */
  protobuf_c_boolean has_max_harq_msg3tx;
  uint32_t max_harq_msg3tx;
  /*
   * See TS 36.213, section 10.1
   */
  protobuf_c_boolean has_n1pucch_an;
  uint32_t n1pucch_an;
  /*
   * See TS 36.211, section 5.4
   */
  protobuf_c_boolean has_deltapucch_shift;
  uint32_t deltapucch_shift;
  /*
   * See TS 36.211, section 5.4
   */
  protobuf_c_boolean has_nrb_cqi;
  uint32_t nrb_cqi;
  /*
   * See TS 36.211, table 5.5.3.3-1 and 2
   */
  protobuf_c_boolean has_srs_subframe_config;
  uint32_t srs_subframe_config;
  /*
   * See TS 36.211, section 5.5.3.2
   */
  protobuf_c_boolean has_srs_bw_config;
  uint32_t srs_bw_config;
  /*
   * Boolean value. See TS 36.211, section 5.5.3.2. TDD only
   */
  protobuf_c_boolean has_srs_mac_up_pts;
  uint32_t srs_mac_up_pts;
  /*
   * One of the FLEQ_* enum values
   */
  protobuf_c_boolean has_enable_64qam;
  uint32_t enable_64qam;
  /*
   * Carrier component index
   */
  protobuf_c_boolean has_carrier_index;
  uint32_t carrier_index;
  /*
   * operating downlink frequency
   */
  protobuf_c_boolean has_dl_freq;
  uint32_t dl_freq;
  /*
   * operating uplink frequency 
   */
  protobuf_c_boolean has_ul_freq;
  uint32_t ul_freq;
  /*
   * operating band 
   */
  protobuf_c_boolean has_eutra_band;
  uint32_t eutra_band;
  /*
   * operating downlink power 
   */
  protobuf_c_boolean has_dl_pdsch_power;
  int32_t dl_pdsch_power;
  /*
   * operating uplink power
   */
  protobuf_c_boolean has_ul_pusch_power;
  int32_t ul_pusch_power;
  Protocol__FlexSliceConfig *slice_config;
};
#define PROTOCOL__FLEX_CELL_CONFIG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__flex_cell_config__descriptor) \
    , 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,NULL, 0,NULL, 0,NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL }


struct  _Protocol__FlexSliceConfig
{
  ProtobufCMessage base;
  /*
   * whether remaining RBs after first intra-slice allocation will
   * be allocated to UEs of the same slice
   */
  protobuf_c_boolean has_intraslice_share_active;
  protobuf_c_boolean intraslice_share_active;
  /*
   * whether remaining RBs after slice allocation will be allocated
   * to UEs of another slice. Isolated slices will be ignored.
   */
  protobuf_c_boolean has_interslice_share_active;
  protobuf_c_boolean interslice_share_active;
  size_t n_dl;
  Protocol__FlexDlSlice **dl;
  size_t n_ul;
  Protocol__FlexUlSlice **ul;
};
#define PROTOCOL__FLEX_SLICE_CONFIG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__flex_slice_config__descriptor) \
    , 0, 0, 0, 0, 0,NULL, 0,NULL }


struct  _Protocol__FlexUeConfig
{
  ProtobufCMessage base;
  protobuf_c_boolean has_rnti;
  uint32_t rnti;
  /*
   * The DRX configuration (Optional)
   */
  Protocol__FlexDrxConfig *drx_config;
  /*
   * Timer in SF. Control the synchronization
   */
  protobuf_c_boolean has_time_alignment_timer;
  uint32_t time_alignment_timer;
  /*
   * status of the UE, not the actual advance procedure
   * See TS 36.321
   */
  /*
   * Measurement gap configuration.
   */
  protobuf_c_boolean has_meas_gap_config_pattern;
  uint32_t meas_gap_config_pattern;
  /*
   * One of the FLMGCP_* enum values
   * See TS 36.133
   */
  /*
   * Measurement gap offset if applicable
   */
  protobuf_c_boolean has_meas_gap_config_sf_offset;
  uint32_t meas_gap_config_sf_offset;
  /*
   * The SPS configuration (Optional)
   */
  Protocol__FlexSpsConfig *sps_config;
  /*
   * The SR configuration (Optional)
   */
  Protocol__FlexSrConfig *sr_config;
  /*
   * The CQI configuration (Optional)
   */
  Protocol__FlexCqiConfig *cqi_config;
  /*
   * The UE transmission mode
   */
  protobuf_c_boolean has_transmission_mode;
  uint32_t transmission_mode;
  /*
   * Aggregated bit-rate of non-gbr bearer
   */
  protobuf_c_boolean has_ue_aggregated_max_bitrate_ul;
  uint64_t ue_aggregated_max_bitrate_ul;
  /*
   * per UE. See TS 36.413
   */
  /*
   * Aggregated bit-rate of non-gbr bearer
   */
  protobuf_c_boolean has_ue_aggregated_max_bitrate_dl;
  uint64_t ue_aggregated_max_bitrate_dl;
  /*
   * per UE. See TS 36.413
   */
  Protocol__FlexUeCapabilities *capabilities;
  /*
   * One of the FLUTA_* enum values
   */
  protobuf_c_boolean has_ue_transmission_antenna;
  uint32_t ue_transmission_antenna;
  /*
   * Boolean value. See TS 36.321
   */
  protobuf_c_boolean has_tti_bundling;
  uint32_t tti_bundling;
  /*
   * The max HARQ retransmission for UL
   */
  protobuf_c_boolean has_max_harq_tx;
  uint32_t max_harq_tx;
  /*
   * See TS 36.213
   */
  protobuf_c_boolean has_beta_offset_ack_index;
  uint32_t beta_offset_ack_index;
  /*
   * See TS 36.213
   */
  protobuf_c_boolean has_beta_offset_ri_index;
  uint32_t beta_offset_ri_index;
  /*
   * See TS 36.213
   */
  protobuf_c_boolean has_beta_offset_cqi_index;
  uint32_t beta_offset_cqi_index;
  /*
   * Boolean. See TS 36.213
   */
  protobuf_c_boolean has_ack_nack_simultaneous_trans;
  uint32_t ack_nack_simultaneous_trans;
  /*
   * Boolean. See TS 36.213
   */
  protobuf_c_boolean has_simultaneous_ack_nack_cqi;
  uint32_t simultaneous_ack_nack_cqi;
  /*
   * One of the FLACRM_* enum values
   */
  protobuf_c_boolean has_aperiodic_cqi_rep_mode;
  uint32_t aperiodic_cqi_rep_mode;
  /*
   * One of the FLTANFM_* enum values
   */
  protobuf_c_boolean has_tdd_ack_nack_feedback;
  uint32_t tdd_ack_nack_feedback;
  /*
   * See TS 36.213, section 10.1
   */
  protobuf_c_boolean has_ack_nack_repetition_factor;
  uint32_t ack_nack_repetition_factor;
  /*
   * Boolean for extended BSR size
   */
  protobuf_c_boolean has_extended_bsr_size;
  uint32_t extended_bsr_size;
  /*
   * Boolean. Support for carrier aggregation
   */
  protobuf_c_boolean has_ca_support;
  uint32_t ca_support;
  /*
   * Boolean value
   */
  protobuf_c_boolean has_cross_carrier_sched_support;
  uint32_t cross_carrier_sched_support;
  /*
   * Index of primary cell
   */
  protobuf_c_boolean has_pcell_carrier_index;
  uint32_t pcell_carrier_index;
  /*
   * Secondary cells configuration
   */
  size_t n_scell_config;
  Protocol__FlexScellConfig **scell_config;
  /*
   * Deactivation timer for secondary cell
   */
  protobuf_c_boolean has_scell_deactivation_timer;
  uint32_t scell_deactivation_timer;
  protobuf_c_boolean has_imsi;
  uint64_t imsi;
  protobuf_c_boolean has_dl_slice_id;
  uint32_t dl_slice_id;
  protobuf_c_boolean has_ul_slice_id;
  uint32_t ul_slice_id;
};
#define PROTOCOL__FLEX_UE_CONFIG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__flex_ue_config__descriptor) \
    , 0, 0, NULL, 0, 0, 0, 0, 0, 0, NULL, NULL, NULL, 0, 0, 0, 0, 0, 0, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,NULL, 0, 0, 0, 0, 0, 0, 0, 0 }


struct  _Protocol__FlexLcUeConfig
{
  ProtobufCMessage base;
  protobuf_c_boolean has_rnti;
  uint32_t rnti;
  /*
   * A list of LC configurations for the given UE
   */
  size_t n_lc_config;
  Protocol__FlexLcConfig **lc_config;
};
#define PROTOCOL__FLEX_LC_UE_CONFIG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__flex_lc_ue_config__descriptor) \
    , 0, 0, 0,NULL }


/* Protocol__FlexCellConfig methods */
void   protocol__flex_cell_config__init
                     (Protocol__FlexCellConfig         *message);
size_t protocol__flex_cell_config__get_packed_size
                     (const Protocol__FlexCellConfig   *message);
size_t protocol__flex_cell_config__pack
                     (const Protocol__FlexCellConfig   *message,
                      uint8_t             *out);
size_t protocol__flex_cell_config__pack_to_buffer
                     (const Protocol__FlexCellConfig   *message,
                      ProtobufCBuffer     *buffer);
Protocol__FlexCellConfig *
       protocol__flex_cell_config__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__flex_cell_config__free_unpacked
                     (Protocol__FlexCellConfig *message,
                      ProtobufCAllocator *allocator);
/* Protocol__FlexSliceConfig methods */
void   protocol__flex_slice_config__init
                     (Protocol__FlexSliceConfig         *message);
size_t protocol__flex_slice_config__get_packed_size
                     (const Protocol__FlexSliceConfig   *message);
size_t protocol__flex_slice_config__pack
                     (const Protocol__FlexSliceConfig   *message,
                      uint8_t             *out);
size_t protocol__flex_slice_config__pack_to_buffer
                     (const Protocol__FlexSliceConfig   *message,
                      ProtobufCBuffer     *buffer);
Protocol__FlexSliceConfig *
       protocol__flex_slice_config__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__flex_slice_config__free_unpacked
                     (Protocol__FlexSliceConfig *message,
                      ProtobufCAllocator *allocator);
/* Protocol__FlexUeConfig methods */
void   protocol__flex_ue_config__init
                     (Protocol__FlexUeConfig         *message);
size_t protocol__flex_ue_config__get_packed_size
                     (const Protocol__FlexUeConfig   *message);
size_t protocol__flex_ue_config__pack
                     (const Protocol__FlexUeConfig   *message,
                      uint8_t             *out);
size_t protocol__flex_ue_config__pack_to_buffer
                     (const Protocol__FlexUeConfig   *message,
                      ProtobufCBuffer     *buffer);
Protocol__FlexUeConfig *
       protocol__flex_ue_config__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__flex_ue_config__free_unpacked
                     (Protocol__FlexUeConfig *message,
                      ProtobufCAllocator *allocator);
/* Protocol__FlexLcUeConfig methods */
void   protocol__flex_lc_ue_config__init
                     (Protocol__FlexLcUeConfig         *message);
size_t protocol__flex_lc_ue_config__get_packed_size
                     (const Protocol__FlexLcUeConfig   *message);
size_t protocol__flex_lc_ue_config__pack
                     (const Protocol__FlexLcUeConfig   *message,
                      uint8_t             *out);
size_t protocol__flex_lc_ue_config__pack_to_buffer
                     (const Protocol__FlexLcUeConfig   *message,
                      ProtobufCBuffer     *buffer);
Protocol__FlexLcUeConfig *
       protocol__flex_lc_ue_config__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__flex_lc_ue_config__free_unpacked
                     (Protocol__FlexLcUeConfig *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Protocol__FlexCellConfig_Closure)
                 (const Protocol__FlexCellConfig *message,
                  void *closure_data);
typedef void (*Protocol__FlexSliceConfig_Closure)
                 (const Protocol__FlexSliceConfig *message,
                  void *closure_data);
typedef void (*Protocol__FlexUeConfig_Closure)
                 (const Protocol__FlexUeConfig *message,
                  void *closure_data);
typedef void (*Protocol__FlexLcUeConfig_Closure)
                 (const Protocol__FlexLcUeConfig *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor protocol__flex_cell_config__descriptor;
extern const ProtobufCMessageDescriptor protocol__flex_slice_config__descriptor;
extern const ProtobufCMessageDescriptor protocol__flex_ue_config__descriptor;
extern const ProtobufCMessageDescriptor protocol__flex_lc_ue_config__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_config_5fmessages_2eproto__INCLUDED */
