/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "/home/user/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/X2AP_R14`
 */

#include "X2AP_CellInformation-Item.h"

#include "X2AP_UL-InterferenceOverloadIndication.h"
#include "X2AP_UL-HighInterferenceIndicationInfo.h"
#include "X2AP_RelativeNarrowbandTxPower.h"
#include "X2AP_ProtocolExtensionContainer.h"
static asn_TYPE_member_t asn_MBR_X2AP_CellInformation_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_CellInformation_Item, cell_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ECGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cell-ID"
		},
	{ ATF_POINTER, 4, offsetof(struct X2AP_CellInformation_Item, ul_InterferenceOverloadIndication),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_UL_InterferenceOverloadIndication,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-InterferenceOverloadIndication"
		},
	{ ATF_POINTER, 3, offsetof(struct X2AP_CellInformation_Item, ul_HighInterferenceIndicationInfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_UL_HighInterferenceIndicationInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-HighInterferenceIndicationInfo"
		},
	{ ATF_POINTER, 2, offsetof(struct X2AP_CellInformation_Item, relativeNarrowbandTxPower),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_RelativeNarrowbandTxPower,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"relativeNarrowbandTxPower"
		},
	{ ATF_POINTER, 1, offsetof(struct X2AP_CellInformation_Item, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ProtocolExtensionContainer_5040P6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_X2AP_CellInformation_Item_oms_1[] = { 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_X2AP_CellInformation_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_CellInformation_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cell-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ul-InterferenceOverloadIndication */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ul-HighInterferenceIndicationInfo */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* relativeNarrowbandTxPower */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_X2AP_CellInformation_Item_specs_1 = {
	sizeof(struct X2AP_CellInformation_Item),
	offsetof(struct X2AP_CellInformation_Item, _asn_ctx),
	asn_MAP_X2AP_CellInformation_Item_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_X2AP_CellInformation_Item_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_CellInformation_Item = {
	"CellInformation-Item",
	"CellInformation-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_X2AP_CellInformation_Item_tags_1,
	sizeof(asn_DEF_X2AP_CellInformation_Item_tags_1)
		/sizeof(asn_DEF_X2AP_CellInformation_Item_tags_1[0]), /* 1 */
	asn_DEF_X2AP_CellInformation_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_CellInformation_Item_tags_1)
		/sizeof(asn_DEF_X2AP_CellInformation_Item_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_X2AP_CellInformation_Item_1,
	5,	/* Elements count */
	&asn_SPC_X2AP_CellInformation_Item_specs_1	/* Additional specs */
};

