/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_RF_Parameters_v1020_H_
#define	_RF_Parameters_v1020_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SupportedBandCombination-r10.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RF-Parameters-v1020 */
typedef struct RF_Parameters_v1020 {
	SupportedBandCombination_r10_t	 supportedBandCombination_r10;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RF_Parameters_v1020_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RF_Parameters_v1020;
extern asn_SEQUENCE_specifics_t asn_SPC_RF_Parameters_v1020_specs_1;
extern asn_TYPE_member_t asn_MBR_RF_Parameters_v1020_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RF_Parameters_v1020_H_ */
#include <asn_internal.h>
