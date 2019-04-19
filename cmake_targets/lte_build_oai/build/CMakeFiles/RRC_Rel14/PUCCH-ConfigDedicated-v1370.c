/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "PUCCH-ConfigDedicated-v1370.h"

static asn_per_constraints_t asn_PER_type_pucch_Format_v1370_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_pucch_Format_v1370_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PUCCH_ConfigDedicated_v1370__pucch_Format_v1370, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PUCCH_ConfigDedicated_v1370__pucch_Format_v1370, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUCCH_Format3_Conf_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_pucch_Format_v1370_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_pucch_Format_v1370_specs_2 = {
	sizeof(struct PUCCH_ConfigDedicated_v1370__pucch_Format_v1370),
	offsetof(struct PUCCH_ConfigDedicated_v1370__pucch_Format_v1370, _asn_ctx),
	offsetof(struct PUCCH_ConfigDedicated_v1370__pucch_Format_v1370, present),
	sizeof(((struct PUCCH_ConfigDedicated_v1370__pucch_Format_v1370 *)0)->present),
	asn_MAP_pucch_Format_v1370_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pucch_Format_v1370_2 = {
	"pucch-Format-v1370",
	"pucch-Format-v1370",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_pucch_Format_v1370_constr_2, CHOICE_constraint },
	asn_MBR_pucch_Format_v1370_2,
	2,	/* Elements count */
	&asn_SPC_pucch_Format_v1370_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PUCCH_ConfigDedicated_v1370_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PUCCH_ConfigDedicated_v1370, pucch_Format_v1370),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_pucch_Format_v1370_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pucch-Format-v1370"
		},
};
static const ber_tlv_tag_t asn_DEF_PUCCH_ConfigDedicated_v1370_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PUCCH_ConfigDedicated_v1370_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* pucch-Format-v1370 */
};
asn_SEQUENCE_specifics_t asn_SPC_PUCCH_ConfigDedicated_v1370_specs_1 = {
	sizeof(struct PUCCH_ConfigDedicated_v1370),
	offsetof(struct PUCCH_ConfigDedicated_v1370, _asn_ctx),
	asn_MAP_PUCCH_ConfigDedicated_v1370_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PUCCH_ConfigDedicated_v1370 = {
	"PUCCH-ConfigDedicated-v1370",
	"PUCCH-ConfigDedicated-v1370",
	&asn_OP_SEQUENCE,
	asn_DEF_PUCCH_ConfigDedicated_v1370_tags_1,
	sizeof(asn_DEF_PUCCH_ConfigDedicated_v1370_tags_1)
		/sizeof(asn_DEF_PUCCH_ConfigDedicated_v1370_tags_1[0]), /* 1 */
	asn_DEF_PUCCH_ConfigDedicated_v1370_tags_1,	/* Same as above */
	sizeof(asn_DEF_PUCCH_ConfigDedicated_v1370_tags_1)
		/sizeof(asn_DEF_PUCCH_ConfigDedicated_v1370_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PUCCH_ConfigDedicated_v1370_1,
	1,	/* Elements count */
	&asn_SPC_PUCCH_ConfigDedicated_v1370_specs_1	/* Additional specs */
};

