/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "PagingRecord.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_cn_Domain_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_cn_Domain_value2enum_3[] = {
	{ 0,	2,	"ps" },
	{ 1,	2,	"cs" }
};
static const unsigned int asn_MAP_cn_Domain_enum2value_3[] = {
	1,	/* cs(1) */
	0	/* ps(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_cn_Domain_specs_3 = {
	asn_MAP_cn_Domain_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_cn_Domain_enum2value_3,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_cn_Domain_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cn_Domain_3 = {
	"cn-Domain",
	"cn-Domain",
	&asn_OP_NativeEnumerated,
	asn_DEF_cn_Domain_tags_3,
	sizeof(asn_DEF_cn_Domain_tags_3)
		/sizeof(asn_DEF_cn_Domain_tags_3[0]) - 1, /* 1 */
	asn_DEF_cn_Domain_tags_3,	/* Same as above */
	sizeof(asn_DEF_cn_Domain_tags_3)
		/sizeof(asn_DEF_cn_Domain_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_cn_Domain_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_cn_Domain_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PagingRecord_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PagingRecord, ue_Identity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_PagingUE_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-Identity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PagingRecord, cn_Domain),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cn_Domain_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cn-Domain"
		},
};
static const ber_tlv_tag_t asn_DEF_PagingRecord_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PagingRecord_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ue-Identity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cn-Domain */
};
asn_SEQUENCE_specifics_t asn_SPC_PagingRecord_specs_1 = {
	sizeof(struct PagingRecord),
	offsetof(struct PagingRecord, _asn_ctx),
	asn_MAP_PagingRecord_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PagingRecord = {
	"PagingRecord",
	"PagingRecord",
	&asn_OP_SEQUENCE,
	asn_DEF_PagingRecord_tags_1,
	sizeof(asn_DEF_PagingRecord_tags_1)
		/sizeof(asn_DEF_PagingRecord_tags_1[0]), /* 1 */
	asn_DEF_PagingRecord_tags_1,	/* Same as above */
	sizeof(asn_DEF_PagingRecord_tags_1)
		/sizeof(asn_DEF_PagingRecord_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PagingRecord_1,
	2,	/* Elements count */
	&asn_SPC_PagingRecord_specs_1	/* Additional specs */
};

