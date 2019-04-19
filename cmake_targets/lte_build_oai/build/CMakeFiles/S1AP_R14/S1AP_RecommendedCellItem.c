/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/user/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/S1AP_R14`
 */

#include "S1AP_RecommendedCellItem.h"

#include "S1AP_ProtocolExtensionContainer.h"
static int
memb_S1AP_timeStayedInCell_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 4095)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_S1AP_timeStayedInCell_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 12,  12,  0,  4095 }	/* (0..4095) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_S1AP_RecommendedCellItem_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_RecommendedCellItem, eUTRAN_CGI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_EUTRAN_CGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eUTRAN-CGI"
		},
	{ ATF_POINTER, 2, offsetof(struct S1AP_RecommendedCellItem, timeStayedInCell),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_S1AP_timeStayedInCell_constr_3,  memb_S1AP_timeStayedInCell_constraint_1 },
		0, 0, /* No default value */
		"timeStayedInCell"
		},
	{ ATF_POINTER, 1, offsetof(struct S1AP_RecommendedCellItem, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_ProtocolExtensionContainer_6628P81,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_S1AP_RecommendedCellItem_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_S1AP_RecommendedCellItem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_RecommendedCellItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eUTRAN-CGI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* timeStayedInCell */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_S1AP_RecommendedCellItem_specs_1 = {
	sizeof(struct S1AP_RecommendedCellItem),
	offsetof(struct S1AP_RecommendedCellItem, _asn_ctx),
	asn_MAP_S1AP_RecommendedCellItem_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_S1AP_RecommendedCellItem_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_RecommendedCellItem = {
	"RecommendedCellItem",
	"RecommendedCellItem",
	&asn_OP_SEQUENCE,
	asn_DEF_S1AP_RecommendedCellItem_tags_1,
	sizeof(asn_DEF_S1AP_RecommendedCellItem_tags_1)
		/sizeof(asn_DEF_S1AP_RecommendedCellItem_tags_1[0]), /* 1 */
	asn_DEF_S1AP_RecommendedCellItem_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_RecommendedCellItem_tags_1)
		/sizeof(asn_DEF_S1AP_RecommendedCellItem_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_S1AP_RecommendedCellItem_1,
	3,	/* Elements count */
	&asn_SPC_S1AP_RecommendedCellItem_specs_1	/* Additional specs */
};

