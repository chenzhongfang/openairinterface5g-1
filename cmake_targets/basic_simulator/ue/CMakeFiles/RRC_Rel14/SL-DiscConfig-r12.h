/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_SL_DiscConfig_r12_H_
#define	_SL_DiscConfig_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>
#include "SL-TF-IndexPairList-r12b.h"
#include <BOOLEAN.h>
#include "SL-DiscTxConfigScheduled-r13.h"
#include "SL-DiscTxPoolDedicated-r13.h"
#include "ARFCN-ValueEUTRA-r9.h"
#include "SL-GapConfig-r13.h"
#include "SL-DiscSysInfoToReportFreqList-r13.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SL_DiscConfig_r12__discTxResources_r12_PR {
	SL_DiscConfig_r12__discTxResources_r12_PR_NOTHING,	/* No components present */
	SL_DiscConfig_r12__discTxResources_r12_PR_release,
	SL_DiscConfig_r12__discTxResources_r12_PR_setup
} SL_DiscConfig_r12__discTxResources_r12_PR;
typedef enum SL_DiscConfig_r12__discTxResources_r12__setup_PR {
	SL_DiscConfig_r12__discTxResources_r12__setup_PR_NOTHING,	/* No components present */
	SL_DiscConfig_r12__discTxResources_r12__setup_PR_scheduled_r12,
	SL_DiscConfig_r12__discTxResources_r12__setup_PR_ue_Selected_r12
} SL_DiscConfig_r12__discTxResources_r12__setup_PR;
typedef enum SL_DiscConfig_r12__ext1__discTF_IndexList_v1260_PR {
	SL_DiscConfig_r12__ext1__discTF_IndexList_v1260_PR_NOTHING,	/* No components present */
	SL_DiscConfig_r12__ext1__discTF_IndexList_v1260_PR_release,
	SL_DiscConfig_r12__ext1__discTF_IndexList_v1260_PR_setup
} SL_DiscConfig_r12__ext1__discTF_IndexList_v1260_PR;
typedef enum SL_DiscConfig_r12__ext2__discTxResourcesPS_r13_PR {
	SL_DiscConfig_r12__ext2__discTxResourcesPS_r13_PR_NOTHING,	/* No components present */
	SL_DiscConfig_r12__ext2__discTxResourcesPS_r13_PR_release,
	SL_DiscConfig_r12__ext2__discTxResourcesPS_r13_PR_setup
} SL_DiscConfig_r12__ext2__discTxResourcesPS_r13_PR;
typedef enum SL_DiscConfig_r12__ext2__discTxResourcesPS_r13__setup_PR {
	SL_DiscConfig_r12__ext2__discTxResourcesPS_r13__setup_PR_NOTHING,	/* No components present */
	SL_DiscConfig_r12__ext2__discTxResourcesPS_r13__setup_PR_scheduled_r13,
	SL_DiscConfig_r12__ext2__discTxResourcesPS_r13__setup_PR_ue_Selected_r13
} SL_DiscConfig_r12__ext2__discTxResourcesPS_r13__setup_PR;
typedef enum SL_DiscConfig_r12__ext2__discTxInterFreqInfo_r13_PR {
	SL_DiscConfig_r12__ext2__discTxInterFreqInfo_r13_PR_NOTHING,	/* No components present */
	SL_DiscConfig_r12__ext2__discTxInterFreqInfo_r13_PR_release,
	SL_DiscConfig_r12__ext2__discTxInterFreqInfo_r13_PR_setup
} SL_DiscConfig_r12__ext2__discTxInterFreqInfo_r13_PR;
typedef enum SL_DiscConfig_r12__ext2__discRxGapConfig_r13_PR {
	SL_DiscConfig_r12__ext2__discRxGapConfig_r13_PR_NOTHING,	/* No components present */
	SL_DiscConfig_r12__ext2__discRxGapConfig_r13_PR_release,
	SL_DiscConfig_r12__ext2__discRxGapConfig_r13_PR_setup
} SL_DiscConfig_r12__ext2__discRxGapConfig_r13_PR;
typedef enum SL_DiscConfig_r12__ext2__discTxGapConfig_r13_PR {
	SL_DiscConfig_r12__ext2__discTxGapConfig_r13_PR_NOTHING,	/* No components present */
	SL_DiscConfig_r12__ext2__discTxGapConfig_r13_PR_release,
	SL_DiscConfig_r12__ext2__discTxGapConfig_r13_PR_setup
} SL_DiscConfig_r12__ext2__discTxGapConfig_r13_PR;
typedef enum SL_DiscConfig_r12__ext2__discSysInfoToReportConfig_r13_PR {
	SL_DiscConfig_r12__ext2__discSysInfoToReportConfig_r13_PR_NOTHING,	/* No components present */
	SL_DiscConfig_r12__ext2__discSysInfoToReportConfig_r13_PR_release,
	SL_DiscConfig_r12__ext2__discSysInfoToReportConfig_r13_PR_setup
} SL_DiscConfig_r12__ext2__discSysInfoToReportConfig_r13_PR;

/* Forward declarations */
struct SL_DiscResourcePool_r12;
struct SL_TF_IndexPairList_r12;
struct SL_HoppingConfigDisc_r12;
struct SL_TxPoolToReleaseList_r12;
struct SL_DiscTxPoolToAddModList_r12;
struct SL_DiscTxRefCarrierDedicated_r13;
struct SL_DiscTxInfoInterFreqListAdd_r13;

