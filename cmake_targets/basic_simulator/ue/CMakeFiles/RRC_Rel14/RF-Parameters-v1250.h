/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_RF_Parameters_v1250_H_
#define	_RF_Parameters_v1250_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RF_Parameters_v1250__freqBandPriorityAdjustment_r12 {
	RF_Parameters_v1250__freqBandPriorityAdjustment_r12_supported	= 0
} e_RF_Parameters_v1250__freqBandPriorityAdjustment_r12;

/* Forward declarations */
struct SupportedBandListEUTRA_v1250;
struct SupportedBandCombination_v1250;
struct SupportedBandCombinationAdd_v1250;

/* RF-Parameters-v1250 */
typedef struct RF_Parameters_v1250 {
	struct SupportedBandListEUTRA_v1250	*supportedBandListEUTRA_v1250;	/* OPTIONAL */
	struct SupportedBandCombination_v1250	*supportedBandCombination_v1250;	/* OPTIONAL */
	struct SupportedBandCombinationAdd_v1250	*supportedBandCombinationAdd_v1250;	/* OPTIONAL */
	long	*freqBandPriorityAdjustment_r12;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RF_Parameters_v1250_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_freqBandPriorityAdjustment_r12_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RF_Parameters_v1250;
extern asn_SEQUENCE_specifics_t asn_SPC_RF_Parameters_v1250_specs_1;
extern asn_TYPE_member_t asn_MBR_RF_Parameters_v1250_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SupportedBandListEUTRA-v1250.h"
#include "SupportedBandCombination-v1250.h"
#include "SupportedBandCombinationAdd-v1250.h"

#endif	/* _RF_Parameters_v1250_H_ */
#include <asn_internal.h>
