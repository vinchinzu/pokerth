/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_AvatarRequestMessage_H_
#define	_AvatarRequestMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NonZeroId.h"
#include "AvatarHash.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* AvatarRequestMessage */
typedef struct AvatarRequestMessage {
	NonZeroId_t	 requestId;
	AvatarHash_t	 avatar;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AvatarRequestMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AvatarRequestMessage;

#ifdef __cplusplus
}
#endif

#endif	/* _AvatarRequestMessage_H_ */
#include <asn_internal.h>
