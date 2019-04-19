/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "SupportedBandList-NB-r13.h"

asn_per_constraints_t asn_PER_type_SupportedBandList_NB_r13_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_SupportedBandList_NB_r13_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_SupportedBand_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_SupportedBandList_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_SupportedBandList_NB_r13_specs_1 = {
	sizeof(struct SupportedBandList_NB_r13),
	offsetof(struct SupportedBandList_NB_r13, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_SupportedBandList_NB_r13 = {
	"SupportedBandList-NB-r13",
	"SupportedBandList-NB-r13",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_SupportedBandList_NB_r13_tags_1,
	sizeof(asn_DEF_SupportedBandList_NB_r13_tags_1)
		/sizeof(asn_DEF_SupportedBandList_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_SupportedBandList_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_SupportedBandList_NB_r13_tags_1)
		/sizeof(asn_DEF_SupportedBandList_NB_r13_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_SupportedBandList_NB_r13_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_SupportedBandList_NB_r13_1,
	1,	/* Single element */
	&asn_SPC_SupportedBandList_NB_r13_specs_1	/* Additional specs */
};

