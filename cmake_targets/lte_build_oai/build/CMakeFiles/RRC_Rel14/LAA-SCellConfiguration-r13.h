/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LAA_SCellConfiguration_r13_H_
#define	_LAA_SCellConfiguration_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LAA_SCellConfiguration_r13__subframeStartPosition_r13 {
	LAA_SCellConfiguration_r13__subframeStartPosition_r13_s0	= 0,
	LAA_SCellConfiguration_r13__subframeStartPosition_r13_s07	= 1
} e_LAA_SCellConfiguration_r13__subframeStartPosition_r13;

/* LAA-SCellConfiguration-r13 */
typedef struct LAA_SCellConfiguration_r13 {
	long	 subframeStartPosition_r13;
	BIT_STRING_t	 laa_SCellSubframeConfig_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LAA_SCellConfiguration_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_subframeStartPosition_r13_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LAA_SCellConfiguration_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LAA_SCellConfiguration_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LAA_SCellConfiguration_r13_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LAA_SCellConfiguration_r13_H_ */
#include <asn_internal.h>
