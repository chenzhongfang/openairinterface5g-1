/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_CellSelectionInfo_v1130_H_
#define	_CellSelectionInfo_v1130_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Q-QualMin-r9.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CellSelectionInfo-v1130 */
typedef struct CellSelectionInfo_v1130 {
	Q_QualMin_r9_t	 q_QualMinWB_r11;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellSelectionInfo_v1130_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellSelectionInfo_v1130;
extern asn_SEQUENCE_specifics_t asn_SPC_CellSelectionInfo_v1130_specs_1;
extern asn_TYPE_member_t asn_MBR_CellSelectionInfo_v1130_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _CellSelectionInfo_v1130_H_ */
#include <asn_internal.h>
