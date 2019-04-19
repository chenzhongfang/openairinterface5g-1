/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_CQI_ReportAperiodicHybrid_r14_H_
#define	_CQI_ReportAperiodicHybrid_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CQI_ReportAperiodicHybrid_r14__triggers_r14_PR {
	CQI_ReportAperiodicHybrid_r14__triggers_r14_PR_NOTHING,	/* No components present */
	CQI_ReportAperiodicHybrid_r14__triggers_r14_PR_oneBit_r14,
	CQI_ReportAperiodicHybrid_r14__triggers_r14_PR_twoBit_r14,
	CQI_ReportAperiodicHybrid_r14__triggers_r14_PR_threeBit_r14
} CQI_ReportAperiodicHybrid_r14__triggers_r14_PR;

/* CQI-ReportAperiodicHybrid-r14 */
typedef struct CQI_ReportAperiodicHybrid_r14 {
	struct CQI_ReportAperiodicHybrid_r14__triggers_r14 {
		CQI_ReportAperiodicHybrid_r14__triggers_r14_PR present;
		union CQI_ReportAperiodicHybrid_r14__triggers_r14_u {
			struct CQI_ReportAperiodicHybrid_r14__triggers_r14__oneBit_r14 {
				BIT_STRING_t	 trigger1_Indicator_r14;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} oneBit_r14;
			struct CQI_ReportAperiodicHybrid_r14__triggers_r14__twoBit_r14 {
				BIT_STRING_t	 trigger01_Indicator_r14;
				BIT_STRING_t	 trigger10_Indicator_r14;
				BIT_STRING_t	 trigger11_Indicator_r14;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} twoBit_r14;
			struct CQI_ReportAperiodicHybrid_r14__triggers_r14__threeBit_r14 {
				BIT_STRING_t	 trigger001_Indicator_r14;
				BIT_STRING_t	 trigger010_Indicator_r14;
				BIT_STRING_t	 trigger011_Indicator_r14;
				BIT_STRING_t	 trigger100_Indicator_r14;
				BIT_STRING_t	 trigger101_Indicator_r14;
				BIT_STRING_t	 trigger110_Indicator_r14;
				BIT_STRING_t	 trigger111_Indicator_r14;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} threeBit_r14;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *triggers_r14;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CQI_ReportAperiodicHybrid_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CQI_ReportAperiodicHybrid_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_CQI_ReportAperiodicHybrid_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_CQI_ReportAperiodicHybrid_r14_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _CQI_ReportAperiodicHybrid_r14_H_ */
#include <asn_internal.h>
