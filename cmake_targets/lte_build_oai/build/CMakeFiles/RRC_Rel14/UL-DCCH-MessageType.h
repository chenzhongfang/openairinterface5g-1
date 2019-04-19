/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_UL_DCCH_MessageType_H_
#define	_UL_DCCH_MessageType_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CSFBParametersRequestCDMA2000.h"
#include "MeasurementReport.h"
#include "RRCConnectionReconfigurationComplete.h"
#include "RRCConnectionReestablishmentComplete.h"
#include "RRCConnectionSetupComplete.h"
#include "SecurityModeComplete.h"
#include "SecurityModeFailure.h"
#include "UECapabilityInformation.h"
#include "ULHandoverPreparationTransfer.h"
#include "ULInformationTransfer.h"
#include "CounterCheckResponse.h"
#include "UEInformationResponse-r9.h"
#include "ProximityIndication-r9.h"
#include "RNReconfigurationComplete-r10.h"
#include "MBMSCountingResponse-r10.h"
#include "InterFreqRSTDMeasurementIndication-r10.h"
#include <constr_CHOICE.h>
#include "UEAssistanceInformation-r11.h"
#include "InDeviceCoexIndication-r11.h"
#include "MBMSInterestIndication-r11.h"
#include "SCGFailureInformation-r12.h"
#include "SidelinkUEInformation-r12.h"
#include "WLANConnectionStatusReport-r13.h"
#include "RRCConnectionResumeComplete-r13.h"
#include <NULL.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UL_DCCH_MessageType_PR {
	UL_DCCH_MessageType_PR_NOTHING,	/* No components present */
	UL_DCCH_MessageType_PR_c1,
	UL_DCCH_MessageType_PR_messageClassExtension
} UL_DCCH_MessageType_PR;
typedef enum UL_DCCH_MessageType__c1_PR {
	UL_DCCH_MessageType__c1_PR_NOTHING,	/* No components present */
	UL_DCCH_MessageType__c1_PR_csfbParametersRequestCDMA2000,
	UL_DCCH_MessageType__c1_PR_measurementReport,
	UL_DCCH_MessageType__c1_PR_rrcConnectionReconfigurationComplete,
	UL_DCCH_MessageType__c1_PR_rrcConnectionReestablishmentComplete,
	UL_DCCH_MessageType__c1_PR_rrcConnectionSetupComplete,
	UL_DCCH_MessageType__c1_PR_securityModeComplete,
	UL_DCCH_MessageType__c1_PR_securityModeFailure,
	UL_DCCH_MessageType__c1_PR_ueCapabilityInformation,
	UL_DCCH_MessageType__c1_PR_ulHandoverPreparationTransfer,
	UL_DCCH_MessageType__c1_PR_ulInformationTransfer,
	UL_DCCH_MessageType__c1_PR_counterCheckResponse,
	UL_DCCH_MessageType__c1_PR_ueInformationResponse_r9,
	UL_DCCH_MessageType__c1_PR_proximityIndication_r9,
	UL_DCCH_MessageType__c1_PR_rnReconfigurationComplete_r10,
	UL_DCCH_MessageType__c1_PR_mbmsCountingResponse_r10,
	UL_DCCH_MessageType__c1_PR_interFreqRSTDMeasurementIndication_r10
} UL_DCCH_MessageType__c1_PR;
typedef enum UL_DCCH_MessageType__messageClassExtension_PR {
	UL_DCCH_MessageType__messageClassExtension_PR_NOTHING,	/* No components present */
	UL_DCCH_MessageType__messageClassExtension_PR_c2,
	UL_DCCH_MessageType__messageClassExtension_PR_messageClassExtensionFuture_r11
} UL_DCCH_MessageType__messageClassExtension_PR;
typedef enum UL_DCCH_MessageType__messageClassExtension__c2_PR {
	UL_DCCH_MessageType__messageClassExtension__c2_PR_NOTHING,	/* No components present */
	UL_DCCH_MessageType__messageClassExtension__c2_PR_ueAssistanceInformation_r11,
	UL_DCCH_MessageType__messageClassExtension__c2_PR_inDeviceCoexIndication_r11,
	UL_DCCH_MessageType__messageClassExtension__c2_PR_mbmsInterestIndication_r11,
	UL_DCCH_MessageType__messageClassExtension__c2_PR_scgFailureInformation_r12,
	UL_DCCH_MessageType__messageClassExtension__c2_PR_sidelinkUEInformation_r12,
	UL_DCCH_MessageType__messageClassExtension__c2_PR_wlanConnectionStatusReport_r13,
	UL_DCCH_MessageType__messageClassExtension__c2_PR_rrcConnectionResumeComplete_r13,
	UL_DCCH_MessageType__messageClassExtension__c2_PR_spare9,
	UL_DCCH_MessageType__messageClassExtension__c2_PR_spare8,
	UL_DCCH_MessageType__messageClassExtension__c2_PR_spare7,
	UL_DCCH_MessageType__messageClassExtension__c2_PR_spare6,
	UL_DCCH_MessageType__messageClassExtension__c2_PR_spare5,
	UL_DCCH_MessageType__messageClassExtension__c2_PR_spare4,
	UL_DCCH_MessageType__messageClassExtension__c2_PR_spare3,
	UL_DCCH_MessageType__messageClassExtension__c2_PR_spare2,
	UL_DCCH_MessageType__messageClassExtension__c2_PR_spare1
} UL_DCCH_MessageType__messageClassExtension__c2_PR;

