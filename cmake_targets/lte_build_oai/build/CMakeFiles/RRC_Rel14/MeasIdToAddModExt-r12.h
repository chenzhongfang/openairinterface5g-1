/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_MeasIdToAddModExt_r12_H_
#define	_MeasIdToAddModExt_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasId-v1250.h"
#include "MeasObjectId.h"
#include "ReportConfigId.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MeasIdToAddModExt-r12 */
typedef struct MeasIdToAddModExt_r12 {
	MeasId_v1250_t	 measId_v1250;
	MeasObjectId_t	 measObjectId_r12;
	ReportConfigId_t	 reportConfigId_r12;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasIdToAddModExt_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasIdToAddModExt_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasIdToAddModExt_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasIdToAddModExt_r12_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasIdToAddModExt_r12_H_ */
#include <asn_internal.h>
