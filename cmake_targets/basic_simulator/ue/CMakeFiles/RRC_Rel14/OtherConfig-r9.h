/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_OtherConfig_r9_H_
#define	_OtherConfig_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>
#include <NativeEnumerated.h>
#include <BOOLEAN.h>
#include <NULL.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum OtherConfig_r9__ext2__bw_PreferenceIndicationTimer_r14 {
	OtherConfig_r9__ext2__bw_PreferenceIndicationTimer_r14_s0	= 0,
	OtherConfig_r9__ext2__bw_PreferenceIndicationTimer_r14_s0dot5	= 1,
	OtherConfig_r9__ext2__bw_PreferenceIndicationTimer_r14_s1	= 2,
	OtherConfig_r9__ext2__bw_PreferenceIndicationTimer_r14_s2	= 3,
	OtherConfig_r9__ext2__bw_PreferenceIndicationTimer_r14_s5	= 4,
	OtherConfig_r9__ext2__bw_PreferenceIndicationTimer_r14_s10	= 5,
	OtherConfig_r9__ext2__bw_PreferenceIndicationTimer_r14_s20	= 6,
	OtherConfig_r9__ext2__bw_PreferenceIndicationTimer_r14_s30	= 7,
	OtherConfig_r9__ext2__bw_PreferenceIndicationTimer_r14_s60	= 8,
	OtherConfig_r9__ext2__bw_PreferenceIndicationTimer_r14_s90	= 9,
	OtherConfig_r9__ext2__bw_PreferenceIndicationTimer_r14_s120	= 10,
	OtherConfig_r9__ext2__bw_PreferenceIndicationTimer_r14_s300	= 11,
	OtherConfig_r9__ext2__bw_PreferenceIndicationTimer_r14_s600	= 12,
	OtherConfig_r9__ext2__bw_PreferenceIndicationTimer_r14_spare3	= 13,
	OtherConfig_r9__ext2__bw_PreferenceIndicationTimer_r14_spare2	= 14,
	OtherConfig_r9__ext2__bw_PreferenceIndicationTimer_r14_spare1	= 15
} e_OtherConfig_r9__ext2__bw_PreferenceIndicationTimer_r14;
typedef enum OtherConfig_r9__ext2__delayBudgetReportingConfig_r14_PR {
	OtherConfig_r9__ext2__delayBudgetReportingConfig_r14_PR_NOTHING,	/* No components present */
	OtherConfig_r9__ext2__delayBudgetReportingConfig_r14_PR_release,
	OtherConfig_r9__ext2__delayBudgetReportingConfig_r14_PR_setup
} OtherConfig_r9__ext2__delayBudgetReportingConfig_r14_PR;
typedef enum OtherConfig_r9__ext2__delayBudgetReportingConfig_r14__setup__delayBudgetReportingProhibitTimer_r14 {
	OtherConfig_r9__ext2__delayBudgetReportingConfig_r14__setup__delayBudgetReportingProhibitTimer_r14_s0	= 0,
	OtherConfig_r9__ext2__delayBudgetReportingConfig_r14__setup__delayBudgetReportingProhibitTimer_r14_s0dot4	= 1,
	OtherConfig_r9__ext2__delayBudgetReportingConfig_r14__setup__delayBudgetReportingProhibitTimer_r14_s0dot8	= 2,
	OtherConfig_r9__ext2__delayBudgetReportingConfig_r14__setup__delayBudgetReportingProhibitTimer_r14_s1dot6	= 3,
	OtherConfig_r9__ext2__delayBudgetReportingConfig_r14__setup__delayBudgetReportingProhibitTimer_r14_s3	= 4,
	OtherConfig_r9__ext2__delayBudgetReportingConfig_r14__setup__delayBudgetReportingProhibitTimer_r14_s6	= 5,
	OtherConfig_r9__ext2__delayBudgetReportingConfig_r14__setup__delayBudgetReportingProhibitTimer_r14_s12	= 6,
	OtherConfig_r9__ext2__delayBudgetReportingConfig_r14__setup__delayBudgetReportingProhibitTimer_r14_s30	= 7
} e_OtherConfig_r9__ext2__delayBudgetReportingConfig_r14__setup__delayBudgetReportingProhibitTimer_r14;
typedef enum OtherConfig_r9__ext2__rlm_ReportConfig_r14_PR {
	OtherConfig_r9__ext2__rlm_ReportConfig_r14_PR_NOTHING,	/* No components present */
	OtherConfig_r9__ext2__rlm_ReportConfig_r14_PR_release,
	OtherConfig_r9__ext2__rlm_ReportConfig_r14_PR_setup
} OtherConfig_r9__ext2__rlm_ReportConfig_r14_PR;
typedef enum OtherConfig_r9__ext2__rlm_ReportConfig_r14__setup__rlmReportTimer_r14 {
	OtherConfig_r9__ext2__rlm_ReportConfig_r14__setup__rlmReportTimer_r14_s0	= 0,
	OtherConfig_r9__ext2__rlm_ReportConfig_r14__setup__rlmReportTimer_r14_s0dot5	= 1,
	OtherConfig_r9__ext2__rlm_ReportConfig_r14__setup__rlmReportTimer_r14_s1	= 2,
	OtherConfig_r9__ext2__rlm_ReportConfig_r14__setup__rlmReportTimer_r14_s2	= 3,
	OtherConfig_r9__ext2__rlm_ReportConfig_r14__setup__rlmReportTimer_r14_s5	= 4,
	OtherConfig_r9__ext2__rlm_ReportConfig_r14__setup__rlmReportTimer_r14_s10	= 5,
	OtherConfig_r9__ext2__rlm_ReportConfig_r14__setup__rlmReportTimer_r14_s20	= 6,
	OtherConfig_r9__ext2__rlm_ReportConfig_r14__setup__rlmReportTimer_r14_s30	= 7,
	OtherConfig_r9__ext2__rlm_ReportConfig_r14__setup__rlmReportTimer_r14_s60	= 8,
	OtherConfig_r9__ext2__rlm_ReportConfig_r14__setup__rlmReportTimer_r14_s90	= 9,
	OtherConfig_r9__ext2__rlm_ReportConfig_r14__setup__rlmReportTimer_r14_s120	= 10,
	OtherConfig_r9__ext2__rlm_ReportConfig_r14__setup__rlmReportTimer_r14_s300	= 11,
	OtherConfig_r9__ext2__rlm_ReportConfig_r14__setup__rlmReportTimer_r14_s600	= 12,
	OtherConfig_r9__ext2__rlm_ReportConfig_r14__setup__rlmReportTimer_r14_spare3	= 13,
	OtherConfig_r9__ext2__rlm_ReportConfig_r14__setup__rlmReportTimer_r14_spare2	= 14,
	OtherConfig_r9__ext2__rlm_ReportConfig_r14__setup__rlmReportTimer_r14_spare1	= 15
} e_OtherConfig_r9__ext2__rlm_ReportConfig_r14__setup__rlmReportTimer_r14;
typedef enum OtherConfig_r9__ext2__rlm_ReportConfig_r14__setup__rlmReportRep_MPDCCH_r14 {
	OtherConfig_r9__ext2__rlm_ReportConfig_r14__setup__rlmReportRep_MPDCCH_r14_setup	= 0
} e_OtherConfig_r9__ext2__rlm_ReportConfig_r14__setup__rlmReportRep_MPDCCH_r14;
typedef enum OtherConfig_r9__ext3__overheatingAssistanceConfig_r14_PR {
	OtherConfig_r9__ext3__overheatingAssistanceConfig_r14_PR_NOTHING,	/* No components present */
	OtherConfig_r9__ext3__overheatingAssistanceConfig_r14_PR_release,
	OtherConfig_r9__ext3__overheatingAssistanceConfig_r14_PR_setup
} OtherConfig_r9__ext3__overheatingAssistanceConfig_r14_PR;
typedef enum OtherConfig_r9__ext3__overheatingAssistanceConfig_r14__setup__overheatingIndicationProhibitTimer_r14 {
	OtherConfig_r9__ext3__overheatingAssistanceConfig_r14__setup__overheatingIndicationProhibitTimer_r14_s0	= 0,
	OtherConfig_r9__ext3__overheatingAssistanceConfig_r14__setup__overheatingIndicationProhibitTimer_r14_s0dot5	= 1,
	OtherConfig_r9__ext3__overheatingAssistanceConfig_r14__setup__overheatingIndicationProhibitTimer_r14_s1	= 2,
	OtherConfig_r9__ext3__overheatingAssistanceConfig_r14__setup__overheatingIndicationProhibitTimer_r14_s2	= 3,
	OtherConfig_r9__ext3__overheatingAssistanceConfig_r14__setup__overheatingIndicationProhibitTimer_r14_s5	= 4,
	OtherConfig_r9__ext3__overheatingAssistanceConfig_r14__setup__overheatingIndicationProhibitTimer_r14_s10	= 5,
	OtherConfig_r9__ext3__overheatingAssistanceConfig_r14__setup__overheatingIndicationProhibitTimer_r14_s20	= 6,
	OtherConfig_r9__ext3__overheatingAssistanceConfig_r14__setup__overheatingIndicationProhibitTimer_r14_s30	= 7,
	OtherConfig_r9__ext3__overheatingAssistanceConfig_r14__setup__overheatingIndicationProhibitTimer_r14_s60	= 8,
	OtherConfig_r9__ext3__overheatingAssistanceConfig_r14__setup__overheatingIndicationProhibitTimer_r14_s90	= 9,
	OtherConfig_r9__ext3__overheatingAssistanceConfig_r14__setup__overheatingIndicationProhibitTimer_r14_s120	= 10,
	OtherConfig_r9__ext3__overheatingAssistanceConfig_r14__setup__overheatingIndicationProhibitTimer_r14_s300	= 11,
	OtherConfig_r9__ext3__overheatingAssistanceConfig_r14__setup__overheatingIndicationProhibitTimer_r14_s600	= 12,
	OtherConfig_r9__ext3__overheatingAssistanceConfig_r14__setup__overheatingIndicationProhibitTimer_r14_spare3	= 13,
	OtherConfig_r9__ext3__overheatingAssistanceConfig_r14__setup__overheatingIndicationProhibitTimer_r14_spare2	= 14,
	OtherConfig_r9__ext3__overheatingAssistanceConfig_r14__setup__overheatingIndicationProhibitTimer_r14_spare1	= 15
} e_OtherConfig_r9__ext3__overheatingAssistanceConfig_r14__setup__overheatingIndicationProhibitTimer_r14;

