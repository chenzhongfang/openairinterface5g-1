/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/user/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_MDT_Configuration_H_
#define	_X2AP_MDT_Configuration_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2AP_MDT-Activation.h"
#include "X2AP_AreaScopeOfMDT.h"
#include "X2AP_MeasurementsToActivate.h"
#include "X2AP_M1ReportingTrigger.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct X2AP_M1ThresholdEventA2;
struct X2AP_M1PeriodicReporting;
struct X2AP_ProtocolExtensionContainer;

/* X2AP_MDT-Configuration */
typedef struct X2AP_MDT_Configuration {
	X2AP_MDT_Activation_t	 mdt_Activation;
	X2AP_AreaScopeOfMDT_t	 areaScopeOfMDT;
	X2AP_MeasurementsToActivate_t	 measurementsToActivate;
	X2AP_M1ReportingTrigger_t	 m1reportingTrigger;
	struct X2AP_M1ThresholdEventA2	*m1thresholdeventA2;	/* OPTIONAL */
	struct X2AP_M1PeriodicReporting	*m1periodicReporting;	/* OPTIONAL */
	struct X2AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_MDT_Configuration_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_MDT_Configuration;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_MDT_Configuration_H_ */
#include <asn_internal.h>
