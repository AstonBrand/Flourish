/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "LibIts-ITS-Container-r1318.asn"
 */

#ifndef	_ActionID_H_
#define	_ActionID_H_


#include <asn_application.h>

/* Including external dependencies */
#include "StationID.h"
#include "SequenceNumber.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ActionID */
typedef struct ActionID {
	StationID_t	 originatingStationID;
	SequenceNumber_t	 sequenceNumber;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ActionID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ActionID;

#ifdef __cplusplus
}
#endif

#endif	/* _ActionID_H_ */
#include <asn_internal.h>
