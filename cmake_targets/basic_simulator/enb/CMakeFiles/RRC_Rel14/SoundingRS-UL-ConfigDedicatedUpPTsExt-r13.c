/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "SoundingRS-UL-ConfigDedicatedUpPTsExt-r13.h"

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
memb_freqDomainPosition_r13_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 23)) {
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
memb_srs_ConfigIndex_r13_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1023)) {
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
memb_transmissionComb_r13_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_per_constraints_t asn_PER_type_srs_UpPtsAdd_r13_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_srs_Bandwidth_r13_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_srs_HoppingBandwidth_r13_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_cyclicShift_r13_constr_21 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  11 }	/* (0..11) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_transmissionCombNum_r13_constr_35 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_freqDomainPosition_r13_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  23 }	/* (0..23) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_srs_ConfigIndex_r13_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  1023 }	/* (0..1023) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_transmissionComb_r13_constr_20 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_SoundingRS_UL_ConfigDedicatedUpPTsExt_r13_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_srs_UpPtsAdd_r13_value2enum_4[] = {
	{ 0,	4,	"sym2" },
	{ 1,	4,	"sym4" }
};
static const unsigned int asn_MAP_srs_UpPtsAdd_r13_enum2value_4[] = {
	0,	/* sym2(0) */
	1	/* sym4(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_srs_UpPtsAdd_r13_specs_4 = {
	asn_MAP_srs_UpPtsAdd_r13_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_srs_UpPtsAdd_r13_enum2value_4,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_srs_UpPtsAdd_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_srs_UpPtsAdd_r13_4 = {
	"srs-UpPtsAdd-r13",
	"srs-UpPtsAdd-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_srs_UpPtsAdd_r13_tags_4,
	sizeof(asn_DEF_srs_UpPtsAdd_r13_tags_4)
		/sizeof(asn_DEF_srs_UpPtsAdd_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_srs_UpPtsAdd_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_srs_UpPtsAdd_r13_tags_4)
		/sizeof(asn_DEF_srs_UpPtsAdd_r13_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_srs_UpPtsAdd_r13_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_srs_UpPtsAdd_r13_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_srs_Bandwidth_r13_value2enum_7[] = {
	{ 0,	3,	"bw0" },
	{ 1,	3,	"bw1" },
	{ 2,	3,	"bw2" },
	{ 3,	3,	"bw3" }
};
static const unsigned int asn_MAP_srs_Bandwidth_r13_enum2value_7[] = {
	0,	/* bw0(0) */
	1,	/* bw1(1) */
	2,	/* bw2(2) */
	3	/* bw3(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_srs_Bandwidth_r13_specs_7 = {
	asn_MAP_srs_Bandwidth_r13_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_srs_Bandwidth_r13_enum2value_7,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_srs_Bandwidth_r13_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_srs_Bandwidth_r13_7 = {
	"srs-Bandwidth-r13",
	"srs-Bandwidth-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_srs_Bandwidth_r13_tags_7,
	sizeof(asn_DEF_srs_Bandwidth_r13_tags_7)
		/sizeof(asn_DEF_srs_Bandwidth_r13_tags_7[0]) - 1, /* 1 */
	asn_DEF_srs_Bandwidth_r13_tags_7,	/* Same as above */
	sizeof(asn_DEF_srs_Bandwidth_r13_tags_7)
		/sizeof(asn_DEF_srs_Bandwidth_r13_tags_7[0]), /* 2 */
	{ 0, &asn_PER_type_srs_Bandwidth_r13_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_srs_Bandwidth_r13_specs_7	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_srs_HoppingBandwidth_r13_value2enum_12[] = {
	{ 0,	4,	"hbw0" },
	{ 1,	4,	"hbw1" },
	{ 2,	4,	"hbw2" },
	{ 3,	4,	"hbw3" }
};
static const unsigned int asn_MAP_srs_HoppingBandwidth_r13_enum2value_12[] = {
	0,	/* hbw0(0) */
	1,	/* hbw1(1) */
	2,	/* hbw2(2) */
	3	/* hbw3(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_srs_HoppingBandwidth_r13_specs_12 = {
	asn_MAP_srs_HoppingBandwidth_r13_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_srs_HoppingBandwidth_r13_enum2value_12,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_srs_HoppingBandwidth_r13_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_srs_HoppingBandwidth_r13_12 = {
	"srs-HoppingBandwidth-r13",
	"srs-HoppingBandwidth-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_srs_HoppingBandwidth_r13_tags_12,
	sizeof(asn_DEF_srs_HoppingBandwidth_r13_tags_12)
		/sizeof(asn_DEF_srs_HoppingBandwidth_r13_tags_12[0]) - 1, /* 1 */
	asn_DEF_srs_HoppingBandwidth_r13_tags_12,	/* Same as above */
	sizeof(asn_DEF_srs_HoppingBandwidth_r13_tags_12)
		/sizeof(asn_DEF_srs_HoppingBandwidth_r13_tags_12[0]), /* 2 */
	{ 0, &asn_PER_type_srs_HoppingBandwidth_r13_constr_12, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_srs_HoppingBandwidth_r13_specs_12	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_cyclicShift_r13_value2enum_21[] = {
	{ 0,	3,	"cs0" },
	{ 1,	3,	"cs1" },
	{ 2,	3,	"cs2" },
	{ 3,	3,	"cs3" },
	{ 4,	3,	"cs4" },
	{ 5,	3,	"cs5" },
	{ 6,	3,	"cs6" },
	{ 7,	3,	"cs7" },
	{ 8,	3,	"cs8" },
	{ 9,	3,	"cs9" },
	{ 10,	4,	"cs10" },
	{ 11,	4,	"cs11" }
};
static const unsigned int asn_MAP_cyclicShift_r13_enum2value_21[] = {
	0,	/* cs0(0) */
	1,	/* cs1(1) */
	10,	/* cs10(10) */
	11,	/* cs11(11) */
	2,	/* cs2(2) */
	3,	/* cs3(3) */
	4,	/* cs4(4) */
	5,	/* cs5(5) */
	6,	/* cs6(6) */
	7,	/* cs7(7) */
	8,	/* cs8(8) */
	9	/* cs9(9) */
};
static const asn_INTEGER_specifics_t asn_SPC_cyclicShift_r13_specs_21 = {
	asn_MAP_cyclicShift_r13_value2enum_21,	/* "tag" => N; sorted by tag */
	asn_MAP_cyclicShift_r13_enum2value_21,	/* N => "tag"; sorted by N */
	12,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_cyclicShift_r13_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cyclicShift_r13_21 = {
	"cyclicShift-r13",
	"cyclicShift-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_cyclicShift_r13_tags_21,
	sizeof(asn_DEF_cyclicShift_r13_tags_21)
		/sizeof(asn_DEF_cyclicShift_r13_tags_21[0]) - 1, /* 1 */
	asn_DEF_cyclicShift_r13_tags_21,	/* Same as above */
	sizeof(asn_DEF_cyclicShift_r13_tags_21)
		/sizeof(asn_DEF_cyclicShift_r13_tags_21[0]), /* 2 */
	{ 0, &asn_PER_type_cyclicShift_r13_constr_21, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_cyclicShift_r13_specs_21	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_transmissionCombNum_r13_value2enum_35[] = {
	{ 0,	2,	"n2" },
	{ 1,	2,	"n4" }
};
static const unsigned int asn_MAP_transmissionCombNum_r13_enum2value_35[] = {
	0,	/* n2(0) */
	1	/* n4(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_transmissionCombNum_r13_specs_35 = {
	asn_MAP_transmissionCombNum_r13_value2enum_35,	/* "tag" => N; sorted by tag */
	asn_MAP_transmissionCombNum_r13_enum2value_35,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_transmissionCombNum_r13_tags_35[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_transmissionCombNum_r13_35 = {
	"transmissionCombNum-r13",
	"transmissionCombNum-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_transmissionCombNum_r13_tags_35,
	sizeof(asn_DEF_transmissionCombNum_r13_tags_35)
		/sizeof(asn_DEF_transmissionCombNum_r13_tags_35[0]) - 1, /* 1 */
	asn_DEF_transmissionCombNum_r13_tags_35,	/* Same as above */
	sizeof(asn_DEF_transmissionCombNum_r13_tags_35)
		/sizeof(asn_DEF_transmissionCombNum_r13_tags_35[0]), /* 2 */
	{ 0, &asn_PER_type_transmissionCombNum_r13_constr_35, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_transmissionCombNum_r13_specs_35	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup, srs_UpPtsAdd_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_srs_UpPtsAdd_r13_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"srs-UpPtsAdd-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup, srs_Bandwidth_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_srs_Bandwidth_r13_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"srs-Bandwidth-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup, srs_HoppingBandwidth_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_srs_HoppingBandwidth_r13_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"srs-HoppingBandwidth-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup, freqDomainPosition_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_freqDomainPosition_r13_constr_17,  memb_freqDomainPosition_r13_constraint_3 },
		0, 0, /* No default value */
		"freqDomainPosition-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup, duration_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"duration-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup, srs_ConfigIndex_r13),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_srs_ConfigIndex_r13_constr_19,  memb_srs_ConfigIndex_r13_constraint_3 },
		0, 0, /* No default value */
		"srs-ConfigIndex-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup, transmissionComb_r13),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_transmissionComb_r13_constr_20,  memb_transmissionComb_r13_constraint_3 },
		0, 0, /* No default value */
		"transmissionComb-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup, cyclicShift_r13),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cyclicShift_r13_21,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cyclicShift-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup, srs_AntennaPort_r13),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SRS_AntennaPort,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"srs-AntennaPort-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup, transmissionCombNum_r13),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_transmissionCombNum_r13_35,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"transmissionCombNum-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* srs-UpPtsAdd-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* srs-Bandwidth-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* srs-HoppingBandwidth-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* freqDomainPosition-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* duration-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* srs-ConfigIndex-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* transmissionComb-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* cyclicShift-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* srs-AntennaPort-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* transmissionCombNum-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_3 = {
	sizeof(struct SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup),
	offsetof(struct SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup, _asn_ctx),
	asn_MAP_setup_tag2el_3,
	10,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_3 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_setup_tags_3,
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]) - 1, /* 1 */
	asn_DEF_setup_tags_3,	/* Same as above */
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_setup_3,
	10,	/* Elements count */
	&asn_SPC_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SoundingRS_UL_ConfigDedicatedUpPTsExt_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SoundingRS_UL_ConfigDedicatedUpPTsExt_r13, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SoundingRS_UL_ConfigDedicatedUpPTsExt_r13, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_SoundingRS_UL_ConfigDedicatedUpPTsExt_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_SoundingRS_UL_ConfigDedicatedUpPTsExt_r13_specs_1 = {
	sizeof(struct SoundingRS_UL_ConfigDedicatedUpPTsExt_r13),
	offsetof(struct SoundingRS_UL_ConfigDedicatedUpPTsExt_r13, _asn_ctx),
	offsetof(struct SoundingRS_UL_ConfigDedicatedUpPTsExt_r13, present),
	sizeof(((struct SoundingRS_UL_ConfigDedicatedUpPTsExt_r13 *)0)->present),
	asn_MAP_SoundingRS_UL_ConfigDedicatedUpPTsExt_r13_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_SoundingRS_UL_ConfigDedicatedUpPTsExt_r13 = {
	"SoundingRS-UL-ConfigDedicatedUpPTsExt-r13",
	"SoundingRS-UL-ConfigDedicatedUpPTsExt-r13",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_SoundingRS_UL_ConfigDedicatedUpPTsExt_r13_constr_1, CHOICE_constraint },
	asn_MBR_SoundingRS_UL_ConfigDedicatedUpPTsExt_r13_1,
	2,	/* Elements count */
	&asn_SPC_SoundingRS_UL_ConfigDedicatedUpPTsExt_r13_specs_1	/* Additional specs */
};

