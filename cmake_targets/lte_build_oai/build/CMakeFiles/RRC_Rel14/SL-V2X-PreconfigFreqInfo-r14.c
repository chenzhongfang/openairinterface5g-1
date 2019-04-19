/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-Sidelink-Preconf"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "SL-V2X-PreconfigFreqInfo-r14.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_offsetDFN_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1000)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_syncPriority_r14_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_offsetDFN_r14_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  1000 }	/* (0..1000) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_syncPriority_r14_value2enum_9[] = {
	{ 0,	4,	"gnss" },
	{ 1,	3,	"enb" }
};
static const unsigned int asn_MAP_syncPriority_r14_enum2value_9[] = {
	1,	/* enb(1) */
	0	/* gnss(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_syncPriority_r14_specs_9 = {
	asn_MAP_syncPriority_r14_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_syncPriority_r14_enum2value_9,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_syncPriority_r14_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_syncPriority_r14_9 = {
	"syncPriority-r14",
	"syncPriority-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_syncPriority_r14_tags_9,
	sizeof(asn_DEF_syncPriority_r14_tags_9)
		/sizeof(asn_DEF_syncPriority_r14_tags_9[0]) - 1, /* 1 */
	asn_DEF_syncPriority_r14_tags_9,	/* Same as above */
	sizeof(asn_DEF_syncPriority_r14_tags_9)
		/sizeof(asn_DEF_syncPriority_r14_tags_9[0]), /* 2 */
	{ 0, &asn_PER_type_syncPriority_r14_constr_9, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_syncPriority_r14_specs_9	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SL_V2X_PreconfigFreqInfo_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_V2X_PreconfigFreqInfo_r14, v2x_CommPreconfigGeneral_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_PreconfigGeneral_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v2x-CommPreconfigGeneral-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_V2X_PreconfigFreqInfo_r14, v2x_CommPreconfigSync_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_PreconfigV2X_Sync_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v2x-CommPreconfigSync-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_V2X_PreconfigFreqInfo_r14, v2x_CommRxPoolList_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_PreconfigV2X_RxPoolList_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v2x-CommRxPoolList-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_V2X_PreconfigFreqInfo_r14, v2x_CommTxPoolList_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_PreconfigV2X_TxPoolList_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v2x-CommTxPoolList-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_V2X_PreconfigFreqInfo_r14, p2x_CommTxPoolList_r14),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_PreconfigV2X_TxPoolList_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"p2x-CommTxPoolList-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct SL_V2X_PreconfigFreqInfo_r14, v2x_ResourceSelectionConfig_r14),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_CommTxPoolSensingConfig_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v2x-ResourceSelectionConfig-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_V2X_PreconfigFreqInfo_r14, zoneConfig_r14),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_ZoneConfig_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"zoneConfig-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_V2X_PreconfigFreqInfo_r14, syncPriority_r14),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_syncPriority_r14_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"syncPriority-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct SL_V2X_PreconfigFreqInfo_r14, thresSL_TxPrioritization_r14),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_Priority_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"thresSL-TxPrioritization-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_V2X_PreconfigFreqInfo_r14, offsetDFN_r14),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_offsetDFN_r14_constr_13,  memb_offsetDFN_r14_constraint_1 },
		0, 0, /* No default value */
		"offsetDFN-r14"
		},
};
static const int asn_MAP_SL_V2X_PreconfigFreqInfo_r14_oms_1[] = { 1, 5, 6, 8, 9 };
static const ber_tlv_tag_t asn_DEF_SL_V2X_PreconfigFreqInfo_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_V2X_PreconfigFreqInfo_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* v2x-CommPreconfigGeneral-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* v2x-CommPreconfigSync-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* v2x-CommRxPoolList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* v2x-CommTxPoolList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* p2x-CommTxPoolList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* v2x-ResourceSelectionConfig-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* zoneConfig-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* syncPriority-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* thresSL-TxPrioritization-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* offsetDFN-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_SL_V2X_PreconfigFreqInfo_r14_specs_1 = {
	sizeof(struct SL_V2X_PreconfigFreqInfo_r14),
	offsetof(struct SL_V2X_PreconfigFreqInfo_r14, _asn_ctx),
	asn_MAP_SL_V2X_PreconfigFreqInfo_r14_tag2el_1,
	10,	/* Count of tags in the map */
	asn_MAP_SL_V2X_PreconfigFreqInfo_r14_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	10,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_V2X_PreconfigFreqInfo_r14 = {
	"SL-V2X-PreconfigFreqInfo-r14",
	"SL-V2X-PreconfigFreqInfo-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_V2X_PreconfigFreqInfo_r14_tags_1,
	sizeof(asn_DEF_SL_V2X_PreconfigFreqInfo_r14_tags_1)
		/sizeof(asn_DEF_SL_V2X_PreconfigFreqInfo_r14_tags_1[0]), /* 1 */
	asn_DEF_SL_V2X_PreconfigFreqInfo_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_V2X_PreconfigFreqInfo_r14_tags_1)
		/sizeof(asn_DEF_SL_V2X_PreconfigFreqInfo_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SL_V2X_PreconfigFreqInfo_r14_1,
	10,	/* Elements count */
	&asn_SPC_SL_V2X_PreconfigFreqInfo_r14_specs_1	/* Additional specs */
};

