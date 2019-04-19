/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "CSI-RS-ConfigNZP-Activation-r14.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_activatedResources_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 4)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_csi_RS_NZP_mode_r14_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_activatedResources_r14_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_csi_RS_NZP_mode_r14_value2enum_2[] = {
	{ 0,	14,	"semiPersistent" },
	{ 1,	9,	"aperiodic" }
};
static const unsigned int asn_MAP_csi_RS_NZP_mode_r14_enum2value_2[] = {
	1,	/* aperiodic(1) */
	0	/* semiPersistent(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_csi_RS_NZP_mode_r14_specs_2 = {
	asn_MAP_csi_RS_NZP_mode_r14_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_csi_RS_NZP_mode_r14_enum2value_2,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_csi_RS_NZP_mode_r14_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_csi_RS_NZP_mode_r14_2 = {
	"csi-RS-NZP-mode-r14",
	"csi-RS-NZP-mode-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_csi_RS_NZP_mode_r14_tags_2,
	sizeof(asn_DEF_csi_RS_NZP_mode_r14_tags_2)
		/sizeof(asn_DEF_csi_RS_NZP_mode_r14_tags_2[0]) - 1, /* 1 */
	asn_DEF_csi_RS_NZP_mode_r14_tags_2,	/* Same as above */
	sizeof(asn_DEF_csi_RS_NZP_mode_r14_tags_2)
		/sizeof(asn_DEF_csi_RS_NZP_mode_r14_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_csi_RS_NZP_mode_r14_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_csi_RS_NZP_mode_r14_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CSI_RS_ConfigNZP_Activation_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_ConfigNZP_Activation_r14, csi_RS_NZP_mode_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_csi_RS_NZP_mode_r14_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-RS-NZP-mode-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_ConfigNZP_Activation_r14, activatedResources_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_activatedResources_r14_constr_5,  memb_activatedResources_r14_constraint_1 },
		0, 0, /* No default value */
		"activatedResources-r14"
		},
};
static const ber_tlv_tag_t asn_DEF_CSI_RS_ConfigNZP_Activation_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CSI_RS_ConfigNZP_Activation_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* csi-RS-NZP-mode-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* activatedResources-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_CSI_RS_ConfigNZP_Activation_r14_specs_1 = {
	sizeof(struct CSI_RS_ConfigNZP_Activation_r14),
	offsetof(struct CSI_RS_ConfigNZP_Activation_r14, _asn_ctx),
	asn_MAP_CSI_RS_ConfigNZP_Activation_r14_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CSI_RS_ConfigNZP_Activation_r14 = {
	"CSI-RS-ConfigNZP-Activation-r14",
	"CSI-RS-ConfigNZP-Activation-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_CSI_RS_ConfigNZP_Activation_r14_tags_1,
	sizeof(asn_DEF_CSI_RS_ConfigNZP_Activation_r14_tags_1)
		/sizeof(asn_DEF_CSI_RS_ConfigNZP_Activation_r14_tags_1[0]), /* 1 */
	asn_DEF_CSI_RS_ConfigNZP_Activation_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_CSI_RS_ConfigNZP_Activation_r14_tags_1)
		/sizeof(asn_DEF_CSI_RS_ConfigNZP_Activation_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CSI_RS_ConfigNZP_Activation_r14_1,
	2,	/* Elements count */
	&asn_SPC_CSI_RS_ConfigNZP_Activation_r14_specs_1	/* Additional specs */
};

