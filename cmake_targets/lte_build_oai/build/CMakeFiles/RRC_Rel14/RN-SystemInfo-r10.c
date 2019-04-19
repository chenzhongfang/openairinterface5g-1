/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "RN-SystemInfo-r10.h"

static int
memb_systemInformationBlockType1_r10_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		(void)st; /* Unused variable */
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static asn_per_constraints_t asn_PER_memb_systemInformationBlockType1_r10_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_RN_SystemInfo_r10_1[] = {
	{ ATF_POINTER, 2, offsetof(struct RN_SystemInfo_r10, systemInformationBlockType1_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_systemInformationBlockType1_r10_constr_2,  memb_systemInformationBlockType1_r10_constraint_1 },
		0, 0, /* No default value */
		"systemInformationBlockType1-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct RN_SystemInfo_r10, systemInformationBlockType2_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"systemInformationBlockType2-r10"
		},
};
static const int asn_MAP_RN_SystemInfo_r10_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_RN_SystemInfo_r10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RN_SystemInfo_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* systemInformationBlockType1-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* systemInformationBlockType2-r10 */
};
asn_SEQUENCE_specifics_t asn_SPC_RN_SystemInfo_r10_specs_1 = {
	sizeof(struct RN_SystemInfo_r10),
	offsetof(struct RN_SystemInfo_r10, _asn_ctx),
	asn_MAP_RN_SystemInfo_r10_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_RN_SystemInfo_r10_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RN_SystemInfo_r10 = {
	"RN-SystemInfo-r10",
	"RN-SystemInfo-r10",
	&asn_OP_SEQUENCE,
	asn_DEF_RN_SystemInfo_r10_tags_1,
	sizeof(asn_DEF_RN_SystemInfo_r10_tags_1)
		/sizeof(asn_DEF_RN_SystemInfo_r10_tags_1[0]), /* 1 */
	asn_DEF_RN_SystemInfo_r10_tags_1,	/* Same as above */
	sizeof(asn_DEF_RN_SystemInfo_r10_tags_1)
		/sizeof(asn_DEF_RN_SystemInfo_r10_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RN_SystemInfo_r10_1,
	2,	/* Elements count */
	&asn_SPC_RN_SystemInfo_r10_specs_1	/* Additional specs */
};

