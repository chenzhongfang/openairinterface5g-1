/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_VarMeasReportList_r12_H_
#define	_VarMeasReportList_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct VarMeasReport;

/* VarMeasReportList-r12 */
typedef struct VarMeasReportList_r12 {
	A_SEQUENCE_OF(struct VarMeasReport) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VarMeasReportList_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VarMeasReportList_r12;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "VarMeasReport.h"

#endif	/* _VarMeasReportList_r12_H_ */
#include <asn_internal.h>
