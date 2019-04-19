/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/user/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_SubbandCQICodeword1_H_
#define	_X2AP_SubbandCQICodeword1_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2AP_SubbandCQICodeword1_PR {
	X2AP_SubbandCQICodeword1_PR_NOTHING,	/* No components present */
	X2AP_SubbandCQICodeword1_PR_four_bitCQI,
	X2AP_SubbandCQICodeword1_PR_three_bitSpatialDifferentialCQI,
	X2AP_SubbandCQICodeword1_PR_two_bitSubbandDifferentialCQI,
	X2AP_SubbandCQICodeword1_PR_two_bitDifferentialCQI
	/* Extensions may appear below */
	
} X2AP_SubbandCQICodeword1_PR;

/* X2AP_SubbandCQICodeword1 */
typedef struct X2AP_SubbandCQICodeword1 {
	X2AP_SubbandCQICodeword1_PR present;
	union X2AP_SubbandCQICodeword1_u {
		long	 four_bitCQI;
		long	 three_bitSpatialDifferentialCQI;
		long	 two_bitSubbandDifferentialCQI;
		long	 two_bitDifferentialCQI;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_SubbandCQICodeword1_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_SubbandCQICodeword1;
extern asn_CHOICE_specifics_t asn_SPC_X2AP_SubbandCQICodeword1_specs_1;
extern asn_TYPE_member_t asn_MBR_X2AP_SubbandCQICodeword1_1[4];
extern asn_per_constraints_t asn_PER_type_X2AP_SubbandCQICodeword1_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_SubbandCQICodeword1_H_ */
#include <asn_internal.h>
