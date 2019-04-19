/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_SystemInformationBlockType9_H_
#define	_SystemInformationBlockType9_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SystemInformationBlockType9 */
typedef struct SystemInformationBlockType9 {
	OCTET_STRING_t	*hnb_Name;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType9;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType9_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType9_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformationBlockType9_H_ */
#include <asn_internal.h>
