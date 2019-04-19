/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "MIMO-CA-ParametersPerBoBC-v1430.h"

asn_TYPE_member_t asn_MBR_MIMO_CA_ParametersPerBoBC_v1430_1[] = {
	{ ATF_POINTER, 2, offsetof(struct MIMO_CA_ParametersPerBoBC_v1430, parametersTM9_v1430),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MIMO_CA_ParametersPerBoBCPerTM_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"parametersTM9-v1430"
		},
	{ ATF_POINTER, 1, offsetof(struct MIMO_CA_ParametersPerBoBC_v1430, parametersTM10_v1430),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MIMO_CA_ParametersPerBoBCPerTM_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"parametersTM10-v1430"
		},
};
static const int asn_MAP_MIMO_CA_ParametersPerBoBC_v1430_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_MIMO_CA_ParametersPerBoBC_v1430_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MIMO_CA_ParametersPerBoBC_v1430_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* parametersTM9-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* parametersTM10-v1430 */
};
asn_SEQUENCE_specifics_t asn_SPC_MIMO_CA_ParametersPerBoBC_v1430_specs_1 = {
	sizeof(struct MIMO_CA_ParametersPerBoBC_v1430),
	offsetof(struct MIMO_CA_ParametersPerBoBC_v1430, _asn_ctx),
	asn_MAP_MIMO_CA_ParametersPerBoBC_v1430_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_MIMO_CA_ParametersPerBoBC_v1430_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MIMO_CA_ParametersPerBoBC_v1430 = {
	"MIMO-CA-ParametersPerBoBC-v1430",
	"MIMO-CA-ParametersPerBoBC-v1430",
	&asn_OP_SEQUENCE,
	asn_DEF_MIMO_CA_ParametersPerBoBC_v1430_tags_1,
	sizeof(asn_DEF_MIMO_CA_ParametersPerBoBC_v1430_tags_1)
		/sizeof(asn_DEF_MIMO_CA_ParametersPerBoBC_v1430_tags_1[0]), /* 1 */
	asn_DEF_MIMO_CA_ParametersPerBoBC_v1430_tags_1,	/* Same as above */
	sizeof(asn_DEF_MIMO_CA_ParametersPerBoBC_v1430_tags_1)
		/sizeof(asn_DEF_MIMO_CA_ParametersPerBoBC_v1430_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MIMO_CA_ParametersPerBoBC_v1430_1,
	2,	/* Elements count */
	&asn_SPC_MIMO_CA_ParametersPerBoBC_v1430_specs_1	/* Additional specs */
};

