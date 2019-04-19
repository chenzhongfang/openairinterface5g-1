/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/user/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/X2AP_R14`
 */

#include "X2AP_CSIReportPerCSIProcess.h"

#include "X2AP_ProtocolExtensionContainer.h"
static int
memb_X2AP_cSIProcessConfigurationIndex_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 7)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_X2AP_cSIProcessConfigurationIndex_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  1,  7 }	/* (1..7,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_X2AP_CSIReportPerCSIProcess_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_X2AP_Member_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_CSIReportPerCSIProcess__Member, cSIProcessConfigurationIndex),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_X2AP_cSIProcessConfigurationIndex_constr_3,  memb_X2AP_cSIProcessConfigurationIndex_constraint_2 },
		0, 0, /* No default value */
		"cSIProcessConfigurationIndex"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_CSIReportPerCSIProcess__Member, cSIReportPerCSIProcessItem),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_CSIReportPerCSIProcessItem,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cSIReportPerCSIProcessItem"
		},
	{ ATF_POINTER, 1, offsetof(struct X2AP_CSIReportPerCSIProcess__Member, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ProtocolExtensionContainer_5040P65,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_X2AP_Member_oms_2[] = { 2 };
static const ber_tlv_tag_t asn_DEF_X2AP_Member_tags_2[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_Member_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cSIProcessConfigurationIndex */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cSIReportPerCSIProcessItem */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_X2AP_Member_specs_2 = {
	sizeof(struct X2AP_CSIReportPerCSIProcess__Member),
	offsetof(struct X2AP_CSIReportPerCSIProcess__Member, _asn_ctx),
	asn_MAP_X2AP_Member_tag2el_2,
	3,	/* Count of tags in the map */
	asn_MAP_X2AP_Member_oms_2,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_X2AP_Member_2 = {
	"SEQUENCE",
	"SEQUENCE",
	&asn_OP_SEQUENCE,
	asn_DEF_X2AP_Member_tags_2,
	sizeof(asn_DEF_X2AP_Member_tags_2)
		/sizeof(asn_DEF_X2AP_Member_tags_2[0]), /* 1 */
	asn_DEF_X2AP_Member_tags_2,	/* Same as above */
	sizeof(asn_DEF_X2AP_Member_tags_2)
		/sizeof(asn_DEF_X2AP_Member_tags_2[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_X2AP_Member_2,
	3,	/* Elements count */
	&asn_SPC_X2AP_Member_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_X2AP_CSIReportPerCSIProcess_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_X2AP_Member_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_X2AP_CSIReportPerCSIProcess_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_X2AP_CSIReportPerCSIProcess_specs_1 = {
	sizeof(struct X2AP_CSIReportPerCSIProcess),
	offsetof(struct X2AP_CSIReportPerCSIProcess, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_CSIReportPerCSIProcess = {
	"CSIReportPerCSIProcess",
	"CSIReportPerCSIProcess",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_X2AP_CSIReportPerCSIProcess_tags_1,
	sizeof(asn_DEF_X2AP_CSIReportPerCSIProcess_tags_1)
		/sizeof(asn_DEF_X2AP_CSIReportPerCSIProcess_tags_1[0]), /* 1 */
	asn_DEF_X2AP_CSIReportPerCSIProcess_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_CSIReportPerCSIProcess_tags_1)
		/sizeof(asn_DEF_X2AP_CSIReportPerCSIProcess_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_X2AP_CSIReportPerCSIProcess_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_X2AP_CSIReportPerCSIProcess_1,
	1,	/* Single element */
	&asn_SPC_X2AP_CSIReportPerCSIProcess_specs_1	/* Additional specs */
};

