/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_MeasResults_H_
#define	_MeasResults_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasId.h"
#include "RSRP-Range.h"
#include "RSRQ-Range.h"
#include <constr_SEQUENCE.h>
#include "MeasResultListEUTRA.h"
#include "MeasResultListUTRA.h"
#include "MeasResultListGERAN.h"
#include "MeasResultsCDMA2000.h"
#include <constr_CHOICE.h>
#include "MeasId-v1250.h"
#include "RSRQ-Range-v1250.h"
#include "RS-SINR-Range-r13.h"
#include "RSRP-Range-v1360.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasResults__measResultNeighCells_PR {
	MeasResults__measResultNeighCells_PR_NOTHING,	/* No components present */
	MeasResults__measResultNeighCells_PR_measResultListEUTRA,
	MeasResults__measResultNeighCells_PR_measResultListUTRA,
	MeasResults__measResultNeighCells_PR_measResultListGERAN,
	MeasResults__measResultNeighCells_PR_measResultsCDMA2000
	/* Extensions may appear below */
	
} MeasResults__measResultNeighCells_PR;

/* Forward declarations */
struct MeasResultForECID_r9;
struct LocationInfo_r10;
struct MeasResultServFreqList_r10;
struct MeasResultCSI_RS_List_r12;
struct MeasResultForRSSI_r13;
struct MeasResultServFreqListExt_r13;
struct MeasResultSSTD_r13;
struct UL_PDCP_DelayResultList_r13;
struct MeasResultListWLAN_r13;
struct MeasResultListCBR_r14;
struct MeasResultListWLAN_r14;

/* MeasResults */
typedef struct MeasResults {
	MeasId_t	 measId;
	struct MeasResults__measResultPCell {
		RSRP_Range_t	 rsrpResult;
		RSRQ_Range_t	 rsrqResult;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} measResultPCell;
	struct MeasResults__measResultNeighCells {
		MeasResults__measResultNeighCells_PR present;
		union MeasResults__measResultNeighCells_u {
			MeasResultListEUTRA_t	 measResultListEUTRA;
			MeasResultListUTRA_t	 measResultListUTRA;
			MeasResultListGERAN_t	 measResultListGERAN;
			MeasResultsCDMA2000_t	 measResultsCDMA2000;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *measResultNeighCells;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct MeasResults__ext1 {
		struct MeasResultForECID_r9	*measResultForECID_r9;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct MeasResults__ext2 {
		struct LocationInfo_r10	*locationInfo_r10;	/* OPTIONAL */
		struct MeasResultServFreqList_r10	*measResultServFreqList_r10;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct MeasResults__ext3 {
		MeasId_v1250_t	*measId_v1250;	/* OPTIONAL */
		RSRQ_Range_v1250_t	*measResultPCell_v1250;	/* OPTIONAL */
		struct MeasResultCSI_RS_List_r12	*measResultCSI_RS_List_r12;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	struct MeasResults__ext4 {
		struct MeasResultForRSSI_r13	*measResultForRSSI_r13;	/* OPTIONAL */
		struct MeasResultServFreqListExt_r13	*measResultServFreqListExt_r13;	/* OPTIONAL */
		struct MeasResultSSTD_r13	*measResultSSTD_r13;	/* OPTIONAL */
		struct MeasResults__ext4__measResultPCell_v1310 {
			RS_SINR_Range_r13_t	 rs_sinr_Result_r13;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *measResultPCell_v1310;
		struct UL_PDCP_DelayResultList_r13	*ul_PDCP_DelayResultList_r13;	/* OPTIONAL */
		struct MeasResultListWLAN_r13	*measResultListWLAN_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext4;
	struct MeasResults__ext5 {
		RSRP_Range_v1360_t	*measResultPCell_v1360;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext5;
	struct MeasResults__ext6 {
		struct MeasResultListCBR_r14	*measResultListCBR_r14;	/* OPTIONAL */
		struct MeasResultListWLAN_r14	*measResultListWLAN_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext6;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResults_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResults;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasResults_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasResults_1[9];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasResultForECID-r9.h"
#include "LocationInfo-r10.h"
#include "MeasResultServFreqList-r10.h"
#include "MeasResultCSI-RS-List-r12.h"
#include "MeasResultForRSSI-r13.h"
#include "MeasResultServFreqListExt-r13.h"
#include "MeasResultSSTD-r13.h"
#include "UL-PDCP-DelayResultList-r13.h"
#include "MeasResultListWLAN-r13.h"
#include "MeasResultListCBR-r14.h"
#include "MeasResultListWLAN-r14.h"

#endif	/* _MeasResults_H_ */
#include <asn_internal.h>
