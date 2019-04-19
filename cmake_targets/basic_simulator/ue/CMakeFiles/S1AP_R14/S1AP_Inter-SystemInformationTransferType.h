/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Contents"
 * 	found in "/home/user/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/S1AP_R14`
 */

#ifndef	_S1AP_Inter_SystemInformationTransferType_H_
#define	_S1AP_Inter_SystemInformationTransferType_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_RIMTransfer.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_Inter_SystemInformationTransferType_PR {
	S1AP_Inter_SystemInformationTransferType_PR_NOTHING,	/* No components present */
	S1AP_Inter_SystemInformationTransferType_PR_rIMTransfer
	/* Extensions may appear below */
	
} S1AP_Inter_SystemInformationTransferType_PR;

/* S1AP_Inter-SystemInformationTransferType */
typedef struct S1AP_Inter_SystemInformationTransferType {
	S1AP_Inter_SystemInformationTransferType_PR present;
	union S1AP_Inter_SystemInformationTransferType_u {
		S1AP_RIMTransfer_t	 rIMTransfer;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_Inter_SystemInformationTransferType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_Inter_SystemInformationTransferType;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_Inter_SystemInformationTransferType_H_ */
#include <asn_internal.h>
