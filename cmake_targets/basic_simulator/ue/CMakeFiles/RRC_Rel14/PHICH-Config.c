/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#include "PHICH-Config.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_phich_Duration_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_phich_Resource_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_phich_Duration_value2enum_2[] = {
	{ 0,	6,	"normal" },
	{ 1,	8,	"extended" }
};
static const unsigned int asn_MAP_phich_Duration_enum2value_2[] = {
	1,	/* extended(1) */
	0	/* normal(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_phich_Duration_specs_2 = {
	asn_MAP_phich_Duration_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_phich_Duration_enum2value_2,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_phich_Duration_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_phich_Duration_2 = {
	"phich-Duration",
	"phich-Duration",
	&asn_OP_NativeEnumerated,
	asn_DEF_phich_Duration_tags_2,
	sizeof(asn_DEF_phich_Duration_tags_2)
		/sizeof(asn_DEF_phich_Duration_tags_2[0]) - 1, /* 1 */
	asn_DEF_phich_Duration_tags_2,	/* Same as above */
	sizeof(asn_DEF_phich_Duration_tags_2)
		/sizeof(asn_DEF_phich_Duration_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_phich_Duration_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_phich_Duration_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_phich_Resource_value2enum_5[] = {
	{ 0,	8,	"oneSixth" },
	{ 1,	4,	"half" },
	{ 2,	3,	"one" },
	{ 3,	3,	"two" }
};
static const unsigned int asn_MAP_phich_Resource_enum2value_5[] = {
	1,	/* half(1) */
	2,	/* one(2) */
	0,	/* oneSixth(0) */
	3	/* two(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_phich_Resource_specs_5 = {
	asn_MAP_phich_Resource_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_phich_Resource_enum2value_5,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_phich_Resource_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_phich_Resource_5 = {
	"phich-Resource",
	"phich-Resource",
	&asn_OP_NativeEnumerated,
	asn_DEF_phich_Resource_tags_5,
	sizeof(asn_DEF_phich_Resource_tags_5)
		/sizeof(asn_DEF_phich_Resource_tags_5[0]) - 1, /* 1 */
	asn_DEF_phich_Resource_tags_5,	/* Same as above */
	sizeof(asn_DEF_phich_Resource_tags_5)
		/sizeof(asn_DEF_phich_Resource_tags_5[0]), /* 2 */
	{ 0, &asn_PER_type_phich_Resource_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_phich_Resource_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PHICH_Config_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PHICH_Config, phich_Duration),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_phich_Duration_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"phich-Duration"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PHICH_Config, phich_Resource),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_phich_Resource_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"phich-Resource"
		},
};
static const ber_tlv_tag_t asn_DEF_PHICH_Config_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PHICH_Config_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* phich-Duration */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* phich-Resource */
};
asn_SEQUENCE_specifics_t asn_SPC_PHICH_Config_specs_1 = {
	sizeof(struct PHICH_Config),
	offsetof(struct PHICH_Config, _asn_ctx),
	asn_MAP_PHICH_Config_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PHICH_Config = {
	"PHICH-Config",
	"PHICH-Config",
	&asn_OP_SEQUENCE,
	asn_DEF_PHICH_Config_tags_1,
	sizeof(asn_DEF_PHICH_Config_tags_1)
		/sizeof(asn_DEF_PHICH_Config_tags_1[0]), /* 1 */
	asn_DEF_PHICH_Config_tags_1,	/* Same as above */
	sizeof(asn_DEF_PHICH_Config_tags_1)
		/sizeof(asn_DEF_PHICH_Config_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PHICH_Config_1,
	2,	/* Elements count */
	&asn_SPC_PHICH_Config_specs_1	/* Additional specs */
};

