/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "RF-Parameters-v1270.h"

asn_TYPE_member_t asn_MBR_RF_Parameters_v1270_1[] = {
	{ ATF_POINTER, 2, offsetof(struct RF_Parameters_v1270, supportedBandCombination_v1270),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SupportedBandCombination_v1270,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedBandCombination-v1270"
		},
	{ ATF_POINTER, 1, offsetof(struct RF_Parameters_v1270, supportedBandCombinationAdd_v1270),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SupportedBandCombinationAdd_v1270,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedBandCombinationAdd-v1270"
		},
};
static const int asn_MAP_RF_Parameters_v1270_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_RF_Parameters_v1270_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RF_Parameters_v1270_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* supportedBandCombination-v1270 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* supportedBandCombinationAdd-v1270 */
};
asn_SEQUENCE_specifics_t asn_SPC_RF_Parameters_v1270_specs_1 = {
	sizeof(struct RF_Parameters_v1270),
	offsetof(struct RF_Parameters_v1270, _asn_ctx),
	asn_MAP_RF_Parameters_v1270_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_RF_Parameters_v1270_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RF_Parameters_v1270 = {
	"RF-Parameters-v1270",
	"RF-Parameters-v1270",
	&asn_OP_SEQUENCE,
	asn_DEF_RF_Parameters_v1270_tags_1,
	sizeof(asn_DEF_RF_Parameters_v1270_tags_1)
		/sizeof(asn_DEF_RF_Parameters_v1270_tags_1[0]), /* 1 */
	asn_DEF_RF_Parameters_v1270_tags_1,	/* Same as above */
	sizeof(asn_DEF_RF_Parameters_v1270_tags_1)
		/sizeof(asn_DEF_RF_Parameters_v1270_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RF_Parameters_v1270_1,
	2,	/* Elements count */
	&asn_SPC_RF_Parameters_v1270_specs_1	/* Additional specs */
};

