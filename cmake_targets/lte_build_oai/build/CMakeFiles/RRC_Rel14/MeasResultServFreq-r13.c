/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "MeasResultServFreq-r13.h"

static asn_TYPE_member_t asn_MBR_measResultSCell_r13_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultServFreq_r13__measResultSCell_r13, rsrpResultSCell_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsrpResultSCell-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultServFreq_r13__measResultSCell_r13, rsrqResultSCell_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRQ_Range_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsrqResultSCell-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasResultServFreq_r13__measResultSCell_r13, rs_sinr_Result_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RS_SINR_Range_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rs-sinr-Result-r13"
		},
};
static const int asn_MAP_measResultSCell_r13_oms_3[] = { 2 };
static const ber_tlv_tag_t asn_DEF_measResultSCell_r13_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_measResultSCell_r13_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rsrpResultSCell-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rsrqResultSCell-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* rs-sinr-Result-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_measResultSCell_r13_specs_3 = {
	sizeof(struct MeasResultServFreq_r13__measResultSCell_r13),
	offsetof(struct MeasResultServFreq_r13__measResultSCell_r13, _asn_ctx),
	asn_MAP_measResultSCell_r13_tag2el_3,
	3,	/* Count of tags in the map */
	asn_MAP_measResultSCell_r13_oms_3,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measResultSCell_r13_3 = {
	"measResultSCell-r13",
	"measResultSCell-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_measResultSCell_r13_tags_3,
	sizeof(asn_DEF_measResultSCell_r13_tags_3)
		/sizeof(asn_DEF_measResultSCell_r13_tags_3[0]) - 1, /* 1 */
	asn_DEF_measResultSCell_r13_tags_3,	/* Same as above */
	sizeof(asn_DEF_measResultSCell_r13_tags_3)
		/sizeof(asn_DEF_measResultSCell_r13_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_measResultSCell_r13_3,
	3,	/* Elements count */
	&asn_SPC_measResultSCell_r13_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_measResultBestNeighCell_r13_7[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultServFreq_r13__measResultBestNeighCell_r13, physCellId_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physCellId-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultServFreq_r13__measResultBestNeighCell_r13, rsrpResultNCell_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsrpResultNCell-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultServFreq_r13__measResultBestNeighCell_r13, rsrqResultNCell_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRQ_Range_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsrqResultNCell-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasResultServFreq_r13__measResultBestNeighCell_r13, rs_sinr_Result_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RS_SINR_Range_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rs-sinr-Result-r13"
		},
};
static const int asn_MAP_measResultBestNeighCell_r13_oms_7[] = { 3 };
static const ber_tlv_tag_t asn_DEF_measResultBestNeighCell_r13_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_measResultBestNeighCell_r13_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physCellId-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rsrpResultNCell-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rsrqResultNCell-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* rs-sinr-Result-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_measResultBestNeighCell_r13_specs_7 = {
	sizeof(struct MeasResultServFreq_r13__measResultBestNeighCell_r13),
	offsetof(struct MeasResultServFreq_r13__measResultBestNeighCell_r13, _asn_ctx),
	asn_MAP_measResultBestNeighCell_r13_tag2el_7,
	4,	/* Count of tags in the map */
	asn_MAP_measResultBestNeighCell_r13_oms_7,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measResultBestNeighCell_r13_7 = {
	"measResultBestNeighCell-r13",
	"measResultBestNeighCell-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_measResultBestNeighCell_r13_tags_7,
	sizeof(asn_DEF_measResultBestNeighCell_r13_tags_7)
		/sizeof(asn_DEF_measResultBestNeighCell_r13_tags_7[0]) - 1, /* 1 */
	asn_DEF_measResultBestNeighCell_r13_tags_7,	/* Same as above */
	sizeof(asn_DEF_measResultBestNeighCell_r13_tags_7)
		/sizeof(asn_DEF_measResultBestNeighCell_r13_tags_7[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_measResultBestNeighCell_r13_7,
	4,	/* Elements count */
	&asn_SPC_measResultBestNeighCell_r13_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_measResultBestNeighCell_v1360_14[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultServFreq_r13__ext1__measResultBestNeighCell_v1360, rsrpResultNCell_v1360),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_Range_v1360,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsrpResultNCell-v1360"
		},
};
static const ber_tlv_tag_t asn_DEF_measResultBestNeighCell_v1360_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_measResultBestNeighCell_v1360_tag2el_14[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* rsrpResultNCell-v1360 */
};
static asn_SEQUENCE_specifics_t asn_SPC_measResultBestNeighCell_v1360_specs_14 = {
	sizeof(struct MeasResultServFreq_r13__ext1__measResultBestNeighCell_v1360),
	offsetof(struct MeasResultServFreq_r13__ext1__measResultBestNeighCell_v1360, _asn_ctx),
	asn_MAP_measResultBestNeighCell_v1360_tag2el_14,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measResultBestNeighCell_v1360_14 = {
	"measResultBestNeighCell-v1360",
	"measResultBestNeighCell-v1360",
	&asn_OP_SEQUENCE,
	asn_DEF_measResultBestNeighCell_v1360_tags_14,
	sizeof(asn_DEF_measResultBestNeighCell_v1360_tags_14)
		/sizeof(asn_DEF_measResultBestNeighCell_v1360_tags_14[0]) - 1, /* 1 */
	asn_DEF_measResultBestNeighCell_v1360_tags_14,	/* Same as above */
	sizeof(asn_DEF_measResultBestNeighCell_v1360_tags_14)
		/sizeof(asn_DEF_measResultBestNeighCell_v1360_tags_14[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_measResultBestNeighCell_v1360_14,
	1,	/* Elements count */
	&asn_SPC_measResultBestNeighCell_v1360_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_13[] = {
	{ ATF_POINTER, 1, offsetof(struct MeasResultServFreq_r13__ext1, measResultBestNeighCell_v1360),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_measResultBestNeighCell_v1360_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultBestNeighCell-v1360"
		},
};
static const int asn_MAP_ext1_oms_13[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* measResultBestNeighCell-v1360 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_13 = {
	sizeof(struct MeasResultServFreq_r13__ext1),
	offsetof(struct MeasResultServFreq_r13__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_13,
	1,	/* Count of tags in the map */
	asn_MAP_ext1_oms_13,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_13 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_13,
	sizeof(asn_DEF_ext1_tags_13)
		/sizeof(asn_DEF_ext1_tags_13[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_13,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_13)
		/sizeof(asn_DEF_ext1_tags_13[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext1_13,
	1,	/* Elements count */
	&asn_SPC_ext1_specs_13	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MeasResultServFreq_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultServFreq_r13, servFreqId_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ServCellIndex_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"servFreqId-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct MeasResultServFreq_r13, measResultSCell_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_measResultSCell_r13_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultSCell-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasResultServFreq_r13, measResultBestNeighCell_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_measResultBestNeighCell_r13_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultBestNeighCell-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasResultServFreq_r13, ext1),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_ext1_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_MeasResultServFreq_r13_oms_1[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_MeasResultServFreq_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasResultServFreq_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* servFreqId-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measResultSCell-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* measResultBestNeighCell-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasResultServFreq_r13_specs_1 = {
	sizeof(struct MeasResultServFreq_r13),
	offsetof(struct MeasResultServFreq_r13, _asn_ctx),
	asn_MAP_MeasResultServFreq_r13_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_MeasResultServFreq_r13_oms_1,	/* Optional members */
	2, 1,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasResultServFreq_r13 = {
	"MeasResultServFreq-r13",
	"MeasResultServFreq-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasResultServFreq_r13_tags_1,
	sizeof(asn_DEF_MeasResultServFreq_r13_tags_1)
		/sizeof(asn_DEF_MeasResultServFreq_r13_tags_1[0]), /* 1 */
	asn_DEF_MeasResultServFreq_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasResultServFreq_r13_tags_1)
		/sizeof(asn_DEF_MeasResultServFreq_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MeasResultServFreq_r13_1,
	4,	/* Elements count */
	&asn_SPC_MeasResultServFreq_r13_specs_1	/* Additional specs */
};

