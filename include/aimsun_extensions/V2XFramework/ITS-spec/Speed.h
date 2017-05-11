/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "LibIts-ITS-Container-r1318.asn"
 */

#ifndef	_Speed_H_
#define	_Speed_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SpeedValue.h"
#include "SpeedConfidence.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Speed */
typedef struct Speed {
	SpeedValue_t	 speedValue;
	SpeedConfidence_t	 speedConfidence;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Speed_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Speed;

#ifdef __cplusplus
}
#endif

#endif	/* _Speed_H_ */
#include <asn_internal.h>
