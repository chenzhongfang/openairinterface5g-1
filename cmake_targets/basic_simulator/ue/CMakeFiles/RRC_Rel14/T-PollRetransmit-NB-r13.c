/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#include "T-PollRetransmit-NB-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_T_PollRetransmit_NB_r13_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_T_PollRetransmit_NB_r13_value2enum_1[] = {
	{ 0,	5,	"ms250" },
	{ 1,	5,	"ms500" },
	{ 2,	6,	"ms1000" },
	{ 3,	6,	"ms2000" },
	{ 4,	6,	"ms3000" },
	{ 5,	6,	"ms4000" },
	{ 6,	6,	"ms6000" },
	{ 7,	7,	"ms10000" },
	{ 8,	7,	"ms15000" },
	{ 9,	7,	"ms25000" },
	{ 10,	7,	"ms40000" },
	{ 11,	7,	"ms60000" },
	{ 12,	7,	"ms90000" },
	{ 13,	8,	"ms120000" },
	{ 14,	8,	"ms180000" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_T_PollRetransmit_NB_r13_enum2value_1[] = {
	2,	/* ms1000(2) */
	7,	/* ms10000(7) */
	13,	/* ms120000(13) */
	8,	/* ms15000(8) */
	14,	/* ms180000(14) */
	3,	/* ms2000(3) */
	0,	/* ms250(0) */
	9,	/* ms25000(9) */
	4,	/* ms3000(4) */
	5,	/* ms4000(5) */
	10,	/* ms40000(10) */
	1,	/* ms500(1) */
	6,	/* ms6000(6) */
	11,	/* ms60000(11) */
	12,	/* ms90000(12) */
	15	/* spare1(15) */
};
const asn_INTEGER_specifics_t asn_SPC_T_PollRetransmit_NB_r13_specs_1 = {
	asn_MAP_T_PollRetransmit_NB_r13_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_T_PollRetransmit_NB_r13_enum2value_1,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_T_PollRetransmit_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_T_PollRetransmit_NB_r13 = {
	"T-PollRetransmit-NB-r13",
	"T-PollRetransmit-NB-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_T_PollRetransmit_NB_r13_tags_1,
	sizeof(asn_DEF_T_PollRetransmit_NB_r13_tags_1)
		/sizeof(asn_DEF_T_PollRetransmit_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_T_PollRetransmit_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_T_PollRetransmit_NB_r13_tags_1)
		/sizeof(asn_DEF_T_PollRetransmit_NB_r13_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_T_PollRetransmit_NB_r13_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_T_PollRetransmit_NB_r13_specs_1	/* Additional specs */
};

