/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_RegisteredMME_H_
#define	_RegisteredMME_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include "MMEC.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PLMN_Identity;

/* RegisteredMME */
typedef struct RegisteredMME {
	struct PLMN_Identity	*plmn_Identity;	/* OPTIONAL */
	BIT_STRING_t	 mmegi;
	MMEC_t	 mmec;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RegisteredMME_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RegisteredMME;
extern asn_SEQUENCE_specifics_t asn_SPC_RegisteredMME_specs_1;
extern asn_TYPE_member_t asn_MBR_RegisteredMME_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PLMN-Identity.h"

#endif	/* _RegisteredMME_H_ */
#include <asn_internal.h>
