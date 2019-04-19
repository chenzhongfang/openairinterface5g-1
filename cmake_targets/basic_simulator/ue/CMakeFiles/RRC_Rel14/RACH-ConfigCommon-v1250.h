/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_RACH_ConfigCommon_v1250_H_
#define	_RACH_ConfigCommon_v1250_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RACH_ConfigCommon_v1250__txFailParams_r12__connEstFailCount_r12 {
	RACH_ConfigCommon_v1250__txFailParams_r12__connEstFailCount_r12_n1	= 0,
	RACH_ConfigCommon_v1250__txFailParams_r12__connEstFailCount_r12_n2	= 1,
	RACH_ConfigCommon_v1250__txFailParams_r12__connEstFailCount_r12_n3	= 2,
	RACH_ConfigCommon_v1250__txFailParams_r12__connEstFailCount_r12_n4	= 3
} e_RACH_ConfigCommon_v1250__txFailParams_r12__connEstFailCount_r12;
typedef enum RACH_ConfigCommon_v1250__txFailParams_r12__connEstFailOffsetValidity_r12 {
	RACH_ConfigCommon_v1250__txFailParams_r12__connEstFailOffsetValidity_r12_s30	= 0,
	RACH_ConfigCommon_v1250__txFailParams_r12__connEstFailOffsetValidity_r12_s60	= 1,
	RACH_ConfigCommon_v1250__txFailParams_r12__connEstFailOffsetValidity_r12_s120	= 2,
	RACH_ConfigCommon_v1250__txFailParams_r12__connEstFailOffsetValidity_r12_s240	= 3,
	RACH_ConfigCommon_v1250__txFailParams_r12__connEstFailOffsetValidity_r12_s300	= 4,
	RACH_ConfigCommon_v1250__txFailParams_r12__connEstFailOffsetValidity_r12_s420	= 5,
	RACH_ConfigCommon_v1250__txFailParams_r12__connEstFailOffsetValidity_r12_s600	= 6,
	RACH_ConfigCommon_v1250__txFailParams_r12__connEstFailOffsetValidity_r12_s900	= 7
} e_RACH_ConfigCommon_v1250__txFailParams_r12__connEstFailOffsetValidity_r12;

/* RACH-ConfigCommon-v1250 */
typedef struct RACH_ConfigCommon_v1250 {
	struct RACH_ConfigCommon_v1250__txFailParams_r12 {
		long	 connEstFailCount_r12;
		long	 connEstFailOffsetValidity_r12;
		long	*connEstFailOffset_r12;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} txFailParams_r12;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RACH_ConfigCommon_v1250_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_connEstFailCount_r12_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_connEstFailOffsetValidity_r12_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RACH_ConfigCommon_v1250;
extern asn_SEQUENCE_specifics_t asn_SPC_RACH_ConfigCommon_v1250_specs_1;
extern asn_TYPE_member_t asn_MBR_RACH_ConfigCommon_v1250_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RACH_ConfigCommon_v1250_H_ */
#include <asn_internal.h>
