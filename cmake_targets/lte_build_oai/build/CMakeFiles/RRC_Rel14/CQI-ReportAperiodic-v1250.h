/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_CQI_ReportAperiodic_v1250_H_
#define	_CQI_ReportAperiodic_v1250_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeEnumerated.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CQI_ReportAperiodic_v1250_PR {
	CQI_ReportAperiodic_v1250_PR_NOTHING,	/* No components present */
	CQI_ReportAperiodic_v1250_PR_release,
	CQI_ReportAperiodic_v1250_PR_setup
} CQI_ReportAperiodic_v1250_PR;
typedef enum CQI_ReportAperiodic_v1250__setup__aperiodicCSI_Trigger_v1250__trigger_SubframeSetIndicator_r12 {
	CQI_ReportAperiodic_v1250__setup__aperiodicCSI_Trigger_v1250__trigger_SubframeSetIndicator_r12_s1	= 0,
	CQI_ReportAperiodic_v1250__setup__aperiodicCSI_Trigger_v1250__trigger_SubframeSetIndicator_r12_s2	= 1
} e_CQI_ReportAperiodic_v1250__setup__aperiodicCSI_Trigger_v1250__trigger_SubframeSetIndicator_r12;

/* CQI-ReportAperiodic-v1250 */
typedef struct CQI_ReportAperiodic_v1250 {
	CQI_ReportAperiodic_v1250_PR present;
	union CQI_ReportAperiodic_v1250_u {
		NULL_t	 release;
		struct CQI_ReportAperiodic_v1250__setup {
			struct CQI_ReportAperiodic_v1250__setup__aperiodicCSI_Trigger_v1250 {
				long	 trigger_SubframeSetIndicator_r12;
				BIT_STRING_t	 trigger1_SubframeSetIndicator_r12;
				BIT_STRING_t	 trigger2_SubframeSetIndicator_r12;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} aperiodicCSI_Trigger_v1250;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CQI_ReportAperiodic_v1250_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_trigger_SubframeSetIndicator_r12_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CQI_ReportAperiodic_v1250;
extern asn_CHOICE_specifics_t asn_SPC_CQI_ReportAperiodic_v1250_specs_1;
extern asn_TYPE_member_t asn_MBR_CQI_ReportAperiodic_v1250_1[2];
extern asn_per_constraints_t asn_PER_type_CQI_ReportAperiodic_v1250_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _CQI_ReportAperiodic_v1250_H_ */
#include <asn_internal.h>
