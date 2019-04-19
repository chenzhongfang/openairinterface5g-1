/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#include "E-CSFB-r9.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_mobilityCDMA2000_HRPD_r9_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_mobilityCDMA2000_HRPD_r9_value2enum_3[] = {
	{ 0,	8,	"handover" },
	{ 1,	11,	"redirection" }
};
static const unsigned int asn_MAP_mobilityCDMA2000_HRPD_r9_enum2value_3[] = {
	0,	/* handover(0) */
	1	/* redirection(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_mobilityCDMA2000_HRPD_r9_specs_3 = {
	asn_MAP_mobilityCDMA2000_HRPD_r9_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_mobilityCDMA2000_HRPD_r9_enum2value_3,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_mobilityCDMA2000_HRPD_r9_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mobilityCDMA2000_HRPD_r9_3 = {
	"mobilityCDMA2000-HRPD-r9",
	"mobilityCDMA2000-HRPD-r9",
	&asn_OP_NativeEnumerated,
	asn_DEF_mobilityCDMA2000_HRPD_r9_tags_3,
	sizeof(asn_DEF_mobilityCDMA2000_HRPD_r9_tags_3)
		/sizeof(asn_DEF_mobilityCDMA2000_HRPD_r9_tags_3[0]) - 1, /* 1 */
	asn_DEF_mobilityCDMA2000_HRPD_r9_tags_3,	/* Same as above */
	sizeof(asn_DEF_mobilityCDMA2000_HRPD_r9_tags_3)
		/sizeof(asn_DEF_mobilityCDMA2000_HRPD_r9_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_mobilityCDMA2000_HRPD_r9_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_mobilityCDMA2000_HRPD_r9_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_E_CSFB_r9_1[] = {
	{ ATF_POINTER, 4, offsetof(struct E_CSFB_r9, messageContCDMA2000_1XRTT_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"messageContCDMA2000-1XRTT-r9"
		},
	{ ATF_POINTER, 3, offsetof(struct E_CSFB_r9, mobilityCDMA2000_HRPD_r9),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_mobilityCDMA2000_HRPD_r9_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mobilityCDMA2000-HRPD-r9"
		},
	{ ATF_POINTER, 2, offsetof(struct E_CSFB_r9, messageContCDMA2000_HRPD_r9),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"messageContCDMA2000-HRPD-r9"
		},
	{ ATF_POINTER, 1, offsetof(struct E_CSFB_r9, redirectCarrierCDMA2000_HRPD_r9),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierFreqCDMA2000,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"redirectCarrierCDMA2000-HRPD-r9"
		},
};
static const int asn_MAP_E_CSFB_r9_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_E_CSFB_r9_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E_CSFB_r9_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* messageContCDMA2000-1XRTT-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mobilityCDMA2000-HRPD-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* messageContCDMA2000-HRPD-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* redirectCarrierCDMA2000-HRPD-r9 */
};
asn_SEQUENCE_specifics_t asn_SPC_E_CSFB_r9_specs_1 = {
	sizeof(struct E_CSFB_r9),
	offsetof(struct E_CSFB_r9, _asn_ctx),
	asn_MAP_E_CSFB_r9_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_E_CSFB_r9_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E_CSFB_r9 = {
	"E-CSFB-r9",
	"E-CSFB-r9",
	&asn_OP_SEQUENCE,
	asn_DEF_E_CSFB_r9_tags_1,
	sizeof(asn_DEF_E_CSFB_r9_tags_1)
		/sizeof(asn_DEF_E_CSFB_r9_tags_1[0]), /* 1 */
	asn_DEF_E_CSFB_r9_tags_1,	/* Same as above */
	sizeof(asn_DEF_E_CSFB_r9_tags_1)
		/sizeof(asn_DEF_E_CSFB_r9_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_E_CSFB_r9_1,
	4,	/* Elements count */
	&asn_SPC_E_CSFB_r9_specs_1	/* Additional specs */
};

