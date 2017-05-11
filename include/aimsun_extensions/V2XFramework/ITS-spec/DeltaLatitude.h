/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "LibIts-ITS-Container-r1318.asn"
 */

#ifndef	_DeltaLatitude_H_
#define	_DeltaLatitude_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DeltaLatitude {
	DeltaLatitude_oneMicrodegreeNorth	= 10,
	DeltaLatitude_oneMicrodegreeSouth	= -10,
	DeltaLatitude_unavailable	= 131072
} e_DeltaLatitude;

/* DeltaLatitude */
typedef long	 DeltaLatitude_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DeltaLatitude;
asn_struct_free_f DeltaLatitude_free;
asn_struct_print_f DeltaLatitude_print;
asn_constr_check_f DeltaLatitude_constraint;
ber_type_decoder_f DeltaLatitude_decode_ber;
der_type_encoder_f DeltaLatitude_encode_der;
xer_type_decoder_f DeltaLatitude_decode_xer;
xer_type_encoder_f DeltaLatitude_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _DeltaLatitude_H_ */
#include <asn_internal.h>
