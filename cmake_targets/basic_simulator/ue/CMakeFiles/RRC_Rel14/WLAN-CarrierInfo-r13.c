/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#include "WLAN-CarrierInfo-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_operatingClass_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 255)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_countryCode_r13_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  3 }	/* (0..3,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_operatingClass_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_countryCode_r13_value2enum_3[] = {
	{ 0,	12,	"unitedStates" },
	{ 1,	6,	"europe" },
	{ 2,	5,	"japan" },
	{ 3,	6,	"global" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_countryCode_r13_enum2value_3[] = {
	1,	/* europe(1) */
	3,	/* global(3) */
	2,	/* japan(2) */
	0	/* unitedStates(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_countryCode_r13_specs_3 = {
	asn_MAP_countryCode_r13_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_countryCode_r13_enum2value_3,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	5,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_countryCode_r13_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_countryCode_r13_3 = {
	"countryCode-r13",
	"countryCode-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_countryCode_r13_tags_3,
	sizeof(asn_DEF_countryCode_r13_tags_3)
		/sizeof(asn_DEF_countryCode_r13_tags_3[0]) - 1, /* 1 */
	asn_DEF_countryCode_r13_tags_3,	/* Same as above */
	sizeof(asn_DEF_countryCode_r13_tags_3)
		/sizeof(asn_DEF_countryCode_r13_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_countryCode_r13_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_countryCode_r13_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_WLAN_CarrierInfo_r13_1[] = {
	{ ATF_POINTER, 3, offsetof(struct WLAN_CarrierInfo_r13, operatingClass_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_operatingClass_r13_constr_2,  memb_operatingClass_r13_constraint_1 },
		0, 0, /* No default value */
		"operatingClass-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct WLAN_CarrierInfo_r13, countryCode_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_countryCode_r13_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"countryCode-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct WLAN_CarrierInfo_r13, channelNumbers_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WLAN_ChannelList_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"channelNumbers-r13"
		},
};
static const int asn_MAP_WLAN_CarrierInfo_r13_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_WLAN_CarrierInfo_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_WLAN_CarrierInfo_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* operatingClass-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* countryCode-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* channelNumbers-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_WLAN_CarrierInfo_r13_specs_1 = {
	sizeof(struct WLAN_CarrierInfo_r13),
	offsetof(struct WLAN_CarrierInfo_r13, _asn_ctx),
	asn_MAP_WLAN_CarrierInfo_r13_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_WLAN_CarrierInfo_r13_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_WLAN_CarrierInfo_r13 = {
	"WLAN-CarrierInfo-r13",
	"WLAN-CarrierInfo-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_WLAN_CarrierInfo_r13_tags_1,
	sizeof(asn_DEF_WLAN_CarrierInfo_r13_tags_1)
		/sizeof(asn_DEF_WLAN_CarrierInfo_r13_tags_1[0]), /* 1 */
	asn_DEF_WLAN_CarrierInfo_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_WLAN_CarrierInfo_r13_tags_1)
		/sizeof(asn_DEF_WLAN_CarrierInfo_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_WLAN_CarrierInfo_r13_1,
	3,	/* Elements count */
	&asn_SPC_WLAN_CarrierInfo_r13_specs_1	/* Additional specs */
};

