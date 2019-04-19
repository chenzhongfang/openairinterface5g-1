/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_TrackingAreaCodeList_v1130_H_
#define	_TrackingAreaCodeList_v1130_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PLMN_Identity;

/* TrackingAreaCodeList-v1130 */
typedef struct TrackingAreaCodeList_v1130 {
	struct TrackingAreaCodeList_v1130__plmn_Identity_perTAC_List_r11 {
		A_SEQUENCE_OF(struct PLMN_Identity) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} plmn_Identity_perTAC_List_r11;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TrackingAreaCodeList_v1130_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TrackingAreaCodeList_v1130;
extern asn_SEQUENCE_specifics_t asn_SPC_TrackingAreaCodeList_v1130_specs_1;
extern asn_TYPE_member_t asn_MBR_TrackingAreaCodeList_v1130_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PLMN-Identity.h"

#endif	/* _TrackingAreaCodeList_v1130_H_ */
#include <asn_internal.h>
