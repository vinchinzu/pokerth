/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_KickPetitionUpdateMessage_H_
#define	_KickPetitionUpdateMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NonZeroId.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* KickPetitionUpdateMessage */
typedef struct KickPetitionUpdateMessage {
	NonZeroId_t	 gameId;
	NonZeroId_t	 petitionId;
	long	 numVotesAgainstKicking;
	long	 numVotesInFavourOfKicking;
	long	 numVotesNeededToKick;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} KickPetitionUpdateMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_KickPetitionUpdateMessage;

#ifdef __cplusplus
}
#endif

#endif	/* _KickPetitionUpdateMessage_H_ */
#include <asn_internal.h>
