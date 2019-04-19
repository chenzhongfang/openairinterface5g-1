/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "CSI-RS-ConfigNZP-EMIMO-v1430.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_nzp_resourceConfigListExt_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size <= 4)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_nzp_resourceConfigListExt_r14_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (SIZE(0..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_cdmType_v1430_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_nzp_resourceConfigListExt_r14_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (SIZE(0..4)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_nzp_resourceConfigListExt_r14_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NZP_ResourceConfig_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_nzp_resourceConfigListExt_r14_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_nzp_resourceConfigListExt_r14_specs_2 = {
	sizeof(struct CSI_RS_ConfigNZP_EMIMO_v1430__nzp_resourceConfigListExt_r14),
	offsetof(struct CSI_RS_ConfigNZP_EMIMO_v1430__nzp_resourceConfigListExt_r14, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nzp_resourceConfigListExt_r14_2 = {
	"nzp-resourceConfigListExt-r14",
	"nzp-resourceConfigListExt-r14",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_nzp_resourceConfigListExt_r14_tags_2,
	sizeof(asn_DEF_nzp_resourceConfigListExt_r14_tags_2)
		/sizeof(asn_DEF_nzp_resourceConfigListExt_r14_tags_2[0]) - 1, /* 1 */
	asn_DEF_nzp_resourceConfigListExt_r14_tags_2,	/* Same as above */
	sizeof(asn_DEF_nzp_resourceConfigListExt_r14_tags_2)
		/sizeof(asn_DEF_nzp_resourceConfigListExt_r14_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_nzp_resourceConfigListExt_r14_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_nzp_resourceConfigListExt_r14_2,
	1,	/* Single element */
	&asn_SPC_nzp_resourceConfigListExt_r14_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_cdmType_v1430_value2enum_4[] = {
	{ 0,	4,	"cdm8" }
};
static const unsigned int asn_MAP_cdmType_v1430_enum2value_4[] = {
	0	/* cdm8(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_cdmType_v1430_specs_4 = {
	asn_MAP_cdmType_v1430_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_cdmType_v1430_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_cdmType_v1430_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cdmType_v1430_4 = {
	"cdmType-v1430",
	"cdmType-v1430",
	&asn_OP_NativeEnumerated,
	asn_DEF_cdmType_v1430_tags_4,
	sizeof(asn_DEF_cdmType_v1430_tags_4)
		/sizeof(asn_DEF_cdmType_v1430_tags_4[0]) - 1, /* 1 */
	asn_DEF_cdmType_v1430_tags_4,	/* Same as above */
	sizeof(asn_DEF_cdmType_v1430_tags_4)
		/sizeof(asn_DEF_cdmType_v1430_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_cdmType_v1430_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_cdmType_v1430_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CSI_RS_ConfigNZP_EMIMO_v1430_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_ConfigNZP_EMIMO_v1430, nzp_resourceConfigListExt_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_nzp_resourceConfigListExt_r14_2,
		0,
		{ 0, &asn_PER_memb_nzp_resourceConfigListExt_r14_constr_2,  memb_nzp_resourceConfigListExt_r14_constraint_1 },
		0, 0, /* No default value */
		"nzp-resourceConfigListExt-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct CSI_RS_ConfigNZP_EMIMO_v1430, cdmType_v1430),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cdmType_v1430_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cdmType-v1430"
		},
};
static const int asn_MAP_CSI_RS_ConfigNZP_EMIMO_v1430_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_CSI_RS_ConfigNZP_EMIMO_v1430_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CSI_RS_ConfigNZP_EMIMO_v1430_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nzp-resourceConfigListExt-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cdmType-v1430 */
};
asn_SEQUENCE_specifics_t asn_SPC_CSI_RS_ConfigNZP_EMIMO_v1430_specs_1 = {
	sizeof(struct CSI_RS_ConfigNZP_EMIMO_v1430),
	offsetof(struct CSI_RS_ConfigNZP_EMIMO_v1430, _asn_ctx),
	asn_MAP_CSI_RS_ConfigNZP_EMIMO_v1430_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_CSI_RS_ConfigNZP_EMIMO_v1430_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CSI_RS_ConfigNZP_EMIMO_v1430 = {
	"CSI-RS-ConfigNZP-EMIMO-v1430",
	"CSI-RS-ConfigNZP-EMIMO-v1430",
	&asn_OP_SEQUENCE,
	asn_DEF_CSI_RS_ConfigNZP_EMIMO_v1430_tags_1,
	sizeof(asn_DEF_CSI_RS_ConfigNZP_EMIMO_v1430_tags_1)
		/sizeof(asn_DEF_CSI_RS_ConfigNZP_EMIMO_v1430_tags_1[0]), /* 1 */
	asn_DEF_CSI_RS_ConfigNZP_EMIMO_v1430_tags_1,	/* Same as above */
	sizeof(asn_DEF_CSI_RS_ConfigNZP_EMIMO_v1430_tags_1)
		/sizeof(asn_DEF_CSI_RS_ConfigNZP_EMIMO_v1430_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CSI_RS_ConfigNZP_EMIMO_v1430_1,
	2,	/* Elements count */
	&asn_SPC_CSI_RS_ConfigNZP_EMIMO_v1430_specs_1	/* Additional specs */
};

