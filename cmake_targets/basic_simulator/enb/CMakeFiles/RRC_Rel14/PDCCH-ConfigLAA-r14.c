/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "PDCCH-ConfigLAA-r14.h"

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
static asn_per_constraints_t asn_PER_type_maxNumberOfSchedSubframes_Format0B_r14_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_maxNumberOfSchedSubframes_Format4B_r14_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_skipMonitoringDCI_Format0A_r14_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_skipMonitoringDCI_Format4A_r14_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_maxNumberOfSchedSubframes_Format0B_r14_value2enum_2[] = {
	{ 0,	3,	"sf2" },
	{ 1,	3,	"sf3" },
	{ 2,	3,	"sf4" }
};
static const unsigned int asn_MAP_maxNumberOfSchedSubframes_Format0B_r14_enum2value_2[] = {
	0,	/* sf2(0) */
	1,	/* sf3(1) */
	2	/* sf4(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_maxNumberOfSchedSubframes_Format0B_r14_specs_2 = {
	asn_MAP_maxNumberOfSchedSubframes_Format0B_r14_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_maxNumberOfSchedSubframes_Format0B_r14_enum2value_2,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_maxNumberOfSchedSubframes_Format0B_r14_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_maxNumberOfSchedSubframes_Format0B_r14_2 = {
	"maxNumberOfSchedSubframes-Format0B-r14",
	"maxNumberOfSchedSubframes-Format0B-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_maxNumberOfSchedSubframes_Format0B_r14_tags_2,
	sizeof(asn_DEF_maxNumberOfSchedSubframes_Format0B_r14_tags_2)
		/sizeof(asn_DEF_maxNumberOfSchedSubframes_Format0B_r14_tags_2[0]) - 1, /* 1 */
	asn_DEF_maxNumberOfSchedSubframes_Format0B_r14_tags_2,	/* Same as above */
	sizeof(asn_DEF_maxNumberOfSchedSubframes_Format0B_r14_tags_2)
		/sizeof(asn_DEF_maxNumberOfSchedSubframes_Format0B_r14_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_maxNumberOfSchedSubframes_Format0B_r14_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_maxNumberOfSchedSubframes_Format0B_r14_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_maxNumberOfSchedSubframes_Format4B_r14_value2enum_6[] = {
	{ 0,	3,	"sf2" },
	{ 1,	3,	"sf3" },
	{ 2,	3,	"sf4" }
};
static const unsigned int asn_MAP_maxNumberOfSchedSubframes_Format4B_r14_enum2value_6[] = {
	0,	/* sf2(0) */
	1,	/* sf3(1) */
	2	/* sf4(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_maxNumberOfSchedSubframes_Format4B_r14_specs_6 = {
	asn_MAP_maxNumberOfSchedSubframes_Format4B_r14_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_maxNumberOfSchedSubframes_Format4B_r14_enum2value_6,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_maxNumberOfSchedSubframes_Format4B_r14_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_maxNumberOfSchedSubframes_Format4B_r14_6 = {
	"maxNumberOfSchedSubframes-Format4B-r14",
	"maxNumberOfSchedSubframes-Format4B-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_maxNumberOfSchedSubframes_Format4B_r14_tags_6,
	sizeof(asn_DEF_maxNumberOfSchedSubframes_Format4B_r14_tags_6)
		/sizeof(asn_DEF_maxNumberOfSchedSubframes_Format4B_r14_tags_6[0]) - 1, /* 1 */
	asn_DEF_maxNumberOfSchedSubframes_Format4B_r14_tags_6,	/* Same as above */
	sizeof(asn_DEF_maxNumberOfSchedSubframes_Format4B_r14_tags_6)
		/sizeof(asn_DEF_maxNumberOfSchedSubframes_Format4B_r14_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_maxNumberOfSchedSubframes_Format4B_r14_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_maxNumberOfSchedSubframes_Format4B_r14_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_skipMonitoringDCI_Format0A_r14_value2enum_10[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_skipMonitoringDCI_Format0A_r14_enum2value_10[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_skipMonitoringDCI_Format0A_r14_specs_10 = {
	asn_MAP_skipMonitoringDCI_Format0A_r14_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_skipMonitoringDCI_Format0A_r14_enum2value_10,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_skipMonitoringDCI_Format0A_r14_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_skipMonitoringDCI_Format0A_r14_10 = {
	"skipMonitoringDCI-Format0A-r14",
	"skipMonitoringDCI-Format0A-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_skipMonitoringDCI_Format0A_r14_tags_10,
	sizeof(asn_DEF_skipMonitoringDCI_Format0A_r14_tags_10)
		/sizeof(asn_DEF_skipMonitoringDCI_Format0A_r14_tags_10[0]) - 1, /* 1 */
	asn_DEF_skipMonitoringDCI_Format0A_r14_tags_10,	/* Same as above */
	sizeof(asn_DEF_skipMonitoringDCI_Format0A_r14_tags_10)
		/sizeof(asn_DEF_skipMonitoringDCI_Format0A_r14_tags_10[0]), /* 2 */
	{ 0, &asn_PER_type_skipMonitoringDCI_Format0A_r14_constr_10, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_skipMonitoringDCI_Format0A_r14_specs_10	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_skipMonitoringDCI_Format4A_r14_value2enum_12[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_skipMonitoringDCI_Format4A_r14_enum2value_12[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_skipMonitoringDCI_Format4A_r14_specs_12 = {
	asn_MAP_skipMonitoringDCI_Format4A_r14_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_skipMonitoringDCI_Format4A_r14_enum2value_12,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_skipMonitoringDCI_Format4A_r14_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_skipMonitoringDCI_Format4A_r14_12 = {
	"skipMonitoringDCI-Format4A-r14",
	"skipMonitoringDCI-Format4A-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_skipMonitoringDCI_Format4A_r14_tags_12,
	sizeof(asn_DEF_skipMonitoringDCI_Format4A_r14_tags_12)
		/sizeof(asn_DEF_skipMonitoringDCI_Format4A_r14_tags_12[0]) - 1, /* 1 */
	asn_DEF_skipMonitoringDCI_Format4A_r14_tags_12,	/* Same as above */
	sizeof(asn_DEF_skipMonitoringDCI_Format4A_r14_tags_12)
		/sizeof(asn_DEF_skipMonitoringDCI_Format4A_r14_tags_12[0]), /* 2 */
	{ 0, &asn_PER_type_skipMonitoringDCI_Format4A_r14_constr_12, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_skipMonitoringDCI_Format4A_r14_specs_12	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PDCCH_ConfigLAA_r14_1[] = {
	{ ATF_POINTER, 8, offsetof(struct PDCCH_ConfigLAA_r14, maxNumberOfSchedSubframes_Format0B_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_maxNumberOfSchedSubframes_Format0B_r14_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxNumberOfSchedSubframes-Format0B-r14"
		},
	{ ATF_POINTER, 7, offsetof(struct PDCCH_ConfigLAA_r14, maxNumberOfSchedSubframes_Format4B_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_maxNumberOfSchedSubframes_Format4B_r14_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxNumberOfSchedSubframes-Format4B-r14"
		},
	{ ATF_POINTER, 6, offsetof(struct PDCCH_ConfigLAA_r14, skipMonitoringDCI_Format0A_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_skipMonitoringDCI_Format0A_r14_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"skipMonitoringDCI-Format0A-r14"
		},
	{ ATF_POINTER, 5, offsetof(struct PDCCH_ConfigLAA_r14, skipMonitoringDCI_Format4A_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_skipMonitoringDCI_Format4A_r14_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"skipMonitoringDCI-Format4A-r14"
		},
	{ ATF_POINTER, 4, offsetof(struct PDCCH_ConfigLAA_r14, pdcch_CandidateReductions_Format0A_r14),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_PDCCH_CandidateReductions_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdcch-CandidateReductions-Format0A-r14"
		},
	{ ATF_POINTER, 3, offsetof(struct PDCCH_ConfigLAA_r14, pdcch_CandidateReductions_Format4A_r14),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_PDCCH_CandidateReductionsLAA_UL_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdcch-CandidateReductions-Format4A-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct PDCCH_ConfigLAA_r14, pdcch_CandidateReductions_Format0B_r14),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_PDCCH_CandidateReductionsLAA_UL_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdcch-CandidateReductions-Format0B-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct PDCCH_ConfigLAA_r14, pdcch_CandidateReductions_Format4B_r14),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_PDCCH_CandidateReductionsLAA_UL_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdcch-CandidateReductions-Format4B-r14"
		},
};
static const int asn_MAP_PDCCH_ConfigLAA_r14_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_PDCCH_ConfigLAA_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PDCCH_ConfigLAA_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* maxNumberOfSchedSubframes-Format0B-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* maxNumberOfSchedSubframes-Format4B-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* skipMonitoringDCI-Format0A-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* skipMonitoringDCI-Format4A-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* pdcch-CandidateReductions-Format0A-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* pdcch-CandidateReductions-Format4A-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* pdcch-CandidateReductions-Format0B-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* pdcch-CandidateReductions-Format4B-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_PDCCH_ConfigLAA_r14_specs_1 = {
	sizeof(struct PDCCH_ConfigLAA_r14),
	offsetof(struct PDCCH_ConfigLAA_r14, _asn_ctx),
	asn_MAP_PDCCH_ConfigLAA_r14_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_PDCCH_ConfigLAA_r14_oms_1,	/* Optional members */
	8, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PDCCH_ConfigLAA_r14 = {
	"PDCCH-ConfigLAA-r14",
	"PDCCH-ConfigLAA-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_PDCCH_ConfigLAA_r14_tags_1,
	sizeof(asn_DEF_PDCCH_ConfigLAA_r14_tags_1)
		/sizeof(asn_DEF_PDCCH_ConfigLAA_r14_tags_1[0]), /* 1 */
	asn_DEF_PDCCH_ConfigLAA_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_PDCCH_ConfigLAA_r14_tags_1)
		/sizeof(asn_DEF_PDCCH_ConfigLAA_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PDCCH_ConfigLAA_r14_1,
	8,	/* Elements count */
	&asn_SPC_PDCCH_ConfigLAA_r14_specs_1	/* Additional specs */
};

