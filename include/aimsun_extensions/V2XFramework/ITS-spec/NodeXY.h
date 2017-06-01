/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "ISO_TS_19091.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_NodeXY_H_
#define	_NodeXY_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NodeOffsetPointXY.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NodeAttributeSetXY;

/* NodeXY */
typedef struct NodeXY {
	NodeOffsetPointXY_t	 delta;
	struct NodeAttributeSetXY	*attributes	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NodeXY_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NodeXY;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NodeAttributeSetXY.h"

#endif	/* _NodeXY_H_ */
#include <asn_internal.h>