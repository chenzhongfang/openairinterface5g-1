/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Contents"
 * 	found in "/home/user/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/S1AP_R14`
 */

#ifndef	_S1AP_E_RABFailedToResumeListResumeReq_H_
#define	_S1AP_E_RABFailedToResumeListResumeReq_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_E-RAB-IE-ContainerList.h"

#ifdef __cplusplus
extern "C" {
#endif

/* S1AP_E-RABFailedToResumeListResumeReq */
typedef S1AP_E_RAB_IE_ContainerList_1145P8_t	 S1AP_E_RABFailedToResumeListResumeReq_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_E_RABFailedToResumeListResumeReq;
asn_struct_free_f S1AP_E_RABFailedToResumeListResumeReq_free;
asn_struct_print_f S1AP_E_RABFailedToResumeListResumeReq_print;
asn_constr_check_f S1AP_E_RABFailedToResumeListResumeReq_constraint;
ber_type_decoder_f S1AP_E_RABFailedToResumeListResumeReq_decode_ber;
der_type_encoder_f S1AP_E_RABFailedToResumeListResumeReq_encode_der;
xer_type_decoder_f S1AP_E_RABFailedToResumeListResumeReq_decode_xer;
xer_type_encoder_f S1AP_E_RABFailedToResumeListResumeReq_encode_xer;
per_type_decoder_f S1AP_E_RABFailedToResumeListResumeReq_decode_uper;
per_type_encoder_f S1AP_E_RABFailedToResumeListResumeReq_encode_uper;
per_type_decoder_f S1AP_E_RABFailedToResumeListResumeReq_decode_aper;
per_type_encoder_f S1AP_E_RABFailedToResumeListResumeReq_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_E_RABFailedToResumeListResumeReq_H_ */
#include <asn_internal.h>
