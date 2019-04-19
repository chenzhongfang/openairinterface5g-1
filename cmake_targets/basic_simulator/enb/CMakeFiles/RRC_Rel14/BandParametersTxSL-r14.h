/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_BandParametersTxSL_r14_H_
#define	_BandParametersTxSL_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "V2X-BandwidthClassSL-r14.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BandParametersTxSL_r14__v2x_eNB_Scheduled_r14 {
	BandParametersTxSL_r14__v2x_eNB_Scheduled_r14_supported	= 0
} e_BandParametersTxSL_r14__v2x_eNB_Scheduled_r14;
typedef enum BandParametersTxSL_r14__v2x_HighPower_r14 {
	BandParametersTxSL_r14__v2x_HighPower_r14_supported	= 0
} e_BandParametersTxSL_r14__v2x_HighPower_r14;

/* BandParametersTxSL-r14 */
typedef struct BandParametersTxSL_r14 {
	V2X_BandwidthClassSL_r14_t	 v2x_BandwidthClassTxSL_r14;
	long	*v2x_eNB_Scheduled_r14;	/* OPTIONAL */
	long	*v2x_HighPower_r14;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandParametersTxSL_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_v2x_eNB_Scheduled_r14_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_v2x_HighPower_r14_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_BandParametersTxSL_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_BandParametersTxSL_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_BandParametersTxSL_r14_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _BandParametersTxSL_r14_H_ */
#include <asn_internal.h>
