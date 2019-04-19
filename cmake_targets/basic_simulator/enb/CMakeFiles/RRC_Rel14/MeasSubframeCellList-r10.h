/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_MeasSubframeCellList_r10_H_
#define	_MeasSubframeCellList_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PhysCellIdRange;

/* MeasSubframeCellList-r10 */
typedef struct MeasSubframeCellList_r10 {
	A_SEQUENCE_OF(struct PhysCellIdRange) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasSubframeCellList_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasSubframeCellList_r10;
extern asn_SET_OF_specifics_t asn_SPC_MeasSubframeCellList_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasSubframeCellList_r10_1[1];
extern asn_per_constraints_t asn_PER_type_MeasSubframeCellList_r10_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PhysCellIdRange.h"

#endif	/* _MeasSubframeCellList_r10_H_ */
#include <asn_internal.h>
