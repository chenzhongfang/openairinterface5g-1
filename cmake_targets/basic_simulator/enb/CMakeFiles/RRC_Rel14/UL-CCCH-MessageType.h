/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_UL_CCCH_MessageType_H_
#define	_UL_CCCH_MessageType_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRCConnectionReestablishmentRequest.h"
#include "RRCConnectionRequest.h"
#include <constr_CHOICE.h>
#include "RRCConnectionResumeRequest-r13.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UL_CCCH_MessageType_PR {
	UL_CCCH_MessageType_PR_NOTHING,	/* No components present */
	UL_CCCH_MessageType_PR_c1,
	UL_CCCH_MessageType_PR_messageClassExtension
} UL_CCCH_MessageType_PR;
typedef enum UL_CCCH_MessageType__c1_PR {
	UL_CCCH_MessageType__c1_PR_NOTHING,	/* No components present */
	UL_CCCH_MessageType__c1_PR_rrcConnectionReestablishmentRequest,
	UL_CCCH_MessageType__c1_PR_rrcConnectionRequest
} UL_CCCH_MessageType__c1_PR;
typedef enum UL_CCCH_MessageType__messageClassExtension_PR {
	UL_CCCH_MessageType__messageClassExtension_PR_NOTHING,	/* No components present */
	UL_CCCH_MessageType__messageClassExtension_PR_c2,
	UL_CCCH_MessageType__messageClassExtension_PR_messageClassExtensionFuture_r13
} UL_CCCH_MessageType__messageClassExtension_PR;
typedef enum UL_CCCH_MessageType__messageClassExtension__c2_PR {
	UL_CCCH_MessageType__messageClassExtension__c2_PR_NOTHING,	/* No components present */
	UL_CCCH_MessageType__messageClassExtension__c2_PR_rrcConnectionResumeRequest_r13
} UL_CCCH_MessageType__messageClassExtension__c2_PR;

/* UL-CCCH-MessageType */
typedef struct UL_CCCH_MessageType {
	UL_CCCH_MessageType_PR present;
	union UL_CCCH_MessageType_u {
		struct UL_CCCH_MessageType__c1 {
			UL_CCCH_MessageType__c1_PR present;
			union UL_CCCH_MessageType__c1_u {
				RRCConnectionReestablishmentRequest_t	 rrcConnectionReestablishmentRequest;
				RRCConnectionRequest_t	 rrcConnectionRequest;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} c1;
		struct UL_CCCH_MessageType__messageClassExtension {
			UL_CCCH_MessageType__messageClassExtension_PR present;
			union UL_CCCH_MessageType__messageClassExtension_u {
				struct UL_CCCH_MessageType__messageClassExtension__c2 {
					UL_CCCH_MessageType__messageClassExtension__c2_PR present;
					union UL_CCCH_MessageType__messageClassExtension__c2_u {
						RRCConnectionResumeRequest_r13_t	 rrcConnectionResumeRequest_r13;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} c2;
				struct UL_CCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r13 {
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} messageClassExtensionFuture_r13;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} messageClassExtension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_CCCH_MessageType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_CCCH_MessageType;
extern asn_CHOICE_specifics_t asn_SPC_UL_CCCH_MessageType_specs_1;
extern asn_TYPE_member_t asn_MBR_UL_CCCH_MessageType_1[2];
extern asn_per_constraints_t asn_PER_type_UL_CCCH_MessageType_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _UL_CCCH_MessageType_H_ */
#include <asn_internal.h>
