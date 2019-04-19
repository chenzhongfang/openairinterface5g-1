/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_PRACH_ParametersListCE_r13_H_
#define	_PRACH_ParametersListCE_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PRACH_ParametersCE_r13;

/* PRACH-ParametersListCE-r13 */
typedef struct PRACH_ParametersListCE_r13 {
	A_SEQUENCE_OF(struct PRACH_ParametersCE_r13) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PRACH_ParametersListCE_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PRACH_ParametersListCE_r13;
extern asn_SET_OF_specifics_t asn_SPC_PRACH_ParametersListCE_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_PRACH_ParametersListCE_r13_1[1];
extern asn_per_constraints_t asn_PER_type_PRACH_ParametersListCE_r13_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PRACH-ParametersCE-r13.h"

#endif	/* _PRACH_ParametersListCE_r13_H_ */
#include <asn_internal.h>
