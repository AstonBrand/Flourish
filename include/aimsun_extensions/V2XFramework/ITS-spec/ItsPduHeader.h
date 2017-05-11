/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "LibIts-ITS-Container-r1318.asn"
 */

#ifndef	_ItsPduHeader_H_
#define	_ItsPduHeader_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "StationID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum protocolVersion {
	protocolVersion_currentVersion	= 1
} e_protocolVersion;
typedef enum messageID {
	messageID_denm	= 1,
	messageID_cam	= 2,
	messageID_poi	= 3,
	messageID_spatem	= 4,
	messageID_mapem	= 5,
	messageID_ivim	= 6,
	messageID_ev_rsr	= 7,
	messageID_tistpgtransaction	= 8,
	messageID_srem	= 9,
	messageID_ssem	= 10,
	messageID_evcsn	= 11
} e_messageID;

/* ItsPduHeader */
typedef struct ItsPduHeader {
	long	 protocolVersion;
	long	 messageID;
	StationID_t	 stationID;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ItsPduHeader_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ItsPduHeader;

#ifdef __cplusplus
}
#endif

#endif	/* _ItsPduHeader_H_ */
#include <asn_internal.h>
