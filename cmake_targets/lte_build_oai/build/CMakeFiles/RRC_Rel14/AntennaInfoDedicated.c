/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "AntennaInfoDedicated.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_n2TxAntenna_tm3_constraint_11(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 2)) {
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
memb_n4TxAntenna_tm3_constraint_11(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 4)) {
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
memb_n2TxAntenna_tm4_constraint_11(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 6)) {
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
memb_n4TxAntenna_tm4_constraint_11(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 64)) {
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
memb_n2TxAntenna_tm5_constraint_11(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 4)) {
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
memb_n4TxAntenna_tm5_constraint_11(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 16)) {
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
memb_n2TxAntenna_tm6_constraint_11(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 4)) {
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
memb_n4TxAntenna_tm6_constraint_11(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_transmissionMode_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_n2TxAntenna_tm3_constr_12 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_n4TxAntenna_tm3_constr_13 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  4,  4 }	/* (SIZE(4..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_n2TxAntenna_tm4_constr_14 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  6,  6 }	/* (SIZE(6..6)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_n4TxAntenna_tm4_constr_15 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  64,  64 }	/* (SIZE(64..64)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_n2TxAntenna_tm5_constr_16 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  4,  4 }	/* (SIZE(4..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_n4TxAntenna_tm5_constr_17 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_n2TxAntenna_tm6_constr_18 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  4,  4 }	/* (SIZE(4..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_n4TxAntenna_tm6_constr_19 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_codebookSubsetRestriction_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_setup_constr_22 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ue_TransmitAntennaSelection_constr_20 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_transmissionMode_value2enum_2[] = {
	{ 0,	3,	"tm1" },
	{ 1,	3,	"tm2" },
	{ 2,	3,	"tm3" },
	{ 3,	3,	"tm4" },
	{ 4,	3,	"tm5" },
	{ 5,	3,	"tm6" },
	{ 6,	3,	"tm7" },
	{ 7,	8,	"tm8-v920" }
};
static const unsigned int asn_MAP_transmissionMode_enum2value_2[] = {
	0,	/* tm1(0) */
	1,	/* tm2(1) */
	2,	/* tm3(2) */
	3,	/* tm4(3) */
	4,	/* tm5(4) */
	5,	/* tm6(5) */
	6,	/* tm7(6) */
	7	/* tm8-v920(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_transmissionMode_specs_2 = {
	asn_MAP_transmissionMode_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_transmissionMode_enum2value_2,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_transmissionMode_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_transmissionMode_2 = {
	"transmissionMode",
	"transmissionMode",
	&asn_OP_NativeEnumerated,
	asn_DEF_transmissionMode_tags_2,
	sizeof(asn_DEF_transmissionMode_tags_2)
		/sizeof(asn_DEF_transmissionMode_tags_2[0]) - 1, /* 1 */
	asn_DEF_transmissionMode_tags_2,	/* Same as above */
	sizeof(asn_DEF_transmissionMode_tags_2)
		/sizeof(asn_DEF_transmissionMode_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_transmissionMode_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_transmissionMode_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_codebookSubsetRestriction_11[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AntennaInfoDedicated__codebookSubsetRestriction, choice.n2TxAntenna_tm3),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_n2TxAntenna_tm3_constr_12,  memb_n2TxAntenna_tm3_constraint_11 },
		0, 0, /* No default value */
		"n2TxAntenna-tm3"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AntennaInfoDedicated__codebookSubsetRestriction, choice.n4TxAntenna_tm3),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_n4TxAntenna_tm3_constr_13,  memb_n4TxAntenna_tm3_constraint_11 },
		0, 0, /* No default value */
		"n4TxAntenna-tm3"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AntennaInfoDedicated__codebookSubsetRestriction, choice.n2TxAntenna_tm4),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_n2TxAntenna_tm4_constr_14,  memb_n2TxAntenna_tm4_constraint_11 },
		0, 0, /* No default value */
		"n2TxAntenna-tm4"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AntennaInfoDedicated__codebookSubsetRestriction, choice.n4TxAntenna_tm4),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_n4TxAntenna_tm4_constr_15,  memb_n4TxAntenna_tm4_constraint_11 },
		0, 0, /* No default value */
		"n4TxAntenna-tm4"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AntennaInfoDedicated__codebookSubsetRestriction, choice.n2TxAntenna_tm5),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_n2TxAntenna_tm5_constr_16,  memb_n2TxAntenna_tm5_constraint_11 },
		0, 0, /* No default value */
		"n2TxAntenna-tm5"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AntennaInfoDedicated__codebookSubsetRestriction, choice.n4TxAntenna_tm5),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_n4TxAntenna_tm5_constr_17,  memb_n4TxAntenna_tm5_constraint_11 },
		0, 0, /* No default value */
		"n4TxAntenna-tm5"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AntennaInfoDedicated__codebookSubsetRestriction, choice.n2TxAntenna_tm6),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_n2TxAntenna_tm6_constr_18,  memb_n2TxAntenna_tm6_constraint_11 },
		0, 0, /* No default value */
		"n2TxAntenna-tm6"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AntennaInfoDedicated__codebookSubsetRestriction, choice.n4TxAntenna_tm6),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_n4TxAntenna_tm6_constr_19,  memb_n4TxAntenna_tm6_constraint_11 },
		0, 0, /* No default value */
		"n4TxAntenna-tm6"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_codebookSubsetRestriction_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* n2TxAntenna-tm3 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* n4TxAntenna-tm3 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* n2TxAntenna-tm4 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* n4TxAntenna-tm4 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* n2TxAntenna-tm5 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* n4TxAntenna-tm5 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* n2TxAntenna-tm6 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* n4TxAntenna-tm6 */
};
static asn_CHOICE_specifics_t asn_SPC_codebookSubsetRestriction_specs_11 = {
	sizeof(struct AntennaInfoDedicated__codebookSubsetRestriction),
	offsetof(struct AntennaInfoDedicated__codebookSubsetRestriction, _asn_ctx),
	offsetof(struct AntennaInfoDedicated__codebookSubsetRestriction, present),
	sizeof(((struct AntennaInfoDedicated__codebookSubsetRestriction *)0)->present),
	asn_MAP_codebookSubsetRestriction_tag2el_11,
	8,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_codebookSubsetRestriction_11 = {
	"codebookSubsetRestriction",
	"codebookSubsetRestriction",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_codebookSubsetRestriction_constr_11, CHOICE_constraint },
	asn_MBR_codebookSubsetRestriction_11,
	8,	/* Elements count */
	&asn_SPC_codebookSubsetRestriction_specs_11	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_setup_value2enum_22[] = {
	{ 0,	10,	"closedLoop" },
	{ 1,	8,	"openLoop" }
};
static const unsigned int asn_MAP_setup_enum2value_22[] = {
	0,	/* closedLoop(0) */
	1	/* openLoop(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_setup_specs_22 = {
	asn_MAP_setup_value2enum_22,	/* "tag" => N; sorted by tag */
	asn_MAP_setup_enum2value_22,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_setup_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_22 = {
	"setup",
	"setup",
	&asn_OP_NativeEnumerated,
	asn_DEF_setup_tags_22,
	sizeof(asn_DEF_setup_tags_22)
		/sizeof(asn_DEF_setup_tags_22[0]) - 1, /* 1 */
	asn_DEF_setup_tags_22,	/* Same as above */
	sizeof(asn_DEF_setup_tags_22)
		/sizeof(asn_DEF_setup_tags_22[0]), /* 2 */
	{ 0, &asn_PER_type_setup_constr_22, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_setup_specs_22	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ue_TransmitAntennaSelection_20[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AntennaInfoDedicated__ue_TransmitAntennaSelection, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AntennaInfoDedicated__ue_TransmitAntennaSelection, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_setup_22,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ue_TransmitAntennaSelection_tag2el_20[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_ue_TransmitAntennaSelection_specs_20 = {
	sizeof(struct AntennaInfoDedicated__ue_TransmitAntennaSelection),
	offsetof(struct AntennaInfoDedicated__ue_TransmitAntennaSelection, _asn_ctx),
	offsetof(struct AntennaInfoDedicated__ue_TransmitAntennaSelection, present),
	sizeof(((struct AntennaInfoDedicated__ue_TransmitAntennaSelection *)0)->present),
	asn_MAP_ue_TransmitAntennaSelection_tag2el_20,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ue_TransmitAntennaSelection_20 = {
	"ue-TransmitAntennaSelection",
	"ue-TransmitAntennaSelection",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_ue_TransmitAntennaSelection_constr_20, CHOICE_constraint },
	asn_MBR_ue_TransmitAntennaSelection_20,
	2,	/* Elements count */
	&asn_SPC_ue_TransmitAntennaSelection_specs_20	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_AntennaInfoDedicated_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AntennaInfoDedicated, transmissionMode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_transmissionMode_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"transmissionMode"
		},
	{ ATF_POINTER, 1, offsetof(struct AntennaInfoDedicated, codebookSubsetRestriction),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_codebookSubsetRestriction_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"codebookSubsetRestriction"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AntennaInfoDedicated, ue_TransmitAntennaSelection),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ue_TransmitAntennaSelection_20,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-TransmitAntennaSelection"
		},
};
static const int asn_MAP_AntennaInfoDedicated_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_AntennaInfoDedicated_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AntennaInfoDedicated_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* transmissionMode */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* codebookSubsetRestriction */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ue-TransmitAntennaSelection */
};
asn_SEQUENCE_specifics_t asn_SPC_AntennaInfoDedicated_specs_1 = {
	sizeof(struct AntennaInfoDedicated),
	offsetof(struct AntennaInfoDedicated, _asn_ctx),
	asn_MAP_AntennaInfoDedicated_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_AntennaInfoDedicated_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_AntennaInfoDedicated = {
	"AntennaInfoDedicated",
	"AntennaInfoDedicated",
	&asn_OP_SEQUENCE,
	asn_DEF_AntennaInfoDedicated_tags_1,
	sizeof(asn_DEF_AntennaInfoDedicated_tags_1)
		/sizeof(asn_DEF_AntennaInfoDedicated_tags_1[0]), /* 1 */
	asn_DEF_AntennaInfoDedicated_tags_1,	/* Same as above */
	sizeof(asn_DEF_AntennaInfoDedicated_tags_1)
		/sizeof(asn_DEF_AntennaInfoDedicated_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_AntennaInfoDedicated_1,
	3,	/* Elements count */
	&asn_SPC_AntennaInfoDedicated_specs_1	/* Additional specs */
};

