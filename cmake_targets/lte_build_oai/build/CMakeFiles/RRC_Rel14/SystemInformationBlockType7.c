/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "SystemInformationBlockType7.h"

asn_TYPE_member_t asn_MBR_SystemInformationBlockType7_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType7, t_ReselectionGERAN),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_T_Reselection,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t-ReselectionGERAN"
		},
	{ ATF_POINTER, 3, offsetof(struct SystemInformationBlockType7, t_ReselectionGERAN_SF),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SpeedStateScaleFactors,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t-ReselectionGERAN-SF"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType7, carrierFreqsInfoList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierFreqsInfoListGERAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreqsInfoList"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType7, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
};
static const int asn_MAP_SystemInformationBlockType7_oms_1[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_SystemInformationBlockType7_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType7_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* t-ReselectionGERAN */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* t-ReselectionGERAN-SF */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* carrierFreqsInfoList */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* lateNonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType7_specs_1 = {
	sizeof(struct SystemInformationBlockType7),
	offsetof(struct SystemInformationBlockType7, _asn_ctx),
	asn_MAP_SystemInformationBlockType7_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType7_oms_1,	/* Optional members */
	2, 1,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType7 = {
	"SystemInformationBlockType7",
	"SystemInformationBlockType7",
	&asn_OP_SEQUENCE,
	asn_DEF_SystemInformationBlockType7_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType7_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType7_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType7_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType7_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType7_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SystemInformationBlockType7_1,
	4,	/* Elements count */
	&asn_SPC_SystemInformationBlockType7_specs_1	/* Additional specs */
};

