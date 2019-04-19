/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_MIMO_CapabilityUL_r10_H_
#define	_MIMO_CapabilityUL_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MIMO_CapabilityUL_r10 {
	MIMO_CapabilityUL_r10_twoLayers	= 0,
	MIMO_CapabilityUL_r10_fourLayers	= 1
} e_MIMO_CapabilityUL_r10;

/* MIMO-CapabilityUL-r10 */
typedef long	 MIMO_CapabilityUL_r10_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_MIMO_CapabilityUL_r10_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_MIMO_CapabilityUL_r10;
extern const asn_INTEGER_specifics_t asn_SPC_MIMO_CapabilityUL_r10_specs_1;
asn_struct_free_f MIMO_CapabilityUL_r10_free;
asn_struct_print_f MIMO_CapabilityUL_r10_print;
asn_constr_check_f MIMO_CapabilityUL_r10_constraint;
ber_type_decoder_f MIMO_CapabilityUL_r10_decode_ber;
der_type_encoder_f MIMO_CapabilityUL_r10_encode_der;
xer_type_decoder_f MIMO_CapabilityUL_r10_decode_xer;
xer_type_encoder_f MIMO_CapabilityUL_r10_encode_xer;
per_type_decoder_f MIMO_CapabilityUL_r10_decode_uper;
per_type_encoder_f MIMO_CapabilityUL_r10_encode_uper;
per_type_decoder_f MIMO_CapabilityUL_r10_decode_aper;
per_type_encoder_f MIMO_CapabilityUL_r10_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _MIMO_CapabilityUL_r10_H_ */
#include <asn_internal.h>
