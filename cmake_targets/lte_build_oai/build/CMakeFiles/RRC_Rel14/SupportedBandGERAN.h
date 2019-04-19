/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_SupportedBandGERAN_H_
#define	_SupportedBandGERAN_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SupportedBandGERAN {
	SupportedBandGERAN_gsm450	= 0,
	SupportedBandGERAN_gsm480	= 1,
	SupportedBandGERAN_gsm710	= 2,
	SupportedBandGERAN_gsm750	= 3,
	SupportedBandGERAN_gsm810	= 4,
	SupportedBandGERAN_gsm850	= 5,
	SupportedBandGERAN_gsm900P	= 6,
	SupportedBandGERAN_gsm900E	= 7,
	SupportedBandGERAN_gsm900R	= 8,
	SupportedBandGERAN_gsm1800	= 9,
	SupportedBandGERAN_gsm1900	= 10,
	SupportedBandGERAN_spare5	= 11,
	SupportedBandGERAN_spare4	= 12,
	SupportedBandGERAN_spare3	= 13,
	SupportedBandGERAN_spare2	= 14,
	SupportedBandGERAN_spare1	= 15
	/*
	 * Enumeration is extensible
	 */
} e_SupportedBandGERAN;

/* SupportedBandGERAN */
typedef long	 SupportedBandGERAN_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SupportedBandGERAN_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SupportedBandGERAN;
extern const asn_INTEGER_specifics_t asn_SPC_SupportedBandGERAN_specs_1;
asn_struct_free_f SupportedBandGERAN_free;
asn_struct_print_f SupportedBandGERAN_print;
asn_constr_check_f SupportedBandGERAN_constraint;
ber_type_decoder_f SupportedBandGERAN_decode_ber;
der_type_encoder_f SupportedBandGERAN_encode_der;
xer_type_decoder_f SupportedBandGERAN_decode_xer;
xer_type_encoder_f SupportedBandGERAN_encode_xer;
per_type_decoder_f SupportedBandGERAN_decode_uper;
per_type_encoder_f SupportedBandGERAN_encode_uper;
per_type_decoder_f SupportedBandGERAN_decode_aper;
per_type_encoder_f SupportedBandGERAN_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _SupportedBandGERAN_H_ */
#include <asn_internal.h>
