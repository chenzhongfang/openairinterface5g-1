/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_PDSCH_ConfigDedicated_v1280_H_
#define	_PDSCH_ConfigDedicated_v1280_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PDSCH_ConfigDedicated_v1280__tbsIndexAlt_r12 {
	PDSCH_ConfigDedicated_v1280__tbsIndexAlt_r12_a26	= 0,
	PDSCH_ConfigDedicated_v1280__tbsIndexAlt_r12_a33	= 1
} e_PDSCH_ConfigDedicated_v1280__tbsIndexAlt_r12;

/* PDSCH-ConfigDedicated-v1280 */
typedef struct PDSCH_ConfigDedicated_v1280 {
	long	*tbsIndexAlt_r12;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDSCH_ConfigDedicated_v1280_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_tbsIndexAlt_r12_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PDSCH_ConfigDedicated_v1280;
extern asn_SEQUENCE_specifics_t asn_SPC_PDSCH_ConfigDedicated_v1280_specs_1;
extern asn_TYPE_member_t asn_MBR_PDSCH_ConfigDedicated_v1280_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _PDSCH_ConfigDedicated_v1280_H_ */
#include <asn_internal.h>
