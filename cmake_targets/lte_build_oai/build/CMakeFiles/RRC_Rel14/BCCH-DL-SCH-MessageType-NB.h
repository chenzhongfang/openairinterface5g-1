/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_BCCH_DL_SCH_MessageType_NB_H_
#define	_BCCH_DL_SCH_MessageType_NB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SystemInformation-NB.h"
#include "SystemInformationBlockType1-NB.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BCCH_DL_SCH_MessageType_NB_PR {
	BCCH_DL_SCH_MessageType_NB_PR_NOTHING,	/* No components present */
	BCCH_DL_SCH_MessageType_NB_PR_c1,
	BCCH_DL_SCH_MessageType_NB_PR_messageClassExtension
} BCCH_DL_SCH_MessageType_NB_PR;
typedef enum BCCH_DL_SCH_MessageType_NB__c1_PR {
	BCCH_DL_SCH_MessageType_NB__c1_PR_NOTHING,	/* No components present */
	BCCH_DL_SCH_MessageType_NB__c1_PR_systemInformation_r13,
	BCCH_DL_SCH_MessageType_NB__c1_PR_systemInformationBlockType1_r13
} BCCH_DL_SCH_MessageType_NB__c1_PR;

/* BCCH-DL-SCH-MessageType-NB */
typedef struct BCCH_DL_SCH_MessageType_NB {
	BCCH_DL_SCH_MessageType_NB_PR present;
	union BCCH_DL_SCH_MessageType_NB_u {
		struct BCCH_DL_SCH_MessageType_NB__c1 {
			BCCH_DL_SCH_MessageType_NB__c1_PR present;
			union BCCH_DL_SCH_MessageType_NB__c1_u {
				SystemInformation_NB_t	 systemInformation_r13;
				SystemInformationBlockType1_NB_t	 systemInformationBlockType1_r13;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} c1;
		struct BCCH_DL_SCH_MessageType_NB__messageClassExtension {
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} messageClassExtension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BCCH_DL_SCH_MessageType_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BCCH_DL_SCH_MessageType_NB;
extern asn_CHOICE_specifics_t asn_SPC_BCCH_DL_SCH_MessageType_NB_specs_1;
extern asn_TYPE_member_t asn_MBR_BCCH_DL_SCH_MessageType_NB_1[2];
extern asn_per_constraints_t asn_PER_type_BCCH_DL_SCH_MessageType_NB_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _BCCH_DL_SCH_MessageType_NB_H_ */
#include <asn_internal.h>
