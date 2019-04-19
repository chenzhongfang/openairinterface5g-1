/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_RNReconfigurationComplete_r10_H_
#define	_RNReconfigurationComplete_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "RNReconfigurationComplete-r10-IEs.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RNReconfigurationComplete_r10__criticalExtensions_PR {
	RNReconfigurationComplete_r10__criticalExtensions_PR_NOTHING,	/* No components present */
	RNReconfigurationComplete_r10__criticalExtensions_PR_c1,
	RNReconfigurationComplete_r10__criticalExtensions_PR_criticalExtensionsFuture
} RNReconfigurationComplete_r10__criticalExtensions_PR;
typedef enum RNReconfigurationComplete_r10__criticalExtensions__c1_PR {
	RNReconfigurationComplete_r10__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	RNReconfigurationComplete_r10__criticalExtensions__c1_PR_rnReconfigurationComplete_r10,
	RNReconfigurationComplete_r10__criticalExtensions__c1_PR_spare3,
	RNReconfigurationComplete_r10__criticalExtensions__c1_PR_spare2,
	RNReconfigurationComplete_r10__criticalExtensions__c1_PR_spare1
} RNReconfigurationComplete_r10__criticalExtensions__c1_PR;

/* RNReconfigurationComplete-r10 */
typedef struct RNReconfigurationComplete_r10 {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct RNReconfigurationComplete_r10__criticalExtensions {
		RNReconfigurationComplete_r10__criticalExtensions_PR present;
		union RNReconfigurationComplete_r10__criticalExtensions_u {
			struct RNReconfigurationComplete_r10__criticalExtensions__c1 {
				RNReconfigurationComplete_r10__criticalExtensions__c1_PR present;
				union RNReconfigurationComplete_r10__criticalExtensions__c1_u {
					RNReconfigurationComplete_r10_IEs_t	 rnReconfigurationComplete_r10;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} c1;
			struct RNReconfigurationComplete_r10__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RNReconfigurationComplete_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RNReconfigurationComplete_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_RNReconfigurationComplete_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_RNReconfigurationComplete_r10_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RNReconfigurationComplete_r10_H_ */
#include <asn_internal.h>
