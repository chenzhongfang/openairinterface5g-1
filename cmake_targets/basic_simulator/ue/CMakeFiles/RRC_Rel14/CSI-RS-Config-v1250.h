/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_CSI_RS_Config_v1250_H_
#define	_CSI_RS_Config_v1250_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CSI_RS_Config_v1250__ds_ZeroTxPowerCSI_RS_r12_PR {
	CSI_RS_Config_v1250__ds_ZeroTxPowerCSI_RS_r12_PR_NOTHING,	/* No components present */
	CSI_RS_Config_v1250__ds_ZeroTxPowerCSI_RS_r12_PR_release,
	CSI_RS_Config_v1250__ds_ZeroTxPowerCSI_RS_r12_PR_setup
} CSI_RS_Config_v1250__ds_ZeroTxPowerCSI_RS_r12_PR;

/* Forward declarations */
struct ZeroTxPowerCSI_RS_Conf_r12;
struct ZeroTxPowerCSI_RS_r12;

/* CSI-RS-Config-v1250 */
typedef struct CSI_RS_Config_v1250 {
	struct ZeroTxPowerCSI_RS_Conf_r12	*zeroTxPowerCSI_RS2_r12;	/* OPTIONAL */
	struct CSI_RS_Config_v1250__ds_ZeroTxPowerCSI_RS_r12 {
		CSI_RS_Config_v1250__ds_ZeroTxPowerCSI_RS_r12_PR present;
		union CSI_RS_Config_v1250__ds_ZeroTxPowerCSI_RS_r12_u {
			NULL_t	 release;
			struct CSI_RS_Config_v1250__ds_ZeroTxPowerCSI_RS_r12__setup {
				struct CSI_RS_Config_v1250__ds_ZeroTxPowerCSI_RS_r12__setup__zeroTxPowerCSI_RS_List_r12 {
					A_SEQUENCE_OF(struct ZeroTxPowerCSI_RS_r12) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} zeroTxPowerCSI_RS_List_r12;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ds_ZeroTxPowerCSI_RS_r12;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSI_RS_Config_v1250_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CSI_RS_Config_v1250;
extern asn_SEQUENCE_specifics_t asn_SPC_CSI_RS_Config_v1250_specs_1;
extern asn_TYPE_member_t asn_MBR_CSI_RS_Config_v1250_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ZeroTxPowerCSI-RS-Conf-r12.h"
#include "ZeroTxPowerCSI-RS-r12.h"

#endif	/* _CSI_RS_Config_v1250_H_ */
#include <asn_internal.h>
