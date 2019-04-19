/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/user/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/S1AP_R14`
 */

#ifndef	_S1AP_CE_mode_B_SupportIndicator_H_
#define	_S1AP_CE_mode_B_SupportIndicator_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_CE_mode_B_SupportIndicator {
	S1AP_CE_mode_B_SupportIndicator_supported	= 0
	/*
	 * Enumeration is extensible
	 */
} e_S1AP_CE_mode_B_SupportIndicator;

/* S1AP_CE-mode-B-SupportIndicator */
typedef long	 S1AP_CE_mode_B_SupportIndicator_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_CE_mode_B_SupportIndicator;
asn_struct_free_f S1AP_CE_mode_B_SupportIndicator_free;
asn_struct_print_f S1AP_CE_mode_B_SupportIndicator_print;
asn_constr_check_f S1AP_CE_mode_B_SupportIndicator_constraint;
ber_type_decoder_f S1AP_CE_mode_B_SupportIndicator_decode_ber;
der_type_encoder_f S1AP_CE_mode_B_SupportIndicator_encode_der;
xer_type_decoder_f S1AP_CE_mode_B_SupportIndicator_decode_xer;
xer_type_encoder_f S1AP_CE_mode_B_SupportIndicator_encode_xer;
per_type_decoder_f S1AP_CE_mode_B_SupportIndicator_decode_uper;
per_type_encoder_f S1AP_CE_mode_B_SupportIndicator_encode_uper;
per_type_decoder_f S1AP_CE_mode_B_SupportIndicator_decode_aper;
per_type_encoder_f S1AP_CE_mode_B_SupportIndicator_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_CE_mode_B_SupportIndicator_H_ */
#include <asn_internal.h>
