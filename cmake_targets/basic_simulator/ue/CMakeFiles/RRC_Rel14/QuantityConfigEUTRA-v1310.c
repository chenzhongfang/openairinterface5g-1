/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#include "QuantityConfigEUTRA-v1310.h"

static int asn_DFL_2_cmp_4(const void *sptr) {
	const FilterCoefficient_t *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 4 */
	return (*st != 4);
}
static int asn_DFL_2_set_4(void **sptr) {
	FilterCoefficient_t *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 4 */
	*st = 4;
	return 0;
}
asn_TYPE_member_t asn_MBR_QuantityConfigEUTRA_v1310_1[] = {
	{ ATF_POINTER, 1, offsetof(struct QuantityConfigEUTRA_v1310, filterCoefficientRS_SINR_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FilterCoefficient,
		0,
		{ 0, 0, 0 },
		&asn_DFL_2_cmp_4,	/* Compare DEFAULT 4 */
		&asn_DFL_2_set_4,	/* Set DEFAULT 4 */
		"filterCoefficientRS-SINR-r13"
		},
};
static const int asn_MAP_QuantityConfigEUTRA_v1310_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_QuantityConfigEUTRA_v1310_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_QuantityConfigEUTRA_v1310_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* filterCoefficientRS-SINR-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_QuantityConfigEUTRA_v1310_specs_1 = {
	sizeof(struct QuantityConfigEUTRA_v1310),
	offsetof(struct QuantityConfigEUTRA_v1310, _asn_ctx),
	asn_MAP_QuantityConfigEUTRA_v1310_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_QuantityConfigEUTRA_v1310_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_QuantityConfigEUTRA_v1310 = {
	"QuantityConfigEUTRA-v1310",
	"QuantityConfigEUTRA-v1310",
	&asn_OP_SEQUENCE,
	asn_DEF_QuantityConfigEUTRA_v1310_tags_1,
	sizeof(asn_DEF_QuantityConfigEUTRA_v1310_tags_1)
		/sizeof(asn_DEF_QuantityConfigEUTRA_v1310_tags_1[0]), /* 1 */
	asn_DEF_QuantityConfigEUTRA_v1310_tags_1,	/* Same as above */
	sizeof(asn_DEF_QuantityConfigEUTRA_v1310_tags_1)
		/sizeof(asn_DEF_QuantityConfigEUTRA_v1310_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_QuantityConfigEUTRA_v1310_1,
	1,	/* Elements count */
	&asn_SPC_QuantityConfigEUTRA_v1310_specs_1	/* Additional specs */
};

