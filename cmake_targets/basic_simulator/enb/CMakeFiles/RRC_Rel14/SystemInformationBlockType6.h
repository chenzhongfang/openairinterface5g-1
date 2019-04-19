/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_SystemInformationBlockType6_H_
#define	_SystemInformationBlockType6_H_


#include <asn_application.h>

/* Including external dependencies */
#include "T-Reselection.h"
#include <OCTET_STRING.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CarrierFreqListUTRA_FDD;
struct CarrierFreqListUTRA_TDD;
struct SpeedStateScaleFactors;
struct CarrierFreqListUTRA_FDD_Ext_r12;
struct CarrierFreqListUTRA_TDD_Ext_r12;
struct CarrierFreqInfoUTRA_v1250;

/* SystemInformationBlockType6 */
typedef struct SystemInformationBlockType6 {
	struct CarrierFreqListUTRA_FDD	*carrierFreqListUTRA_FDD;	/* OPTIONAL */
	struct CarrierFreqListUTRA_TDD	*carrierFreqListUTRA_TDD;	/* OPTIONAL */
	T_Reselection_t	 t_ReselectionUTRA;
	struct SpeedStateScaleFactors	*t_ReselectionUTRA_SF;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct SystemInformationBlockType6__ext1 {
		struct SystemInformationBlockType6__ext1__carrierFreqListUTRA_FDD_v1250 {
			A_SEQUENCE_OF(struct CarrierFreqInfoUTRA_v1250) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *carrierFreqListUTRA_FDD_v1250;
		struct SystemInformationBlockType6__ext1__carrierFreqListUTRA_TDD_v1250 {
			A_SEQUENCE_OF(struct CarrierFreqInfoUTRA_v1250) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *carrierFreqListUTRA_TDD_v1250;
		struct CarrierFreqListUTRA_FDD_Ext_r12	*carrierFreqListUTRA_FDD_Ext_r12;	/* OPTIONAL */
		struct CarrierFreqListUTRA_TDD_Ext_r12	*carrierFreqListUTRA_TDD_Ext_r12;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType6_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType6;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType6_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType6_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CarrierFreqListUTRA-FDD.h"
#include "CarrierFreqListUTRA-TDD.h"
#include "SpeedStateScaleFactors.h"
#include "CarrierFreqListUTRA-FDD-Ext-r12.h"
#include "CarrierFreqListUTRA-TDD-Ext-r12.h"
#include "CarrierFreqInfoUTRA-v1250.h"

#endif	/* _SystemInformationBlockType6_H_ */
#include <asn_internal.h>
