/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_Paging_v1130_IEs_H_
#define	_Paging_v1130_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Paging_v1130_IEs__eab_ParamModification_r11 {
	Paging_v1130_IEs__eab_ParamModification_r11_true	= 0
} e_Paging_v1130_IEs__eab_ParamModification_r11;

/* Forward declarations */
struct Paging_v1310_IEs;

/* Paging-v1130-IEs */
typedef struct Paging_v1130_IEs {
	long	*eab_ParamModification_r11;	/* OPTIONAL */
	struct Paging_v1310_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Paging_v1130_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_eab_ParamModification_r11_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_Paging_v1130_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_Paging_v1130_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_Paging_v1130_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Paging-v1310-IEs.h"

#endif	/* _Paging_v1130_IEs_H_ */
#include <asn_internal.h>
