/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_NZP_FrequencyDensity_r14_H_
#define	_NZP_FrequencyDensity_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NZP_FrequencyDensity_r14 {
	NZP_FrequencyDensity_r14_d1	= 0,
	NZP_FrequencyDensity_r14_d2	= 1,
	NZP_FrequencyDensity_r14_d3	= 2
} e_NZP_FrequencyDensity_r14;

/* NZP-FrequencyDensity-r14 */
typedef long	 NZP_FrequencyDensity_r14_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NZP_FrequencyDensity_r14_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NZP_FrequencyDensity_r14;
extern const asn_INTEGER_specifics_t asn_SPC_NZP_FrequencyDensity_r14_specs_1;
asn_struct_free_f NZP_FrequencyDensity_r14_free;
asn_struct_print_f NZP_FrequencyDensity_r14_print;
asn_constr_check_f NZP_FrequencyDensity_r14_constraint;
ber_type_decoder_f NZP_FrequencyDensity_r14_decode_ber;
der_type_encoder_f NZP_FrequencyDensity_r14_encode_der;
xer_type_decoder_f NZP_FrequencyDensity_r14_decode_xer;
xer_type_encoder_f NZP_FrequencyDensity_r14_encode_xer;
per_type_decoder_f NZP_FrequencyDensity_r14_decode_uper;
per_type_encoder_f NZP_FrequencyDensity_r14_encode_uper;
per_type_decoder_f NZP_FrequencyDensity_r14_decode_aper;
per_type_encoder_f NZP_FrequencyDensity_r14_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NZP_FrequencyDensity_r14_H_ */
#include <asn_internal.h>
