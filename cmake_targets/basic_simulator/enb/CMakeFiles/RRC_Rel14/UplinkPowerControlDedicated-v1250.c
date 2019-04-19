/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "UplinkPowerControlDedicated-v1250.h"

static int
memb_tpc_SubframeSet_r12_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 10)) {
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
memb_p0_NominalPUSCH_SubframeSet2_r12_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -126 && value <= 24)) {
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
memb_p0_UE_PUSCH_SubframeSet2_r12_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -8 && value <= 7)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_tpc_SubframeSet_r12_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  10,  10 }	/* (SIZE(10..10)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_p0_NominalPUSCH_SubframeSet2_r12_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8, -126,  24 }	/* (-126..24) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_p0_UE_PUSCH_SubframeSet2_r12_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4, -8,  7 }	/* (-8..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_set2PowerControlParameter_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_setup_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UplinkPowerControlDedicated_v1250__set2PowerControlParameter__setup, tpc_SubframeSet_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_tpc_SubframeSet_r12_constr_5,  memb_tpc_SubframeSet_r12_constraint_4 },
		0, 0, /* No default value */
		"tpc-SubframeSet-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UplinkPowerControlDedicated_v1250__set2PowerControlParameter__setup, p0_NominalPUSCH_SubframeSet2_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_p0_NominalPUSCH_SubframeSet2_r12_constr_6,  memb_p0_NominalPUSCH_SubframeSet2_r12_constraint_4 },
		0, 0, /* No default value */
		"p0-NominalPUSCH-SubframeSet2-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UplinkPowerControlDedicated_v1250__set2PowerControlParameter__setup, alpha_SubframeSet2_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Alpha_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"alpha-SubframeSet2-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UplinkPowerControlDedicated_v1250__set2PowerControlParameter__setup, p0_UE_PUSCH_SubframeSet2_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_p0_UE_PUSCH_SubframeSet2_r12_constr_8,  memb_p0_UE_PUSCH_SubframeSet2_r12_constraint_4 },
		0, 0, /* No default value */
		"p0-UE-PUSCH-SubframeSet2-r12"
		},
};
static const ber_tlv_tag_t asn_DEF_setup_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tpc-SubframeSet-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* p0-NominalPUSCH-SubframeSet2-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* alpha-SubframeSet2-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* p0-UE-PUSCH-SubframeSet2-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_4 = {
	sizeof(struct UplinkPowerControlDedicated_v1250__set2PowerControlParameter__setup),
	offsetof(struct UplinkPowerControlDedicated_v1250__set2PowerControlParameter__setup, _asn_ctx),
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

static asn_TYPE_member_t asn_MBR_set2PowerControlParameter_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UplinkPowerControlDedicated_v1250__set2PowerControlParameter, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UplinkPowerControlDedicated_v1250__set2PowerControlParameter, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_set2PowerControlParameter_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_set2PowerControlParameter_specs_2 = {
	sizeof(struct UplinkPowerControlDedicated_v1250__set2PowerControlParameter),
	offsetof(struct UplinkPowerControlDedicated_v1250__set2PowerControlParameter, _asn_ctx),
	offsetof(struct UplinkPowerControlDedicated_v1250__set2PowerControlParameter, present),
	sizeof(((struct UplinkPowerControlDedicated_v1250__set2PowerControlParameter *)0)->present),
	asn_MAP_set2PowerControlParameter_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_set2PowerControlParameter_2 = {
	"set2PowerControlParameter",
	"set2PowerControlParameter",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_set2PowerControlParameter_constr_2, CHOICE_constraint },
	asn_MBR_set2PowerControlParameter_2,
	2,	/* Elements count */
	&asn_SPC_set2PowerControlParameter_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UplinkPowerControlDedicated_v1250_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UplinkPowerControlDedicated_v1250, set2PowerControlParameter),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_set2PowerControlParameter_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"set2PowerControlParameter"
		},
};
static const ber_tlv_tag_t asn_DEF_UplinkPowerControlDedicated_v1250_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UplinkPowerControlDedicated_v1250_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* set2PowerControlParameter */
};
asn_SEQUENCE_specifics_t asn_SPC_UplinkPowerControlDedicated_v1250_specs_1 = {
	sizeof(struct UplinkPowerControlDedicated_v1250),
	offsetof(struct UplinkPowerControlDedicated_v1250, _asn_ctx),
	asn_MAP_UplinkPowerControlDedicated_v1250_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UplinkPowerControlDedicated_v1250 = {
	"UplinkPowerControlDedicated-v1250",
	"UplinkPowerControlDedicated-v1250",
	&asn_OP_SEQUENCE,
	asn_DEF_UplinkPowerControlDedicated_v1250_tags_1,
	sizeof(asn_DEF_UplinkPowerControlDedicated_v1250_tags_1)
		/sizeof(asn_DEF_UplinkPowerControlDedicated_v1250_tags_1[0]), /* 1 */
	asn_DEF_UplinkPowerControlDedicated_v1250_tags_1,	/* Same as above */
	sizeof(asn_DEF_UplinkPowerControlDedicated_v1250_tags_1)
		/sizeof(asn_DEF_UplinkPowerControlDedicated_v1250_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UplinkPowerControlDedicated_v1250_1,
	1,	/* Elements count */
	&asn_SPC_UplinkPowerControlDedicated_v1250_specs_1	/* Additional specs */
};

