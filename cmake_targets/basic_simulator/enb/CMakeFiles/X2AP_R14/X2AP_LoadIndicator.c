/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/user/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/X2AP_R14`
 */

#include "X2AP_LoadIndicator.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_X2AP_LoadIndicator_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  3 }	/* (0..3,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_X2AP_LoadIndicator_value2enum_1[] = {
	{ 0,	7,	"lowLoad" },
	{ 1,	10,	"mediumLoad" },
	{ 2,	8,	"highLoad" },
	{ 3,	8,	"overLoad" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_X2AP_LoadIndicator_enum2value_1[] = {
	2,	/* highLoad(2) */
	0,	/* lowLoad(0) */
	1,	/* mediumLoad(1) */
	3	/* overLoad(3) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_X2AP_LoadIndicator_specs_1 = {
	asn_MAP_X2AP_LoadIndicator_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_X2AP_LoadIndicator_enum2value_1,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	5,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_X2AP_LoadIndicator_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_X2AP_LoadIndicator = {
	"LoadIndicator",
	"LoadIndicator",
	&asn_OP_NativeEnumerated,
	asn_DEF_X2AP_LoadIndicator_tags_1,
	sizeof(asn_DEF_X2AP_LoadIndicator_tags_1)
		/sizeof(asn_DEF_X2AP_LoadIndicator_tags_1[0]), /* 1 */
	asn_DEF_X2AP_LoadIndicator_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_LoadIndicator_tags_1)
		/sizeof(asn_DEF_X2AP_LoadIndicator_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_X2AP_LoadIndicator_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_X2AP_LoadIndicator_specs_1	/* Additional specs */
};

