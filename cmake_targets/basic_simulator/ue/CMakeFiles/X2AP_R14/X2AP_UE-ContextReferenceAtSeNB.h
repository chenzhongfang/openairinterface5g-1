/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "/home/user/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_UE_ContextReferenceAtSeNB_H_
#define	_X2AP_UE_ContextReferenceAtSeNB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2AP_GlobalENB-ID.h"
#include "X2AP_UE-X2AP-ID.h"
#include "X2AP_UE-X2AP-ID-Extension.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct X2AP_ProtocolExtensionContainer;

/* X2AP_UE-ContextReferenceAtSeNB */
typedef struct X2AP_UE_ContextReferenceAtSeNB {
	X2AP_GlobalENB_ID_t	 source_GlobalSeNB_ID;
	X2AP_UE_X2AP_ID_t	 seNB_UE_X2AP_ID;
	X2AP_UE_X2AP_ID_Extension_t	 seNB_UE_X2AP_ID_Extension;
	struct X2AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_UE_ContextReferenceAtSeNB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_UE_ContextReferenceAtSeNB;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_UE_ContextReferenceAtSeNB_H_ */
#include <asn_internal.h>
