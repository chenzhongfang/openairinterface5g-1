/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "CSI-RS-Config-r10.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_resourceConfig_r10_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_subframeConfig_r10_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 154)) {
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
memb_p_C_r10_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -8 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_antennaPortsCount_r10_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_resourceConfig_r10_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_subframeConfig_r10_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  154 }	/* (0..154) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_p_C_r10_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5, -8,  15 }	/* (-8..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_csi_RS_r10_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_antennaPortsCount_r10_value2enum_5[] = {
	{ 0,	3,	"an1" },
	{ 1,	3,	"an2" },
	{ 2,	3,	"an4" },
	{ 3,	3,	"an8" }
};
static const unsigned int asn_MAP_antennaPortsCount_r10_enum2value_5[] = {
	0,	/* an1(0) */
	1,	/* an2(1) */
	2,	/* an4(2) */
	3	/* an8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_antennaPortsCount_r10_specs_5 = {
	asn_MAP_antennaPortsCount_r10_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_antennaPortsCount_r10_enum2value_5,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_antennaPortsCount_r10_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_antennaPortsCount_r10_5 = {
	"antennaPortsCount-r10",
	"antennaPortsCount-r10",
	&asn_OP_NativeEnumerated,
	asn_DEF_antennaPortsCount_r10_tags_5,
	sizeof(asn_DEF_antennaPortsCount_r10_tags_5)
		/sizeof(asn_DEF_antennaPortsCount_r10_tags_5[0]) - 1, /* 1 */
	asn_DEF_antennaPortsCount_r10_tags_5,	/* Same as above */
	sizeof(asn_DEF_antennaPortsCount_r10_tags_5)
		/sizeof(asn_DEF_antennaPortsCount_r10_tags_5[0]), /* 2 */
	{ 0, &asn_PER_type_antennaPortsCount_r10_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_antennaPortsCount_r10_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_Config_r10__csi_RS_r10__setup, antennaPortsCount_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_antennaPortsCount_r10_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"antennaPortsCount-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_Config_r10__csi_RS_r10__setup, resourceConfig_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_resourceConfig_r10_constr_10,  memb_resourceConfig_r10_constraint_4 },
		0, 0, /* No default value */
		"resourceConfig-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_Config_r10__csi_RS_r10__setup, subframeConfig_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_subframeConfig_r10_constr_11,  memb_subframeConfig_r10_constraint_4 },
		0, 0, /* No default value */
		"subframeConfig-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_Config_r10__csi_RS_r10__setup, p_C_r10),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_p_C_r10_constr_12,  memb_p_C_r10_constraint_4 },
		0, 0, /* No default value */
		"p-C-r10"
		},
};
static const ber_tlv_tag_t asn_DEF_setup_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* antennaPortsCount-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* resourceConfig-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* subframeConfig-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* p-C-r10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_4 = {
	sizeof(struct CSI_RS_Config_r10__csi_RS_r10__setup),
	offsetof(struct CSI_RS_Config_r10__csi_RS_r10__setup, _asn_ctx),
	asn_MAP_setup_tag2el_4,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_4 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_setup_tags_4,
	sizeof(asn_DEF_setup_tags_4)
		/sizeof(asn_DEF_setup_tags_4[0]) - 1, /* 1 */
	asn_DEF_setup_tags_4,	/* Same as above */
	sizeof(asn_DEF_setup_tags_4)
		/sizeof(asn_DEF_setup_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_setup_4,
	4,	/* Elements count */
	&asn_SPC_setup_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_csi_RS_r10_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_Config_r10__csi_RS_r10, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_Config_r10__csi_RS_r10, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_csi_RS_r10_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_csi_RS_r10_specs_2 = {
	sizeof(struct CSI_RS_Config_r10__csi_RS_r10),
	offsetof(struct CSI_RS_Config_r10__csi_RS_r10, _asn_ctx),
	offsetof(struct CSI_RS_Config_r10__csi_RS_r10, present),
	sizeof(((struct CSI_RS_Config_r10__csi_RS_r10 *)0)->present),
	asn_MAP_csi_RS_r10_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_csi_RS_r10_2 = {
	"csi-RS-r10",
	"csi-RS-r10",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_csi_RS_r10_constr_2, CHOICE_constraint },
	asn_MBR_csi_RS_r10_2,
	2,	/* Elements count */
	&asn_SPC_csi_RS_r10_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CSI_RS_Config_r10_1[] = {
	{ ATF_POINTER, 2, offsetof(struct CSI_RS_Config_r10, csi_RS_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_csi_RS_r10_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-RS-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct CSI_RS_Config_r10, zeroTxPowerCSI_RS_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ZeroTxPowerCSI_RS_Conf_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"zeroTxPowerCSI-RS-r10"
		},
};
static const int asn_MAP_CSI_RS_Config_r10_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_CSI_RS_Config_r10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CSI_RS_Config_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* csi-RS-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* zeroTxPowerCSI-RS-r10 */
};
asn_SEQUENCE_specifics_t asn_SPC_CSI_RS_Config_r10_specs_1 = {
	sizeof(struct CSI_RS_Config_r10),
	offsetof(struct CSI_RS_Config_r10, _asn_ctx),
	asn_MAP_CSI_RS_Config_r10_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_CSI_RS_Config_r10_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CSI_RS_Config_r10 = {
	"CSI-RS-Config-r10",
	"CSI-RS-Config-r10",
	&asn_OP_SEQUENCE,
	asn_DEF_CSI_RS_Config_r10_tags_1,
	sizeof(asn_DEF_CSI_RS_Config_r10_tags_1)
		/sizeof(asn_DEF_CSI_RS_Config_r10_tags_1[0]), /* 1 */
	asn_DEF_CSI_RS_Config_r10_tags_1,	/* Same as above */
	sizeof(asn_DEF_CSI_RS_Config_r10_tags_1)
		/sizeof(asn_DEF_CSI_RS_Config_r10_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CSI_RS_Config_r10_1,
	2,	/* Elements count */
	&asn_SPC_CSI_RS_Config_r10_specs_1	/* Additional specs */
};

