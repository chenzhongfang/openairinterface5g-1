/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-Sidelink-Preconf"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#include "SL-PreconfigGeneral-r12.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_reserved_r12_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 19)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_sl_bandwidth_r12_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_reserved_r12_constr_21 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  19,  19 }	/* (SIZE(19..19)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_rohc_Profiles_r12_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PreconfigGeneral_r12__rohc_Profiles_r12, profile0x0001_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"profile0x0001-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PreconfigGeneral_r12__rohc_Profiles_r12, profile0x0002_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"profile0x0002-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PreconfigGeneral_r12__rohc_Profiles_r12, profile0x0004_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"profile0x0004-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PreconfigGeneral_r12__rohc_Profiles_r12, profile0x0006_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"profile0x0006-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PreconfigGeneral_r12__rohc_Profiles_r12, profile0x0101_r12),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"profile0x0101-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PreconfigGeneral_r12__rohc_Profiles_r12, profile0x0102_r12),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"profile0x0102-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PreconfigGeneral_r12__rohc_Profiles_r12, profile0x0104_r12),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"profile0x0104-r12"
		},
};
static const ber_tlv_tag_t asn_DEF_rohc_Profiles_r12_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_rohc_Profiles_r12_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* profile0x0001-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* profile0x0002-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* profile0x0004-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* profile0x0006-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* profile0x0101-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* profile0x0102-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* profile0x0104-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_rohc_Profiles_r12_specs_2 = {
	sizeof(struct SL_PreconfigGeneral_r12__rohc_Profiles_r12),
	offsetof(struct SL_PreconfigGeneral_r12__rohc_Profiles_r12, _asn_ctx),
	asn_MAP_rohc_Profiles_r12_tag2el_2,
	7,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rohc_Profiles_r12_2 = {
	"rohc-Profiles-r12",
	"rohc-Profiles-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_rohc_Profiles_r12_tags_2,
	sizeof(asn_DEF_rohc_Profiles_r12_tags_2)
		/sizeof(asn_DEF_rohc_Profiles_r12_tags_2[0]) - 1, /* 1 */
	asn_DEF_rohc_Profiles_r12_tags_2,	/* Same as above */
	sizeof(asn_DEF_rohc_Profiles_r12_tags_2)
		/sizeof(asn_DEF_rohc_Profiles_r12_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_rohc_Profiles_r12_2,
	7,	/* Elements count */
	&asn_SPC_rohc_Profiles_r12_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_sl_bandwidth_r12_value2enum_13[] = {
	{ 0,	2,	"n6" },
	{ 1,	3,	"n15" },
	{ 2,	3,	"n25" },
	{ 3,	3,	"n50" },
	{ 4,	3,	"n75" },
	{ 5,	4,	"n100" }
};
static const unsigned int asn_MAP_sl_bandwidth_r12_enum2value_13[] = {
	5,	/* n100(5) */
	1,	/* n15(1) */
	2,	/* n25(2) */
	3,	/* n50(3) */
	0,	/* n6(0) */
	4	/* n75(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_sl_bandwidth_r12_specs_13 = {
	asn_MAP_sl_bandwidth_r12_value2enum_13,	/* "tag" => N; sorted by tag */
	asn_MAP_sl_bandwidth_r12_enum2value_13,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_sl_bandwidth_r12_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sl_bandwidth_r12_13 = {
	"sl-bandwidth-r12",
	"sl-bandwidth-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_sl_bandwidth_r12_tags_13,
	sizeof(asn_DEF_sl_bandwidth_r12_tags_13)
		/sizeof(asn_DEF_sl_bandwidth_r12_tags_13[0]) - 1, /* 1 */
	asn_DEF_sl_bandwidth_r12_tags_13,	/* Same as above */
	sizeof(asn_DEF_sl_bandwidth_r12_tags_13)
		/sizeof(asn_DEF_sl_bandwidth_r12_tags_13[0]), /* 2 */
	{ 0, &asn_PER_type_sl_bandwidth_r12_constr_13, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sl_bandwidth_r12_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_23[] = {
	{ ATF_POINTER, 1, offsetof(struct SL_PreconfigGeneral_r12__ext1, additionalSpectrumEmission_v1440),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AdditionalSpectrumEmission_v10l0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"additionalSpectrumEmission-v1440"
		},
};
static const int asn_MAP_ext1_oms_23[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_23[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_23[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* additionalSpectrumEmission-v1440 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_23 = {
	sizeof(struct SL_PreconfigGeneral_r12__ext1),
	offsetof(struct SL_PreconfigGeneral_r12__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_23,
	1,	/* Count of tags in the map */
	asn_MAP_ext1_oms_23,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_23 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_23,
	sizeof(asn_DEF_ext1_tags_23)
		/sizeof(asn_DEF_ext1_tags_23[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_23,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_23)
		/sizeof(asn_DEF_ext1_tags_23[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext1_23,
	1,	/* Elements count */
	&asn_SPC_ext1_specs_23	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SL_PreconfigGeneral_r12_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PreconfigGeneral_r12, rohc_Profiles_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_rohc_Profiles_r12_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rohc-Profiles-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PreconfigGeneral_r12, carrierFreq_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreq-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PreconfigGeneral_r12, maxTxPower_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_P_Max,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxTxPower-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PreconfigGeneral_r12, additionalSpectrumEmission_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AdditionalSpectrumEmission,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"additionalSpectrumEmission-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PreconfigGeneral_r12, sl_bandwidth_r12),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sl_bandwidth_r12_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-bandwidth-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PreconfigGeneral_r12, tdd_ConfigSL_r12),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TDD_ConfigSL_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd-ConfigSL-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PreconfigGeneral_r12, reserved_r12),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_reserved_r12_constr_21,  memb_reserved_r12_constraint_1 },
		0, 0, /* No default value */
		"reserved-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_PreconfigGeneral_r12, ext1),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_ext1_23,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_SL_PreconfigGeneral_r12_oms_1[] = { 7 };
static const ber_tlv_tag_t asn_DEF_SL_PreconfigGeneral_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_PreconfigGeneral_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rohc-Profiles-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* carrierFreq-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* maxTxPower-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* additionalSpectrumEmission-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sl-bandwidth-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* tdd-ConfigSL-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* reserved-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_SL_PreconfigGeneral_r12_specs_1 = {
	sizeof(struct SL_PreconfigGeneral_r12),
	offsetof(struct SL_PreconfigGeneral_r12, _asn_ctx),
	asn_MAP_SL_PreconfigGeneral_r12_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_SL_PreconfigGeneral_r12_oms_1,	/* Optional members */
	0, 1,	/* Root/Additions */
	7,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_PreconfigGeneral_r12 = {
	"SL-PreconfigGeneral-r12",
	"SL-PreconfigGeneral-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_PreconfigGeneral_r12_tags_1,
	sizeof(asn_DEF_SL_PreconfigGeneral_r12_tags_1)
		/sizeof(asn_DEF_SL_PreconfigGeneral_r12_tags_1[0]), /* 1 */
	asn_DEF_SL_PreconfigGeneral_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_PreconfigGeneral_r12_tags_1)
		/sizeof(asn_DEF_SL_PreconfigGeneral_r12_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SL_PreconfigGeneral_r12_1,
	8,	/* Elements count */
	&asn_SPC_SL_PreconfigGeneral_r12_specs_1	/* Additional specs */
};

