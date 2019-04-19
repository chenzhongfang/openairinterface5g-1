/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_SCPTMConfiguration_BR_r14_H_
#define	_SCPTMConfiguration_BR_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SC-MTCH-InfoList-BR-r14.h"
#include <NativeInteger.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SCPTM_NeighbourCellList_r13;

/* SCPTMConfiguration-BR-r14 */
typedef struct SCPTMConfiguration_BR_r14 {
	SC_MTCH_InfoList_BR_r14_t	 sc_mtch_InfoList_r14;
	struct SCPTM_NeighbourCellList_r13	*scptm_NeighbourCellList_r14;	/* OPTIONAL */
	long	*p_b_r14;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct SCPTMConfiguration_BR_r14__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SCPTMConfiguration_BR_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SCPTMConfiguration_BR_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_SCPTMConfiguration_BR_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_SCPTMConfiguration_BR_r14_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SCPTM-NeighbourCellList-r13.h"

#endif	/* _SCPTMConfiguration_BR_r14_H_ */
#include <asn_internal.h>
