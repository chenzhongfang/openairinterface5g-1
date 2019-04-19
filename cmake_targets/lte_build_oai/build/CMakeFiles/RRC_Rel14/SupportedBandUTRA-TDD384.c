/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "SupportedBandUTRA-TDD384.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_SupportedBandUTRA_TDD384_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  4,  4,  0,  15 }	/* (0..15,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_SupportedBandUTRA_TDD384_value2enum_1[] = {
	{ 0,	1,	"a" },
	{ 1,	1,	"b" },
	{ 2,	1,	"c" },
	{ 3,	1,	"d" },
	{ 4,	1,	"e" },
	{ 5,	1,	"f" },
	{ 6,	1,	"g" },
	{ 7,	1,	"h" },
	{ 8,	1,	"i" },
	{ 9,	1,	"j" },
	{ 10,	1,	"k" },
	{ 11,	1,	"l" },
	{ 12,	1,	"m" },
	{ 13,	1,	"n" },
	{ 14,	1,	"o" },
	{ 15,	1,	"p" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_SupportedBandUTRA_TDD384_enum2value_1[] = {
	0,	/* a(0) */
	1,	/* b(1) */
	2,	/* c(2) */
	3,	/* d(3) */
	4,	/* e(4) */
	5,	/* f(5) */
	6,	/* g(6) */
	7,	/* h(7) */
	8,	/* i(8) */
	9,	/* j(9) */
	10,	/* k(10) */
	11,	/* l(11) */
	12,	/* m(12) */
	13,	/* n(13) */
	14,	/* o(14) */
	15	/* p(15) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_SupportedBandUTRA_TDD384_specs_1 = {
	asn_MAP_SupportedBandUTRA_TDD384_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_SupportedBandUTRA_TDD384_enum2value_1,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	17,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_SupportedBandUTRA_TDD384_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_SupportedBandUTRA_TDD384 = {
	"SupportedBandUTRA-TDD384",
	"SupportedBandUTRA-TDD384",
	&asn_OP_NativeEnumerated,
	asn_DEF_SupportedBandUTRA_TDD384_tags_1,
	sizeof(asn_DEF_SupportedBandUTRA_TDD384_tags_1)
		/sizeof(asn_DEF_SupportedBandUTRA_TDD384_tags_1[0]), /* 1 */
	asn_DEF_SupportedBandUTRA_TDD384_tags_1,	/* Same as above */
	sizeof(asn_DEF_SupportedBandUTRA_TDD384_tags_1)
		/sizeof(asn_DEF_SupportedBandUTRA_TDD384_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_SupportedBandUTRA_TDD384_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_SupportedBandUTRA_TDD384_specs_1	/* Additional specs */
};

