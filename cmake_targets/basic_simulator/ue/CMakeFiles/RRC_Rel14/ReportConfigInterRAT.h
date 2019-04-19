/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_ReportConfigInterRAT_H_
#define	_ReportConfigInterRAT_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "ReportInterval.h"
#include <NativeEnumerated.h>
#include "Hysteresis.h"
#include "TimeToTrigger.h"
#include "ThresholdUTRA.h"
#include "ThresholdGERAN.h"
#include "ThresholdCDMA2000.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>
#include "ThresholdEUTRA.h"
#include "WLAN-RSSI-Range-r13.h"
#include <BOOLEAN.h>
#include <NULL.h>
#include "RSRQ-Range-v1250.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ReportConfigInterRAT__triggerType_PR {
	ReportConfigInterRAT__triggerType_PR_NOTHING,	/* No components present */
	ReportConfigInterRAT__triggerType_PR_event,
	ReportConfigInterRAT__triggerType_PR_periodical
} ReportConfigInterRAT__triggerType_PR;
typedef enum ReportConfigInterRAT__triggerType__event__eventId_PR {
	ReportConfigInterRAT__triggerType__event__eventId_PR_NOTHING,	/* No components present */
	ReportConfigInterRAT__triggerType__event__eventId_PR_eventB1,
	ReportConfigInterRAT__triggerType__event__eventId_PR_eventB2,
	/* Extensions may appear below */
	ReportConfigInterRAT__triggerType__event__eventId_PR_eventW1_r13,
	ReportConfigInterRAT__triggerType__event__eventId_PR_eventW2_r13,
	ReportConfigInterRAT__triggerType__event__eventId_PR_eventW3_r13
} ReportConfigInterRAT__triggerType__event__eventId_PR;
typedef enum ReportConfigInterRAT__triggerType__event__eventId__eventB1__b1_Threshold_PR {
	ReportConfigInterRAT__triggerType__event__eventId__eventB1__b1_Threshold_PR_NOTHING,	/* No components present */
	ReportConfigInterRAT__triggerType__event__eventId__eventB1__b1_Threshold_PR_b1_ThresholdUTRA,
	ReportConfigInterRAT__triggerType__event__eventId__eventB1__b1_Threshold_PR_b1_ThresholdGERAN,
	ReportConfigInterRAT__triggerType__event__eventId__eventB1__b1_Threshold_PR_b1_ThresholdCDMA2000
} ReportConfigInterRAT__triggerType__event__eventId__eventB1__b1_Threshold_PR;
typedef enum ReportConfigInterRAT__triggerType__event__eventId__eventB2__b2_Threshold2_PR {
	ReportConfigInterRAT__triggerType__event__eventId__eventB2__b2_Threshold2_PR_NOTHING,	/* No components present */
	ReportConfigInterRAT__triggerType__event__eventId__eventB2__b2_Threshold2_PR_b2_Threshold2UTRA,
	ReportConfigInterRAT__triggerType__event__eventId__eventB2__b2_Threshold2_PR_b2_Threshold2GERAN,
	ReportConfigInterRAT__triggerType__event__eventId__eventB2__b2_Threshold2_PR_b2_Threshold2CDMA2000
} ReportConfigInterRAT__triggerType__event__eventId__eventB2__b2_Threshold2_PR;
typedef enum ReportConfigInterRAT__triggerType__periodical__purpose {
	ReportConfigInterRAT__triggerType__periodical__purpose_reportStrongestCells	= 0,
	ReportConfigInterRAT__triggerType__periodical__purpose_reportStrongestCellsForSON	= 1,
	ReportConfigInterRAT__triggerType__periodical__purpose_reportCGI	= 2
} e_ReportConfigInterRAT__triggerType__periodical__purpose;
typedef enum ReportConfigInterRAT__reportAmount {
	ReportConfigInterRAT__reportAmount_r1	= 0,
	ReportConfigInterRAT__reportAmount_r2	= 1,
	ReportConfigInterRAT__reportAmount_r4	= 2,
	ReportConfigInterRAT__reportAmount_r8	= 3,
	ReportConfigInterRAT__reportAmount_r16	= 4,
	ReportConfigInterRAT__reportAmount_r32	= 5,
	ReportConfigInterRAT__reportAmount_r64	= 6,
	ReportConfigInterRAT__reportAmount_infinity	= 7
} e_ReportConfigInterRAT__reportAmount;
typedef enum ReportConfigInterRAT__ext1__si_RequestForHO_r9 {
	ReportConfigInterRAT__ext1__si_RequestForHO_r9_setup	= 0
} e_ReportConfigInterRAT__ext1__si_RequestForHO_r9;
typedef enum ReportConfigInterRAT__ext2__reportQuantityUTRA_FDD_r10 {
	ReportConfigInterRAT__ext2__reportQuantityUTRA_FDD_r10_both	= 0
} e_ReportConfigInterRAT__ext2__reportQuantityUTRA_FDD_r10;
typedef enum ReportConfigInterRAT__ext4__b2_Threshold1_v1250_PR {
	ReportConfigInterRAT__ext4__b2_Threshold1_v1250_PR_NOTHING,	/* No components present */
	ReportConfigInterRAT__ext4__b2_Threshold1_v1250_PR_release,
	ReportConfigInterRAT__ext4__b2_Threshold1_v1250_PR_setup
} ReportConfigInterRAT__ext4__b2_Threshold1_v1250_PR;

