/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_CarrierFreqUTRA_TDD_r12_H_
#define	_CarrierFreqUTRA_TDD_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueUTRA.h"
#include "CellReselectionPriority.h"
#include "ReselectionThreshold.h"
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CarrierFreqUTRA_TDD_r12__reducedMeasPerformance_r12 {
	CarrierFreqUTRA_TDD_r12__reducedMeasPerformance_r12_true	= 0
} e_CarrierFreqUTRA_TDD_r12__reducedMeasPerformance_r12;

/* CarrierFreqUTRA-TDD-r12 */
typedef struct CarrierFreqUTRA_TDD_r12 {
	ARFCN_ValueUTRA_t	 carrierFreq_r12;
	CellReselectionPriority_t	*cellReselectionPriority_r12;	/* OPTIONAL */
	ReselectionThreshold_t	 threshX_High_r12;
	ReselectionThreshold_t	 threshX_Low_r12;
	long	 q_RxLevMin_r12;
	long	 p_MaxUTRA_r12;
	long	*reducedMeasPerformance_r12;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CarrierFreqUTRA_TDD_r12_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_reducedMeasPerformance_r12_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CarrierFreqUTRA_TDD_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_CarrierFreqUTRA_TDD_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_CarrierFreqUTRA_TDD_r12_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _CarrierFreqUTRA_TDD_r12_H_ */
#include <asn_internal.h>
