/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "ACSE1"
 * 	found in "../isoAcseLayer.asn"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_AEqualifier_H_
#define	_AEqualifier_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AEqualifierform2.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AEqualifier_PR {
	AEqualifier_PR_NOTHING,	/* No components present */
	AEqualifier_PR_aequalifierform2
} AEqualifier_PR;

/* AEqualifier */
typedef struct AEqualifier {
	AEqualifier_PR present;
	union AEqualifier_u {
		AEqualifierform2_t	 aequalifierform2;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AEqualifier_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AEqualifier;

#ifdef __cplusplus
}
#endif

#endif	/* _AEqualifier_H_ */