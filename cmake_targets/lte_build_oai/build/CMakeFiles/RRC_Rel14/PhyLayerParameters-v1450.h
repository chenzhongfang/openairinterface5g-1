/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_PhyLayerParameters_v1450_H_
#define	_PhyLayerParameters_v1450_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PhyLayerParameters_v1450__ce_SRS_EnhancementWithoutComb4_r14 {
	PhyLayerParameters_v1450__ce_SRS_EnhancementWithoutComb4_r14_supported	= 0
} e_PhyLayerParameters_v1450__ce_SRS_EnhancementWithoutComb4_r14;
typedef enum PhyLayerParameters_v1450__crs_LessDwPTS_r14 {
	PhyLayerParameters_v1450__crs_LessDwPTS_r14_supported	= 0
} e_PhyLayerParameters_v1450__crs_LessDwPTS_r14;

/* PhyLayerParameters-v1450 */
typedef struct PhyLayerParameters_v1450 {
	long	*ce_SRS_EnhancementWithoutComb4_r14;	/* OPTIONAL */
	long	*crs_LessDwPTS_r14;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhyLayerParameters_v1450_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ce_SRS_EnhancementWithoutComb4_r14_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_crs_LessDwPTS_r14_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PhyLayerParameters_v1450;
extern asn_SEQUENCE_specifics_t asn_SPC_PhyLayerParameters_v1450_specs_1;
extern asn_TYPE_member_t asn_MBR_PhyLayerParameters_v1450_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PhyLayerParameters_v1450_H_ */
#include <asn_internal.h>
