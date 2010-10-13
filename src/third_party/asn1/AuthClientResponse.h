/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_AuthClientResponse_H_
#define	_AuthClientResponse_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* AuthClientResponse */
typedef struct AuthClientResponse {
	OCTET_STRING_t	 clientResponse;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AuthClientResponse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AuthClientResponse;

#ifdef __cplusplus
}
#endif

#endif	/* _AuthClientResponse_H_ */
#include <asn_internal.h>
