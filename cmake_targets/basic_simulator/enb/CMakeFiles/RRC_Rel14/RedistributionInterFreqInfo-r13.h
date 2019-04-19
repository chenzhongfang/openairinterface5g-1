/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_RedistributionInterFreqInfo_r13_H_
#define	_RedistributionInterFreqInfo_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RedistributionFactor-r13.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RedistributionNeighCellList_r13;

/* RedistributionInterFreqInfo-r13 */
typedef struct RedistributionInterFreqInfo_r13 {
	RedistributionFactor_r13_t	*redistributionFactorFreq_r13;	/* OPTIONAL */
	struct RedistributionNeighCellList_r13	*redistributionNeighCellList_r13;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RedistributionInterFreqInfo_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RedistributionInterFreqInfo_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_RedistributionInterFreqInfo_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_RedistributionInterFreqInfo_r13_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RedistributionNeighCellList-r13.h"

#endif	/* _RedistributionInterFreqInfo_r13_H_ */
#include <asn_internal.h>
