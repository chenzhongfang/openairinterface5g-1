/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "SL-PSSCH-TxParameters-r14.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_minMCS_PSSCH_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 31)) {
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
memb_maxMCS_PSSCH_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 31)) {
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
memb_minSubChannel_NumberPSSCH_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 20)) {
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
memb_maxSubchannel_NumberPSSCH_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 20)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_allowedRetxNumberPSSCH_r14_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_minMCS_PSSCH_r14_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_maxMCS_PSSCH_r14_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_minSubChannel_NumberPSSCH_r14_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  1,  20 }	/* (1..20) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_maxSubchannel_NumberPSSCH_r14_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  1,  20 }	/* (1..20) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_allowedRetxNumberPSSCH_r14_value2enum_6[] = {
	{ 0,	2,	"n0" },
	{ 1,	2,	"n1" },
	{ 2,	4,	"both" },
	{ 3,	6,	"spare1" }
};
static const unsigned int asn_MAP_allowedRetxNumberPSSCH_r14_enum2value_6[] = {
	2,	/* both(2) */
	0,	/* n0(0) */
	1,	/* n1(1) */
	3	/* spare1(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_allowedRetxNumberPSSCH_r14_specs_6 = {
	asn_MAP_allowedRetxNumberPSSCH_r14_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_allowedRetxNumberPSSCH_r14_enum2value_6,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_allowedRetxNumberPSSCH_r14_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_allowedRetxNumberPSSCH_r14_6 = {
	"allowedRetxNumberPSSCH-r14",
	"allowedRetxNumberPSSCH-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_allowedRetxNumberPSSCH_r14_tags_6,
	sizeof(asn_DEF_allowedRetxNumberPSSCH_r14_tags_6)
		/sizeof(asn_DEF_allowedRetxNumberPSSCH_r14_tags_6[0]) - 1, /* 1 */
	asn_DEF_allowedRetxNumberPSSCH_r14_tags_6,	/* Same as above */
	sizeof(asn_DEF_allowedRetxNumberPSSCH_r14_tags_6)
		/sizeof(asn_DEF_allowedRetxNumberPSSCH_r14_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_allowedRetxNumberPSSCH_r14_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_allowedRetxNumberPSSCH_r14_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SL_PSSCH_TxParameters_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PSSCH_TxParameters_r14, minMCS_PSSCH_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_minMCS_PSSCH_r14_constr_2,  memb_minMCS_PSSCH_r14_constraint_1 },
		0, 0, /* No default value */
		"minMCS-PSSCH-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PSSCH_TxParameters_r14, maxMCS_PSSCH_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_maxMCS_PSSCH_r14_constr_3,  memb_maxMCS_PSSCH_r14_constraint_1 },
		0, 0, /* No default value */
		"maxMCS-PSSCH-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PSSCH_TxParameters_r14, minSubChannel_NumberPSSCH_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_minSubChannel_NumberPSSCH_r14_constr_4,  memb_minSubChannel_NumberPSSCH_r14_constraint_1 },
		0, 0, /* No default value */
		"minSubChannel-NumberPSSCH-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PSSCH_TxParameters_r14, maxSubchannel_NumberPSSCH_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_maxSubchannel_NumberPSSCH_r14_constr_5,  memb_maxSubchannel_NumberPSSCH_r14_constraint_1 },
		0, 0, /* No default value */
		"maxSubchannel-NumberPSSCH-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PSSCH_TxParameters_r14, allowedRetxNumberPSSCH_r14),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_allowedRetxNumberPSSCH_r14_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"allowedRetxNumberPSSCH-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_PSSCH_TxParameters_r14, maxTxPower_r14),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SL_TxPower_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxTxPower-r14"
		},
};
static const int asn_MAP_SL_PSSCH_TxParameters_r14_oms_1[] = { 5 };
static const ber_tlv_tag_t asn_DEF_SL_PSSCH_TxParameters_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_PSSCH_TxParameters_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* minMCS-PSSCH-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* maxMCS-PSSCH-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* minSubChannel-NumberPSSCH-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* maxSubchannel-NumberPSSCH-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* allowedRetxNumberPSSCH-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* maxTxPower-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_SL_PSSCH_TxParameters_r14_specs_1 = {
	sizeof(struct SL_PSSCH_TxParameters_r14),
	offsetof(struct SL_PSSCH_TxParameters_r14, _asn_ctx),
	asn_MAP_SL_PSSCH_TxParameters_r14_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_SL_PSSCH_TxParameters_r14_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_PSSCH_TxParameters_r14 = {
	"SL-PSSCH-TxParameters-r14",
	"SL-PSSCH-TxParameters-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_PSSCH_TxParameters_r14_tags_1,
	sizeof(asn_DEF_SL_PSSCH_TxParameters_r14_tags_1)
		/sizeof(asn_DEF_SL_PSSCH_TxParameters_r14_tags_1[0]), /* 1 */
	asn_DEF_SL_PSSCH_TxParameters_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_PSSCH_TxParameters_r14_tags_1)
		/sizeof(asn_DEF_SL_PSSCH_TxParameters_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SL_PSSCH_TxParameters_r14_1,
	6,	/* Elements count */
	&asn_SPC_SL_PSSCH_TxParameters_r14_specs_1	/* Additional specs */
};

