/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "RRCConnectionResumeComplete-r13-IEs.h"

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
static int
memb_selectedPLMN_Identity_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 6)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_rlf_InfoAvailable_r13_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_logMeasAvailable_r13_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_connEstFailInfoAvailable_r13_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_mobilityState_r13_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_mobilityHistoryAvail_r13_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_logMeasAvailableMBSFN_r13_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_selectedPLMN_Identity_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  6 }	/* (1..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_rlf_InfoAvailable_r13_value2enum_4[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_rlf_InfoAvailable_r13_enum2value_4[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_rlf_InfoAvailable_r13_specs_4 = {
	asn_MAP_rlf_InfoAvailable_r13_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_rlf_InfoAvailable_r13_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_rlf_InfoAvailable_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rlf_InfoAvailable_r13_4 = {
	"rlf-InfoAvailable-r13",
	"rlf-InfoAvailable-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_rlf_InfoAvailable_r13_tags_4,
	sizeof(asn_DEF_rlf_InfoAvailable_r13_tags_4)
		/sizeof(asn_DEF_rlf_InfoAvailable_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_rlf_InfoAvailable_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_rlf_InfoAvailable_r13_tags_4)
		/sizeof(asn_DEF_rlf_InfoAvailable_r13_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_rlf_InfoAvailable_r13_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_rlf_InfoAvailable_r13_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_logMeasAvailable_r13_value2enum_6[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_logMeasAvailable_r13_enum2value_6[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_logMeasAvailable_r13_specs_6 = {
	asn_MAP_logMeasAvailable_r13_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_logMeasAvailable_r13_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_logMeasAvailable_r13_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_logMeasAvailable_r13_6 = {
	"logMeasAvailable-r13",
	"logMeasAvailable-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_logMeasAvailable_r13_tags_6,
	sizeof(asn_DEF_logMeasAvailable_r13_tags_6)
		/sizeof(asn_DEF_logMeasAvailable_r13_tags_6[0]) - 1, /* 1 */
	asn_DEF_logMeasAvailable_r13_tags_6,	/* Same as above */
	sizeof(asn_DEF_logMeasAvailable_r13_tags_6)
		/sizeof(asn_DEF_logMeasAvailable_r13_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_logMeasAvailable_r13_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_logMeasAvailable_r13_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_connEstFailInfoAvailable_r13_value2enum_8[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_connEstFailInfoAvailable_r13_enum2value_8[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_connEstFailInfoAvailable_r13_specs_8 = {
	asn_MAP_connEstFailInfoAvailable_r13_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_connEstFailInfoAvailable_r13_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_connEstFailInfoAvailable_r13_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_connEstFailInfoAvailable_r13_8 = {
	"connEstFailInfoAvailable-r13",
	"connEstFailInfoAvailable-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_connEstFailInfoAvailable_r13_tags_8,
	sizeof(asn_DEF_connEstFailInfoAvailable_r13_tags_8)
		/sizeof(asn_DEF_connEstFailInfoAvailable_r13_tags_8[0]) - 1, /* 1 */
	asn_DEF_connEstFailInfoAvailable_r13_tags_8,	/* Same as above */
	sizeof(asn_DEF_connEstFailInfoAvailable_r13_tags_8)
		/sizeof(asn_DEF_connEstFailInfoAvailable_r13_tags_8[0]), /* 2 */
	{ 0, &asn_PER_type_connEstFailInfoAvailable_r13_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_connEstFailInfoAvailable_r13_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_mobilityState_r13_value2enum_10[] = {
	{ 0,	6,	"normal" },
	{ 1,	6,	"medium" },
	{ 2,	4,	"high" },
	{ 3,	5,	"spare" }
};
static const unsigned int asn_MAP_mobilityState_r13_enum2value_10[] = {
	2,	/* high(2) */
	1,	/* medium(1) */
	0,	/* normal(0) */
	3	/* spare(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_mobilityState_r13_specs_10 = {
	asn_MAP_mobilityState_r13_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_mobilityState_r13_enum2value_10,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_mobilityState_r13_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mobilityState_r13_10 = {
	"mobilityState-r13",
	"mobilityState-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_mobilityState_r13_tags_10,
	sizeof(asn_DEF_mobilityState_r13_tags_10)
		/sizeof(asn_DEF_mobilityState_r13_tags_10[0]) - 1, /* 1 */
	asn_DEF_mobilityState_r13_tags_10,	/* Same as above */
	sizeof(asn_DEF_mobilityState_r13_tags_10)
		/sizeof(asn_DEF_mobilityState_r13_tags_10[0]), /* 2 */
	{ 0, &asn_PER_type_mobilityState_r13_constr_10, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_mobilityState_r13_specs_10	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_mobilityHistoryAvail_r13_value2enum_15[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_mobilityHistoryAvail_r13_enum2value_15[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_mobilityHistoryAvail_r13_specs_15 = {
	asn_MAP_mobilityHistoryAvail_r13_value2enum_15,	/* "tag" => N; sorted by tag */
	asn_MAP_mobilityHistoryAvail_r13_enum2value_15,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_mobilityHistoryAvail_r13_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mobilityHistoryAvail_r13_15 = {
	"mobilityHistoryAvail-r13",
	"mobilityHistoryAvail-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_mobilityHistoryAvail_r13_tags_15,
	sizeof(asn_DEF_mobilityHistoryAvail_r13_tags_15)
		/sizeof(asn_DEF_mobilityHistoryAvail_r13_tags_15[0]) - 1, /* 1 */
	asn_DEF_mobilityHistoryAvail_r13_tags_15,	/* Same as above */
	sizeof(asn_DEF_mobilityHistoryAvail_r13_tags_15)
		/sizeof(asn_DEF_mobilityHistoryAvail_r13_tags_15[0]), /* 2 */
	{ 0, &asn_PER_type_mobilityHistoryAvail_r13_constr_15, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_mobilityHistoryAvail_r13_specs_15	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_logMeasAvailableMBSFN_r13_value2enum_17[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_logMeasAvailableMBSFN_r13_enum2value_17[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_logMeasAvailableMBSFN_r13_specs_17 = {
	asn_MAP_logMeasAvailableMBSFN_r13_value2enum_17,	/* "tag" => N; sorted by tag */
	asn_MAP_logMeasAvailableMBSFN_r13_enum2value_17,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_logMeasAvailableMBSFN_r13_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_logMeasAvailableMBSFN_r13_17 = {
	"logMeasAvailableMBSFN-r13",
	"logMeasAvailableMBSFN-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_logMeasAvailableMBSFN_r13_tags_17,
	sizeof(asn_DEF_logMeasAvailableMBSFN_r13_tags_17)
		/sizeof(asn_DEF_logMeasAvailableMBSFN_r13_tags_17[0]) - 1, /* 1 */
	asn_DEF_logMeasAvailableMBSFN_r13_tags_17,	/* Same as above */
	sizeof(asn_DEF_logMeasAvailableMBSFN_r13_tags_17)
		/sizeof(asn_DEF_logMeasAvailableMBSFN_r13_tags_17[0]), /* 2 */
	{ 0, &asn_PER_type_logMeasAvailableMBSFN_r13_constr_17, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_logMeasAvailableMBSFN_r13_specs_17	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_20 = {
	sizeof(struct RRCConnectionResumeComplete_r13_IEs__nonCriticalExtension),
	offsetof(struct RRCConnectionResumeComplete_r13_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_20 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtension_tags_20,
	sizeof(asn_DEF_nonCriticalExtension_tags_20)
		/sizeof(asn_DEF_nonCriticalExtension_tags_20[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_20,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_20)
		/sizeof(asn_DEF_nonCriticalExtension_tags_20[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_20	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRCConnectionResumeComplete_r13_IEs_1[] = {
	{ ATF_POINTER, 10, offsetof(struct RRCConnectionResumeComplete_r13_IEs, selectedPLMN_Identity_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_selectedPLMN_Identity_r13_constr_2,  memb_selectedPLMN_Identity_r13_constraint_1 },
		0, 0, /* No default value */
		"selectedPLMN-Identity-r13"
		},
	{ ATF_POINTER, 9, offsetof(struct RRCConnectionResumeComplete_r13_IEs, dedicatedInfoNAS_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DedicatedInfoNAS,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dedicatedInfoNAS-r13"
		},
	{ ATF_POINTER, 8, offsetof(struct RRCConnectionResumeComplete_r13_IEs, rlf_InfoAvailable_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_rlf_InfoAvailable_r13_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlf-InfoAvailable-r13"
		},
	{ ATF_POINTER, 7, offsetof(struct RRCConnectionResumeComplete_r13_IEs, logMeasAvailable_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_logMeasAvailable_r13_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"logMeasAvailable-r13"
		},
	{ ATF_POINTER, 6, offsetof(struct RRCConnectionResumeComplete_r13_IEs, connEstFailInfoAvailable_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_connEstFailInfoAvailable_r13_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"connEstFailInfoAvailable-r13"
		},
	{ ATF_POINTER, 5, offsetof(struct RRCConnectionResumeComplete_r13_IEs, mobilityState_r13),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_mobilityState_r13_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mobilityState-r13"
		},
	{ ATF_POINTER, 4, offsetof(struct RRCConnectionResumeComplete_r13_IEs, mobilityHistoryAvail_r13),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_mobilityHistoryAvail_r13_15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mobilityHistoryAvail-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct RRCConnectionResumeComplete_r13_IEs, logMeasAvailableMBSFN_r13),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_logMeasAvailableMBSFN_r13_17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"logMeasAvailableMBSFN-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct RRCConnectionResumeComplete_r13_IEs, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionResumeComplete_r13_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_20,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_RRCConnectionResumeComplete_r13_IEs_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
static const ber_tlv_tag_t asn_DEF_RRCConnectionResumeComplete_r13_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRCConnectionResumeComplete_r13_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* selectedPLMN-Identity-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dedicatedInfoNAS-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rlf-InfoAvailable-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* logMeasAvailable-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* connEstFailInfoAvailable-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* mobilityState-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* mobilityHistoryAvail-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* logMeasAvailableMBSFN-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionResumeComplete_r13_IEs_specs_1 = {
	sizeof(struct RRCConnectionResumeComplete_r13_IEs),
	offsetof(struct RRCConnectionResumeComplete_r13_IEs, _asn_ctx),
	asn_MAP_RRCConnectionResumeComplete_r13_IEs_tag2el_1,
	10,	/* Count of tags in the map */
	asn_MAP_RRCConnectionResumeComplete_r13_IEs_oms_1,	/* Optional members */
	10, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRCConnectionResumeComplete_r13_IEs = {
	"RRCConnectionResumeComplete-r13-IEs",
	"RRCConnectionResumeComplete-r13-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_RRCConnectionResumeComplete_r13_IEs_tags_1,
	sizeof(asn_DEF_RRCConnectionResumeComplete_r13_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionResumeComplete_r13_IEs_tags_1[0]), /* 1 */
	asn_DEF_RRCConnectionResumeComplete_r13_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCConnectionResumeComplete_r13_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionResumeComplete_r13_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRCConnectionResumeComplete_r13_IEs_1,
	10,	/* Elements count */
	&asn_SPC_RRCConnectionResumeComplete_r13_IEs_specs_1	/* Additional specs */
};

