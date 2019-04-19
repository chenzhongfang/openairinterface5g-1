/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_MeasResultsCDMA2000_H_
#define	_MeasResultsCDMA2000_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include "MeasResultListCDMA2000.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MeasResultsCDMA2000 */
typedef struct MeasResultsCDMA2000 {
	BOOLEAN_t	 preRegistrationStatusHRPD;
	MeasResultListCDMA2000_t	 measResultListCDMA2000;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultsCDMA2000_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultsCDMA2000;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasResultsCDMA2000_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasResultsCDMA2000_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasResultsCDMA2000_H_ */
#include <asn_internal.h>
