/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_HandoverFromEUTRAPreparationRequest_v890_IEs_H_
#define	_HandoverFromEUTRAPreparationRequest_v890_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct HandoverFromEUTRAPreparationRequest_v920_IEs;

/* HandoverFromEUTRAPreparationRequest-v890-IEs */
typedef struct HandoverFromEUTRAPreparationRequest_v890_IEs {
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct HandoverFromEUTRAPreparationRequest_v920_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HandoverFromEUTRAPreparationRequest_v890_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HandoverFromEUTRAPreparationRequest_v890_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_HandoverFromEUTRAPreparationRequest_v890_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_HandoverFromEUTRAPreparationRequest_v890_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "HandoverFromEUTRAPreparationRequest-v920-IEs.h"

#endif	/* _HandoverFromEUTRAPreparationRequest_v890_IEs_H_ */
#include <asn_internal.h>
