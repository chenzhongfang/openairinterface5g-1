/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/user/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/S1AP_R14`
 */

#ifndef	_S1AP_MDT_Location_Info_H_
#define	_S1AP_MDT_Location_Info_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* S1AP_MDT-Location-Info */
typedef BIT_STRING_t	 S1AP_MDT_Location_Info_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_MDT_Location_Info;
asn_struct_free_f S1AP_MDT_Location_Info_free;
asn_struct_print_f S1AP_MDT_Location_Info_print;
asn_constr_check_f S1AP_MDT_Location_Info_constraint;
ber_type_decoder_f S1AP_MDT_Location_Info_decode_ber;
der_type_encoder_f S1AP_MDT_Location_Info_encode_der;
xer_type_decoder_f S1AP_MDT_Location_Info_decode_xer;
xer_type_encoder_f S1AP_MDT_Location_Info_encode_xer;
per_type_decoder_f S1AP_MDT_Location_Info_decode_uper;
per_type_encoder_f S1AP_MDT_Location_Info_encode_uper;
per_type_decoder_f S1AP_MDT_Location_Info_decode_aper;
per_type_encoder_f S1AP_MDT_Location_Info_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_MDT_Location_Info_H_ */
#include <asn_internal.h>
