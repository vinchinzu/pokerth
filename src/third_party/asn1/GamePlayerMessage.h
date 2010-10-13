/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_GamePlayerMessage_H_
#define	_GamePlayerMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NonZeroId.h"
#include "GamePlayerJoined.h"
#include "GamePlayerLeft.h"
#include "GameAdminChanged.h"
#include "RemovedFromGame.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum gamePlayerNotification_PR {
	gamePlayerNotification_PR_NOTHING,	/* No components present */
	gamePlayerNotification_PR_gamePlayerJoined,
	gamePlayerNotification_PR_gamePlayerLeft,
	gamePlayerNotification_PR_gameAdminChanged,
	gamePlayerNotification_PR_removedFromGame,
	/* Extensions may appear below */
	
} gamePlayerNotification_PR;

/* GamePlayerMessage */
typedef struct GamePlayerMessage {
	NonZeroId_t	 gameId;
	struct gamePlayerNotification {
		gamePlayerNotification_PR present;
		union GamePlayerMessage__gamePlayerNotification_u {
			GamePlayerJoined_t	 gamePlayerJoined;
			GamePlayerLeft_t	 gamePlayerLeft;
			GameAdminChanged_t	 gameAdminChanged;
			RemovedFromGame_t	 removedFromGame;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} gamePlayerNotification;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GamePlayerMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GamePlayerMessage;

#ifdef __cplusplus
}
#endif

#endif	/* _GamePlayerMessage_H_ */
#include <asn_internal.h>
