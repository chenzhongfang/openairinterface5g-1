/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_QuantityConfigWLAN_r13_H_
#define	_QuantityConfigWLAN_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "FilterCoefficient.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum QuantityConfigWLAN_r13__measQuantityWLAN_r13 {
	QuantityConfigWLAN_r13__measQuantityWLAN_r13_rssiWLAN	= 0
} e_QuantityConfigWLAN_r13__measQuantityWLAN_r13;

/* QuantityConfigWLAN-r13 */
typedef struct QuantityConfigWLAN_r13 {
	long	 measQuantityWLAN_r13;
	FilterCoefficient_t	*filterCoefficient_r13;	/* DEFAULT 4 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} QuantityConfigWLAN_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_measQuantityWLAN_r13_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_QuantityConfigWLAN_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_QuantityConfigWLAN_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_QuantityConfigWLAN_r13_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _QuantityConfigWLAN_r13_H_ */
#include <asn_internal.h>
