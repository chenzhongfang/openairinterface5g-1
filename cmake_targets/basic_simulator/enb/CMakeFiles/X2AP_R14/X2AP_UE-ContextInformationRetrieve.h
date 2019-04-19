/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "/home/user/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_UE_ContextInformationRetrieve_H_
#define	_X2AP_UE_ContextInformationRetrieve_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2AP_UE-S1AP-ID.h"
#include "X2AP_UESecurityCapabilities.h"
#include "X2AP_AS-SecurityInformation.h"
#include "X2AP_UEAggregateMaximumBitRate.h"
#include "X2AP_SubscriberProfileIDforRFP.h"
#include "X2AP_E-RABs-ToBeSetup-ListRetrieve.h"
#include "X2AP_RRC-Context.h"
#include "X2AP_ManagementBasedMDTallowed.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct X2AP_HandoverRestrictionList;
struct X2AP_LocationReportingInformation;
struct X2AP_MDTPLMNList;
struct X2AP_ProtocolExtensionContainer;

/* X2AP_UE-ContextInformationRetrieve */
typedef struct X2AP_UE_ContextInformationRetrieve {
	X2AP_UE_S1AP_ID_t	 mME_UE_S1AP_ID;
	X2AP_UESecurityCapabilities_t	 uESecurityCapabilities;
	X2AP_AS_SecurityInformation_t	 aS_SecurityInformation;
	X2AP_UEAggregateMaximumBitRate_t	 uEaggregateMaximumBitRate;
	X2AP_SubscriberProfileIDforRFP_t	*subscriberProfileIDforRFP;	/* OPTIONAL */
	X2AP_E_RABs_ToBeSetup_ListRetrieve_t	 e_RABs_ToBeSetup_ListRetrieve;
	X2AP_RRC_Context_t	 rRC_Context;
	struct X2AP_HandoverRestrictionList	*handoverRestrictionList;	/* OPTIONAL */
	struct X2AP_LocationReportingInformation	*locationReportingInformation;	/* OPTIONAL */
	X2AP_ManagementBasedMDTallowed_t	*managBasedMDTallowed;	/* OPTIONAL */
	struct X2AP_MDTPLMNList	*managBasedMDTPLMNList;	/* OPTIONAL */
	struct X2AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_UE_ContextInformationRetrieve_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_UE_ContextInformationRetrieve;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_UE_ContextInformationRetrieve_H_ */
#include <asn_internal.h>
