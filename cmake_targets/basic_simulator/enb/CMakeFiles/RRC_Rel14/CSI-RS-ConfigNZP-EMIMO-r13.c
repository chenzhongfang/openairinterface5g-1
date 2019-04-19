/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "CSI-RS-ConfigNZP-EMIMO-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_nzp_resourceConfigList_r13_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 2)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_nzp_resourceConfigList_r13_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_cdmType_r13_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_nzp_resourceConfigList_r13_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_CSI_RS_ConfigNZP_EMIMO_r13_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_nzp_resourceConfigList_r13_4[] = {
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
static const ber_tlv_tag_t asn_DEF_nzp_resourceConfigList_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_nzp_resourceConfigList_r13_specs_4 = {
	sizeof(struct CSI_RS_ConfigNZP_EMIMO_r13__setup__nzp_resourceConfigList_r13),
	offsetof(struct CSI_RS_ConfigNZP_EMIMO_r13__setup__nzp_resourceConfigList_r13, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nzp_resourceConfigList_r13_4 = {
	"nzp-resourceConfigList-r13",
	"nzp-resourceConfigList-r13",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_nzp_resourceConfigList_r13_tags_4,
	sizeof(asn_DEF_nzp_resourceConfigList_r13_tags_4)
		/sizeof(asn_DEF_nzp_resourceConfigList_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_nzp_resourceConfigList_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_nzp_resourceConfigList_r13_tags_4)
		/sizeof(asn_DEF_nzp_resourceConfigList_r13_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_nzp_resourceConfigList_r13_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_nzp_resourceConfigList_r13_4,
	1,	/* Single element */
	&asn_SPC_nzp_resourceConfigList_r13_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_cdmType_r13_value2enum_6[] = {
	{ 0,	4,	"cdm2" },
	{ 1,	4,	"cdm4" }
};
static const unsigned int asn_MAP_cdmType_r13_enum2value_6[] = {
	0,	/* cdm2(0) */
	1	/* cdm4(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_cdmType_r13_specs_6 = {
	asn_MAP_cdmType_r13_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_cdmType_r13_enum2value_6,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_cdmType_r13_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cdmType_r13_6 = {
	"cdmType-r13",
	"cdmType-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_cdmType_r13_tags_6,
	sizeof(asn_DEF_cdmType_r13_tags_6)
		/sizeof(asn_DEF_cdmType_r13_tags_6[0]) - 1, /* 1 */
	asn_DEF_cdmType_r13_tags_6,	/* Same as above */
	sizeof(asn_DEF_cdmType_r13_tags_6)
		/sizeof(asn_DEF_cdmType_r13_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_cdmType_r13_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_cdmType_r13_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_ConfigNZP_EMIMO_r13__setup, nzp_resourceConfigList_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_nzp_resourceConfigList_r13_4,
		0,
		{ 0, &asn_PER_memb_nzp_resourceConfigList_r13_constr_4,  memb_nzp_resourceConfigList_r13_constraint_3 },
		0, 0, /* No default value */
		"nzp-resourceConfigList-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct CSI_RS_ConfigNZP_EMIMO_r13__setup, cdmType_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cdmType_r13_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cdmType-r13"
		},
};
static const int asn_MAP_setup_oms_3[] = { 1 };
static const ber_tlv_tag_t asn_DEF_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nzp-resourceConfigList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cdmType-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_3 = {
	sizeof(struct CSI_RS_ConfigNZP_EMIMO_r13__setup),
	offsetof(struct CSI_RS_ConfigNZP_EMIMO_r13__setup, _asn_ctx),
	asn_MAP_setup_tag2el_3,
	2,	/* Count of tags in the map */
	asn_MAP_setup_oms_3,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_3 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_setup_tags_3,
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]) - 1, /* 1 */
	asn_DEF_setup_tags_3,	/* Same as above */
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_setup_3,
	2,	/* Elements count */
	&asn_SPC_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CSI_RS_ConfigNZP_EMIMO_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_ConfigNZP_EMIMO_r13, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_ConfigNZP_EMIMO_r13, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_CSI_RS_ConfigNZP_EMIMO_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_CSI_RS_ConfigNZP_EMIMO_r13_specs_1 = {
	sizeof(struct CSI_RS_ConfigNZP_EMIMO_r13),
	offsetof(struct CSI_RS_ConfigNZP_EMIMO_r13, _asn_ctx),
	offsetof(struct CSI_RS_ConfigNZP_EMIMO_r13, present),
	sizeof(((struct CSI_RS_ConfigNZP_EMIMO_r13 *)0)->present),
	asn_MAP_CSI_RS_ConfigNZP_EMIMO_r13_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_CSI_RS_ConfigNZP_EMIMO_r13 = {
	"CSI-RS-ConfigNZP-EMIMO-r13",
	"CSI-RS-ConfigNZP-EMIMO-r13",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_CSI_RS_ConfigNZP_EMIMO_r13_constr_1, CHOICE_constraint },
	asn_MBR_CSI_RS_ConfigNZP_EMIMO_r13_1,
	2,	/* Elements count */
	&asn_SPC_CSI_RS_ConfigNZP_EMIMO_r13_specs_1	/* Additional specs */
};

