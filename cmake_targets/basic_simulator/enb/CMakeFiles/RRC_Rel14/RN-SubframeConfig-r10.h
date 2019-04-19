/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_RN_SubframeConfig_r10_H_
#define	_RN_SubframeConfig_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <NativeInteger.h>
#include <constr_CHOICE.h>
#include <NativeEnumerated.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RN_SubframeConfig_r10__subframeConfigPattern_r10_PR {
	RN_SubframeConfig_r10__subframeConfigPattern_r10_PR_NOTHING,	/* No components present */
	RN_SubframeConfig_r10__subframeConfigPattern_r10_PR_subframeConfigPatternFDD_r10,
	RN_SubframeConfig_r10__subframeConfigPattern_r10_PR_subframeConfigPatternTDD_r10
} RN_SubframeConfig_r10__subframeConfigPattern_r10_PR;
typedef enum RN_SubframeConfig_r10__rpdcch_Config_r10__resourceAllocationType_r10 {
	RN_SubframeConfig_r10__rpdcch_Config_r10__resourceAllocationType_r10_type0	= 0,
	RN_SubframeConfig_r10__rpdcch_Config_r10__resourceAllocationType_r10_type1	= 1,
	RN_SubframeConfig_r10__rpdcch_Config_r10__resourceAllocationType_r10_type2Localized	= 2,
	RN_SubframeConfig_r10__rpdcch_Config_r10__resourceAllocationType_r10_type2Distributed	= 3,
	RN_SubframeConfig_r10__rpdcch_Config_r10__resourceAllocationType_r10_spare4	= 4,
	RN_SubframeConfig_r10__rpdcch_Config_r10__resourceAllocationType_r10_spare3	= 5,
	RN_SubframeConfig_r10__rpdcch_Config_r10__resourceAllocationType_r10_spare2	= 6,
	RN_SubframeConfig_r10__rpdcch_Config_r10__resourceAllocationType_r10_spare1	= 7
} e_RN_SubframeConfig_r10__rpdcch_Config_r10__resourceAllocationType_r10;
typedef enum RN_SubframeConfig_r10__rpdcch_Config_r10__resourceBlockAssignment_r10_PR {
	RN_SubframeConfig_r10__rpdcch_Config_r10__resourceBlockAssignment_r10_PR_NOTHING,	/* No components present */
	RN_SubframeConfig_r10__rpdcch_Config_r10__resourceBlockAssignment_r10_PR_type01_r10,
	RN_SubframeConfig_r10__rpdcch_Config_r10__resourceBlockAssignment_r10_PR_type2_r10
	/* Extensions may appear below */
	
} RN_SubframeConfig_r10__rpdcch_Config_r10__resourceBlockAssignment_r10_PR;
typedef enum RN_SubframeConfig_r10__rpdcch_Config_r10__resourceBlockAssignment_r10__type01_r10_PR {
	RN_SubframeConfig_r10__rpdcch_Config_r10__resourceBlockAssignment_r10__type01_r10_PR_NOTHING,	/* No components present */
	RN_SubframeConfig_r10__rpdcch_Config_r10__resourceBlockAssignment_r10__type01_r10_PR_nrb6_r10,
	RN_SubframeConfig_r10__rpdcch_Config_r10__resourceBlockAssignment_r10__type01_r10_PR_nrb15_r10,
	RN_SubframeConfig_r10__rpdcch_Config_r10__resourceBlockAssignment_r10__type01_r10_PR_nrb25_r10,
	RN_SubframeConfig_r10__rpdcch_Config_r10__resourceBlockAssignment_r10__type01_r10_PR_nrb50_r10,
	RN_SubframeConfig_r10__rpdcch_Config_r10__resourceBlockAssignment_r10__type01_r10_PR_nrb75_r10,
	RN_SubframeConfig_r10__rpdcch_Config_r10__resourceBlockAssignment_r10__type01_r10_PR_nrb100_r10
} RN_SubframeConfig_r10__rpdcch_Config_r10__resourceBlockAssignment_r10__type01_r10_PR;
typedef enum RN_SubframeConfig_r10__rpdcch_Config_r10__resourceBlockAssignment_r10__type2_r10_PR {
	RN_SubframeConfig_r10__rpdcch_Config_r10__resourceBlockAssignment_r10__type2_r10_PR_NOTHING,	/* No components present */
	RN_SubframeConfig_r10__rpdcch_Config_r10__resourceBlockAssignment_r10__type2_r10_PR_nrb6_r10,
	RN_SubframeConfig_r10__rpdcch_Config_r10__resourceBlockAssignment_r10__type2_r10_PR_nrb15_r10,
	RN_SubframeConfig_r10__rpdcch_Config_r10__resourceBlockAssignment_r10__type2_r10_PR_nrb25_r10,
	RN_SubframeConfig_r10__rpdcch_Config_r10__resourceBlockAssignment_r10__type2_r10_PR_nrb50_r10,
	RN_SubframeConfig_r10__rpdcch_Config_r10__resourceBlockAssignment_r10__type2_r10_PR_nrb75_r10,
	RN_SubframeConfig_r10__rpdcch_Config_r10__resourceBlockAssignment_r10__type2_r10_PR_nrb100_r10
} RN_SubframeConfig_r10__rpdcch_Config_r10__resourceBlockAssignment_r10__type2_r10_PR;
typedef enum RN_SubframeConfig_r10__rpdcch_Config_r10__demodulationRS_r10_PR {
	RN_SubframeConfig_r10__rpdcch_Config_r10__demodulationRS_r10_PR_NOTHING,	/* No components present */
	RN_SubframeConfig_r10__rpdcch_Config_r10__demodulationRS_r10_PR_interleaving_r10,
	RN_SubframeConfig_r10__rpdcch_Config_r10__demodulationRS_r10_PR_noInterleaving_r10
} RN_SubframeConfig_r10__rpdcch_Config_r10__demodulationRS_r10_PR;
typedef enum RN_SubframeConfig_r10__rpdcch_Config_r10__demodulationRS_r10__interleaving_r10 {
	RN_SubframeConfig_r10__rpdcch_Config_r10__demodulationRS_r10__interleaving_r10_crs	= 0
} e_RN_SubframeConfig_r10__rpdcch_Config_r10__demodulationRS_r10__interleaving_r10;
typedef enum RN_SubframeConfig_r10__rpdcch_Config_r10__demodulationRS_r10__noInterleaving_r10 {
	RN_SubframeConfig_r10__rpdcch_Config_r10__demodulationRS_r10__noInterleaving_r10_crs	= 0,
	RN_SubframeConfig_r10__rpdcch_Config_r10__demodulationRS_r10__noInterleaving_r10_dmrs	= 1
} e_RN_SubframeConfig_r10__rpdcch_Config_r10__demodulationRS_r10__noInterleaving_r10;
typedef enum RN_SubframeConfig_r10__rpdcch_Config_r10__pucch_Config_r10_PR {
	RN_SubframeConfig_r10__rpdcch_Config_r10__pucch_Config_r10_PR_NOTHING,	/* No components present */
	RN_SubframeConfig_r10__rpdcch_Config_r10__pucch_Config_r10_PR_tdd,
	RN_SubframeConfig_r10__rpdcch_Config_r10__pucch_Config_r10_PR_fdd
} RN_SubframeConfig_r10__rpdcch_Config_r10__pucch_Config_r10_PR;
typedef enum RN_SubframeConfig_r10__rpdcch_Config_r10__pucch_Config_r10__tdd_PR {
	RN_SubframeConfig_r10__rpdcch_Config_r10__pucch_Config_r10__tdd_PR_NOTHING,	/* No components present */
	RN_SubframeConfig_r10__rpdcch_Config_r10__pucch_Config_r10__tdd_PR_channelSelectionMultiplexingBundling,
	RN_SubframeConfig_r10__rpdcch_Config_r10__pucch_Config_r10__tdd_PR_fallbackForFormat3
} RN_SubframeConfig_r10__rpdcch_Config_r10__pucch_Config_r10__tdd_PR;

