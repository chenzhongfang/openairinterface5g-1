/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_RRCConnectionReconfigurationComplete_NB_r13_IEs_H_
#define	_RRCConnectionReconfigurationComplete_NB_r13_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RRCConnectionReconfigurationComplete-NB-r13-IEs */
typedef struct RRCConnectionReconfigurationComplete_NB_r13_IEs {
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct RRCConnectionReconfigurationComplete_NB_r13_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReconfigurationComplete_NB_r13_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReconfigurationComplete_NB_r13_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReconfigurationComplete_NB_r13_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionReconfigurationComplete_NB_r13_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionReconfigurationComplete_NB_r13_IEs_H_ */
#include <asn_internal.h>
