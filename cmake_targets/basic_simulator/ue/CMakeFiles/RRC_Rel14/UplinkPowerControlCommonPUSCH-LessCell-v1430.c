/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#include "UplinkPowerControlCommonPUSCH-LessCell-v1430.h"

static int
memb_p0_Nominal_PeriodicSRS_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_p0_Nominal_AperiodicSRS_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_per_constraints_t asn_PER_memb_p0_Nominal_PeriodicSRS_r14_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8, -126,  24 }	/* (-126..24) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_p0_Nominal_AperiodicSRS_r14_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8, -126,  24 }	/* (-126..24) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_UplinkPowerControlCommonPUSCH_LessCell_v1430_1[] = {
	{ ATF_POINTER, 3, offsetof(struct UplinkPowerControlCommonPUSCH_LessCell_v1430, p0_Nominal_PeriodicSRS_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_p0_Nominal_PeriodicSRS_r14_constr_2,  memb_p0_Nominal_PeriodicSRS_r14_constraint_1 },
		0, 0, /* No default value */
		"p0-Nominal-PeriodicSRS-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct UplinkPowerControlCommonPUSCH_LessCell_v1430, p0_Nominal_AperiodicSRS_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_p0_Nominal_AperiodicSRS_r14_constr_3,  memb_p0_Nominal_AperiodicSRS_r14_constraint_1 },
		0, 0, /* No default value */
		"p0-Nominal-AperiodicSRS-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct UplinkPowerControlCommonPUSCH_LessCell_v1430, alpha_SRS_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Alpha_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"alpha-SRS-r14"
		},
};
static const int asn_MAP_UplinkPowerControlCommonPUSCH_LessCell_v1430_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_UplinkPowerControlCommonPUSCH_LessCell_v1430_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UplinkPowerControlCommonPUSCH_LessCell_v1430_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* p0-Nominal-PeriodicSRS-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* p0-Nominal-AperiodicSRS-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* alpha-SRS-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_UplinkPowerControlCommonPUSCH_LessCell_v1430_specs_1 = {
	sizeof(struct UplinkPowerControlCommonPUSCH_LessCell_v1430),
	offsetof(struct UplinkPowerControlCommonPUSCH_LessCell_v1430, _asn_ctx),
	asn_MAP_UplinkPowerControlCommonPUSCH_LessCell_v1430_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_UplinkPowerControlCommonPUSCH_LessCell_v1430_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UplinkPowerControlCommonPUSCH_LessCell_v1430 = {
	"UplinkPowerControlCommonPUSCH-LessCell-v1430",
	"UplinkPowerControlCommonPUSCH-LessCell-v1430",
	&asn_OP_SEQUENCE,
	asn_DEF_UplinkPowerControlCommonPUSCH_LessCell_v1430_tags_1,
	sizeof(asn_DEF_UplinkPowerControlCommonPUSCH_LessCell_v1430_tags_1)
		/sizeof(asn_DEF_UplinkPowerControlCommonPUSCH_LessCell_v1430_tags_1[0]), /* 1 */
	asn_DEF_UplinkPowerControlCommonPUSCH_LessCell_v1430_tags_1,	/* Same as above */
	sizeof(asn_DEF_UplinkPowerControlCommonPUSCH_LessCell_v1430_tags_1)
		/sizeof(asn_DEF_UplinkPowerControlCommonPUSCH_LessCell_v1430_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UplinkPowerControlCommonPUSCH_LessCell_v1430_1,
	3,	/* Elements count */
	&asn_SPC_UplinkPowerControlCommonPUSCH_LessCell_v1430_specs_1	/* Additional specs */
};

