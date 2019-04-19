/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_HighSpeedConfigSCell_r14_H_
#define	_HighSpeedConfigSCell_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HighSpeedConfigSCell_r14__highSpeedEnhancedDemodulationFlag_r14 {
	HighSpeedConfigSCell_r14__highSpeedEnhancedDemodulationFlag_r14_true	= 0
} e_HighSpeedConfigSCell_r14__highSpeedEnhancedDemodulationFlag_r14;

/* HighSpeedConfigSCell-r14 */
typedef struct HighSpeedConfigSCell_r14 {
	long	*highSpeedEnhancedDemodulationFlag_r14;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HighSpeedConfigSCell_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_highSpeedEnhancedDemodulationFlag_r14_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_HighSpeedConfigSCell_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_HighSpeedConfigSCell_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_HighSpeedConfigSCell_r14_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _HighSpeedConfigSCell_r14_H_ */
#include <asn_internal.h>
