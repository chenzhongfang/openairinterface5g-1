/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_SystemInformationBlockType1_NB_v1350_H_
#define	_SystemInformationBlockType1_NB_v1350_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CellSelectionInfo_NB_v1350;
struct SystemInformationBlockType1_NB_v1430;

/* SystemInformationBlockType1-NB-v1350 */
typedef struct SystemInformationBlockType1_NB_v1350 {
	struct CellSelectionInfo_NB_v1350	*cellSelectionInfo_v1350;	/* OPTIONAL */
	struct SystemInformationBlockType1_NB_v1430	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType1_NB_v1350_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType1_NB_v1350;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType1_NB_v1350_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType1_NB_v1350_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CellSelectionInfo-NB-v1350.h"
#include "SystemInformationBlockType1-NB-v1430.h"

#endif	/* _SystemInformationBlockType1_NB_v1350_H_ */
#include <asn_internal.h>
