/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/user/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/X2AP_R14`
 */

#include "X2AP_TimeToWait.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_X2AP_TimeToWait_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  5 }	/* (0..5,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_X2AP_TimeToWait_value2enum_1[] = {
	{ 0,	3,	"v1s" },
	{ 1,	3,	"v2s" },
	{ 2,	3,	"v5s" },
	{ 3,	4,	"v10s" },
	{ 4,	4,	"v20s" },
	{ 5,	4,	"v60s" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_X2AP_TimeToWait_enum2value_1[] = {
	3,	/* v10s(3) */
	0,	/* v1s(0) */
	4,	/* v20s(4) */
	1,	/* v2s(1) */
	2,	/* v5s(2) */
	5	/* v60s(5) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_X2AP_TimeToWait_specs_1 = {
	asn_MAP_X2AP_TimeToWait_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_X2AP_TimeToWait_enum2value_1,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	7,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_X2AP_TimeToWait_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_X2AP_TimeToWait = {
	"TimeToWait",
	"TimeToWait",
	&asn_OP_NativeEnumerated,
	asn_DEF_X2AP_TimeToWait_tags_1,
	sizeof(asn_DEF_X2AP_TimeToWait_tags_1)
		/sizeof(asn_DEF_X2AP_TimeToWait_tags_1[0]), /* 1 */
	asn_DEF_X2AP_TimeToWait_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_TimeToWait_tags_1)
		/sizeof(asn_DEF_X2AP_TimeToWait_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_X2AP_TimeToWait_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_X2AP_TimeToWait_specs_1	/* Additional specs */
};

