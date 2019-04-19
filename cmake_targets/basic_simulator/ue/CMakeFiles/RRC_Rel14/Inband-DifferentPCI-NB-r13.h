/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_Inband_DifferentPCI_NB_r13_H_
#define	_Inband_DifferentPCI_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "ChannelRasterOffset-NB-r13.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Inband_DifferentPCI_NB_r13__eutra_NumCRS_Ports_r13 {
	Inband_DifferentPCI_NB_r13__eutra_NumCRS_Ports_r13_same	= 0,
	Inband_DifferentPCI_NB_r13__eutra_NumCRS_Ports_r13_four	= 1
} e_Inband_DifferentPCI_NB_r13__eutra_NumCRS_Ports_r13;

/* Inband-DifferentPCI-NB-r13 */
typedef struct Inband_DifferentPCI_NB_r13 {
	long	 eutra_NumCRS_Ports_r13;
	ChannelRasterOffset_NB_r13_t	 rasterOffset_r13;
	BIT_STRING_t	 spare;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Inband_DifferentPCI_NB_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_eutra_NumCRS_Ports_r13_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_Inband_DifferentPCI_NB_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_Inband_DifferentPCI_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_Inband_DifferentPCI_NB_r13_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _Inband_DifferentPCI_NB_r13_H_ */
#include <asn_internal.h>