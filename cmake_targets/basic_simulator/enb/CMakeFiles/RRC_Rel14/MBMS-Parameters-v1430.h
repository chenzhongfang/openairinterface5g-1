/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_MBMS_Parameters_v1430_H_
#define	_MBMS_Parameters_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MBMS_Parameters_v1430__fembmsDedicatedCell_r14 {
	MBMS_Parameters_v1430__fembmsDedicatedCell_r14_supported	= 0
} e_MBMS_Parameters_v1430__fembmsDedicatedCell_r14;
typedef enum MBMS_Parameters_v1430__fembmsMixedCell_r14 {
	MBMS_Parameters_v1430__fembmsMixedCell_r14_supported	= 0
} e_MBMS_Parameters_v1430__fembmsMixedCell_r14;
typedef enum MBMS_Parameters_v1430__subcarrierSpacingMBMS_khz7dot5_r14 {
	MBMS_Parameters_v1430__subcarrierSpacingMBMS_khz7dot5_r14_supported	= 0
} e_MBMS_Parameters_v1430__subcarrierSpacingMBMS_khz7dot5_r14;
typedef enum MBMS_Parameters_v1430__subcarrierSpacingMBMS_khz1dot25_r14 {
	MBMS_Parameters_v1430__subcarrierSpacingMBMS_khz1dot25_r14_supported	= 0
} e_MBMS_Parameters_v1430__subcarrierSpacingMBMS_khz1dot25_r14;

/* MBMS-Parameters-v1430 */
typedef struct MBMS_Parameters_v1430 {
	long	*fembmsDedicatedCell_r14;	/* OPTIONAL */
	long	*fembmsMixedCell_r14;	/* OPTIONAL */
	long	*subcarrierSpacingMBMS_khz7dot5_r14;	/* OPTIONAL */
	long	*subcarrierSpacingMBMS_khz1dot25_r14;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBMS_Parameters_v1430_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_fembmsDedicatedCell_r14_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_fembmsMixedCell_r14_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_subcarrierSpacingMBMS_khz7dot5_r14_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_subcarrierSpacingMBMS_khz1dot25_r14_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MBMS_Parameters_v1430;
extern asn_SEQUENCE_specifics_t asn_SPC_MBMS_Parameters_v1430_specs_1;
extern asn_TYPE_member_t asn_MBR_MBMS_Parameters_v1430_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _MBMS_Parameters_v1430_H_ */
#include <asn_internal.h>
