/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/user/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/S1AP_R14`
 */

#ifndef	_S1AP_GUMMEI_H_
#define	_S1AP_GUMMEI_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_PLMNidentity.h"
#include "S1AP_MME-Group-ID.h"
#include "S1AP_MME-Code.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct S1AP_ProtocolExtensionContainer;

/* S1AP_GUMMEI */
typedef struct S1AP_GUMMEI {
	S1AP_PLMNidentity_t	 pLMN_Identity;
	S1AP_MME_Group_ID_t	 mME_Group_ID;
	S1AP_MME_Code_t	 mME_Code;
	struct S1AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_GUMMEI_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_GUMMEI;
extern asn_SEQUENCE_specifics_t asn_SPC_S1AP_GUMMEI_specs_1;
extern asn_TYPE_member_t asn_MBR_S1AP_GUMMEI_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_GUMMEI_H_ */
#include <asn_internal.h>
