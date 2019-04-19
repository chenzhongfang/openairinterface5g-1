/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#include "UE-EUTRA-Capability-v1430-IEs.h"

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
static asn_per_constraints_t asn_PER_type_ue_CategoryDL_v1430_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ue_CategoryUL_v1430_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ue_CategoryUL_v1430b_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_ue_CategoryDL_v1430_value2enum_3[] = {
	{ 0,	2,	"m2" }
};
static const unsigned int asn_MAP_ue_CategoryDL_v1430_enum2value_3[] = {
	0	/* m2(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ue_CategoryDL_v1430_specs_3 = {
	asn_MAP_ue_CategoryDL_v1430_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_ue_CategoryDL_v1430_enum2value_3,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ue_CategoryDL_v1430_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ue_CategoryDL_v1430_3 = {
	"ue-CategoryDL-v1430",
	"ue-CategoryDL-v1430",
	&asn_OP_NativeEnumerated,
	asn_DEF_ue_CategoryDL_v1430_tags_3,
	sizeof(asn_DEF_ue_CategoryDL_v1430_tags_3)
		/sizeof(asn_DEF_ue_CategoryDL_v1430_tags_3[0]) - 1, /* 1 */
	asn_DEF_ue_CategoryDL_v1430_tags_3,	/* Same as above */
	sizeof(asn_DEF_ue_CategoryDL_v1430_tags_3)
		/sizeof(asn_DEF_ue_CategoryDL_v1430_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_ue_CategoryDL_v1430_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ue_CategoryDL_v1430_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ue_CategoryUL_v1430_value2enum_5[] = {
	{ 0,	3,	"n16" },
	{ 1,	3,	"n17" },
	{ 2,	3,	"n18" },
	{ 3,	3,	"n19" },
	{ 4,	3,	"n20" },
	{ 5,	2,	"m2" }
};
static const unsigned int asn_MAP_ue_CategoryUL_v1430_enum2value_5[] = {
	5,	/* m2(5) */
	0,	/* n16(0) */
	1,	/* n17(1) */
	2,	/* n18(2) */
	3,	/* n19(3) */
	4	/* n20(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_ue_CategoryUL_v1430_specs_5 = {
	asn_MAP_ue_CategoryUL_v1430_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_ue_CategoryUL_v1430_enum2value_5,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ue_CategoryUL_v1430_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ue_CategoryUL_v1430_5 = {
	"ue-CategoryUL-v1430",
	"ue-CategoryUL-v1430",
	&asn_OP_NativeEnumerated,
	asn_DEF_ue_CategoryUL_v1430_tags_5,
	sizeof(asn_DEF_ue_CategoryUL_v1430_tags_5)
		/sizeof(asn_DEF_ue_CategoryUL_v1430_tags_5[0]) - 1, /* 1 */
	asn_DEF_ue_CategoryUL_v1430_tags_5,	/* Same as above */
	sizeof(asn_DEF_ue_CategoryUL_v1430_tags_5)
		/sizeof(asn_DEF_ue_CategoryUL_v1430_tags_5[0]), /* 2 */
	{ 0, &asn_PER_type_ue_CategoryUL_v1430_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ue_CategoryUL_v1430_specs_5	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ue_CategoryUL_v1430b_value2enum_12[] = {
	{ 0,	3,	"n21" }
};
static const unsigned int asn_MAP_ue_CategoryUL_v1430b_enum2value_12[] = {
	0	/* n21(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ue_CategoryUL_v1430b_specs_12 = {
	asn_MAP_ue_CategoryUL_v1430b_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_ue_CategoryUL_v1430b_enum2value_12,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ue_CategoryUL_v1430b_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ue_CategoryUL_v1430b_12 = {
	"ue-CategoryUL-v1430b",
	"ue-CategoryUL-v1430b",
	&asn_OP_NativeEnumerated,
	asn_DEF_ue_CategoryUL_v1430b_tags_12,
	sizeof(asn_DEF_ue_CategoryUL_v1430b_tags_12)
		/sizeof(asn_DEF_ue_CategoryUL_v1430b_tags_12[0]) - 1, /* 1 */
	asn_DEF_ue_CategoryUL_v1430b_tags_12,	/* Same as above */
	sizeof(asn_DEF_ue_CategoryUL_v1430b_tags_12)
		/sizeof(asn_DEF_ue_CategoryUL_v1430b_tags_12[0]), /* 2 */
	{ 0, &asn_PER_type_ue_CategoryUL_v1430b_constr_12, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ue_CategoryUL_v1430b_specs_12	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UE_EUTRA_Capability_v1430_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_EUTRA_Capability_v1430_IEs, phyLayerParameters_v1430),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhyLayerParameters_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"phyLayerParameters-v1430"
		},
	{ ATF_POINTER, 6, offsetof(struct UE_EUTRA_Capability_v1430_IEs, ue_CategoryDL_v1430),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ue_CategoryDL_v1430_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-CategoryDL-v1430"
		},
	{ ATF_POINTER, 5, offsetof(struct UE_EUTRA_Capability_v1430_IEs, ue_CategoryUL_v1430),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ue_CategoryUL_v1430_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-CategoryUL-v1430"
		},
	{ ATF_POINTER, 4, offsetof(struct UE_EUTRA_Capability_v1430_IEs, ue_CategoryUL_v1430b),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ue_CategoryUL_v1430b_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-CategoryUL-v1430b"
		},
	{ ATF_POINTER, 3, offsetof(struct UE_EUTRA_Capability_v1430_IEs, mac_Parameters_v1430),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MAC_Parameters_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mac-Parameters-v1430"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_EUTRA_Capability_v1430_IEs, measParameters_v1430),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasParameters_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measParameters-v1430"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_EUTRA_Capability_v1430_IEs, pdcp_Parameters_v1430),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDCP_Parameters_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdcp-Parameters-v1430"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_EUTRA_Capability_v1430_IEs, rlc_Parameters_v1430),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RLC_Parameters_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlc-Parameters-v1430"
		},
	{ ATF_POINTER, 4, offsetof(struct UE_EUTRA_Capability_v1430_IEs, rf_Parameters_v1430),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RF_Parameters_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rf-Parameters-v1430"
		},
	{ ATF_POINTER, 3, offsetof(struct UE_EUTRA_Capability_v1430_IEs, laa_Parameters_v1430),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LAA_Parameters_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"laa-Parameters-v1430"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_EUTRA_Capability_v1430_IEs, lwa_Parameters_v1430),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LWA_Parameters_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lwa-Parameters-v1430"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_EUTRA_Capability_v1430_IEs, lwip_Parameters_v1430),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LWIP_Parameters_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lwip-Parameters-v1430"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_EUTRA_Capability_v1430_IEs, otherParameters_v1430),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Other_Parameters_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"otherParameters-v1430"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_EUTRA_Capability_v1430_IEs, mmtel_Parameters_r14),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MMTEL_Parameters_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mmtel-Parameters-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_EUTRA_Capability_v1430_IEs, mobilityParameters_r14),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MobilityParameters_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mobilityParameters-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_EUTRA_Capability_v1430_IEs, ce_Parameters_v1430),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CE_Parameters_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ce-Parameters-v1430"
		},
	{ ATF_POINTER, 7, offsetof(struct UE_EUTRA_Capability_v1430_IEs, fdd_Add_UE_EUTRA_Capabilities_v1430),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fdd-Add-UE-EUTRA-Capabilities-v1430"
		},
	{ ATF_POINTER, 6, offsetof(struct UE_EUTRA_Capability_v1430_IEs, tdd_Add_UE_EUTRA_Capabilities_v1430),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd-Add-UE-EUTRA-Capabilities-v1430"
		},
	{ ATF_POINTER, 5, offsetof(struct UE_EUTRA_Capability_v1430_IEs, mbms_Parameters_v1430),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_Parameters_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbms-Parameters-v1430"
		},
	{ ATF_POINTER, 4, offsetof(struct UE_EUTRA_Capability_v1430_IEs, sl_Parameters_v1430),
		(ASN_TAG_CLASS_CONTEXT | (19 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_Parameters_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-Parameters-v1430"
		},
	{ ATF_POINTER, 3, offsetof(struct UE_EUTRA_Capability_v1430_IEs, ue_BasedNetwPerfMeasParameters_v1430),
		(ASN_TAG_CLASS_CONTEXT | (20 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_BasedNetwPerfMeasParameters_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-BasedNetwPerfMeasParameters-v1430"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_EUTRA_Capability_v1430_IEs, highSpeedEnhParameters_r14),
		(ASN_TAG_CLASS_CONTEXT | (21 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HighSpeedEnhParameters_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"highSpeedEnhParameters-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_EUTRA_Capability_v1430_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (22 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_EUTRA_Capability_v1440_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_UE_EUTRA_Capability_v1430_IEs_oms_1[] = { 1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 13, 14, 16, 17, 18, 19, 20, 21, 22 };
static const ber_tlv_tag_t asn_DEF_UE_EUTRA_Capability_v1430_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_EUTRA_Capability_v1430_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* phyLayerParameters-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ue-CategoryDL-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ue-CategoryUL-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ue-CategoryUL-v1430b */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* mac-Parameters-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* measParameters-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* pdcp-Parameters-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* rlc-Parameters-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* rf-Parameters-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* laa-Parameters-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* lwa-Parameters-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* lwip-Parameters-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* otherParameters-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* mmtel-Parameters-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* mobilityParameters-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* ce-Parameters-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* fdd-Add-UE-EUTRA-Capabilities-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 }, /* tdd-Add-UE-EUTRA-Capabilities-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 18, 0, 0 }, /* mbms-Parameters-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (19 << 2)), 19, 0, 0 }, /* sl-Parameters-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (20 << 2)), 20, 0, 0 }, /* ue-BasedNetwPerfMeasParameters-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (21 << 2)), 21, 0, 0 }, /* highSpeedEnhParameters-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (22 << 2)), 22, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_Capability_v1430_IEs_specs_1 = {
	sizeof(struct UE_EUTRA_Capability_v1430_IEs),
	offsetof(struct UE_EUTRA_Capability_v1430_IEs, _asn_ctx),
	asn_MAP_UE_EUTRA_Capability_v1430_IEs_tag2el_1,
	23,	/* Count of tags in the map */
	asn_MAP_UE_EUTRA_Capability_v1430_IEs_oms_1,	/* Optional members */
	19, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v1430_IEs = {
	"UE-EUTRA-Capability-v1430-IEs",
	"UE-EUTRA-Capability-v1430-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_EUTRA_Capability_v1430_IEs_tags_1,
	sizeof(asn_DEF_UE_EUTRA_Capability_v1430_IEs_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_Capability_v1430_IEs_tags_1[0]), /* 1 */
	asn_DEF_UE_EUTRA_Capability_v1430_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_EUTRA_Capability_v1430_IEs_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_Capability_v1430_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UE_EUTRA_Capability_v1430_IEs_1,
	23,	/* Elements count */
	&asn_SPC_UE_EUTRA_Capability_v1430_IEs_specs_1	/* Additional specs */
};

