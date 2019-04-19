/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#include "IRAT-ParametersUTRA-v9h0.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_mfbi_UTRA_r9_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_mfbi_UTRA_r9_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_mfbi_UTRA_r9_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_mfbi_UTRA_r9_specs_2 = {
	asn_MAP_mfbi_UTRA_r9_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_mfbi_UTRA_r9_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_mfbi_UTRA_r9_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mfbi_UTRA_r9_2 = {
	"mfbi-UTRA-r9",
	"mfbi-UTRA-r9",
	&asn_OP_NativeEnumerated,
	asn_DEF_mfbi_UTRA_r9_tags_2,
	sizeof(asn_DEF_mfbi_UTRA_r9_tags_2)
		/sizeof(asn_DEF_mfbi_UTRA_r9_tags_2[0]) - 1, /* 1 */
	asn_DEF_mfbi_UTRA_r9_tags_2,	/* Same as above */
	sizeof(asn_DEF_mfbi_UTRA_r9_tags_2)
		/sizeof(asn_DEF_mfbi_UTRA_r9_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_mfbi_UTRA_r9_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_mfbi_UTRA_r9_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_IRAT_ParametersUTRA_v9h0_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct IRAT_ParametersUTRA_v9h0, mfbi_UTRA_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_mfbi_UTRA_r9_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mfbi-UTRA-r9"
		},
};
static const ber_tlv_tag_t asn_DEF_IRAT_ParametersUTRA_v9h0_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_IRAT_ParametersUTRA_v9h0_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* mfbi-UTRA-r9 */
};
asn_SEQUENCE_specifics_t asn_SPC_IRAT_ParametersUTRA_v9h0_specs_1 = {
	sizeof(struct IRAT_ParametersUTRA_v9h0),
	offsetof(struct IRAT_ParametersUTRA_v9h0, _asn_ctx),
	asn_MAP_IRAT_ParametersUTRA_v9h0_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_IRAT_ParametersUTRA_v9h0 = {
	"IRAT-ParametersUTRA-v9h0",
	"IRAT-ParametersUTRA-v9h0",
	&asn_OP_SEQUENCE,
	asn_DEF_IRAT_ParametersUTRA_v9h0_tags_1,
	sizeof(asn_DEF_IRAT_ParametersUTRA_v9h0_tags_1)
		/sizeof(asn_DEF_IRAT_ParametersUTRA_v9h0_tags_1[0]), /* 1 */
	asn_DEF_IRAT_ParametersUTRA_v9h0_tags_1,	/* Same as above */
	sizeof(asn_DEF_IRAT_ParametersUTRA_v9h0_tags_1)
		/sizeof(asn_DEF_IRAT_ParametersUTRA_v9h0_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_IRAT_ParametersUTRA_v9h0_1,
	1,	/* Elements count */
	&asn_SPC_IRAT_ParametersUTRA_v9h0_specs_1	/* Additional specs */
};

