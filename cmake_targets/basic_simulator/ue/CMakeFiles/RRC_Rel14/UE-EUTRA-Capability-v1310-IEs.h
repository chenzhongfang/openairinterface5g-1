/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_UE_EUTRA_Capability_v1310_IEs_H_
#define	_UE_EUTRA_Capability_v1310_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "PDCP-Parameters-v1310.h"
#include "RLC-Parameters-v1310.h"
#include "IRAT-ParametersWLAN-r13.h"
#include "WLAN-IW-Parameters-v1310.h"
#include "LWIP-Parameters-r13.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UE_EUTRA_Capability_v1310_IEs__ue_CategoryDL_v1310 {
	UE_EUTRA_Capability_v1310_IEs__ue_CategoryDL_v1310_n17	= 0,
	UE_EUTRA_Capability_v1310_IEs__ue_CategoryDL_v1310_m1	= 1
} e_UE_EUTRA_Capability_v1310_IEs__ue_CategoryDL_v1310;
typedef enum UE_EUTRA_Capability_v1310_IEs__ue_CategoryUL_v1310 {
	UE_EUTRA_Capability_v1310_IEs__ue_CategoryUL_v1310_n14	= 0,
	UE_EUTRA_Capability_v1310_IEs__ue_CategoryUL_v1310_m1	= 1
} e_UE_EUTRA_Capability_v1310_IEs__ue_CategoryUL_v1310;

/* Forward declarations */
struct MAC_Parameters_v1310;
struct PhyLayerParameters_v1310;
struct RF_Parameters_v1310;
struct MeasParameters_v1310;
struct DC_Parameters_v1310;
struct SL_Parameters_v1310;
struct SCPTM_Parameters_r13;
struct CE_Parameters_r13;
struct LAA_Parameters_r13;
struct LWA_Parameters_r13;
struct UE_EUTRA_CapabilityAddXDD_Mode_v1310;
struct UE_EUTRA_Capability_v1320_IEs;

/* UE-EUTRA-Capability-v1310-IEs */
typedef struct UE_EUTRA_Capability_v1310_IEs {
	long	*ue_CategoryDL_v1310;	/* OPTIONAL */
	long	*ue_CategoryUL_v1310;	/* OPTIONAL */
	PDCP_Parameters_v1310_t	 pdcp_Parameters_v1310;
	RLC_Parameters_v1310_t	 rlc_Parameters_v1310;
	struct MAC_Parameters_v1310	*mac_Parameters_v1310;	/* OPTIONAL */
	struct PhyLayerParameters_v1310	*phyLayerParameters_v1310;	/* OPTIONAL */
	struct RF_Parameters_v1310	*rf_Parameters_v1310;	/* OPTIONAL */
	struct MeasParameters_v1310	*measParameters_v1310;	/* OPTIONAL */
	struct DC_Parameters_v1310	*dc_Parameters_v1310;	/* OPTIONAL */
	struct SL_Parameters_v1310	*sl_Parameters_v1310;	/* OPTIONAL */
	struct SCPTM_Parameters_r13	*scptm_Parameters_r13;	/* OPTIONAL */
	struct CE_Parameters_r13	*ce_Parameters_r13;	/* OPTIONAL */
	IRAT_ParametersWLAN_r13_t	 interRAT_ParametersWLAN_r13;
	struct LAA_Parameters_r13	*laa_Parameters_r13;	/* OPTIONAL */
	struct LWA_Parameters_r13	*lwa_Parameters_r13;	/* OPTIONAL */
	WLAN_IW_Parameters_v1310_t	 wlan_IW_Parameters_v1310;
	LWIP_Parameters_r13_t	 lwip_Parameters_r13;
	struct UE_EUTRA_CapabilityAddXDD_Mode_v1310	*fdd_Add_UE_EUTRA_Capabilities_v1310;	/* OPTIONAL */
	struct UE_EUTRA_CapabilityAddXDD_Mode_v1310	*tdd_Add_UE_EUTRA_Capabilities_v1310;	/* OPTIONAL */
	struct UE_EUTRA_Capability_v1320_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_Capability_v1310_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ue_CategoryDL_v1310_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ue_CategoryUL_v1310_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v1310_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_Capability_v1310_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_EUTRA_Capability_v1310_IEs_1[20];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MAC-Parameters-v1310.h"
#include "PhyLayerParameters-v1310.h"
#include "RF-Parameters-v1310.h"
#include "MeasParameters-v1310.h"
#include "DC-Parameters-v1310.h"
#include "SL-Parameters-v1310.h"
#include "SCPTM-Parameters-r13.h"
#include "CE-Parameters-r13.h"
#include "LAA-Parameters-r13.h"
#include "LWA-Parameters-r13.h"
#include "UE-EUTRA-CapabilityAddXDD-Mode-v1310.h"
#include "UE-EUTRA-Capability-v1320-IEs.h"

#endif	/* _UE_EUTRA_Capability_v1310_IEs_H_ */
#include <asn_internal.h>