/* RN-SubframeConfig-r10 */
typedef struct RN_SubframeConfig_r10 {
	struct RN_SubframeConfig_r10__subframeConfigPattern_r10 {
		RN_SubframeConfig_r10__subframeConfigPattern_r10_PR present;
		union RN_SubframeConfig_r10__subframeConfigPattern_r10_u {
			BIT_STRING_t	 subframeConfigPatternFDD_r10;
			long	 subframeConfigPatternTDD_r10;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *subframeConfigPattern_r10;
	struct RN_SubframeConfig_r10__rpdcch_Config_r10 {
		long	 resourceAllocationType_r10;
		struct RN_SubframeConfig_r10__rpdcch_Config_r10__resourceBlockAssignment_r10 {
			RN_SubframeConfig_r10__rpdcch_Config_r10__resourceBlockAssignment_r10_PR present;
			union RN_SubframeConfig_r10__rpdcch_Config_r10__resourceBlockAssignment_r10_u {
				struct RN_SubframeConfig_r10__rpdcch_Config_r10__resourceBlockAssignment_r10__type01_r10 {
					RN_SubframeConfig_r10__rpdcch_Config_r10__resourceBlockAssignment_r10__type01_r10_PR present;
					union RN_SubframeConfig_r10__rpdcch_Config_r10__resourceBlockAssignment_r10__type01_r10_u {
						BIT_STRING_t	 nrb6_r10;
						BIT_STRING_t	 nrb15_r10;
						BIT_STRING_t	 nrb25_r10;
						BIT_STRING_t	 nrb50_r10;
						BIT_STRING_t	 nrb75_r10;
						BIT_STRING_t	 nrb100_r10;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} type01_r10;
				struct RN_SubframeConfig_r10__rpdcch_Config_r10__resourceBlockAssignment_r10__type2_r10 {
					RN_SubframeConfig_r10__rpdcch_Config_r10__resourceBlockAssignment_r10__type2_r10_PR present;
					union RN_SubframeConfig_r10__rpdcch_Config_r10__resourceBlockAssignment_r10__type2_r10_u {
						BIT_STRING_t	 nrb6_r10;
						BIT_STRING_t	 nrb15_r10;
						BIT_STRING_t	 nrb25_r10;
						BIT_STRING_t	 nrb50_r10;
						BIT_STRING_t	 nrb75_r10;
						BIT_STRING_t	 nrb100_r10;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} type2_r10;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} resourceBlockAssignment_r10;
		struct RN_SubframeConfig_r10__rpdcch_Config_r10__demodulationRS_r10 {
			RN_SubframeConfig_r10__rpdcch_Config_r10__demodulationRS_r10_PR present;
			union RN_SubframeConfig_r10__rpdcch_Config_r10__demodulationRS_r10_u {
				long	 interleaving_r10;
				long	 noInterleaving_r10;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} demodulationRS_r10;
		long	 pdsch_Start_r10;
		struct RN_SubframeConfig_r10__rpdcch_Config_r10__pucch_Config_r10 {
			RN_SubframeConfig_r10__rpdcch_Config_r10__pucch_Config_r10_PR present;
			union RN_SubframeConfig_r10__rpdcch_Config_r10__pucch_Config_r10_u {
				struct RN_SubframeConfig_r10__rpdcch_Config_r10__pucch_Config_r10__tdd {
					RN_SubframeConfig_r10__rpdcch_Config_r10__pucch_Config_r10__tdd_PR present;
					union RN_SubframeConfig_r10__rpdcch_Config_r10__pucch_Config_r10__tdd_u {
						struct RN_SubframeConfig_r10__rpdcch_Config_r10__pucch_Config_r10__tdd__channelSelectionMultiplexingBundling {
							struct RN_SubframeConfig_r10__rpdcch_Config_r10__pucch_Config_r10__tdd__channelSelectionMultiplexingBundling__n1PUCCH_AN_List_r10 {
								A_SEQUENCE_OF(long) list;
								
								/* Context for parsing across buffer boundaries */
								asn_struct_ctx_t _asn_ctx;
							} n1PUCCH_AN_List_r10;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} channelSelectionMultiplexingBundling;
						struct RN_SubframeConfig_r10__rpdcch_Config_r10__pucch_Config_r10__tdd__fallbackForFormat3 {
							long	 n1PUCCH_AN_P0_r10;
							long	*n1PUCCH_AN_P1_r10;	/* OPTIONAL */
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} fallbackForFormat3;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} tdd;
				struct RN_SubframeConfig_r10__rpdcch_Config_r10__pucch_Config_r10__fdd {
					long	 n1PUCCH_AN_P0_r10;
					long	*n1PUCCH_AN_P1_r10;	/* OPTIONAL */
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} fdd;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} pucch_Config_r10;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *rpdcch_Config_r10;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RN_SubframeConfig_r10_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_resourceAllocationType_r10_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_interleaving_r10_32;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_noInterleaving_r10_34;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RN_SubframeConfig_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_RN_SubframeConfig_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_RN_SubframeConfig_r10_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RN_SubframeConfig_r10_H_ */
#include <asn_internal.h>
