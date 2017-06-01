/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "ISO_TS_19321.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_VcClass_H_
#define	_VcClass_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum VcClass {
	VcClass_classA	= 0,
	VcClass_classB	= 1,
	VcClass_classC	= 2,
	VcClass_classD	= 3,
	VcClass_classE	= 4,
	VcClass_classF	= 5,
	VcClass_classG	= 6,
	VcClass_classH	= 7
} e_VcClass;

/* VcClass */
typedef long	 VcClass_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VcClass;
asn_struct_free_f VcClass_free;
asn_struct_print_f VcClass_print;
asn_constr_check_f VcClass_constraint;
ber_type_decoder_f VcClass_decode_ber;
der_type_encoder_f VcClass_encode_der;
xer_type_decoder_f VcClass_decode_xer;
xer_type_encoder_f VcClass_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _VcClass_H_ */
#include <asn_internal.h>