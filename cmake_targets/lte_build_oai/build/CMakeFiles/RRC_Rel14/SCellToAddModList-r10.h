/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_SCellToAddModList_r10_H_
#define	_SCellToAddModList_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SCellToAddMod_r10;

/* SCellToAddModList-r10 */
typedef struct SCellToAddModList_r10 {
	A_SEQUENCE_OF(struct SCellToAddMod_r10) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SCellToAddModList_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SCellToAddModList_r10;
extern asn_SET_OF_specifics_t asn_SPC_SCellToAddModList_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_SCellToAddModList_r10_1[1];
extern asn_per_constraints_t asn_PER_type_SCellToAddModList_r10_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SCellToAddMod-r10.h"

#endif	/* _SCellToAddModList_r10_H_ */
#include <asn_internal.h>
