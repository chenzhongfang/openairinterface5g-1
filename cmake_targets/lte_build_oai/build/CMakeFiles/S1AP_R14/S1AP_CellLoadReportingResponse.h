/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SonTransfer-IEs"
 * 	found in "/home/user/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/S1AP_R14`
 */

#ifndef	_S1AP_CellLoadReportingResponse_H_
#define	_S1AP_CellLoadReportingResponse_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_EUTRANcellLoadReportingResponse.h"
#include <OCTET_STRING.h>
#include "S1AP_EHRPDSectorLoadReportingResponse.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_CellLoadReportingResponse_PR {
	S1AP_CellLoadReportingResponse_PR_NOTHING,	/* No components present */
	S1AP_CellLoadReportingResponse_PR_eUTRAN,
	S1AP_CellLoadReportingResponse_PR_uTRAN,
	S1AP_CellLoadReportingResponse_PR_gERAN,
	/* Extensions may appear below */
	S1AP_CellLoadReportingResponse_PR_eHRPD
} S1AP_CellLoadReportingResponse_PR;

/* S1AP_CellLoadReportingResponse */
typedef struct S1AP_CellLoadReportingResponse {
	S1AP_CellLoadReportingResponse_PR present;
	union S1AP_CellLoadReportingResponse_u {
		S1AP_EUTRANcellLoadReportingResponse_t	 eUTRAN;
		OCTET_STRING_t	 uTRAN;
		OCTET_STRING_t	 gERAN;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		S1AP_EHRPDSectorLoadReportingResponse_t	 eHRPD;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_CellLoadReportingResponse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_CellLoadReportingResponse;
extern asn_CHOICE_specifics_t asn_SPC_S1AP_CellLoadReportingResponse_specs_1;
extern asn_TYPE_member_t asn_MBR_S1AP_CellLoadReportingResponse_1[4];
extern asn_per_constraints_t asn_PER_type_S1AP_CellLoadReportingResponse_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_CellLoadReportingResponse_H_ */
#include <asn_internal.h>
