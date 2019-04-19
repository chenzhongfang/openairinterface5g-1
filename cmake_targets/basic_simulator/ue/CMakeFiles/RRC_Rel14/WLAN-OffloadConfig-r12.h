/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_WLAN_OffloadConfig_r12_H_
#define	_WLAN_OffloadConfig_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include "T-Reselection.h"
#include "RSRP-Range.h"
#include <constr_SEQUENCE.h>
#include "RSRQ-Range.h"
#include <NativeInteger.h>
#include "WLAN-backhaulRate-r12.h"

#ifdef __cplusplus
extern "C" {
#endif

/* WLAN-OffloadConfig-r12 */
typedef struct WLAN_OffloadConfig_r12 {
	struct WLAN_OffloadConfig_r12__thresholdRSRP_r12 {
		RSRP_Range_t	 thresholdRSRP_Low_r12;
		RSRP_Range_t	 thresholdRSRP_High_r12;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *thresholdRSRP_r12;
	struct WLAN_OffloadConfig_r12__thresholdRSRQ_r12 {
		RSRQ_Range_t	 thresholdRSRQ_Low_r12;
		RSRQ_Range_t	 thresholdRSRQ_High_r12;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *thresholdRSRQ_r12;
	struct WLAN_OffloadConfig_r12__thresholdRSRQ_OnAllSymbolsWithWB_r12 {
		RSRQ_Range_t	 thresholdRSRQ_OnAllSymbolsWithWB_Low_r12;
		RSRQ_Range_t	 thresholdRSRQ_OnAllSymbolsWithWB_High_r12;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *thresholdRSRQ_OnAllSymbolsWithWB_r12;
	struct WLAN_OffloadConfig_r12__thresholdRSRQ_OnAllSymbols_r12 {
		RSRQ_Range_t	 thresholdRSRQ_OnAllSymbolsLow_r12;
		RSRQ_Range_t	 thresholdRSRQ_OnAllSymbolsHigh_r12;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *thresholdRSRQ_OnAllSymbols_r12;
	struct WLAN_OffloadConfig_r12__thresholdRSRQ_WB_r12 {
		RSRQ_Range_t	 thresholdRSRQ_WB_Low_r12;
		RSRQ_Range_t	 thresholdRSRQ_WB_High_r12;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *thresholdRSRQ_WB_r12;
	struct WLAN_OffloadConfig_r12__thresholdChannelUtilization_r12 {
		long	 thresholdChannelUtilizationLow_r12;
		long	 thresholdChannelUtilizationHigh_r12;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *thresholdChannelUtilization_r12;
	struct WLAN_OffloadConfig_r12__thresholdBackhaul_Bandwidth_r12 {
		WLAN_backhaulRate_r12_t	 thresholdBackhaulDL_BandwidthLow_r12;
		WLAN_backhaulRate_r12_t	 thresholdBackhaulDL_BandwidthHigh_r12;
		WLAN_backhaulRate_r12_t	 thresholdBackhaulUL_BandwidthLow_r12;
		WLAN_backhaulRate_r12_t	 thresholdBackhaulUL_BandwidthHigh_r12;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *thresholdBackhaul_Bandwidth_r12;
	struct WLAN_OffloadConfig_r12__thresholdWLAN_RSSI_r12 {
		long	 thresholdWLAN_RSSI_Low_r12;
		long	 thresholdWLAN_RSSI_High_r12;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *thresholdWLAN_RSSI_r12;
	BIT_STRING_t	*offloadPreferenceIndicator_r12;	/* OPTIONAL */
	T_Reselection_t	*t_SteeringWLAN_r12;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} WLAN_OffloadConfig_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_WLAN_OffloadConfig_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_WLAN_OffloadConfig_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_WLAN_OffloadConfig_r12_1[10];

#ifdef __cplusplus
}
#endif

#endif	/* _WLAN_OffloadConfig_r12_H_ */
#include <asn_internal.h>
