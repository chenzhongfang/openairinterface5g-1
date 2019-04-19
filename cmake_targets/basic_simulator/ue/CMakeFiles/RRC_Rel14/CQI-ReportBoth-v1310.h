/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_CQI_ReportBoth_v1310_H_
#define	_CQI_ReportBoth_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CSI_IM_ConfigToReleaseListExt_r13;
struct CSI_IM_ConfigToAddModListExt_r13;

/* CQI-ReportBoth-v1310 */
typedef struct CQI_ReportBoth_v1310 {
	struct CSI_IM_ConfigToReleaseListExt_r13	*csi_IM_ConfigToReleaseListExt_r13;	/* OPTIONAL */
	struct CSI_IM_ConfigToAddModListExt_r13	*csi_IM_ConfigToAddModListExt_r13;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CQI_ReportBoth_v1310_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CQI_ReportBoth_v1310;
extern asn_SEQUENCE_specifics_t asn_SPC_CQI_ReportBoth_v1310_specs_1;
extern asn_TYPE_member_t asn_MBR_CQI_ReportBoth_v1310_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CSI-IM-ConfigToReleaseListExt-r13.h"
#include "CSI-IM-ConfigToAddModListExt-r13.h"

#endif	/* _CQI_ReportBoth_v1310_H_ */
#include <asn_internal.h>