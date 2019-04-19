/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "SystemInformationBlockType15-r11.h"

static asn_TYPE_member_t asn_MBR_ext1_6[] = {
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType15_r11__ext1, mbms_SAI_InterFreqList_v1140),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_SAI_InterFreqList_v1140,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbms-SAI-InterFreqList-v1140"
		},
};
static const int asn_MAP_ext1_oms_6[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* mbms-SAI-InterFreqList-v1140 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_6 = {
	sizeof(struct SystemInformationBlockType15_r11__ext1),
	offsetof(struct SystemInformationBlockType15_r11__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_6,
	1,	/* Count of tags in the map */
	asn_MAP_ext1_oms_6,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_6 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_6,
	sizeof(asn_DEF_ext1_tags_6)
		/sizeof(asn_DEF_ext1_tags_6[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_6,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_6)
		/sizeof(asn_DEF_ext1_tags_6[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext1_6,
	1,	/* Elements count */
	&asn_SPC_ext1_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext2_8[] = {
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType15_r11__ext2, mbms_IntraFreqCarrierType_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_CarrierType_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbms-IntraFreqCarrierType-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType15_r11__ext2, mbms_InterFreqCarrierTypeList_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_InterFreqCarrierTypeList_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbms-InterFreqCarrierTypeList-r14"
		},
};
static const int asn_MAP_ext2_oms_8[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_ext2_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext2_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mbms-IntraFreqCarrierType-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* mbms-InterFreqCarrierTypeList-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext2_specs_8 = {
	sizeof(struct SystemInformationBlockType15_r11__ext2),
	offsetof(struct SystemInformationBlockType15_r11__ext2, _asn_ctx),
	asn_MAP_ext2_tag2el_8,
	2,	/* Count of tags in the map */
	asn_MAP_ext2_oms_8,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext2_8 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_ext2_tags_8,
	sizeof(asn_DEF_ext2_tags_8)
		/sizeof(asn_DEF_ext2_tags_8[0]) - 1, /* 1 */
	asn_DEF_ext2_tags_8,	/* Same as above */
	sizeof(asn_DEF_ext2_tags_8)
		/sizeof(asn_DEF_ext2_tags_8[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext2_8,
	2,	/* Elements count */
	&asn_SPC_ext2_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SystemInformationBlockType15_r11_1[] = {
	{ ATF_POINTER, 5, offsetof(struct SystemInformationBlockType15_r11, mbms_SAI_IntraFreq_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_SAI_List_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbms-SAI-IntraFreq-r11"
		},
	{ ATF_POINTER, 4, offsetof(struct SystemInformationBlockType15_r11, mbms_SAI_InterFreqList_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_SAI_InterFreqList_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbms-SAI-InterFreqList-r11"
		},
	{ ATF_POINTER, 3, offsetof(struct SystemInformationBlockType15_r11, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType15_r11, ext1),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_ext1_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType15_r11, ext2),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_ext2_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext2"
		},
};
static const int asn_MAP_SystemInformationBlockType15_r11_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_SystemInformationBlockType15_r11_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType15_r11_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mbms-SAI-IntraFreq-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mbms-SAI-InterFreqList-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* ext2 */
};
asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType15_r11_specs_1 = {
	sizeof(struct SystemInformationBlockType15_r11),
	offsetof(struct SystemInformationBlockType15_r11, _asn_ctx),
	asn_MAP_SystemInformationBlockType15_r11_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType15_r11_oms_1,	/* Optional members */
	3, 2,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType15_r11 = {
	"SystemInformationBlockType15-r11",
	"SystemInformationBlockType15-r11",
	&asn_OP_SEQUENCE,
	asn_DEF_SystemInformationBlockType15_r11_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType15_r11_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType15_r11_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType15_r11_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType15_r11_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType15_r11_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SystemInformationBlockType15_r11_1,
	5,	/* Elements count */
	&asn_SPC_SystemInformationBlockType15_r11_specs_1	/* Additional specs */
};

