/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_SupportedBandEUTRA_v1320_H_
#define	_SupportedBandEUTRA_v1320_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SupportedBandEUTRA_v1320__intraFreq_CE_NeedForGaps_r13 {
	SupportedBandEUTRA_v1320__intraFreq_CE_NeedForGaps_r13_supported	= 0
} e_SupportedBandEUTRA_v1320__intraFreq_CE_NeedForGaps_r13;
typedef enum SupportedBandEUTRA_v1320__ue_PowerClass_N_r13 {
	SupportedBandEUTRA_v1320__ue_PowerClass_N_r13_class1	= 0,
	SupportedBandEUTRA_v1320__ue_PowerClass_N_r13_class2	= 1,
	SupportedBandEUTRA_v1320__ue_PowerClass_N_r13_class4	= 2
} e_SupportedBandEUTRA_v1320__ue_PowerClass_N_r13;

/* SupportedBandEUTRA-v1320 */
typedef struct SupportedBandEUTRA_v1320 {
	long	*intraFreq_CE_NeedForGaps_r13;	/* OPTIONAL */
	long	*ue_PowerClass_N_r13;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SupportedBandEUTRA_v1320_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_intraFreq_CE_NeedForGaps_r13_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ue_PowerClass_N_r13_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SupportedBandEUTRA_v1320;
extern asn_SEQUENCE_specifics_t asn_SPC_SupportedBandEUTRA_v1320_specs_1;
extern asn_TYPE_member_t asn_MBR_SupportedBandEUTRA_v1320_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SupportedBandEUTRA_v1320_H_ */
#include <asn_internal.h>
