/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_MeasParameters_v1310_H_
#define	_MeasParameters_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasParameters_v1310__rs_SINR_Meas_r13 {
	MeasParameters_v1310__rs_SINR_Meas_r13_supported	= 0
} e_MeasParameters_v1310__rs_SINR_Meas_r13;
typedef enum MeasParameters_v1310__whiteCellList_r13 {
	MeasParameters_v1310__whiteCellList_r13_supported	= 0
} e_MeasParameters_v1310__whiteCellList_r13;
typedef enum MeasParameters_v1310__extendedMaxObjectId_r13 {
	MeasParameters_v1310__extendedMaxObjectId_r13_supported	= 0
} e_MeasParameters_v1310__extendedMaxObjectId_r13;
typedef enum MeasParameters_v1310__ul_PDCP_Delay_r13 {
	MeasParameters_v1310__ul_PDCP_Delay_r13_supported	= 0
} e_MeasParameters_v1310__ul_PDCP_Delay_r13;
typedef enum MeasParameters_v1310__extendedFreqPriorities_r13 {
	MeasParameters_v1310__extendedFreqPriorities_r13_supported	= 0
} e_MeasParameters_v1310__extendedFreqPriorities_r13;
typedef enum MeasParameters_v1310__multiBandInfoReport_r13 {
	MeasParameters_v1310__multiBandInfoReport_r13_supported	= 0
} e_MeasParameters_v1310__multiBandInfoReport_r13;
typedef enum MeasParameters_v1310__rssi_AndChannelOccupancyReporting_r13 {
	MeasParameters_v1310__rssi_AndChannelOccupancyReporting_r13_supported	= 0
} e_MeasParameters_v1310__rssi_AndChannelOccupancyReporting_r13;

/* MeasParameters-v1310 */
typedef struct MeasParameters_v1310 {
	long	*rs_SINR_Meas_r13;	/* OPTIONAL */
	long	*whiteCellList_r13;	/* OPTIONAL */
	long	*extendedMaxObjectId_r13;	/* OPTIONAL */
	long	*ul_PDCP_Delay_r13;	/* OPTIONAL */
	long	*extendedFreqPriorities_r13;	/* OPTIONAL */
	long	*multiBandInfoReport_r13;	/* OPTIONAL */
	long	*rssi_AndChannelOccupancyReporting_r13;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasParameters_v1310_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_rs_SINR_Meas_r13_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_whiteCellList_r13_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_extendedMaxObjectId_r13_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ul_PDCP_Delay_r13_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_extendedFreqPriorities_r13_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_multiBandInfoReport_r13_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_rssi_AndChannelOccupancyReporting_r13_14;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MeasParameters_v1310;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasParameters_v1310_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasParameters_v1310_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasParameters_v1310_H_ */
#include <asn_internal.h>
