/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_CQI_ReportConfig_v920_H_
#define	_CQI_ReportConfig_v920_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CQI_ReportConfig_v920__cqi_Mask_r9 {
	CQI_ReportConfig_v920__cqi_Mask_r9_setup	= 0
} e_CQI_ReportConfig_v920__cqi_Mask_r9;
typedef enum CQI_ReportConfig_v920__pmi_RI_Report_r9 {
	CQI_ReportConfig_v920__pmi_RI_Report_r9_setup	= 0
} e_CQI_ReportConfig_v920__pmi_RI_Report_r9;

/* CQI-ReportConfig-v920 */
typedef struct CQI_ReportConfig_v920 {
	long	*cqi_Mask_r9;	/* OPTIONAL */
	long	*pmi_RI_Report_r9;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CQI_ReportConfig_v920_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_cqi_Mask_r9_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pmi_RI_Report_r9_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CQI_ReportConfig_v920;
extern asn_SEQUENCE_specifics_t asn_SPC_CQI_ReportConfig_v920_specs_1;
extern asn_TYPE_member_t asn_MBR_CQI_ReportConfig_v920_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CQI_ReportConfig_v920_H_ */
#include <asn_internal.h>
