/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "/home/user/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/X2AP_R14`
 */

#include "X2AP_E-RABs-SubjectToCounterCheckItem.h"

#include "X2AP_ProtocolExtensionContainer.h"
static int
X2AP_uL_Count_3_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	/* Constraint check succeeded */
	return 0;
}

/*
 * This type is implemented using NativeInteger,
 * so here we adjust the DEF accordingly.
 */
static int
X2AP_dL_Count_4_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	/* Constraint check succeeded */
	return 0;
}

/*
 * This type is implemented using NativeInteger,
 * so here we adjust the DEF accordingly.
 */
static int
memb_X2AP_uL_Count_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	/* Constraint check succeeded */
	return 0;
}

static int
memb_X2AP_dL_Count_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	/* Constraint check succeeded */
	return 0;
}

static asn_per_constraints_t asn_PER_type_X2AP_uL_Count_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 32, -1,  0,  4294967295 }	/* (0..4294967295) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_X2AP_dL_Count_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 32, -1,  0,  4294967295 }	/* (0..4294967295) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_X2AP_uL_Count_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 32, -1,  0,  4294967295 }	/* (0..4294967295) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_X2AP_dL_Count_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 32, -1,  0,  4294967295 }	/* (0..4294967295) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_specifics_t asn_SPC_X2AP_uL_Count_specs_3 = {
	0,	0,	0,	0,	0,
	0,	/* Native long size */
	1	/* Unsigned representation */
};
static const ber_tlv_tag_t asn_DEF_X2AP_uL_Count_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_X2AP_uL_Count_3 = {
	"uL-Count",
	"uL-Count",
	&asn_OP_NativeInteger,
	asn_DEF_X2AP_uL_Count_tags_3,
	sizeof(asn_DEF_X2AP_uL_Count_tags_3)
		/sizeof(asn_DEF_X2AP_uL_Count_tags_3[0]) - 1, /* 1 */
	asn_DEF_X2AP_uL_Count_tags_3,	/* Same as above */
	sizeof(asn_DEF_X2AP_uL_Count_tags_3)
		/sizeof(asn_DEF_X2AP_uL_Count_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_X2AP_uL_Count_constr_3, X2AP_uL_Count_3_constraint },
	0, 0,	/* No members */
	&asn_SPC_X2AP_uL_Count_specs_3	/* Additional specs */
};

static const asn_INTEGER_specifics_t asn_SPC_X2AP_dL_Count_specs_4 = {
	0,	0,	0,	0,	0,
	0,	/* Native long size */
	1	/* Unsigned representation */
};
static const ber_tlv_tag_t asn_DEF_X2AP_dL_Count_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_X2AP_dL_Count_4 = {
	"dL-Count",
	"dL-Count",
	&asn_OP_NativeInteger,
	asn_DEF_X2AP_dL_Count_tags_4,
	sizeof(asn_DEF_X2AP_dL_Count_tags_4)
		/sizeof(asn_DEF_X2AP_dL_Count_tags_4[0]) - 1, /* 1 */
	asn_DEF_X2AP_dL_Count_tags_4,	/* Same as above */
	sizeof(asn_DEF_X2AP_dL_Count_tags_4)
		/sizeof(asn_DEF_X2AP_dL_Count_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_X2AP_dL_Count_constr_4, X2AP_dL_Count_4_constraint },
	0, 0,	/* No members */
	&asn_SPC_X2AP_dL_Count_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_X2AP_E_RABs_SubjectToCounterCheckItem_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_E_RABs_SubjectToCounterCheckItem, e_RAB_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_E_RAB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e-RAB-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_E_RABs_SubjectToCounterCheckItem, uL_Count),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_uL_Count_3,
		0,
		{ 0, &asn_PER_memb_X2AP_uL_Count_constr_3,  memb_X2AP_uL_Count_constraint_1 },
		0, 0, /* No default value */
		"uL-Count"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_E_RABs_SubjectToCounterCheckItem, dL_Count),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_dL_Count_4,
		0,
		{ 0, &asn_PER_memb_X2AP_dL_Count_constr_4,  memb_X2AP_dL_Count_constraint_1 },
		0, 0, /* No default value */
		"dL-Count"
		},
	{ ATF_POINTER, 1, offsetof(struct X2AP_E_RABs_SubjectToCounterCheckItem, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ProtocolExtensionContainer_5040P40,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_X2AP_E_RABs_SubjectToCounterCheckItem_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_X2AP_E_RABs_SubjectToCounterCheckItem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_E_RABs_SubjectToCounterCheckItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* e-RAB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* uL-Count */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* dL-Count */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_X2AP_E_RABs_SubjectToCounterCheckItem_specs_1 = {
	sizeof(struct X2AP_E_RABs_SubjectToCounterCheckItem),
	offsetof(struct X2AP_E_RABs_SubjectToCounterCheckItem, _asn_ctx),
	asn_MAP_X2AP_E_RABs_SubjectToCounterCheckItem_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_X2AP_E_RABs_SubjectToCounterCheckItem_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_E_RABs_SubjectToCounterCheckItem = {
	"E-RABs-SubjectToCounterCheckItem",
	"E-RABs-SubjectToCounterCheckItem",
	&asn_OP_SEQUENCE,
	asn_DEF_X2AP_E_RABs_SubjectToCounterCheckItem_tags_1,
	sizeof(asn_DEF_X2AP_E_RABs_SubjectToCounterCheckItem_tags_1)
		/sizeof(asn_DEF_X2AP_E_RABs_SubjectToCounterCheckItem_tags_1[0]), /* 1 */
	asn_DEF_X2AP_E_RABs_SubjectToCounterCheckItem_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_E_RABs_SubjectToCounterCheckItem_tags_1)
		/sizeof(asn_DEF_X2AP_E_RABs_SubjectToCounterCheckItem_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_X2AP_E_RABs_SubjectToCounterCheckItem_1,
	4,	/* Elements count */
	&asn_SPC_X2AP_E_RABs_SubjectToCounterCheckItem_specs_1	/* Additional specs */
};

