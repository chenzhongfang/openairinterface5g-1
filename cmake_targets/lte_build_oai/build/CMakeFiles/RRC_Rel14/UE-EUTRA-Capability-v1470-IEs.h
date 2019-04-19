/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_UE_EUTRA_Capability_v1470_IEs_H_
#define	_UE_EUTRA_Capability_v1470_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MBMS_Parameters_v1470;
struct PhyLayerParameters_v1470;
struct RF_Parameters_v1470;

/* UE-EUTRA-Capability-v1470-IEs */
typedef struct UE_EUTRA_Capability_v1470_IEs {
	struct MBMS_Parameters_v1470	*mbms_Parameters_v1470;	/* OPTIONAL */
	struct PhyLayerParameters_v1470	*phyLayerParameters_v1470;	/* OPTIONAL */
	struct RF_Parameters_v1470	*rf_Parameters_v1470;	/* OPTIONAL */
	struct UE_EUTRA_Capability_v1470_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_Capability_v1470_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v1470_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_Capability_v1470_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_EUTRA_Capability_v1470_IEs_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MBMS-Parameters-v1470.h"
#include "PhyLayerParameters-v1470.h"
#include "RF-Parameters-v1470.h"

#endif	/* _UE_EUTRA_Capability_v1470_IEs_H_ */
#include <asn_internal.h>