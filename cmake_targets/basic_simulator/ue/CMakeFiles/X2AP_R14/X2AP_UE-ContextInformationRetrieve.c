/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "/home/user/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/X2AP_R14`
 */

#include "X2AP_UE-ContextInformationRetrieve.h"

#include "X2AP_HandoverRestrictionList.h"
#include "X2AP_LocationReportingInformation.h"
#include "X2AP_MDTPLMNList.h"
#include "X2AP_ProtocolExtensionContainer.h"
static asn_TYPE_member_t asn_MBR_X2AP_UE_ContextInformationRetrieve_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_UE_ContextInformationRetrieve, mME_UE_S1AP_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_UE_S1AP_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mME-UE-S1AP-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_UE_ContextInformationRetrieve, uESecurityCapabilities),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_UESecurityCapabilities,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uESecurityCapabilities"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_UE_ContextInformationRetrieve, aS_SecurityInformation),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_AS_SecurityInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"aS-SecurityInformation"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_UE_ContextInformationRetrieve, uEaggregateMaximumBitRate),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_UEAggregateMaximumBitRate,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uEaggregateMaximumBitRate"
		},
	{ ATF_POINTER, 1, offsetof(struct X2AP_UE_ContextInformationRetrieve, subscriberProfileIDforRFP),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_SubscriberProfileIDforRFP,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"subscriberProfileIDforRFP"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_UE_ContextInformationRetrieve, e_RABs_ToBeSetup_ListRetrieve),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_E_RABs_ToBeSetup_ListRetrieve,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e-RABs-ToBeSetup-ListRetrieve"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_UE_ContextInformationRetrieve, rRC_Context),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_RRC_Context,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rRC-Context"
		},
	{ ATF_POINTER, 5, offsetof(struct X2AP_UE_ContextInformationRetrieve, handoverRestrictionList),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_HandoverRestrictionList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"handoverRestrictionList"
		},
	{ ATF_POINTER, 4, offsetof(struct X2AP_UE_ContextInformationRetrieve, locationReportingInformation),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_LocationReportingInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"locationReportingInformation"
		},
	{ ATF_POINTER, 3, offsetof(struct X2AP_UE_ContextInformationRetrieve, managBasedMDTallowed),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ManagementBasedMDTallowed,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"managBasedMDTallowed"
		},
	{ ATF_POINTER, 2, offsetof(struct X2AP_UE_ContextInformationRetrieve, managBasedMDTPLMNList),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_MDTPLMNList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"managBasedMDTPLMNList"
		},
	{ ATF_POINTER, 1, offsetof(struct X2AP_UE_ContextInformationRetrieve, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ProtocolExtensionContainer_5040P41,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_X2AP_UE_ContextInformationRetrieve_oms_1[] = { 4, 7, 8, 9, 10, 11 };
static const ber_tlv_tag_t asn_DEF_X2AP_UE_ContextInformationRetrieve_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_UE_ContextInformationRetrieve_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mME-UE-S1AP-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* uESecurityCapabilities */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* aS-SecurityInformation */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* uEaggregateMaximumBitRate */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* subscriberProfileIDforRFP */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* e-RABs-ToBeSetup-ListRetrieve */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* rRC-Context */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* handoverRestrictionList */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* locationReportingInformation */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* managBasedMDTallowed */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* managBasedMDTPLMNList */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_X2AP_UE_ContextInformationRetrieve_specs_1 = {
	sizeof(struct X2AP_UE_ContextInformationRetrieve),
	offsetof(struct X2AP_UE_ContextInformationRetrieve, _asn_ctx),
	asn_MAP_X2AP_UE_ContextInformationRetrieve_tag2el_1,
	12,	/* Count of tags in the map */
	asn_MAP_X2AP_UE_ContextInformationRetrieve_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	12,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_UE_ContextInformationRetrieve = {
	"UE-ContextInformationRetrieve",
	"UE-ContextInformationRetrieve",
	&asn_OP_SEQUENCE,
	asn_DEF_X2AP_UE_ContextInformationRetrieve_tags_1,
	sizeof(asn_DEF_X2AP_UE_ContextInformationRetrieve_tags_1)
		/sizeof(asn_DEF_X2AP_UE_ContextInformationRetrieve_tags_1[0]), /* 1 */
	asn_DEF_X2AP_UE_ContextInformationRetrieve_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_UE_ContextInformationRetrieve_tags_1)
		/sizeof(asn_DEF_X2AP_UE_ContextInformationRetrieve_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_X2AP_UE_ContextInformationRetrieve_1,
	12,	/* Elements count */
	&asn_SPC_X2AP_UE_ContextInformationRetrieve_specs_1	/* Additional specs */
};

