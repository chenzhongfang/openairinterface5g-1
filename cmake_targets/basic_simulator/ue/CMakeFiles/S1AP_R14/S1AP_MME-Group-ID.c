/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/user/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/S1AP_R14`
 */

#include "S1AP_MME-Group-ID.h"

int
S1AP_MME_Group_ID_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size == 2)) {
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
 * This type is implemented using OCTET_STRING,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_S1AP_MME_Group_ID_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_S1AP_MME_Group_ID_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (4 << 2))
};
asn_TYPE_descriptor_t asn_DEF_S1AP_MME_Group_ID = {
	"MME-Group-ID",
	"MME-Group-ID",
	&asn_OP_OCTET_STRING,
	asn_DEF_S1AP_MME_Group_ID_tags_1,
	sizeof(asn_DEF_S1AP_MME_Group_ID_tags_1)
		/sizeof(asn_DEF_S1AP_MME_Group_ID_tags_1[0]), /* 1 */
	asn_DEF_S1AP_MME_Group_ID_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_MME_Group_ID_tags_1)
		/sizeof(asn_DEF_S1AP_MME_Group_ID_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_S1AP_MME_Group_ID_constr_1, S1AP_MME_Group_ID_constraint },
	0, 0,	/* No members */
	&asn_SPC_OCTET_STRING_specs	/* Additional specs */
};

