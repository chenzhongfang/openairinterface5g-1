/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/user/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_PLMN_Identity_H_
#define	_X2AP_PLMN_Identity_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* X2AP_PLMN-Identity */
typedef OCTET_STRING_t	 X2AP_PLMN_Identity_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_X2AP_PLMN_Identity_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_PLMN_Identity;
asn_struct_free_f X2AP_PLMN_Identity_free;
asn_struct_print_f X2AP_PLMN_Identity_print;
asn_constr_check_f X2AP_PLMN_Identity_constraint;
ber_type_decoder_f X2AP_PLMN_Identity_decode_ber;
der_type_encoder_f X2AP_PLMN_Identity_encode_der;
xer_type_decoder_f X2AP_PLMN_Identity_decode_xer;
xer_type_encoder_f X2AP_PLMN_Identity_encode_xer;
per_type_decoder_f X2AP_PLMN_Identity_decode_uper;
per_type_encoder_f X2AP_PLMN_Identity_encode_uper;
per_type_decoder_f X2AP_PLMN_Identity_decode_aper;
per_type_encoder_f X2AP_PLMN_Identity_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_PLMN_Identity_H_ */
#include <asn_internal.h>
