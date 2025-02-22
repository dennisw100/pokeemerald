LilycoveCity_House2_MapScripts::
	.byte 0

LilycoveCity_House2_EventScript_FatMan::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM_REST, LilycoveCity_House2_EventScript_ReceivedRest
	msgbox LilycoveCity_House2_Text_NotAwakeYetHaveThis, MSGBOX_DEFAULT
	giveitem ITEM_TM_REST
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM_REST
	msgbox LilycoveCity_House2_Text_SleepIsEssential, MSGBOX_DEFAULT
	release
	end

LilycoveCity_House2_EventScript_ReceivedRest::
	msgbox LilycoveCity_House2_Text_SleepIsEssential, MSGBOX_DEFAULT
	release
	end

.ifdef FRENCH
	.include "data/maps/LilycoveCity_House2/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/LilycoveCity_House2/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/LilycoveCity_House2/text_es.inc"
.else
	.include "data/maps/LilycoveCity_House2/text.inc"
.endif
.endif
.endif
