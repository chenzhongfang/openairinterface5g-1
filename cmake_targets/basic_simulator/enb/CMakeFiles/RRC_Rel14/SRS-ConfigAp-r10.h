/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_SRS_ConfigAp_r10_H_
#define	_SRS_ConfigAp_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SRS-AntennaPort.h"
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SRS_ConfigAp_r10__srs_BandwidthAp_r10 {
	SRS_ConfigAp_r10__srs_BandwidthAp_r10_bw0	= 0,
	SRS_ConfigAp_r10__srs_BandwidthAp_r10_bw1	= 1,
	SRS_ConfigAp_r10__srs_BandwidthAp_r10_bw2	= 2,
	SRS_ConfigAp_r10__srs_BandwidthAp_r10_bw3	= 3
} e_SRS_ConfigAp_r10__srs_BandwidthAp_r10;
typedef enum SRS_ConfigAp_r10__cyclicShiftAp_r10 {
	SRS_ConfigAp_r10__cyclicShiftAp_r10_cs0	= 0,
	SRS_ConfigAp_r10__cyclicShiftAp_r10_cs1	= 1,
	SRS_ConfigAp_r10__cyclicShiftAp_r10_cs2	= 2,
	SRS_ConfigAp_r10__cyclicShiftAp_r10_cs3	= 3,
	SRS_ConfigAp_r10__cyclicShiftAp_r10_cs4	= 4,
	SRS_ConfigAp_r10__cyclicShiftAp_r10_cs5	= 5,
	SRS_ConfigAp_r10__cyclicShiftAp_r10_cs6	= 6,
	SRS_ConfigAp_r10__cyclicShiftAp_r10_cs7	= 7
} e_SRS_ConfigAp_r10__cyclicShiftAp_r10;

/* SRS-ConfigAp-r10 */
typedef struct SRS_ConfigAp_r10 {
	SRS_AntennaPort_t	 srs_AntennaPortAp_r10;
	long	 srs_BandwidthAp_r10;
	long	 freqDomainPositionAp_r10;
	long	 transmissionCombAp_r10;
	long	 cyclicShiftAp_r10;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SRS_ConfigAp_r10_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_srs_BandwidthAp_r10_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_cyclicShiftAp_r10_10;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SRS_ConfigAp_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_SRS_ConfigAp_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_SRS_ConfigAp_r10_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _SRS_ConfigAp_r10_H_ */
#include <asn_internal.h>
