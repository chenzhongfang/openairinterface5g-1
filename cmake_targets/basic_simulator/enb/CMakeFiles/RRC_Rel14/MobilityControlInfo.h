/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_MobilityControlInfo_H_
#define	_MobilityControlInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PhysCellId.h"
#include "AdditionalSpectrumEmission.h"
#include <NativeEnumerated.h>
#include "C-RNTI.h"
#include "RadioResourceConfigCommon.h"
#include <constr_SEQUENCE.h>
#include <BOOLEAN.h>
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MobilityControlInfo__t304 {
	MobilityControlInfo__t304_ms50	= 0,
	MobilityControlInfo__t304_ms100	= 1,
	MobilityControlInfo__t304_ms150	= 2,
	MobilityControlInfo__t304_ms200	= 3,
	MobilityControlInfo__t304_ms500	= 4,
	MobilityControlInfo__t304_ms1000	= 5,
	MobilityControlInfo__t304_ms2000	= 6,
	MobilityControlInfo__t304_ms10000_v1310	= 7
} e_MobilityControlInfo__t304;
typedef enum MobilityControlInfo__ext2__drb_ContinueROHC_r11 {
	MobilityControlInfo__ext2__drb_ContinueROHC_r11_true	= 0
} e_MobilityControlInfo__ext2__drb_ContinueROHC_r11;
typedef enum MobilityControlInfo__ext3__handoverWithoutWT_Change_r14 {
	MobilityControlInfo__ext3__handoverWithoutWT_Change_r14_keepLWA_Config	= 0,
	MobilityControlInfo__ext3__handoverWithoutWT_Change_r14_sendEndMarker	= 1
} e_MobilityControlInfo__ext3__handoverWithoutWT_Change_r14;
typedef enum MobilityControlInfo__ext3__makeBeforeBreak_r14 {
	MobilityControlInfo__ext3__makeBeforeBreak_r14_true	= 0
} e_MobilityControlInfo__ext3__makeBeforeBreak_r14;
typedef enum MobilityControlInfo__ext3__sameSFN_Indication_r14 {
	MobilityControlInfo__ext3__sameSFN_Indication_r14_true	= 0
} e_MobilityControlInfo__ext3__sameSFN_Indication_r14;

/* Forward declarations */
struct CarrierFreqEUTRA;
struct CarrierBandwidthEUTRA;
struct RACH_ConfigDedicated;
struct CarrierFreqEUTRA_v9e0;
struct MobilityControlInfoV2X_r14;
struct RACH_Skip_r14;

/* MobilityControlInfo */
typedef struct MobilityControlInfo {
	PhysCellId_t	 targetPhysCellId;
	struct CarrierFreqEUTRA	*carrierFreq;	/* OPTIONAL */
	struct CarrierBandwidthEUTRA	*carrierBandwidth;	/* OPTIONAL */
	AdditionalSpectrumEmission_t	*additionalSpectrumEmission;	/* OPTIONAL */
	long	 t304;
	C_RNTI_t	 newUE_Identity;
	RadioResourceConfigCommon_t	 radioResourceConfigCommon;
	struct RACH_ConfigDedicated	*rach_ConfigDedicated;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct MobilityControlInfo__ext1 {
		struct CarrierFreqEUTRA_v9e0	*carrierFreq_v9e0;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct MobilityControlInfo__ext2 {
		long	*drb_ContinueROHC_r11;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct MobilityControlInfo__ext3 {
		struct MobilityControlInfoV2X_r14	*mobilityControlInfoV2X_r14;	/* OPTIONAL */
		long	*handoverWithoutWT_Change_r14;	/* OPTIONAL */
		long	*makeBeforeBreak_r14;	/* OPTIONAL */
		struct RACH_Skip_r14	*rach_Skip_r14;	/* OPTIONAL */
		long	*sameSFN_Indication_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	struct MobilityControlInfo__ext4 {
		BOOLEAN_t	*mib_RepetitionStatus_r14;	/* OPTIONAL */
		long	*schedulingInfoSIB1_BR_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext4;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MobilityControlInfo_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_t304_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_drb_ContinueROHC_r11_22;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_handoverWithoutWT_Change_r14_26;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_makeBeforeBreak_r14_29;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sameSFN_Indication_r14_32;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MobilityControlInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_MobilityControlInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_MobilityControlInfo_1[12];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CarrierFreqEUTRA.h"
#include "CarrierBandwidthEUTRA.h"
#include "RACH-ConfigDedicated.h"
#include "CarrierFreqEUTRA-v9e0.h"
#include "MobilityControlInfoV2X-r14.h"
#include "RACH-Skip-r14.h"

#endif	/* _MobilityControlInfo_H_ */
#include <asn_internal.h>
