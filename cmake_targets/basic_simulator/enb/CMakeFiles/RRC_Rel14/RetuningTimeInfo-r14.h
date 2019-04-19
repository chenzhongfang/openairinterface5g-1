/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_RetuningTimeInfo_r14_H_
#define	_RetuningTimeInfo_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeDL_r14 {
	RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeDL_r14_n0	= 0,
	RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeDL_r14_n0dot5	= 1,
	RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeDL_r14_n1	= 2,
	RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeDL_r14_n1dot5	= 3,
	RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeDL_r14_n2	= 4,
	RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeDL_r14_n2dot5	= 5,
	RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeDL_r14_n3	= 6,
	RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeDL_r14_n3dot5	= 7,
	RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeDL_r14_n4	= 8,
	RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeDL_r14_n4dot5	= 9,
	RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeDL_r14_n5	= 10,
	RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeDL_r14_n5dot5	= 11,
	RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeDL_r14_n6	= 12,
	RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeDL_r14_n6dot5	= 13,
	RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeDL_r14_n7	= 14,
	RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeDL_r14_spare1	= 15
} e_RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeDL_r14;
typedef enum RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeUL_r14 {
	RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeUL_r14_n0	= 0,
	RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeUL_r14_n0dot5	= 1,
	RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeUL_r14_n1	= 2,
	RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeUL_r14_n1dot5	= 3,
	RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeUL_r14_n2	= 4,
	RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeUL_r14_n2dot5	= 5,
	RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeUL_r14_n3	= 6,
	RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeUL_r14_n3dot5	= 7,
	RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeUL_r14_n4	= 8,
	RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeUL_r14_n4dot5	= 9,
	RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeUL_r14_n5	= 10,
	RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeUL_r14_n5dot5	= 11,
	RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeUL_r14_n6	= 12,
	RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeUL_r14_n6dot5	= 13,
	RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeUL_r14_n7	= 14,
	RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeUL_r14_spare1	= 15
} e_RetuningTimeInfo_r14__retuningInfo__rf_RetuningTimeUL_r14;

/* RetuningTimeInfo-r14 */
typedef struct RetuningTimeInfo_r14 {
	struct RetuningTimeInfo_r14__retuningInfo {
		long	*rf_RetuningTimeDL_r14;	/* OPTIONAL */
		long	*rf_RetuningTimeUL_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} retuningInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RetuningTimeInfo_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_rf_RetuningTimeDL_r14_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_rf_RetuningTimeUL_r14_20;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RetuningTimeInfo_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_RetuningTimeInfo_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_RetuningTimeInfo_r14_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RetuningTimeInfo_r14_H_ */
#include <asn_internal.h>
