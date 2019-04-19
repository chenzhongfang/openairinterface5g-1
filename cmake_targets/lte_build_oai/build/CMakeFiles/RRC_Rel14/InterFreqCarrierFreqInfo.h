/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_InterFreqCarrierFreqInfo_H_
#define	_InterFreqCarrierFreqInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueEUTRA.h"
#include "Q-RxLevMin.h"
#include "P-Max.h"
#include "T-Reselection.h"
#include "ReselectionThreshold.h"
#include "AllowedMeasBandwidth.h"
#include "PresenceAntennaPort1.h"
#include "CellReselectionPriority.h"
#include "NeighCellConfig.h"
#include "Q-OffsetRange.h"
#include "Q-QualMin-r9.h"
#include "ReselectionThresholdQ-r9.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SpeedStateScaleFactors;
struct InterFreqNeighCellList;
struct InterFreqBlackCellList;

/* InterFreqCarrierFreqInfo */
typedef struct InterFreqCarrierFreqInfo {
	ARFCN_ValueEUTRA_t	 dl_CarrierFreq;
	Q_RxLevMin_t	 q_RxLevMin;
	P_Max_t	*p_Max;	/* OPTIONAL */
	T_Reselection_t	 t_ReselectionEUTRA;
	struct SpeedStateScaleFactors	*t_ReselectionEUTRA_SF;	/* OPTIONAL */
	ReselectionThreshold_t	 threshX_High;
	ReselectionThreshold_t	 threshX_Low;
	AllowedMeasBandwidth_t	 allowedMeasBandwidth;
	PresenceAntennaPort1_t	 presenceAntennaPort1;
	CellReselectionPriority_t	*cellReselectionPriority;	/* OPTIONAL */
	NeighCellConfig_t	 neighCellConfig;
	Q_OffsetRange_t	*q_OffsetFreq;	/* DEFAULT 15 */
	struct InterFreqNeighCellList	*interFreqNeighCellList;	/* OPTIONAL */
	struct InterFreqBlackCellList	*interFreqBlackCellList;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct InterFreqCarrierFreqInfo__ext1 {
		Q_QualMin_r9_t	*q_QualMin_r9;	/* OPTIONAL */
		struct InterFreqCarrierFreqInfo__ext1__threshX_Q_r9 {
			ReselectionThresholdQ_r9_t	 threshX_HighQ_r9;
			ReselectionThresholdQ_r9_t	 threshX_LowQ_r9;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *threshX_Q_r9;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct InterFreqCarrierFreqInfo__ext2 {
		Q_QualMin_r9_t	*q_QualMinWB_r11;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqCarrierFreqInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqCarrierFreqInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_InterFreqCarrierFreqInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_InterFreqCarrierFreqInfo_1[16];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SpeedStateScaleFactors.h"
#include "InterFreqNeighCellList.h"
#include "InterFreqBlackCellList.h"

#endif	/* _InterFreqCarrierFreqInfo_H_ */
#include <asn_internal.h>
