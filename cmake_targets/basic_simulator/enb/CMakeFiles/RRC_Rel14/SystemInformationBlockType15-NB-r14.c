/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "SystemInformationBlockType15-NB-r14.h"

asn_TYPE_member_t asn_MBR_SystemInformationBlockType15_NB_r14_1[] = {
	{ ATF_POINTER, 3, offsetof(struct SystemInformationBlockType15_NB_r14, mbms_SAI_IntraFreq_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_SAI_List_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbms-SAI-IntraFreq-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType15_NB_r14, mbms_SAI_InterFreqList_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_SAI_InterFreqList_NB_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbms-SAI-InterFreqList-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType15_NB_r14, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
};
static const int asn_MAP_SystemInformationBlockType15_NB_r14_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_SystemInformationBlockType15_NB_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType15_NB_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mbms-SAI-IntraFreq-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mbms-SAI-InterFreqList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* lateNonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType15_NB_r14_specs_1 = {
	sizeof(struct SystemInformationBlockType15_NB_r14),
	offsetof(struct SystemInformationBlockType15_NB_r14, _asn_ctx),
	asn_MAP_SystemInformationBlockType15_NB_r14_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType15_NB_r14_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType15_NB_r14 = {
	"SystemInformationBlockType15-NB-r14",
	"SystemInformationBlockType15-NB-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_SystemInformationBlockType15_NB_r14_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType15_NB_r14_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType15_NB_r14_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType15_NB_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType15_NB_r14_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType15_NB_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SystemInformationBlockType15_NB_r14_1,
	3,	/* Elements count */
	&asn_SPC_SystemInformationBlockType15_NB_r14_specs_1	/* Additional specs */
};

