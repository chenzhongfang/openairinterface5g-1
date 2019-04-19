/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "SIB-Type-MBMS-r14.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_SIB_Type_MBMS_r14_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  5 }	/* (0..5,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_SIB_Type_MBMS_r14_value2enum_1[] = {
	{ 0,	9,	"sibType10" },
	{ 1,	9,	"sibType11" },
	{ 2,	14,	"sibType12-v920" },
	{ 3,	14,	"sibType13-v920" },
	{ 4,	15,	"sibType15-v1130" },
	{ 5,	15,	"sibType16-v1130" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_SIB_Type_MBMS_r14_enum2value_1[] = {
	0,	/* sibType10(0) */
	1,	/* sibType11(1) */
	2,	/* sibType12-v920(2) */
	3,	/* sibType13-v920(3) */
	4,	/* sibType15-v1130(4) */
	5	/* sibType16-v1130(5) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_SIB_Type_MBMS_r14_specs_1 = {
	asn_MAP_SIB_Type_MBMS_r14_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_SIB_Type_MBMS_r14_enum2value_1,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	7,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_SIB_Type_MBMS_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_SIB_Type_MBMS_r14 = {
	"SIB-Type-MBMS-r14",
	"SIB-Type-MBMS-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_SIB_Type_MBMS_r14_tags_1,
	sizeof(asn_DEF_SIB_Type_MBMS_r14_tags_1)
		/sizeof(asn_DEF_SIB_Type_MBMS_r14_tags_1[0]), /* 1 */
	asn_DEF_SIB_Type_MBMS_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_SIB_Type_MBMS_r14_tags_1)
		/sizeof(asn_DEF_SIB_Type_MBMS_r14_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_SIB_Type_MBMS_r14_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_SIB_Type_MBMS_r14_specs_1	/* Additional specs */
};

