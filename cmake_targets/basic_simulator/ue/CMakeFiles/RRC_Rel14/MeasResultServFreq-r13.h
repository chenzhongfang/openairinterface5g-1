/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_MeasResultServFreq_r13_H_
#define	_MeasResultServFreq_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ServCellIndex-r13.h"
#include "RSRP-Range.h"
#include "RSRQ-Range-r13.h"
#include "RS-SINR-Range-r13.h"
#include <constr_SEQUENCE.h>
#include "PhysCellId.h"
#include "RSRP-Range-v1360.h"

#ifdef __cplusplus
extern "C" {
#endif

/* MeasResultServFreq-r13 */
typedef struct MeasResultServFreq_r13 {
	ServCellIndex_r13_t	 servFreqId_r13;
	struct MeasResultServFreq_r13__measResultSCell_r13 {
		RSRP_Range_t	 rsrpResultSCell_r13;
		RSRQ_Range_r13_t	 rsrqResultSCell_r13;
		RS_SINR_Range_r13_t	*rs_sinr_Result_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *measResultSCell_r13;
	struct MeasResultServFreq_r13__measResultBestNeighCell_r13 {
		PhysCellId_t	 physCellId_r13;
		RSRP_Range_t	 rsrpResultNCell_r13;
		RSRQ_Range_r13_t	 rsrqResultNCell_r13;
		RS_SINR_Range_r13_t	*rs_sinr_Result_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *measResultBestNeighCell_r13;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct MeasResultServFreq_r13__ext1 {
		struct MeasResultServFreq_r13__ext1__measResultBestNeighCell_v1360 {
			RSRP_Range_v1360_t	 rsrpResultNCell_v1360;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *measResultBestNeighCell_v1360;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultServFreq_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultServFreq_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasResultServFreq_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasResultServFreq_r13_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasResultServFreq_r13_H_ */
#include <asn_internal.h>
