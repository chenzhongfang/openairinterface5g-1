/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_ULInformationTransfer_NB_H_
#define	_ULInformationTransfer_NB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ULInformationTransfer-NB-r13-IEs.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ULInformationTransfer_NB__criticalExtensions_PR {
	ULInformationTransfer_NB__criticalExtensions_PR_NOTHING,	/* No components present */
	ULInformationTransfer_NB__criticalExtensions_PR_ulInformationTransfer_r13,
	ULInformationTransfer_NB__criticalExtensions_PR_criticalExtensionsFuture
} ULInformationTransfer_NB__criticalExtensions_PR;

/* ULInformationTransfer-NB */
typedef struct ULInformationTransfer_NB {
	struct ULInformationTransfer_NB__criticalExtensions {
		ULInformationTransfer_NB__criticalExtensions_PR present;
		union ULInformationTransfer_NB__criticalExtensions_u {
			ULInformationTransfer_NB_r13_IEs_t	 ulInformationTransfer_r13;
			struct ULInformationTransfer_NB__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ULInformationTransfer_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ULInformationTransfer_NB;
extern asn_SEQUENCE_specifics_t asn_SPC_ULInformationTransfer_NB_specs_1;
extern asn_TYPE_member_t asn_MBR_ULInformationTransfer_NB_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _ULInformationTransfer_NB_H_ */
#include <asn_internal.h>
