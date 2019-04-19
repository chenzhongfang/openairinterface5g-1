/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_InDeviceCoexIndication_v1360_IEs_H_
#define	_InDeviceCoexIndication_v1360_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum InDeviceCoexIndication_v1360_IEs__hardwareSharingProblem_r13 {
	InDeviceCoexIndication_v1360_IEs__hardwareSharingProblem_r13_true	= 0
} e_InDeviceCoexIndication_v1360_IEs__hardwareSharingProblem_r13;

/* InDeviceCoexIndication-v1360-IEs */
typedef struct InDeviceCoexIndication_v1360_IEs {
	long	*hardwareSharingProblem_r13;	/* OPTIONAL */
	struct InDeviceCoexIndication_v1360_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InDeviceCoexIndication_v1360_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_hardwareSharingProblem_r13_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_InDeviceCoexIndication_v1360_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_InDeviceCoexIndication_v1360_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_InDeviceCoexIndication_v1360_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _InDeviceCoexIndication_v1360_IEs_H_ */
#include <asn_internal.h>
