/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_SON_Parameters_r9_H_
#define	_SON_Parameters_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SON_Parameters_r9__rach_Report_r9 {
	SON_Parameters_r9__rach_Report_r9_supported	= 0
} e_SON_Parameters_r9__rach_Report_r9;

/* SON-Parameters-r9 */
typedef struct SON_Parameters_r9 {
	long	*rach_Report_r9;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SON_Parameters_r9_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_rach_Report_r9_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SON_Parameters_r9;
extern asn_SEQUENCE_specifics_t asn_SPC_SON_Parameters_r9_specs_1;
extern asn_TYPE_member_t asn_MBR_SON_Parameters_r9_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _SON_Parameters_r9_H_ */
#include <asn_internal.h>
