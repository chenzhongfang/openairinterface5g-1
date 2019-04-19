/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/user/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/X2AP_R14`
 */

#include "X2AP_ExpectedHOInterval.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_X2AP_ExpectedHOInterval_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  6 }	/* (0..6,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_X2AP_ExpectedHOInterval_value2enum_1[] = {
	{ 0,	5,	"sec15" },
	{ 1,	5,	"sec30" },
	{ 2,	5,	"sec60" },
	{ 3,	5,	"sec90" },
	{ 4,	6,	"sec120" },
	{ 5,	6,	"sec180" },
	{ 6,	9,	"long-time" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_X2AP_ExpectedHOInterval_enum2value_1[] = {
	6,	/* long-time(6) */
	4,	/* sec120(4) */
	0,	/* sec15(0) */
	5,	/* sec180(5) */
	1,	/* sec30(1) */
	2,	/* sec60(2) */
	3	/* sec90(3) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_X2AP_ExpectedHOInterval_specs_1 = {
	asn_MAP_X2AP_ExpectedHOInterval_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_X2AP_ExpectedHOInterval_enum2value_1,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	8,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_X2AP_ExpectedHOInterval_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_X2AP_ExpectedHOInterval = {
	"ExpectedHOInterval",
	"ExpectedHOInterval",
	&asn_OP_NativeEnumerated,
	asn_DEF_X2AP_ExpectedHOInterval_tags_1,
	sizeof(asn_DEF_X2AP_ExpectedHOInterval_tags_1)
		/sizeof(asn_DEF_X2AP_ExpectedHOInterval_tags_1[0]), /* 1 */
	asn_DEF_X2AP_ExpectedHOInterval_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_ExpectedHOInterval_tags_1)
		/sizeof(asn_DEF_X2AP_ExpectedHOInterval_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_X2AP_ExpectedHOInterval_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_X2AP_ExpectedHOInterval_specs_1	/* Additional specs */
};

