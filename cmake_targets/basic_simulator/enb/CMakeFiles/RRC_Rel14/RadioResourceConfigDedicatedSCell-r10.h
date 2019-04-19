/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_RadioResourceConfigDedicatedSCell_r10_H_
#define	_RadioResourceConfigDedicatedSCell_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PhysicalConfigDedicatedSCell_r10;
struct MAC_MainConfigSCell_r11;
struct NAICS_AssistanceInfo_r12;
struct NeighCellsCRS_Info_r13;
struct PhysicalConfigDedicatedSCell_v1370;

/* RadioResourceConfigDedicatedSCell-r10 */
typedef struct RadioResourceConfigDedicatedSCell_r10 {
	struct PhysicalConfigDedicatedSCell_r10	*physicalConfigDedicatedSCell_r10;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct RadioResourceConfigDedicatedSCell_r10__ext1 {
		struct MAC_MainConfigSCell_r11	*mac_MainConfigSCell_r11;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct RadioResourceConfigDedicatedSCell_r10__ext2 {
		struct NAICS_AssistanceInfo_r12	*naics_Info_r12;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct RadioResourceConfigDedicatedSCell_r10__ext3 {
		struct NeighCellsCRS_Info_r13	*neighCellsCRS_InfoSCell_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	struct RadioResourceConfigDedicatedSCell_r10__ext4 {
		struct PhysicalConfigDedicatedSCell_v1370	*physicalConfigDedicatedSCell_v1370;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext4;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadioResourceConfigDedicatedSCell_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RadioResourceConfigDedicatedSCell_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_RadioResourceConfigDedicatedSCell_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_RadioResourceConfigDedicatedSCell_r10_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PhysicalConfigDedicatedSCell-r10.h"
#include "MAC-MainConfigSCell-r11.h"
#include "NAICS-AssistanceInfo-r12.h"
#include "NeighCellsCRS-Info-r13.h"
#include "PhysicalConfigDedicatedSCell-v1370.h"

#endif	/* _RadioResourceConfigDedicatedSCell_r10_H_ */
#include <asn_internal.h>
