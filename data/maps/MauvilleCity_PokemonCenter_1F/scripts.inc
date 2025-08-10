MauvilleCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

MauvilleCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_MAUVILLE_CITY
	call Common_EventScript_UpdateBrineyLocation
	goto MauvilleCity_PokemonCenter_1F_EventScript_SetMauvilleOldManGfx
	end

MauvilleCity_PokemonCenter_1F_EventScript_SetMauvilleOldManGfx::
	special SetMauvilleOldManObjEventGfx
	end

MauvilleCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_MAUVILLE_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_Woman1::
	msgbox MauvilleCity_PokemonCenter_1F_Text_ManOverThereSaysWeirdThings, MSGBOX_NPC
	end

MauvilleCity_PokemonCenter_1F_EventScript_Woman2::
	msgbox MauvilleCity_PokemonCenter_1F_Text_MyDataUpdatedFromRecordCorner, MSGBOX_NPC
	end

MauvilleCity_PokemonCenter_1F_EventScript_Youngster::
	msgbox MauvilleCity_PokemonCenter_1F_Text_RecordCornerSoundsFun, MSGBOX_NPC
	end

MauvilleCity_PokemonCenter_1F_Text_ManOverThereSaysWeirdThings:
	.string "That man over there, he says weird\n"
	.string "things!\p"
	.string "He's funny in a weird way.\n"
	.string "I doubt I'll forget about him!$"

MauvilleCity_PokemonCenter_1F_Text_MyDataUpdatedFromRecordCorner:
	.string "When I accessed the RECORD CORNER,\n"
	.string "the data for what's hot in DEWFORD\l"
	.string "got updated.\p"
	.string "Now that bit of data is the same\n"
	.string "as my friend's!$"

MauvilleCity_PokemonCenter_1F_Text_RecordCornerSoundsFun:
	.string "A RECORD CORNER opened upstairs in\n"
	.string "the POKéMON CENTER.\p"
	.string "I don't know what it's about, but it\n"
	.string "sounds fun. I'll go check it out!$"

Common_EventScript_PkmnCenterWonderLady::
    lock
    faceplayer
EventScript_PkmnCenterWonderLady_ReturnToStart::
    message gText_WonderLadyDoYouWantToUse
    waitmessage
    multichoice 18, 6, MULTI_WONDER_USE_OR_EXPLAIN, FALSE
	switch VAR_RESULT
    case 0, EventScript_PkmnCenterWonderLady_TryUse
    case 1, EventScript_PkmnCenterWonderLady_Explain
    case 2, EventScript_PkmnCenterGlobalLady_DeclineTrade
    case MULTI_B_PRESSED, EventScript_PkmnCenterGlobalLady_DeclineTrade
    end

EventScript_PkmnCenterWonderLady_TryUse::
	getpartysize
	goto_if_eq VAR_RESULT, 0, EventScript_PkmnCenterGlobalLady_DeclineTrade
    goto EventScript_PkmnCenterWonderLady_PickPokemonForWonderTrade
    end


EventScript_PkmnCenterWonderLady_Explain::
    msgbox gText_WonderLadyExplainService, MSGBOX_DEFAULT
    goto EventScript_PkmnCenterWonderLady_ReturnToStart


EventScript_PkmnCenterWonderLady_PickPokemonForWonderTrade::
    msgbox gText_PleaseSelectAPokemon, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	goto_if_ge VAR_0x8004, PARTY_SIZE, EventScript_PkmnCenterGlobalLady_DeclineTrade
	goto_if_ne VAR_0x8004, PARTY_NOTHING_CHOSEN, EventScript_PkmnCenterWonderLady_AreYouSure
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, EventScript_PkmnCenterGlobalLady_DeclineTrade
    end


EventScript_PkmnCenterWonderLady_AreYouSure::
    specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	bufferspeciesname STR_VAR_2, VAR_RESULT
    msgbox gText_WonderLadyAreYouSure, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, YES, EventScript_PkmnCenterWonderLady_DoWonder
    goto EventScript_PkmnCenterGlobalLady_DeclineTrade
    end


EventScript_PkmnCenterWonderLady_DoWonder::
    message gText_ConnectingToGlobalNetwork
    waitmessage
    delay 120
    playse SE_SAVE
    delay 20
	copyvar VAR_0x8005, VAR_0x8004
	special CreateWonderTradePokemon
	special DoInGameTradeScene
	waitstate
    goto EventScript_PkmnCenterGlobalLady_FinishTrade
    end

EventScript_PkmnCenterGlobalLady_DeclineTrade::
    msgbox gText_GlobalPleaseComeAgain, MSGBOX_DEFAULT
EventScript_PkmnCenterGlobalLady_FinishTrade::
    release
    end

gText_WonderLadyDoYouWantToUse::
    .string "Would you like to use the\n"
    .string "Wonder Trade service?$"

gText_WonderLadyExplainService::
    .string "The Wonder Trade service allows\n"
    .string "you to trade Pokémon with somebody,\l"
    .string "completely at random.\p"
    .string "What you get from a Wonder Trade\n"
    .string "will always be a surprise!\p"
    .string "The Pokémon come from all across the\n"
    .string "globe, so you may just find yourself\l"
    .string "with a rare species.\p"
    .string "Just be aware that there is no way\n"
    .string "to recover the Pokémon you trade away\l"
    .string "with our service.$"

gText_PleaseSelectAPokemon::
    .string "Please select a Pokémon to be\n"
    .string "traded.$"

gText_WonderLadyAreYouSure::
    .string "Are you sure you want to trade\n"
    .string "{STR_VAR_2}?$"

gText_ConnectingToGlobalNetwork::
    .string "Connecting to the Global Network.\n"
    .string "Please wait…$"

gText_GlobalPleaseComeAgain::
    .string "Please come again.$"
	