/* SL-DiscConfig-r12 */
typedef struct SL_DiscConfig_r12 {
	struct SL_DiscConfig_r12__discTxResources_r12 {
		SL_DiscConfig_r12__discTxResources_r12_PR present;
		union SL_DiscConfig_r12__discTxResources_r12_u {
			NULL_t	 release;
			struct SL_DiscConfig_r12__discTxResources_r12__setup {
				SL_DiscConfig_r12__discTxResources_r12__setup_PR present;
				union SL_DiscConfig_r12__discTxResources_r12__setup_u {
					struct SL_DiscConfig_r12__discTxResources_r12__setup__scheduled_r12 {
						struct SL_DiscResourcePool_r12	*discTxConfig_r12;	/* OPTIONAL */
						struct SL_TF_IndexPairList_r12	*discTF_IndexList_r12;	/* OPTIONAL */
						struct SL_HoppingConfigDisc_r12	*discHoppingConfig_r12;	/* OPTIONAL */
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} scheduled_r12;
					struct SL_DiscConfig_r12__discTxResources_r12__setup__ue_Selected_r12 {
						struct SL_DiscConfig_r12__discTxResources_r12__setup__ue_Selected_r12__discTxPoolDedicated_r12 {
							struct SL_TxPoolToReleaseList_r12	*poolToReleaseList_r12;	/* OPTIONAL */
							struct SL_DiscTxPoolToAddModList_r12	*poolToAddModList_r12;	/* OPTIONAL */
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} *discTxPoolDedicated_r12;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} ue_Selected_r12;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *discTxResources_r12;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct SL_DiscConfig_r12__ext1 {
		struct SL_DiscConfig_r12__ext1__discTF_IndexList_v1260 {
			SL_DiscConfig_r12__ext1__discTF_IndexList_v1260_PR present;
			union SL_DiscConfig_r12__ext1__discTF_IndexList_v1260_u {
				NULL_t	 release;
				struct SL_DiscConfig_r12__ext1__discTF_IndexList_v1260__setup {
					SL_TF_IndexPairList_r12b_t	 discTF_IndexList_r12b;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *discTF_IndexList_v1260;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct SL_DiscConfig_r12__ext2 {
		struct SL_DiscConfig_r12__ext2__discTxResourcesPS_r13 {
			SL_DiscConfig_r12__ext2__discTxResourcesPS_r13_PR present;
			union SL_DiscConfig_r12__ext2__discTxResourcesPS_r13_u {
				NULL_t	 release;
				struct SL_DiscConfig_r12__ext2__discTxResourcesPS_r13__setup {
					SL_DiscConfig_r12__ext2__discTxResourcesPS_r13__setup_PR present;
					union SL_DiscConfig_r12__ext2__discTxResourcesPS_r13__setup_u {
						SL_DiscTxConfigScheduled_r13_t	 scheduled_r13;
						struct SL_DiscConfig_r12__ext2__discTxResourcesPS_r13__setup__ue_Selected_r13 {
							SL_DiscTxPoolDedicated_r13_t	 discTxPoolPS_Dedicated_r13;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} ue_Selected_r13;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *discTxResourcesPS_r13;
		struct SL_DiscConfig_r12__ext2__discTxInterFreqInfo_r13 {
			SL_DiscConfig_r12__ext2__discTxInterFreqInfo_r13_PR present;
			union SL_DiscConfig_r12__ext2__discTxInterFreqInfo_r13_u {
				NULL_t	 release;
				struct SL_DiscConfig_r12__ext2__discTxInterFreqInfo_r13__setup {
					ARFCN_ValueEUTRA_r9_t	*discTxCarrierFreq_r13;	/* OPTIONAL */
					struct SL_DiscTxRefCarrierDedicated_r13	*discTxRefCarrierDedicated_r13;	/* OPTIONAL */
					struct SL_DiscTxInfoInterFreqListAdd_r13	*discTxInfoInterFreqListAdd_r13;	/* OPTIONAL */
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *discTxInterFreqInfo_r13;
		BOOLEAN_t	*gapRequestsAllowedDedicated_r13;	/* OPTIONAL */
		struct SL_DiscConfig_r12__ext2__discRxGapConfig_r13 {
			SL_DiscConfig_r12__ext2__discRxGapConfig_r13_PR present;
			union SL_DiscConfig_r12__ext2__discRxGapConfig_r13_u {
				NULL_t	 release;
				SL_GapConfig_r13_t	 setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *discRxGapConfig_r13;
		struct SL_DiscConfig_r12__ext2__discTxGapConfig_r13 {
			SL_DiscConfig_r12__ext2__discTxGapConfig_r13_PR present;
			union SL_DiscConfig_r12__ext2__discTxGapConfig_r13_u {
				NULL_t	 release;
				SL_GapConfig_r13_t	 setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *discTxGapConfig_r13;
		struct SL_DiscConfig_r12__ext2__discSysInfoToReportConfig_r13 {
			SL_DiscConfig_r12__ext2__discSysInfoToReportConfig_r13_PR present;
			union SL_DiscConfig_r12__ext2__discSysInfoToReportConfig_r13_u {
				NULL_t	 release;
				SL_DiscSysInfoToReportFreqList_r13_t	 setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *discSysInfoToReportConfig_r13;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_DiscConfig_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_DiscConfig_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_DiscConfig_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_DiscConfig_r12_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SL-DiscResourcePool-r12.h"
#include "SL-TF-IndexPairList-r12.h"
#include "SL-HoppingConfigDisc-r12.h"
#include "SL-TxPoolToReleaseList-r12.h"
#include "SL-DiscTxPoolToAddModList-r12.h"
#include "SL-DiscTxRefCarrierDedicated-r13.h"
#include "SL-DiscTxInfoInterFreqListAdd-r13.h"

#endif	/* _SL_DiscConfig_r12_H_ */
#include <asn_internal.h>
