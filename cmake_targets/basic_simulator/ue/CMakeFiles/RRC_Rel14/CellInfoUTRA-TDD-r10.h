/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_CellInfoUTRA_TDD_r10_H_
#define	_CellInfoUTRA_TDD_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PhysCellIdUTRA-TDD.h"
#include "ARFCN-ValueUTRA.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CellInfoUTRA-TDD-r10 */
typedef struct CellInfoUTRA_TDD_r10 {
	PhysCellIdUTRA_TDD_t	 physCellId_r10;
	ARFCN_ValueUTRA_t	 carrierFreq_r10;
	OCTET_STRING_t	 utra_BCCH_Container_r10;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellInfoUTRA_TDD_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellInfoUTRA_TDD_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_CellInfoUTRA_TDD_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_CellInfoUTRA_TDD_r10_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _CellInfoUTRA_TDD_r10_H_ */
#include <asn_internal.h>
