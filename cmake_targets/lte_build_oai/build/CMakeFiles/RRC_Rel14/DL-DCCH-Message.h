/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_DL_DCCH_Message_H_
#define	_DL_DCCH_Message_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DL-DCCH-MessageType.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DL-DCCH-Message */
typedef struct DL_DCCH_Message {
	DL_DCCH_MessageType_t	 message;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_DCCH_Message_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_DCCH_Message;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_DCCH_Message_H_ */
#include <asn_internal.h>
