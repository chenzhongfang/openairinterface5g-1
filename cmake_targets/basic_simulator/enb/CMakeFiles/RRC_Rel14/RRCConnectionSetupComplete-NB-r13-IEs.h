/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_RRCConnectionSetupComplete_NB_r13_IEs_H_
#define	_RRCConnectionSetupComplete_NB_r13_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "DedicatedInfoNAS.h"
#include <NativeEnumerated.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionSetupComplete_NB_r13_IEs__attachWithoutPDN_Connectivity_r13 {
	RRCConnectionSetupComplete_NB_r13_IEs__attachWithoutPDN_Connectivity_r13_true	= 0
} e_RRCConnectionSetupComplete_NB_r13_IEs__attachWithoutPDN_Connectivity_r13;
typedef enum RRCConnectionSetupComplete_NB_r13_IEs__up_CIoT_EPS_Optimisation_r13 {
	RRCConnectionSetupComplete_NB_r13_IEs__up_CIoT_EPS_Optimisation_r13_true	= 0
} e_RRCConnectionSetupComplete_NB_r13_IEs__up_CIoT_EPS_Optimisation_r13;

/* Forward declarations */
struct S_TMSI;
struct RegisteredMME;
struct RRCConnectionSetupComplete_NB_v1430_IEs;

/* RRCConnectionSetupComplete-NB-r13-IEs */
typedef struct RRCConnectionSetupComplete_NB_r13_IEs {
	long	 selectedPLMN_Identity_r13;
	struct S_TMSI	*s_TMSI_r13;	/* OPTIONAL */
	struct RegisteredMME	*registeredMME_r13;	/* OPTIONAL */
	DedicatedInfoNAS_t	 dedicatedInfoNAS_r13;
	long	*attachWithoutPDN_Connectivity_r13;	/* OPTIONAL */
	long	*up_CIoT_EPS_Optimisation_r13;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct RRCConnectionSetupComplete_NB_v1430_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionSetupComplete_NB_r13_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_attachWithoutPDN_Connectivity_r13_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_up_CIoT_EPS_Optimisation_r13_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionSetupComplete_NB_r13_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionSetupComplete_NB_r13_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionSetupComplete_NB_r13_IEs_1[8];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "S-TMSI.h"
#include "RegisteredMME.h"
#include "RRCConnectionSetupComplete-NB-v1430-IEs.h"

#endif	/* _RRCConnectionSetupComplete_NB_r13_IEs_H_ */
#include <asn_internal.h>
