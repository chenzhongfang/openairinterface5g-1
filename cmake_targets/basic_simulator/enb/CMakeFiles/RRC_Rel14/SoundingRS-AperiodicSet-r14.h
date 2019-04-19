/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_SoundingRS_AperiodicSet_r14_H_
#define	_SoundingRS_AperiodicSet_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SoundingRS-UL-ConfigDedicatedAperiodic-r10.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SRS_CC_SetIndex_r14;

/* SoundingRS-AperiodicSet-r14 */
typedef struct SoundingRS_AperiodicSet_r14 {
	struct SoundingRS_AperiodicSet_r14__srs_CC_SetIndexList_r14 {
		A_SEQUENCE_OF(struct SRS_CC_SetIndex_r14) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *srs_CC_SetIndexList_r14;
	SoundingRS_UL_ConfigDedicatedAperiodic_r10_t	 soundingRS_UL_ConfigDedicatedAperiodic_r14;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SoundingRS_AperiodicSet_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SoundingRS_AperiodicSet_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_SoundingRS_AperiodicSet_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_SoundingRS_AperiodicSet_r14_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SRS-CC-SetIndex-r14.h"

#endif	/* _SoundingRS_AperiodicSet_r14_H_ */
#include <asn_internal.h>
