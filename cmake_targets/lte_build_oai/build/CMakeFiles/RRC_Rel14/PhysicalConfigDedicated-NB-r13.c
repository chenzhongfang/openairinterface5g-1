/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "PhysicalConfigDedicated-NB-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_twoHARQ_ProcessesConfig_r14_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_interferenceRandomisationConfig_r14_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_twoHARQ_ProcessesConfig_r14_value2enum_8[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_twoHARQ_ProcessesConfig_r14_enum2value_8[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_twoHARQ_ProcessesConfig_r14_specs_8 = {
	asn_MAP_twoHARQ_ProcessesConfig_r14_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_twoHARQ_ProcessesConfig_r14_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_twoHARQ_ProcessesConfig_r14_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_twoHARQ_ProcessesConfig_r14_8 = {
	"twoHARQ-ProcessesConfig-r14",
	"twoHARQ-ProcessesConfig-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_twoHARQ_ProcessesConfig_r14_tags_8,
	sizeof(asn_DEF_twoHARQ_ProcessesConfig_r14_tags_8)
		/sizeof(asn_DEF_twoHARQ_ProcessesConfig_r14_tags_8[0]) - 1, /* 1 */
	asn_DEF_twoHARQ_ProcessesConfig_r14_tags_8,	/* Same as above */
	sizeof(asn_DEF_twoHARQ_ProcessesConfig_r14_tags_8)
		/sizeof(asn_DEF_twoHARQ_ProcessesConfig_r14_tags_8[0]), /* 2 */
	{ 0, &asn_PER_type_twoHARQ_ProcessesConfig_r14_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_twoHARQ_ProcessesConfig_r14_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_7[] = {
	{ ATF_POINTER, 1, offsetof(struct PhysicalConfigDedicated_NB_r13__ext1, twoHARQ_ProcessesConfig_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_twoHARQ_ProcessesConfig_r14_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"twoHARQ-ProcessesConfig-r14"
		},
};
static const int asn_MAP_ext1_oms_7[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* twoHARQ-ProcessesConfig-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_7 = {
	sizeof(struct PhysicalConfigDedicated_NB_r13__ext1),
	offsetof(struct PhysicalConfigDedicated_NB_r13__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_7,
	1,	/* Count of tags in the map */
	asn_MAP_ext1_oms_7,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_7 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_7,
	sizeof(asn_DEF_ext1_tags_7)
		/sizeof(asn_DEF_ext1_tags_7[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_7,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_7)
		/sizeof(asn_DEF_ext1_tags_7[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext1_7,
	1,	/* Elements count */
	&asn_SPC_ext1_specs_7	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_interferenceRandomisationConfig_r14_value2enum_11[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_interferenceRandomisationConfig_r14_enum2value_11[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_interferenceRandomisationConfig_r14_specs_11 = {
	asn_MAP_interferenceRandomisationConfig_r14_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_interferenceRandomisationConfig_r14_enum2value_11,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_interferenceRandomisationConfig_r14_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_interferenceRandomisationConfig_r14_11 = {
	"interferenceRandomisationConfig-r14",
	"interferenceRandomisationConfig-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_interferenceRandomisationConfig_r14_tags_11,
	sizeof(asn_DEF_interferenceRandomisationConfig_r14_tags_11)
		/sizeof(asn_DEF_interferenceRandomisationConfig_r14_tags_11[0]) - 1, /* 1 */
	asn_DEF_interferenceRandomisationConfig_r14_tags_11,	/* Same as above */
	sizeof(asn_DEF_interferenceRandomisationConfig_r14_tags_11)
		/sizeof(asn_DEF_interferenceRandomisationConfig_r14_tags_11[0]), /* 2 */
	{ 0, &asn_PER_type_interferenceRandomisationConfig_r14_constr_11, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_interferenceRandomisationConfig_r14_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext2_10[] = {
	{ ATF_POINTER, 1, offsetof(struct PhysicalConfigDedicated_NB_r13__ext2, interferenceRandomisationConfig_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_interferenceRandomisationConfig_r14_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interferenceRandomisationConfig-r14"
		},
};
static const int asn_MAP_ext2_oms_10[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext2_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext2_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* interferenceRandomisationConfig-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext2_specs_10 = {
	sizeof(struct PhysicalConfigDedicated_NB_r13__ext2),
	offsetof(struct PhysicalConfigDedicated_NB_r13__ext2, _asn_ctx),
	asn_MAP_ext2_tag2el_10,
	1,	/* Count of tags in the map */
	asn_MAP_ext2_oms_10,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext2_10 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_ext2_tags_10,
	sizeof(asn_DEF_ext2_tags_10)
		/sizeof(asn_DEF_ext2_tags_10[0]) - 1, /* 1 */
	asn_DEF_ext2_tags_10,	/* Same as above */
	sizeof(asn_DEF_ext2_tags_10)
		/sizeof(asn_DEF_ext2_tags_10[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext2_10,
	1,	/* Elements count */
	&asn_SPC_ext2_specs_10	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PhysicalConfigDedicated_NB_r13_1[] = {
	{ ATF_POINTER, 6, offsetof(struct PhysicalConfigDedicated_NB_r13, carrierConfigDedicated_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierConfigDedicated_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierConfigDedicated-r13"
		},
	{ ATF_POINTER, 5, offsetof(struct PhysicalConfigDedicated_NB_r13, npdcch_ConfigDedicated_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NPDCCH_ConfigDedicated_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"npdcch-ConfigDedicated-r13"
		},
	{ ATF_POINTER, 4, offsetof(struct PhysicalConfigDedicated_NB_r13, npusch_ConfigDedicated_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NPUSCH_ConfigDedicated_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"npusch-ConfigDedicated-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct PhysicalConfigDedicated_NB_r13, uplinkPowerControlDedicated_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UplinkPowerControlDedicated_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uplinkPowerControlDedicated-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct PhysicalConfigDedicated_NB_r13, ext1),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_ext1_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
	{ ATF_POINTER, 1, offsetof(struct PhysicalConfigDedicated_NB_r13, ext2),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_ext2_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext2"
		},
};
static const int asn_MAP_PhysicalConfigDedicated_NB_r13_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_PhysicalConfigDedicated_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PhysicalConfigDedicated_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierConfigDedicated-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* npdcch-ConfigDedicated-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* npusch-ConfigDedicated-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* uplinkPowerControlDedicated-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* ext2 */
};
asn_SEQUENCE_specifics_t asn_SPC_PhysicalConfigDedicated_NB_r13_specs_1 = {
	sizeof(struct PhysicalConfigDedicated_NB_r13),
	offsetof(struct PhysicalConfigDedicated_NB_r13, _asn_ctx),
	asn_MAP_PhysicalConfigDedicated_NB_r13_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_PhysicalConfigDedicated_NB_r13_oms_1,	/* Optional members */
	4, 2,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PhysicalConfigDedicated_NB_r13 = {
	"PhysicalConfigDedicated-NB-r13",
	"PhysicalConfigDedicated-NB-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_PhysicalConfigDedicated_NB_r13_tags_1,
	sizeof(asn_DEF_PhysicalConfigDedicated_NB_r13_tags_1)
		/sizeof(asn_DEF_PhysicalConfigDedicated_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_PhysicalConfigDedicated_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_PhysicalConfigDedicated_NB_r13_tags_1)
		/sizeof(asn_DEF_PhysicalConfigDedicated_NB_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PhysicalConfigDedicated_NB_r13_1,
	6,	/* Elements count */
	&asn_SPC_PhysicalConfigDedicated_NB_r13_specs_1	/* Additional specs */
};

