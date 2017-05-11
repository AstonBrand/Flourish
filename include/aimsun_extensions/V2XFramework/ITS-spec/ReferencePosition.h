/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "LibIts-ITS-Container-r1318.asn"
 */

#ifndef	_ReferencePosition_H_
#define	_ReferencePosition_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Latitude.h"
#include "Longitude.h"
#include "PosConfidenceEllipse.h"
#include "Altitude.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ReferencePosition */
typedef struct ReferencePosition {
	Latitude_t	 latitude;
	Longitude_t	 longitude;
	PosConfidenceEllipse_t	 positionConfidenceEllipse;
	Altitude_t	 altitude;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ReferencePosition_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ReferencePosition;

#ifdef __cplusplus
}
#endif

#endif	/* _ReferencePosition_H_ */
#include <asn_internal.h>
