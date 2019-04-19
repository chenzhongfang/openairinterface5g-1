/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "UE-EUTRA-CapabilityAddXDD-Mode-v1320.h"

asn_TYPE_member_t asn_MBR_UE_EUTRA_CapabilityAddXDD_Mode_v1320_1[] = {
	{ ATF_POINTER, 2, offsetof(struct UE_EUTRA_CapabilityAddXDD_Mode_v1320, phyLayerParameters_v1320),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhyLayerParameters_v1320,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"phyLayerParameters-v1320"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_EUTRA_CapabilityAddXDD_Mode_v1320, scptm_Parameters_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SCPTM_Parameters_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"scptm-Parameters-r13"
		},
};
static const int asn_MAP_UE_EUTRA_CapabilityAddXDD_Mode_v1320_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1320_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_EUTRA_CapabilityAddXDD_Mode_v1320_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* phyLayerParameters-v1320 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* scptm-Parameters-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_CapabilityAddXDD_Mode_v1320_specs_1 = {
	sizeof(struct UE_EUTRA_CapabilityAddXDD_Mode_v1320),
	offsetof(struct UE_EUTRA_CapabilityAddXDD_Mode_v1320, _asn_ctx),
	asn_MAP_UE_EUTRA_CapabilityAddXDD_Mode_v1320_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_UE_EUTRA_CapabilityAddXDD_Mode_v1320_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1320 = {
	"UE-EUTRA-CapabilityAddXDD-Mode-v1320",
	"UE-EUTRA-CapabilityAddXDD-Mode-v1320",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1320_tags_1,
	sizeof(asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1320_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1320_tags_1[0]), /* 1 */
	asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1320_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1320_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1320_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UE_EUTRA_CapabilityAddXDD_Mode_v1320_1,
	2,	/* Elements count */
	&asn_SPC_UE_EUTRA_CapabilityAddXDD_Mode_v1320_specs_1	/* Additional specs */
};

