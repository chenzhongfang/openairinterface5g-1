/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_SupportedBandCombination_v1090_H_
#define	_SupportedBandCombination_v1090_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct BandCombinationParameters_v1090;

/* SupportedBandCombination-v1090 */
typedef struct SupportedBandCombination_v1090 {
	A_SEQUENCE_OF(struct BandCombinationParameters_v1090) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SupportedBandCombination_v1090_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SupportedBandCombination_v1090;
extern asn_SET_OF_specifics_t asn_SPC_SupportedBandCombination_v1090_specs_1;
extern asn_TYPE_member_t asn_MBR_SupportedBandCombination_v1090_1[1];
extern asn_per_constraints_t asn_PER_type_SupportedBandCombination_v1090_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "BandCombinationParameters-v1090.h"

#endif	/* _SupportedBandCombination_v1090_H_ */
#include <asn_internal.h>
