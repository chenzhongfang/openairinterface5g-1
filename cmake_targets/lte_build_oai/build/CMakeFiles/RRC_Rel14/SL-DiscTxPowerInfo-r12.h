/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_SL_DiscTxPowerInfo_r12_H_
#define	_SL_DiscTxPowerInfo_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "P-Max.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SL-DiscTxPowerInfo-r12 */
typedef struct SL_DiscTxPowerInfo_r12 {
	P_Max_t	 discMaxTxPower_r12;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_DiscTxPowerInfo_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_DiscTxPowerInfo_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_DiscTxPowerInfo_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_DiscTxPowerInfo_r12_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_DiscTxPowerInfo_r12_H_ */
#include <asn_internal.h>
