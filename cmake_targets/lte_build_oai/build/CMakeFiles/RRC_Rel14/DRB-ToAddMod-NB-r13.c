/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "DRB-ToAddMod-NB-r13.h"

static int
memb_eps_BearerIdentity_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_logicalChannelIdentity_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_per_constraints_t asn_PER_memb_eps_BearerIdentity_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_logicalChannelIdentity_r13_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  3,  10 }	/* (3..10) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ext1_9[] = {
	{ ATF_POINTER, 1, offsetof(struct DRB_ToAddMod_NB_r13__ext1, rlc_Config_v1430),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RLC_Config_NB_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlc-Config-v1430"
		},
};
static const int asn_MAP_ext1_oms_9[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* rlc-Config-v1430 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_9 = {
	sizeof(struct DRB_ToAddMod_NB_r13__ext1),
	offsetof(struct DRB_ToAddMod_NB_r13__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_9,
	1,	/* Count of tags in the map */
	asn_MAP_ext1_oms_9,	/* Optional members */
	1, 0,	/* Root/Additions */
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
	1,	/* Elements count */
	&asn_SPC_ext1_specs_9	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_DRB_ToAddMod_NB_r13_1[] = {
	{ ATF_POINTER, 1, offsetof(struct DRB_ToAddMod_NB_r13, eps_BearerIdentity_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_eps_BearerIdentity_r13_constr_2,  memb_eps_BearerIdentity_r13_constraint_1 },
		0, 0, /* No default value */
		"eps-BearerIdentity-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRB_ToAddMod_NB_r13, drb_Identity_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DRB_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drb-Identity-r13"
		},
	{ ATF_POINTER, 5, offsetof(struct DRB_ToAddMod_NB_r13, pdcp_Config_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDCP_Config_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdcp-Config-r13"
		},
	{ ATF_POINTER, 4, offsetof(struct DRB_ToAddMod_NB_r13, rlc_Config_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RLC_Config_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlc-Config-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct DRB_ToAddMod_NB_r13, logicalChannelIdentity_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_logicalChannelIdentity_r13_constr_6,  memb_logicalChannelIdentity_r13_constraint_1 },
		0, 0, /* No default value */
		"logicalChannelIdentity-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct DRB_ToAddMod_NB_r13, logicalChannelConfig_r13),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LogicalChannelConfig_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"logicalChannelConfig-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct DRB_ToAddMod_NB_r13, ext1),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_ext1_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_DRB_ToAddMod_NB_r13_oms_1[] = { 0, 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_DRB_ToAddMod_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DRB_ToAddMod_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eps-BearerIdentity-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* drb-Identity-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pdcp-Config-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* rlc-Config-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* logicalChannelIdentity-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* logicalChannelConfig-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_DRB_ToAddMod_NB_r13_specs_1 = {
	sizeof(struct DRB_ToAddMod_NB_r13),
	offsetof(struct DRB_ToAddMod_NB_r13, _asn_ctx),
	asn_MAP_DRB_ToAddMod_NB_r13_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_DRB_ToAddMod_NB_r13_oms_1,	/* Optional members */
	5, 1,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DRB_ToAddMod_NB_r13 = {
	"DRB-ToAddMod-NB-r13",
	"DRB-ToAddMod-NB-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_DRB_ToAddMod_NB_r13_tags_1,
	sizeof(asn_DEF_DRB_ToAddMod_NB_r13_tags_1)
		/sizeof(asn_DEF_DRB_ToAddMod_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_DRB_ToAddMod_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_DRB_ToAddMod_NB_r13_tags_1)
		/sizeof(asn_DEF_DRB_ToAddMod_NB_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DRB_ToAddMod_NB_r13_1,
	7,	/* Elements count */
	&asn_SPC_DRB_ToAddMod_NB_r13_specs_1	/* Additional specs */
};

