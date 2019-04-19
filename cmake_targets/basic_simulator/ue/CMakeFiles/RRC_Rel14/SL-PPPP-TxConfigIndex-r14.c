/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#include "SL-PPPP-TxConfigIndex-r14.h"

static int
memb_defaultTxConfigIndex_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_cbr_ConfigIndex_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static int
memb_tx_ConfigIndexList_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 16)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_tx_ConfigIndexList_r14_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_defaultTxConfigIndex_r14_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_cbr_ConfigIndex_r14_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_tx_ConfigIndexList_r14_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_tx_ConfigIndexList_r14_5[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_Tx_ConfigIndex_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_tx_ConfigIndexList_r14_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_tx_ConfigIndexList_r14_specs_5 = {
	sizeof(struct SL_PPPP_TxConfigIndex_r14__tx_ConfigIndexList_r14),
	offsetof(struct SL_PPPP_TxConfigIndex_r14__tx_ConfigIndexList_r14, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tx_ConfigIndexList_r14_5 = {
	"tx-ConfigIndexList-r14",
	"tx-ConfigIndexList-r14",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_tx_ConfigIndexList_r14_tags_5,
	sizeof(asn_DEF_tx_ConfigIndexList_r14_tags_5)
		/sizeof(asn_DEF_tx_ConfigIndexList_r14_tags_5[0]) - 1, /* 1 */
	asn_DEF_tx_ConfigIndexList_r14_tags_5,	/* Same as above */
	sizeof(asn_DEF_tx_ConfigIndexList_r14_tags_5)
		/sizeof(asn_DEF_tx_ConfigIndexList_r14_tags_5[0]), /* 2 */
	{ 0, &asn_PER_type_tx_ConfigIndexList_r14_constr_5, SEQUENCE_OF_constraint },
	asn_MBR_tx_ConfigIndexList_r14_5,
	1,	/* Single element */
	&asn_SPC_tx_ConfigIndexList_r14_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SL_PPPP_TxConfigIndex_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PPPP_TxConfigIndex_r14, priorityThreshold_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_Priority_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"priorityThreshold-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PPPP_TxConfigIndex_r14, defaultTxConfigIndex_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_defaultTxConfigIndex_r14_constr_3,  memb_defaultTxConfigIndex_r14_constraint_1 },
		0, 0, /* No default value */
		"defaultTxConfigIndex-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PPPP_TxConfigIndex_r14, cbr_ConfigIndex_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_cbr_ConfigIndex_r14_constr_4,  memb_cbr_ConfigIndex_r14_constraint_1 },
		0, 0, /* No default value */
		"cbr-ConfigIndex-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PPPP_TxConfigIndex_r14, tx_ConfigIndexList_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_tx_ConfigIndexList_r14_5,
		0,
		{ 0, &asn_PER_memb_tx_ConfigIndexList_r14_constr_5,  memb_tx_ConfigIndexList_r14_constraint_1 },
		0, 0, /* No default value */
		"tx-ConfigIndexList-r14"
		},
};
static const ber_tlv_tag_t asn_DEF_SL_PPPP_TxConfigIndex_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_PPPP_TxConfigIndex_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* priorityThreshold-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* defaultTxConfigIndex-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cbr-ConfigIndex-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* tx-ConfigIndexList-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_SL_PPPP_TxConfigIndex_r14_specs_1 = {
	sizeof(struct SL_PPPP_TxConfigIndex_r14),
	offsetof(struct SL_PPPP_TxConfigIndex_r14, _asn_ctx),
	asn_MAP_SL_PPPP_TxConfigIndex_r14_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_PPPP_TxConfigIndex_r14 = {
	"SL-PPPP-TxConfigIndex-r14",
	"SL-PPPP-TxConfigIndex-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_PPPP_TxConfigIndex_r14_tags_1,
	sizeof(asn_DEF_SL_PPPP_TxConfigIndex_r14_tags_1)
		/sizeof(asn_DEF_SL_PPPP_TxConfigIndex_r14_tags_1[0]), /* 1 */
	asn_DEF_SL_PPPP_TxConfigIndex_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_PPPP_TxConfigIndex_r14_tags_1)
		/sizeof(asn_DEF_SL_PPPP_TxConfigIndex_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SL_PPPP_TxConfigIndex_r14_1,
	4,	/* Elements count */
	&asn_SPC_SL_PPPP_TxConfigIndex_r14_specs_1	/* Additional specs */
};

