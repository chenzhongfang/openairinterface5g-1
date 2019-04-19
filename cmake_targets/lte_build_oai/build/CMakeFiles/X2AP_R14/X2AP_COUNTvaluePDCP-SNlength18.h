/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/user/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_COUNTvaluePDCP_SNlength18_H_
#define	_X2AP_COUNTvaluePDCP_SNlength18_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2AP_PDCP-SNlength18.h"
#include "X2AP_HFNforPDCP-SNlength18.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct X2AP_ProtocolExtensionContainer;

/* X2AP_COUNTvaluePDCP-SNlength18 */
typedef struct X2AP_COUNTvaluePDCP_SNlength18 {
	X2AP_PDCP_SNlength18_t	 pDCP_SNlength18;
	X2AP_HFNforPDCP_SNlength18_t	 hFNforPDCP_SNlength18;
	struct X2AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_COUNTvaluePDCP_SNlength18_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_COUNTvaluePDCP_SNlength18;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_COUNTvaluePDCP_SNlength18_H_ */
#include <asn_internal.h>
