/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "HandoverPreparationInformation-v920-IEs.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_ue_ConfigRelease_r9_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  7 }	/* (0..7,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_ue_ConfigRelease_r9_value2enum_2[] = {
	{ 0,	4,	"rel9" },
	{ 1,	5,	"rel10" },
	{ 2,	5,	"rel11" },
	{ 3,	5,	"rel12" },
	{ 4,	5,	"v10j0" },
	{ 5,	5,	"v11e0" },
	{ 6,	5,	"v1280" },
	{ 7,	5,	"rel13" },
	{ 8,	5,	"rel14" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_ue_ConfigRelease_r9_enum2value_2[] = {
	1,	/* rel10(1) */
	2,	/* rel11(2) */
	3,	/* rel12(3) */
	7,	/* rel13(7) */
	8,	/* rel14(8) */
	0,	/* rel9(0) */
	4,	/* v10j0(4) */
	5,	/* v11e0(5) */
	6	/* v1280(6) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_ue_ConfigRelease_r9_specs_2 = {
	asn_MAP_ue_ConfigRelease_r9_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_ue_ConfigRelease_r9_enum2value_2,	/* N => "tag"; sorted by N */
	9,	/* Number of elements in the maps */
	9,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ue_ConfigRelease_r9_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ue_ConfigRelease_r9_2 = {
	"ue-ConfigRelease-r9",
	"ue-ConfigRelease-r9",
	&asn_OP_NativeEnumerated,
	asn_DEF_ue_ConfigRelease_r9_tags_2,
	sizeof(asn_DEF_ue_ConfigRelease_r9_tags_2)
		/sizeof(asn_DEF_ue_ConfigRelease_r9_tags_2[0]) - 1, /* 1 */
	asn_DEF_ue_ConfigRelease_r9_tags_2,	/* Same as above */
	sizeof(asn_DEF_ue_ConfigRelease_r9_tags_2)
		/sizeof(asn_DEF_ue_ConfigRelease_r9_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_ue_ConfigRelease_r9_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ue_ConfigRelease_r9_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_HandoverPreparationInformation_v920_IEs_1[] = {
	{ ATF_POINTER, 2, offsetof(struct HandoverPreparationInformation_v920_IEs, ue_ConfigRelease_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ue_ConfigRelease_r9_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-ConfigRelease-r9"
		},
	{ ATF_POINTER, 1, offsetof(struct HandoverPreparationInformation_v920_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HandoverPreparationInformation_v9d0_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_HandoverPreparationInformation_v920_IEs_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_HandoverPreparationInformation_v920_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_HandoverPreparationInformation_v920_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ue-ConfigRelease-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_HandoverPreparationInformation_v920_IEs_specs_1 = {
	sizeof(struct HandoverPreparationInformation_v920_IEs),
	offsetof(struct HandoverPreparationInformation_v920_IEs, _asn_ctx),
	asn_MAP_HandoverPreparationInformation_v920_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_HandoverPreparationInformation_v920_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_HandoverPreparationInformation_v920_IEs = {
	"HandoverPreparationInformation-v920-IEs",
	"HandoverPreparationInformation-v920-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_HandoverPreparationInformation_v920_IEs_tags_1,
	sizeof(asn_DEF_HandoverPreparationInformation_v920_IEs_tags_1)
		/sizeof(asn_DEF_HandoverPreparationInformation_v920_IEs_tags_1[0]), /* 1 */
	asn_DEF_HandoverPreparationInformation_v920_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_HandoverPreparationInformation_v920_IEs_tags_1)
		/sizeof(asn_DEF_HandoverPreparationInformation_v920_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_HandoverPreparationInformation_v920_IEs_1,
	2,	/* Elements count */
	&asn_SPC_HandoverPreparationInformation_v920_IEs_specs_1	/* Additional specs */
};

