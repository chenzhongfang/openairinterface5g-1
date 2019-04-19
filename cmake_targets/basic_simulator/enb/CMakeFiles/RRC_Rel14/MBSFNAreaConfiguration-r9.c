/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "MBSFNAreaConfiguration-r9.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_commonSF_AllocPeriod_r9_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_commonSF_AllocPeriod_r9_value2enum_3[] = {
	{ 0,	3,	"rf4" },
	{ 1,	3,	"rf8" },
	{ 2,	4,	"rf16" },
	{ 3,	4,	"rf32" },
	{ 4,	4,	"rf64" },
	{ 5,	5,	"rf128" },
	{ 6,	5,	"rf256" }
};
static const unsigned int asn_MAP_commonSF_AllocPeriod_r9_enum2value_3[] = {
	5,	/* rf128(5) */
	2,	/* rf16(2) */
	6,	/* rf256(6) */
	3,	/* rf32(3) */
	0,	/* rf4(0) */
	4,	/* rf64(4) */
	1	/* rf8(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_commonSF_AllocPeriod_r9_specs_3 = {
	asn_MAP_commonSF_AllocPeriod_r9_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_commonSF_AllocPeriod_r9_enum2value_3,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_commonSF_AllocPeriod_r9_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_commonSF_AllocPeriod_r9_3 = {
	"commonSF-AllocPeriod-r9",
	"commonSF-AllocPeriod-r9",
	&asn_OP_NativeEnumerated,
	asn_DEF_commonSF_AllocPeriod_r9_tags_3,
	sizeof(asn_DEF_commonSF_AllocPeriod_r9_tags_3)
		/sizeof(asn_DEF_commonSF_AllocPeriod_r9_tags_3[0]) - 1, /* 1 */
	asn_DEF_commonSF_AllocPeriod_r9_tags_3,	/* Same as above */
	sizeof(asn_DEF_commonSF_AllocPeriod_r9_tags_3)
		/sizeof(asn_DEF_commonSF_AllocPeriod_r9_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_commonSF_AllocPeriod_r9_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_commonSF_AllocPeriod_r9_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MBSFNAreaConfiguration_r9_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBSFNAreaConfiguration_r9, commonSF_Alloc_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CommonSF_AllocPatternList_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"commonSF-Alloc-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBSFNAreaConfiguration_r9, commonSF_AllocPeriod_r9),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_commonSF_AllocPeriod_r9_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"commonSF-AllocPeriod-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBSFNAreaConfiguration_r9, pmch_InfoList_r9),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PMCH_InfoList_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pmch-InfoList-r9"
		},
	{ ATF_POINTER, 1, offsetof(struct MBSFNAreaConfiguration_r9, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBSFNAreaConfiguration_v930_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_MBSFNAreaConfiguration_r9_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_MBSFNAreaConfiguration_r9_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MBSFNAreaConfiguration_r9_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* commonSF-Alloc-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* commonSF-AllocPeriod-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pmch-InfoList-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_MBSFNAreaConfiguration_r9_specs_1 = {
	sizeof(struct MBSFNAreaConfiguration_r9),
	offsetof(struct MBSFNAreaConfiguration_r9, _asn_ctx),
	asn_MAP_MBSFNAreaConfiguration_r9_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_MBSFNAreaConfiguration_r9_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MBSFNAreaConfiguration_r9 = {
	"MBSFNAreaConfiguration-r9",
	"MBSFNAreaConfiguration-r9",
	&asn_OP_SEQUENCE,
	asn_DEF_MBSFNAreaConfiguration_r9_tags_1,
	sizeof(asn_DEF_MBSFNAreaConfiguration_r9_tags_1)
		/sizeof(asn_DEF_MBSFNAreaConfiguration_r9_tags_1[0]), /* 1 */
	asn_DEF_MBSFNAreaConfiguration_r9_tags_1,	/* Same as above */
	sizeof(asn_DEF_MBSFNAreaConfiguration_r9_tags_1)
		/sizeof(asn_DEF_MBSFNAreaConfiguration_r9_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MBSFNAreaConfiguration_r9_1,
	4,	/* Elements count */
	&asn_SPC_MBSFNAreaConfiguration_r9_specs_1	/* Additional specs */
};

