/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_RCLWI_Config_r13_H_
#define	_RCLWI_Config_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "WLAN-Id-List-r12.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RCLWI_Config_r13__command_PR {
	RCLWI_Config_r13__command_PR_NOTHING,	/* No components present */
	RCLWI_Config_r13__command_PR_steerToWLAN_r13,
	RCLWI_Config_r13__command_PR_steerToLTE_r13
} RCLWI_Config_r13__command_PR;

/* RCLWI-Config-r13 */
typedef struct RCLWI_Config_r13 {
	struct RCLWI_Config_r13__command {
		RCLWI_Config_r13__command_PR present;
		union RCLWI_Config_r13__command_u {
			struct RCLWI_Config_r13__command__steerToWLAN_r13 {
				WLAN_Id_List_r12_t	 mobilityConfig_r13;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} steerToWLAN_r13;
			NULL_t	 steerToLTE_r13;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} command;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RCLWI_Config_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RCLWI_Config_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_RCLWI_Config_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_RCLWI_Config_r13_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RCLWI_Config_r13_H_ */
#include <asn_internal.h>
