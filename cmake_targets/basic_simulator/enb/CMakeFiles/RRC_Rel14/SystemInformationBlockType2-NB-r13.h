/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_SystemInformationBlockType2_NB_r13_H_
#define	_SystemInformationBlockType2_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RadioResourceConfigCommonSIB-NB-r13.h"
#include "UE-TimersAndConstants-NB-r13.h"
#include "TimeAlignmentTimer.h"
#include <OCTET_STRING.h>
#include "AdditionalSpectrumEmission.h"
#include <constr_SEQUENCE.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SystemInformationBlockType2_NB_r13__ext1__cp_Reestablishment_r14 {
	SystemInformationBlockType2_NB_r13__ext1__cp_Reestablishment_r14_true	= 0
} e_SystemInformationBlockType2_NB_r13__ext1__cp_Reestablishment_r14;
typedef enum SystemInformationBlockType2_NB_r13__ext2__servingCellMeasInfo_r14 {
	SystemInformationBlockType2_NB_r13__ext2__servingCellMeasInfo_r14_true	= 0
} e_SystemInformationBlockType2_NB_r13__ext2__servingCellMeasInfo_r14;
typedef enum SystemInformationBlockType2_NB_r13__ext2__cqi_Reporting_r14 {
	SystemInformationBlockType2_NB_r13__ext2__cqi_Reporting_r14_true	= 0
} e_SystemInformationBlockType2_NB_r13__ext2__cqi_Reporting_r14;

/* Forward declarations */
struct CarrierFreq_NB_r13;

/* SystemInformationBlockType2-NB-r13 */
typedef struct SystemInformationBlockType2_NB_r13 {
	RadioResourceConfigCommonSIB_NB_r13_t	 radioResourceConfigCommon_r13;
	UE_TimersAndConstants_NB_r13_t	 ue_TimersAndConstants_r13;
	struct SystemInformationBlockType2_NB_r13__freqInfo_r13 {
		struct CarrierFreq_NB_r13	*ul_CarrierFreq_r13;	/* OPTIONAL */
		AdditionalSpectrumEmission_t	 additionalSpectrumEmission_r13;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} freqInfo_r13;
	TimeAlignmentTimer_t	 timeAlignmentTimerCommon_r13;
	struct SystemInformationBlockType2_NB_r13__multiBandInfoList_r13 {
		A_SEQUENCE_OF(AdditionalSpectrumEmission_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *multiBandInfoList_r13;
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct SystemInformationBlockType2_NB_r13__ext1 {
		long	*cp_Reestablishment_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct SystemInformationBlockType2_NB_r13__ext2 {
		long	*servingCellMeasInfo_r14;	/* OPTIONAL */
		long	*cqi_Reporting_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType2_NB_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_cp_Reestablishment_r14_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_servingCellMeasInfo_r14_16;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_cqi_Reporting_r14_18;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType2_NB_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType2_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType2_NB_r13_1[8];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CarrierFreq-NB-r13.h"

#endif	/* _SystemInformationBlockType2_NB_r13_H_ */
#include <asn_internal.h>
