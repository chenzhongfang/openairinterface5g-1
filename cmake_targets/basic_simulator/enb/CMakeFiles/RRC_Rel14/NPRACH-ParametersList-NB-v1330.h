/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_NPRACH_ParametersList_NB_v1330_H_
#define	_NPRACH_ParametersList_NB_v1330_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NPRACH_Parameters_NB_v1330;

/* NPRACH-ParametersList-NB-v1330 */
typedef struct NPRACH_ParametersList_NB_v1330 {
	A_SEQUENCE_OF(struct NPRACH_Parameters_NB_v1330) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NPRACH_ParametersList_NB_v1330_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NPRACH_ParametersList_NB_v1330;
extern asn_SET_OF_specifics_t asn_SPC_NPRACH_ParametersList_NB_v1330_specs_1;
extern asn_TYPE_member_t asn_MBR_NPRACH_ParametersList_NB_v1330_1[1];
extern asn_per_constraints_t asn_PER_type_NPRACH_ParametersList_NB_v1330_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NPRACH-Parameters-NB-v1330.h"

#endif	/* _NPRACH_ParametersList_NB_v1330_H_ */
#include <asn_internal.h>
