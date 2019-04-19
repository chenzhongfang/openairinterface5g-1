/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_IdleModeMobilityControlInfo_v9e0_H_
#define	_IdleModeMobilityControlInfo_v9e0_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FreqPriorityEUTRA_v9e0;

/* IdleModeMobilityControlInfo-v9e0 */
typedef struct IdleModeMobilityControlInfo_v9e0 {
	struct IdleModeMobilityControlInfo_v9e0__freqPriorityListEUTRA_v9e0 {
		A_SEQUENCE_OF(struct FreqPriorityEUTRA_v9e0) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} freqPriorityListEUTRA_v9e0;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IdleModeMobilityControlInfo_v9e0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IdleModeMobilityControlInfo_v9e0;
extern asn_SEQUENCE_specifics_t asn_SPC_IdleModeMobilityControlInfo_v9e0_specs_1;
extern asn_TYPE_member_t asn_MBR_IdleModeMobilityControlInfo_v9e0_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "FreqPriorityEUTRA-v9e0.h"

#endif	/* _IdleModeMobilityControlInfo_v9e0_H_ */
#include <asn_internal.h>
