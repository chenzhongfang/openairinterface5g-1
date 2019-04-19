/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "PerCC-GapIndication-r14.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_gapIndication_r14_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_gapIndication_r14_value2enum_3[] = {
	{ 0,	3,	"gap" },
	{ 1,	4,	"ncsg" },
	{ 2,	12,	"nogap-noNcsg" }
};
static const unsigned int asn_MAP_gapIndication_r14_enum2value_3[] = {
	0,	/* gap(0) */
	1,	/* ncsg(1) */
	2	/* nogap-noNcsg(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_gapIndication_r14_specs_3 = {
	asn_MAP_gapIndication_r14_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_gapIndication_r14_enum2value_3,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_gapIndication_r14_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_gapIndication_r14_3 = {
	"gapIndication-r14",
	"gapIndication-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_gapIndication_r14_tags_3,
	sizeof(asn_DEF_gapIndication_r14_tags_3)
		/sizeof(asn_DEF_gapIndication_r14_tags_3[0]) - 1, /* 1 */
	asn_DEF_gapIndication_r14_tags_3,	/* Same as above */
	sizeof(asn_DEF_gapIndication_r14_tags_3)
		/sizeof(asn_DEF_gapIndication_r14_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_gapIndication_r14_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_gapIndication_r14_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PerCC_GapIndication_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PerCC_GapIndication_r14, servCellId_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ServCellIndex_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"servCellId-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PerCC_GapIndication_r14, gapIndication_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_gapIndication_r14_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gapIndication-r14"
		},
};
static const ber_tlv_tag_t asn_DEF_PerCC_GapIndication_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PerCC_GapIndication_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* servCellId-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* gapIndication-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_PerCC_GapIndication_r14_specs_1 = {
	sizeof(struct PerCC_GapIndication_r14),
	offsetof(struct PerCC_GapIndication_r14, _asn_ctx),
	asn_MAP_PerCC_GapIndication_r14_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PerCC_GapIndication_r14 = {
	"PerCC-GapIndication-r14",
	"PerCC-GapIndication-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_PerCC_GapIndication_r14_tags_1,
	sizeof(asn_DEF_PerCC_GapIndication_r14_tags_1)
		/sizeof(asn_DEF_PerCC_GapIndication_r14_tags_1[0]), /* 1 */
	asn_DEF_PerCC_GapIndication_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_PerCC_GapIndication_r14_tags_1)
		/sizeof(asn_DEF_PerCC_GapIndication_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PerCC_GapIndication_r14_1,
	2,	/* Elements count */
	&asn_SPC_PerCC_GapIndication_r14_specs_1	/* Additional specs */
};

