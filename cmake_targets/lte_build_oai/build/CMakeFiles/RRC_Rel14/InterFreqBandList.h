/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_InterFreqBandList_H_
#define	_InterFreqBandList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct InterFreqBandInfo;

/* InterFreqBandList */
typedef struct InterFreqBandList {
	A_SEQUENCE_OF(struct InterFreqBandInfo) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqBandList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqBandList;
extern asn_SET_OF_specifics_t asn_SPC_InterFreqBandList_specs_1;
extern asn_TYPE_member_t asn_MBR_InterFreqBandList_1[1];
extern asn_per_constraints_t asn_PER_type_InterFreqBandList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "InterFreqBandInfo.h"

#endif	/* _InterFreqBandList_H_ */
#include <asn_internal.h>
