/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_CIOT_EPS_OptimisationInfo_r13_H_
#define	_CIOT_EPS_OptimisationInfo_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CIOT_OptimisationPLMN_r13;

/* CIOT-EPS-OptimisationInfo-r13 */
typedef struct CIOT_EPS_OptimisationInfo_r13 {
	A_SEQUENCE_OF(struct CIOT_OptimisationPLMN_r13) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CIOT_EPS_OptimisationInfo_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CIOT_EPS_OptimisationInfo_r13;
extern asn_SET_OF_specifics_t asn_SPC_CIOT_EPS_OptimisationInfo_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_CIOT_EPS_OptimisationInfo_r13_1[1];
extern asn_per_constraints_t asn_PER_type_CIOT_EPS_OptimisationInfo_r13_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CIOT-OptimisationPLMN-r13.h"

#endif	/* _CIOT_EPS_OptimisationInfo_r13_H_ */
#include <asn_internal.h>