/* UL-DCCH-MessageType */
typedef struct UL_DCCH_MessageType {
	UL_DCCH_MessageType_PR present;
	union UL_DCCH_MessageType_u {
		struct UL_DCCH_MessageType__c1 {
			UL_DCCH_MessageType__c1_PR present;
			union UL_DCCH_MessageType__c1_u {
				CSFBParametersRequestCDMA2000_t	 csfbParametersRequestCDMA2000;
				MeasurementReport_t	 measurementReport;
				RRCConnectionReconfigurationComplete_t	 rrcConnectionReconfigurationComplete;
				RRCConnectionReestablishmentComplete_t	 rrcConnectionReestablishmentComplete;
				RRCConnectionSetupComplete_t	 rrcConnectionSetupComplete;
				SecurityModeComplete_t	 securityModeComplete;
				SecurityModeFailure_t	 securityModeFailure;
				UECapabilityInformation_t	 ueCapabilityInformation;
				ULHandoverPreparationTransfer_t	 ulHandoverPreparationTransfer;
				ULInformationTransfer_t	 ulInformationTransfer;
				CounterCheckResponse_t	 counterCheckResponse;
				UEInformationResponse_r9_t	 ueInformationResponse_r9;
				ProximityIndication_r9_t	 proximityIndication_r9;
				RNReconfigurationComplete_r10_t	 rnReconfigurationComplete_r10;
				MBMSCountingResponse_r10_t	 mbmsCountingResponse_r10;
				InterFreqRSTDMeasurementIndication_r10_t	 interFreqRSTDMeasurementIndication_r10;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} c1;
		struct UL_DCCH_MessageType__messageClassExtension {
			UL_DCCH_MessageType__messageClassExtension_PR present;
			union UL_DCCH_MessageType__messageClassExtension_u {
				struct UL_DCCH_MessageType__messageClassExtension__c2 {
					UL_DCCH_MessageType__messageClassExtension__c2_PR present;
					union UL_DCCH_MessageType__messageClassExtension__c2_u {
						UEAssistanceInformation_r11_t	 ueAssistanceInformation_r11;
						InDeviceCoexIndication_r11_t	 inDeviceCoexIndication_r11;
						MBMSInterestIndication_r11_t	 mbmsInterestIndication_r11;
						SCGFailureInformation_r12_t	 scgFailureInformation_r12;
						SidelinkUEInformation_r12_t	 sidelinkUEInformation_r12;
						WLANConnectionStatusReport_r13_t	 wlanConnectionStatusReport_r13;
						RRCConnectionResumeComplete_r13_t	 rrcConnectionResumeComplete_r13;
						NULL_t	 spare9;
						NULL_t	 spare8;
						NULL_t	 spare7;
						NULL_t	 spare6;
						NULL_t	 spare5;
						NULL_t	 spare4;
						NULL_t	 spare3;
						NULL_t	 spare2;
						NULL_t	 spare1;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} c2;
				struct UL_DCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r11 {
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} messageClassExtensionFuture_r11;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} messageClassExtension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_DCCH_MessageType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_DCCH_MessageType;
extern asn_CHOICE_specifics_t asn_SPC_UL_DCCH_MessageType_specs_1;
extern asn_TYPE_member_t asn_MBR_UL_DCCH_MessageType_1[2];
extern asn_per_constraints_t asn_PER_type_UL_DCCH_MessageType_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _UL_DCCH_MessageType_H_ */
#include <asn_internal.h>
