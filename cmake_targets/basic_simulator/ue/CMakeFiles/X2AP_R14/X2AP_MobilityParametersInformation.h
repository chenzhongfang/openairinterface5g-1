/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/user/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_MobilityParametersInformation_H_
#define	_X2AP_MobilityParametersInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* X2AP_MobilityParametersInformation */
typedef struct X2AP_MobilityParametersInformation {
	long	 handoverTriggerChange;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_MobilityParametersInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_MobilityParametersInformation;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_MobilityParametersInformation_H_ */
#include <asn_internal.h>