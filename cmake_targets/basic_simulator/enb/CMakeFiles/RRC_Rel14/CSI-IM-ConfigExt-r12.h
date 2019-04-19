/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_CSI_IM_ConfigExt_r12_H_
#define	_CSI_IM_ConfigExt_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CSI-IM-ConfigId-v1250.h"
#include <NativeInteger.h>
#include <BOOLEAN.h>
#include "CSI-IM-ConfigId-v1310.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CSI-IM-ConfigExt-r12 */
typedef struct CSI_IM_ConfigExt_r12 {
	CSI_IM_ConfigId_v1250_t	 csi_IM_ConfigId_v1250;
	long	 resourceConfig_r12;
	long	 subframeConfig_r12;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct CSI_IM_ConfigExt_r12__ext1 {
		BOOLEAN_t	*interferenceMeasRestriction_r13;	/* OPTIONAL */
		CSI_IM_ConfigId_v1310_t	*csi_IM_ConfigId_v1310;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSI_IM_ConfigExt_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CSI_IM_ConfigExt_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_CSI_IM_ConfigExt_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_CSI_IM_ConfigExt_r12_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _CSI_IM_ConfigExt_r12_H_ */
#include <asn_internal.h>
