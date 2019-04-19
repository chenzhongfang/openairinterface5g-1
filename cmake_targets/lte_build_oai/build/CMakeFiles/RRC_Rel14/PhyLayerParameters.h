/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_PhyLayerParameters_H_
#define	_PhyLayerParameters_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PhyLayerParameters */
typedef struct PhyLayerParameters {
	BOOLEAN_t	 ue_TxAntennaSelectionSupported;
	BOOLEAN_t	 ue_SpecificRefSigsSupported;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhyLayerParameters_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PhyLayerParameters;
extern asn_SEQUENCE_specifics_t asn_SPC_PhyLayerParameters_specs_1;
extern asn_TYPE_member_t asn_MBR_PhyLayerParameters_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PhyLayerParameters_H_ */
#include <asn_internal.h>
