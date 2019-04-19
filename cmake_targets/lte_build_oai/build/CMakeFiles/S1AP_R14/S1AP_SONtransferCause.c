/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SonTransfer-IEs"
 * 	found in "/home/user/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/S1AP_R14`
 */

#include "S1AP_SONtransferCause.h"

static asn_per_constraints_t asn_PER_type_S1AP_SONtransferCause_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_S1AP_SONtransferCause_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_SONtransferCause, choice.cellLoadReporting),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_CellLoadReportingCause,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellLoadReporting"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_SONtransferCause, choice.multiCellLoadReporting),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_CellLoadReportingCause,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"multiCellLoadReporting"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_SONtransferCause, choice.eventTriggeredCellLoadReporting),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_CellLoadReportingCause,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eventTriggeredCellLoadReporting"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_SONtransferCause, choice.hOReporting),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_HOReportingCause,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"hOReporting"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_SONtransferCause, choice.eutranCellActivation),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_CellActivationCause,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eutranCellActivation"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_SONtransferCause, choice.energySavingsIndication),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_CellStateIndicationCause,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"energySavingsIndication"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_SONtransferCause, choice.failureEventReporting),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_FailureEventReportingCause,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"failureEventReporting"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_SONtransferCause_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellLoadReporting */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* multiCellLoadReporting */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* eventTriggeredCellLoadReporting */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* hOReporting */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* eutranCellActivation */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* energySavingsIndication */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* failureEventReporting */
};
static asn_CHOICE_specifics_t asn_SPC_S1AP_SONtransferCause_specs_1 = {
	sizeof(struct S1AP_SONtransferCause),
	offsetof(struct S1AP_SONtransferCause, _asn_ctx),
	offsetof(struct S1AP_SONtransferCause, present),
	sizeof(((struct S1AP_SONtransferCause *)0)->present),
	asn_MAP_S1AP_SONtransferCause_tag2el_1,
	7,	/* Count of tags in the map */
	0, 0,
	1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_SONtransferCause = {
	"SONtransferCause",
	"SONtransferCause",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_S1AP_SONtransferCause_constr_1, CHOICE_constraint },
	asn_MBR_S1AP_SONtransferCause_1,
	7,	/* Elements count */
	&asn_SPC_S1AP_SONtransferCause_specs_1	/* Additional specs */
};

