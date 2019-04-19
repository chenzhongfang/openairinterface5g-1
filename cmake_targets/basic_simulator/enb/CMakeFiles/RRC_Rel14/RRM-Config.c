/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "RRM-Config.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_ue_InactiveTime_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_ue_InactiveTime_value2enum_2[] = {
	{ 0,	2,	"s1" },
	{ 1,	2,	"s2" },
	{ 2,	2,	"s3" },
	{ 3,	2,	"s5" },
	{ 4,	2,	"s7" },
	{ 5,	3,	"s10" },
	{ 6,	3,	"s15" },
	{ 7,	3,	"s20" },
	{ 8,	3,	"s25" },
	{ 9,	3,	"s30" },
	{ 10,	3,	"s40" },
	{ 11,	3,	"s50" },
	{ 12,	4,	"min1" },
	{ 13,	8,	"min1s20c" },
	{ 14,	7,	"min1s40" },
	{ 15,	4,	"min2" },
	{ 16,	7,	"min2s30" },
	{ 17,	4,	"min3" },
	{ 18,	7,	"min3s30" },
	{ 19,	4,	"min4" },
	{ 20,	4,	"min5" },
	{ 21,	4,	"min6" },
	{ 22,	4,	"min7" },
	{ 23,	4,	"min8" },
	{ 24,	4,	"min9" },
	{ 25,	5,	"min10" },
	{ 26,	5,	"min12" },
	{ 27,	5,	"min14" },
	{ 28,	5,	"min17" },
	{ 29,	5,	"min20" },
	{ 30,	5,	"min24" },
	{ 31,	5,	"min28" },
	{ 32,	5,	"min33" },
	{ 33,	5,	"min38" },
	{ 34,	5,	"min44" },
	{ 35,	5,	"min50" },
	{ 36,	3,	"hr1" },
	{ 37,	8,	"hr1min30" },
	{ 38,	3,	"hr2" },
	{ 39,	8,	"hr2min30" },
	{ 40,	3,	"hr3" },
	{ 41,	8,	"hr3min30" },
	{ 42,	3,	"hr4" },
	{ 43,	3,	"hr5" },
	{ 44,	3,	"hr6" },
	{ 45,	3,	"hr8" },
	{ 46,	4,	"hr10" },
	{ 47,	4,	"hr13" },
	{ 48,	4,	"hr16" },
	{ 49,	4,	"hr20" },
	{ 50,	4,	"day1" },
	{ 51,	8,	"day1hr12" },
	{ 52,	4,	"day2" },
	{ 53,	8,	"day2hr12" },
	{ 54,	4,	"day3" },
	{ 55,	4,	"day4" },
	{ 56,	4,	"day5" },
	{ 57,	4,	"day7" },
	{ 58,	5,	"day10" },
	{ 59,	5,	"day14" },
	{ 60,	5,	"day19" },
	{ 61,	5,	"day24" },
	{ 62,	5,	"day30" },
	{ 63,	13,	"dayMoreThan30" }
};
static const unsigned int asn_MAP_ue_InactiveTime_enum2value_2[] = {
	50,	/* day1(50) */
	58,	/* day10(58) */
	59,	/* day14(59) */
	60,	/* day19(60) */
	51,	/* day1hr12(51) */
	52,	/* day2(52) */
	61,	/* day24(61) */
	53,	/* day2hr12(53) */
	54,	/* day3(54) */
	62,	/* day30(62) */
	55,	/* day4(55) */
	56,	/* day5(56) */
	57,	/* day7(57) */
	63,	/* dayMoreThan30(63) */
	36,	/* hr1(36) */
	46,	/* hr10(46) */
	47,	/* hr13(47) */
	48,	/* hr16(48) */
	37,	/* hr1min30(37) */
	38,	/* hr2(38) */
	49,	/* hr20(49) */
	39,	/* hr2min30(39) */
	40,	/* hr3(40) */
	41,	/* hr3min30(41) */
	42,	/* hr4(42) */
	43,	/* hr5(43) */
	44,	/* hr6(44) */
	45,	/* hr8(45) */
	12,	/* min1(12) */
	25,	/* min10(25) */
	26,	/* min12(26) */
	27,	/* min14(27) */
	28,	/* min17(28) */
	13,	/* min1s20c(13) */
	14,	/* min1s40(14) */
	15,	/* min2(15) */
	29,	/* min20(29) */
	30,	/* min24(30) */
	31,	/* min28(31) */
	16,	/* min2s30(16) */
	17,	/* min3(17) */
	32,	/* min33(32) */
	33,	/* min38(33) */
	18,	/* min3s30(18) */
	19,	/* min4(19) */
	34,	/* min44(34) */
	20,	/* min5(20) */
	35,	/* min50(35) */
	21,	/* min6(21) */
	22,	/* min7(22) */
	23,	/* min8(23) */
	24,	/* min9(24) */
	0,	/* s1(0) */
	5,	/* s10(5) */
	6,	/* s15(6) */
	1,	/* s2(1) */
	7,	/* s20(7) */
	8,	/* s25(8) */
	2,	/* s3(2) */
	9,	/* s30(9) */
	10,	/* s40(10) */
	3,	/* s5(3) */
	11,	/* s50(11) */
	4	/* s7(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_ue_InactiveTime_specs_2 = {
	asn_MAP_ue_InactiveTime_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_ue_InactiveTime_enum2value_2,	/* N => "tag"; sorted by N */
	64,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ue_InactiveTime_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ue_InactiveTime_2 = {
	"ue-InactiveTime",
	"ue-InactiveTime",
	&asn_OP_NativeEnumerated,
	asn_DEF_ue_InactiveTime_tags_2,
	sizeof(asn_DEF_ue_InactiveTime_tags_2)
		/sizeof(asn_DEF_ue_InactiveTime_tags_2[0]) - 1, /* 1 */
	asn_DEF_ue_InactiveTime_tags_2,	/* Same as above */
	sizeof(asn_DEF_ue_InactiveTime_tags_2)
		/sizeof(asn_DEF_ue_InactiveTime_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_ue_InactiveTime_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ue_InactiveTime_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_68[] = {
	{ ATF_POINTER, 1, offsetof(struct RRM_Config__ext1, candidateCellInfoList_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CandidateCellInfoList_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"candidateCellInfoList-r10"
		},
};
static const int asn_MAP_ext1_oms_68[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_68[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_68[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* candidateCellInfoList-r10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_68 = {
	sizeof(struct RRM_Config__ext1),
	offsetof(struct RRM_Config__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_68,
	1,	/* Count of tags in the map */
	asn_MAP_ext1_oms_68,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_68 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_68,
	sizeof(asn_DEF_ext1_tags_68)
		/sizeof(asn_DEF_ext1_tags_68[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_68,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_68)
		/sizeof(asn_DEF_ext1_tags_68[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext1_68,
	1,	/* Elements count */
	&asn_SPC_ext1_specs_68	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRM_Config_1[] = {
	{ ATF_POINTER, 2, offsetof(struct RRM_Config, ue_InactiveTime),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ue_InactiveTime_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-InactiveTime"
		},
	{ ATF_POINTER, 1, offsetof(struct RRM_Config, ext1),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_ext1_68,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_RRM_Config_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_RRM_Config_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRM_Config_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ue-InactiveTime */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_RRM_Config_specs_1 = {
	sizeof(struct RRM_Config),
	offsetof(struct RRM_Config, _asn_ctx),
	asn_MAP_RRM_Config_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_RRM_Config_oms_1,	/* Optional members */
	1, 1,	/* Root/Additions */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRM_Config = {
	"RRM-Config",
	"RRM-Config",
	&asn_OP_SEQUENCE,
	asn_DEF_RRM_Config_tags_1,
	sizeof(asn_DEF_RRM_Config_tags_1)
		/sizeof(asn_DEF_RRM_Config_tags_1[0]), /* 1 */
	asn_DEF_RRM_Config_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRM_Config_tags_1)
		/sizeof(asn_DEF_RRM_Config_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRM_Config_1,
	2,	/* Elements count */
	&asn_SPC_RRM_Config_specs_1	/* Additional specs */
};

