/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/user/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/S1AP_R14`
 */

#ifndef	_S1AP_NB_IoT_Paging_eDRX_Cycle_H_
#define	_S1AP_NB_IoT_Paging_eDRX_Cycle_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_NB_IoT_Paging_eDRX_Cycle {
	S1AP_NB_IoT_Paging_eDRX_Cycle_hf2	= 0,
	S1AP_NB_IoT_Paging_eDRX_Cycle_hf4	= 1,
	S1AP_NB_IoT_Paging_eDRX_Cycle_hf6	= 2,
	S1AP_NB_IoT_Paging_eDRX_Cycle_hf8	= 3,
	S1AP_NB_IoT_Paging_eDRX_Cycle_hf10	= 4,
	S1AP_NB_IoT_Paging_eDRX_Cycle_hf12	= 5,
	S1AP_NB_IoT_Paging_eDRX_Cycle_hf14	= 6,
	S1AP_NB_IoT_Paging_eDRX_Cycle_hf16	= 7,
	S1AP_NB_IoT_Paging_eDRX_Cycle_hf32	= 8,
	S1AP_NB_IoT_Paging_eDRX_Cycle_hf64	= 9,
	S1AP_NB_IoT_Paging_eDRX_Cycle_hf128	= 10,
	S1AP_NB_IoT_Paging_eDRX_Cycle_hf256	= 11,
	S1AP_NB_IoT_Paging_eDRX_Cycle_hf512	= 12,
	S1AP_NB_IoT_Paging_eDRX_Cycle_hf1024	= 13
	/*
	 * Enumeration is extensible
	 */
} e_S1AP_NB_IoT_Paging_eDRX_Cycle;

/* S1AP_NB-IoT-Paging-eDRX-Cycle */
typedef long	 S1AP_NB_IoT_Paging_eDRX_Cycle_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_S1AP_NB_IoT_Paging_eDRX_Cycle_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_NB_IoT_Paging_eDRX_Cycle;
extern const asn_INTEGER_specifics_t asn_SPC_NB_IoT_Paging_eDRX_Cycle_specs_1;
asn_struct_free_f NB_IoT_Paging_eDRX_Cycle_free;
asn_struct_print_f NB_IoT_Paging_eDRX_Cycle_print;
asn_constr_check_f NB_IoT_Paging_eDRX_Cycle_constraint;
ber_type_decoder_f NB_IoT_Paging_eDRX_Cycle_decode_ber;
der_type_encoder_f NB_IoT_Paging_eDRX_Cycle_encode_der;
xer_type_decoder_f NB_IoT_Paging_eDRX_Cycle_decode_xer;
xer_type_encoder_f NB_IoT_Paging_eDRX_Cycle_encode_xer;
per_type_decoder_f NB_IoT_Paging_eDRX_Cycle_decode_uper;
per_type_encoder_f NB_IoT_Paging_eDRX_Cycle_encode_uper;
per_type_decoder_f NB_IoT_Paging_eDRX_Cycle_decode_aper;
per_type_encoder_f NB_IoT_Paging_eDRX_Cycle_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_NB_IoT_Paging_eDRX_Cycle_H_ */
#include <asn_internal.h>
