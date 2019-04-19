/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_RRCConnectionSetupComplete_v1320_IEs_H_
#define	_RRCConnectionSetupComplete_v1320_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionSetupComplete_v1320_IEs__ce_ModeB_r13 {
	RRCConnectionSetupComplete_v1320_IEs__ce_ModeB_r13_supported	= 0
} e_RRCConnectionSetupComplete_v1320_IEs__ce_ModeB_r13;
typedef enum RRCConnectionSetupComplete_v1320_IEs__attachWithoutPDN_Connectivity_r13 {
	RRCConnectionSetupComplete_v1320_IEs__attachWithoutPDN_Connectivity_r13_true	= 0
} e_RRCConnectionSetupComplete_v1320_IEs__attachWithoutPDN_Connectivity_r13;
typedef enum RRCConnectionSetupComplete_v1320_IEs__up_CIoT_EPS_Optimisation_r13 {
	RRCConnectionSetupComplete_v1320_IEs__up_CIoT_EPS_Optimisation_r13_true	= 0
} e_RRCConnectionSetupComplete_v1320_IEs__up_CIoT_EPS_Optimisation_r13;
typedef enum RRCConnectionSetupComplete_v1320_IEs__cp_CIoT_EPS_Optimisation_r13 {
	RRCConnectionSetupComplete_v1320_IEs__cp_CIoT_EPS_Optimisation_r13_true	= 0
} e_RRCConnectionSetupComplete_v1320_IEs__cp_CIoT_EPS_Optimisation_r13;

/* Forward declarations */
struct S_TMSI;
struct RRCConnectionSetupComplete_v1330_IEs;

/* RRCConnectionSetupComplete-v1320-IEs */
typedef struct RRCConnectionSetupComplete_v1320_IEs {
	long	*ce_ModeB_r13;	/* OPTIONAL */
	struct S_TMSI	*s_TMSI_r13;	/* OPTIONAL */
	long	*attachWithoutPDN_Connectivity_r13;	/* OPTIONAL */
	long	*up_CIoT_EPS_Optimisation_r13;	/* OPTIONAL */
	long	*cp_CIoT_EPS_Optimisation_r13;	/* OPTIONAL */
	struct RRCConnectionSetupComplete_v1330_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionSetupComplete_v1320_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ce_ModeB_r13_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_attachWithoutPDN_Connectivity_r13_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_up_CIoT_EPS_Optimisation_r13_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_cp_CIoT_EPS_Optimisation_r13_9;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionSetupComplete_v1320_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionSetupComplete_v1320_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionSetupComplete_v1320_IEs_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "S-TMSI.h"
#include "RRCConnectionSetupComplete-v1330-IEs.h"

#endif	/* _RRCConnectionSetupComplete_v1320_IEs_H_ */
#include <asn_internal.h>
