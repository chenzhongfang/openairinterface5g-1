/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_RRCConnectionRequest_H_
#define	_RRCConnectionRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRCConnectionRequest-r8-IEs.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionRequest__criticalExtensions_PR {
	RRCConnectionRequest__criticalExtensions_PR_NOTHING,	/* No components present */
	RRCConnectionRequest__criticalExtensions_PR_rrcConnectionRequest_r8,
	RRCConnectionRequest__criticalExtensions_PR_criticalExtensionsFuture
} RRCConnectionRequest__criticalExtensions_PR;

/* RRCConnectionRequest */
typedef struct RRCConnectionRequest {
	struct RRCConnectionRequest__criticalExtensions {
		RRCConnectionRequest__criticalExtensions_PR present;
		union RRCConnectionRequest__criticalExtensions_u {
			RRCConnectionRequest_r8_IEs_t	 rrcConnectionRequest_r8;
			struct RRCConnectionRequest__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionRequest;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionRequest_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionRequest_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionRequest_H_ */
#include <asn_internal.h>
