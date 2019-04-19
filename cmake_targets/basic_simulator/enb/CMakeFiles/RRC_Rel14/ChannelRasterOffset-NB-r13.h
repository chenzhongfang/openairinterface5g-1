/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_ChannelRasterOffset_NB_r13_H_
#define	_ChannelRasterOffset_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ChannelRasterOffset_NB_r13 {
	ChannelRasterOffset_NB_r13_khz_7dot5	= 0,
	ChannelRasterOffset_NB_r13_khz_2dot5	= 1,
	ChannelRasterOffset_NB_r13_khz2dot5	= 2,
	ChannelRasterOffset_NB_r13_khz7dot5	= 3
} e_ChannelRasterOffset_NB_r13;

/* ChannelRasterOffset-NB-r13 */
typedef long	 ChannelRasterOffset_NB_r13_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ChannelRasterOffset_NB_r13_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ChannelRasterOffset_NB_r13;
extern const asn_INTEGER_specifics_t asn_SPC_ChannelRasterOffset_NB_r13_specs_1;
asn_struct_free_f ChannelRasterOffset_NB_r13_free;
asn_struct_print_f ChannelRasterOffset_NB_r13_print;
asn_constr_check_f ChannelRasterOffset_NB_r13_constraint;
ber_type_decoder_f ChannelRasterOffset_NB_r13_decode_ber;
der_type_encoder_f ChannelRasterOffset_NB_r13_encode_der;
xer_type_decoder_f ChannelRasterOffset_NB_r13_decode_xer;
xer_type_encoder_f ChannelRasterOffset_NB_r13_encode_xer;
per_type_decoder_f ChannelRasterOffset_NB_r13_decode_uper;
per_type_encoder_f ChannelRasterOffset_NB_r13_encode_uper;
per_type_decoder_f ChannelRasterOffset_NB_r13_decode_aper;
per_type_encoder_f ChannelRasterOffset_NB_r13_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ChannelRasterOffset_NB_r13_H_ */
#include <asn_internal.h>
