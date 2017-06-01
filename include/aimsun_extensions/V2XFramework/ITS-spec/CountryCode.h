/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AVIAEINumberingAndDataStructures"
 * 	found in "ISO_TS_14816.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_CountryCode_H_
#define	_CountryCode_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CountryCode */
typedef BIT_STRING_t	 CountryCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CountryCode;
asn_struct_free_f CountryCode_free;
asn_struct_print_f CountryCode_print;
asn_constr_check_f CountryCode_constraint;
ber_type_decoder_f CountryCode_decode_ber;
der_type_encoder_f CountryCode_encode_der;
xer_type_decoder_f CountryCode_decode_xer;
xer_type_encoder_f CountryCode_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _CountryCode_H_ */
#include <asn_internal.h>