/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-Containers"
 * 	found in "/home/user/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/S1AP_R14`
 */

#ifndef	_S1AP_PrivateIE_Field_H_
#define	_S1AP_PrivateIE_Field_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_PrivateIE-ID.h"
#include "S1AP_Criticality.h"
#include <ANY.h>
#include <asn_ioc.h>
#include <OPEN_TYPE.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_PrivateMessageIEs__value_PR {
	S1AP_PrivateMessageIEs__value_PR_NOTHING	/* No components present */
	
} S1AP_PrivateMessageIEs__value_PR;

/* S1AP_PrivateIE-Field */
typedef struct S1AP_PrivateMessageIEs {
	S1AP_PrivateIE_ID_t	 id;
	S1AP_Criticality_t	 criticality;
	struct S1AP_PrivateMessageIEs__value {
		S1AP_PrivateMessageIEs__value_PR present;
		union S1AP_PrivateMessageIEs__S1AP_value_u {
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_PrivateMessageIEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_PrivateMessageIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_S1AP_PrivateMessageIEs_specs_1;
extern asn_TYPE_member_t asn_MBR_S1AP_PrivateMessageIEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_PrivateIE_Field_H_ */
#include <asn_internal.h>
