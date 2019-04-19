/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_CQI_ReportAperiodic_r10_H_
#define	_CQI_ReportAperiodic_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "CQI-ReportModeAperiodic.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CQI_ReportAperiodic_r10_PR {
	CQI_ReportAperiodic_r10_PR_NOTHING,	/* No components present */
	CQI_ReportAperiodic_r10_PR_release,
	CQI_ReportAperiodic_r10_PR_setup
} CQI_ReportAperiodic_r10_PR;

/* CQI-ReportAperiodic-r10 */
typedef struct CQI_ReportAperiodic_r10 {
	CQI_ReportAperiodic_r10_PR present;
	union CQI_ReportAperiodic_r10_u {
		NULL_t	 release;
		struct CQI_ReportAperiodic_r10__setup {
			CQI_ReportModeAperiodic_t	 cqi_ReportModeAperiodic_r10;
			struct CQI_ReportAperiodic_r10__setup__aperiodicCSI_Trigger_r10 {
				BIT_STRING_t	 trigger1_r10;
				BIT_STRING_t	 trigger2_r10;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *aperiodicCSI_Trigger_r10;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CQI_ReportAperiodic_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CQI_ReportAperiodic_r10;
extern asn_CHOICE_specifics_t asn_SPC_CQI_ReportAperiodic_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_CQI_ReportAperiodic_r10_1[2];
extern asn_per_constraints_t asn_PER_type_CQI_ReportAperiodic_r10_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _CQI_ReportAperiodic_r10_H_ */
#include <asn_internal.h>
