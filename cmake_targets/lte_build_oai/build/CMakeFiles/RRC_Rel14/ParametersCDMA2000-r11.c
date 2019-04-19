/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "ParametersCDMA2000-r11.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_longCodeState1XRTT_r11_constraint_9(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 42)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_searchWindowSize_r11_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_per_constraints_t asn_PER_type_systemTimeInfo_r11_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_csfb_DualRxTxSupport_r11_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_longCodeState1XRTT_r11_constr_12 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  42,  42 }	/* (SIZE(42..42)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_searchWindowSize_r11_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_systemTimeInfo_r11_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ParametersCDMA2000_r11__systemTimeInfo_r11, choice.explicitValue),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemTimeInfoCDMA2000,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"explicitValue"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ParametersCDMA2000_r11__systemTimeInfo_r11, choice.defaultValue),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"defaultValue"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_systemTimeInfo_r11_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* explicitValue */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* defaultValue */
};
static asn_CHOICE_specifics_t asn_SPC_systemTimeInfo_r11_specs_2 = {
	sizeof(struct ParametersCDMA2000_r11__systemTimeInfo_r11),
	offsetof(struct ParametersCDMA2000_r11__systemTimeInfo_r11, _asn_ctx),
	offsetof(struct ParametersCDMA2000_r11__systemTimeInfo_r11, present),
	sizeof(((struct ParametersCDMA2000_r11__systemTimeInfo_r11 *)0)->present),
	asn_MAP_systemTimeInfo_r11_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_systemTimeInfo_r11_2 = {
	"systemTimeInfo-r11",
	"systemTimeInfo-r11",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_systemTimeInfo_r11_constr_2, CHOICE_constraint },
	asn_MBR_systemTimeInfo_r11_2,
	2,	/* Elements count */
	&asn_SPC_systemTimeInfo_r11_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_parametersHRPD_r11_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ParametersCDMA2000_r11__parametersHRPD_r11, preRegistrationInfoHRPD_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PreRegistrationInfoHRPD,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"preRegistrationInfoHRPD-r11"
		},
	{ ATF_POINTER, 1, offsetof(struct ParametersCDMA2000_r11__parametersHRPD_r11, cellReselectionParametersHRPD_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellReselectionParametersCDMA2000_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellReselectionParametersHRPD-r11"
		},
};
static const int asn_MAP_parametersHRPD_r11_oms_6[] = { 1 };
static const ber_tlv_tag_t asn_DEF_parametersHRPD_r11_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_parametersHRPD_r11_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* preRegistrationInfoHRPD-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cellReselectionParametersHRPD-r11 */
};
static asn_SEQUENCE_specifics_t asn_SPC_parametersHRPD_r11_specs_6 = {
	sizeof(struct ParametersCDMA2000_r11__parametersHRPD_r11),
	offsetof(struct ParametersCDMA2000_r11__parametersHRPD_r11, _asn_ctx),
	asn_MAP_parametersHRPD_r11_tag2el_6,
	2,	/* Count of tags in the map */
	asn_MAP_parametersHRPD_r11_oms_6,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_parametersHRPD_r11_6 = {
	"parametersHRPD-r11",
	"parametersHRPD-r11",
	&asn_OP_SEQUENCE,
	asn_DEF_parametersHRPD_r11_tags_6,
	sizeof(asn_DEF_parametersHRPD_r11_tags_6)
		/sizeof(asn_DEF_parametersHRPD_r11_tags_6[0]) - 1, /* 1 */
	asn_DEF_parametersHRPD_r11_tags_6,	/* Same as above */
	sizeof(asn_DEF_parametersHRPD_r11_tags_6)
		/sizeof(asn_DEF_parametersHRPD_r11_tags_6[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_parametersHRPD_r11_6,
	2,	/* Elements count */
	&asn_SPC_parametersHRPD_r11_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_csfb_DualRxTxSupport_r11_value2enum_16[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_csfb_DualRxTxSupport_r11_enum2value_16[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_csfb_DualRxTxSupport_r11_specs_16 = {
	asn_MAP_csfb_DualRxTxSupport_r11_value2enum_16,	/* "tag" => N; sorted by tag */
	asn_MAP_csfb_DualRxTxSupport_r11_enum2value_16,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_csfb_DualRxTxSupport_r11_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_csfb_DualRxTxSupport_r11_16 = {
	"csfb-DualRxTxSupport-r11",
	"csfb-DualRxTxSupport-r11",
	&asn_OP_NativeEnumerated,
	asn_DEF_csfb_DualRxTxSupport_r11_tags_16,
	sizeof(asn_DEF_csfb_DualRxTxSupport_r11_tags_16)
		/sizeof(asn_DEF_csfb_DualRxTxSupport_r11_tags_16[0]) - 1, /* 1 */
	asn_DEF_csfb_DualRxTxSupport_r11_tags_16,	/* Same as above */
	sizeof(asn_DEF_csfb_DualRxTxSupport_r11_tags_16)
		/sizeof(asn_DEF_csfb_DualRxTxSupport_r11_tags_16[0]), /* 2 */
	{ 0, &asn_PER_type_csfb_DualRxTxSupport_r11_constr_16, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_csfb_DualRxTxSupport_r11_specs_16	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_parameters1XRTT_r11_9[] = {
	{ ATF_POINTER, 7, offsetof(struct ParametersCDMA2000_r11__parameters1XRTT_r11, csfb_RegistrationParam1XRTT_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSFB_RegistrationParam1XRTT,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csfb-RegistrationParam1XRTT-r11"
		},
	{ ATF_POINTER, 6, offsetof(struct ParametersCDMA2000_r11__parameters1XRTT_r11, csfb_RegistrationParam1XRTT_Ext_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSFB_RegistrationParam1XRTT_v920,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csfb-RegistrationParam1XRTT-Ext-r11"
		},
	{ ATF_POINTER, 5, offsetof(struct ParametersCDMA2000_r11__parameters1XRTT_r11, longCodeState1XRTT_r11),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_longCodeState1XRTT_r11_constr_12,  memb_longCodeState1XRTT_r11_constraint_9 },
		0, 0, /* No default value */
		"longCodeState1XRTT-r11"
		},
	{ ATF_POINTER, 4, offsetof(struct ParametersCDMA2000_r11__parameters1XRTT_r11, cellReselectionParameters1XRTT_r11),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellReselectionParametersCDMA2000_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellReselectionParameters1XRTT-r11"
		},
	{ ATF_POINTER, 3, offsetof(struct ParametersCDMA2000_r11__parameters1XRTT_r11, ac_BarringConfig1XRTT_r11),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AC_BarringConfig1XRTT_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ac-BarringConfig1XRTT-r11"
		},
	{ ATF_POINTER, 2, offsetof(struct ParametersCDMA2000_r11__parameters1XRTT_r11, csfb_SupportForDualRxUEs_r11),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csfb-SupportForDualRxUEs-r11"
		},
	{ ATF_POINTER, 1, offsetof(struct ParametersCDMA2000_r11__parameters1XRTT_r11, csfb_DualRxTxSupport_r11),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_csfb_DualRxTxSupport_r11_16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csfb-DualRxTxSupport-r11"
		},
};
static const int asn_MAP_parameters1XRTT_r11_oms_9[] = { 0, 1, 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_parameters1XRTT_r11_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_parameters1XRTT_r11_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* csfb-RegistrationParam1XRTT-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* csfb-RegistrationParam1XRTT-Ext-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* longCodeState1XRTT-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* cellReselectionParameters1XRTT-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ac-BarringConfig1XRTT-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* csfb-SupportForDualRxUEs-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* csfb-DualRxTxSupport-r11 */
};
static asn_SEQUENCE_specifics_t asn_SPC_parameters1XRTT_r11_specs_9 = {
	sizeof(struct ParametersCDMA2000_r11__parameters1XRTT_r11),
	offsetof(struct ParametersCDMA2000_r11__parameters1XRTT_r11, _asn_ctx),
	asn_MAP_parameters1XRTT_r11_tag2el_9,
	7,	/* Count of tags in the map */
	asn_MAP_parameters1XRTT_r11_oms_9,	/* Optional members */
	7, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_parameters1XRTT_r11_9 = {
	"parameters1XRTT-r11",
	"parameters1XRTT-r11",
	&asn_OP_SEQUENCE,
	asn_DEF_parameters1XRTT_r11_tags_9,
	sizeof(asn_DEF_parameters1XRTT_r11_tags_9)
		/sizeof(asn_DEF_parameters1XRTT_r11_tags_9[0]) - 1, /* 1 */
	asn_DEF_parameters1XRTT_r11_tags_9,	/* Same as above */
	sizeof(asn_DEF_parameters1XRTT_r11_tags_9)
		/sizeof(asn_DEF_parameters1XRTT_r11_tags_9[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_parameters1XRTT_r11_9,
	7,	/* Elements count */
	&asn_SPC_parameters1XRTT_r11_specs_9	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ParametersCDMA2000_r11_1[] = {
	{ ATF_POINTER, 1, offsetof(struct ParametersCDMA2000_r11, systemTimeInfo_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_systemTimeInfo_r11_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"systemTimeInfo-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ParametersCDMA2000_r11, searchWindowSize_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_searchWindowSize_r11_constr_5,  memb_searchWindowSize_r11_constraint_1 },
		0, 0, /* No default value */
		"searchWindowSize-r11"
		},
	{ ATF_POINTER, 2, offsetof(struct ParametersCDMA2000_r11, parametersHRPD_r11),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_parametersHRPD_r11_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"parametersHRPD-r11"
		},
	{ ATF_POINTER, 1, offsetof(struct ParametersCDMA2000_r11, parameters1XRTT_r11),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_parameters1XRTT_r11_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"parameters1XRTT-r11"
		},
};
static const int asn_MAP_ParametersCDMA2000_r11_oms_1[] = { 0, 2, 3 };
static const ber_tlv_tag_t asn_DEF_ParametersCDMA2000_r11_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ParametersCDMA2000_r11_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* systemTimeInfo-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* searchWindowSize-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* parametersHRPD-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* parameters1XRTT-r11 */
};
asn_SEQUENCE_specifics_t asn_SPC_ParametersCDMA2000_r11_specs_1 = {
	sizeof(struct ParametersCDMA2000_r11),
	offsetof(struct ParametersCDMA2000_r11, _asn_ctx),
	asn_MAP_ParametersCDMA2000_r11_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_ParametersCDMA2000_r11_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ParametersCDMA2000_r11 = {
	"ParametersCDMA2000-r11",
	"ParametersCDMA2000-r11",
	&asn_OP_SEQUENCE,
	asn_DEF_ParametersCDMA2000_r11_tags_1,
	sizeof(asn_DEF_ParametersCDMA2000_r11_tags_1)
		/sizeof(asn_DEF_ParametersCDMA2000_r11_tags_1[0]), /* 1 */
	asn_DEF_ParametersCDMA2000_r11_tags_1,	/* Same as above */
	sizeof(asn_DEF_ParametersCDMA2000_r11_tags_1)
		/sizeof(asn_DEF_ParametersCDMA2000_r11_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ParametersCDMA2000_r11_1,
	4,	/* Elements count */
	&asn_SPC_ParametersCDMA2000_r11_specs_1	/* Additional specs */
};

