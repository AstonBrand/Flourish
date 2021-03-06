/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "ISO_TS_19091.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_NodeAttributeXYList_H_
#define	_NodeAttributeXYList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NodeAttributeXY.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NodeAttributeXYList */
typedef struct NodeAttributeXYList {
	A_SEQUENCE_OF(NodeAttributeXY_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NodeAttributeXYList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NodeAttributeXYList;

#ifdef __cplusplus
}
#endif

#endif	/* _NodeAttributeXYList_H_ */
#include <asn_internal.h>
