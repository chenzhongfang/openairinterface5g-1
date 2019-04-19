/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_AC_BarringConfig_H_
#define	_AC_BarringConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AC_BarringConfig__ac_BarringFactor {
	AC_BarringConfig__ac_BarringFactor_p00	= 0,
	AC_BarringConfig__ac_BarringFactor_p05	= 1,
	AC_BarringConfig__ac_BarringFactor_p10	= 2,
	AC_BarringConfig__ac_BarringFactor_p15	= 3,
	AC_BarringConfig__ac_BarringFactor_p20	= 4,
	AC_BarringConfig__ac_BarringFactor_p25	= 5,
	AC_BarringConfig__ac_BarringFactor_p30	= 6,
	AC_BarringConfig__ac_BarringFactor_p40	= 7,
	AC_BarringConfig__ac_BarringFactor_p50	= 8,
	AC_BarringConfig__ac_BarringFactor_p60	= 9,
	AC_BarringConfig__ac_BarringFactor_p70	= 10,
	AC_BarringConfig__ac_BarringFactor_p75	= 11,
	AC_BarringConfig__ac_BarringFactor_p80	= 12,
	AC_BarringConfig__ac_BarringFactor_p85	= 13,
	AC_BarringConfig__ac_BarringFactor_p90	= 14,
	AC_BarringConfig__ac_BarringFactor_p95	= 15
} e_AC_BarringConfig__ac_BarringFactor;
typedef enum AC_BarringConfig__ac_BarringTime {
	AC_BarringConfig__ac_BarringTime_s4	= 0,
	AC_BarringConfig__ac_BarringTime_s8	= 1,
	AC_BarringConfig__ac_BarringTime_s16	= 2,
	AC_BarringConfig__ac_BarringTime_s32	= 3,
	AC_BarringConfig__ac_BarringTime_s64	= 4,
	AC_BarringConfig__ac_BarringTime_s128	= 5,
	AC_BarringConfig__ac_BarringTime_s256	= 6,
	AC_BarringConfig__ac_BarringTime_s512	= 7
} e_AC_BarringConfig__ac_BarringTime;

/* AC-BarringConfig */
typedef struct AC_BarringConfig {
	long	 ac_BarringFactor;
	long	 ac_BarringTime;
	BIT_STRING_t	 ac_BarringForSpecialAC;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AC_BarringConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ac_BarringFactor_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ac_BarringTime_19;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_AC_BarringConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_AC_BarringConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_AC_BarringConfig_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _AC_BarringConfig_H_ */
#include <asn_internal.h>
