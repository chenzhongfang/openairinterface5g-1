/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_MeasObjectToAddMod_H_
#define	_MeasObjectToAddMod_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasObjectId.h"
#include "MeasObjectEUTRA.h"
#include "MeasObjectUTRA.h"
#include "MeasObjectGERAN.h"
#include "MeasObjectCDMA2000.h"
#include "MeasObjectWLAN-r13.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasObjectToAddMod__measObject_PR {
	MeasObjectToAddMod__measObject_PR_NOTHING,	/* No components present */
	MeasObjectToAddMod__measObject_PR_measObjectEUTRA,
	MeasObjectToAddMod__measObject_PR_measObjectUTRA,
	MeasObjectToAddMod__measObject_PR_measObjectGERAN,
	MeasObjectToAddMod__measObject_PR_measObjectCDMA2000,
	/* Extensions may appear below */
	MeasObjectToAddMod__measObject_PR_measObjectWLAN_r13
} MeasObjectToAddMod__measObject_PR;

/* MeasObjectToAddMod */
typedef struct MeasObjectToAddMod {
	MeasObjectId_t	 measObjectId;
	struct MeasObjectToAddMod__measObject {
		MeasObjectToAddMod__measObject_PR present;
		union MeasObjectToAddMod__measObject_u {
			MeasObjectEUTRA_t	 measObjectEUTRA;
			MeasObjectUTRA_t	 measObjectUTRA;
			MeasObjectGERAN_t	 measObjectGERAN;
			MeasObjectCDMA2000_t	 measObjectCDMA2000;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			MeasObjectWLAN_r13_t	 measObjectWLAN_r13;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} measObject;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasObjectToAddMod_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasObjectToAddMod;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasObjectToAddMod_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasObjectToAddMod_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasObjectToAddMod_H_ */
#include <asn_internal.h>
