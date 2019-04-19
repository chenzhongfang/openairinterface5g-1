/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#include "MeasObjectEUTRA-v9e0.h"

asn_TYPE_member_t asn_MBR_MeasObjectEUTRA_v9e0_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectEUTRA_v9e0, carrierFreq_v9e0),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA_v9e0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreq-v9e0"
		},
};
static const ber_tlv_tag_t asn_DEF_MeasObjectEUTRA_v9e0_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasObjectEUTRA_v9e0_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* carrierFreq-v9e0 */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasObjectEUTRA_v9e0_specs_1 = {
	sizeof(struct MeasObjectEUTRA_v9e0),
	offsetof(struct MeasObjectEUTRA_v9e0, _asn_ctx),
	asn_MAP_MeasObjectEUTRA_v9e0_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasObjectEUTRA_v9e0 = {
	"MeasObjectEUTRA-v9e0",
	"MeasObjectEUTRA-v9e0",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasObjectEUTRA_v9e0_tags_1,
	sizeof(asn_DEF_MeasObjectEUTRA_v9e0_tags_1)
		/sizeof(asn_DEF_MeasObjectEUTRA_v9e0_tags_1[0]), /* 1 */
	asn_DEF_MeasObjectEUTRA_v9e0_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasObjectEUTRA_v9e0_tags_1)
		/sizeof(asn_DEF_MeasObjectEUTRA_v9e0_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MeasObjectEUTRA_v9e0_1,
	1,	/* Elements count */
	&asn_SPC_MeasObjectEUTRA_v9e0_specs_1	/* Additional specs */
};

