/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_RF_Parameters_v1270_H_
#define	_RF_Parameters_v1270_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SupportedBandCombination_v1270;
struct SupportedBandCombinationAdd_v1270;

/* RF-Parameters-v1270 */
typedef struct RF_Parameters_v1270 {
	struct SupportedBandCombination_v1270	*supportedBandCombination_v1270;	/* OPTIONAL */
	struct SupportedBandCombinationAdd_v1270	*supportedBandCombinationAdd_v1270;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RF_Parameters_v1270_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RF_Parameters_v1270;
extern asn_SEQUENCE_specifics_t asn_SPC_RF_Parameters_v1270_specs_1;
extern asn_TYPE_member_t asn_MBR_RF_Parameters_v1270_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SupportedBandCombination-v1270.h"
#include "SupportedBandCombinationAdd-v1270.h"

#endif	/* _RF_Parameters_v1270_H_ */
#include <asn_internal.h>
