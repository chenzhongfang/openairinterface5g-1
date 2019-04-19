/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_MeasDS_Config_r12_H_
#define	_MeasDS_Config_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeInteger.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasDS_Config_r12_PR {
	MeasDS_Config_r12_PR_NOTHING,	/* No components present */
	MeasDS_Config_r12_PR_release,
	MeasDS_Config_r12_PR_setup
} MeasDS_Config_r12_PR;
typedef enum MeasDS_Config_r12__setup__dmtc_PeriodOffset_r12_PR {
	MeasDS_Config_r12__setup__dmtc_PeriodOffset_r12_PR_NOTHING,	/* No components present */
	MeasDS_Config_r12__setup__dmtc_PeriodOffset_r12_PR_ms40_r12,
	MeasDS_Config_r12__setup__dmtc_PeriodOffset_r12_PR_ms80_r12,
	MeasDS_Config_r12__setup__dmtc_PeriodOffset_r12_PR_ms160_r12
	/* Extensions may appear below */
	
} MeasDS_Config_r12__setup__dmtc_PeriodOffset_r12_PR;
typedef enum MeasDS_Config_r12__setup__ds_OccasionDuration_r12_PR {
	MeasDS_Config_r12__setup__ds_OccasionDuration_r12_PR_NOTHING,	/* No components present */
	MeasDS_Config_r12__setup__ds_OccasionDuration_r12_PR_durationFDD_r12,
	MeasDS_Config_r12__setup__ds_OccasionDuration_r12_PR_durationTDD_r12
} MeasDS_Config_r12__setup__ds_OccasionDuration_r12_PR;

/* Forward declarations */
struct MeasCSI_RS_ToRemoveList_r12;
struct MeasCSI_RS_ToAddModList_r12;

/* MeasDS-Config-r12 */
typedef struct MeasDS_Config_r12 {
	MeasDS_Config_r12_PR present;
	union MeasDS_Config_r12_u {
		NULL_t	 release;
		struct MeasDS_Config_r12__setup {
			struct MeasDS_Config_r12__setup__dmtc_PeriodOffset_r12 {
				MeasDS_Config_r12__setup__dmtc_PeriodOffset_r12_PR present;
				union MeasDS_Config_r12__setup__dmtc_PeriodOffset_r12_u {
					long	 ms40_r12;
					long	 ms80_r12;
					long	 ms160_r12;
					/*
					 * This type is extensible,
					 * possible extensions are below.
					 */
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} dmtc_PeriodOffset_r12;
			struct MeasDS_Config_r12__setup__ds_OccasionDuration_r12 {
				MeasDS_Config_r12__setup__ds_OccasionDuration_r12_PR present;
				union MeasDS_Config_r12__setup__ds_OccasionDuration_r12_u {
					long	 durationFDD_r12;
					long	 durationTDD_r12;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} ds_OccasionDuration_r12;
			struct MeasCSI_RS_ToRemoveList_r12	*measCSI_RS_ToRemoveList_r12;	/* OPTIONAL */
			struct MeasCSI_RS_ToAddModList_r12	*measCSI_RS_ToAddModList_r12;	/* OPTIONAL */
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasDS_Config_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasDS_Config_r12;
extern asn_CHOICE_specifics_t asn_SPC_MeasDS_Config_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasDS_Config_r12_1[2];
extern asn_per_constraints_t asn_PER_type_MeasDS_Config_r12_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasCSI-RS-ToRemoveList-r12.h"
#include "MeasCSI-RS-ToAddModList-r12.h"

#endif	/* _MeasDS_Config_r12_H_ */
#include <asn_internal.h>
