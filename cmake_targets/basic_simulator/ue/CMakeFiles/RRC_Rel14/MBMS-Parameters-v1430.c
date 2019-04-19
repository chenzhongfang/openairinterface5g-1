/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#include "MBMS-Parameters-v1430.h"

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
static asn_per_constraints_t asn_PER_type_fembmsDedicatedCell_r14_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_fembmsMixedCell_r14_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_subcarrierSpacingMBMS_khz7dot5_r14_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_subcarrierSpacingMBMS_khz1dot25_r14_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_fembmsDedicatedCell_r14_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_fembmsDedicatedCell_r14_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_fembmsDedicatedCell_r14_specs_2 = {
	asn_MAP_fembmsDedicatedCell_r14_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_fembmsDedicatedCell_r14_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_fembmsDedicatedCell_r14_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fembmsDedicatedCell_r14_2 = {
	"fembmsDedicatedCell-r14",
	"fembmsDedicatedCell-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_fembmsDedicatedCell_r14_tags_2,
	sizeof(asn_DEF_fembmsDedicatedCell_r14_tags_2)
		/sizeof(asn_DEF_fembmsDedicatedCell_r14_tags_2[0]) - 1, /* 1 */
	asn_DEF_fembmsDedicatedCell_r14_tags_2,	/* Same as above */
	sizeof(asn_DEF_fembmsDedicatedCell_r14_tags_2)
		/sizeof(asn_DEF_fembmsDedicatedCell_r14_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_fembmsDedicatedCell_r14_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_fembmsDedicatedCell_r14_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_fembmsMixedCell_r14_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_fembmsMixedCell_r14_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_fembmsMixedCell_r14_specs_4 = {
	asn_MAP_fembmsMixedCell_r14_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_fembmsMixedCell_r14_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_fembmsMixedCell_r14_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fembmsMixedCell_r14_4 = {
	"fembmsMixedCell-r14",
	"fembmsMixedCell-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_fembmsMixedCell_r14_tags_4,
	sizeof(asn_DEF_fembmsMixedCell_r14_tags_4)
		/sizeof(asn_DEF_fembmsMixedCell_r14_tags_4[0]) - 1, /* 1 */
	asn_DEF_fembmsMixedCell_r14_tags_4,	/* Same as above */
	sizeof(asn_DEF_fembmsMixedCell_r14_tags_4)
		/sizeof(asn_DEF_fembmsMixedCell_r14_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_fembmsMixedCell_r14_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_fembmsMixedCell_r14_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_subcarrierSpacingMBMS_khz7dot5_r14_value2enum_6[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_subcarrierSpacingMBMS_khz7dot5_r14_enum2value_6[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_subcarrierSpacingMBMS_khz7dot5_r14_specs_6 = {
	asn_MAP_subcarrierSpacingMBMS_khz7dot5_r14_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_subcarrierSpacingMBMS_khz7dot5_r14_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_subcarrierSpacingMBMS_khz7dot5_r14_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_subcarrierSpacingMBMS_khz7dot5_r14_6 = {
	"subcarrierSpacingMBMS-khz7dot5-r14",
	"subcarrierSpacingMBMS-khz7dot5-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_subcarrierSpacingMBMS_khz7dot5_r14_tags_6,
	sizeof(asn_DEF_subcarrierSpacingMBMS_khz7dot5_r14_tags_6)
		/sizeof(asn_DEF_subcarrierSpacingMBMS_khz7dot5_r14_tags_6[0]) - 1, /* 1 */
	asn_DEF_subcarrierSpacingMBMS_khz7dot5_r14_tags_6,	/* Same as above */
	sizeof(asn_DEF_subcarrierSpacingMBMS_khz7dot5_r14_tags_6)
		/sizeof(asn_DEF_subcarrierSpacingMBMS_khz7dot5_r14_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_subcarrierSpacingMBMS_khz7dot5_r14_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_subcarrierSpacingMBMS_khz7dot5_r14_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_subcarrierSpacingMBMS_khz1dot25_r14_value2enum_8[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_subcarrierSpacingMBMS_khz1dot25_r14_enum2value_8[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_subcarrierSpacingMBMS_khz1dot25_r14_specs_8 = {
	asn_MAP_subcarrierSpacingMBMS_khz1dot25_r14_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_subcarrierSpacingMBMS_khz1dot25_r14_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_subcarrierSpacingMBMS_khz1dot25_r14_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_subcarrierSpacingMBMS_khz1dot25_r14_8 = {
	"subcarrierSpacingMBMS-khz1dot25-r14",
	"subcarrierSpacingMBMS-khz1dot25-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_subcarrierSpacingMBMS_khz1dot25_r14_tags_8,
	sizeof(asn_DEF_subcarrierSpacingMBMS_khz1dot25_r14_tags_8)
		/sizeof(asn_DEF_subcarrierSpacingMBMS_khz1dot25_r14_tags_8[0]) - 1, /* 1 */
	asn_DEF_subcarrierSpacingMBMS_khz1dot25_r14_tags_8,	/* Same as above */
	sizeof(asn_DEF_subcarrierSpacingMBMS_khz1dot25_r14_tags_8)
		/sizeof(asn_DEF_subcarrierSpacingMBMS_khz1dot25_r14_tags_8[0]), /* 2 */
	{ 0, &asn_PER_type_subcarrierSpacingMBMS_khz1dot25_r14_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_subcarrierSpacingMBMS_khz1dot25_r14_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MBMS_Parameters_v1430_1[] = {
	{ ATF_POINTER, 4, offsetof(struct MBMS_Parameters_v1430, fembmsDedicatedCell_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_fembmsDedicatedCell_r14_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fembmsDedicatedCell-r14"
		},
	{ ATF_POINTER, 3, offsetof(struct MBMS_Parameters_v1430, fembmsMixedCell_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_fembmsMixedCell_r14_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fembmsMixedCell-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct MBMS_Parameters_v1430, subcarrierSpacingMBMS_khz7dot5_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_subcarrierSpacingMBMS_khz7dot5_r14_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"subcarrierSpacingMBMS-khz7dot5-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct MBMS_Parameters_v1430, subcarrierSpacingMBMS_khz1dot25_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_subcarrierSpacingMBMS_khz1dot25_r14_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"subcarrierSpacingMBMS-khz1dot25-r14"
		},
};
static const int asn_MAP_MBMS_Parameters_v1430_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_MBMS_Parameters_v1430_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MBMS_Parameters_v1430_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fembmsDedicatedCell-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* fembmsMixedCell-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* subcarrierSpacingMBMS-khz7dot5-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* subcarrierSpacingMBMS-khz1dot25-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_MBMS_Parameters_v1430_specs_1 = {
	sizeof(struct MBMS_Parameters_v1430),
	offsetof(struct MBMS_Parameters_v1430, _asn_ctx),
	asn_MAP_MBMS_Parameters_v1430_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_MBMS_Parameters_v1430_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MBMS_Parameters_v1430 = {
	"MBMS-Parameters-v1430",
	"MBMS-Parameters-v1430",
	&asn_OP_SEQUENCE,
	asn_DEF_MBMS_Parameters_v1430_tags_1,
	sizeof(asn_DEF_MBMS_Parameters_v1430_tags_1)
		/sizeof(asn_DEF_MBMS_Parameters_v1430_tags_1[0]), /* 1 */
	asn_DEF_MBMS_Parameters_v1430_tags_1,	/* Same as above */
	sizeof(asn_DEF_MBMS_Parameters_v1430_tags_1)
		/sizeof(asn_DEF_MBMS_Parameters_v1430_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MBMS_Parameters_v1430_1,
	4,	/* Elements count */
	&asn_SPC_MBMS_Parameters_v1430_specs_1	/* Additional specs */
};

