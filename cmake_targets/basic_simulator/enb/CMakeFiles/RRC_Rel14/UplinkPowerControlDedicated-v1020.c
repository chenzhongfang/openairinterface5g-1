/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "UplinkPowerControlDedicated-v1020.h"

static int
memb_pSRS_OffsetAp_r10_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_per_constraints_t asn_PER_memb_pSRS_OffsetAp_r10_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_UplinkPowerControlDedicated_v1020_1[] = {
	{ ATF_POINTER, 2, offsetof(struct UplinkPowerControlDedicated_v1020, deltaTxD_OffsetListPUCCH_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DeltaTxD_OffsetListPUCCH_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"deltaTxD-OffsetListPUCCH-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct UplinkPowerControlDedicated_v1020, pSRS_OffsetAp_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_pSRS_OffsetAp_r10_constr_3,  memb_pSRS_OffsetAp_r10_constraint_1 },
		0, 0, /* No default value */
		"pSRS-OffsetAp-r10"
		},
};
static const int asn_MAP_UplinkPowerControlDedicated_v1020_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_UplinkPowerControlDedicated_v1020_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UplinkPowerControlDedicated_v1020_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* deltaTxD-OffsetListPUCCH-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* pSRS-OffsetAp-r10 */
};
asn_SEQUENCE_specifics_t asn_SPC_UplinkPowerControlDedicated_v1020_specs_1 = {
	sizeof(struct UplinkPowerControlDedicated_v1020),
	offsetof(struct UplinkPowerControlDedicated_v1020, _asn_ctx),
	asn_MAP_UplinkPowerControlDedicated_v1020_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_UplinkPowerControlDedicated_v1020_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UplinkPowerControlDedicated_v1020 = {
	"UplinkPowerControlDedicated-v1020",
	"UplinkPowerControlDedicated-v1020",
	&asn_OP_SEQUENCE,
	asn_DEF_UplinkPowerControlDedicated_v1020_tags_1,
	sizeof(asn_DEF_UplinkPowerControlDedicated_v1020_tags_1)
		/sizeof(asn_DEF_UplinkPowerControlDedicated_v1020_tags_1[0]), /* 1 */
	asn_DEF_UplinkPowerControlDedicated_v1020_tags_1,	/* Same as above */
	sizeof(asn_DEF_UplinkPowerControlDedicated_v1020_tags_1)
		/sizeof(asn_DEF_UplinkPowerControlDedicated_v1020_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UplinkPowerControlDedicated_v1020_1,
	2,	/* Elements count */
	&asn_SPC_UplinkPowerControlDedicated_v1020_specs_1	/* Additional specs */
};

