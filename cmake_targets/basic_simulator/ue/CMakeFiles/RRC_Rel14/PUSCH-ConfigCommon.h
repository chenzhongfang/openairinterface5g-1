/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_PUSCH_ConfigCommon_H_
#define	_PUSCH_ConfigCommon_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UL-ReferenceSignalsPUSCH.h"
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PUSCH_ConfigCommon__pusch_ConfigBasic__hoppingMode {
	PUSCH_ConfigCommon__pusch_ConfigBasic__hoppingMode_interSubFrame	= 0,
	PUSCH_ConfigCommon__pusch_ConfigBasic__hoppingMode_intraAndInterSubFrame	= 1
} e_PUSCH_ConfigCommon__pusch_ConfigBasic__hoppingMode;

/* PUSCH-ConfigCommon */
typedef struct PUSCH_ConfigCommon {
	struct PUSCH_ConfigCommon__pusch_ConfigBasic {
		long	 n_SB;
		long	 hoppingMode;
		long	 pusch_HoppingOffset;
		BOOLEAN_t	 enable64QAM;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} pusch_ConfigBasic;
	UL_ReferenceSignalsPUSCH_t	 ul_ReferenceSignalsPUSCH;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUSCH_ConfigCommon_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_hoppingMode_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PUSCH_ConfigCommon;
extern asn_SEQUENCE_specifics_t asn_SPC_PUSCH_ConfigCommon_specs_1;
extern asn_TYPE_member_t asn_MBR_PUSCH_ConfigCommon_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PUSCH_ConfigCommon_H_ */
#include <asn_internal.h>
