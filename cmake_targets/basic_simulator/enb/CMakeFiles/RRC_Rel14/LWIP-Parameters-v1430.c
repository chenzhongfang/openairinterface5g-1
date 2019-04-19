/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "LWIP-Parameters-v1430.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_lwip_Aggregation_DL_r14_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_lwip_Aggregation_UL_r14_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_lwip_Aggregation_DL_r14_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_lwip_Aggregation_DL_r14_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_lwip_Aggregation_DL_r14_specs_2 = {
	asn_MAP_lwip_Aggregation_DL_r14_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_lwip_Aggregation_DL_r14_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_lwip_Aggregation_DL_r14_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_lwip_Aggregation_DL_r14_2 = {
	"lwip-Aggregation-DL-r14",
	"lwip-Aggregation-DL-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_lwip_Aggregation_DL_r14_tags_2,
	sizeof(asn_DEF_lwip_Aggregation_DL_r14_tags_2)
		/sizeof(asn_DEF_lwip_Aggregation_DL_r14_tags_2[0]) - 1, /* 1 */
	asn_DEF_lwip_Aggregation_DL_r14_tags_2,	/* Same as above */
	sizeof(asn_DEF_lwip_Aggregation_DL_r14_tags_2)
		/sizeof(asn_DEF_lwip_Aggregation_DL_r14_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_lwip_Aggregation_DL_r14_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_lwip_Aggregation_DL_r14_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_lwip_Aggregation_UL_r14_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_lwip_Aggregation_UL_r14_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_lwip_Aggregation_UL_r14_specs_4 = {
	asn_MAP_lwip_Aggregation_UL_r14_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_lwip_Aggregation_UL_r14_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_lwip_Aggregation_UL_r14_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_lwip_Aggregation_UL_r14_4 = {
	"lwip-Aggregation-UL-r14",
	"lwip-Aggregation-UL-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_lwip_Aggregation_UL_r14_tags_4,
	sizeof(asn_DEF_lwip_Aggregation_UL_r14_tags_4)
		/sizeof(asn_DEF_lwip_Aggregation_UL_r14_tags_4[0]) - 1, /* 1 */
	asn_DEF_lwip_Aggregation_UL_r14_tags_4,	/* Same as above */
	sizeof(asn_DEF_lwip_Aggregation_UL_r14_tags_4)
		/sizeof(asn_DEF_lwip_Aggregation_UL_r14_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_lwip_Aggregation_UL_r14_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_lwip_Aggregation_UL_r14_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LWIP_Parameters_v1430_1[] = {
	{ ATF_POINTER, 2, offsetof(struct LWIP_Parameters_v1430, lwip_Aggregation_DL_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_lwip_Aggregation_DL_r14_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lwip-Aggregation-DL-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct LWIP_Parameters_v1430, lwip_Aggregation_UL_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_lwip_Aggregation_UL_r14_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lwip-Aggregation-UL-r14"
		},
};
static const int asn_MAP_LWIP_Parameters_v1430_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LWIP_Parameters_v1430_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LWIP_Parameters_v1430_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* lwip-Aggregation-DL-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* lwip-Aggregation-UL-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_LWIP_Parameters_v1430_specs_1 = {
	sizeof(struct LWIP_Parameters_v1430),
	offsetof(struct LWIP_Parameters_v1430, _asn_ctx),
	asn_MAP_LWIP_Parameters_v1430_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_LWIP_Parameters_v1430_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LWIP_Parameters_v1430 = {
	"LWIP-Parameters-v1430",
	"LWIP-Parameters-v1430",
	&asn_OP_SEQUENCE,
	asn_DEF_LWIP_Parameters_v1430_tags_1,
	sizeof(asn_DEF_LWIP_Parameters_v1430_tags_1)
		/sizeof(asn_DEF_LWIP_Parameters_v1430_tags_1[0]), /* 1 */
	asn_DEF_LWIP_Parameters_v1430_tags_1,	/* Same as above */
	sizeof(asn_DEF_LWIP_Parameters_v1430_tags_1)
		/sizeof(asn_DEF_LWIP_Parameters_v1430_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LWIP_Parameters_v1430_1,
	2,	/* Elements count */
	&asn_SPC_LWIP_Parameters_v1430_specs_1	/* Additional specs */
};

