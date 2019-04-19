/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SonTransfer-IEs"
 * 	found in "/home/user/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/S1AP_R14`
 */

#ifndef	_S1AP_NotifyFlag_H_
#define	_S1AP_NotifyFlag_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_NotifyFlag {
	S1AP_NotifyFlag_activated	= 0,
	S1AP_NotifyFlag_deactivated	= 1
	/*
	 * Enumeration is extensible
	 */
} e_S1AP_NotifyFlag;

/* S1AP_NotifyFlag */
typedef long	 S1AP_NotifyFlag_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_S1AP_NotifyFlag_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_NotifyFlag;
extern const asn_INTEGER_specifics_t asn_SPC_NotifyFlag_specs_1;
asn_struct_free_f NotifyFlag_free;
asn_struct_print_f NotifyFlag_print;
asn_constr_check_f NotifyFlag_constraint;
ber_type_decoder_f NotifyFlag_decode_ber;
der_type_encoder_f NotifyFlag_encode_der;
xer_type_decoder_f NotifyFlag_decode_xer;
xer_type_encoder_f NotifyFlag_encode_xer;
per_type_decoder_f NotifyFlag_decode_uper;
per_type_encoder_f NotifyFlag_encode_uper;
per_type_decoder_f NotifyFlag_decode_aper;
per_type_encoder_f NotifyFlag_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_NotifyFlag_H_ */
#include <asn_internal.h>