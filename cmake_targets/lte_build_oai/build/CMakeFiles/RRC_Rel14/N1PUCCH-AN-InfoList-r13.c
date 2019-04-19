/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "N1PUCCH-AN-InfoList-r13.h"

static int
memb_NativeInteger_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_per_constraints_t asn_PER_memb_Member_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  0,  2047 }	/* (0..2047) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_N1PUCCH_AN_InfoList_r13_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_N1PUCCH_AN_InfoList_r13_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_Member_constr_2,  memb_NativeInteger_constraint_1 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_N1PUCCH_AN_InfoList_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_N1PUCCH_AN_InfoList_r13_specs_1 = {
	sizeof(struct N1PUCCH_AN_InfoList_r13),
	offsetof(struct N1PUCCH_AN_InfoList_r13, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_N1PUCCH_AN_InfoList_r13 = {
	"N1PUCCH-AN-InfoList-r13",
	"N1PUCCH-AN-InfoList-r13",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_N1PUCCH_AN_InfoList_r13_tags_1,
	sizeof(asn_DEF_N1PUCCH_AN_InfoList_r13_tags_1)
		/sizeof(asn_DEF_N1PUCCH_AN_InfoList_r13_tags_1[0]), /* 1 */
	asn_DEF_N1PUCCH_AN_InfoList_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_N1PUCCH_AN_InfoList_r13_tags_1)
		/sizeof(asn_DEF_N1PUCCH_AN_InfoList_r13_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_N1PUCCH_AN_InfoList_r13_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_N1PUCCH_AN_InfoList_r13_1,
	1,	/* Single element */
	&asn_SPC_N1PUCCH_AN_InfoList_r13_specs_1	/* Additional specs */
};

