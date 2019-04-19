/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_ACK_NACK_NumRepetitions_NB_r13_H_
#define	_ACK_NACK_NumRepetitions_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ACK_NACK_NumRepetitions_NB_r13 {
	ACK_NACK_NumRepetitions_NB_r13_r1	= 0,
	ACK_NACK_NumRepetitions_NB_r13_r2	= 1,
	ACK_NACK_NumRepetitions_NB_r13_r4	= 2,
	ACK_NACK_NumRepetitions_NB_r13_r8	= 3,
	ACK_NACK_NumRepetitions_NB_r13_r16	= 4,
	ACK_NACK_NumRepetitions_NB_r13_r32	= 5,
	ACK_NACK_NumRepetitions_NB_r13_r64	= 6,
	ACK_NACK_NumRepetitions_NB_r13_r128	= 7
} e_ACK_NACK_NumRepetitions_NB_r13;

/* ACK-NACK-NumRepetitions-NB-r13 */
typedef long	 ACK_NACK_NumRepetitions_NB_r13_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ACK_NACK_NumRepetitions_NB_r13_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ACK_NACK_NumRepetitions_NB_r13;
extern const asn_INTEGER_specifics_t asn_SPC_ACK_NACK_NumRepetitions_NB_r13_specs_1;
asn_struct_free_f ACK_NACK_NumRepetitions_NB_r13_free;
asn_struct_print_f ACK_NACK_NumRepetitions_NB_r13_print;
asn_constr_check_f ACK_NACK_NumRepetitions_NB_r13_constraint;
ber_type_decoder_f ACK_NACK_NumRepetitions_NB_r13_decode_ber;
der_type_encoder_f ACK_NACK_NumRepetitions_NB_r13_encode_der;
xer_type_decoder_f ACK_NACK_NumRepetitions_NB_r13_decode_xer;
xer_type_encoder_f ACK_NACK_NumRepetitions_NB_r13_encode_xer;
per_type_decoder_f ACK_NACK_NumRepetitions_NB_r13_decode_uper;
per_type_encoder_f ACK_NACK_NumRepetitions_NB_r13_encode_uper;
per_type_decoder_f ACK_NACK_NumRepetitions_NB_r13_decode_aper;
per_type_encoder_f ACK_NACK_NumRepetitions_NB_r13_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ACK_NACK_NumRepetitions_NB_r13_H_ */
#include <asn_internal.h>
