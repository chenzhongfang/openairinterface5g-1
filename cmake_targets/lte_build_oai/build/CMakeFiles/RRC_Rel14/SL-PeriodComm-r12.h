/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_SL_PeriodComm_r12_H_
#define	_SL_PeriodComm_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SL_PeriodComm_r12 {
	SL_PeriodComm_r12_sf40	= 0,
	SL_PeriodComm_r12_sf60	= 1,
	SL_PeriodComm_r12_sf70	= 2,
	SL_PeriodComm_r12_sf80	= 3,
	SL_PeriodComm_r12_sf120	= 4,
	SL_PeriodComm_r12_sf140	= 5,
	SL_PeriodComm_r12_sf160	= 6,
	SL_PeriodComm_r12_sf240	= 7,
	SL_PeriodComm_r12_sf280	= 8,
	SL_PeriodComm_r12_sf320	= 9,
	SL_PeriodComm_r12_spare6	= 10,
	SL_PeriodComm_r12_spare5	= 11,
	SL_PeriodComm_r12_spare4	= 12,
	SL_PeriodComm_r12_spare3	= 13,
	SL_PeriodComm_r12_spare2	= 14,
	SL_PeriodComm_r12_spare	= 15
} e_SL_PeriodComm_r12;

/* SL-PeriodComm-r12 */
typedef long	 SL_PeriodComm_r12_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SL_PeriodComm_r12_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SL_PeriodComm_r12;
extern const asn_INTEGER_specifics_t asn_SPC_SL_PeriodComm_r12_specs_1;
asn_struct_free_f SL_PeriodComm_r12_free;
asn_struct_print_f SL_PeriodComm_r12_print;
asn_constr_check_f SL_PeriodComm_r12_constraint;
ber_type_decoder_f SL_PeriodComm_r12_decode_ber;
der_type_encoder_f SL_PeriodComm_r12_encode_der;
xer_type_decoder_f SL_PeriodComm_r12_decode_xer;
xer_type_encoder_f SL_PeriodComm_r12_encode_xer;
per_type_decoder_f SL_PeriodComm_r12_decode_uper;
per_type_encoder_f SL_PeriodComm_r12_encode_uper;
per_type_decoder_f SL_PeriodComm_r12_decode_aper;
per_type_encoder_f SL_PeriodComm_r12_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _SL_PeriodComm_r12_H_ */
#include <asn_internal.h>
