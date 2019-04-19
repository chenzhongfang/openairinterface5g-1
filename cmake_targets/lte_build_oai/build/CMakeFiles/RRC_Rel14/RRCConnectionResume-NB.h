/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_RRCConnectionResume_NB_H_
#define	_RRCConnectionResume_NB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "RRCConnectionResume-NB-r13-IEs.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionResume_NB__criticalExtensions_PR {
	RRCConnectionResume_NB__criticalExtensions_PR_NOTHING,	/* No components present */
	RRCConnectionResume_NB__criticalExtensions_PR_c1,
	RRCConnectionResume_NB__criticalExtensions_PR_criticalExtensionsFuture
} RRCConnectionResume_NB__criticalExtensions_PR;
typedef enum RRCConnectionResume_NB__criticalExtensions__c1_PR {
	RRCConnectionResume_NB__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	RRCConnectionResume_NB__criticalExtensions__c1_PR_rrcConnectionResume_r13,
	RRCConnectionResume_NB__criticalExtensions__c1_PR_spare1
} RRCConnectionResume_NB__criticalExtensions__c1_PR;

/* RRCConnectionResume-NB */
typedef struct RRCConnectionResume_NB {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct RRCConnectionResume_NB__criticalExtensions {
		RRCConnectionResume_NB__criticalExtensions_PR present;
		union RRCConnectionResume_NB__criticalExtensions_u {
			struct RRCConnectionResume_NB__criticalExtensions__c1 {
				RRCConnectionResume_NB__criticalExtensions__c1_PR present;
				union RRCConnectionResume_NB__criticalExtensions__c1_u {
					RRCConnectionResume_NB_r13_IEs_t	 rrcConnectionResume_r13;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} c1;
			struct RRCConnectionResume_NB__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionResume_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionResume_NB;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionResume_NB_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionResume_NB_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionResume_NB_H_ */
#include <asn_internal.h>
