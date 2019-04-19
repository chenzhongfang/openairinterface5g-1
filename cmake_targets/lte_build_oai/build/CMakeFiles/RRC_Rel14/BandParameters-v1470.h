/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_BandParameters_v1470_H_
#define	_BandParameters_v1470_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MIMO_CA_ParametersPerBoBC_v1470;

/* BandParameters-v1470 */
typedef struct BandParameters_v1470 {
	struct MIMO_CA_ParametersPerBoBC_v1470	*bandParametersDL_v1470;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandParameters_v1470_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BandParameters_v1470;
extern asn_SEQUENCE_specifics_t asn_SPC_BandParameters_v1470_specs_1;
extern asn_TYPE_member_t asn_MBR_BandParameters_v1470_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MIMO-CA-ParametersPerBoBC-v1470.h"

#endif	/* _BandParameters_v1470_H_ */
#include <asn_internal.h>
