/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_RadioResourceConfigDedicatedPSCell_r12_H_
#define	_RadioResourceConfigDedicatedPSCell_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PhysicalConfigDedicated;
struct SPS_Config;
struct NAICS_AssistanceInfo_r12;
struct NeighCellsCRS_Info_r13;
struct SPS_Config_v1430;

/* RadioResourceConfigDedicatedPSCell-r12 */
typedef struct RadioResourceConfigDedicatedPSCell_r12 {
	struct PhysicalConfigDedicated	*physicalConfigDedicatedPSCell_r12;	/* OPTIONAL */
	struct SPS_Config	*sps_Config_r12;	/* OPTIONAL */
	struct NAICS_AssistanceInfo_r12	*naics_Info_r12;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct RadioResourceConfigDedicatedPSCell_r12__ext1 {
		struct NeighCellsCRS_Info_r13	*neighCellsCRS_InfoPSCell_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct RadioResourceConfigDedicatedPSCell_r12__ext2 {
		struct SPS_Config_v1430	*sps_Config_v1430;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadioResourceConfigDedicatedPSCell_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RadioResourceConfigDedicatedPSCell_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_RadioResourceConfigDedicatedPSCell_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_RadioResourceConfigDedicatedPSCell_r12_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PhysicalConfigDedicated.h"
#include "SPS-Config.h"
#include "NAICS-AssistanceInfo-r12.h"
#include "NeighCellsCRS-Info-r13.h"
#include "SPS-Config-v1430.h"

#endif	/* _RadioResourceConfigDedicatedPSCell_r12_H_ */
#include <asn_internal.h>
