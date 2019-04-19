/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "MobilityControlInfoV2X-r14.h"

asn_TYPE_member_t asn_MBR_MobilityControlInfoV2X_r14_1[] = {
	{ ATF_POINTER, 4, offsetof(struct MobilityControlInfoV2X_r14, v2x_CommTxPoolExceptional_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_CommResourcePoolV2X_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v2x-CommTxPoolExceptional-r14"
		},
	{ ATF_POINTER, 3, offsetof(struct MobilityControlInfoV2X_r14, v2x_CommRxPool_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_CommRxPoolListV2X_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v2x-CommRxPool-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct MobilityControlInfoV2X_r14, v2x_CommSyncConfig_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_SyncConfigListV2X_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v2x-CommSyncConfig-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct MobilityControlInfoV2X_r14, cbr_MobilityTxConfigList_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_CBR_CommonTxConfigList_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cbr-MobilityTxConfigList-r14"
		},
};
static const int asn_MAP_MobilityControlInfoV2X_r14_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_MobilityControlInfoV2X_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MobilityControlInfoV2X_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* v2x-CommTxPoolExceptional-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* v2x-CommRxPool-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* v2x-CommSyncConfig-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* cbr-MobilityTxConfigList-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_MobilityControlInfoV2X_r14_specs_1 = {
	sizeof(struct MobilityControlInfoV2X_r14),
	offsetof(struct MobilityControlInfoV2X_r14, _asn_ctx),
	asn_MAP_MobilityControlInfoV2X_r14_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_MobilityControlInfoV2X_r14_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MobilityControlInfoV2X_r14 = {
	"MobilityControlInfoV2X-r14",
	"MobilityControlInfoV2X-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_MobilityControlInfoV2X_r14_tags_1,
	sizeof(asn_DEF_MobilityControlInfoV2X_r14_tags_1)
		/sizeof(asn_DEF_MobilityControlInfoV2X_r14_tags_1[0]), /* 1 */
	asn_DEF_MobilityControlInfoV2X_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_MobilityControlInfoV2X_r14_tags_1)
		/sizeof(asn_DEF_MobilityControlInfoV2X_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MobilityControlInfoV2X_r14_1,
	4,	/* Elements count */
	&asn_SPC_MobilityControlInfoV2X_r14_specs_1	/* Additional specs */
};

