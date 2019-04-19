/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_RRCConnectionResumeRequest_r13_IEs_H_
#define	_RRCConnectionResumeRequest_r13_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include "ResumeCause.h"
#include "ResumeIdentity-r13.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionResumeRequest_r13_IEs__resumeIdentity_r13_PR {
	RRCConnectionResumeRequest_r13_IEs__resumeIdentity_r13_PR_NOTHING,	/* No components present */
	RRCConnectionResumeRequest_r13_IEs__resumeIdentity_r13_PR_resumeID_r13,
	RRCConnectionResumeRequest_r13_IEs__resumeIdentity_r13_PR_truncatedResumeID_r13
} RRCConnectionResumeRequest_r13_IEs__resumeIdentity_r13_PR;

/* RRCConnectionResumeRequest-r13-IEs */
typedef struct RRCConnectionResumeRequest_r13_IEs {
	struct RRCConnectionResumeRequest_r13_IEs__resumeIdentity_r13 {
		RRCConnectionResumeRequest_r13_IEs__resumeIdentity_r13_PR present;
		union RRCConnectionResumeRequest_r13_IEs__resumeIdentity_r13_u {
			ResumeIdentity_r13_t	 resumeID_r13;
			BIT_STRING_t	 truncatedResumeID_r13;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} resumeIdentity_r13;
	BIT_STRING_t	 shortResumeMAC_I_r13;
	ResumeCause_t	 resumeCause_r13;
	BIT_STRING_t	 spare;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionResumeRequest_r13_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionResumeRequest_r13_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionResumeRequest_r13_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionResumeRequest_r13_IEs_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionResumeRequest_r13_IEs_H_ */
#include <asn_internal.h>
