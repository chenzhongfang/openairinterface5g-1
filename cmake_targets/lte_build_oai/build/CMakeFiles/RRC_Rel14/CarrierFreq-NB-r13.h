/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_CarrierFreq_NB_r13_H_
#define	_CarrierFreq_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueEUTRA-r9.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CarrierFreq_NB_r13__carrierFreqOffset_r13 {
	CarrierFreq_NB_r13__carrierFreqOffset_r13_v_10	= 0,
	CarrierFreq_NB_r13__carrierFreqOffset_r13_v_9	= 1,
	CarrierFreq_NB_r13__carrierFreqOffset_r13_v_8	= 2,
	CarrierFreq_NB_r13__carrierFreqOffset_r13_v_7	= 3,
	CarrierFreq_NB_r13__carrierFreqOffset_r13_v_6	= 4,
	CarrierFreq_NB_r13__carrierFreqOffset_r13_v_5	= 5,
	CarrierFreq_NB_r13__carrierFreqOffset_r13_v_4	= 6,
	CarrierFreq_NB_r13__carrierFreqOffset_r13_v_3	= 7,
	CarrierFreq_NB_r13__carrierFreqOffset_r13_v_2	= 8,
	CarrierFreq_NB_r13__carrierFreqOffset_r13_v_1	= 9,
	CarrierFreq_NB_r13__carrierFreqOffset_r13_v_0dot5	= 10,
	CarrierFreq_NB_r13__carrierFreqOffset_r13_v0	= 11,
	CarrierFreq_NB_r13__carrierFreqOffset_r13_v1	= 12,
	CarrierFreq_NB_r13__carrierFreqOffset_r13_v2	= 13,
	CarrierFreq_NB_r13__carrierFreqOffset_r13_v3	= 14,
	CarrierFreq_NB_r13__carrierFreqOffset_r13_v4	= 15,
	CarrierFreq_NB_r13__carrierFreqOffset_r13_v5	= 16,
	CarrierFreq_NB_r13__carrierFreqOffset_r13_v6	= 17,
	CarrierFreq_NB_r13__carrierFreqOffset_r13_v7	= 18,
	CarrierFreq_NB_r13__carrierFreqOffset_r13_v8	= 19,
	CarrierFreq_NB_r13__carrierFreqOffset_r13_v9	= 20
} e_CarrierFreq_NB_r13__carrierFreqOffset_r13;

/* CarrierFreq-NB-r13 */
typedef struct CarrierFreq_NB_r13 {
	ARFCN_ValueEUTRA_r9_t	 carrierFreq_r13;
	long	*carrierFreqOffset_r13;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CarrierFreq_NB_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_carrierFreqOffset_r13_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CarrierFreq_NB_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_CarrierFreq_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_CarrierFreq_NB_r13_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CarrierFreq_NB_r13_H_ */
#include <asn_internal.h>
