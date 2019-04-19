/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_RRCConnectionResumeComplete_r13_H_
#define	_RRCConnectionResumeComplete_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "RRCConnectionResumeComplete-r13-IEs.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionResumeComplete_r13__criticalExtensions_PR {
	RRCConnectionResumeComplete_r13__criticalExtensions_PR_NOTHING,	/* No components present */
	RRCConnectionResumeComplete_r13__criticalExtensions_PR_rrcConnectionResumeComplete_r13,
	RRCConnectionResumeComplete_r13__criticalExtensions_PR_criticalExtensionsFuture
} RRCConnectionResumeComplete_r13__criticalExtensions_PR;

/* RRCConnectionResumeComplete-r13 */
typedef struct RRCConnectionResumeComplete_r13 {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct RRCConnectionResumeComplete_r13__criticalExtensions {
		RRCConnectionResumeComplete_r13__criticalExtensions_PR present;
		union RRCConnectionResumeComplete_r13__criticalExtensions_u {
			RRCConnectionResumeComplete_r13_IEs_t	 rrcConnectionResumeComplete_r13;
			struct RRCConnectionResumeComplete_r13__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionResumeComplete_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionResumeComplete_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionResumeComplete_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionResumeComplete_r13_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionResumeComplete_r13_H_ */
#include <asn_internal.h>
