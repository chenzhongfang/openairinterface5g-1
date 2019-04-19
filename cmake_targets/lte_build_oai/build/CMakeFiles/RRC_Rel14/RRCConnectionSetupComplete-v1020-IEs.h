/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_RRCConnectionSetupComplete_v1020_IEs_H_
#define	_RRCConnectionSetupComplete_v1020_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionSetupComplete_v1020_IEs__gummei_Type_r10 {
	RRCConnectionSetupComplete_v1020_IEs__gummei_Type_r10_native	= 0,
	RRCConnectionSetupComplete_v1020_IEs__gummei_Type_r10_mapped	= 1
} e_RRCConnectionSetupComplete_v1020_IEs__gummei_Type_r10;
typedef enum RRCConnectionSetupComplete_v1020_IEs__rlf_InfoAvailable_r10 {
	RRCConnectionSetupComplete_v1020_IEs__rlf_InfoAvailable_r10_true	= 0
} e_RRCConnectionSetupComplete_v1020_IEs__rlf_InfoAvailable_r10;
typedef enum RRCConnectionSetupComplete_v1020_IEs__logMeasAvailable_r10 {
	RRCConnectionSetupComplete_v1020_IEs__logMeasAvailable_r10_true	= 0
} e_RRCConnectionSetupComplete_v1020_IEs__logMeasAvailable_r10;
typedef enum RRCConnectionSetupComplete_v1020_IEs__rn_SubframeConfigReq_r10 {
	RRCConnectionSetupComplete_v1020_IEs__rn_SubframeConfigReq_r10_required	= 0,
	RRCConnectionSetupComplete_v1020_IEs__rn_SubframeConfigReq_r10_notRequired	= 1
} e_RRCConnectionSetupComplete_v1020_IEs__rn_SubframeConfigReq_r10;

/* Forward declarations */
struct RRCConnectionSetupComplete_v1130_IEs;

/* RRCConnectionSetupComplete-v1020-IEs */
typedef struct RRCConnectionSetupComplete_v1020_IEs {
	long	*gummei_Type_r10;	/* OPTIONAL */
	long	*rlf_InfoAvailable_r10;	/* OPTIONAL */
	long	*logMeasAvailable_r10;	/* OPTIONAL */
	long	*rn_SubframeConfigReq_r10;	/* OPTIONAL */
	struct RRCConnectionSetupComplete_v1130_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionSetupComplete_v1020_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_gummei_Type_r10_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_rlf_InfoAvailable_r10_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_logMeasAvailable_r10_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_rn_SubframeConfigReq_r10_9;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionSetupComplete_v1020_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionSetupComplete_v1020_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionSetupComplete_v1020_IEs_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RRCConnectionSetupComplete-v1130-IEs.h"

#endif	/* _RRCConnectionSetupComplete_v1020_IEs_H_ */
#include <asn_internal.h>
