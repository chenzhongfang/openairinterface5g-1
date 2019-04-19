/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/user/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_CSIReportPerCSIProcessItem_H_
#define	_X2AP_CSIReportPerCSIProcessItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <NativeInteger.h>
#include "X2AP_WidebandCQI.h"
#include "X2AP_SubbandSize.h"
#include <constr_SEQUENCE.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct X2AP_SubbandCQIList;
struct X2AP_ProtocolExtensionContainer;

/* Forward definitions */
typedef struct X2AP_CSIReportPerCSIProcessItem__Member {
	long	 rI;
	X2AP_WidebandCQI_t	 widebandCQI;
	X2AP_SubbandSize_t	 subbandSize;
	struct X2AP_SubbandCQIList	*subbandCQIList;	/* OPTIONAL */
	struct X2AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSIReportPerCSIProcessItem__Member;

/* X2AP_CSIReportPerCSIProcessItem */
typedef struct X2AP_CSIReportPerCSIProcessItem {
	A_SEQUENCE_OF(CSIReportPerCSIProcessItem__Member) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_CSIReportPerCSIProcessItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_CSIReportPerCSIProcessItem;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_CSIReportPerCSIProcessItem_specs_1;
extern asn_TYPE_member_t asn_MBR_X2AP_CSIReportPerCSIProcessItem_1[1];
extern asn_per_constraints_t asn_PER_type_X2AP_CSIReportPerCSIProcessItem_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_CSIReportPerCSIProcessItem_H_ */
#include <asn_internal.h>
