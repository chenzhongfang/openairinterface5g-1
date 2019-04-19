/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_TunnelConfigLWIP_r13_H_
#define	_TunnelConfigLWIP_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IP-Address-r13.h"
#include "IKE-Identity-r13.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TunnelConfigLWIP-r13 */
typedef struct TunnelConfigLWIP_r13 {
	IP_Address_r13_t	 ip_Address_r13;
	IKE_Identity_r13_t	 ike_Identity_r13;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct TunnelConfigLWIP_r13__ext1 {
		long	*lwip_Counter_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TunnelConfigLWIP_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TunnelConfigLWIP_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_TunnelConfigLWIP_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_TunnelConfigLWIP_r13_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _TunnelConfigLWIP_r13_H_ */
#include <asn_internal.h>
