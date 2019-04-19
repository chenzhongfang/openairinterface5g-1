/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_SystemInformationBlockType1_v1310_IEs_H_
#define	_SystemInformationBlockType1_v1310_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SystemInformationBlockType1_v1310_IEs__eDRX_Allowed_r13 {
	SystemInformationBlockType1_v1310_IEs__eDRX_Allowed_r13_true	= 0
} e_SystemInformationBlockType1_v1310_IEs__eDRX_Allowed_r13;
typedef enum SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13__si_WindowLength_BR_r13 {
	SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13__si_WindowLength_BR_r13_ms20	= 0,
	SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13__si_WindowLength_BR_r13_ms40	= 1,
	SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13__si_WindowLength_BR_r13_ms60	= 2,
	SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13__si_WindowLength_BR_r13_ms80	= 3,
	SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13__si_WindowLength_BR_r13_ms120	= 4,
	SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13__si_WindowLength_BR_r13_ms160	= 5,
	SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13__si_WindowLength_BR_r13_ms200	= 6,
	SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13__si_WindowLength_BR_r13_spare	= 7
} e_SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13__si_WindowLength_BR_r13;
typedef enum SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13__si_RepetitionPattern_r13 {
	SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13__si_RepetitionPattern_r13_everyRF	= 0,
	SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13__si_RepetitionPattern_r13_every2ndRF	= 1,
	SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13__si_RepetitionPattern_r13_every4thRF	= 2,
	SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13__si_RepetitionPattern_r13_every8thRF	= 3
} e_SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13__si_RepetitionPattern_r13;
typedef enum SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13__fdd_DownlinkOrTddSubframeBitmapBR_r13_PR {
	SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13__fdd_DownlinkOrTddSubframeBitmapBR_r13_PR_NOTHING,	/* No components present */
	SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13__fdd_DownlinkOrTddSubframeBitmapBR_r13_PR_subframePattern10_r13,
	SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13__fdd_DownlinkOrTddSubframeBitmapBR_r13_PR_subframePattern40_r13
} SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13__fdd_DownlinkOrTddSubframeBitmapBR_r13_PR;
typedef enum SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13__si_HoppingConfigCommon_r13 {
	SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13__si_HoppingConfigCommon_r13_on	= 0,
	SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13__si_HoppingConfigCommon_r13_off	= 1
} e_SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13__si_HoppingConfigCommon_r13;
typedef enum SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13__si_ValidityTime_r13 {
	SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13__si_ValidityTime_r13_true	= 0
} e_SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13__si_ValidityTime_r13;

/* Forward declarations */
struct CellSelectionInfoCE_r13;
struct SystemInformationBlockType1_v1320_IEs;
struct SchedulingInfoList_BR_r13;
struct SystemInfoValueTagList_r13;

/* SystemInformationBlockType1-v1310-IEs */
typedef struct SystemInformationBlockType1_v1310_IEs {
	BIT_STRING_t	*hyperSFN_r13;	/* OPTIONAL */
	long	*eDRX_Allowed_r13;	/* OPTIONAL */
	struct CellSelectionInfoCE_r13	*cellSelectionInfoCE_r13;	/* OPTIONAL */
	struct SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13 {
		long	 si_WindowLength_BR_r13;
		long	 si_RepetitionPattern_r13;
		struct SchedulingInfoList_BR_r13	*schedulingInfoList_BR_r13;	/* OPTIONAL */
		struct SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13__fdd_DownlinkOrTddSubframeBitmapBR_r13 {
			SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13__fdd_DownlinkOrTddSubframeBitmapBR_r13_PR present;
			union SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13__fdd_DownlinkOrTddSubframeBitmapBR_r13_u {
				BIT_STRING_t	 subframePattern10_r13;
				BIT_STRING_t	 subframePattern40_r13;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *fdd_DownlinkOrTddSubframeBitmapBR_r13;
		BIT_STRING_t	*fdd_UplinkSubframeBitmapBR_r13;	/* OPTIONAL */
		long	 startSymbolBR_r13;
		long	 si_HoppingConfigCommon_r13;
		long	*si_ValidityTime_r13;	/* OPTIONAL */
		struct SystemInfoValueTagList_r13	*systemInfoValueTagList_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *bandwidthReducedAccessRelatedInfo_r13;
	struct SystemInformationBlockType1_v1320_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType1_v1310_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_eDRX_Allowed_r13_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_si_WindowLength_BR_r13_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_si_RepetitionPattern_r13_16;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_si_HoppingConfigCommon_r13_27;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_si_ValidityTime_r13_30;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType1_v1310_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType1_v1310_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType1_v1310_IEs_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CellSelectionInfoCE-r13.h"
#include "SystemInformationBlockType1-v1320-IEs.h"
#include "SchedulingInfoList-BR-r13.h"
#include "SystemInfoValueTagList-r13.h"

#endif	/* _SystemInformationBlockType1_v1310_IEs_H_ */
#include <asn_internal.h>
