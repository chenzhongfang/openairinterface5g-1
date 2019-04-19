/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_EPDCCH_Config_r11_H_
#define	_EPDCCH_Config_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeInteger.h>
#include "MeasSubframePattern-r10.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EPDCCH_Config_r11__config_r11_PR {
	EPDCCH_Config_r11__config_r11_PR_NOTHING,	/* No components present */
	EPDCCH_Config_r11__config_r11_PR_release,
	EPDCCH_Config_r11__config_r11_PR_setup
} EPDCCH_Config_r11__config_r11_PR;
typedef enum EPDCCH_Config_r11__config_r11__setup__subframePatternConfig_r11_PR {
	EPDCCH_Config_r11__config_r11__setup__subframePatternConfig_r11_PR_NOTHING,	/* No components present */
	EPDCCH_Config_r11__config_r11__setup__subframePatternConfig_r11_PR_release,
	EPDCCH_Config_r11__config_r11__setup__subframePatternConfig_r11_PR_setup
} EPDCCH_Config_r11__config_r11__setup__subframePatternConfig_r11_PR;

/* Forward declarations */
struct EPDCCH_SetConfigToReleaseList_r11;
struct EPDCCH_SetConfigToAddModList_r11;

/* EPDCCH-Config-r11 */
typedef struct EPDCCH_Config_r11 {
	struct EPDCCH_Config_r11__config_r11 {
		EPDCCH_Config_r11__config_r11_PR present;
		union EPDCCH_Config_r11__config_r11_u {
			NULL_t	 release;
			struct EPDCCH_Config_r11__config_r11__setup {
				struct EPDCCH_Config_r11__config_r11__setup__subframePatternConfig_r11 {
					EPDCCH_Config_r11__config_r11__setup__subframePatternConfig_r11_PR present;
					union EPDCCH_Config_r11__config_r11__setup__subframePatternConfig_r11_u {
						NULL_t	 release;
						struct EPDCCH_Config_r11__config_r11__setup__subframePatternConfig_r11__setup {
							MeasSubframePattern_r10_t	 subframePattern_r11;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} setup;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *subframePatternConfig_r11;
				long	*startSymbol_r11;	/* OPTIONAL */
				struct EPDCCH_SetConfigToReleaseList_r11	*setConfigToReleaseList_r11;	/* OPTIONAL */
				struct EPDCCH_SetConfigToAddModList_r11	*setConfigToAddModList_r11;	/* OPTIONAL */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} config_r11;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EPDCCH_Config_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EPDCCH_Config_r11;
extern asn_SEQUENCE_specifics_t asn_SPC_EPDCCH_Config_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_EPDCCH_Config_r11_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "EPDCCH-SetConfigToReleaseList-r11.h"
#include "EPDCCH-SetConfigToAddModList-r11.h"

#endif	/* _EPDCCH_Config_r11_H_ */
#include <asn_internal.h>
