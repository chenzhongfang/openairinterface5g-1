/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_InDeviceCoexIndication_v11d0_IEs_H_
#define	_InDeviceCoexIndication_v11d0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "VictimSystemType-r11.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct InDeviceCoexIndication_v1310_IEs;
struct AffectedCarrierFreqCombList_r11;

/* InDeviceCoexIndication-v11d0-IEs */
typedef struct InDeviceCoexIndication_v11d0_IEs {
	struct InDeviceCoexIndication_v11d0_IEs__ul_CA_AssistanceInfo_r11 {
		struct AffectedCarrierFreqCombList_r11	*affectedCarrierFreqCombList_r11;	/* OPTIONAL */
		VictimSystemType_r11_t	 victimSystemType_r11;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ul_CA_AssistanceInfo_r11;
	struct InDeviceCoexIndication_v1310_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InDeviceCoexIndication_v11d0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InDeviceCoexIndication_v11d0_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_InDeviceCoexIndication_v11d0_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_InDeviceCoexIndication_v11d0_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "InDeviceCoexIndication-v1310-IEs.h"
#include "AffectedCarrierFreqCombList-r11.h"

#endif	/* _InDeviceCoexIndication_v11d0_IEs_H_ */
#include <asn_internal.h>
