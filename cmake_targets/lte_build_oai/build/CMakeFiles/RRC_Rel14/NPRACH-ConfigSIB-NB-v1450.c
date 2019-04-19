/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "NPRACH-ConfigSIB-NB-v1450.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_maxNumPreambleAttemptCE_r14_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_maxNumPreambleAttemptCE_r14_value2enum_2[] = {
	{ 0,	2,	"n3" },
	{ 1,	2,	"n4" },
	{ 2,	2,	"n5" },
	{ 3,	2,	"n6" },
	{ 4,	2,	"n7" },
	{ 5,	2,	"n8" },
	{ 6,	3,	"n10" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_maxNumPreambleAttemptCE_r14_enum2value_2[] = {
	6,	/* n10(6) */
	0,	/* n3(0) */
	1,	/* n4(1) */
	2,	/* n5(2) */
	3,	/* n6(3) */
	4,	/* n7(4) */
	5,	/* n8(5) */
	7	/* spare1(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_maxNumPreambleAttemptCE_r14_specs_2 = {
	asn_MAP_maxNumPreambleAttemptCE_r14_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_maxNumPreambleAttemptCE_r14_enum2value_2,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_maxNumPreambleAttemptCE_r14_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_maxNumPreambleAttemptCE_r14_2 = {
	"maxNumPreambleAttemptCE-r14",
	"maxNumPreambleAttemptCE-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_maxNumPreambleAttemptCE_r14_tags_2,
	sizeof(asn_DEF_maxNumPreambleAttemptCE_r14_tags_2)
		/sizeof(asn_DEF_maxNumPreambleAttemptCE_r14_tags_2[0]) - 1, /* 1 */
	asn_DEF_maxNumPreambleAttemptCE_r14_tags_2,	/* Same as above */
	sizeof(asn_DEF_maxNumPreambleAttemptCE_r14_tags_2)
		/sizeof(asn_DEF_maxNumPreambleAttemptCE_r14_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_maxNumPreambleAttemptCE_r14_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_maxNumPreambleAttemptCE_r14_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NPRACH_ConfigSIB_NB_v1450_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NPRACH_ConfigSIB_NB_v1450, maxNumPreambleAttemptCE_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_maxNumPreambleAttemptCE_r14_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxNumPreambleAttemptCE-r14"
		},
};
static const ber_tlv_tag_t asn_DEF_NPRACH_ConfigSIB_NB_v1450_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NPRACH_ConfigSIB_NB_v1450_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* maxNumPreambleAttemptCE-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_NPRACH_ConfigSIB_NB_v1450_specs_1 = {
	sizeof(struct NPRACH_ConfigSIB_NB_v1450),
	offsetof(struct NPRACH_ConfigSIB_NB_v1450, _asn_ctx),
	asn_MAP_NPRACH_ConfigSIB_NB_v1450_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NPRACH_ConfigSIB_NB_v1450 = {
	"NPRACH-ConfigSIB-NB-v1450",
	"NPRACH-ConfigSIB-NB-v1450",
	&asn_OP_SEQUENCE,
	asn_DEF_NPRACH_ConfigSIB_NB_v1450_tags_1,
	sizeof(asn_DEF_NPRACH_ConfigSIB_NB_v1450_tags_1)
		/sizeof(asn_DEF_NPRACH_ConfigSIB_NB_v1450_tags_1[0]), /* 1 */
	asn_DEF_NPRACH_ConfigSIB_NB_v1450_tags_1,	/* Same as above */
	sizeof(asn_DEF_NPRACH_ConfigSIB_NB_v1450_tags_1)
		/sizeof(asn_DEF_NPRACH_ConfigSIB_NB_v1450_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NPRACH_ConfigSIB_NB_v1450_1,
	1,	/* Elements count */
	&asn_SPC_NPRACH_ConfigSIB_NB_v1450_specs_1	/* Additional specs */
};

