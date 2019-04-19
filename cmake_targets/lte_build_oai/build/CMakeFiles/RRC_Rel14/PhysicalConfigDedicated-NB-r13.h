/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_PhysicalConfigDedicated_NB_r13_H_
#define	_PhysicalConfigDedicated_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PhysicalConfigDedicated_NB_r13__ext1__twoHARQ_ProcessesConfig_r14 {
	PhysicalConfigDedicated_NB_r13__ext1__twoHARQ_ProcessesConfig_r14_true	= 0
} e_PhysicalConfigDedicated_NB_r13__ext1__twoHARQ_ProcessesConfig_r14;
typedef enum PhysicalConfigDedicated_NB_r13__ext2__interferenceRandomisationConfig_r14 {
	PhysicalConfigDedicated_NB_r13__ext2__interferenceRandomisationConfig_r14_true	= 0
} e_PhysicalConfigDedicated_NB_r13__ext2__interferenceRandomisationConfig_r14;

/* Forward declarations */
struct CarrierConfigDedicated_NB_r13;
struct NPDCCH_ConfigDedicated_NB_r13;
struct NPUSCH_ConfigDedicated_NB_r13;
struct UplinkPowerControlDedicated_NB_r13;

/* PhysicalConfigDedicated-NB-r13 */
typedef struct PhysicalConfigDedicated_NB_r13 {
	struct CarrierConfigDedicated_NB_r13	*carrierConfigDedicated_r13;	/* OPTIONAL */
	struct NPDCCH_ConfigDedicated_NB_r13	*npdcch_ConfigDedicated_r13;	/* OPTIONAL */
	struct NPUSCH_ConfigDedicated_NB_r13	*npusch_ConfigDedicated_r13;	/* OPTIONAL */
	struct UplinkPowerControlDedicated_NB_r13	*uplinkPowerControlDedicated_r13;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct PhysicalConfigDedicated_NB_r13__ext1 {
		long	*twoHARQ_ProcessesConfig_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct PhysicalConfigDedicated_NB_r13__ext2 {
		long	*interferenceRandomisationConfig_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhysicalConfigDedicated_NB_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_twoHARQ_ProcessesConfig_r14_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_interferenceRandomisationConfig_r14_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PhysicalConfigDedicated_NB_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_PhysicalConfigDedicated_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_PhysicalConfigDedicated_NB_r13_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CarrierConfigDedicated-NB-r13.h"
#include "NPDCCH-ConfigDedicated-NB-r13.h"
#include "NPUSCH-ConfigDedicated-NB-r13.h"
#include "UplinkPowerControlDedicated-NB-r13.h"

#endif	/* _PhysicalConfigDedicated_NB_r13_H_ */
#include <asn_internal.h>
