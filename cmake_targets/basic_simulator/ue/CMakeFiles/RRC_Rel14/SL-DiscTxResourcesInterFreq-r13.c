/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#include "SL-DiscTxResourcesInterFreq-r13.h"

asn_per_constraints_t asn_PER_type_SL_DiscTxResourcesInterFreq_r13_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_SL_DiscTxResourcesInterFreq_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_DiscTxResourcesInterFreq_r13, choice.acquireSI_FromCarrier_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"acquireSI-FromCarrier-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_DiscTxResourcesInterFreq_r13, choice.discTxPoolCommon_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_DiscTxPoolList_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discTxPoolCommon-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_DiscTxResourcesInterFreq_r13, choice.requestDedicated_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"requestDedicated-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_DiscTxResourcesInterFreq_r13, choice.noTxOnCarrier_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"noTxOnCarrier-r13"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_SL_DiscTxResourcesInterFreq_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* acquireSI-FromCarrier-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* discTxPoolCommon-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* requestDedicated-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* noTxOnCarrier-r13 */
};
asn_CHOICE_specifics_t asn_SPC_SL_DiscTxResourcesInterFreq_r13_specs_1 = {
	sizeof(struct SL_DiscTxResourcesInterFreq_r13),
	offsetof(struct SL_DiscTxResourcesInterFreq_r13, _asn_ctx),
	offsetof(struct SL_DiscTxResourcesInterFreq_r13, present),
	sizeof(((struct SL_DiscTxResourcesInterFreq_r13 *)0)->present),
	asn_MAP_SL_DiscTxResourcesInterFreq_r13_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_SL_DiscTxResourcesInterFreq_r13 = {
	"SL-DiscTxResourcesInterFreq-r13",
	"SL-DiscTxResourcesInterFreq-r13",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_SL_DiscTxResourcesInterFreq_r13_constr_1, CHOICE_constraint },
	asn_MBR_SL_DiscTxResourcesInterFreq_r13_1,
	4,	/* Elements count */
	&asn_SPC_SL_DiscTxResourcesInterFreq_r13_specs_1	/* Additional specs */
};

