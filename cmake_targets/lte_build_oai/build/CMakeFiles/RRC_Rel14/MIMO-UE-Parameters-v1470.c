/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "MIMO-UE-Parameters-v1470.h"

asn_TYPE_member_t asn_MBR_MIMO_UE_Parameters_v1470_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MIMO_UE_Parameters_v1470, parametersTM9_v1470),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MIMO_UE_ParametersPerTM_v1470,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"parametersTM9-v1470"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MIMO_UE_Parameters_v1470, parametersTM10_v1470),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MIMO_UE_ParametersPerTM_v1470,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"parametersTM10-v1470"
		},
};
static const ber_tlv_tag_t asn_DEF_MIMO_UE_Parameters_v1470_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MIMO_UE_Parameters_v1470_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* parametersTM9-v1470 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* parametersTM10-v1470 */
};
asn_SEQUENCE_specifics_t asn_SPC_MIMO_UE_Parameters_v1470_specs_1 = {
	sizeof(struct MIMO_UE_Parameters_v1470),
	offsetof(struct MIMO_UE_Parameters_v1470, _asn_ctx),
	asn_MAP_MIMO_UE_Parameters_v1470_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MIMO_UE_Parameters_v1470 = {
	"MIMO-UE-Parameters-v1470",
	"MIMO-UE-Parameters-v1470",
	&asn_OP_SEQUENCE,
	asn_DEF_MIMO_UE_Parameters_v1470_tags_1,
	sizeof(asn_DEF_MIMO_UE_Parameters_v1470_tags_1)
		/sizeof(asn_DEF_MIMO_UE_Parameters_v1470_tags_1[0]), /* 1 */
	asn_DEF_MIMO_UE_Parameters_v1470_tags_1,	/* Same as above */
	sizeof(asn_DEF_MIMO_UE_Parameters_v1470_tags_1)
		/sizeof(asn_DEF_MIMO_UE_Parameters_v1470_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MIMO_UE_Parameters_v1470_1,
	2,	/* Elements count */
	&asn_SPC_MIMO_UE_Parameters_v1470_specs_1	/* Additional specs */
};

