/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "/home/user/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/X2AP_R14`
 */

#include "X2AP_MeasurementFailureCause-Item.h"

#include "X2AP_ProtocolExtensionContainer.h"
static asn_TYPE_member_t asn_MBR_X2AP_MeasurementFailureCause_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_MeasurementFailureCause_Item, measurementFailedReportCharacteristics),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ReportCharacteristics,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measurementFailedReportCharacteristics"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_MeasurementFailureCause_Item, cause),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_X2AP_Cause,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cause"
		},
	{ ATF_POINTER, 1, offsetof(struct X2AP_MeasurementFailureCause_Item, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ProtocolExtensionContainer_5040P10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_X2AP_MeasurementFailureCause_Item_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_X2AP_MeasurementFailureCause_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_MeasurementFailureCause_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measurementFailedReportCharacteristics */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cause */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_X2AP_MeasurementFailureCause_Item_specs_1 = {
	sizeof(struct X2AP_MeasurementFailureCause_Item),
	offsetof(struct X2AP_MeasurementFailureCause_Item, _asn_ctx),
	asn_MAP_X2AP_MeasurementFailureCause_Item_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_X2AP_MeasurementFailureCause_Item_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_MeasurementFailureCause_Item = {
	"MeasurementFailureCause-Item",
	"MeasurementFailureCause-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_X2AP_MeasurementFailureCause_Item_tags_1,
	sizeof(asn_DEF_X2AP_MeasurementFailureCause_Item_tags_1)
		/sizeof(asn_DEF_X2AP_MeasurementFailureCause_Item_tags_1[0]), /* 1 */
	asn_DEF_X2AP_MeasurementFailureCause_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_MeasurementFailureCause_Item_tags_1)
		/sizeof(asn_DEF_X2AP_MeasurementFailureCause_Item_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_X2AP_MeasurementFailureCause_Item_1,
	3,	/* Elements count */
	&asn_SPC_X2AP_MeasurementFailureCause_Item_specs_1	/* Additional specs */
};

