/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_IRAT_ParametersWLAN_r13_H_
#define	_IRAT_ParametersWLAN_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "WLAN-BandIndicator-r13.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* IRAT-ParametersWLAN-r13 */
typedef struct IRAT_ParametersWLAN_r13 {
	struct IRAT_ParametersWLAN_r13__supportedBandListWLAN_r13 {
		A_SEQUENCE_OF(WLAN_BandIndicator_r13_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *supportedBandListWLAN_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IRAT_ParametersWLAN_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IRAT_ParametersWLAN_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_IRAT_ParametersWLAN_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_IRAT_ParametersWLAN_r13_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _IRAT_ParametersWLAN_r13_H_ */
#include <asn_internal.h>
