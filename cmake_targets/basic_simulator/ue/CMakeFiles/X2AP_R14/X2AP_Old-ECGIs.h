/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "/home/user/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_Old_ECGIs_H_
#define	_X2AP_Old_ECGIs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct X2AP_ECGI;

/* X2AP_Old-ECGIs */
typedef struct X2AP_Old_ECGIs {
	A_SEQUENCE_OF(struct X2AP_ECGI) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_Old_ECGIs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_Old_ECGIs;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_Old_ECGIs_H_ */
#include <asn_internal.h>
