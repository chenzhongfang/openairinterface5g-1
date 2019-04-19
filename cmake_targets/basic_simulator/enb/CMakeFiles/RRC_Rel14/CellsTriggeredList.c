/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "CellsTriggeredList.h"

static asn_per_constraints_t asn_PER_type_physCellIdUTRA_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_Member_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_CellsTriggeredList_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_physCellIdUTRA_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CellsTriggeredList__Member__physCellIdUTRA, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellIdUTRA_FDD,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellsTriggeredList__Member__physCellIdUTRA, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellIdUTRA_TDD,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_physCellIdUTRA_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd */
};
static asn_CHOICE_specifics_t asn_SPC_physCellIdUTRA_specs_4 = {
	sizeof(struct CellsTriggeredList__Member__physCellIdUTRA),
	offsetof(struct CellsTriggeredList__Member__physCellIdUTRA, _asn_ctx),
	offsetof(struct CellsTriggeredList__Member__physCellIdUTRA, present),
	sizeof(((struct CellsTriggeredList__Member__physCellIdUTRA *)0)->present),
	asn_MAP_physCellIdUTRA_tag2el_4,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_physCellIdUTRA_4 = {
	"physCellIdUTRA",
	"physCellIdUTRA",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_physCellIdUTRA_constr_4, CHOICE_constraint },
	asn_MBR_physCellIdUTRA_4,
	2,	/* Elements count */
	&asn_SPC_physCellIdUTRA_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_physCellIdGERAN_7[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CellsTriggeredList__Member__physCellIdGERAN, carrierFreq),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierFreqGERAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreq"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellsTriggeredList__Member__physCellIdGERAN, physCellId),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellIdGERAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physCellId"
		},
};
static const ber_tlv_tag_t asn_DEF_physCellIdGERAN_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_physCellIdGERAN_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreq */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* physCellId */
};
static asn_SEQUENCE_specifics_t asn_SPC_physCellIdGERAN_specs_7 = {
	sizeof(struct CellsTriggeredList__Member__physCellIdGERAN),
	offsetof(struct CellsTriggeredList__Member__physCellIdGERAN, _asn_ctx),
	asn_MAP_physCellIdGERAN_tag2el_7,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_physCellIdGERAN_7 = {
	"physCellIdGERAN",
	"physCellIdGERAN",
	&asn_OP_SEQUENCE,
	asn_DEF_physCellIdGERAN_tags_7,
	sizeof(asn_DEF_physCellIdGERAN_tags_7)
		/sizeof(asn_DEF_physCellIdGERAN_tags_7[0]) - 1, /* 1 */
	asn_DEF_physCellIdGERAN_tags_7,	/* Same as above */
	sizeof(asn_DEF_physCellIdGERAN_tags_7)
		/sizeof(asn_DEF_physCellIdGERAN_tags_7[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_physCellIdGERAN_7,
	2,	/* Elements count */
	&asn_SPC_physCellIdGERAN_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_Member_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CellsTriggeredList__Member, choice.physCellIdEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physCellIdEUTRA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellsTriggeredList__Member, choice.physCellIdUTRA),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_physCellIdUTRA_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physCellIdUTRA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellsTriggeredList__Member, choice.physCellIdGERAN),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_physCellIdGERAN_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physCellIdGERAN"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellsTriggeredList__Member, choice.physCellIdCDMA2000),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellIdCDMA2000,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physCellIdCDMA2000"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellsTriggeredList__Member, choice.wlan_Identifiers_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WLAN_Identifiers_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"wlan-Identifiers-r13"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_Member_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physCellIdEUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* physCellIdUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* physCellIdGERAN */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* physCellIdCDMA2000 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* wlan-Identifiers-r13 */
};
static asn_CHOICE_specifics_t asn_SPC_Member_specs_2 = {
	sizeof(struct CellsTriggeredList__Member),
	offsetof(struct CellsTriggeredList__Member, _asn_ctx),
	offsetof(struct CellsTriggeredList__Member, present),
	sizeof(((struct CellsTriggeredList__Member *)0)->present),
	asn_MAP_Member_tag2el_2,
	5,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_Member_2 = {
	"CHOICE",
	"CHOICE",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_Member_constr_2, CHOICE_constraint },
	asn_MBR_Member_2,
	5,	/* Elements count */
	&asn_SPC_Member_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CellsTriggeredList_1[] = {
	{ ATF_POINTER, 0, 0,
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_Member_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_CellsTriggeredList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_CellsTriggeredList_specs_1 = {
	sizeof(struct CellsTriggeredList),
	offsetof(struct CellsTriggeredList, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
asn_TYPE_descriptor_t asn_DEF_CellsTriggeredList = {
	"CellsTriggeredList",
	"CellsTriggeredList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_CellsTriggeredList_tags_1,
	sizeof(asn_DEF_CellsTriggeredList_tags_1)
		/sizeof(asn_DEF_CellsTriggeredList_tags_1[0]), /* 1 */
	asn_DEF_CellsTriggeredList_tags_1,	/* Same as above */
	sizeof(asn_DEF_CellsTriggeredList_tags_1)
		/sizeof(asn_DEF_CellsTriggeredList_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_CellsTriggeredList_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_CellsTriggeredList_1,
	1,	/* Single element */
	&asn_SPC_CellsTriggeredList_specs_1	/* Additional specs */
};

