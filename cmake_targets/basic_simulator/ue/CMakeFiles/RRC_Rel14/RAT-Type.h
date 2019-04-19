/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_RAT_Type_H_
#define	_RAT_Type_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RAT_Type {
	RAT_Type_eutra	= 0,
	RAT_Type_utra	= 1,
	RAT_Type_geran_cs	= 2,
	RAT_Type_geran_ps	= 3,
	RAT_Type_cdma2000_1XRTT	= 4,
	RAT_Type_spare3	= 5,
	RAT_Type_spare2	= 6,
	RAT_Type_spare1	= 7
	/*
	 * Enumeration is extensible
	 */
} e_RAT_Type;

/* RAT-Type */
typedef long	 RAT_Type_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_RAT_Type_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_RAT_Type;
extern const asn_INTEGER_specifics_t asn_SPC_RAT_Type_specs_1;
asn_struct_free_f RAT_Type_free;
asn_struct_print_f RAT_Type_print;
asn_constr_check_f RAT_Type_constraint;
ber_type_decoder_f RAT_Type_decode_ber;
der_type_encoder_f RAT_Type_encode_der;
xer_type_decoder_f RAT_Type_decode_xer;
xer_type_encoder_f RAT_Type_encode_xer;
per_type_decoder_f RAT_Type_decode_uper;
per_type_encoder_f RAT_Type_encode_uper;
per_type_decoder_f RAT_Type_decode_aper;
per_type_encoder_f RAT_Type_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RAT_Type_H_ */
#include <asn_internal.h>
