/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_UE_EUTRA_CapabilityAddXDD_Mode_v1320_H_
#define	_UE_EUTRA_CapabilityAddXDD_Mode_v1320_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PhyLayerParameters_v1320;
struct SCPTM_Parameters_r13;

/* UE-EUTRA-CapabilityAddXDD-Mode-v1320 */
typedef struct UE_EUTRA_CapabilityAddXDD_Mode_v1320 {
	struct PhyLayerParameters_v1320	*phyLayerParameters_v1320;	/* OPTIONAL */
	struct SCPTM_Parameters_r13	*scptm_Parameters_r13;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_CapabilityAddXDD_Mode_v1320_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1320;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_CapabilityAddXDD_Mode_v1320_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_EUTRA_CapabilityAddXDD_Mode_v1320_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PhyLayerParameters-v1320.h"
#include "SCPTM-Parameters-r13.h"

#endif	/* _UE_EUTRA_CapabilityAddXDD_Mode_v1320_H_ */
#include <asn_internal.h>
