/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LBT_Config_r14_H_
#define	_LBT_Config_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LBT_Config_r14_PR {
	LBT_Config_r14_PR_NOTHING,	/* No components present */
	LBT_Config_r14_PR_maxEnergyDetectionThreshold_r14,
	LBT_Config_r14_PR_energyDetectionThresholdOffset_r14
} LBT_Config_r14_PR;

/* LBT-Config-r14 */
typedef struct LBT_Config_r14 {
	LBT_Config_r14_PR present;
	union LBT_Config_r14_u {
		long	 maxEnergyDetectionThreshold_r14;
		long	 energyDetectionThresholdOffset_r14;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LBT_Config_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LBT_Config_r14;
extern asn_CHOICE_specifics_t asn_SPC_LBT_Config_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_LBT_Config_r14_1[2];
extern asn_per_constraints_t asn_PER_type_LBT_Config_r14_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LBT_Config_r14_H_ */
#include <asn_internal.h>
