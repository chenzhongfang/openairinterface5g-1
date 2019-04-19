/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "MUST-Parameters-r14.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_must_TM234_UpTo2Tx_r14_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_must_TM89_UpToOneInterferingLayer_r14_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_must_TM10_UpToOneInterferingLayer_r14_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_must_TM89_UpToThreeInterferingLayers_r14_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_must_TM10_UpToThreeInterferingLayers_r14_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_must_TM234_UpTo2Tx_r14_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_must_TM234_UpTo2Tx_r14_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_must_TM234_UpTo2Tx_r14_specs_2 = {
	asn_MAP_must_TM234_UpTo2Tx_r14_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_must_TM234_UpTo2Tx_r14_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_must_TM234_UpTo2Tx_r14_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_must_TM234_UpTo2Tx_r14_2 = {
	"must-TM234-UpTo2Tx-r14",
	"must-TM234-UpTo2Tx-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_must_TM234_UpTo2Tx_r14_tags_2,
	sizeof(asn_DEF_must_TM234_UpTo2Tx_r14_tags_2)
		/sizeof(asn_DEF_must_TM234_UpTo2Tx_r14_tags_2[0]) - 1, /* 1 */
	asn_DEF_must_TM234_UpTo2Tx_r14_tags_2,	/* Same as above */
	sizeof(asn_DEF_must_TM234_UpTo2Tx_r14_tags_2)
		/sizeof(asn_DEF_must_TM234_UpTo2Tx_r14_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_must_TM234_UpTo2Tx_r14_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_must_TM234_UpTo2Tx_r14_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_must_TM89_UpToOneInterferingLayer_r14_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_must_TM89_UpToOneInterferingLayer_r14_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_must_TM89_UpToOneInterferingLayer_r14_specs_4 = {
	asn_MAP_must_TM89_UpToOneInterferingLayer_r14_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_must_TM89_UpToOneInterferingLayer_r14_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_must_TM89_UpToOneInterferingLayer_r14_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_must_TM89_UpToOneInterferingLayer_r14_4 = {
	"must-TM89-UpToOneInterferingLayer-r14",
	"must-TM89-UpToOneInterferingLayer-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_must_TM89_UpToOneInterferingLayer_r14_tags_4,
	sizeof(asn_DEF_must_TM89_UpToOneInterferingLayer_r14_tags_4)
		/sizeof(asn_DEF_must_TM89_UpToOneInterferingLayer_r14_tags_4[0]) - 1, /* 1 */
	asn_DEF_must_TM89_UpToOneInterferingLayer_r14_tags_4,	/* Same as above */
	sizeof(asn_DEF_must_TM89_UpToOneInterferingLayer_r14_tags_4)
		/sizeof(asn_DEF_must_TM89_UpToOneInterferingLayer_r14_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_must_TM89_UpToOneInterferingLayer_r14_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_must_TM89_UpToOneInterferingLayer_r14_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_must_TM10_UpToOneInterferingLayer_r14_value2enum_6[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_must_TM10_UpToOneInterferingLayer_r14_enum2value_6[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_must_TM10_UpToOneInterferingLayer_r14_specs_6 = {
	asn_MAP_must_TM10_UpToOneInterferingLayer_r14_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_must_TM10_UpToOneInterferingLayer_r14_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_must_TM10_UpToOneInterferingLayer_r14_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_must_TM10_UpToOneInterferingLayer_r14_6 = {
	"must-TM10-UpToOneInterferingLayer-r14",
	"must-TM10-UpToOneInterferingLayer-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_must_TM10_UpToOneInterferingLayer_r14_tags_6,
	sizeof(asn_DEF_must_TM10_UpToOneInterferingLayer_r14_tags_6)
		/sizeof(asn_DEF_must_TM10_UpToOneInterferingLayer_r14_tags_6[0]) - 1, /* 1 */
	asn_DEF_must_TM10_UpToOneInterferingLayer_r14_tags_6,	/* Same as above */
	sizeof(asn_DEF_must_TM10_UpToOneInterferingLayer_r14_tags_6)
		/sizeof(asn_DEF_must_TM10_UpToOneInterferingLayer_r14_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_must_TM10_UpToOneInterferingLayer_r14_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_must_TM10_UpToOneInterferingLayer_r14_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_must_TM89_UpToThreeInterferingLayers_r14_value2enum_8[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_must_TM89_UpToThreeInterferingLayers_r14_enum2value_8[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_must_TM89_UpToThreeInterferingLayers_r14_specs_8 = {
	asn_MAP_must_TM89_UpToThreeInterferingLayers_r14_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_must_TM89_UpToThreeInterferingLayers_r14_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_must_TM89_UpToThreeInterferingLayers_r14_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_must_TM89_UpToThreeInterferingLayers_r14_8 = {
	"must-TM89-UpToThreeInterferingLayers-r14",
	"must-TM89-UpToThreeInterferingLayers-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_must_TM89_UpToThreeInterferingLayers_r14_tags_8,
	sizeof(asn_DEF_must_TM89_UpToThreeInterferingLayers_r14_tags_8)
		/sizeof(asn_DEF_must_TM89_UpToThreeInterferingLayers_r14_tags_8[0]) - 1, /* 1 */
	asn_DEF_must_TM89_UpToThreeInterferingLayers_r14_tags_8,	/* Same as above */
	sizeof(asn_DEF_must_TM89_UpToThreeInterferingLayers_r14_tags_8)
		/sizeof(asn_DEF_must_TM89_UpToThreeInterferingLayers_r14_tags_8[0]), /* 2 */
	{ 0, &asn_PER_type_must_TM89_UpToThreeInterferingLayers_r14_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_must_TM89_UpToThreeInterferingLayers_r14_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_must_TM10_UpToThreeInterferingLayers_r14_value2enum_10[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_must_TM10_UpToThreeInterferingLayers_r14_enum2value_10[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_must_TM10_UpToThreeInterferingLayers_r14_specs_10 = {
	asn_MAP_must_TM10_UpToThreeInterferingLayers_r14_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_must_TM10_UpToThreeInterferingLayers_r14_enum2value_10,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_must_TM10_UpToThreeInterferingLayers_r14_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_must_TM10_UpToThreeInterferingLayers_r14_10 = {
	"must-TM10-UpToThreeInterferingLayers-r14",
	"must-TM10-UpToThreeInterferingLayers-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_must_TM10_UpToThreeInterferingLayers_r14_tags_10,
	sizeof(asn_DEF_must_TM10_UpToThreeInterferingLayers_r14_tags_10)
		/sizeof(asn_DEF_must_TM10_UpToThreeInterferingLayers_r14_tags_10[0]) - 1, /* 1 */
	asn_DEF_must_TM10_UpToThreeInterferingLayers_r14_tags_10,	/* Same as above */
	sizeof(asn_DEF_must_TM10_UpToThreeInterferingLayers_r14_tags_10)
		/sizeof(asn_DEF_must_TM10_UpToThreeInterferingLayers_r14_tags_10[0]), /* 2 */
	{ 0, &asn_PER_type_must_TM10_UpToThreeInterferingLayers_r14_constr_10, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_must_TM10_UpToThreeInterferingLayers_r14_specs_10	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MUST_Parameters_r14_1[] = {
	{ ATF_POINTER, 5, offsetof(struct MUST_Parameters_r14, must_TM234_UpTo2Tx_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_must_TM234_UpTo2Tx_r14_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"must-TM234-UpTo2Tx-r14"
		},
	{ ATF_POINTER, 4, offsetof(struct MUST_Parameters_r14, must_TM89_UpToOneInterferingLayer_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_must_TM89_UpToOneInterferingLayer_r14_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"must-TM89-UpToOneInterferingLayer-r14"
		},
	{ ATF_POINTER, 3, offsetof(struct MUST_Parameters_r14, must_TM10_UpToOneInterferingLayer_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_must_TM10_UpToOneInterferingLayer_r14_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"must-TM10-UpToOneInterferingLayer-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct MUST_Parameters_r14, must_TM89_UpToThreeInterferingLayers_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_must_TM89_UpToThreeInterferingLayers_r14_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"must-TM89-UpToThreeInterferingLayers-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct MUST_Parameters_r14, must_TM10_UpToThreeInterferingLayers_r14),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_must_TM10_UpToThreeInterferingLayers_r14_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"must-TM10-UpToThreeInterferingLayers-r14"
		},
};
static const int asn_MAP_MUST_Parameters_r14_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_MUST_Parameters_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MUST_Parameters_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* must-TM234-UpTo2Tx-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* must-TM89-UpToOneInterferingLayer-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* must-TM10-UpToOneInterferingLayer-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* must-TM89-UpToThreeInterferingLayers-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* must-TM10-UpToThreeInterferingLayers-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_MUST_Parameters_r14_specs_1 = {
	sizeof(struct MUST_Parameters_r14),
	offsetof(struct MUST_Parameters_r14, _asn_ctx),
	asn_MAP_MUST_Parameters_r14_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_MUST_Parameters_r14_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MUST_Parameters_r14 = {
	"MUST-Parameters-r14",
	"MUST-Parameters-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_MUST_Parameters_r14_tags_1,
	sizeof(asn_DEF_MUST_Parameters_r14_tags_1)
		/sizeof(asn_DEF_MUST_Parameters_r14_tags_1[0]), /* 1 */
	asn_DEF_MUST_Parameters_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_MUST_Parameters_r14_tags_1)
		/sizeof(asn_DEF_MUST_Parameters_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MUST_Parameters_r14_1,
	5,	/* Elements count */
	&asn_SPC_MUST_Parameters_r14_specs_1	/* Additional specs */
};

