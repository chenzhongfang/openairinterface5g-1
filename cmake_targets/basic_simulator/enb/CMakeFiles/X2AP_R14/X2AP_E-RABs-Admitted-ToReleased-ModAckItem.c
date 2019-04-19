/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "/home/user/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/X2AP_R14`
 */

#include "X2AP_E-RABs-Admitted-ToReleased-ModAckItem.h"

static asn_per_constraints_t asn_PER_type_X2AP_E_RABs_Admitted_ToReleased_ModAckItem_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_X2AP_E_RABs_Admitted_ToReleased_ModAckItem_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_E_RABs_Admitted_ToReleased_ModAckItem, choice.sCG_Bearer),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_E_RABs_Admitted_ToBeReleased_ModAckItem_SCG_Bearer,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sCG-Bearer"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_E_RABs_Admitted_ToReleased_ModAckItem, choice.split_Bearer),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_E_RABs_Admitted_ToBeReleased_ModAckItem_Split_Bearer,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"split-Bearer"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_E_RABs_Admitted_ToReleased_ModAckItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sCG-Bearer */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* split-Bearer */
};
static asn_CHOICE_specifics_t asn_SPC_X2AP_E_RABs_Admitted_ToReleased_ModAckItem_specs_1 = {
	sizeof(struct X2AP_E_RABs_Admitted_ToReleased_ModAckItem),
	offsetof(struct X2AP_E_RABs_Admitted_ToReleased_ModAckItem, _asn_ctx),
	offsetof(struct X2AP_E_RABs_Admitted_ToReleased_ModAckItem, present),
	sizeof(((struct X2AP_E_RABs_Admitted_ToReleased_ModAckItem *)0)->present),
	asn_MAP_X2AP_E_RABs_Admitted_ToReleased_ModAckItem_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_E_RABs_Admitted_ToReleased_ModAckItem = {
	"E-RABs-Admitted-ToReleased-ModAckItem",
	"E-RABs-Admitted-ToReleased-ModAckItem",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_X2AP_E_RABs_Admitted_ToReleased_ModAckItem_constr_1, CHOICE_constraint },
	asn_MBR_X2AP_E_RABs_Admitted_ToReleased_ModAckItem_1,
	2,	/* Elements count */
	&asn_SPC_X2AP_E_RABs_Admitted_ToReleased_ModAckItem_specs_1	/* Additional specs */
};

