/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_SL_CommResourcePool_r12_H_
#define	_SL_CommResourcePool_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SL-CP-Len-r12.h"
#include "SL-PeriodComm-r12.h"
#include "SL-TF-ResourceConfig-r12.h"
#include "SL-HoppingConfigComm-r12.h"
#include "SL-TRPT-Subset-r12.h"
#include <constr_SEQUENCE.h>
#include <NativeInteger.h>
#include "SL-TxParameters-r12.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TDD_Config;
struct SL_PriorityList_r13;

/* SL-CommResourcePool-r12 */
typedef struct SL_CommResourcePool_r12 {
	SL_CP_Len_r12_t	 sc_CP_Len_r12;
	SL_PeriodComm_r12_t	 sc_Period_r12;
	SL_TF_ResourceConfig_r12_t	 sc_TF_ResourceConfig_r12;
	SL_CP_Len_r12_t	 data_CP_Len_r12;
	SL_HoppingConfigComm_r12_t	 dataHoppingConfig_r12;
	struct SL_CommResourcePool_r12__ue_SelectedResourceConfig_r12 {
		SL_TF_ResourceConfig_r12_t	 data_TF_ResourceConfig_r12;
		SL_TRPT_Subset_r12_t	*trpt_Subset_r12;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ue_SelectedResourceConfig_r12;
	struct SL_CommResourcePool_r12__rxParametersNCell_r12 {
		struct TDD_Config	*tdd_Config_r12;	/* OPTIONAL */
		long	 syncConfigIndex_r12;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *rxParametersNCell_r12;
	struct SL_CommResourcePool_r12__txParameters_r12 {
		SL_TxParameters_r12_t	 sc_TxParameters_r12;
		SL_TxParameters_r12_t	 dataTxParameters_r12;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *txParameters_r12;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct SL_CommResourcePool_r12__ext1 {
		struct SL_PriorityList_r13	*priorityList_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_CommResourcePool_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_CommResourcePool_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_CommResourcePool_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_CommResourcePool_r12_1[9];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "TDD-Config.h"
#include "SL-PriorityList-r13.h"

#endif	/* _SL_CommResourcePool_r12_H_ */
#include <asn_internal.h>
