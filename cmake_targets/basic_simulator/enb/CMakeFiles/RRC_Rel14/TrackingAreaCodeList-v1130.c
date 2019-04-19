/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "TrackingAreaCodeList-v1130.h"

static int
memb_plmn_Identity_perTAC_List_r11_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 8)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_plmn_Identity_perTAC_List_r11_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_plmn_Identity_perTAC_List_r11_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_plmn_Identity_perTAC_List_r11_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_PLMN_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_plmn_Identity_perTAC_List_r11_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_plmn_Identity_perTAC_List_r11_specs_2 = {
	sizeof(struct TrackingAreaCodeList_v1130__plmn_Identity_perTAC_List_r11),
	offsetof(struct TrackingAreaCodeList_v1130__plmn_Identity_perTAC_List_r11, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_plmn_Identity_perTAC_List_r11_2 = {
	"plmn-Identity-perTAC-List-r11",
	"plmn-Identity-perTAC-List-r11",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_plmn_Identity_perTAC_List_r11_tags_2,
	sizeof(asn_DEF_plmn_Identity_perTAC_List_r11_tags_2)
		/sizeof(asn_DEF_plmn_Identity_perTAC_List_r11_tags_2[0]) - 1, /* 1 */
	asn_DEF_plmn_Identity_perTAC_List_r11_tags_2,	/* Same as above */
	sizeof(asn_DEF_plmn_Identity_perTAC_List_r11_tags_2)
		/sizeof(asn_DEF_plmn_Identity_perTAC_List_r11_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_plmn_Identity_perTAC_List_r11_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_plmn_Identity_perTAC_List_r11_2,
	1,	/* Single element */
	&asn_SPC_plmn_Identity_perTAC_List_r11_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_TrackingAreaCodeList_v1130_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TrackingAreaCodeList_v1130, plmn_Identity_perTAC_List_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_plmn_Identity_perTAC_List_r11_2,
		0,
		{ 0, &asn_PER_memb_plmn_Identity_perTAC_List_r11_constr_2,  memb_plmn_Identity_perTAC_List_r11_constraint_1 },
		0, 0, /* No default value */
		"plmn-Identity-perTAC-List-r11"
		},
};
static const ber_tlv_tag_t asn_DEF_TrackingAreaCodeList_v1130_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TrackingAreaCodeList_v1130_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* plmn-Identity-perTAC-List-r11 */
};
asn_SEQUENCE_specifics_t asn_SPC_TrackingAreaCodeList_v1130_specs_1 = {
	sizeof(struct TrackingAreaCodeList_v1130),
	offsetof(struct TrackingAreaCodeList_v1130, _asn_ctx),
	asn_MAP_TrackingAreaCodeList_v1130_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TrackingAreaCodeList_v1130 = {
	"TrackingAreaCodeList-v1130",
	"TrackingAreaCodeList-v1130",
	&asn_OP_SEQUENCE,
	asn_DEF_TrackingAreaCodeList_v1130_tags_1,
	sizeof(asn_DEF_TrackingAreaCodeList_v1130_tags_1)
		/sizeof(asn_DEF_TrackingAreaCodeList_v1130_tags_1[0]), /* 1 */
	asn_DEF_TrackingAreaCodeList_v1130_tags_1,	/* Same as above */
	sizeof(asn_DEF_TrackingAreaCodeList_v1130_tags_1)
		/sizeof(asn_DEF_TrackingAreaCodeList_v1130_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_TrackingAreaCodeList_v1130_1,
	1,	/* Elements count */
	&asn_SPC_TrackingAreaCodeList_v1130_specs_1	/* Additional specs */
};

