/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_CSFBParametersRequestCDMA2000_H_
#define	_CSFBParametersRequestCDMA2000_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CSFBParametersRequestCDMA2000-r8-IEs.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CSFBParametersRequestCDMA2000__criticalExtensions_PR {
	CSFBParametersRequestCDMA2000__criticalExtensions_PR_NOTHING,	/* No components present */
	CSFBParametersRequestCDMA2000__criticalExtensions_PR_csfbParametersRequestCDMA2000_r8,
	CSFBParametersRequestCDMA2000__criticalExtensions_PR_criticalExtensionsFuture
} CSFBParametersRequestCDMA2000__criticalExtensions_PR;

/* CSFBParametersRequestCDMA2000 */
typedef struct CSFBParametersRequestCDMA2000 {
	struct CSFBParametersRequestCDMA2000__criticalExtensions {
		CSFBParametersRequestCDMA2000__criticalExtensions_PR present;
		union CSFBParametersRequestCDMA2000__criticalExtensions_u {
			CSFBParametersRequestCDMA2000_r8_IEs_t	 csfbParametersRequestCDMA2000_r8;
			struct CSFBParametersRequestCDMA2000__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSFBParametersRequestCDMA2000_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CSFBParametersRequestCDMA2000;
extern asn_SEQUENCE_specifics_t asn_SPC_CSFBParametersRequestCDMA2000_specs_1;
extern asn_TYPE_member_t asn_MBR_CSFBParametersRequestCDMA2000_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _CSFBParametersRequestCDMA2000_H_ */
#include <asn_internal.h>
