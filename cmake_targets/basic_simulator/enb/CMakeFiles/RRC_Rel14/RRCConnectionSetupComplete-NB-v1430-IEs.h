/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_RRCConnectionSetupComplete_NB_v1430_IEs_H_
#define	_RRCConnectionSetupComplete_NB_v1430_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionSetupComplete_NB_v1430_IEs__gummei_Type_r14 {
	RRCConnectionSetupComplete_NB_v1430_IEs__gummei_Type_r14_mapped	= 0
} e_RRCConnectionSetupComplete_NB_v1430_IEs__gummei_Type_r14;

/* Forward declarations */
struct RRCConnectionSetupComplete_NB_v1470_IEs;

/* RRCConnectionSetupComplete-NB-v1430-IEs */
typedef struct RRCConnectionSetupComplete_NB_v1430_IEs {
	long	*gummei_Type_r14;	/* OPTIONAL */
	long	*dcn_ID_r14;	/* OPTIONAL */
	struct RRCConnectionSetupComplete_NB_v1470_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionSetupComplete_NB_v1430_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_gummei_Type_r14_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionSetupComplete_NB_v1430_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionSetupComplete_NB_v1430_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionSetupComplete_NB_v1430_IEs_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RRCConnectionSetupComplete-NB-v1470-IEs.h"

#endif	/* _RRCConnectionSetupComplete_NB_v1430_IEs_H_ */
#include <asn_internal.h>
