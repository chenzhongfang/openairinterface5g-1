/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_NPRACH_Parameters_NB_v1330_H_
#define	_NPRACH_Parameters_NB_v1330_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NPRACH_Parameters_NB_v1330__nprach_NumCBRA_StartSubcarriers_r13 {
	NPRACH_Parameters_NB_v1330__nprach_NumCBRA_StartSubcarriers_r13_n8	= 0,
	NPRACH_Parameters_NB_v1330__nprach_NumCBRA_StartSubcarriers_r13_n10	= 1,
	NPRACH_Parameters_NB_v1330__nprach_NumCBRA_StartSubcarriers_r13_n11	= 2,
	NPRACH_Parameters_NB_v1330__nprach_NumCBRA_StartSubcarriers_r13_n12	= 3,
	NPRACH_Parameters_NB_v1330__nprach_NumCBRA_StartSubcarriers_r13_n20	= 4,
	NPRACH_Parameters_NB_v1330__nprach_NumCBRA_StartSubcarriers_r13_n22	= 5,
	NPRACH_Parameters_NB_v1330__nprach_NumCBRA_StartSubcarriers_r13_n23	= 6,
	NPRACH_Parameters_NB_v1330__nprach_NumCBRA_StartSubcarriers_r13_n24	= 7,
	NPRACH_Parameters_NB_v1330__nprach_NumCBRA_StartSubcarriers_r13_n32	= 8,
	NPRACH_Parameters_NB_v1330__nprach_NumCBRA_StartSubcarriers_r13_n34	= 9,
	NPRACH_Parameters_NB_v1330__nprach_NumCBRA_StartSubcarriers_r13_n35	= 10,
	NPRACH_Parameters_NB_v1330__nprach_NumCBRA_StartSubcarriers_r13_n36	= 11,
	NPRACH_Parameters_NB_v1330__nprach_NumCBRA_StartSubcarriers_r13_n40	= 12,
	NPRACH_Parameters_NB_v1330__nprach_NumCBRA_StartSubcarriers_r13_n44	= 13,
	NPRACH_Parameters_NB_v1330__nprach_NumCBRA_StartSubcarriers_r13_n46	= 14,
	NPRACH_Parameters_NB_v1330__nprach_NumCBRA_StartSubcarriers_r13_n48	= 15
} e_NPRACH_Parameters_NB_v1330__nprach_NumCBRA_StartSubcarriers_r13;

/* NPRACH-Parameters-NB-v1330 */
typedef struct NPRACH_Parameters_NB_v1330 {
	long	 nprach_NumCBRA_StartSubcarriers_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NPRACH_Parameters_NB_v1330_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_nprach_NumCBRA_StartSubcarriers_r13_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NPRACH_Parameters_NB_v1330;
extern asn_SEQUENCE_specifics_t asn_SPC_NPRACH_Parameters_NB_v1330_specs_1;
extern asn_TYPE_member_t asn_MBR_NPRACH_Parameters_NB_v1330_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _NPRACH_Parameters_NB_v1330_H_ */
#include <asn_internal.h>
