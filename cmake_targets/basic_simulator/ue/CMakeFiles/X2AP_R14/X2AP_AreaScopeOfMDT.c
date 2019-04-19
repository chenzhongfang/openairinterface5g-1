/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/user/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/X2AP_R14`
 */

#include "X2AP_AreaScopeOfMDT.h"

asn_per_constraints_t asn_PER_type_X2AP_AreaScopeOfMDT_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_X2AP_AreaScopeOfMDT_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_AreaScopeOfMDT, choice.cellBased),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_CellBasedMDT,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellBased"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_AreaScopeOfMDT, choice.tABased),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_TABasedMDT,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tABased"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_AreaScopeOfMDT, choice.pLMNWide),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pLMNWide"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_AreaScopeOfMDT, choice.tAIBased),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_TAIBasedMDT,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tAIBased"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_AreaScopeOfMDT_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellBased */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tABased */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pLMNWide */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* tAIBased */
};
asn_CHOICE_specifics_t asn_SPC_X2AP_AreaScopeOfMDT_specs_1 = {
	sizeof(struct X2AP_AreaScopeOfMDT),
	offsetof(struct X2AP_AreaScopeOfMDT, _asn_ctx),
	offsetof(struct X2AP_AreaScopeOfMDT, present),
	sizeof(((struct X2AP_AreaScopeOfMDT *)0)->present),
	asn_MAP_X2AP_AreaScopeOfMDT_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0,
	3	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_AreaScopeOfMDT = {
	"AreaScopeOfMDT",
	"AreaScopeOfMDT",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_X2AP_AreaScopeOfMDT_constr_1, CHOICE_constraint },
	asn_MBR_X2AP_AreaScopeOfMDT_1,
	4,	/* Elements count */
	&asn_SPC_X2AP_AreaScopeOfMDT_specs_1	/* Additional specs */
};

