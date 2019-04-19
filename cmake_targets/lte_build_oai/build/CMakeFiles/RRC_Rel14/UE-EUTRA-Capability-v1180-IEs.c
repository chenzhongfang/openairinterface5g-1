/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "UE-EUTRA-Capability-v1180-IEs.h"

asn_TYPE_member_t asn_MBR_UE_EUTRA_Capability_v1180_IEs_1[] = {
	{ ATF_POINTER, 5, offsetof(struct UE_EUTRA_Capability_v1180_IEs, rf_Parameters_v1180),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RF_Parameters_v1180,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rf-Parameters-v1180"
		},
	{ ATF_POINTER, 4, offsetof(struct UE_EUTRA_Capability_v1180_IEs, mbms_Parameters_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_Parameters_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbms-Parameters-r11"
		},
	{ ATF_POINTER, 3, offsetof(struct UE_EUTRA_Capability_v1180_IEs, fdd_Add_UE_EUTRA_Capabilities_v1180),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1180,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fdd-Add-UE-EUTRA-Capabilities-v1180"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_EUTRA_Capability_v1180_IEs, tdd_Add_UE_EUTRA_Capabilities_v1180),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1180,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd-Add-UE-EUTRA-Capabilities-v1180"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_EUTRA_Capability_v1180_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_EUTRA_Capability_v11a0_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_UE_EUTRA_Capability_v1180_IEs_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_UE_EUTRA_Capability_v1180_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_EUTRA_Capability_v1180_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rf-Parameters-v1180 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mbms-Parameters-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* fdd-Add-UE-EUTRA-Capabilities-v1180 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* tdd-Add-UE-EUTRA-Capabilities-v1180 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_Capability_v1180_IEs_specs_1 = {
	sizeof(struct UE_EUTRA_Capability_v1180_IEs),
	offsetof(struct UE_EUTRA_Capability_v1180_IEs, _asn_ctx),
	asn_MAP_UE_EUTRA_Capability_v1180_IEs_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_UE_EUTRA_Capability_v1180_IEs_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v1180_IEs = {
	"UE-EUTRA-Capability-v1180-IEs",
	"UE-EUTRA-Capability-v1180-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_EUTRA_Capability_v1180_IEs_tags_1,
	sizeof(asn_DEF_UE_EUTRA_Capability_v1180_IEs_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_Capability_v1180_IEs_tags_1[0]), /* 1 */
	asn_DEF_UE_EUTRA_Capability_v1180_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_EUTRA_Capability_v1180_IEs_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_Capability_v1180_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UE_EUTRA_Capability_v1180_IEs_1,
	5,	/* Elements count */
	&asn_SPC_UE_EUTRA_Capability_v1180_IEs_specs_1	/* Additional specs */
};