/* Forward declarations */
struct ReportQuantityWLAN_r13;

/* ReportConfigInterRAT */
typedef struct ReportConfigInterRAT {
	struct ReportConfigInterRAT__triggerType {
		ReportConfigInterRAT__triggerType_PR present;
		union ReportConfigInterRAT__triggerType_u {
			struct ReportConfigInterRAT__triggerType__event {
				struct ReportConfigInterRAT__triggerType__event__eventId {
					ReportConfigInterRAT__triggerType__event__eventId_PR present;
					union ReportConfigInterRAT__triggerType__event__eventId_u {
						struct ReportConfigInterRAT__triggerType__event__eventId__eventB1 {
							struct ReportConfigInterRAT__triggerType__event__eventId__eventB1__b1_Threshold {
								ReportConfigInterRAT__triggerType__event__eventId__eventB1__b1_Threshold_PR present;
								union ReportConfigInterRAT__triggerType__event__eventId__eventB1__b1_Threshold_u {
									ThresholdUTRA_t	 b1_ThresholdUTRA;
									ThresholdGERAN_t	 b1_ThresholdGERAN;
									ThresholdCDMA2000_t	 b1_ThresholdCDMA2000;
								} choice;
								
								/* Context for parsing across buffer boundaries */
								asn_struct_ctx_t _asn_ctx;
							} b1_Threshold;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} eventB1;
						struct ReportConfigInterRAT__triggerType__event__eventId__eventB2 {
							ThresholdEUTRA_t	 b2_Threshold1;
							struct ReportConfigInterRAT__triggerType__event__eventId__eventB2__b2_Threshold2 {
								ReportConfigInterRAT__triggerType__event__eventId__eventB2__b2_Threshold2_PR present;
								union ReportConfigInterRAT__triggerType__event__eventId__eventB2__b2_Threshold2_u {
									ThresholdUTRA_t	 b2_Threshold2UTRA;
									ThresholdGERAN_t	 b2_Threshold2GERAN;
									ThresholdCDMA2000_t	 b2_Threshold2CDMA2000;
								} choice;
								
								/* Context for parsing across buffer boundaries */
								asn_struct_ctx_t _asn_ctx;
							} b2_Threshold2;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} eventB2;
						/*
						 * This type is extensible,
						 * possible extensions are below.
						 */
						struct ReportConfigInterRAT__triggerType__event__eventId__eventW1_r13 {
							WLAN_RSSI_Range_r13_t	 w1_Threshold_r13;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} eventW1_r13;
						struct ReportConfigInterRAT__triggerType__event__eventId__eventW2_r13 {
							WLAN_RSSI_Range_r13_t	 w2_Threshold1_r13;
							WLAN_RSSI_Range_r13_t	 w2_Threshold2_r13;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} eventW2_r13;
						struct ReportConfigInterRAT__triggerType__event__eventId__eventW3_r13 {
							WLAN_RSSI_Range_r13_t	 w3_Threshold_r13;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} eventW3_r13;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} eventId;
				Hysteresis_t	 hysteresis;
				TimeToTrigger_t	 timeToTrigger;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} event;
			struct ReportConfigInterRAT__triggerType__periodical {
				long	 purpose;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} periodical;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} triggerType;
	long	 maxReportCells;
	ReportInterval_t	 reportInterval;
	long	 reportAmount;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct ReportConfigInterRAT__ext1 {
		long	*si_RequestForHO_r9;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct ReportConfigInterRAT__ext2 {
		long	*reportQuantityUTRA_FDD_r10;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct ReportConfigInterRAT__ext3 {
		BOOLEAN_t	*includeLocationInfo_r11;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	struct ReportConfigInterRAT__ext4 {
		struct ReportConfigInterRAT__ext4__b2_Threshold1_v1250 {
			ReportConfigInterRAT__ext4__b2_Threshold1_v1250_PR present;
			union ReportConfigInterRAT__ext4__b2_Threshold1_v1250_u {
				NULL_t	 release;
				RSRQ_Range_v1250_t	 setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *b2_Threshold1_v1250;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext4;
	struct ReportConfigInterRAT__ext5 {
		struct ReportQuantityWLAN_r13	*reportQuantityWLAN_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext5;
	struct ReportConfigInterRAT__ext6 {
		BOOLEAN_t	*reportAnyWLAN_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext6;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ReportConfigInterRAT_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_purpose_27;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_reportAmount_33;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_si_RequestForHO_r9_44;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_reportQuantityUTRA_FDD_r10_47;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ReportConfigInterRAT;
extern asn_SEQUENCE_specifics_t asn_SPC_ReportConfigInterRAT_specs_1;
extern asn_TYPE_member_t asn_MBR_ReportConfigInterRAT_1[10];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ReportQuantityWLAN-r13.h"

#endif	/* _ReportConfigInterRAT_H_ */
#include <asn_internal.h>
