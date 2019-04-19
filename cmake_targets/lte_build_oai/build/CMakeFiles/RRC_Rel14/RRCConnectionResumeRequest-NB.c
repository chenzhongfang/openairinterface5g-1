/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "RRCConnectionResumeRequest-NB.h"

static asn_per_constraints_t asn_PER_type_criticalExtensions_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_criticalExtensionsFuture_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_criticalExtensionsFuture_specs_4 = {
	sizeof(struct RRCConnectionResumeRequest_NB__criticalExtensions__criticalExtensionsFuture),
	offsetof(struct RRCConnectionResumeRequest_NB__criticalExtensions__criticalExtensionsFuture, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_criticalExtensionsFuture_4 = {
	"criticalExtensionsFuture",
	"criticalExtensionsFuture",
	&asn_OP_SEQUENCE,
	asn_DEF_criticalExtensionsFuture_tags_4,
	sizeof(asn_DEF_criticalExtensionsFuture_tags_4)
		/sizeof(asn_DEF_criticalExtensionsFuture_tags_4[0]) - 1, /* 1 */
	asn_DEF_criticalExtensionsFuture_tags_4,	/* Same as above */
	sizeof(asn_DEF_criticalExtensionsFuture_tags_4)
		/sizeof(asn_DEF_criticalExtensionsFuture_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_criticalExtensionsFuture_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_criticalExtensions_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionResumeRequest_NB__criticalExtensions, choice.rrcConnectionResumeRequest_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCConnectionResumeRequest_NB_r13_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrcConnectionResumeRequest-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionResumeRequest_NB__criticalExtensions, choice.criticalExtensionsFuture),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_criticalExtensionsFuture_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"criticalExtensionsFuture"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_criticalExtensions_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rrcConnectionResumeRequest-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* criticalExtensionsFuture */
};
static asn_CHOICE_specifics_t asn_SPC_criticalExtensions_specs_2 = {
	sizeof(struct RRCConnectionResumeRequest_NB__criticalExtensions),
	offsetof(struct RRCConnectionResumeRequest_NB__criticalExtensions, _asn_ctx),
	offsetof(struct RRCConnectionResumeRequest_NB__criticalExtensions, present),
	sizeof(((struct RRCConnectionResumeRequest_NB__criticalExtensions *)0)->present),
	asn_MAP_criticalExtensions_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_criticalExtensions_2 = {
	"criticalExtensions",
	"criticalExtensions",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_criticalExtensions_constr_2, CHOICE_constraint },
	asn_MBR_criticalExtensions_2,
	2,	/* Elements count */
	&asn_SPC_criticalExtensions_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRCConnectionResumeRequest_NB_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionResumeRequest_NB, criticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_criticalExtensions_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"criticalExtensions"
		},
};
static const ber_tlv_tag_t asn_DEF_RRCConnectionResumeRequest_NB_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRCConnectionResumeRequest_NB_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* criticalExtensions */
};
asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionResumeRequest_NB_specs_1 = {
	sizeof(struct RRCConnectionResumeRequest_NB),
	offsetof(struct RRCConnectionResumeRequest_NB, _asn_ctx),
	asn_MAP_RRCConnectionResumeRequest_NB_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRCConnectionResumeRequest_NB = {
	"RRCConnectionResumeRequest-NB",
	"RRCConnectionResumeRequest-NB",
	&asn_OP_SEQUENCE,
	asn_DEF_RRCConnectionResumeRequest_NB_tags_1,
	sizeof(asn_DEF_RRCConnectionResumeRequest_NB_tags_1)
		/sizeof(asn_DEF_RRCConnectionResumeRequest_NB_tags_1[0]), /* 1 */
	asn_DEF_RRCConnectionResumeRequest_NB_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCConnectionResumeRequest_NB_tags_1)
		/sizeof(asn_DEF_RRCConnectionResumeRequest_NB_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRCConnectionResumeRequest_NB_1,
	1,	/* Elements count */
	&asn_SPC_RRCConnectionResumeRequest_NB_specs_1	/* Additional specs */
};

