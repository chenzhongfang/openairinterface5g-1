/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_AC_BarringConfig1XRTT_r9_H_
#define	_AC_BarringConfig1XRTT_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* AC-BarringConfig1XRTT-r9 */
typedef struct AC_BarringConfig1XRTT_r9 {
	long	 ac_Barring0to9_r9;
	long	 ac_Barring10_r9;
	long	 ac_Barring11_r9;
	long	 ac_Barring12_r9;
	long	 ac_Barring13_r9;
	long	 ac_Barring14_r9;
	long	 ac_Barring15_r9;
	long	 ac_BarringMsg_r9;
	long	 ac_BarringReg_r9;
	long	 ac_BarringEmg_r9;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AC_BarringConfig1XRTT_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AC_BarringConfig1XRTT_r9;
extern asn_SEQUENCE_specifics_t asn_SPC_AC_BarringConfig1XRTT_r9_specs_1;
extern asn_TYPE_member_t asn_MBR_AC_BarringConfig1XRTT_r9_1[10];

#ifdef __cplusplus
}
#endif

#endif	/* _AC_BarringConfig1XRTT_r9_H_ */
#include <asn_internal.h>
