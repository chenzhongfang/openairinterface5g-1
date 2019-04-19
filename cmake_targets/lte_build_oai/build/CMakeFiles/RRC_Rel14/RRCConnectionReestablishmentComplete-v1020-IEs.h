/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_RRCConnectionReestablishmentComplete_v1020_IEs_H_
#define	_RRCConnectionReestablishmentComplete_v1020_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionReestablishmentComplete_v1020_IEs__logMeasAvailable_r10 {
	RRCConnectionReestablishmentComplete_v1020_IEs__logMeasAvailable_r10_true	= 0
} e_RRCConnectionReestablishmentComplete_v1020_IEs__logMeasAvailable_r10;

/* Forward declarations */
struct RRCConnectionReestablishmentComplete_v1130_IEs;

/* RRCConnectionReestablishmentComplete-v1020-IEs */
typedef struct RRCConnectionReestablishmentComplete_v1020_IEs {
	long	*logMeasAvailable_r10;	/* OPTIONAL */
	struct RRCConnectionReestablishmentComplete_v1130_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReestablishmentComplete_v1020_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_logMeasAvailable_r10_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReestablishmentComplete_v1020_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReestablishmentComplete_v1020_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionReestablishmentComplete_v1020_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RRCConnectionReestablishmentComplete-v1130-IEs.h"

#endif	/* _RRCConnectionReestablishmentComplete_v1020_IEs_H_ */
#include <asn_internal.h>
