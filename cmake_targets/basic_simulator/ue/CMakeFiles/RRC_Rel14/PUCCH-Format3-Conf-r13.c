/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#include "PUCCH-Format3-Conf-r13.h"

static int
memb_NativeInteger_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 549)) {
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
memb_NativeInteger_constraint_7(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 549)) {
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
memb_n3PUCCH_AN_ListP1_r13_constraint_6(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 4)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_n3PUCCH_AN_List_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 4)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_Member_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  549 }	/* (0..549) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_n3PUCCH_AN_List_r13_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_Member_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  549 }	/* (0..549) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_n3PUCCH_AN_ListP1_r13_constr_7 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_n3PUCCH_AN_ListP1_r13_constr_7 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_twoAntennaPortActivatedPUCCH_Format3_r13_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_n3PUCCH_AN_List_r13_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_n3PUCCH_AN_List_r13_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_Member_constr_3,  memb_NativeInteger_constraint_2 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_n3PUCCH_AN_List_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_n3PUCCH_AN_List_r13_specs_2 = {
	sizeof(struct PUCCH_Format3_Conf_r13__n3PUCCH_AN_List_r13),
	offsetof(struct PUCCH_Format3_Conf_r13__n3PUCCH_AN_List_r13, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_n3PUCCH_AN_List_r13_2 = {
	"n3PUCCH-AN-List-r13",
	"n3PUCCH-AN-List-r13",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_n3PUCCH_AN_List_r13_tags_2,
	sizeof(asn_DEF_n3PUCCH_AN_List_r13_tags_2)
		/sizeof(asn_DEF_n3PUCCH_AN_List_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_n3PUCCH_AN_List_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_n3PUCCH_AN_List_r13_tags_2)
		/sizeof(asn_DEF_n3PUCCH_AN_List_r13_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_n3PUCCH_AN_List_r13_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_n3PUCCH_AN_List_r13_2,
	1,	/* Single element */
	&asn_SPC_n3PUCCH_AN_List_r13_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_n3PUCCH_AN_ListP1_r13_7[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_Member_constr_8,  memb_NativeInteger_constraint_7 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_n3PUCCH_AN_ListP1_r13_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_n3PUCCH_AN_ListP1_r13_specs_7 = {
	sizeof(struct PUCCH_Format3_Conf_r13__twoAntennaPortActivatedPUCCH_Format3_r13__setup__n3PUCCH_AN_ListP1_r13),
	offsetof(struct PUCCH_Format3_Conf_r13__twoAntennaPortActivatedPUCCH_Format3_r13__setup__n3PUCCH_AN_ListP1_r13, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_n3PUCCH_AN_ListP1_r13_7 = {
	"n3PUCCH-AN-ListP1-r13",
	"n3PUCCH-AN-ListP1-r13",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_n3PUCCH_AN_ListP1_r13_tags_7,
	sizeof(asn_DEF_n3PUCCH_AN_ListP1_r13_tags_7)
		/sizeof(asn_DEF_n3PUCCH_AN_ListP1_r13_tags_7[0]) - 1, /* 1 */
	asn_DEF_n3PUCCH_AN_ListP1_r13_tags_7,	/* Same as above */
	sizeof(asn_DEF_n3PUCCH_AN_ListP1_r13_tags_7)
		/sizeof(asn_DEF_n3PUCCH_AN_ListP1_r13_tags_7[0]), /* 2 */
	{ 0, &asn_PER_type_n3PUCCH_AN_ListP1_r13_constr_7, SEQUENCE_OF_constraint },
	asn_MBR_n3PUCCH_AN_ListP1_r13_7,
	1,	/* Single element */
	&asn_SPC_n3PUCCH_AN_ListP1_r13_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PUCCH_Format3_Conf_r13__twoAntennaPortActivatedPUCCH_Format3_r13__setup, n3PUCCH_AN_ListP1_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_n3PUCCH_AN_ListP1_r13_7,
		0,
		{ 0, &asn_PER_memb_n3PUCCH_AN_ListP1_r13_constr_7,  memb_n3PUCCH_AN_ListP1_r13_constraint_6 },
		0, 0, /* No default value */
		"n3PUCCH-AN-ListP1-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_setup_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* n3PUCCH-AN-ListP1-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_6 = {
	sizeof(struct PUCCH_Format3_Conf_r13__twoAntennaPortActivatedPUCCH_Format3_r13__setup),
	offsetof(struct PUCCH_Format3_Conf_r13__twoAntennaPortActivatedPUCCH_Format3_r13__setup, _asn_ctx),
	asn_MAP_setup_tag2el_6,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_6 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_setup_tags_6,
	sizeof(asn_DEF_setup_tags_6)
		/sizeof(asn_DEF_setup_tags_6[0]) - 1, /* 1 */
	asn_DEF_setup_tags_6,	/* Same as above */
	sizeof(asn_DEF_setup_tags_6)
		/sizeof(asn_DEF_setup_tags_6[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_setup_6,
	1,	/* Elements count */
	&asn_SPC_setup_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_twoAntennaPortActivatedPUCCH_Format3_r13_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PUCCH_Format3_Conf_r13__twoAntennaPortActivatedPUCCH_Format3_r13, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PUCCH_Format3_Conf_r13__twoAntennaPortActivatedPUCCH_Format3_r13, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_twoAntennaPortActivatedPUCCH_Format3_r13_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_twoAntennaPortActivatedPUCCH_Format3_r13_specs_4 = {
	sizeof(struct PUCCH_Format3_Conf_r13__twoAntennaPortActivatedPUCCH_Format3_r13),
	offsetof(struct PUCCH_Format3_Conf_r13__twoAntennaPortActivatedPUCCH_Format3_r13, _asn_ctx),
	offsetof(struct PUCCH_Format3_Conf_r13__twoAntennaPortActivatedPUCCH_Format3_r13, present),
	sizeof(((struct PUCCH_Format3_Conf_r13__twoAntennaPortActivatedPUCCH_Format3_r13 *)0)->present),
	asn_MAP_twoAntennaPortActivatedPUCCH_Format3_r13_tag2el_4,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_twoAntennaPortActivatedPUCCH_Format3_r13_4 = {
	"twoAntennaPortActivatedPUCCH-Format3-r13",
	"twoAntennaPortActivatedPUCCH-Format3-r13",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_twoAntennaPortActivatedPUCCH_Format3_r13_constr_4, CHOICE_constraint },
	asn_MBR_twoAntennaPortActivatedPUCCH_Format3_r13_4,
	2,	/* Elements count */
	&asn_SPC_twoAntennaPortActivatedPUCCH_Format3_r13_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PUCCH_Format3_Conf_r13_1[] = {
	{ ATF_POINTER, 2, offsetof(struct PUCCH_Format3_Conf_r13, n3PUCCH_AN_List_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_n3PUCCH_AN_List_r13_2,
		0,
		{ 0, &asn_PER_memb_n3PUCCH_AN_List_r13_constr_2,  memb_n3PUCCH_AN_List_r13_constraint_1 },
		0, 0, /* No default value */
		"n3PUCCH-AN-List-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct PUCCH_Format3_Conf_r13, twoAntennaPortActivatedPUCCH_Format3_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_twoAntennaPortActivatedPUCCH_Format3_r13_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"twoAntennaPortActivatedPUCCH-Format3-r13"
		},
};
static const int asn_MAP_PUCCH_Format3_Conf_r13_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_PUCCH_Format3_Conf_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PUCCH_Format3_Conf_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* n3PUCCH-AN-List-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* twoAntennaPortActivatedPUCCH-Format3-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_PUCCH_Format3_Conf_r13_specs_1 = {
	sizeof(struct PUCCH_Format3_Conf_r13),
	offsetof(struct PUCCH_Format3_Conf_r13, _asn_ctx),
	asn_MAP_PUCCH_Format3_Conf_r13_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_PUCCH_Format3_Conf_r13_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PUCCH_Format3_Conf_r13 = {
	"PUCCH-Format3-Conf-r13",
	"PUCCH-Format3-Conf-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_PUCCH_Format3_Conf_r13_tags_1,
	sizeof(asn_DEF_PUCCH_Format3_Conf_r13_tags_1)
		/sizeof(asn_DEF_PUCCH_Format3_Conf_r13_tags_1[0]), /* 1 */
	asn_DEF_PUCCH_Format3_Conf_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_PUCCH_Format3_Conf_r13_tags_1)
		/sizeof(asn_DEF_PUCCH_Format3_Conf_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PUCCH_Format3_Conf_r13_1,
	2,	/* Elements count */
	&asn_SPC_PUCCH_Format3_Conf_r13_specs_1	/* Additional specs */
};

