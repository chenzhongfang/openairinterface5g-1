/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#include "CellGlobalIdUTRA.h"

static int
memb_cellIdentity_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 28)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_cellIdentity_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  28,  28 }	/* (SIZE(28..28)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_CellGlobalIdUTRA_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CellGlobalIdUTRA, plmn_Identity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"plmn-Identity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellGlobalIdUTRA, cellIdentity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_cellIdentity_constr_3,  memb_cellIdentity_constraint_1 },
		0, 0, /* No default value */
		"cellIdentity"
		},
};
static const ber_tlv_tag_t asn_DEF_CellGlobalIdUTRA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CellGlobalIdUTRA_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* plmn-Identity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cellIdentity */
};
asn_SEQUENCE_specifics_t asn_SPC_CellGlobalIdUTRA_specs_1 = {
	sizeof(struct CellGlobalIdUTRA),
	offsetof(struct CellGlobalIdUTRA, _asn_ctx),
	asn_MAP_CellGlobalIdUTRA_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CellGlobalIdUTRA = {
	"CellGlobalIdUTRA",
	"CellGlobalIdUTRA",
	&asn_OP_SEQUENCE,
	asn_DEF_CellGlobalIdUTRA_tags_1,
	sizeof(asn_DEF_CellGlobalIdUTRA_tags_1)
		/sizeof(asn_DEF_CellGlobalIdUTRA_tags_1[0]), /* 1 */
	asn_DEF_CellGlobalIdUTRA_tags_1,	/* Same as above */
	sizeof(asn_DEF_CellGlobalIdUTRA_tags_1)
		/sizeof(asn_DEF_CellGlobalIdUTRA_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CellGlobalIdUTRA_1,
	2,	/* Elements count */
	&asn_SPC_CellGlobalIdUTRA_specs_1	/* Additional specs */
};

