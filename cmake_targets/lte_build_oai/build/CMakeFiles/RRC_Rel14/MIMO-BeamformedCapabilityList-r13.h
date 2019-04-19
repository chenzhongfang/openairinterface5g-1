/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_MIMO_BeamformedCapabilityList_r13_H_
#define	_MIMO_BeamformedCapabilityList_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MIMO_BeamformedCapabilities_r13;

/* MIMO-BeamformedCapabilityList-r13 */
typedef struct MIMO_BeamformedCapabilityList_r13 {
	A_SEQUENCE_OF(struct MIMO_BeamformedCapabilities_r13) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MIMO_BeamformedCapabilityList_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MIMO_BeamformedCapabilityList_r13;
extern asn_SET_OF_specifics_t asn_SPC_MIMO_BeamformedCapabilityList_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_MIMO_BeamformedCapabilityList_r13_1[1];
extern asn_per_constraints_t asn_PER_type_MIMO_BeamformedCapabilityList_r13_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MIMO-BeamformedCapabilities-r13.h"

#endif	/* _MIMO_BeamformedCapabilityList_r13_H_ */
#include <asn_internal.h>
