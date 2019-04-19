/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_CellInfoListGERAN_r9_H_
#define	_CellInfoListGERAN_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CellInfoGERAN_r9;

/* CellInfoListGERAN-r9 */
typedef struct CellInfoListGERAN_r9 {
	A_SEQUENCE_OF(struct CellInfoGERAN_r9) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellInfoListGERAN_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellInfoListGERAN_r9;
extern asn_SET_OF_specifics_t asn_SPC_CellInfoListGERAN_r9_specs_1;
extern asn_TYPE_member_t asn_MBR_CellInfoListGERAN_r9_1[1];
extern asn_per_constraints_t asn_PER_type_CellInfoListGERAN_r9_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CellInfoGERAN-r9.h"

#endif	/* _CellInfoListGERAN_r9_H_ */
#include <asn_internal.h>