/* Forward declarations */
struct ReportProximityConfig_r9;
struct IDC_Config_r11;
struct PowerPrefIndicationConfig_r11;
struct ObtainLocationConfig_r11;

/* OtherConfig-r9 */
typedef struct OtherConfig_r9 {
	struct ReportProximityConfig_r9	*reportProximityConfig_r9;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct OtherConfig_r9__ext1 {
		struct IDC_Config_r11	*idc_Config_r11;	/* OPTIONAL */
		struct PowerPrefIndicationConfig_r11	*powerPrefIndicationConfig_r11;	/* OPTIONAL */
		struct ObtainLocationConfig_r11	*obtainLocationConfig_r11;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct OtherConfig_r9__ext2 {
		long	*bw_PreferenceIndicationTimer_r14;	/* OPTIONAL */
		BOOLEAN_t	*sps_AssistanceInfoReport_r14;	/* OPTIONAL */
		struct OtherConfig_r9__ext2__delayBudgetReportingConfig_r14 {
			OtherConfig_r9__ext2__delayBudgetReportingConfig_r14_PR present;
			union OtherConfig_r9__ext2__delayBudgetReportingConfig_r14_u {
				NULL_t	 release;
				struct OtherConfig_r9__ext2__delayBudgetReportingConfig_r14__setup {
					long	 delayBudgetReportingProhibitTimer_r14;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *delayBudgetReportingConfig_r14;
		struct OtherConfig_r9__ext2__rlm_ReportConfig_r14 {
			OtherConfig_r9__ext2__rlm_ReportConfig_r14_PR present;
			union OtherConfig_r9__ext2__rlm_ReportConfig_r14_u {
				NULL_t	 release;
				struct OtherConfig_r9__ext2__rlm_ReportConfig_r14__setup {
					long	 rlmReportTimer_r14;
					long	*rlmReportRep_MPDCCH_r14;	/* OPTIONAL */
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *rlm_ReportConfig_r14;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct OtherConfig_r9__ext3 {
		struct OtherConfig_r9__ext3__overheatingAssistanceConfig_r14 {
			OtherConfig_r9__ext3__overheatingAssistanceConfig_r14_PR present;
			union OtherConfig_r9__ext3__overheatingAssistanceConfig_r14_u {
				NULL_t	 release;
				struct OtherConfig_r9__ext3__overheatingAssistanceConfig_r14__setup {
					long	 overheatingIndicationProhibitTimer_r14;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *overheatingAssistanceConfig_r14;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} OtherConfig_r9_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_bw_PreferenceIndicationTimer_r14_9;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_delayBudgetReportingProhibitTimer_r14_30;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_rlmReportTimer_r14_42;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_rlmReportRep_MPDCCH_r14_59;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_overheatingIndicationProhibitTimer_r14_65;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_OtherConfig_r9;
extern asn_SEQUENCE_specifics_t asn_SPC_OtherConfig_r9_specs_1;
extern asn_TYPE_member_t asn_MBR_OtherConfig_r9_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ReportProximityConfig-r9.h"
#include "IDC-Config-r11.h"
#include "PowerPrefIndicationConfig-r11.h"
#include "ObtainLocationConfig-r11.h"

#endif	/* _OtherConfig_r9_H_ */
#include <asn_internal.h>
