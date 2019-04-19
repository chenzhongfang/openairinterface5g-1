/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-CommonDataTypes"
 * 	found in "/home/user/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_ProcedureCode_H_
#define	_X2AP_ProcedureCode_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* X2AP_ProcedureCode */
typedef long	 X2AP_ProcedureCode_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_X2AP_ProcedureCode_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProcedureCode;
asn_struct_free_f X2AP_ProcedureCode_free;
asn_struct_print_f X2AP_ProcedureCode_print;
asn_constr_check_f X2AP_ProcedureCode_constraint;
ber_type_decoder_f X2AP_ProcedureCode_decode_ber;
der_type_encoder_f X2AP_ProcedureCode_encode_der;
xer_type_decoder_f X2AP_ProcedureCode_decode_xer;
xer_type_encoder_f X2AP_ProcedureCode_encode_xer;
per_type_decoder_f X2AP_ProcedureCode_decode_uper;
per_type_encoder_f X2AP_ProcedureCode_encode_uper;
per_type_decoder_f X2AP_ProcedureCode_decode_aper;
per_type_encoder_f X2AP_ProcedureCode_encode_aper;
#define X2AP_ProcedureCode_id_handoverPreparation	((X2AP_ProcedureCode_t)0)
#define X2AP_ProcedureCode_id_handoverCancel	((X2AP_ProcedureCode_t)1)
#define X2AP_ProcedureCode_id_loadIndication	((X2AP_ProcedureCode_t)2)
#define X2AP_ProcedureCode_id_errorIndication	((X2AP_ProcedureCode_t)3)
#define X2AP_ProcedureCode_id_snStatusTransfer	((X2AP_ProcedureCode_t)4)
#define X2AP_ProcedureCode_id_uEContextRelease	((X2AP_ProcedureCode_t)5)
#define X2AP_ProcedureCode_id_x2Setup	((X2AP_ProcedureCode_t)6)
#define X2AP_ProcedureCode_id_reset	((X2AP_ProcedureCode_t)7)
#define X2AP_ProcedureCode_id_eNBConfigurationUpdate	((X2AP_ProcedureCode_t)8)
#define X2AP_ProcedureCode_id_resourceStatusReportingInitiation	((X2AP_ProcedureCode_t)9)
#define X2AP_ProcedureCode_id_resourceStatusReporting	((X2AP_ProcedureCode_t)10)
#define X2AP_ProcedureCode_id_privateMessage	((X2AP_ProcedureCode_t)11)
#define X2AP_ProcedureCode_id_mobilitySettingsChange	((X2AP_ProcedureCode_t)12)
#define X2AP_ProcedureCode_id_rLFIndication	((X2AP_ProcedureCode_t)13)
#define X2AP_ProcedureCode_id_handoverReport	((X2AP_ProcedureCode_t)14)
#define X2AP_ProcedureCode_id_cellActivation	((X2AP_ProcedureCode_t)15)
#define X2AP_ProcedureCode_id_x2Release	((X2AP_ProcedureCode_t)16)
#define X2AP_ProcedureCode_id_x2APMessageTransfer	((X2AP_ProcedureCode_t)17)
#define X2AP_ProcedureCode_id_x2Removal	((X2AP_ProcedureCode_t)18)
#define X2AP_ProcedureCode_id_seNBAdditionPreparation	((X2AP_ProcedureCode_t)19)
#define X2AP_ProcedureCode_id_seNBReconfigurationCompletion	((X2AP_ProcedureCode_t)20)
#define X2AP_ProcedureCode_id_meNBinitiatedSeNBModificationPreparation	((X2AP_ProcedureCode_t)21)
#define X2AP_ProcedureCode_id_seNBinitiatedSeNBModification	((X2AP_ProcedureCode_t)22)
#define X2AP_ProcedureCode_id_meNBinitiatedSeNBRelease	((X2AP_ProcedureCode_t)23)
#define X2AP_ProcedureCode_id_seNBinitiatedSeNBRelease	((X2AP_ProcedureCode_t)24)
#define X2AP_ProcedureCode_id_seNBCounterCheck	((X2AP_ProcedureCode_t)25)
#define X2AP_ProcedureCode_id_retrieveUEContext	((X2AP_ProcedureCode_t)26)

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_ProcedureCode_H_ */
#include <asn_internal.h>
