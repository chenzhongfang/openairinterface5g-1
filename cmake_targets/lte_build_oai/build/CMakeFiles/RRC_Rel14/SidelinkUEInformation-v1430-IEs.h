/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_SidelinkUEInformation_v1430_IEs_H_
#define	_SidelinkUEInformation_v1430_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SidelinkUEInformation_v1430_IEs__p2x_CommTxType_r14 {
	SidelinkUEInformation_v1430_IEs__p2x_CommTxType_r14_true	= 0
} e_SidelinkUEInformation_v1430_IEs__p2x_CommTxType_r14;

/* Forward declarations */
struct SL_V2X_CommFreqList_r14;
struct SL_V2X_CommTxFreqList_r14;

/* SidelinkUEInformation-v1430-IEs */
typedef struct SidelinkUEInformation_v1430_IEs {
	struct SL_V2X_CommFreqList_r14	*v2x_CommRxInterestedFreqList_r14;	/* OPTIONAL */
	long	*p2x_CommTxType_r14;	/* OPTIONAL */
	struct SL_V2X_CommTxFreqList_r14	*v2x_CommTxResourceReq_r14;	/* OPTIONAL */
	struct SidelinkUEInformation_v1430_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SidelinkUEInformation_v1430_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_p2x_CommTxType_r14_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SidelinkUEInformation_v1430_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_SidelinkUEInformation_v1430_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_SidelinkUEInformation_v1430_IEs_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SL-V2X-CommFreqList-r14.h"
#include "SL-V2X-CommTxFreqList-r14.h"

#endif	/* _SidelinkUEInformation_v1430_IEs_H_ */
#include <asn_internal.h>
