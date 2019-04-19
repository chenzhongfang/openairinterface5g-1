/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_E_CSFB_r9_H_
#define	_E_CSFB_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum E_CSFB_r9__mobilityCDMA2000_HRPD_r9 {
	E_CSFB_r9__mobilityCDMA2000_HRPD_r9_handover	= 0,
	E_CSFB_r9__mobilityCDMA2000_HRPD_r9_redirection	= 1
} e_E_CSFB_r9__mobilityCDMA2000_HRPD_r9;

/* Forward declarations */
struct CarrierFreqCDMA2000;

/* E-CSFB-r9 */
typedef struct E_CSFB_r9 {
	OCTET_STRING_t	*messageContCDMA2000_1XRTT_r9;	/* OPTIONAL */
	long	*mobilityCDMA2000_HRPD_r9;	/* OPTIONAL */
	OCTET_STRING_t	*messageContCDMA2000_HRPD_r9;	/* OPTIONAL */
	struct CarrierFreqCDMA2000	*redirectCarrierCDMA2000_HRPD_r9;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E_CSFB_r9_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_mobilityCDMA2000_HRPD_r9_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_E_CSFB_r9;
extern asn_SEQUENCE_specifics_t asn_SPC_E_CSFB_r9_specs_1;
extern asn_TYPE_member_t asn_MBR_E_CSFB_r9_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CarrierFreqCDMA2000.h"

#endif	/* _E_CSFB_r9_H_ */
#include <asn_internal.h>
