/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "RLC-Config-NB-r13.h"

asn_per_constraints_t asn_PER_type_RLC_Config_NB_r13_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_am_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RLC_Config_NB_r13__am, ul_AM_RLC_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_AM_RLC_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-AM-RLC-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RLC_Config_NB_r13__am, dl_AM_RLC_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_AM_RLC_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-AM-RLC-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_am_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_am_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-AM-RLC-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* dl-AM-RLC-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_am_specs_2 = {
	sizeof(struct RLC_Config_NB_r13__am),
	offsetof(struct RLC_Config_NB_r13__am, _asn_ctx),
	asn_MAP_am_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_am_2 = {
	"am",
	"am",
	&asn_OP_SEQUENCE,
	asn_DEF_am_tags_2,
	sizeof(asn_DEF_am_tags_2)
		/sizeof(asn_DEF_am_tags_2[0]) - 1, /* 1 */
	asn_DEF_am_tags_2,	/* Same as above */
	sizeof(asn_DEF_am_tags_2)
		/sizeof(asn_DEF_am_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_am_2,
	2,	/* Elements count */
	&asn_SPC_am_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RLC_Config_NB_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RLC_Config_NB_r13, choice.am),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_am_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"am"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_RLC_Config_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* am */
};
asn_CHOICE_specifics_t asn_SPC_RLC_Config_NB_r13_specs_1 = {
	sizeof(struct RLC_Config_NB_r13),
	offsetof(struct RLC_Config_NB_r13, _asn_ctx),
	offsetof(struct RLC_Config_NB_r13, present),
	sizeof(((struct RLC_Config_NB_r13 *)0)->present),
	asn_MAP_RLC_Config_NB_r13_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0,
	1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_RLC_Config_NB_r13 = {
	"RLC-Config-NB-r13",
	"RLC-Config-NB-r13",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_RLC_Config_NB_r13_constr_1, CHOICE_constraint },
	asn_MBR_RLC_Config_NB_r13_1,
	1,	/* Elements count */
	&asn_SPC_RLC_Config_NB_r13_specs_1	/* Additional specs */
};

