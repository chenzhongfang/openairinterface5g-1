/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_SystemInformationBlockType5_v9e0_IEs_H_
#define	_SystemInformationBlockType5_v9e0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SystemInformationBlockType5_v10j0_IEs;
struct InterFreqCarrierFreqInfo_v9e0;

/* SystemInformationBlockType5-v9e0-IEs */
typedef struct SystemInformationBlockType5_v9e0_IEs {
	struct SystemInformationBlockType5_v9e0_IEs__interFreqCarrierFreqList_v9e0 {
		A_SEQUENCE_OF(struct InterFreqCarrierFreqInfo_v9e0) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *interFreqCarrierFreqList_v9e0;
	struct SystemInformationBlockType5_v10j0_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType5_v9e0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType5_v9e0_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType5_v9e0_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType5_v9e0_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SystemInformationBlockType5-v10j0-IEs.h"
#include "InterFreqCarrierFreqInfo-v9e0.h"

#endif	/* _SystemInformationBlockType5_v9e0_IEs_H_ */
#include <asn_internal.h>
