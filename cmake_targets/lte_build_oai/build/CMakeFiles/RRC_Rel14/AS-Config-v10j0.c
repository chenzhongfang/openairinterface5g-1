/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "AS-Config-v10j0.h"

asn_TYPE_member_t asn_MBR_AS_Config_v10j0_1[] = {
	{ ATF_POINTER, 1, offsetof(struct AS_Config_v10j0, antennaInfoDedicatedPCell_v10i0),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AntennaInfoDedicated_v10i0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"antennaInfoDedicatedPCell-v10i0"
		},
};
static const int asn_MAP_AS_Config_v10j0_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_AS_Config_v10j0_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AS_Config_v10j0_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* antennaInfoDedicatedPCell-v10i0 */
};
asn_SEQUENCE_specifics_t asn_SPC_AS_Config_v10j0_specs_1 = {
	sizeof(struct AS_Config_v10j0),
	offsetof(struct AS_Config_v10j0, _asn_ctx),
	asn_MAP_AS_Config_v10j0_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_AS_Config_v10j0_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_AS_Config_v10j0 = {
	"AS-Config-v10j0",
	"AS-Config-v10j0",
	&asn_OP_SEQUENCE,
	asn_DEF_AS_Config_v10j0_tags_1,
	sizeof(asn_DEF_AS_Config_v10j0_tags_1)
		/sizeof(asn_DEF_AS_Config_v10j0_tags_1[0]), /* 1 */
	asn_DEF_AS_Config_v10j0_tags_1,	/* Same as above */
	sizeof(asn_DEF_AS_Config_v10j0_tags_1)
		/sizeof(asn_DEF_AS_Config_v10j0_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_AS_Config_v10j0_1,
	1,	/* Elements count */
	&asn_SPC_AS_Config_v10j0_specs_1	/* Additional specs */
};

