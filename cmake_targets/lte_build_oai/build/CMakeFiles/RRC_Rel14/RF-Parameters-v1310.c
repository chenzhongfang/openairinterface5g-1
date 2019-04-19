/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "RF-Parameters-v1310.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_requestedCCsDL_r13_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 2 && value <= 32)) {
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
memb_requestedCCsUL_r13_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 2 && value <= 32)) {
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
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_reducedIntNonContCombRequested_r13_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_skipFallbackCombRequested_r13_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_requestedCCsDL_r13_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  2,  32 }	/* (2..32) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_requestedCCsUL_r13_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  2,  32 }	/* (2..32) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_maximumCCsRetrieval_r13_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_skipFallbackCombinations_r13_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_reducedIntNonContComb_r13_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_reducedIntNonContCombRequested_r13_value2enum_3[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_reducedIntNonContCombRequested_r13_enum2value_3[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_reducedIntNonContCombRequested_r13_specs_3 = {
	asn_MAP_reducedIntNonContCombRequested_r13_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_reducedIntNonContCombRequested_r13_enum2value_3,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_reducedIntNonContCombRequested_r13_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_reducedIntNonContCombRequested_r13_3 = {
	"reducedIntNonContCombRequested-r13",
	"reducedIntNonContCombRequested-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_reducedIntNonContCombRequested_r13_tags_3,
	sizeof(asn_DEF_reducedIntNonContCombRequested_r13_tags_3)
		/sizeof(asn_DEF_reducedIntNonContCombRequested_r13_tags_3[0]) - 1, /* 1 */
	asn_DEF_reducedIntNonContCombRequested_r13_tags_3,	/* Same as above */
	sizeof(asn_DEF_reducedIntNonContCombRequested_r13_tags_3)
		/sizeof(asn_DEF_reducedIntNonContCombRequested_r13_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_reducedIntNonContCombRequested_r13_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_reducedIntNonContCombRequested_r13_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_skipFallbackCombRequested_r13_value2enum_7[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_skipFallbackCombRequested_r13_enum2value_7[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_skipFallbackCombRequested_r13_specs_7 = {
	asn_MAP_skipFallbackCombRequested_r13_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_skipFallbackCombRequested_r13_enum2value_7,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_skipFallbackCombRequested_r13_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_skipFallbackCombRequested_r13_7 = {
	"skipFallbackCombRequested-r13",
	"skipFallbackCombRequested-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_skipFallbackCombRequested_r13_tags_7,
	sizeof(asn_DEF_skipFallbackCombRequested_r13_tags_7)
		/sizeof(asn_DEF_skipFallbackCombRequested_r13_tags_7[0]) - 1, /* 1 */
	asn_DEF_skipFallbackCombRequested_r13_tags_7,	/* Same as above */
	sizeof(asn_DEF_skipFallbackCombRequested_r13_tags_7)
		/sizeof(asn_DEF_skipFallbackCombRequested_r13_tags_7[0]), /* 2 */
	{ 0, &asn_PER_type_skipFallbackCombRequested_r13_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_skipFallbackCombRequested_r13_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_eNB_RequestedParameters_r13_2[] = {
	{ ATF_POINTER, 4, offsetof(struct RF_Parameters_v1310__eNB_RequestedParameters_r13, reducedIntNonContCombRequested_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_reducedIntNonContCombRequested_r13_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reducedIntNonContCombRequested-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct RF_Parameters_v1310__eNB_RequestedParameters_r13, requestedCCsDL_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_requestedCCsDL_r13_constr_5,  memb_requestedCCsDL_r13_constraint_2 },
		0, 0, /* No default value */
		"requestedCCsDL-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct RF_Parameters_v1310__eNB_RequestedParameters_r13, requestedCCsUL_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_requestedCCsUL_r13_constr_6,  memb_requestedCCsUL_r13_constraint_2 },
		0, 0, /* No default value */
		"requestedCCsUL-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct RF_Parameters_v1310__eNB_RequestedParameters_r13, skipFallbackCombRequested_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_skipFallbackCombRequested_r13_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"skipFallbackCombRequested-r13"
		},
};
static const int asn_MAP_eNB_RequestedParameters_r13_oms_2[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_eNB_RequestedParameters_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_eNB_RequestedParameters_r13_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* reducedIntNonContCombRequested-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* requestedCCsDL-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* requestedCCsUL-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* skipFallbackCombRequested-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_eNB_RequestedParameters_r13_specs_2 = {
	sizeof(struct RF_Parameters_v1310__eNB_RequestedParameters_r13),
	offsetof(struct RF_Parameters_v1310__eNB_RequestedParameters_r13, _asn_ctx),
	asn_MAP_eNB_RequestedParameters_r13_tag2el_2,
	4,	/* Count of tags in the map */
	asn_MAP_eNB_RequestedParameters_r13_oms_2,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_eNB_RequestedParameters_r13_2 = {
	"eNB-RequestedParameters-r13",
	"eNB-RequestedParameters-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_eNB_RequestedParameters_r13_tags_2,
	sizeof(asn_DEF_eNB_RequestedParameters_r13_tags_2)
		/sizeof(asn_DEF_eNB_RequestedParameters_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_eNB_RequestedParameters_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_eNB_RequestedParameters_r13_tags_2)
		/sizeof(asn_DEF_eNB_RequestedParameters_r13_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_eNB_RequestedParameters_r13_2,
	4,	/* Elements count */
	&asn_SPC_eNB_RequestedParameters_r13_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_maximumCCsRetrieval_r13_value2enum_9[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_maximumCCsRetrieval_r13_enum2value_9[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_maximumCCsRetrieval_r13_specs_9 = {
	asn_MAP_maximumCCsRetrieval_r13_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_maximumCCsRetrieval_r13_enum2value_9,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_maximumCCsRetrieval_r13_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_maximumCCsRetrieval_r13_9 = {
	"maximumCCsRetrieval-r13",
	"maximumCCsRetrieval-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_maximumCCsRetrieval_r13_tags_9,
	sizeof(asn_DEF_maximumCCsRetrieval_r13_tags_9)
		/sizeof(asn_DEF_maximumCCsRetrieval_r13_tags_9[0]) - 1, /* 1 */
	asn_DEF_maximumCCsRetrieval_r13_tags_9,	/* Same as above */
	sizeof(asn_DEF_maximumCCsRetrieval_r13_tags_9)
		/sizeof(asn_DEF_maximumCCsRetrieval_r13_tags_9[0]), /* 2 */
	{ 0, &asn_PER_type_maximumCCsRetrieval_r13_constr_9, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_maximumCCsRetrieval_r13_specs_9	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_skipFallbackCombinations_r13_value2enum_11[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_skipFallbackCombinations_r13_enum2value_11[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_skipFallbackCombinations_r13_specs_11 = {
	asn_MAP_skipFallbackCombinations_r13_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_skipFallbackCombinations_r13_enum2value_11,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_skipFallbackCombinations_r13_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_skipFallbackCombinations_r13_11 = {
	"skipFallbackCombinations-r13",
	"skipFallbackCombinations-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_skipFallbackCombinations_r13_tags_11,
	sizeof(asn_DEF_skipFallbackCombinations_r13_tags_11)
		/sizeof(asn_DEF_skipFallbackCombinations_r13_tags_11[0]) - 1, /* 1 */
	asn_DEF_skipFallbackCombinations_r13_tags_11,	/* Same as above */
	sizeof(asn_DEF_skipFallbackCombinations_r13_tags_11)
		/sizeof(asn_DEF_skipFallbackCombinations_r13_tags_11[0]), /* 2 */
	{ 0, &asn_PER_type_skipFallbackCombinations_r13_constr_11, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_skipFallbackCombinations_r13_specs_11	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_reducedIntNonContComb_r13_value2enum_13[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_reducedIntNonContComb_r13_enum2value_13[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_reducedIntNonContComb_r13_specs_13 = {
	asn_MAP_reducedIntNonContComb_r13_value2enum_13,	/* "tag" => N; sorted by tag */
	asn_MAP_reducedIntNonContComb_r13_enum2value_13,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_reducedIntNonContComb_r13_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_reducedIntNonContComb_r13_13 = {
	"reducedIntNonContComb-r13",
	"reducedIntNonContComb-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_reducedIntNonContComb_r13_tags_13,
	sizeof(asn_DEF_reducedIntNonContComb_r13_tags_13)
		/sizeof(asn_DEF_reducedIntNonContComb_r13_tags_13[0]) - 1, /* 1 */
	asn_DEF_reducedIntNonContComb_r13_tags_13,	/* Same as above */
	sizeof(asn_DEF_reducedIntNonContComb_r13_tags_13)
		/sizeof(asn_DEF_reducedIntNonContComb_r13_tags_13[0]), /* 2 */
	{ 0, &asn_PER_type_reducedIntNonContComb_r13_constr_13, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_reducedIntNonContComb_r13_specs_13	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RF_Parameters_v1310_1[] = {
	{ ATF_POINTER, 6, offsetof(struct RF_Parameters_v1310, eNB_RequestedParameters_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_eNB_RequestedParameters_r13_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eNB-RequestedParameters-r13"
		},
	{ ATF_POINTER, 5, offsetof(struct RF_Parameters_v1310, maximumCCsRetrieval_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_maximumCCsRetrieval_r13_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maximumCCsRetrieval-r13"
		},
	{ ATF_POINTER, 4, offsetof(struct RF_Parameters_v1310, skipFallbackCombinations_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_skipFallbackCombinations_r13_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"skipFallbackCombinations-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct RF_Parameters_v1310, reducedIntNonContComb_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_reducedIntNonContComb_r13_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reducedIntNonContComb-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct RF_Parameters_v1310, supportedBandListEUTRA_v1310),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SupportedBandListEUTRA_v1310,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedBandListEUTRA-v1310"
		},
	{ ATF_POINTER, 1, offsetof(struct RF_Parameters_v1310, supportedBandCombinationReduced_r13),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SupportedBandCombinationReduced_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedBandCombinationReduced-r13"
		},
};
static const int asn_MAP_RF_Parameters_v1310_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_RF_Parameters_v1310_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RF_Parameters_v1310_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eNB-RequestedParameters-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* maximumCCsRetrieval-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* skipFallbackCombinations-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* reducedIntNonContComb-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* supportedBandListEUTRA-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* supportedBandCombinationReduced-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_RF_Parameters_v1310_specs_1 = {
	sizeof(struct RF_Parameters_v1310),
	offsetof(struct RF_Parameters_v1310, _asn_ctx),
	asn_MAP_RF_Parameters_v1310_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_RF_Parameters_v1310_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RF_Parameters_v1310 = {
	"RF-Parameters-v1310",
	"RF-Parameters-v1310",
	&asn_OP_SEQUENCE,
	asn_DEF_RF_Parameters_v1310_tags_1,
	sizeof(asn_DEF_RF_Parameters_v1310_tags_1)
		/sizeof(asn_DEF_RF_Parameters_v1310_tags_1[0]), /* 1 */
	asn_DEF_RF_Parameters_v1310_tags_1,	/* Same as above */
	sizeof(asn_DEF_RF_Parameters_v1310_tags_1)
		/sizeof(asn_DEF_RF_Parameters_v1310_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RF_Parameters_v1310_1,
	6,	/* Elements count */
	&asn_SPC_RF_Parameters_v1310_specs_1	/* Additional specs */
};

