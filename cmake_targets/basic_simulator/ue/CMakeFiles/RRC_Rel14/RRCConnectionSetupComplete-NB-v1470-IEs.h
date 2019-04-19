/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_RRCConnectionSetupComplete_NB_v1470_IEs_H_
#define	_RRCConnectionSetupComplete_NB_v1470_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasResultServCell_NB_r14;

/* RRCConnectionSetupComplete-NB-v1470-IEs */
typedef struct RRCConnectionSetupComplete_NB_v1470_IEs {
	struct MeasResultServCell_NB_r14	*measResultServCell_r14;	/* OPTIONAL */
	struct RRCConnectionSetupComplete_NB_v1470_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionSetupComplete_NB_v1470_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionSetupComplete_NB_v1470_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionSetupComplete_NB_v1470_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionSetupComplete_NB_v1470_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasResultServCell-NB-r14.h"

#endif	/* _RRCConnectionSetupComplete_NB_v1470_IEs_H_ */
#include <asn_internal.h>
