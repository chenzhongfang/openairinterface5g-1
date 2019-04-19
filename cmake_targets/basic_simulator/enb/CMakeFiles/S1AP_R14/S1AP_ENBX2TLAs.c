/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/user/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/S1AP_R14`
 */

#include "S1AP_ENBX2TLAs.h"

asn_per_constraints_t asn_PER_type_S1AP_ENBX2TLAs_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_S1AP_ENBX2TLAs_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (3 << 2)),
		0,
		&asn_DEF_S1AP_TransportLayerAddress,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_S1AP_ENBX2TLAs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_S1AP_ENBX2TLAs_specs_1 = {
	sizeof(struct S1AP_ENBX2TLAs),
	offsetof(struct S1AP_ENBX2TLAs, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_ENBX2TLAs = {
	"ENBX2TLAs",
	"ENBX2TLAs",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_S1AP_ENBX2TLAs_tags_1,
	sizeof(asn_DEF_S1AP_ENBX2TLAs_tags_1)
		/sizeof(asn_DEF_S1AP_ENBX2TLAs_tags_1[0]), /* 1 */
	asn_DEF_S1AP_ENBX2TLAs_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_ENBX2TLAs_tags_1)
		/sizeof(asn_DEF_S1AP_ENBX2TLAs_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_S1AP_ENBX2TLAs_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_S1AP_ENBX2TLAs_1,
	1,	/* Single element */
	&asn_SPC_S1AP_ENBX2TLAs_specs_1	/* Additional specs */
};

