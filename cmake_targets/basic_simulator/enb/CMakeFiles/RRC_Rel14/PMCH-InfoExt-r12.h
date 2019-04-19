/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_PMCH_InfoExt_r12_H_
#define	_PMCH_InfoExt_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PMCH-Config-r12.h"
#include "MBMS-SessionInfoList-r9.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PMCH-InfoExt-r12 */
typedef struct PMCH_InfoExt_r12 {
	PMCH_Config_r12_t	 pmch_Config_r12;
	MBMS_SessionInfoList_r9_t	 mbms_SessionInfoList_r12;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PMCH_InfoExt_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PMCH_InfoExt_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_PMCH_InfoExt_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_PMCH_InfoExt_r12_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PMCH_InfoExt_r12_H_ */
#include <asn_internal.h>
