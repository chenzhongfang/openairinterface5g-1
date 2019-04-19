/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "DRB-InfoSCG-r12.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_eps_BearerIdentity_r12_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_per_constraints_t asn_PER_type_drb_Type_r12_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_eps_BearerIdentity_r12_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_drb_Type_r12_value2enum_4[] = {
	{ 0,	5,	"split" },
	{ 1,	3,	"scg" }
};
static const unsigned int asn_MAP_drb_Type_r12_enum2value_4[] = {
	1,	/* scg(1) */
	0	/* split(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_drb_Type_r12_specs_4 = {
	asn_MAP_drb_Type_r12_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_drb_Type_r12_enum2value_4,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_drb_Type_r12_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_drb_Type_r12_4 = {
	"drb-Type-r12",
	"drb-Type-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_drb_Type_r12_tags_4,
	sizeof(asn_DEF_drb_Type_r12_tags_4)
		/sizeof(asn_DEF_drb_Type_r12_tags_4[0]) - 1, /* 1 */
	asn_DEF_drb_Type_r12_tags_4,	/* Same as above */
	sizeof(asn_DEF_drb_Type_r12_tags_4)
		/sizeof(asn_DEF_drb_Type_r12_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_drb_Type_r12_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_drb_Type_r12_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_DRB_InfoSCG_r12_1[] = {
	{ ATF_POINTER, 1, offsetof(struct DRB_InfoSCG_r12, eps_BearerIdentity_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_eps_BearerIdentity_r12_constr_2,  memb_eps_BearerIdentity_r12_constraint_1 },
		0, 0, /* No default value */
		"eps-BearerIdentity-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRB_InfoSCG_r12, drb_Identity_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DRB_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drb-Identity-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct DRB_InfoSCG_r12, drb_Type_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_drb_Type_r12_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drb-Type-r12"
		},
};
static const int asn_MAP_DRB_InfoSCG_r12_oms_1[] = { 0, 2 };
static const ber_tlv_tag_t asn_DEF_DRB_InfoSCG_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DRB_InfoSCG_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eps-BearerIdentity-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* drb-Identity-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* drb-Type-r12 */
};
asn_SEQUENCE_specifics_t asn_SPC_DRB_InfoSCG_r12_specs_1 = {
	sizeof(struct DRB_InfoSCG_r12),
	offsetof(struct DRB_InfoSCG_r12, _asn_ctx),
	asn_MAP_DRB_InfoSCG_r12_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_DRB_InfoSCG_r12_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DRB_InfoSCG_r12 = {
	"DRB-InfoSCG-r12",
	"DRB-InfoSCG-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_DRB_InfoSCG_r12_tags_1,
	sizeof(asn_DEF_DRB_InfoSCG_r12_tags_1)
		/sizeof(asn_DEF_DRB_InfoSCG_r12_tags_1[0]), /* 1 */
	asn_DEF_DRB_InfoSCG_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_DRB_InfoSCG_r12_tags_1)
		/sizeof(asn_DEF_DRB_InfoSCG_r12_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DRB_InfoSCG_r12_1,
	3,	/* Elements count */
	&asn_SPC_DRB_InfoSCG_r12_specs_1	/* Additional specs */
};

