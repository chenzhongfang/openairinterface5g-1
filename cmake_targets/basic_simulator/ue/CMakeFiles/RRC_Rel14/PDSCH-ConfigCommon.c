/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#include "PDSCH-ConfigCommon.h"

static int
memb_referenceSignalPower_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -60 && value <= 50)) {
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
memb_p_b_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 3)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_referenceSignalPower_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7, -60,  50 }	/* (-60..50) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_p_b_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_PDSCH_ConfigCommon_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PDSCH_ConfigCommon, referenceSignalPower),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_referenceSignalPower_constr_2,  memb_referenceSignalPower_constraint_1 },
		0, 0, /* No default value */
		"referenceSignalPower"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDSCH_ConfigCommon, p_b),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_p_b_constr_3,  memb_p_b_constraint_1 },
		0, 0, /* No default value */
		"p-b"
		},
};
static const ber_tlv_tag_t asn_DEF_PDSCH_ConfigCommon_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PDSCH_ConfigCommon_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* referenceSignalPower */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* p-b */
};
asn_SEQUENCE_specifics_t asn_SPC_PDSCH_ConfigCommon_specs_1 = {
	sizeof(struct PDSCH_ConfigCommon),
	offsetof(struct PDSCH_ConfigCommon, _asn_ctx),
	asn_MAP_PDSCH_ConfigCommon_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PDSCH_ConfigCommon = {
	"PDSCH-ConfigCommon",
	"PDSCH-ConfigCommon",
	&asn_OP_SEQUENCE,
	asn_DEF_PDSCH_ConfigCommon_tags_1,
	sizeof(asn_DEF_PDSCH_ConfigCommon_tags_1)
		/sizeof(asn_DEF_PDSCH_ConfigCommon_tags_1[0]), /* 1 */
	asn_DEF_PDSCH_ConfigCommon_tags_1,	/* Same as above */
	sizeof(asn_DEF_PDSCH_ConfigCommon_tags_1)
		/sizeof(asn_DEF_PDSCH_ConfigCommon_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PDSCH_ConfigCommon_1,
	2,	/* Elements count */
	&asn_SPC_PDSCH_ConfigCommon_specs_1	/* Additional specs */
};

