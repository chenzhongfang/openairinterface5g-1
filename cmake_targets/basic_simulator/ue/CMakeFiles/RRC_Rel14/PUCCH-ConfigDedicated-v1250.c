/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#include "PUCCH-ConfigDedicated-v1250.h"

static int
memb_nkaPUCCH_AN_r12_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 2047)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_nkaPUCCH_AN_r12_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  0,  2047 }	/* (0..2047) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_nkaPUCCH_Param_r12_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_setup_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PUCCH_ConfigDedicated_v1250__nkaPUCCH_Param_r12__setup, nkaPUCCH_AN_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_nkaPUCCH_AN_r12_constr_5,  memb_nkaPUCCH_AN_r12_constraint_4 },
		0, 0, /* No default value */
		"nkaPUCCH-AN-r12"
		},
};
static const ber_tlv_tag_t asn_DEF_setup_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* nkaPUCCH-AN-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_4 = {
	sizeof(struct PUCCH_ConfigDedicated_v1250__nkaPUCCH_Param_r12__setup),
	offsetof(struct PUCCH_ConfigDedicated_v1250__nkaPUCCH_Param_r12__setup, _asn_ctx),
	asn_MAP_setup_tag2el_4,
	1,	/* Count of tags in the map */
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
	1,	/* Elements count */
	&asn_SPC_setup_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_nkaPUCCH_Param_r12_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PUCCH_ConfigDedicated_v1250__nkaPUCCH_Param_r12, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PUCCH_ConfigDedicated_v1250__nkaPUCCH_Param_r12, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_nkaPUCCH_Param_r12_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_nkaPUCCH_Param_r12_specs_2 = {
	sizeof(struct PUCCH_ConfigDedicated_v1250__nkaPUCCH_Param_r12),
	offsetof(struct PUCCH_ConfigDedicated_v1250__nkaPUCCH_Param_r12, _asn_ctx),
	offsetof(struct PUCCH_ConfigDedicated_v1250__nkaPUCCH_Param_r12, present),
	sizeof(((struct PUCCH_ConfigDedicated_v1250__nkaPUCCH_Param_r12 *)0)->present),
	asn_MAP_nkaPUCCH_Param_r12_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nkaPUCCH_Param_r12_2 = {
	"nkaPUCCH-Param-r12",
	"nkaPUCCH-Param-r12",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_nkaPUCCH_Param_r12_constr_2, CHOICE_constraint },
	asn_MBR_nkaPUCCH_Param_r12_2,
	2,	/* Elements count */
	&asn_SPC_nkaPUCCH_Param_r12_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PUCCH_ConfigDedicated_v1250_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PUCCH_ConfigDedicated_v1250, nkaPUCCH_Param_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_nkaPUCCH_Param_r12_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nkaPUCCH-Param-r12"
		},
};
static const ber_tlv_tag_t asn_DEF_PUCCH_ConfigDedicated_v1250_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PUCCH_ConfigDedicated_v1250_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* nkaPUCCH-Param-r12 */
};
asn_SEQUENCE_specifics_t asn_SPC_PUCCH_ConfigDedicated_v1250_specs_1 = {
	sizeof(struct PUCCH_ConfigDedicated_v1250),
	offsetof(struct PUCCH_ConfigDedicated_v1250, _asn_ctx),
	asn_MAP_PUCCH_ConfigDedicated_v1250_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PUCCH_ConfigDedicated_v1250 = {
	"PUCCH-ConfigDedicated-v1250",
	"PUCCH-ConfigDedicated-v1250",
	&asn_OP_SEQUENCE,
	asn_DEF_PUCCH_ConfigDedicated_v1250_tags_1,
	sizeof(asn_DEF_PUCCH_ConfigDedicated_v1250_tags_1)
		/sizeof(asn_DEF_PUCCH_ConfigDedicated_v1250_tags_1[0]), /* 1 */
	asn_DEF_PUCCH_ConfigDedicated_v1250_tags_1,	/* Same as above */
	sizeof(asn_DEF_PUCCH_ConfigDedicated_v1250_tags_1)
		/sizeof(asn_DEF_PUCCH_ConfigDedicated_v1250_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PUCCH_ConfigDedicated_v1250_1,
	1,	/* Elements count */
	&asn_SPC_PUCCH_ConfigDedicated_v1250_specs_1	/* Additional specs */
};

