/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "Enable256QAM-r14.h"

static asn_per_constraints_t asn_PER_type_setup_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_Enable256QAM_r14_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_tpc_SubframeSet_Configured_r14_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Enable256QAM_r14__setup__tpc_SubframeSet_Configured_r14, subframeSet1_DCI_Format0_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"subframeSet1-DCI-Format0-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Enable256QAM_r14__setup__tpc_SubframeSet_Configured_r14, subframeSet1_DCI_Format4_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"subframeSet1-DCI-Format4-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Enable256QAM_r14__setup__tpc_SubframeSet_Configured_r14, subframeSet2_DCI_Format0_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"subframeSet2-DCI-Format0-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Enable256QAM_r14__setup__tpc_SubframeSet_Configured_r14, subframeSet2_DCI_Format4_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"subframeSet2-DCI-Format4-r14"
		},
};
static const ber_tlv_tag_t asn_DEF_tpc_SubframeSet_Configured_r14_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_tpc_SubframeSet_Configured_r14_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* subframeSet1-DCI-Format0-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* subframeSet1-DCI-Format4-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* subframeSet2-DCI-Format0-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* subframeSet2-DCI-Format4-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_tpc_SubframeSet_Configured_r14_specs_4 = {
	sizeof(struct Enable256QAM_r14__setup__tpc_SubframeSet_Configured_r14),
	offsetof(struct Enable256QAM_r14__setup__tpc_SubframeSet_Configured_r14, _asn_ctx),
	asn_MAP_tpc_SubframeSet_Configured_r14_tag2el_4,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tpc_SubframeSet_Configured_r14_4 = {
	"tpc-SubframeSet-Configured-r14",
	"tpc-SubframeSet-Configured-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_tpc_SubframeSet_Configured_r14_tags_4,
	sizeof(asn_DEF_tpc_SubframeSet_Configured_r14_tags_4)
		/sizeof(asn_DEF_tpc_SubframeSet_Configured_r14_tags_4[0]) - 1, /* 1 */
	asn_DEF_tpc_SubframeSet_Configured_r14_tags_4,	/* Same as above */
	sizeof(asn_DEF_tpc_SubframeSet_Configured_r14_tags_4)
		/sizeof(asn_DEF_tpc_SubframeSet_Configured_r14_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_tpc_SubframeSet_Configured_r14_4,
	4,	/* Elements count */
	&asn_SPC_tpc_SubframeSet_Configured_r14_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tpc_SubframeSet_NotConfigured_r14_9[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Enable256QAM_r14__setup__tpc_SubframeSet_NotConfigured_r14, dci_Format0_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dci-Format0-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Enable256QAM_r14__setup__tpc_SubframeSet_NotConfigured_r14, dci_Format4_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dci-Format4-r14"
		},
};
static const ber_tlv_tag_t asn_DEF_tpc_SubframeSet_NotConfigured_r14_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_tpc_SubframeSet_NotConfigured_r14_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dci-Format0-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* dci-Format4-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_tpc_SubframeSet_NotConfigured_r14_specs_9 = {
	sizeof(struct Enable256QAM_r14__setup__tpc_SubframeSet_NotConfigured_r14),
	offsetof(struct Enable256QAM_r14__setup__tpc_SubframeSet_NotConfigured_r14, _asn_ctx),
	asn_MAP_tpc_SubframeSet_NotConfigured_r14_tag2el_9,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tpc_SubframeSet_NotConfigured_r14_9 = {
	"tpc-SubframeSet-NotConfigured-r14",
	"tpc-SubframeSet-NotConfigured-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_tpc_SubframeSet_NotConfigured_r14_tags_9,
	sizeof(asn_DEF_tpc_SubframeSet_NotConfigured_r14_tags_9)
		/sizeof(asn_DEF_tpc_SubframeSet_NotConfigured_r14_tags_9[0]) - 1, /* 1 */
	asn_DEF_tpc_SubframeSet_NotConfigured_r14_tags_9,	/* Same as above */
	sizeof(asn_DEF_tpc_SubframeSet_NotConfigured_r14_tags_9)
		/sizeof(asn_DEF_tpc_SubframeSet_NotConfigured_r14_tags_9[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_tpc_SubframeSet_NotConfigured_r14_9,
	2,	/* Elements count */
	&asn_SPC_tpc_SubframeSet_NotConfigured_r14_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Enable256QAM_r14__setup, choice.tpc_SubframeSet_Configured_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_tpc_SubframeSet_Configured_r14_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tpc-SubframeSet-Configured-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Enable256QAM_r14__setup, choice.tpc_SubframeSet_NotConfigured_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_tpc_SubframeSet_NotConfigured_r14_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tpc-SubframeSet-NotConfigured-r14"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tpc-SubframeSet-Configured-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tpc-SubframeSet-NotConfigured-r14 */
};
static asn_CHOICE_specifics_t asn_SPC_setup_specs_3 = {
	sizeof(struct Enable256QAM_r14__setup),
	offsetof(struct Enable256QAM_r14__setup, _asn_ctx),
	offsetof(struct Enable256QAM_r14__setup, present),
	sizeof(((struct Enable256QAM_r14__setup *)0)->present),
	asn_MAP_setup_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_3 = {
	"setup",
	"setup",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_setup_constr_3, CHOICE_constraint },
	asn_MBR_setup_3,
	2,	/* Elements count */
	&asn_SPC_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_Enable256QAM_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Enable256QAM_r14, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Enable256QAM_r14, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_setup_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_Enable256QAM_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_Enable256QAM_r14_specs_1 = {
	sizeof(struct Enable256QAM_r14),
	offsetof(struct Enable256QAM_r14, _asn_ctx),
	offsetof(struct Enable256QAM_r14, present),
	sizeof(((struct Enable256QAM_r14 *)0)->present),
	asn_MAP_Enable256QAM_r14_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_Enable256QAM_r14 = {
	"Enable256QAM-r14",
	"Enable256QAM-r14",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_Enable256QAM_r14_constr_1, CHOICE_constraint },
	asn_MBR_Enable256QAM_r14_1,
	2,	/* Elements count */
	&asn_SPC_Enable256QAM_r14_specs_1	/* Additional specs */
};

