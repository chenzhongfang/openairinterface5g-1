/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_BandClassPriorityHRPD_H_
#define	_BandClassPriorityHRPD_H_


#include <asn_application.h>

/* Including external dependencies */
#include "BandclassCDMA2000.h"
#include "CellReselectionPriority.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BandClassPriorityHRPD */
typedef struct BandClassPriorityHRPD {
	BandclassCDMA2000_t	 bandClass;
	CellReselectionPriority_t	 cellReselectionPriority;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandClassPriorityHRPD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BandClassPriorityHRPD;
extern asn_SEQUENCE_specifics_t asn_SPC_BandClassPriorityHRPD_specs_1;
extern asn_TYPE_member_t asn_MBR_BandClassPriorityHRPD_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _BandClassPriorityHRPD_H_ */
#include <asn_internal.h>
