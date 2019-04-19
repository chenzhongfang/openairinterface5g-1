/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "ACDC-BarringForCommon-r13.h"

asn_TYPE_member_t asn_MBR_ACDC_BarringForCommon_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ACDC_BarringForCommon_r13, acdc_HPLMNonly_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"acdc-HPLMNonly-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ACDC_BarringForCommon_r13, barringPerACDC_CategoryList_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BarringPerACDC_CategoryList_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"barringPerACDC-CategoryList-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_ACDC_BarringForCommon_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ACDC_BarringForCommon_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* acdc-HPLMNonly-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* barringPerACDC-CategoryList-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_ACDC_BarringForCommon_r13_specs_1 = {
	sizeof(struct ACDC_BarringForCommon_r13),
	offsetof(struct ACDC_BarringForCommon_r13, _asn_ctx),
	asn_MAP_ACDC_BarringForCommon_r13_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ACDC_BarringForCommon_r13 = {
	"ACDC-BarringForCommon-r13",
	"ACDC-BarringForCommon-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_ACDC_BarringForCommon_r13_tags_1,
	sizeof(asn_DEF_ACDC_BarringForCommon_r13_tags_1)
		/sizeof(asn_DEF_ACDC_BarringForCommon_r13_tags_1[0]), /* 1 */
	asn_DEF_ACDC_BarringForCommon_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_ACDC_BarringForCommon_r13_tags_1)
		/sizeof(asn_DEF_ACDC_BarringForCommon_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ACDC_BarringForCommon_r13_1,
	2,	/* Elements count */
	&asn_SPC_ACDC_BarringForCommon_r13_specs_1	/* Additional specs */
};

