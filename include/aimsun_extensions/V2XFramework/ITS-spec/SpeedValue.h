/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "LibIts-ITS-Container-r1318.asn"
 */

#ifndef	_SpeedValue_H_
#define	_SpeedValue_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SpeedValue {
	SpeedValue_standstill	= 0,
	SpeedValue_oneCentimeterPerSec	= 1,
	SpeedValue_unavailable	= 16383
} e_SpeedValue;

/* SpeedValue */
typedef long	 SpeedValue_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SpeedValue;
asn_struct_free_f SpeedValue_free;
asn_struct_print_f SpeedValue_print;
asn_constr_check_f SpeedValue_constraint;
ber_type_decoder_f SpeedValue_decode_ber;
der_type_encoder_f SpeedValue_encode_der;
xer_type_decoder_f SpeedValue_decode_xer;
xer_type_encoder_f SpeedValue_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _SpeedValue_H_ */
#include <asn_internal.h>
