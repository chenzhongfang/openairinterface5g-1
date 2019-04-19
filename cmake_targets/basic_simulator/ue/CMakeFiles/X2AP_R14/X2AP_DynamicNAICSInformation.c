/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/user/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/X2AP_R14`
 */

#include "X2AP_DynamicNAICSInformation.h"

#include "X2AP_ProtocolExtensionContainer.h"
static int
memb_X2AP_transmissionModes_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_X2AP_pB_information_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 3)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_X2AP_pA_list_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size <= 3)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_X2AP_pA_list_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (SIZE(0..3)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_X2AP_transmissionModes_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_X2AP_pB_information_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_X2AP_pA_list_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (SIZE(0..3)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_X2AP_pA_list_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_X2AP_PA_Values,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_X2AP_pA_list_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_X2AP_pA_list_specs_4 = {
	sizeof(struct X2AP_DynamicNAICSInformation__pA_list),
	offsetof(struct X2AP_DynamicNAICSInformation__pA_list, _asn_ctx),
	1,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_X2AP_pA_list_4 = {
	"pA-list",
	"pA-list",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_X2AP_pA_list_tags_4,
	sizeof(asn_DEF_X2AP_pA_list_tags_4)
		/sizeof(asn_DEF_X2AP_pA_list_tags_4[0]) - 1, /* 1 */
	asn_DEF_X2AP_pA_list_tags_4,	/* Same as above */
	sizeof(asn_DEF_X2AP_pA_list_tags_4)
		/sizeof(asn_DEF_X2AP_pA_list_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_X2AP_pA_list_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_X2AP_pA_list_4,
	1,	/* Single element */
	&asn_SPC_X2AP_pA_list_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_X2AP_DynamicNAICSInformation_1[] = {
	{ ATF_POINTER, 2, offsetof(struct X2AP_DynamicNAICSInformation, transmissionModes),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_X2AP_transmissionModes_constr_2,  memb_X2AP_transmissionModes_constraint_1 },
		0, 0, /* No default value */
		"transmissionModes"
		},
	{ ATF_POINTER, 1, offsetof(struct X2AP_DynamicNAICSInformation, pB_information),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_X2AP_pB_information_constr_3,  memb_X2AP_pB_information_constraint_1 },
		0, 0, /* No default value */
		"pB-information"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_DynamicNAICSInformation, pA_list),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_X2AP_pA_list_4,
		0,
		{ 0, &asn_PER_memb_X2AP_pA_list_constr_4,  memb_X2AP_pA_list_constraint_1 },
		0, 0, /* No default value */
		"pA-list"
		},
	{ ATF_POINTER, 1, offsetof(struct X2AP_DynamicNAICSInformation, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ProtocolExtensionContainer_5040P67,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_X2AP_DynamicNAICSInformation_oms_1[] = { 0, 1, 3 };
static const ber_tlv_tag_t asn_DEF_X2AP_DynamicNAICSInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_DynamicNAICSInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* transmissionModes */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pB-information */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pA-list */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_X2AP_DynamicNAICSInformation_specs_1 = {
	sizeof(struct X2AP_DynamicNAICSInformation),
	offsetof(struct X2AP_DynamicNAICSInformation, _asn_ctx),
	asn_MAP_X2AP_DynamicNAICSInformation_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_X2AP_DynamicNAICSInformation_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_DynamicNAICSInformation = {
	"DynamicNAICSInformation",
	"DynamicNAICSInformation",
	&asn_OP_SEQUENCE,
	asn_DEF_X2AP_DynamicNAICSInformation_tags_1,
	sizeof(asn_DEF_X2AP_DynamicNAICSInformation_tags_1)
		/sizeof(asn_DEF_X2AP_DynamicNAICSInformation_tags_1[0]), /* 1 */
	asn_DEF_X2AP_DynamicNAICSInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_DynamicNAICSInformation_tags_1)
		/sizeof(asn_DEF_X2AP_DynamicNAICSInformation_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_X2AP_DynamicNAICSInformation_1,
	4,	/* Elements count */
	&asn_SPC_X2AP_DynamicNAICSInformation_specs_1	/* Additional specs */
};

