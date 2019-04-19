/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "SL-CarrierFreqInfo-r12.h"

asn_TYPE_member_t asn_MBR_SL_CarrierFreqInfo_r12_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_CarrierFreqInfo_r12, carrierFreq_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreq-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_CarrierFreqInfo_r12, plmn_IdentityList_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_IdentityList4_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"plmn-IdentityList-r12"
		},
};
static const int asn_MAP_SL_CarrierFreqInfo_r12_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_SL_CarrierFreqInfo_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_CarrierFreqInfo_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreq-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* plmn-IdentityList-r12 */
};
asn_SEQUENCE_specifics_t asn_SPC_SL_CarrierFreqInfo_r12_specs_1 = {
	sizeof(struct SL_CarrierFreqInfo_r12),
	offsetof(struct SL_CarrierFreqInfo_r12, _asn_ctx),
	asn_MAP_SL_CarrierFreqInfo_r12_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_SL_CarrierFreqInfo_r12_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_CarrierFreqInfo_r12 = {
	"SL-CarrierFreqInfo-r12",
	"SL-CarrierFreqInfo-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_CarrierFreqInfo_r12_tags_1,
	sizeof(asn_DEF_SL_CarrierFreqInfo_r12_tags_1)
		/sizeof(asn_DEF_SL_CarrierFreqInfo_r12_tags_1[0]), /* 1 */
	asn_DEF_SL_CarrierFreqInfo_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_CarrierFreqInfo_r12_tags_1)
		/sizeof(asn_DEF_SL_CarrierFreqInfo_r12_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SL_CarrierFreqInfo_r12_1,
	2,	/* Elements count */
	&asn_SPC_SL_CarrierFreqInfo_r12_specs_1	/* Additional specs */
};

