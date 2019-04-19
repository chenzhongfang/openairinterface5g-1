/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-InterNodeDefinitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_UERadioAccessCapabilityInformation_NB_H_
#define	_UERadioAccessCapabilityInformation_NB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UERadioAccessCapabilityInformation-NB-IEs.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UERadioAccessCapabilityInformation_NB__criticalExtensions_PR {
	UERadioAccessCapabilityInformation_NB__criticalExtensions_PR_NOTHING,	/* No components present */
	UERadioAccessCapabilityInformation_NB__criticalExtensions_PR_c1,
	UERadioAccessCapabilityInformation_NB__criticalExtensions_PR_criticalExtensionsFuture
} UERadioAccessCapabilityInformation_NB__criticalExtensions_PR;
typedef enum UERadioAccessCapabilityInformation_NB__criticalExtensions__c1_PR {
	UERadioAccessCapabilityInformation_NB__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	UERadioAccessCapabilityInformation_NB__criticalExtensions__c1_PR_ueRadioAccessCapabilityInformation_r13,
	UERadioAccessCapabilityInformation_NB__criticalExtensions__c1_PR_spare3,
	UERadioAccessCapabilityInformation_NB__criticalExtensions__c1_PR_spare2,
	UERadioAccessCapabilityInformation_NB__criticalExtensions__c1_PR_spare1
} UERadioAccessCapabilityInformation_NB__criticalExtensions__c1_PR;

/* UERadioAccessCapabilityInformation-NB */
typedef struct UERadioAccessCapabilityInformation_NB {
	struct UERadioAccessCapabilityInformation_NB__criticalExtensions {
		UERadioAccessCapabilityInformation_NB__criticalExtensions_PR present;
		union UERadioAccessCapabilityInformation_NB__criticalExtensions_u {
			struct UERadioAccessCapabilityInformation_NB__criticalExtensions__c1 {
				UERadioAccessCapabilityInformation_NB__criticalExtensions__c1_PR present;
				union UERadioAccessCapabilityInformation_NB__criticalExtensions__c1_u {
					UERadioAccessCapabilityInformation_NB_IEs_t	 ueRadioAccessCapabilityInformation_r13;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} c1;
			struct UERadioAccessCapabilityInformation_NB__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UERadioAccessCapabilityInformation_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UERadioAccessCapabilityInformation_NB;

#ifdef __cplusplus
}
#endif

#endif	/* _UERadioAccessCapabilityInformation_NB_H_ */
#include <asn_internal.h>
