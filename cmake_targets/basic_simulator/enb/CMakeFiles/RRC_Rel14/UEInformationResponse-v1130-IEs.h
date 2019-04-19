/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_UEInformationResponse_v1130_IEs_H_
#define	_UEInformationResponse_v1130_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ConnEstFailReport_r11;
struct UEInformationResponse_v1250_IEs;

/* UEInformationResponse-v1130-IEs */
typedef struct UEInformationResponse_v1130_IEs {
	struct ConnEstFailReport_r11	*connEstFailReport_r11;	/* OPTIONAL */
	struct UEInformationResponse_v1250_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEInformationResponse_v1130_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEInformationResponse_v1130_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UEInformationResponse_v1130_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UEInformationResponse_v1130_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ConnEstFailReport-r11.h"
#include "UEInformationResponse-v1250-IEs.h"

#endif	/* _UEInformationResponse_v1130_IEs_H_ */
#include <asn_internal.h>
