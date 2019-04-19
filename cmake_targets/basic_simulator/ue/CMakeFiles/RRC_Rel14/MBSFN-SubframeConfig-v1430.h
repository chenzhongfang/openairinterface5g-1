/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_MBSFN_SubframeConfig_v1430_H_
#define	_MBSFN_SubframeConfig_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MBSFN_SubframeConfig_v1430__subframeAllocation_v1430_PR {
	MBSFN_SubframeConfig_v1430__subframeAllocation_v1430_PR_NOTHING,	/* No components present */
	MBSFN_SubframeConfig_v1430__subframeAllocation_v1430_PR_oneFrame_v1430,
	MBSFN_SubframeConfig_v1430__subframeAllocation_v1430_PR_fourFrames_v1430
} MBSFN_SubframeConfig_v1430__subframeAllocation_v1430_PR;

/* MBSFN-SubframeConfig-v1430 */
typedef struct MBSFN_SubframeConfig_v1430 {
	struct MBSFN_SubframeConfig_v1430__subframeAllocation_v1430 {
		MBSFN_SubframeConfig_v1430__subframeAllocation_v1430_PR present;
		union MBSFN_SubframeConfig_v1430__subframeAllocation_v1430_u {
			BIT_STRING_t	 oneFrame_v1430;
			BIT_STRING_t	 fourFrames_v1430;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} subframeAllocation_v1430;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBSFN_SubframeConfig_v1430_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBSFN_SubframeConfig_v1430;
extern asn_SEQUENCE_specifics_t asn_SPC_MBSFN_SubframeConfig_v1430_specs_1;
extern asn_TYPE_member_t asn_MBR_MBSFN_SubframeConfig_v1430_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _MBSFN_SubframeConfig_v1430_H_ */
#include <asn_internal.h>
