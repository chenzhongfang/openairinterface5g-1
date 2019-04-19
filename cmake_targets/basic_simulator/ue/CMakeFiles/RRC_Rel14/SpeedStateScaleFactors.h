/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_SpeedStateScaleFactors_H_
#define	_SpeedStateScaleFactors_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SpeedStateScaleFactors__sf_Medium {
	SpeedStateScaleFactors__sf_Medium_oDot25	= 0,
	SpeedStateScaleFactors__sf_Medium_oDot5	= 1,
	SpeedStateScaleFactors__sf_Medium_oDot75	= 2,
	SpeedStateScaleFactors__sf_Medium_lDot0	= 3
} e_SpeedStateScaleFactors__sf_Medium;
typedef enum SpeedStateScaleFactors__sf_High {
	SpeedStateScaleFactors__sf_High_oDot25	= 0,
	SpeedStateScaleFactors__sf_High_oDot5	= 1,
	SpeedStateScaleFactors__sf_High_oDot75	= 2,
	SpeedStateScaleFactors__sf_High_lDot0	= 3
} e_SpeedStateScaleFactors__sf_High;

/* SpeedStateScaleFactors */
typedef struct SpeedStateScaleFactors {
	long	 sf_Medium;
	long	 sf_High;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SpeedStateScaleFactors_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_sf_Medium_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sf_High_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SpeedStateScaleFactors;
extern asn_SEQUENCE_specifics_t asn_SPC_SpeedStateScaleFactors_specs_1;
extern asn_TYPE_member_t asn_MBR_SpeedStateScaleFactors_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SpeedStateScaleFactors_H_ */
#include <asn_internal.h>
