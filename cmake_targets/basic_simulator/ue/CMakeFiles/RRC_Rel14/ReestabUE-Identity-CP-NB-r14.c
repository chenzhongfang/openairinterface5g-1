/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#include "ReestabUE-Identity-CP-NB-r14.h"

static int
memb_ul_NAS_MAC_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 16)) {
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
memb_ul_NAS_Count_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 5)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_ul_NAS_MAC_r14_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ul_NAS_Count_r14_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  5,  5 }	/* (SIZE(5..5)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_ReestabUE_Identity_CP_NB_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ReestabUE_Identity_CP_NB_r14, s_TMSI_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S_TMSI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"s-TMSI-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReestabUE_Identity_CP_NB_r14, ul_NAS_MAC_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_ul_NAS_MAC_r14_constr_3,  memb_ul_NAS_MAC_r14_constraint_1 },
		0, 0, /* No default value */
		"ul-NAS-MAC-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReestabUE_Identity_CP_NB_r14, ul_NAS_Count_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_ul_NAS_Count_r14_constr_4,  memb_ul_NAS_Count_r14_constraint_1 },
		0, 0, /* No default value */
		"ul-NAS-Count-r14"
		},
};
static const ber_tlv_tag_t asn_DEF_ReestabUE_Identity_CP_NB_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ReestabUE_Identity_CP_NB_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* s-TMSI-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ul-NAS-MAC-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ul-NAS-Count-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_ReestabUE_Identity_CP_NB_r14_specs_1 = {
	sizeof(struct ReestabUE_Identity_CP_NB_r14),
	offsetof(struct ReestabUE_Identity_CP_NB_r14, _asn_ctx),
	asn_MAP_ReestabUE_Identity_CP_NB_r14_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ReestabUE_Identity_CP_NB_r14 = {
	"ReestabUE-Identity-CP-NB-r14",
	"ReestabUE-Identity-CP-NB-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_ReestabUE_Identity_CP_NB_r14_tags_1,
	sizeof(asn_DEF_ReestabUE_Identity_CP_NB_r14_tags_1)
		/sizeof(asn_DEF_ReestabUE_Identity_CP_NB_r14_tags_1[0]), /* 1 */
	asn_DEF_ReestabUE_Identity_CP_NB_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_ReestabUE_Identity_CP_NB_r14_tags_1)
		/sizeof(asn_DEF_ReestabUE_Identity_CP_NB_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ReestabUE_Identity_CP_NB_r14_1,
	3,	/* Elements count */
	&asn_SPC_ReestabUE_Identity_CP_NB_r14_specs_1	/* Additional specs */
};

