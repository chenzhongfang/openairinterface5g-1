/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/user/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/S1AP_R14`
 */

#ifndef	_S1AP_CriticalityDiagnostics_IE_List_H_
#define	_S1AP_CriticalityDiagnostics_IE_List_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct S1AP_CriticalityDiagnostics_IE_Item;

/* S1AP_CriticalityDiagnostics-IE-List */
typedef struct S1AP_CriticalityDiagnostics_IE_List {
	A_SEQUENCE_OF(struct S1AP_CriticalityDiagnostics_IE_Item) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_CriticalityDiagnostics_IE_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_CriticalityDiagnostics_IE_List;
extern asn_SET_OF_specifics_t asn_SPC_S1AP_CriticalityDiagnostics_IE_List_specs_1;
extern asn_TYPE_member_t asn_MBR_S1AP_CriticalityDiagnostics_IE_List_1[1];
extern asn_per_constraints_t asn_PER_type_S1AP_CriticalityDiagnostics_IE_List_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_CriticalityDiagnostics_IE_List_H_ */
#include <asn_internal.h>
