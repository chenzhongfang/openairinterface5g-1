/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_DataInactivityTimer_r14_H_
#define	_DataInactivityTimer_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DataInactivityTimer_r14 {
	DataInactivityTimer_r14_s1	= 0,
	DataInactivityTimer_r14_s2	= 1,
	DataInactivityTimer_r14_s3	= 2,
	DataInactivityTimer_r14_s5	= 3,
	DataInactivityTimer_r14_s7	= 4,
	DataInactivityTimer_r14_s10	= 5,
	DataInactivityTimer_r14_s15	= 6,
	DataInactivityTimer_r14_s20	= 7,
	DataInactivityTimer_r14_s40	= 8,
	DataInactivityTimer_r14_s50	= 9,
	DataInactivityTimer_r14_s60	= 10,
	DataInactivityTimer_r14_s80	= 11,
	DataInactivityTimer_r14_s100	= 12,
	DataInactivityTimer_r14_s120	= 13,
	DataInactivityTimer_r14_s150	= 14,
	DataInactivityTimer_r14_s180	= 15
} e_DataInactivityTimer_r14;

/* DataInactivityTimer-r14 */
typedef long	 DataInactivityTimer_r14_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_DataInactivityTimer_r14_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_DataInactivityTimer_r14;
extern const asn_INTEGER_specifics_t asn_SPC_DataInactivityTimer_r14_specs_1;
asn_struct_free_f DataInactivityTimer_r14_free;
asn_struct_print_f DataInactivityTimer_r14_print;
asn_constr_check_f DataInactivityTimer_r14_constraint;
ber_type_decoder_f DataInactivityTimer_r14_decode_ber;
der_type_encoder_f DataInactivityTimer_r14_encode_der;
xer_type_decoder_f DataInactivityTimer_r14_decode_xer;
xer_type_encoder_f DataInactivityTimer_r14_encode_xer;
per_type_decoder_f DataInactivityTimer_r14_decode_uper;
per_type_encoder_f DataInactivityTimer_r14_encode_uper;
per_type_decoder_f DataInactivityTimer_r14_decode_aper;
per_type_encoder_f DataInactivityTimer_r14_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _DataInactivityTimer_r14_H_ */
#include <asn_internal.h>
