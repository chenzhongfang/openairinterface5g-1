/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-Sidelink-Preconf"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_SL_PreconfigCommPool_r12_H_
#define	_SL_PreconfigCommPool_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SL-CP-Len-r12.h"
#include "SL-PeriodComm-r12.h"
#include "SL-TF-ResourceConfig-r12.h"
#include "P0-SL-r12.h"
#include "SL-HoppingConfigComm-r12.h"
#include "SL-TRPT-Subset-r12.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SL_PriorityList_r13;

/* SL-PreconfigCommPool-r12 */
typedef struct SL_PreconfigCommPool_r12 {
	SL_CP_Len_r12_t	 sc_CP_Len_r12;
	SL_PeriodComm_r12_t	 sc_Period_r12;
	SL_TF_ResourceConfig_r12_t	 sc_TF_ResourceConfig_r12;
	P0_SL_r12_t	 sc_TxParameters_r12;
	SL_CP_Len_r12_t	 data_CP_Len_r12;
	SL_TF_ResourceConfig_r12_t	 data_TF_ResourceConfig_r12;
	SL_HoppingConfigComm_r12_t	 dataHoppingConfig_r12;
	P0_SL_r12_t	 dataTxParameters_r12;
	SL_TRPT_Subset_r12_t	 trpt_Subset_r12;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct SL_PreconfigCommPool_r12__ext1 {
		struct SL_PriorityList_r13	*priorityList_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_PreconfigCommPool_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_PreconfigCommPool_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_PreconfigCommPool_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_PreconfigCommPool_r12_1[10];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SL-PriorityList-r13.h"

#endif	/* _SL_PreconfigCommPool_r12_H_ */
#include <asn_internal.h>
