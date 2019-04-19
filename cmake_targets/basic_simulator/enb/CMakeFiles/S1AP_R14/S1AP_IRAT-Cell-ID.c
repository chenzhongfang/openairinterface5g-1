/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SonTransfer-IEs"
 * 	found in "/home/user/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/S1AP_R14`
 */

#include "S1AP_IRAT-Cell-ID.h"

asn_per_constraints_t asn_PER_type_S1AP_IRAT_Cell_ID_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_S1AP_IRAT_Cell_ID_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_IRAT_Cell_ID, choice.eUTRAN),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eUTRAN"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_IRAT_Cell_ID, choice.uTRAN),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uTRAN"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_IRAT_Cell_ID, choice.gERAN),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gERAN"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_IRAT_Cell_ID, choice.eHRPD),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_EHRPD_Sector_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eHRPD"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_IRAT_Cell_ID_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eUTRAN */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* uTRAN */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* gERAN */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* eHRPD */
};
asn_CHOICE_specifics_t asn_SPC_S1AP_IRAT_Cell_ID_specs_1 = {
	sizeof(struct S1AP_IRAT_Cell_ID),
	offsetof(struct S1AP_IRAT_Cell_ID, _asn_ctx),
	offsetof(struct S1AP_IRAT_Cell_ID, present),
	sizeof(((struct S1AP_IRAT_Cell_ID *)0)->present),
	asn_MAP_S1AP_IRAT_Cell_ID_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0,
	3	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_IRAT_Cell_ID = {
	"IRAT-Cell-ID",
	"IRAT-Cell-ID",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_S1AP_IRAT_Cell_ID_constr_1, CHOICE_constraint },
	asn_MBR_S1AP_IRAT_Cell_ID_1,
	4,	/* Elements count */
	&asn_SPC_S1AP_IRAT_Cell_ID_specs_1	/* Additional specs */
};

