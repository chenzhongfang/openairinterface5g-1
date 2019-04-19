/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/user/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_DL_Forwarding_H_
#define	_X2AP_DL_Forwarding_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2AP_DL_Forwarding {
	X2AP_DL_Forwarding_dL_forwardingProposed	= 0
	/*
	 * Enumeration is extensible
	 */
} e_X2AP_DL_Forwarding;

/* X2AP_DL-Forwarding */
typedef long	 X2AP_DL_Forwarding_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_X2AP_DL_Forwarding_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_DL_Forwarding;
extern const asn_INTEGER_specifics_t asn_SPC_DL_Forwarding_specs_1;
asn_struct_free_f DL_Forwarding_free;
asn_struct_print_f DL_Forwarding_print;
asn_constr_check_f DL_Forwarding_constraint;
ber_type_decoder_f DL_Forwarding_decode_ber;
der_type_encoder_f DL_Forwarding_encode_der;
xer_type_decoder_f DL_Forwarding_decode_xer;
xer_type_encoder_f DL_Forwarding_encode_xer;
per_type_decoder_f DL_Forwarding_decode_uper;
per_type_encoder_f DL_Forwarding_encode_uper;
per_type_decoder_f DL_Forwarding_decode_aper;
per_type_encoder_f DL_Forwarding_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_DL_Forwarding_H_ */
#include <asn_internal.h>
