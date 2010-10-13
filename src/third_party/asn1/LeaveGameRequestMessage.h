/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_LeaveGameRequestMessage_H_
#define	_LeaveGameRequestMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NonZeroId.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LeaveGameRequestMessage */
typedef struct LeaveGameRequestMessage {
	NonZeroId_t	 gameId;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LeaveGameRequestMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LeaveGameRequestMessage;

#ifdef __cplusplus
}
#endif

#endif	/* _LeaveGameRequestMessage_H_ */
#include <asn_internal.h>
