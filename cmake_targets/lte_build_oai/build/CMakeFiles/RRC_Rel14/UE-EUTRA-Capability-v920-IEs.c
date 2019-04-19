/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "UE-EUTRA-Capability-v920-IEs.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_deviceType_r9_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_deviceType_r9_value2enum_6[] = {
	{ 0,	22,	"noBenFromBatConsumpOpt" }
};
static const unsigned int asn_MAP_deviceType_r9_enum2value_6[] = {
	0	/* noBenFromBatConsumpOpt(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_deviceType_r9_specs_6 = {
	asn_MAP_deviceType_r9_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_deviceType_r9_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_deviceType_r9_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_deviceType_r9_6 = {
	"deviceType-r9",
	"deviceType-r9",
	&asn_OP_NativeEnumerated,
	asn_DEF_deviceType_r9_tags_6,
	sizeof(asn_DEF_deviceType_r9_tags_6)
		/sizeof(asn_DEF_deviceType_r9_tags_6[0]) - 1, /* 1 */
	asn_DEF_deviceType_r9_tags_6,	/* Same as above */
	sizeof(asn_DEF_deviceType_r9_tags_6)
		/sizeof(asn_DEF_deviceType_r9_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_deviceType_r9_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_deviceType_r9_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UE_EUTRA_Capability_v920_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_EUTRA_Capability_v920_IEs, phyLayerParameters_v920),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhyLayerParameters_v920,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"phyLayerParameters-v920"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_EUTRA_Capability_v920_IEs, interRAT_ParametersGERAN_v920),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IRAT_ParametersGERAN_v920,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interRAT-ParametersGERAN-v920"
		},
	{ ATF_POINTER, 3, offsetof(struct UE_EUTRA_Capability_v920_IEs, interRAT_ParametersUTRA_v920),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IRAT_ParametersUTRA_v920,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interRAT-ParametersUTRA-v920"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_EUTRA_Capability_v920_IEs, interRAT_ParametersCDMA2000_v920),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IRAT_ParametersCDMA2000_1XRTT_v920,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interRAT-ParametersCDMA2000-v920"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_EUTRA_Capability_v920_IEs, deviceType_r9),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_deviceType_r9_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"deviceType-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_EUTRA_Capability_v920_IEs, csg_ProximityIndicationParameters_r9),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSG_ProximityIndicationParameters_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csg-ProximityIndicationParameters-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_EUTRA_Capability_v920_IEs, neighCellSI_AcquisitionParameters_r9),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NeighCellSI_AcquisitionParameters_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"neighCellSI-AcquisitionParameters-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_EUTRA_Capability_v920_IEs, son_Parameters_r9),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SON_Parameters_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"son-Parameters-r9"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_EUTRA_Capability_v920_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_EUTRA_Capability_v940_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_UE_EUTRA_Capability_v920_IEs_oms_1[] = { 2, 3, 4, 8 };
static const ber_tlv_tag_t asn_DEF_UE_EUTRA_Capability_v920_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_EUTRA_Capability_v920_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* phyLayerParameters-v920 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* interRAT-ParametersGERAN-v920 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* interRAT-ParametersUTRA-v920 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* interRAT-ParametersCDMA2000-v920 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* deviceType-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* csg-ProximityIndicationParameters-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* neighCellSI-AcquisitionParameters-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* son-Parameters-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_Capability_v920_IEs_specs_1 = {
	sizeof(struct UE_EUTRA_Capability_v920_IEs),
	offsetof(struct UE_EUTRA_Capability_v920_IEs, _asn_ctx),
	asn_MAP_UE_EUTRA_Capability_v920_IEs_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_UE_EUTRA_Capability_v920_IEs_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v920_IEs = {
	"UE-EUTRA-Capability-v920-IEs",
	"UE-EUTRA-Capability-v920-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_EUTRA_Capability_v920_IEs_tags_1,
	sizeof(asn_DEF_UE_EUTRA_Capability_v920_IEs_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_Capability_v920_IEs_tags_1[0]), /* 1 */
	asn_DEF_UE_EUTRA_Capability_v920_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_EUTRA_Capability_v920_IEs_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_Capability_v920_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UE_EUTRA_Capability_v920_IEs_1,
	9,	/* Elements count */
	&asn_SPC_UE_EUTRA_Capability_v920_IEs_specs_1	/* Additional specs */
};

