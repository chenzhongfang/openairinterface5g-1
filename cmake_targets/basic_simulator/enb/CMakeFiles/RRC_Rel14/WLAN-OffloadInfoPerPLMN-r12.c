/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "WLAN-OffloadInfoPerPLMN-r12.h"

asn_TYPE_member_t asn_MBR_WLAN_OffloadInfoPerPLMN_r12_1[] = {
	{ ATF_POINTER, 2, offsetof(struct WLAN_OffloadInfoPerPLMN_r12, wlan_OffloadConfigCommon_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WLAN_OffloadConfig_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"wlan-OffloadConfigCommon-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct WLAN_OffloadInfoPerPLMN_r12, wlan_Id_List_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WLAN_Id_List_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"wlan-Id-List-r12"
		},
};
static const int asn_MAP_WLAN_OffloadInfoPerPLMN_r12_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_WLAN_OffloadInfoPerPLMN_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_WLAN_OffloadInfoPerPLMN_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* wlan-OffloadConfigCommon-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* wlan-Id-List-r12 */
};
asn_SEQUENCE_specifics_t asn_SPC_WLAN_OffloadInfoPerPLMN_r12_specs_1 = {
	sizeof(struct WLAN_OffloadInfoPerPLMN_r12),
	offsetof(struct WLAN_OffloadInfoPerPLMN_r12, _asn_ctx),
	asn_MAP_WLAN_OffloadInfoPerPLMN_r12_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_WLAN_OffloadInfoPerPLMN_r12_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_WLAN_OffloadInfoPerPLMN_r12 = {
	"WLAN-OffloadInfoPerPLMN-r12",
	"WLAN-OffloadInfoPerPLMN-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_WLAN_OffloadInfoPerPLMN_r12_tags_1,
	sizeof(asn_DEF_WLAN_OffloadInfoPerPLMN_r12_tags_1)
		/sizeof(asn_DEF_WLAN_OffloadInfoPerPLMN_r12_tags_1[0]), /* 1 */
	asn_DEF_WLAN_OffloadInfoPerPLMN_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_WLAN_OffloadInfoPerPLMN_r12_tags_1)
		/sizeof(asn_DEF_WLAN_OffloadInfoPerPLMN_r12_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_WLAN_OffloadInfoPerPLMN_r12_1,
	2,	/* Elements count */
	&asn_SPC_WLAN_OffloadInfoPerPLMN_r12_specs_1	/* Additional specs */
};

