/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/user/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/X2AP_R14`
 */

#include "X2AP_CellReplacingInfo.h"

#include "X2AP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_X2AP_CellReplacingInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_CellReplacingInfo, replacingCellsList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ReplacingCellsList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"replacingCellsList"
		},
	{ ATF_POINTER, 1, offsetof(struct X2AP_CellReplacingInfo, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ProtocolExtensionContainer_5040P51,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_X2AP_CellReplacingInfo_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_X2AP_CellReplacingInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_CellReplacingInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* replacingCellsList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_X2AP_CellReplacingInfo_specs_1 = {
	sizeof(struct X2AP_CellReplacingInfo),
	offsetof(struct X2AP_CellReplacingInfo, _asn_ctx),
	asn_MAP_X2AP_CellReplacingInfo_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_X2AP_CellReplacingInfo_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_CellReplacingInfo = {
	"CellReplacingInfo",
	"CellReplacingInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_X2AP_CellReplacingInfo_tags_1,
	sizeof(asn_DEF_X2AP_CellReplacingInfo_tags_1)
		/sizeof(asn_DEF_X2AP_CellReplacingInfo_tags_1[0]), /* 1 */
	asn_DEF_X2AP_CellReplacingInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_CellReplacingInfo_tags_1)
		/sizeof(asn_DEF_X2AP_CellReplacingInfo_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_X2AP_CellReplacingInfo_1,
	2,	/* Elements count */
	&asn_SPC_X2AP_CellReplacingInfo_specs_1	/* Additional specs */
};

