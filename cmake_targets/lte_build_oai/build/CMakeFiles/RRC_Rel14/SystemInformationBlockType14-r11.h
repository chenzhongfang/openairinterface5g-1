/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_SystemInformationBlockType14_r11_H_
#define	_SystemInformationBlockType14_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include "EAB-Config-r11.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SystemInformationBlockType14_r11__eab_Param_r11_PR {
	SystemInformationBlockType14_r11__eab_Param_r11_PR_NOTHING,	/* No components present */
	SystemInformationBlockType14_r11__eab_Param_r11_PR_eab_Common_r11,
	SystemInformationBlockType14_r11__eab_Param_r11_PR_eab_PerPLMN_List_r11
} SystemInformationBlockType14_r11__eab_Param_r11_PR;

/* Forward declarations */
struct EAB_ConfigPLMN_r11;

/* SystemInformationBlockType14-r11 */
typedef struct SystemInformationBlockType14_r11 {
	struct SystemInformationBlockType14_r11__eab_Param_r11 {
		SystemInformationBlockType14_r11__eab_Param_r11_PR present;
		union SystemInformationBlockType14_r11__eab_Param_r11_u {
			EAB_Config_r11_t	 eab_Common_r11;
			struct SystemInformationBlockType14_r11__eab_Param_r11__eab_PerPLMN_List_r11 {
				A_SEQUENCE_OF(struct EAB_ConfigPLMN_r11) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} eab_PerPLMN_List_r11;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *eab_Param_r11;
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType14_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType14_r11;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType14_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType14_r11_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "EAB-ConfigPLMN-r11.h"

#endif	/* _SystemInformationBlockType14_r11_H_ */
#include <asn_internal.h>
