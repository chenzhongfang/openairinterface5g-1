/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_CellsToAddModUTRA_TDD_H_
#define	_CellsToAddModUTRA_TDD_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "PhysCellIdUTRA-TDD.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CellsToAddModUTRA-TDD */
typedef struct CellsToAddModUTRA_TDD {
	long	 cellIndex;
	PhysCellIdUTRA_TDD_t	 physCellId;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellsToAddModUTRA_TDD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellsToAddModUTRA_TDD;
extern asn_SEQUENCE_specifics_t asn_SPC_CellsToAddModUTRA_TDD_specs_1;
extern asn_TYPE_member_t asn_MBR_CellsToAddModUTRA_TDD_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CellsToAddModUTRA_TDD_H_ */
#include <asn_internal.h>
