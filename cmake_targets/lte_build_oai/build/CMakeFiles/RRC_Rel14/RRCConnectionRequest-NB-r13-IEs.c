/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "RRCConnectionRequest-NB-r13-IEs.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_spare_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 17)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_multiToneSupport_r13_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_multiCarrierSupport_r13_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_spare_constr_10 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  17,  17 }	/* (SIZE(17..17)) */,
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_multiToneSupport_r13_value2enum_4[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_multiToneSupport_r13_enum2value_4[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_multiToneSupport_r13_specs_4 = {
	asn_MAP_multiToneSupport_r13_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_multiToneSupport_r13_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_multiToneSupport_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_multiToneSupport_r13_4 = {
	"multiToneSupport-r13",
	"multiToneSupport-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_multiToneSupport_r13_tags_4,
	sizeof(asn_DEF_multiToneSupport_r13_tags_4)
		/sizeof(asn_DEF_multiToneSupport_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_multiToneSupport_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_multiToneSupport_r13_tags_4)
		/sizeof(asn_DEF_multiToneSupport_r13_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_multiToneSupport_r13_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_multiToneSupport_r13_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_multiCarrierSupport_r13_value2enum_6[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_multiCarrierSupport_r13_enum2value_6[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_multiCarrierSupport_r13_specs_6 = {
	asn_MAP_multiCarrierSupport_r13_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_multiCarrierSupport_r13_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_multiCarrierSupport_r13_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_multiCarrierSupport_r13_6 = {
	"multiCarrierSupport-r13",
	"multiCarrierSupport-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_multiCarrierSupport_r13_tags_6,
	sizeof(asn_DEF_multiCarrierSupport_r13_tags_6)
		/sizeof(asn_DEF_multiCarrierSupport_r13_tags_6[0]) - 1, /* 1 */
	asn_DEF_multiCarrierSupport_r13_tags_6,	/* Same as above */
	sizeof(asn_DEF_multiCarrierSupport_r13_tags_6)
		/sizeof(asn_DEF_multiCarrierSupport_r13_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_multiCarrierSupport_r13_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_multiCarrierSupport_r13_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRCConnectionRequest_NB_r13_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionRequest_NB_r13_IEs, ue_Identity_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_InitialUE_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-Identity-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionRequest_NB_r13_IEs, establishmentCause_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EstablishmentCause_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"establishmentCause-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct RRCConnectionRequest_NB_r13_IEs, multiToneSupport_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_multiToneSupport_r13_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"multiToneSupport-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionRequest_NB_r13_IEs, multiCarrierSupport_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_multiCarrierSupport_r13_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"multiCarrierSupport-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionRequest_NB_r13_IEs, earlyContentionResolution_r14),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"earlyContentionResolution-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionRequest_NB_r13_IEs, cqi_NPDCCH_r14),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CQI_NPDCCH_NB_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cqi-NPDCCH-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionRequest_NB_r13_IEs, spare),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_spare_constr_10,  memb_spare_constraint_1 },
		0, 0, /* No default value */
		"spare"
		},
};
static const int asn_MAP_RRCConnectionRequest_NB_r13_IEs_oms_1[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_RRCConnectionRequest_NB_r13_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRCConnectionRequest_NB_r13_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ue-Identity-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* establishmentCause-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* multiToneSupport-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* multiCarrierSupport-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* earlyContentionResolution-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* cqi-NPDCCH-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* spare */
};
asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionRequest_NB_r13_IEs_specs_1 = {
	sizeof(struct RRCConnectionRequest_NB_r13_IEs),
	offsetof(struct RRCConnectionRequest_NB_r13_IEs, _asn_ctx),
	asn_MAP_RRCConnectionRequest_NB_r13_IEs_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_RRCConnectionRequest_NB_r13_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRCConnectionRequest_NB_r13_IEs = {
	"RRCConnectionRequest-NB-r13-IEs",
	"RRCConnectionRequest-NB-r13-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_RRCConnectionRequest_NB_r13_IEs_tags_1,
	sizeof(asn_DEF_RRCConnectionRequest_NB_r13_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionRequest_NB_r13_IEs_tags_1[0]), /* 1 */
	asn_DEF_RRCConnectionRequest_NB_r13_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCConnectionRequest_NB_r13_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionRequest_NB_r13_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRCConnectionRequest_NB_r13_IEs_1,
	7,	/* Elements count */
	&asn_SPC_RRCConnectionRequest_NB_r13_IEs_specs_1	/* Additional specs */
};

