/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/user/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/S1AP_R14`
 */

#ifndef	_S1AP_M4Configuration_H_
#define	_S1AP_M4Configuration_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_M4period.h"
#include "S1AP_Links-to-log.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct S1AP_ProtocolExtensionContainer;

/* S1AP_M4Configuration */
typedef struct S1AP_M4Configuration {
	S1AP_M4period_t	 m4period;
	S1AP_Links_to_log_t	 m4_links_to_log;
	struct S1AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_M4Configuration_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_M4Configuration;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_M4Configuration_H_ */
#include <asn_internal.h>
