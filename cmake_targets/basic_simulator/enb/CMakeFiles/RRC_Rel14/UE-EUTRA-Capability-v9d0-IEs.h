/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_UE_EUTRA_Capability_v9d0_IEs_H_
#define	_UE_EUTRA_Capability_v9d0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PhyLayerParameters_v9d0;
struct UE_EUTRA_Capability_v9e0_IEs;

/* UE-EUTRA-Capability-v9d0-IEs */
typedef struct UE_EUTRA_Capability_v9d0_IEs {
	struct PhyLayerParameters_v9d0	*phyLayerParameters_v9d0;	/* OPTIONAL */
	struct UE_EUTRA_Capability_v9e0_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_Capability_v9d0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v9d0_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_Capability_v9d0_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_EUTRA_Capability_v9d0_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PhyLayerParameters-v9d0.h"
#include "UE-EUTRA-Capability-v9e0-IEs.h"

#endif	/* _UE_EUTRA_Capability_v9d0_IEs_H_ */
#include <asn_internal.h>
