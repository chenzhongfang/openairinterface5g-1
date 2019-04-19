/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "CellAccessRelatedInfo-r14.h"

asn_TYPE_member_t asn_MBR_CellAccessRelatedInfo_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CellAccessRelatedInfo_r14, plmn_IdentityList_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_IdentityList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"plmn-IdentityList-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellAccessRelatedInfo_r14, trackingAreaCode_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TrackingAreaCode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"trackingAreaCode-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellAccessRelatedInfo_r14, cellIdentity_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIdentity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellIdentity-r14"
		},
};
static const ber_tlv_tag_t asn_DEF_CellAccessRelatedInfo_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CellAccessRelatedInfo_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* plmn-IdentityList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* trackingAreaCode-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* cellIdentity-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_CellAccessRelatedInfo_r14_specs_1 = {
	sizeof(struct CellAccessRelatedInfo_r14),
	offsetof(struct CellAccessRelatedInfo_r14, _asn_ctx),
	asn_MAP_CellAccessRelatedInfo_r14_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CellAccessRelatedInfo_r14 = {
	"CellAccessRelatedInfo-r14",
	"CellAccessRelatedInfo-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_CellAccessRelatedInfo_r14_tags_1,
	sizeof(asn_DEF_CellAccessRelatedInfo_r14_tags_1)
		/sizeof(asn_DEF_CellAccessRelatedInfo_r14_tags_1[0]), /* 1 */
	asn_DEF_CellAccessRelatedInfo_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_CellAccessRelatedInfo_r14_tags_1)
		/sizeof(asn_DEF_CellAccessRelatedInfo_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CellAccessRelatedInfo_r14_1,
	3,	/* Elements count */
	&asn_SPC_CellAccessRelatedInfo_r14_specs_1	/* Additional specs */
};

