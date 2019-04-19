/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_SystemInformationBlockType8_H_
#define	_SystemInformationBlockType8_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <OCTET_STRING.h>
#include "PreRegistrationInfoHRPD.h"
#include <constr_SEQUENCE.h>
#include <BIT_STRING.h>
#include <BOOLEAN.h>
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SystemInformationBlockType8__ext2__csfb_DualRxTxSupport_r10 {
	SystemInformationBlockType8__ext2__csfb_DualRxTxSupport_r10_true	= 0
} e_SystemInformationBlockType8__ext2__csfb_DualRxTxSupport_r10;

/* Forward declarations */
struct SystemTimeInfoCDMA2000;
struct CellReselectionParametersCDMA2000;
struct CSFB_RegistrationParam1XRTT;
struct CellReselectionParametersCDMA2000_v920;
struct CSFB_RegistrationParam1XRTT_v920;
struct AC_BarringConfig1XRTT_r9;
struct SIB8_PerPLMN_List_r11;

/* SystemInformationBlockType8 */
typedef struct SystemInformationBlockType8 {
	struct SystemTimeInfoCDMA2000	*systemTimeInfo;	/* OPTIONAL */
	long	*searchWindowSize;	/* OPTIONAL */
	struct SystemInformationBlockType8__parametersHRPD {
		PreRegistrationInfoHRPD_t	 preRegistrationInfoHRPD;
		struct CellReselectionParametersCDMA2000	*cellReselectionParametersHRPD;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *parametersHRPD;
	struct SystemInformationBlockType8__parameters1XRTT {
		struct CSFB_RegistrationParam1XRTT	*csfb_RegistrationParam1XRTT;	/* OPTIONAL */
		BIT_STRING_t	*longCodeState1XRTT;	/* OPTIONAL */
		struct CellReselectionParametersCDMA2000	*cellReselectionParameters1XRTT;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *parameters1XRTT;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct SystemInformationBlockType8__ext1 {
		BOOLEAN_t	*csfb_SupportForDualRxUEs_r9;	/* OPTIONAL */
		struct CellReselectionParametersCDMA2000_v920	*cellReselectionParametersHRPD_v920;	/* OPTIONAL */
		struct CellReselectionParametersCDMA2000_v920	*cellReselectionParameters1XRTT_v920;	/* OPTIONAL */
		struct CSFB_RegistrationParam1XRTT_v920	*csfb_RegistrationParam1XRTT_v920;	/* OPTIONAL */
		struct AC_BarringConfig1XRTT_r9	*ac_BarringConfig1XRTT_r9;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct SystemInformationBlockType8__ext2 {
		long	*csfb_DualRxTxSupport_r10;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct SystemInformationBlockType8__ext3 {
		struct SIB8_PerPLMN_List_r11	*sib8_PerPLMN_List_r11;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType8_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_csfb_DualRxTxSupport_r10_20;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType8;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType8_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType8_1[8];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SystemTimeInfoCDMA2000.h"
#include "CellReselectionParametersCDMA2000.h"
#include "CSFB-RegistrationParam1XRTT.h"
#include "CellReselectionParametersCDMA2000-v920.h"
#include "CSFB-RegistrationParam1XRTT-v920.h"
#include "AC-BarringConfig1XRTT-r9.h"
#include "SIB8-PerPLMN-List-r11.h"

#endif	/* _SystemInformationBlockType8_H_ */
#include <asn_internal.h>
