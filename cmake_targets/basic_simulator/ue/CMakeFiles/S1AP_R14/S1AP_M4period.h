/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/user/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/S1AP_R14`
 */

#ifndef	_S1AP_M4period_H_
#define	_S1AP_M4period_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_M4period {
	S1AP_M4period_ms1024	= 0,
	S1AP_M4period_ms2048	= 1,
	S1AP_M4period_ms5120	= 2,
	S1AP_M4period_ms10240	= 3,
	S1AP_M4period_min1	= 4
	/*
	 * Enumeration is extensible
	 */
} e_S1AP_M4period;

/* S1AP_M4period */
typedef long	 S1AP_M4period_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_S1AP_M4period_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_M4period;
extern const asn_INTEGER_specifics_t asn_SPC_M4period_specs_1;
asn_struct_free_f M4period_free;
asn_struct_print_f M4period_print;
asn_constr_check_f M4period_constraint;
ber_type_decoder_f M4period_decode_ber;
der_type_encoder_f M4period_encode_der;
xer_type_decoder_f M4period_decode_xer;
xer_type_encoder_f M4period_encode_xer;
per_type_decoder_f M4period_decode_uper;
per_type_encoder_f M4period_encode_uper;
per_type_decoder_f M4period_decode_aper;
per_type_encoder_f M4period_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_M4period_H_ */
#include <asn_internal.h>
