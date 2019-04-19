/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_SchedulingInfo_NB_r13_H_
#define	_SchedulingInfo_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "SIB-MappingInfo-NB-r13.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SchedulingInfo_NB_r13__si_Periodicity_r13 {
	SchedulingInfo_NB_r13__si_Periodicity_r13_rf64	= 0,
	SchedulingInfo_NB_r13__si_Periodicity_r13_rf128	= 1,
	SchedulingInfo_NB_r13__si_Periodicity_r13_rf256	= 2,
	SchedulingInfo_NB_r13__si_Periodicity_r13_rf512	= 3,
	SchedulingInfo_NB_r13__si_Periodicity_r13_rf1024	= 4,
	SchedulingInfo_NB_r13__si_Periodicity_r13_rf2048	= 5,
	SchedulingInfo_NB_r13__si_Periodicity_r13_rf4096	= 6,
	SchedulingInfo_NB_r13__si_Periodicity_r13_spare	= 7
} e_SchedulingInfo_NB_r13__si_Periodicity_r13;
typedef enum SchedulingInfo_NB_r13__si_RepetitionPattern_r13 {
	SchedulingInfo_NB_r13__si_RepetitionPattern_r13_every2ndRF	= 0,
	SchedulingInfo_NB_r13__si_RepetitionPattern_r13_every4thRF	= 1,
	SchedulingInfo_NB_r13__si_RepetitionPattern_r13_every8thRF	= 2,
	SchedulingInfo_NB_r13__si_RepetitionPattern_r13_every16thRF	= 3
} e_SchedulingInfo_NB_r13__si_RepetitionPattern_r13;
typedef enum SchedulingInfo_NB_r13__si_TB_r13 {
	SchedulingInfo_NB_r13__si_TB_r13_b56	= 0,
	SchedulingInfo_NB_r13__si_TB_r13_b120	= 1,
	SchedulingInfo_NB_r13__si_TB_r13_b208	= 2,
	SchedulingInfo_NB_r13__si_TB_r13_b256	= 3,
	SchedulingInfo_NB_r13__si_TB_r13_b328	= 4,
	SchedulingInfo_NB_r13__si_TB_r13_b440	= 5,
	SchedulingInfo_NB_r13__si_TB_r13_b552	= 6,
	SchedulingInfo_NB_r13__si_TB_r13_b680	= 7
} e_SchedulingInfo_NB_r13__si_TB_r13;

/* SchedulingInfo-NB-r13 */
typedef struct SchedulingInfo_NB_r13 {
	long	 si_Periodicity_r13;
	long	 si_RepetitionPattern_r13;
	SIB_MappingInfo_NB_r13_t	 sib_MappingInfo_r13;
	long	 si_TB_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SchedulingInfo_NB_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_si_Periodicity_r13_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_si_RepetitionPattern_r13_11;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_si_TB_r13_17;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SchedulingInfo_NB_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_SchedulingInfo_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_SchedulingInfo_NB_r13_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _SchedulingInfo_NB_r13_H_ */
#include <asn_internal.h>
