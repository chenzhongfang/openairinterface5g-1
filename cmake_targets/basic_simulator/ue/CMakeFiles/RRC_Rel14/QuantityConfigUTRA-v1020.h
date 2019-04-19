/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_QuantityConfigUTRA_v1020_H_
#define	_QuantityConfigUTRA_v1020_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FilterCoefficient.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* QuantityConfigUTRA-v1020 */
typedef struct QuantityConfigUTRA_v1020 {
	FilterCoefficient_t	*filterCoefficient2_FDD_r10;	/* DEFAULT 4 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} QuantityConfigUTRA_v1020_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_QuantityConfigUTRA_v1020;
extern asn_SEQUENCE_specifics_t asn_SPC_QuantityConfigUTRA_v1020_specs_1;
extern asn_TYPE_member_t asn_MBR_QuantityConfigUTRA_v1020_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _QuantityConfigUTRA_v1020_H_ */
#include <asn_internal.h>
