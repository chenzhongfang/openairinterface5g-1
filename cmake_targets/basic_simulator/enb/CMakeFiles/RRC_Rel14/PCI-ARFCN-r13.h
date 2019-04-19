/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_PCI_ARFCN_r13_H_
#define	_PCI_ARFCN_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PhysCellId.h"
#include "ARFCN-ValueEUTRA-r9.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PCI-ARFCN-r13 */
typedef struct PCI_ARFCN_r13 {
	PhysCellId_t	 physCellId_r13;
	ARFCN_ValueEUTRA_r9_t	*carrierFreq_r13;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PCI_ARFCN_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PCI_ARFCN_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_PCI_ARFCN_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_PCI_ARFCN_r13_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PCI_ARFCN_r13_H_ */
#include <asn_internal.h>
