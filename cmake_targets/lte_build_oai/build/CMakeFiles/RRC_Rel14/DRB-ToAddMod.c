/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "DRB-ToAddMod.h"

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
memb_eps_BearerIdentity_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
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
memb_logicalChannelIdentity_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 3 && value <= 10)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_drb_TypeChange_r12_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_drb_TypeLWIP_r13_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_lwa_WLAN_AC_r14_constr_25 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_eps_BearerIdentity_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_logicalChannelIdentity_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  3,  10 }	/* (3..10) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_drb_TypeChange_r12_value2enum_10[] = {
	{ 0,	5,	"toMCG" }
};
static const unsigned int asn_MAP_drb_TypeChange_r12_enum2value_10[] = {
	0	/* toMCG(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_drb_TypeChange_r12_specs_10 = {
	asn_MAP_drb_TypeChange_r12_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_drb_TypeChange_r12_enum2value_10,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_drb_TypeChange_r12_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_drb_TypeChange_r12_10 = {
	"drb-TypeChange-r12",
	"drb-TypeChange-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_drb_TypeChange_r12_tags_10,
	sizeof(asn_DEF_drb_TypeChange_r12_tags_10)
		/sizeof(asn_DEF_drb_TypeChange_r12_tags_10[0]) - 1, /* 1 */
	asn_DEF_drb_TypeChange_r12_tags_10,	/* Same as above */
	sizeof(asn_DEF_drb_TypeChange_r12_tags_10)
		/sizeof(asn_DEF_drb_TypeChange_r12_tags_10[0]), /* 2 */
	{ 0, &asn_PER_type_drb_TypeChange_r12_constr_10, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_drb_TypeChange_r12_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_9[] = {
	{ ATF_POINTER, 2, offsetof(struct DRB_ToAddMod__ext1, drb_TypeChange_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_drb_TypeChange_r12_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drb-TypeChange-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct DRB_ToAddMod__ext1, rlc_Config_v1250),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RLC_Config_v1250,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlc-Config-v1250"
		},
};
static const int asn_MAP_ext1_oms_9[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* drb-TypeChange-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* rlc-Config-v1250 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_9 = {
	sizeof(struct DRB_ToAddMod__ext1),
	offsetof(struct DRB_ToAddMod__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_9,
	2,	/* Count of tags in the map */
	asn_MAP_ext1_oms_9,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_9 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_9,
	sizeof(asn_DEF_ext1_tags_9)
		/sizeof(asn_DEF_ext1_tags_9[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_9,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_9)
		/sizeof(asn_DEF_ext1_tags_9[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext1_9,
	2,	/* Elements count */
	&asn_SPC_ext1_specs_9	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_drb_TypeLWIP_r13_value2enum_16[] = {
	{ 0,	4,	"lwip" },
	{ 1,	12,	"lwip-DL-only" },
	{ 2,	12,	"lwip-UL-only" },
	{ 3,	6,	"eutran" }
};
static const unsigned int asn_MAP_drb_TypeLWIP_r13_enum2value_16[] = {
	3,	/* eutran(3) */
	0,	/* lwip(0) */
	1,	/* lwip-DL-only(1) */
	2	/* lwip-UL-only(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_drb_TypeLWIP_r13_specs_16 = {
	asn_MAP_drb_TypeLWIP_r13_value2enum_16,	/* "tag" => N; sorted by tag */
	asn_MAP_drb_TypeLWIP_r13_enum2value_16,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_drb_TypeLWIP_r13_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_drb_TypeLWIP_r13_16 = {
	"drb-TypeLWIP-r13",
	"drb-TypeLWIP-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_drb_TypeLWIP_r13_tags_16,
	sizeof(asn_DEF_drb_TypeLWIP_r13_tags_16)
		/sizeof(asn_DEF_drb_TypeLWIP_r13_tags_16[0]) - 1, /* 1 */
	asn_DEF_drb_TypeLWIP_r13_tags_16,	/* Same as above */
	sizeof(asn_DEF_drb_TypeLWIP_r13_tags_16)
		/sizeof(asn_DEF_drb_TypeLWIP_r13_tags_16[0]), /* 2 */
	{ 0, &asn_PER_type_drb_TypeLWIP_r13_constr_16, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_drb_TypeLWIP_r13_specs_16	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext2_13[] = {
	{ ATF_POINTER, 3, offsetof(struct DRB_ToAddMod__ext2, rlc_Config_v1310),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RLC_Config_v1310,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlc-Config-v1310"
		},
	{ ATF_POINTER, 2, offsetof(struct DRB_ToAddMod__ext2, drb_TypeLWA_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drb-TypeLWA-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct DRB_ToAddMod__ext2, drb_TypeLWIP_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_drb_TypeLWIP_r13_16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drb-TypeLWIP-r13"
		},
};
static const int asn_MAP_ext2_oms_13[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_ext2_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext2_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rlc-Config-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* drb-TypeLWA-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* drb-TypeLWIP-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext2_specs_13 = {
	sizeof(struct DRB_ToAddMod__ext2),
	offsetof(struct DRB_ToAddMod__ext2, _asn_ctx),
	asn_MAP_ext2_tag2el_13,
	3,	/* Count of tags in the map */
	asn_MAP_ext2_oms_13,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext2_13 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_ext2_tags_13,
	sizeof(asn_DEF_ext2_tags_13)
		/sizeof(asn_DEF_ext2_tags_13[0]) - 1, /* 1 */
	asn_DEF_ext2_tags_13,	/* Same as above */
	sizeof(asn_DEF_ext2_tags_13)
		/sizeof(asn_DEF_ext2_tags_13[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext2_13,
	3,	/* Elements count */
	&asn_SPC_ext2_specs_13	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_lwa_WLAN_AC_r14_value2enum_25[] = {
	{ 0,	5,	"ac-bk" },
	{ 1,	5,	"ac-be" },
	{ 2,	5,	"ac-vi" },
	{ 3,	5,	"ac-vo" }
};
static const unsigned int asn_MAP_lwa_WLAN_AC_r14_enum2value_25[] = {
	1,	/* ac-be(1) */
	0,	/* ac-bk(0) */
	2,	/* ac-vi(2) */
	3	/* ac-vo(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_lwa_WLAN_AC_r14_specs_25 = {
	asn_MAP_lwa_WLAN_AC_r14_value2enum_25,	/* "tag" => N; sorted by tag */
	asn_MAP_lwa_WLAN_AC_r14_enum2value_25,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_lwa_WLAN_AC_r14_tags_25[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_lwa_WLAN_AC_r14_25 = {
	"lwa-WLAN-AC-r14",
	"lwa-WLAN-AC-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_lwa_WLAN_AC_r14_tags_25,
	sizeof(asn_DEF_lwa_WLAN_AC_r14_tags_25)
		/sizeof(asn_DEF_lwa_WLAN_AC_r14_tags_25[0]) - 1, /* 1 */
	asn_DEF_lwa_WLAN_AC_r14_tags_25,	/* Same as above */
	sizeof(asn_DEF_lwa_WLAN_AC_r14_tags_25)
		/sizeof(asn_DEF_lwa_WLAN_AC_r14_tags_25[0]), /* 2 */
	{ 0, &asn_PER_type_lwa_WLAN_AC_r14_constr_25, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_lwa_WLAN_AC_r14_specs_25	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext3_21[] = {
	{ ATF_POINTER, 4, offsetof(struct DRB_ToAddMod__ext3, rlc_Config_v1430),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RLC_Config_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlc-Config-v1430"
		},
	{ ATF_POINTER, 3, offsetof(struct DRB_ToAddMod__ext3, lwip_UL_Aggregation_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lwip-UL-Aggregation-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct DRB_ToAddMod__ext3, lwip_DL_Aggregation_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lwip-DL-Aggregation-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct DRB_ToAddMod__ext3, lwa_WLAN_AC_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_lwa_WLAN_AC_r14_25,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lwa-WLAN-AC-r14"
		},
};
static const int asn_MAP_ext3_oms_21[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_ext3_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext3_tag2el_21[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rlc-Config-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* lwip-UL-Aggregation-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* lwip-DL-Aggregation-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* lwa-WLAN-AC-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext3_specs_21 = {
	sizeof(struct DRB_ToAddMod__ext3),
	offsetof(struct DRB_ToAddMod__ext3, _asn_ctx),
	asn_MAP_ext3_tag2el_21,
	4,	/* Count of tags in the map */
	asn_MAP_ext3_oms_21,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext3_21 = {
	"ext3",
	"ext3",
	&asn_OP_SEQUENCE,
	asn_DEF_ext3_tags_21,
	sizeof(asn_DEF_ext3_tags_21)
		/sizeof(asn_DEF_ext3_tags_21[0]) - 1, /* 1 */
	asn_DEF_ext3_tags_21,	/* Same as above */
	sizeof(asn_DEF_ext3_tags_21)
		/sizeof(asn_DEF_ext3_tags_21[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext3_21,
	4,	/* Elements count */
	&asn_SPC_ext3_specs_21	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_DRB_ToAddMod_1[] = {
	{ ATF_POINTER, 1, offsetof(struct DRB_ToAddMod, eps_BearerIdentity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_eps_BearerIdentity_constr_2,  memb_eps_BearerIdentity_constraint_1 },
		0, 0, /* No default value */
		"eps-BearerIdentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRB_ToAddMod, drb_Identity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DRB_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drb-Identity"
		},
	{ ATF_POINTER, 7, offsetof(struct DRB_ToAddMod, pdcp_Config),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDCP_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdcp-Config"
		},
	{ ATF_POINTER, 6, offsetof(struct DRB_ToAddMod, rlc_Config),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RLC_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlc-Config"
		},
	{ ATF_POINTER, 5, offsetof(struct DRB_ToAddMod, logicalChannelIdentity),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_logicalChannelIdentity_constr_6,  memb_logicalChannelIdentity_constraint_1 },
		0, 0, /* No default value */
		"logicalChannelIdentity"
		},
	{ ATF_POINTER, 4, offsetof(struct DRB_ToAddMod, logicalChannelConfig),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LogicalChannelConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"logicalChannelConfig"
		},
	{ ATF_POINTER, 3, offsetof(struct DRB_ToAddMod, ext1),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_ext1_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
	{ ATF_POINTER, 2, offsetof(struct DRB_ToAddMod, ext2),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_ext2_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext2"
		},
	{ ATF_POINTER, 1, offsetof(struct DRB_ToAddMod, ext3),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		0,
		&asn_DEF_ext3_21,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext3"
		},
};
static const int asn_MAP_DRB_ToAddMod_oms_1[] = { 0, 2, 3, 4, 5, 6, 7, 8 };
static const ber_tlv_tag_t asn_DEF_DRB_ToAddMod_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DRB_ToAddMod_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eps-BearerIdentity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* drb-Identity */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pdcp-Config */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* rlc-Config */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* logicalChannelIdentity */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* logicalChannelConfig */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* ext2 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* ext3 */
};
asn_SEQUENCE_specifics_t asn_SPC_DRB_ToAddMod_specs_1 = {
	sizeof(struct DRB_ToAddMod),
	offsetof(struct DRB_ToAddMod, _asn_ctx),
	asn_MAP_DRB_ToAddMod_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_DRB_ToAddMod_oms_1,	/* Optional members */
	5, 3,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DRB_ToAddMod = {
	"DRB-ToAddMod",
	"DRB-ToAddMod",
	&asn_OP_SEQUENCE,
	asn_DEF_DRB_ToAddMod_tags_1,
	sizeof(asn_DEF_DRB_ToAddMod_tags_1)
		/sizeof(asn_DEF_DRB_ToAddMod_tags_1[0]), /* 1 */
	asn_DEF_DRB_ToAddMod_tags_1,	/* Same as above */
	sizeof(asn_DEF_DRB_ToAddMod_tags_1)
		/sizeof(asn_DEF_DRB_ToAddMod_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DRB_ToAddMod_1,
	9,	/* Elements count */
	&asn_SPC_DRB_ToAddMod_specs_1	/* Additional specs */
};

