/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "TimeAlignmentTimer.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_TimeAlignmentTimer_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_TimeAlignmentTimer_value2enum_1[] = {
	{ 0,	5,	"sf500" },
	{ 1,	5,	"sf750" },
	{ 2,	6,	"sf1280" },
	{ 3,	6,	"sf1920" },
	{ 4,	6,	"sf2560" },
	{ 5,	6,	"sf5120" },
	{ 6,	7,	"sf10240" },
	{ 7,	8,	"infinity" }
};
static const unsigned int asn_MAP_TimeAlignmentTimer_enum2value_1[] = {
	7,	/* infinity(7) */
	6,	/* sf10240(6) */
	2,	/* sf1280(2) */
	3,	/* sf1920(3) */
	4,	/* sf2560(4) */
	0,	/* sf500(0) */
	5,	/* sf5120(5) */
	1	/* sf750(1) */
};
const asn_INTEGER_specifics_t asn_SPC_TimeAlignmentTimer_specs_1 = {
	asn_MAP_TimeAlignmentTimer_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_TimeAlignmentTimer_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_TimeAlignmentTimer_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_TimeAlignmentTimer = {
	"TimeAlignmentTimer",
	"TimeAlignmentTimer",
	&asn_OP_NativeEnumerated,
	asn_DEF_TimeAlignmentTimer_tags_1,
	sizeof(asn_DEF_TimeAlignmentTimer_tags_1)
		/sizeof(asn_DEF_TimeAlignmentTimer_tags_1[0]), /* 1 */
	asn_DEF_TimeAlignmentTimer_tags_1,	/* Same as above */
	sizeof(asn_DEF_TimeAlignmentTimer_tags_1)
		/sizeof(asn_DEF_TimeAlignmentTimer_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_TimeAlignmentTimer_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_TimeAlignmentTimer_specs_1	/* Additional specs */
};

