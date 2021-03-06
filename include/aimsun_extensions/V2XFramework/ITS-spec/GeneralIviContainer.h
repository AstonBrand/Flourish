/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "ISO_TS_19321.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_GeneralIviContainer_H_
#define	_GeneralIviContainer_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GicPart;

/* GeneralIviContainer */
typedef struct GeneralIviContainer {
	A_SEQUENCE_OF(struct GicPart) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GeneralIviContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GeneralIviContainer;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GicPart.h"

#endif	/* _GeneralIviContainer_H_ */
#include <asn_internal.h>
