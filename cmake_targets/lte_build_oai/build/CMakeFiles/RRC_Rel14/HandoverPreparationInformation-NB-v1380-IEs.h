/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-InterNodeDefinitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_HandoverPreparationInformation_NB_v1380_IEs_H_
#define	_HandoverPreparationInformation_NB_v1380_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct HandoverPreparationInformation_NB_Ext_r14_IEs;

/* HandoverPreparationInformation-NB-v1380-IEs */
typedef struct HandoverPreparationInformation_NB_v1380_IEs {
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct HandoverPreparationInformation_NB_Ext_r14_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HandoverPreparationInformation_NB_v1380_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HandoverPreparationInformation_NB_v1380_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_HandoverPreparationInformation_NB_v1380_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_HandoverPreparationInformation_NB_v1380_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "HandoverPreparationInformation-NB-Ext-r14-IEs.h"

#endif	/* _HandoverPreparationInformation_NB_v1380_IEs_H_ */
#include <asn_internal.h>
