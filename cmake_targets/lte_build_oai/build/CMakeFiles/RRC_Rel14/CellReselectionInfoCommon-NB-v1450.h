/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_CellReselectionInfoCommon_NB_v1450_H_
#define	_CellReselectionInfoCommon_NB_v1450_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CellReselectionInfoCommon_NB_v1450__s_SearchDeltaP_r14 {
	CellReselectionInfoCommon_NB_v1450__s_SearchDeltaP_r14_dB6	= 0,
	CellReselectionInfoCommon_NB_v1450__s_SearchDeltaP_r14_dB9	= 1,
	CellReselectionInfoCommon_NB_v1450__s_SearchDeltaP_r14_dB12	= 2,
	CellReselectionInfoCommon_NB_v1450__s_SearchDeltaP_r14_dB15	= 3
} e_CellReselectionInfoCommon_NB_v1450__s_SearchDeltaP_r14;

/* CellReselectionInfoCommon-NB-v1450 */
typedef struct CellReselectionInfoCommon_NB_v1450 {
	long	 s_SearchDeltaP_r14;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellReselectionInfoCommon_NB_v1450_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_s_SearchDeltaP_r14_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CellReselectionInfoCommon_NB_v1450;
extern asn_SEQUENCE_specifics_t asn_SPC_CellReselectionInfoCommon_NB_v1450_specs_1;
extern asn_TYPE_member_t asn_MBR_CellReselectionInfoCommon_NB_v1450_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _CellReselectionInfoCommon_NB_v1450_H_ */
#include <asn_internal.h>
