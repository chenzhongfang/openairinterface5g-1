/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_SCG_ConfigInfo_r12_H_
#define	_SCG_ConfigInfo_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SCG-ConfigInfo-r12-IEs.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SCG_ConfigInfo_r12__criticalExtensions_PR {
	SCG_ConfigInfo_r12__criticalExtensions_PR_NOTHING,	/* No components present */
	SCG_ConfigInfo_r12__criticalExtensions_PR_c1,
	SCG_ConfigInfo_r12__criticalExtensions_PR_criticalExtensionsFuture
} SCG_ConfigInfo_r12__criticalExtensions_PR;
typedef enum SCG_ConfigInfo_r12__criticalExtensions__c1_PR {
	SCG_ConfigInfo_r12__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	SCG_ConfigInfo_r12__criticalExtensions__c1_PR_scg_ConfigInfo_r12,
	SCG_ConfigInfo_r12__criticalExtensions__c1_PR_spare7,
	SCG_ConfigInfo_r12__criticalExtensions__c1_PR_spare6,
	SCG_ConfigInfo_r12__criticalExtensions__c1_PR_spare5,
	SCG_ConfigInfo_r12__criticalExtensions__c1_PR_spare4,
	SCG_ConfigInfo_r12__criticalExtensions__c1_PR_spare3,
	SCG_ConfigInfo_r12__criticalExtensions__c1_PR_spare2,
	SCG_ConfigInfo_r12__criticalExtensions__c1_PR_spare1
} SCG_ConfigInfo_r12__criticalExtensions__c1_PR;

/* SCG-ConfigInfo-r12 */
typedef struct SCG_ConfigInfo_r12 {
	struct SCG_ConfigInfo_r12__criticalExtensions {
		SCG_ConfigInfo_r12__criticalExtensions_PR present;
		union SCG_ConfigInfo_r12__criticalExtensions_u {
			struct SCG_ConfigInfo_r12__criticalExtensions__c1 {
				SCG_ConfigInfo_r12__criticalExtensions__c1_PR present;
				union SCG_ConfigInfo_r12__criticalExtensions__c1_u {
					SCG_ConfigInfo_r12_IEs_t	 scg_ConfigInfo_r12;
					NULL_t	 spare7;
					NULL_t	 spare6;
					NULL_t	 spare5;
					NULL_t	 spare4;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} c1;
			struct SCG_ConfigInfo_r12__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SCG_ConfigInfo_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SCG_ConfigInfo_r12;

#ifdef __cplusplus
}
#endif

#endif	/* _SCG_ConfigInfo_r12_H_ */
#include <asn_internal.h>
