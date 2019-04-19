/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_RNReconfiguration_r10_IEs_H_
#define	_RNReconfiguration_r10_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RN_SystemInfo_r10;
struct RN_SubframeConfig_r10;

/* RNReconfiguration-r10-IEs */
typedef struct RNReconfiguration_r10_IEs {
	struct RN_SystemInfo_r10	*rn_SystemInfo_r10;	/* OPTIONAL */
	struct RN_SubframeConfig_r10	*rn_SubframeConfig_r10;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct RNReconfiguration_r10_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RNReconfiguration_r10_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RNReconfiguration_r10_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RNReconfiguration_r10_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RNReconfiguration_r10_IEs_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RN-SystemInfo-r10.h"
#include "RN-SubframeConfig-r10.h"

#endif	/* _RNReconfiguration_r10_IEs_H_ */
#include <asn_internal.h>
