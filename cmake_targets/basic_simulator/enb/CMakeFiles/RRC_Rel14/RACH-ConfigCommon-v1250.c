/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "RACH-ConfigCommon-v1250.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_connEstFailOffset_r12_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_connEstFailCount_r12_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_connEstFailOffsetValidity_r12_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_connEstFailOffset_r12_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_connEstFailCount_r12_value2enum_3[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n3" },
	{ 3,	2,	"n4" }
};
static const unsigned int asn_MAP_connEstFailCount_r12_enum2value_3[] = {
	0,	/* n1(0) */
	1,	/* n2(1) */
	2,	/* n3(2) */
	3	/* n4(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_connEstFailCount_r12_specs_3 = {
	asn_MAP_connEstFailCount_r12_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_connEstFailCount_r12_enum2value_3,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_connEstFailCount_r12_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_connEstFailCount_r12_3 = {
	"connEstFailCount-r12",
	"connEstFailCount-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_connEstFailCount_r12_tags_3,
	sizeof(asn_DEF_connEstFailCount_r12_tags_3)
		/sizeof(asn_DEF_connEstFailCount_r12_tags_3[0]) - 1, /* 1 */
	asn_DEF_connEstFailCount_r12_tags_3,	/* Same as above */
	sizeof(asn_DEF_connEstFailCount_r12_tags_3)
		/sizeof(asn_DEF_connEstFailCount_r12_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_connEstFailCount_r12_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_connEstFailCount_r12_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_connEstFailOffsetValidity_r12_value2enum_8[] = {
	{ 0,	3,	"s30" },
	{ 1,	3,	"s60" },
	{ 2,	4,	"s120" },
	{ 3,	4,	"s240" },
	{ 4,	4,	"s300" },
	{ 5,	4,	"s420" },
	{ 6,	4,	"s600" },
	{ 7,	4,	"s900" }
};
static const unsigned int asn_MAP_connEstFailOffsetValidity_r12_enum2value_8[] = {
	2,	/* s120(2) */
	3,	/* s240(3) */
	0,	/* s30(0) */
	4,	/* s300(4) */
	5,	/* s420(5) */
	1,	/* s60(1) */
	6,	/* s600(6) */
	7	/* s900(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_connEstFailOffsetValidity_r12_specs_8 = {
	asn_MAP_connEstFailOffsetValidity_r12_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_connEstFailOffsetValidity_r12_enum2value_8,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_connEstFailOffsetValidity_r12_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_connEstFailOffsetValidity_r12_8 = {
	"connEstFailOffsetValidity-r12",
	"connEstFailOffsetValidity-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_connEstFailOffsetValidity_r12_tags_8,
	sizeof(asn_DEF_connEstFailOffsetValidity_r12_tags_8)
		/sizeof(asn_DEF_connEstFailOffsetValidity_r12_tags_8[0]) - 1, /* 1 */
	asn_DEF_connEstFailOffsetValidity_r12_tags_8,	/* Same as above */
	sizeof(asn_DEF_connEstFailOffsetValidity_r12_tags_8)
		/sizeof(asn_DEF_connEstFailOffsetValidity_r12_tags_8[0]), /* 2 */
	{ 0, &asn_PER_type_connEstFailOffsetValidity_r12_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_connEstFailOffsetValidity_r12_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_txFailParams_r12_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RACH_ConfigCommon_v1250__txFailParams_r12, connEstFailCount_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_connEstFailCount_r12_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"connEstFailCount-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RACH_ConfigCommon_v1250__txFailParams_r12, connEstFailOffsetValidity_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_connEstFailOffsetValidity_r12_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"connEstFailOffsetValidity-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct RACH_ConfigCommon_v1250__txFailParams_r12, connEstFailOffset_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_connEstFailOffset_r12_constr_17,  memb_connEstFailOffset_r12_constraint_2 },
		0, 0, /* No default value */
		"connEstFailOffset-r12"
		},
};
static const int asn_MAP_txFailParams_r12_oms_2[] = { 2 };
static const ber_tlv_tag_t asn_DEF_txFailParams_r12_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_txFailParams_r12_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* connEstFailCount-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* connEstFailOffsetValidity-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* connEstFailOffset-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_txFailParams_r12_specs_2 = {
	sizeof(struct RACH_ConfigCommon_v1250__txFailParams_r12),
	offsetof(struct RACH_ConfigCommon_v1250__txFailParams_r12, _asn_ctx),
	asn_MAP_txFailParams_r12_tag2el_2,
	3,	/* Count of tags in the map */
	asn_MAP_txFailParams_r12_oms_2,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_txFailParams_r12_2 = {
	"txFailParams-r12",
	"txFailParams-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_txFailParams_r12_tags_2,
	sizeof(asn_DEF_txFailParams_r12_tags_2)
		/sizeof(asn_DEF_txFailParams_r12_tags_2[0]) - 1, /* 1 */
	asn_DEF_txFailParams_r12_tags_2,	/* Same as above */
	sizeof(asn_DEF_txFailParams_r12_tags_2)
		/sizeof(asn_DEF_txFailParams_r12_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_txFailParams_r12_2,
	3,	/* Elements count */
	&asn_SPC_txFailParams_r12_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RACH_ConfigCommon_v1250_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RACH_ConfigCommon_v1250, txFailParams_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_txFailParams_r12_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"txFailParams-r12"
		},
};
static const ber_tlv_tag_t asn_DEF_RACH_ConfigCommon_v1250_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RACH_ConfigCommon_v1250_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* txFailParams-r12 */
};
asn_SEQUENCE_specifics_t asn_SPC_RACH_ConfigCommon_v1250_specs_1 = {
	sizeof(struct RACH_ConfigCommon_v1250),
	offsetof(struct RACH_ConfigCommon_v1250, _asn_ctx),
	asn_MAP_RACH_ConfigCommon_v1250_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RACH_ConfigCommon_v1250 = {
	"RACH-ConfigCommon-v1250",
	"RACH-ConfigCommon-v1250",
	&asn_OP_SEQUENCE,
	asn_DEF_RACH_ConfigCommon_v1250_tags_1,
	sizeof(asn_DEF_RACH_ConfigCommon_v1250_tags_1)
		/sizeof(asn_DEF_RACH_ConfigCommon_v1250_tags_1[0]), /* 1 */
	asn_DEF_RACH_ConfigCommon_v1250_tags_1,	/* Same as above */
	sizeof(asn_DEF_RACH_ConfigCommon_v1250_tags_1)
		/sizeof(asn_DEF_RACH_ConfigCommon_v1250_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RACH_ConfigCommon_v1250_1,
	1,	/* Elements count */
	&asn_SPC_RACH_ConfigCommon_v1250_specs_1	/* Additional specs */
};

