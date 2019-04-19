/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_RadioResourceConfigDedicated_H_
#define	_RadioResourceConfigDedicated_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MAC-MainConfig.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RadioResourceConfigDedicated__mac_MainConfig_PR {
	RadioResourceConfigDedicated__mac_MainConfig_PR_NOTHING,	/* No components present */
	RadioResourceConfigDedicated__mac_MainConfig_PR_explicitValue,
	RadioResourceConfigDedicated__mac_MainConfig_PR_defaultValue
} RadioResourceConfigDedicated__mac_MainConfig_PR;

/* Forward declarations */
struct SRB_ToAddModList;
struct DRB_ToAddModList;
struct DRB_ToReleaseList;
struct SPS_Config;
struct PhysicalConfigDedicated;
struct RLF_TimersAndConstants_r9;
struct MeasSubframePatternPCell_r10;
struct NeighCellsCRS_Info_r11;
struct NAICS_AssistanceInfo_r12;
struct NeighCellsCRS_Info_r13;
struct RLF_TimersAndConstants_r13;
struct SPS_Config_v1430;

/* RadioResourceConfigDedicated */
typedef struct RadioResourceConfigDedicated {
	struct SRB_ToAddModList	*srb_ToAddModList;	/* OPTIONAL */
	struct DRB_ToAddModList	*drb_ToAddModList;	/* OPTIONAL */
	struct DRB_ToReleaseList	*drb_ToReleaseList;	/* OPTIONAL */
	struct RadioResourceConfigDedicated__mac_MainConfig {
		RadioResourceConfigDedicated__mac_MainConfig_PR present;
		union RadioResourceConfigDedicated__mac_MainConfig_u {
			MAC_MainConfig_t	 explicitValue;
			NULL_t	 defaultValue;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *mac_MainConfig;
	struct SPS_Config	*sps_Config;	/* OPTIONAL */
	struct PhysicalConfigDedicated	*physicalConfigDedicated;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct RadioResourceConfigDedicated__ext1 {
		struct RLF_TimersAndConstants_r9	*rlf_TimersAndConstants_r9;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct RadioResourceConfigDedicated__ext2 {
		struct MeasSubframePatternPCell_r10	*measSubframePatternPCell_r10;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct RadioResourceConfigDedicated__ext3 {
		struct NeighCellsCRS_Info_r11	*neighCellsCRS_Info_r11;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	struct RadioResourceConfigDedicated__ext4 {
		struct NAICS_AssistanceInfo_r12	*naics_Info_r12;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext4;
	struct RadioResourceConfigDedicated__ext5 {
		struct NeighCellsCRS_Info_r13	*neighCellsCRS_Info_r13;	/* OPTIONAL */
		struct RLF_TimersAndConstants_r13	*rlf_TimersAndConstants_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext5;
	struct RadioResourceConfigDedicated__ext6 {
		struct SPS_Config_v1430	*sps_Config_v1430;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext6;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadioResourceConfigDedicated_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RadioResourceConfigDedicated;
extern asn_SEQUENCE_specifics_t asn_SPC_RadioResourceConfigDedicated_specs_1;
extern asn_TYPE_member_t asn_MBR_RadioResourceConfigDedicated_1[12];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SRB-ToAddModList.h"
#include "DRB-ToAddModList.h"
#include "DRB-ToReleaseList.h"
#include "SPS-Config.h"
#include "PhysicalConfigDedicated.h"
#include "RLF-TimersAndConstants-r9.h"
#include "MeasSubframePatternPCell-r10.h"
#include "NeighCellsCRS-Info-r11.h"
#include "NAICS-AssistanceInfo-r12.h"
#include "NeighCellsCRS-Info-r13.h"
#include "RLF-TimersAndConstants-r13.h"
#include "SPS-Config-v1430.h"

#endif	/* _RadioResourceConfigDedicated_H_ */
#include <asn_internal.h>
