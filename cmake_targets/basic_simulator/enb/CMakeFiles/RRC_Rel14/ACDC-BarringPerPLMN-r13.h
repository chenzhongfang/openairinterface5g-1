/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_ACDC_BarringPerPLMN_r13_H_
#define	_ACDC_BarringPerPLMN_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <BOOLEAN.h>
#include "BarringPerACDC-CategoryList-r13.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ACDC-BarringPerPLMN-r13 */
typedef struct ACDC_BarringPerPLMN_r13 {
	long	 plmn_IdentityIndex_r13;
	BOOLEAN_t	 acdc_OnlyForHPLMN_r13;
	BarringPerACDC_CategoryList_r13_t	 barringPerACDC_CategoryList_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ACDC_BarringPerPLMN_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ACDC_BarringPerPLMN_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_ACDC_BarringPerPLMN_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_ACDC_BarringPerPLMN_r13_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _ACDC_BarringPerPLMN_r13_H_ */
#include <asn_internal.h>
