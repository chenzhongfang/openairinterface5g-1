/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PC5-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_SBCCH_SL_BCH_Message_H_
#define	_SBCCH_SL_BCH_Message_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SBCCH-SL-BCH-MessageType.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SBCCH-SL-BCH-Message */
typedef struct SBCCH_SL_BCH_Message {
	SBCCH_SL_BCH_MessageType_t	 message;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SBCCH_SL_BCH_Message_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SBCCH_SL_BCH_Message;

#ifdef __cplusplus
}
#endif

#endif	/* _SBCCH_SL_BCH_Message_H_ */
#include <asn_internal.h>
