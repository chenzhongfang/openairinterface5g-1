/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SonTransfer-IEs"
 * 	found in "/home/user/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/S1AP_R14`
 */

#include "S1AP_NumberOfMeasurementReportingLevels.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_S1AP_NumberOfMeasurementReportingLevels_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  4 }	/* (0..4,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_S1AP_NumberOfMeasurementReportingLevels_value2enum_1[] = {
	{ 0,	3,	"rl2" },
	{ 1,	3,	"rl3" },
	{ 2,	3,	"rl4" },
	{ 3,	3,	"rl5" },
	{ 4,	4,	"rl10" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_S1AP_NumberOfMeasurementReportingLevels_enum2value_1[] = {
	4,	/* rl10(4) */
	0,	/* rl2(0) */
	1,	/* rl3(1) */
	2,	/* rl4(2) */
	3	/* rl5(3) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_S1AP_NumberOfMeasurementReportingLevels_specs_1 = {
	asn_MAP_S1AP_NumberOfMeasurementReportingLevels_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_S1AP_NumberOfMeasurementReportingLevels_enum2value_1,	/* N => "tag"; sorted by N */
	5,	/* Number of elements in the maps */
	6,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_S1AP_NumberOfMeasurementReportingLevels_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_S1AP_NumberOfMeasurementReportingLevels = {
	"NumberOfMeasurementReportingLevels",
	"NumberOfMeasurementReportingLevels",
	&asn_OP_NativeEnumerated,
	asn_DEF_S1AP_NumberOfMeasurementReportingLevels_tags_1,
	sizeof(asn_DEF_S1AP_NumberOfMeasurementReportingLevels_tags_1)
		/sizeof(asn_DEF_S1AP_NumberOfMeasurementReportingLevels_tags_1[0]), /* 1 */
	asn_DEF_S1AP_NumberOfMeasurementReportingLevels_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_NumberOfMeasurementReportingLevels_tags_1)
		/sizeof(asn_DEF_S1AP_NumberOfMeasurementReportingLevels_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_S1AP_NumberOfMeasurementReportingLevels_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_S1AP_NumberOfMeasurementReportingLevels_specs_1	/* Additional specs */
};

