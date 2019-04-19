/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "SidelinkUEInformation-r12-IEs.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_discTxResourceReq_r12_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 63)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_discRxInterest_r12_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_discTxResourceReq_r12_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  1,  63 }	/* (1..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_discRxInterest_r12_value2enum_4[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_discRxInterest_r12_enum2value_4[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_discRxInterest_r12_specs_4 = {
	asn_MAP_discRxInterest_r12_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_discRxInterest_r12_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_discRxInterest_r12_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_discRxInterest_r12_4 = {
	"discRxInterest-r12",
	"discRxInterest-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_discRxInterest_r12_tags_4,
	sizeof(asn_DEF_discRxInterest_r12_tags_4)
		/sizeof(asn_DEF_discRxInterest_r12_tags_4[0]) - 1, /* 1 */
	asn_DEF_discRxInterest_r12_tags_4,	/* Same as above */
	sizeof(asn_DEF_discRxInterest_r12_tags_4)
		/sizeof(asn_DEF_discRxInterest_r12_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_discRxInterest_r12_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_discRxInterest_r12_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SidelinkUEInformation_r12_IEs_1[] = {
	{ ATF_POINTER, 6, offsetof(struct SidelinkUEInformation_r12_IEs, commRxInterestedFreq_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"commRxInterestedFreq-r12"
		},
	{ ATF_POINTER, 5, offsetof(struct SidelinkUEInformation_r12_IEs, commTxResourceReq_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_CommTxResourceReq_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"commTxResourceReq-r12"
		},
	{ ATF_POINTER, 4, offsetof(struct SidelinkUEInformation_r12_IEs, discRxInterest_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_discRxInterest_r12_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discRxInterest-r12"
		},
	{ ATF_POINTER, 3, offsetof(struct SidelinkUEInformation_r12_IEs, discTxResourceReq_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_discTxResourceReq_r12_constr_6,  memb_discTxResourceReq_r12_constraint_1 },
		0, 0, /* No default value */
		"discTxResourceReq-r12"
		},
	{ ATF_POINTER, 2, offsetof(struct SidelinkUEInformation_r12_IEs, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct SidelinkUEInformation_r12_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SidelinkUEInformation_v1310_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_SidelinkUEInformation_r12_IEs_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_SidelinkUEInformation_r12_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SidelinkUEInformation_r12_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* commRxInterestedFreq-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* commTxResourceReq-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* discRxInterest-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* discTxResourceReq-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_SidelinkUEInformation_r12_IEs_specs_1 = {
	sizeof(struct SidelinkUEInformation_r12_IEs),
	offsetof(struct SidelinkUEInformation_r12_IEs, _asn_ctx),
	asn_MAP_SidelinkUEInformation_r12_IEs_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_SidelinkUEInformation_r12_IEs_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SidelinkUEInformation_r12_IEs = {
	"SidelinkUEInformation-r12-IEs",
	"SidelinkUEInformation-r12-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_SidelinkUEInformation_r12_IEs_tags_1,
	sizeof(asn_DEF_SidelinkUEInformation_r12_IEs_tags_1)
		/sizeof(asn_DEF_SidelinkUEInformation_r12_IEs_tags_1[0]), /* 1 */
	asn_DEF_SidelinkUEInformation_r12_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_SidelinkUEInformation_r12_IEs_tags_1)
		/sizeof(asn_DEF_SidelinkUEInformation_r12_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SidelinkUEInformation_r12_IEs_1,
	6,	/* Elements count */
	&asn_SPC_SidelinkUEInformation_r12_IEs_specs_1	/* Additional specs */
};

