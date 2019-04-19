/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_SL_TF_IndexPairList_r12b_H_
#define	_SL_TF_IndexPairList_r12b_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SL_TF_IndexPair_r12b;

/* SL-TF-IndexPairList-r12b */
typedef struct SL_TF_IndexPairList_r12b {
	A_SEQUENCE_OF(struct SL_TF_IndexPair_r12b) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_TF_IndexPairList_r12b_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_TF_IndexPairList_r12b;
extern asn_SET_OF_specifics_t asn_SPC_SL_TF_IndexPairList_r12b_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_TF_IndexPairList_r12b_1[1];
extern asn_per_constraints_t asn_PER_type_SL_TF_IndexPairList_r12b_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SL-TF-IndexPair-r12b.h"

#endif	/* _SL_TF_IndexPairList_r12b_H_ */
#include <asn_internal.h>
