/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_RRCConnectionSetupComplete_H_
#define	_RRCConnectionSetupComplete_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "RRCConnectionSetupComplete-r8-IEs.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionSetupComplete__criticalExtensions_PR {
	RRCConnectionSetupComplete__criticalExtensions_PR_NOTHING,	/* No components present */
	RRCConnectionSetupComplete__criticalExtensions_PR_c1,
	RRCConnectionSetupComplete__criticalExtensions_PR_criticalExtensionsFuture
} RRCConnectionSetupComplete__criticalExtensions_PR;
typedef enum RRCConnectionSetupComplete__criticalExtensions__c1_PR {
	RRCConnectionSetupComplete__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	RRCConnectionSetupComplete__criticalExtensions__c1_PR_rrcConnectionSetupComplete_r8,
	RRCConnectionSetupComplete__criticalExtensions__c1_PR_spare3,
	RRCConnectionSetupComplete__criticalExtensions__c1_PR_spare2,
	RRCConnectionSetupComplete__criticalExtensions__c1_PR_spare1
} RRCConnectionSetupComplete__criticalExtensions__c1_PR;

/* RRCConnectionSetupComplete */
typedef struct RRCConnectionSetupComplete {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct RRCConnectionSetupComplete__criticalExtensions {
		RRCConnectionSetupComplete__criticalExtensions_PR present;
		union RRCConnectionSetupComplete__criticalExtensions_u {
			struct RRCConnectionSetupComplete__criticalExtensions__c1 {
				RRCConnectionSetupComplete__criticalExtensions__c1_PR present;
				union RRCConnectionSetupComplete__criticalExtensions__c1_u {
					RRCConnectionSetupComplete_r8_IEs_t	 rrcConnectionSetupComplete_r8;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} c1;
			struct RRCConnectionSetupComplete__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionSetupComplete_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionSetupComplete;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionSetupComplete_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionSetupComplete_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionSetupComplete_H_ */
#include <asn_internal.h>
