/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_MeasResultServFreq_r10_H_
#define	_MeasResultServFreq_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ServCellIndex-r10.h"
#include "RSRP-Range.h"
#include "RSRQ-Range.h"
#include <constr_SEQUENCE.h>
#include "PhysCellId.h"
#include "RSRQ-Range-v1250.h"
#include "RS-SINR-Range-r13.h"

#ifdef __cplusplus
extern "C" {
#endif

/* MeasResultServFreq-r10 */
typedef struct MeasResultServFreq_r10 {
	ServCellIndex_r10_t	 servFreqId_r10;
	struct MeasResultServFreq_r10__measResultSCell_r10 {
		RSRP_Range_t	 rsrpResultSCell_r10;
		RSRQ_Range_t	 rsrqResultSCell_r10;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *measResultSCell_r10;
	struct MeasResultServFreq_r10__measResultBestNeighCell_r10 {
		PhysCellId_t	 physCellId_r10;
		RSRP_Range_t	 rsrpResultNCell_r10;
		RSRQ_Range_t	 rsrqResultNCell_r10;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *measResultBestNeighCell_r10;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct MeasResultServFreq_r10__ext1 {
		RSRQ_Range_v1250_t	*measResultSCell_v1250;	/* OPTIONAL */
		RSRQ_Range_v1250_t	*measResultBestNeighCell_v1250;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct MeasResultServFreq_r10__ext2 {
		struct MeasResultServFreq_r10__ext2__measResultSCell_v1310 {
			RS_SINR_Range_r13_t	 rs_sinr_Result_r13;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *measResultSCell_v1310;
		struct MeasResultServFreq_r10__ext2__measResultBestNeighCell_v1310 {
			RS_SINR_Range_r13_t	 rs_sinr_Result_r13;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *measResultBestNeighCell_v1310;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultServFreq_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultServFreq_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasResultServFreq_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasResultServFreq_r10_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasResultServFreq_r10_H_ */
#include <asn_internal.h>
