/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_DRX_Config_v1310_H_
#define	_DRX_Config_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DRX-Config-v1310 */
typedef struct DRX_Config_v1310 {
	struct DRX_Config_v1310__longDRX_CycleStartOffset_v1310 {
		long	 sf60_v1310;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *longDRX_CycleStartOffset_v1310;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DRX_Config_v1310_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DRX_Config_v1310;
extern asn_SEQUENCE_specifics_t asn_SPC_DRX_Config_v1310_specs_1;
extern asn_TYPE_member_t asn_MBR_DRX_Config_v1310_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _DRX_Config_v1310_H_ */
#include <asn_internal.h>
