/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_SecurityModeFailure_H_
#define	_SecurityModeFailure_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "SecurityModeFailure-r8-IEs.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SecurityModeFailure__criticalExtensions_PR {
	SecurityModeFailure__criticalExtensions_PR_NOTHING,	/* No components present */
	SecurityModeFailure__criticalExtensions_PR_securityModeFailure_r8,
	SecurityModeFailure__criticalExtensions_PR_criticalExtensionsFuture
} SecurityModeFailure__criticalExtensions_PR;

/* SecurityModeFailure */
typedef struct SecurityModeFailure {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct SecurityModeFailure__criticalExtensions {
		SecurityModeFailure__criticalExtensions_PR present;
		union SecurityModeFailure__criticalExtensions_u {
			SecurityModeFailure_r8_IEs_t	 securityModeFailure_r8;
			struct SecurityModeFailure__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SecurityModeFailure_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SecurityModeFailure;
extern asn_SEQUENCE_specifics_t asn_SPC_SecurityModeFailure_specs_1;
extern asn_TYPE_member_t asn_MBR_SecurityModeFailure_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SecurityModeFailure_H_ */
#include <asn_internal.h>
