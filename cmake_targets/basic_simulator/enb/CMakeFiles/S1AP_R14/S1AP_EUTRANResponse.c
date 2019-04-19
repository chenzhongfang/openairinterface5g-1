/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SonTransfer-IEs"
 * 	found in "/home/user/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/S1AP_R14`
 */

#include "S1AP_EUTRANResponse.h"

asn_TYPE_member_t asn_MBR_S1AP_EUTRANResponse_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_EUTRANResponse, cell_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cell-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_EUTRANResponse, eUTRANcellLoadReportingResponse),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_EUTRANcellLoadReportingResponse,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eUTRANcellLoadReportingResponse"
		},
};
static const ber_tlv_tag_t asn_DEF_S1AP_EUTRANResponse_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_EUTRANResponse_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cell-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* eUTRANcellLoadReportingResponse */
};
asn_SEQUENCE_specifics_t asn_SPC_S1AP_EUTRANResponse_specs_1 = {
	sizeof(struct S1AP_EUTRANResponse),
	offsetof(struct S1AP_EUTRANResponse, _asn_ctx),
	asn_MAP_S1AP_EUTRANResponse_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_EUTRANResponse = {
	"EUTRANResponse",
	"EUTRANResponse",
	&asn_OP_SEQUENCE,
	asn_DEF_S1AP_EUTRANResponse_tags_1,
	sizeof(asn_DEF_S1AP_EUTRANResponse_tags_1)
		/sizeof(asn_DEF_S1AP_EUTRANResponse_tags_1[0]), /* 1 */
	asn_DEF_S1AP_EUTRANResponse_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_EUTRANResponse_tags_1)
		/sizeof(asn_DEF_S1AP_EUTRANResponse_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_S1AP_EUTRANResponse_1,
	2,	/* Elements count */
	&asn_SPC_S1AP_EUTRANResponse_specs_1	/* Additional specs */
};

