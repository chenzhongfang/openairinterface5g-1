/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_RRCConnectionResume_r13_IEs_H_
#define	_RRCConnectionResume_r13_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NextHopChainingCount.h"
#include <NativeEnumerated.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionResume_r13_IEs__drb_ContinueROHC_r13 {
	RRCConnectionResume_r13_IEs__drb_ContinueROHC_r13_true	= 0
} e_RRCConnectionResume_r13_IEs__drb_ContinueROHC_r13;

/* Forward declarations */
struct RadioResourceConfigDedicated;
struct MeasConfig;
struct AntennaInfoDedicated_v10i0;
struct RRCConnectionResume_v1430_IEs;

/* RRCConnectionResume-r13-IEs */
typedef struct RRCConnectionResume_r13_IEs {
	struct RadioResourceConfigDedicated	*radioResourceConfigDedicated_r13;	/* OPTIONAL */
	NextHopChainingCount_t	 nextHopChainingCount_r13;
	struct MeasConfig	*measConfig_r13;	/* OPTIONAL */
	struct AntennaInfoDedicated_v10i0	*antennaInfoDedicatedPCell_r13;	/* OPTIONAL */
	long	*drb_ContinueROHC_r13;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct RRCConnectionResume_v1430_IEs	*rrcConnectionResume_v1430_IEs;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionResume_r13_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_drb_ContinueROHC_r13_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionResume_r13_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionResume_r13_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionResume_r13_IEs_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RadioResourceConfigDedicated.h"
#include "MeasConfig.h"
#include "AntennaInfoDedicated-v10i0.h"
#include "RRCConnectionResume-v1430-IEs.h"

#endif	/* _RRCConnectionResume_r13_IEs_H_ */
#include <asn_internal.h>
