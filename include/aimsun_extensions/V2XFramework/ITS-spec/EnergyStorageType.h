/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "LibIts-ITS-Container-r1318.asn"
 */

#ifndef	_EnergyStorageType_H_
#define	_EnergyStorageType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EnergyStorageType {
	EnergyStorageType_hydrogenStorage	= 0,
	EnergyStorageType_electricEnergyStorage	= 1,
	EnergyStorageType_liquidPropaneGas	= 2,
	EnergyStorageType_compressedNaturalGas	= 3,
	EnergyStorageType_diesel	= 4,
	EnergyStorageType_gasoline	= 5,
	EnergyStorageType_ammonia	= 6
} e_EnergyStorageType;

/* EnergyStorageType */
typedef BIT_STRING_t	 EnergyStorageType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EnergyStorageType;
asn_struct_free_f EnergyStorageType_free;
asn_struct_print_f EnergyStorageType_print;
asn_constr_check_f EnergyStorageType_constraint;
ber_type_decoder_f EnergyStorageType_decode_ber;
der_type_encoder_f EnergyStorageType_encode_der;
xer_type_decoder_f EnergyStorageType_decode_xer;
xer_type_encoder_f EnergyStorageType_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _EnergyStorageType_H_ */
#include <asn_internal.h>
