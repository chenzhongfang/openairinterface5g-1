/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/user/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/X2AP_R14`
 */

#include "X2AP_CoMPHypothesisSetItem.h"

#include "X2AP_ProtocolExtensionContainer.h"
static int
memb_X2AP_coMPHypothesis_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 6 && size <= 4400)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_X2AP_coMPHypothesis_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  13,  13,  6,  4400 }	/* (SIZE(6..4400,...)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_X2AP_CoMPHypothesisSetItem_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_CoMPHypothesisSetItem, coMPCellID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ECGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"coMPCellID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_CoMPHypothesisSetItem, coMPHypothesis),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_X2AP_coMPHypothesis_constr_3,  memb_X2AP_coMPHypothesis_constraint_1 },
		0, 0, /* No default value */
		"coMPHypothesis"
		},
	{ ATF_POINTER, 1, offsetof(struct X2AP_CoMPHypothesisSetItem, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ProtocolExtensionContainer_5040P53,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_X2AP_CoMPHypothesisSetItem_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_X2AP_CoMPHypothesisSetItem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_CoMPHypothesisSetItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* coMPCellID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* coMPHypothesis */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_X2AP_CoMPHypothesisSetItem_specs_1 = {
	sizeof(struct X2AP_CoMPHypothesisSetItem),
	offsetof(struct X2AP_CoMPHypothesisSetItem, _asn_ctx),
	asn_MAP_X2AP_CoMPHypothesisSetItem_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_X2AP_CoMPHypothesisSetItem_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_CoMPHypothesisSetItem = {
	"CoMPHypothesisSetItem",
	"CoMPHypothesisSetItem",
	&asn_OP_SEQUENCE,
	asn_DEF_X2AP_CoMPHypothesisSetItem_tags_1,
	sizeof(asn_DEF_X2AP_CoMPHypothesisSetItem_tags_1)
		/sizeof(asn_DEF_X2AP_CoMPHypothesisSetItem_tags_1[0]), /* 1 */
	asn_DEF_X2AP_CoMPHypothesisSetItem_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_CoMPHypothesisSetItem_tags_1)
		/sizeof(asn_DEF_X2AP_CoMPHypothesisSetItem_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_X2AP_CoMPHypothesisSetItem_1,
	3,	/* Elements count */
	&asn_SPC_X2AP_CoMPHypothesisSetItem_specs_1	/* Additional specs */
};

