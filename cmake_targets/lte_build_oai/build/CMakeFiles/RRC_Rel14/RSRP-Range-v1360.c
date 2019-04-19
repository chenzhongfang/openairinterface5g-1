/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "RSRP-Range-v1360.h"

int
RSRP_Range_v1360_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -17 && value <= -1)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeInteger,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_RSRP_Range_v1360_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5, -17, -1 }	/* (-17..-1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_RSRP_Range_v1360_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
asn_TYPE_descriptor_t asn_DEF_RSRP_Range_v1360 = {
	"RSRP-Range-v1360",
	"RSRP-Range-v1360",
	&asn_OP_NativeInteger,
	asn_DEF_RSRP_Range_v1360_tags_1,
	sizeof(asn_DEF_RSRP_Range_v1360_tags_1)
		/sizeof(asn_DEF_RSRP_Range_v1360_tags_1[0]), /* 1 */
	asn_DEF_RSRP_Range_v1360_tags_1,	/* Same as above */
	sizeof(asn_DEF_RSRP_Range_v1360_tags_1)
		/sizeof(asn_DEF_RSRP_Range_v1360_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_RSRP_Range_v1360_constr_1, RSRP_Range_v1360_constraint },
	0, 0,	/* No members */
	0	/* No specifics */
};

