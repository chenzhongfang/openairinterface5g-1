/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_ProximityIndication_r9_IEs_H_
#define	_ProximityIndication_r9_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "ARFCN-ValueEUTRA.h"
#include "ARFCN-ValueUTRA.h"
#include "ARFCN-ValueEUTRA-v9e0.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ProximityIndication_r9_IEs__type_r9 {
	ProximityIndication_r9_IEs__type_r9_entering	= 0,
	ProximityIndication_r9_IEs__type_r9_leaving	= 1
} e_ProximityIndication_r9_IEs__type_r9;
typedef enum ProximityIndication_r9_IEs__carrierFreq_r9_PR {
	ProximityIndication_r9_IEs__carrierFreq_r9_PR_NOTHING,	/* No components present */
	ProximityIndication_r9_IEs__carrierFreq_r9_PR_eutra_r9,
	ProximityIndication_r9_IEs__carrierFreq_r9_PR_utra_r9,
	/* Extensions may appear below */
	ProximityIndication_r9_IEs__carrierFreq_r9_PR_eutra2_v9e0
} ProximityIndication_r9_IEs__carrierFreq_r9_PR;

/* Forward declarations */
struct ProximityIndication_v930_IEs;

/* ProximityIndication-r9-IEs */
typedef struct ProximityIndication_r9_IEs {
	long	 type_r9;
	struct ProximityIndication_r9_IEs__carrierFreq_r9 {
		ProximityIndication_r9_IEs__carrierFreq_r9_PR present;
		union ProximityIndication_r9_IEs__carrierFreq_r9_u {
			ARFCN_ValueEUTRA_t	 eutra_r9;
			ARFCN_ValueUTRA_t	 utra_r9;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			ARFCN_ValueEUTRA_v9e0_t	 eutra2_v9e0;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} carrierFreq_r9;
	struct ProximityIndication_v930_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProximityIndication_r9_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_type_r9_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ProximityIndication_r9_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_ProximityIndication_r9_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_ProximityIndication_r9_IEs_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ProximityIndication-v930-IEs.h"

#endif	/* _ProximityIndication_r9_IEs_H_ */
#include <asn_internal.h>
