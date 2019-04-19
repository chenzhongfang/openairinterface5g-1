/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "CRS-AssistanceInfo-r11.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_antennaPortsCount_r11_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_antennaPortsCount_r11_value2enum_3[] = {
	{ 0,	3,	"an1" },
	{ 1,	3,	"an2" },
	{ 2,	3,	"an4" },
	{ 3,	6,	"spare1" }
};
static const unsigned int asn_MAP_antennaPortsCount_r11_enum2value_3[] = {
	0,	/* an1(0) */
	1,	/* an2(1) */
	2,	/* an4(2) */
	3	/* spare1(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_antennaPortsCount_r11_specs_3 = {
	asn_MAP_antennaPortsCount_r11_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_antennaPortsCount_r11_enum2value_3,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_antennaPortsCount_r11_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_antennaPortsCount_r11_3 = {
	"antennaPortsCount-r11",
	"antennaPortsCount-r11",
	&asn_OP_NativeEnumerated,
	asn_DEF_antennaPortsCount_r11_tags_3,
	sizeof(asn_DEF_antennaPortsCount_r11_tags_3)
		/sizeof(asn_DEF_antennaPortsCount_r11_tags_3[0]) - 1, /* 1 */
	asn_DEF_antennaPortsCount_r11_tags_3,	/* Same as above */
	sizeof(asn_DEF_antennaPortsCount_r11_tags_3)
		/sizeof(asn_DEF_antennaPortsCount_r11_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_antennaPortsCount_r11_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_antennaPortsCount_r11_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_10[] = {
	{ ATF_POINTER, 1, offsetof(struct CRS_AssistanceInfo_r11__ext1, mbsfn_SubframeConfigList_v1430),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBSFN_SubframeConfigList_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbsfn-SubframeConfigList-v1430"
		},
};
static const int asn_MAP_ext1_oms_10[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* mbsfn-SubframeConfigList-v1430 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_10 = {
	sizeof(struct CRS_AssistanceInfo_r11__ext1),
	offsetof(struct CRS_AssistanceInfo_r11__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_10,
	1,	/* Count of tags in the map */
	asn_MAP_ext1_oms_10,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_10 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_10,
	sizeof(asn_DEF_ext1_tags_10)
		/sizeof(asn_DEF_ext1_tags_10[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_10,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_10)
		/sizeof(asn_DEF_ext1_tags_10[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext1_10,
	1,	/* Elements count */
	&asn_SPC_ext1_specs_10	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CRS_AssistanceInfo_r11_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CRS_AssistanceInfo_r11, physCellId_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physCellId-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CRS_AssistanceInfo_r11, antennaPortsCount_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_antennaPortsCount_r11_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"antennaPortsCount-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CRS_AssistanceInfo_r11, mbsfn_SubframeConfigList_r11),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBSFN_SubframeConfigList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbsfn-SubframeConfigList-r11"
		},
	{ ATF_POINTER, 1, offsetof(struct CRS_AssistanceInfo_r11, ext1),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_ext1_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_CRS_AssistanceInfo_r11_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_CRS_AssistanceInfo_r11_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CRS_AssistanceInfo_r11_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physCellId-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* antennaPortsCount-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* mbsfn-SubframeConfigList-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_CRS_AssistanceInfo_r11_specs_1 = {
	sizeof(struct CRS_AssistanceInfo_r11),
	offsetof(struct CRS_AssistanceInfo_r11, _asn_ctx),
	asn_MAP_CRS_AssistanceInfo_r11_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_CRS_AssistanceInfo_r11_oms_1,	/* Optional members */
	0, 1,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CRS_AssistanceInfo_r11 = {
	"CRS-AssistanceInfo-r11",
	"CRS-AssistanceInfo-r11",
	&asn_OP_SEQUENCE,
	asn_DEF_CRS_AssistanceInfo_r11_tags_1,
	sizeof(asn_DEF_CRS_AssistanceInfo_r11_tags_1)
		/sizeof(asn_DEF_CRS_AssistanceInfo_r11_tags_1[0]), /* 1 */
	asn_DEF_CRS_AssistanceInfo_r11_tags_1,	/* Same as above */
	sizeof(asn_DEF_CRS_AssistanceInfo_r11_tags_1)
		/sizeof(asn_DEF_CRS_AssistanceInfo_r11_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CRS_AssistanceInfo_r11_1,
	4,	/* Elements count */
	&asn_SPC_CRS_AssistanceInfo_r11_specs_1	/* Additional specs */
};

