/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LAA_Parameters_v1430_H_
#define	_LAA_Parameters_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LAA_Parameters_v1430__crossCarrierSchedulingLAA_UL_r14 {
	LAA_Parameters_v1430__crossCarrierSchedulingLAA_UL_r14_supported	= 0
} e_LAA_Parameters_v1430__crossCarrierSchedulingLAA_UL_r14;
typedef enum LAA_Parameters_v1430__uplinkLAA_r14 {
	LAA_Parameters_v1430__uplinkLAA_r14_supported	= 0
} e_LAA_Parameters_v1430__uplinkLAA_r14;
typedef enum LAA_Parameters_v1430__twoStepSchedulingTimingInfo_r14 {
	LAA_Parameters_v1430__twoStepSchedulingTimingInfo_r14_nPlus1	= 0,
	LAA_Parameters_v1430__twoStepSchedulingTimingInfo_r14_nPlus2	= 1,
	LAA_Parameters_v1430__twoStepSchedulingTimingInfo_r14_nPlus3	= 2
} e_LAA_Parameters_v1430__twoStepSchedulingTimingInfo_r14;
typedef enum LAA_Parameters_v1430__uss_BlindDecodingAdjustment_r14 {
	LAA_Parameters_v1430__uss_BlindDecodingAdjustment_r14_supported	= 0
} e_LAA_Parameters_v1430__uss_BlindDecodingAdjustment_r14;
typedef enum LAA_Parameters_v1430__uss_BlindDecodingReduction_r14 {
	LAA_Parameters_v1430__uss_BlindDecodingReduction_r14_supported	= 0
} e_LAA_Parameters_v1430__uss_BlindDecodingReduction_r14;
typedef enum LAA_Parameters_v1430__outOfSequenceGrantHandling_r14 {
	LAA_Parameters_v1430__outOfSequenceGrantHandling_r14_supported	= 0
} e_LAA_Parameters_v1430__outOfSequenceGrantHandling_r14;

/* LAA-Parameters-v1430 */
typedef struct LAA_Parameters_v1430 {
	long	*crossCarrierSchedulingLAA_UL_r14;	/* OPTIONAL */
	long	*uplinkLAA_r14;	/* OPTIONAL */
	long	*twoStepSchedulingTimingInfo_r14;	/* OPTIONAL */
	long	*uss_BlindDecodingAdjustment_r14;	/* OPTIONAL */
	long	*uss_BlindDecodingReduction_r14;	/* OPTIONAL */
	long	*outOfSequenceGrantHandling_r14;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LAA_Parameters_v1430_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_crossCarrierSchedulingLAA_UL_r14_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_uplinkLAA_r14_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_twoStepSchedulingTimingInfo_r14_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_uss_BlindDecodingAdjustment_r14_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_uss_BlindDecodingReduction_r14_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_outOfSequenceGrantHandling_r14_14;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LAA_Parameters_v1430;
extern asn_SEQUENCE_specifics_t asn_SPC_LAA_Parameters_v1430_specs_1;
extern asn_TYPE_member_t asn_MBR_LAA_Parameters_v1430_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _LAA_Parameters_v1430_H_ */
#include <asn_internal.h>
