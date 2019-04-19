/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "/home/user/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/X2AP_R14`
 */

#include "X2AP_PrivateMessage.h"

asn_TYPE_member_t asn_MBR_X2AP_PrivateMessage_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_PrivateMessage, privateIEs),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_PrivateIE_Container_5056P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"privateIEs"
		},
};
static const ber_tlv_tag_t asn_DEF_X2AP_PrivateMessage_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_PrivateMessage_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* privateIEs */
};
asn_SEQUENCE_specifics_t asn_SPC_X2AP_PrivateMessage_specs_1 = {
	sizeof(struct X2AP_PrivateMessage),
	offsetof(struct X2AP_PrivateMessage, _asn_ctx),
	asn_MAP_X2AP_PrivateMessage_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_PrivateMessage = {
	"PrivateMessage",
	"PrivateMessage",
	&asn_OP_SEQUENCE,
	asn_DEF_X2AP_PrivateMessage_tags_1,
	sizeof(asn_DEF_X2AP_PrivateMessage_tags_1)
		/sizeof(asn_DEF_X2AP_PrivateMessage_tags_1[0]), /* 1 */
	asn_DEF_X2AP_PrivateMessage_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_PrivateMessage_tags_1)
		/sizeof(asn_DEF_X2AP_PrivateMessage_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_X2AP_PrivateMessage_1,
	1,	/* Elements count */
	&asn_SPC_X2AP_PrivateMessage_specs_1	/* Additional specs */
};

