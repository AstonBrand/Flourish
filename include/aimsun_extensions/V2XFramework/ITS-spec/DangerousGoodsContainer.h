/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "CAM-PDU-Descriptions"
 * 	found in "LibIts-CAM-r1318.asn"
 */

#ifndef	_DangerousGoodsContainer_H_
#define	_DangerousGoodsContainer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DangerousGoodsBasic.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DangerousGoodsContainer */
typedef struct DangerousGoodsContainer {
	DangerousGoodsBasic_t	 dangerousGoodsBasic;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DangerousGoodsContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DangerousGoodsContainer;

#ifdef __cplusplus
}
#endif

#endif	/* _DangerousGoodsContainer_H_ */
#include <asn_internal.h>
