/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_SystemInformationBlockType18_r12_H_
#define	_SystemInformationBlockType18_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include "SL-CommRxPoolList-r12.h"
#include <constr_SEQUENCE.h>
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SystemInformationBlockType18_r12__ext1__commTxResourceUC_ReqAllowed_r13 {
	SystemInformationBlockType18_r12__ext1__commTxResourceUC_ReqAllowed_r13_true	= 0
} e_SystemInformationBlockType18_r12__ext1__commTxResourceUC_ReqAllowed_r13;
typedef enum SystemInformationBlockType18_r12__ext1__commTxAllowRelayCommon_r13 {
	SystemInformationBlockType18_r12__ext1__commTxAllowRelayCommon_r13_true	= 0
} e_SystemInformationBlockType18_r12__ext1__commTxAllowRelayCommon_r13;

/* Forward declarations */
struct SL_CommTxPoolList_r12;
struct SL_SyncConfigList_r12;
struct SL_CommTxPoolListExt_r13;

/* SystemInformationBlockType18-r12 */
typedef struct SystemInformationBlockType18_r12 {
	struct SystemInformationBlockType18_r12__commConfig_r12 {
		SL_CommRxPoolList_r12_t	 commRxPool_r12;
		struct SL_CommTxPoolList_r12	*commTxPoolNormalCommon_r12;	/* OPTIONAL */
		struct SL_CommTxPoolList_r12	*commTxPoolExceptional_r12;	/* OPTIONAL */
		struct SL_SyncConfigList_r12	*commSyncConfig_r12;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *commConfig_r12;
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct SystemInformationBlockType18_r12__ext1 {
		struct SL_CommTxPoolListExt_r13	*commTxPoolNormalCommonExt_r13;	/* OPTIONAL */
		long	*commTxResourceUC_ReqAllowed_r13;	/* OPTIONAL */
		long	*commTxAllowRelayCommon_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType18_r12_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_commTxResourceUC_ReqAllowed_r13_11;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_commTxAllowRelayCommon_r13_13;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType18_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType18_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType18_r12_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SL-CommTxPoolList-r12.h"
#include "SL-SyncConfigList-r12.h"
#include "SL-CommTxPoolListExt-r13.h"

#endif	/* _SystemInformationBlockType18_r12_H_ */
#include <asn_internal.h>
